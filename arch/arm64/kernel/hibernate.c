// SPDX-License-Identifier: GPL-2.0-only
/*:
 * Hibernate support specific for ARM64
 *
 * Derived from work on ARM hibernation support by:
 *
 * Ubuntu project, hibernation support for mach-dove
 * Copyright (C) 2010 Nokia Corporation (Hiroshi Doyu)
 * Copyright (C) 2010 Texas Instruments, Inc. (Teerth Reddy et al.)
 *  https://lkml.org/lkml/2010/6/18/4
 *  https://lists.linux-foundation.org/pipermail/linux-pm/2010-June/027422.html
 *  https://patchwork.kernel.org/patch/96442/
 *
 * Copyright (C) 2006 Rafael J. Wysocki <rjw@sisk.pl>
 */
#define pr_fmt(x) "hibernate: " x
#include <linux/cpu.h>
#include <linux/kvm_host.h>
#include <linux/mm.h>
#include <linux/pm.h>
#include <linux/sched.h>
#include <linux/suspend.h>
#include <linux/utsname.h>

#include <asm/barrier.h>
#include <asm/cacheflush.h>
#include <asm/cputype.h>
#include <asm/daifflags.h>
#include <asm/irqflags.h>
#include <asm/kexec.h>
#include <asm/memory.h>
#include <asm/mmu_context.h>
#include <asm/mte.h>
#include <asm/pgalloc.h>
#include <asm/pgtable-hwdef.h>
#include <asm/sections.h>
#include <asm/smp.h>
#include <asm/smp_plat.h>
#include <asm/suspend.h>
#include <asm/sysreg.h>
#include <asm/virt.h>

/*
 * Hibernate core relies on this value being 0 on resume, and marks it
 * __nosavedata assuming it will keep the resume kernel's '0' value. This
 * doesn't happen with either KASLR.
 *
 * defined as "__visible int in_suspend __nosavedata" in
 * kernel/power/hibernate.c
 */
extern int in_suspend;

/* Do we need to reset el2? */
#define el2_reset_needed() (is_hyp_mode_available() && !is_kernel_in_hyp_mode())

/* temporary el2 vectors in the __hibernate_exit_text section. */
extern char hibernate_el2_vectors[];

/* hyp-stub vectors, used to restore el2 during resume from hibernate. */
extern char __hyp_stub_vectors[];

/*
 * The logical cpu number we should resume on, initialised to a non-cpu
 * number.
 */
static int sleep_cpu = -EINVAL;

/*
 * Values that may not change over hibernate/resume. We put the build number
 * and date in here so that we guarantee not to resume with a different
 * kernel.
 */
struct arch_hibernate_hdr_invariants {
	char		uts_version[__NEW_UTS_LEN + 1];
};

/* These values need to be know across a hibernate/restore. */
static struct arch_hibernate_hdr {
	struct arch_hibernate_hdr_invariants invariants;

	/* These are needed to find the relocated kernel if built with kaslr */
	phys_addr_t	ttbr1_el1;
	void		(*reenter_kernel)(void);

	/*
	 * We need to know where the __hyp_stub_vectors are after restore to
	 * re-configure el2.
	 */
	phys_addr_t	__hyp_stub_vectors;

	u64		sleep_cpu_mpidr;
} resume_hdr;

static inline void arch_hdr_invariants(struct arch_hibernate_hdr_invariants *i)
{
	memset(i, 0, sizeof(*i));
	memcpy(i->uts_version, init_utsname()->version, sizeof(i->uts_version));
}

int pfn_is_nosave(unsigned long pfn)
{
	unsigned long nosave_begin_pfn = sym_to_pfn(&__nosave_begin);
	unsigned long nosave_end_pfn = sym_to_pfn(&__nosave_end - 1);

	return ((pfn >= nosave_begin_pfn) && (pfn <= nosave_end_pfn)) ||
		crash_is_nosave(pfn);
}

void notrace save_processor_state(void)
{
	WARN_ON(num_online_cpus() != 1);
}

void notrace restore_processor_state(void)
{
}

int arch_hibernation_header_save(void *addr, unsigned int max_size)
{
	struct arch_hibernate_hdr *hdr = addr;

	if (max_size < sizeof(*hdr))
		return -EOVERFLOW;

	arch_hdr_invariants(&hdr->invariants);
	hdr->ttbr1_el1		= __pa_symbol(swapper_pg_dir);
	hdr->reenter_kernel	= _cpu_resume;

	/* We can't use __hyp_get_vectors() because kvm may still be loaded */
	if (el2_reset_needed())
		hdr->__hyp_stub_vectors = __pa_symbol(__hyp_stub_vectors);
	else
		hdr->__hyp_stub_vectors = 0;

	/* Save the mpidr of the cpu we called cpu_suspend() on... */
	if (sleep_cpu < 0) {
		pr_err("Failing to hibernate on an unknown CPU.\n");
		return -ENODEV;
	}
	hdr->sleep_cpu_mpidr = cpu_logical_map(sleep_cpu);
	pr_info("Hibernating on CPU %d [mpidr:0x%llx]\n", sleep_cpu,
		hdr->sleep_cpu_mpidr);

	return 0;
}
EXPORT_SYMBOL(arch_hibernation_header_save);

int arch_hibernation_header_restore(void *addr)
{
	int ret;
	struct arch_hibernate_hdr_invariants invariants;
	struct arch_hibernate_hdr *hdr = addr;

	arch_hdr_invariants(&invariants);
	if (memcmp(&hdr->invariants, &invariants, sizeof(invariants))) {
		pr_crit("Hibernate image not generated by this kernel!\n");
		return -EINVAL;
	}

	sleep_cpu = get_logical_index(hdr->sleep_cpu_mpidr);
	pr_info("Hibernated on CPU %d [mpidr:0x%llx]\n", sleep_cpu,
		hdr->sleep_cpu_mpidr);
	if (sleep_cpu < 0) {
		pr_crit("Hibernated on a CPU not known to this kernel!\n");
		sleep_cpu = -EINVAL;
		return -EINVAL;
	}

	ret = bringup_hibernate_cpu(sleep_cpu);
	if (ret) {
		sleep_cpu = -EINVAL;
		return ret;
	}

	resume_hdr = *hdr;

	return 0;
}
EXPORT_SYMBOL(arch_hibernation_header_restore);

static int trans_pgd_map_page(pgd_t *trans_pgd, void *page,
		       unsigned long dst_addr,
		       pgprot_t pgprot)
{
	pgd_t *pgdp;
	p4d_t *p4dp;
	pud_t *pudp;
	pmd_t *pmdp;
	pte_t *ptep;

	pgdp = pgd_offset_pgd(trans_pgd, dst_addr);
	if (pgd_none(READ_ONCE(*pgdp))) {
		pudp = (void *)get_safe_page(GFP_ATOMIC);
		if (!pudp)
			return -ENOMEM;
		pgd_populate(&init_mm, pgdp, pudp);
	}

	p4dp = p4d_offset(pgdp, dst_addr);
	if (p4d_none(READ_ONCE(*p4dp))) {
		pudp = (void *)get_safe_page(GFP_ATOMIC);
		if (!pudp)
			return -ENOMEM;
		p4d_populate(&init_mm, p4dp, pudp);
	}

	pudp = pud_offset(p4dp, dst_addr);
	if (pud_none(READ_ONCE(*pudp))) {
		pmdp = (void *)get_safe_page(GFP_ATOMIC);
		if (!pmdp)
			return -ENOMEM;
		pud_populate(&init_mm, pudp, pmdp);
	}

	pmdp = pmd_offset(pudp, dst_addr);
	if (pmd_none(READ_ONCE(*pmdp))) {
		ptep = (void *)get_safe_page(GFP_ATOMIC);
		if (!ptep)
			return -ENOMEM;
		pmd_populate_kernel(&init_mm, pmdp, ptep);
	}

	ptep = pte_offset_kernel(pmdp, dst_addr);
	set_pte(ptep, pfn_pte(virt_to_pfn(page), PAGE_KERNEL_EXEC));

	return 0;
}

/*
 * Copies length bytes, starting at src_start into an new page,
 * perform cache maintenance, then maps it at the specified address low
 * address as executable.
 *
 * This is used by hibernate to copy the code it needs to execute when
 * overwriting the kernel text. This function generates a new set of page
 * tables, which it loads into ttbr0.
 *
 * Length is provided as we probably only want 4K of data, even on a 64K
 * page system.
 */
static int create_safe_exec_page(void *src_start, size_t length,
				 unsigned long dst_addr,
				 phys_addr_t *phys_dst_addr)
{
	void *page = (void *)get_safe_page(GFP_ATOMIC);
	pgd_t *trans_pgd;
	int rc;

	if (!page)
		return -ENOMEM;

	memcpy(page, src_start, length);
	__flush_icache_range((unsigned long)page, (unsigned long)page + length);

	trans_pgd = (void *)get_safe_page(GFP_ATOMIC);
	if (!trans_pgd)
		return -ENOMEM;

	rc = trans_pgd_map_page(trans_pgd, page, dst_addr,
				PAGE_KERNEL_EXEC);
	if (rc)
		return rc;

	/*
	 * Load our new page tables. A strict BBM approach requires that we
	 * ensure that TLBs are free of any entries that may overlap with the
	 * global mappings we are about to install.
	 *
	 * For a real hibernate/resume cycle TTBR0 currently points to a zero
	 * page, but TLBs may contain stale ASID-tagged entries (e.g. for EFI
	 * runtime services), while for a userspace-driven test_resume cycle it
	 * points to userspace page tables (and we must point it at a zero page
	 * ourselves). Elsewhere we only (un)install the idmap with preemption
	 * disabled, so T0SZ should be as required regardless.
	 */
	cpu_set_reserved_ttbr0();
	local_flush_tlb_all();
	write_sysreg(phys_to_ttbr(virt_to_phys(trans_pgd)), ttbr0_el1);
	isb();

	*phys_dst_addr = virt_to_phys(page);

	return 0;
}

#define dcache_clean_range(start, end)	__flush_dcache_area(start, (end - start))

#ifdef CONFIG_ARM64_MTE

static DEFINE_XARRAY(mte_pages);

static int save_tags(struct page *page, unsigned long pfn)
{
	void *tag_storage, *ret;

	tag_storage = mte_allocate_tag_storage();
	if (!tag_storage)
		return -ENOMEM;

	mte_save_page_tags(page_address(page), tag_storage);

	ret = xa_store(&mte_pages, pfn, tag_storage, GFP_KERNEL);
	if (WARN(xa_is_err(ret), "Failed to store MTE tags")) {
		mte_free_tag_storage(tag_storage);
		return xa_err(ret);
	} else if (WARN(ret, "swsusp: %s: Duplicate entry", __func__)) {
		mte_free_tag_storage(ret);
	}

	return 0;
}

static void swsusp_mte_free_storage(void)
{
	XA_STATE(xa_state, &mte_pages, 0);
	void *tags;

	xa_lock(&mte_pages);
	xas_for_each(&xa_state, tags, ULONG_MAX) {
		mte_free_tag_storage(tags);
	}
	xa_unlock(&mte_pages);

	xa_destroy(&mte_pages);
}

static int swsusp_mte_save_tags(void)
{
	struct zone *zone;
	unsigned long pfn, max_zone_pfn;
	int ret = 0;
	int n = 0;

	if (!system_supports_mte())
		return 0;

	for_each_populated_zone(zone) {
		max_zone_pfn = zone_end_pfn(zone);
		for (pfn = zone->zone_start_pfn; pfn < max_zone_pfn; pfn++) {
			struct page *page = pfn_to_online_page(pfn);

			if (!page)
				continue;

			if (!test_bit(PG_mte_tagged, &page->flags))
				continue;

			ret = save_tags(page, pfn);
			if (ret) {
				swsusp_mte_free_storage();
				goto out;
			}

			n++;
		}
	}
	pr_info("Saved %d MTE pages\n", n);

out:
	return ret;
}

static void swsusp_mte_restore_tags(void)
{
	XA_STATE(xa_state, &mte_pages, 0);
	int n = 0;
	void *tags;

	xa_lock(&mte_pages);
	xas_for_each(&xa_state, tags, ULONG_MAX) {
		unsigned long pfn = xa_state.xa_index;
		struct page *page = pfn_to_online_page(pfn);

		/*
		 * It is not required to invoke page_kasan_tag_reset(page)
		 * at this point since the tags stored in page->flags are
		 * already restored.
		 */
		mte_restore_page_tags(page_address(page), tags);

		mte_free_tag_storage(tags);
		n++;
	}
	xa_unlock(&mte_pages);

	pr_info("Restored %d MTE pages\n", n);

	xa_destroy(&mte_pages);
}

#else	/* CONFIG_ARM64_MTE */

static int swsusp_mte_save_tags(void)
{
	return 0;
}

static void swsusp_mte_restore_tags(void)
{
}

#endif	/* CONFIG_ARM64_MTE */

int swsusp_arch_suspend(void)
{
	int ret = 0;
	unsigned long flags;
	struct sleep_stack_data state;

	if (cpus_are_stuck_in_kernel()) {
		pr_err("Can't hibernate: no mechanism to offline secondary CPUs.\n");
		return -EBUSY;
	}

	flags = local_daif_save();

	if (__cpu_suspend_enter(&state)) {
		/* make the crash dump kernel image visible/saveable */
		crash_prepare_suspend();

		ret = swsusp_mte_save_tags();
		if (ret)
			return ret;

		sleep_cpu = smp_processor_id();
		ret = swsusp_save();
	} else {
		/* Clean kernel core startup/idle code to PoC*/
		dcache_clean_range(__mmuoff_data_start, __mmuoff_data_end);
		dcache_clean_range(__idmap_text_start, __idmap_text_end);

		/* Clean kvm setup code to PoC? */
		if (el2_reset_needed()) {
			dcache_clean_range(__hyp_idmap_text_start, __hyp_idmap_text_end);
			dcache_clean_range(__hyp_text_start, __hyp_text_end);
		}

		swsusp_mte_restore_tags();

		/* make the crash dump kernel image protected again */
		crash_post_resume();

		/*
		 * Tell the hibernation core that we've just restored
		 * the memory
		 */
		in_suspend = 0;

		sleep_cpu = -EINVAL;
		__cpu_suspend_exit();

		/*
		 * Just in case the boot kernel did turn the SSBD
		 * mitigation off behind our back, let's set the state
		 * to what we expect it to be.
		 */
		spectre_v4_enable_mitigation(NULL);
	}

	local_daif_restore(flags);

	return ret;
}

static void _copy_pte(pte_t *dst_ptep, pte_t *src_ptep, unsigned long addr)
{
	pte_t pte = READ_ONCE(*src_ptep);

	if (pte_valid(pte)) {
		/*
		 * Resume will overwrite areas that may be marked
		 * read only (code, rodata). Clear the RDONLY bit from
		 * the temporary mappings we use during restore.
		 */
		set_pte(dst_ptep, pte_mkwrite(pte));
	} else if (debug_pagealloc_enabled() && !pte_none(pte)) {
		/*
		 * debug_pagealloc will removed the PTE_VALID bit if
		 * the page isn't in use by the resume kernel. It may have
		 * been in use by the original kernel, in which case we need
		 * to put it back in our copy to do the restore.
		 *
		 * Before marking this entry valid, check the pfn should
		 * be mapped.
		 */
		BUG_ON(!pfn_valid(pte_pfn(pte)));

		set_pte(dst_ptep, pte_mkpresent(pte_mkwrite(pte)));
	}
}

static int copy_pte(pmd_t *dst_pmdp, pmd_t *src_pmdp, unsigned long start,
		    unsigned long end)
{
	pte_t *src_ptep;
	pte_t *dst_ptep;
	unsigned long addr = start;

	dst_ptep = (pte_t *)get_safe_page(GFP_ATOMIC);
	if (!dst_ptep)
		return -ENOMEM;
	pmd_populate_kernel(&init_mm, dst_pmdp, dst_ptep);
	dst_ptep = pte_offset_kernel(dst_pmdp, start);

	src_ptep = pte_offset_kernel(src_pmdp, start);
	do {
		_copy_pte(dst_ptep, src_ptep, addr);
	} while (dst_ptep++, src_ptep++, addr += PAGE_SIZE, addr != end);

	return 0;
}

static int copy_pmd(pud_t *dst_pudp, pud_t *src_pudp, unsigned long start,
		    unsigned long end)
{
	pmd_t *src_pmdp;
	pmd_t *dst_pmdp;
	unsigned long next;
	unsigned long addr = start;

	if (pud_none(READ_ONCE(*dst_pudp))) {
		dst_pmdp = (pmd_t *)get_safe_page(GFP_ATOMIC);
		if (!dst_pmdp)
			return -ENOMEM;
		pud_populate(&init_mm, dst_pudp, dst_pmdp);
	}
	dst_pmdp = pmd_offset(dst_pudp, start);

	src_pmdp = pmd_offset(src_pudp, start);
	do {
		pmd_t pmd = READ_ONCE(*src_pmdp);

		next = pmd_addr_end(addr, end);
		if (pmd_none(pmd))
			continue;
		if (pmd_table(pmd)) {
			if (copy_pte(dst_pmdp, src_pmdp, addr, next))
				return -ENOMEM;
		} else {
			set_pmd(dst_pmdp,
				__pmd(pmd_val(pmd) & ~PMD_SECT_RDONLY));
		}
	} while (dst_pmdp++, src_pmdp++, addr = next, addr != end);

	return 0;
}

static int copy_pud(p4d_t *dst_p4dp, p4d_t *src_p4dp, unsigned long start,
		    unsigned long end)
{
	pud_t *dst_pudp;
	pud_t *src_pudp;
	unsigned long next;
	unsigned long addr = start;

	if (p4d_none(READ_ONCE(*dst_p4dp))) {
		dst_pudp = (pud_t *)get_safe_page(GFP_ATOMIC);
		if (!dst_pudp)
			return -ENOMEM;
		p4d_populate(&init_mm, dst_p4dp, dst_pudp);
	}
	dst_pudp = pud_offset(dst_p4dp, start);

	src_pudp = pud_offset(src_p4dp, start);
	do {
		pud_t pud = READ_ONCE(*src_pudp);

		next = pud_addr_end(addr, end);
		if (pud_none(pud))
			continue;
		if (pud_table(pud)) {
			if (copy_pmd(dst_pudp, src_pudp, addr, next))
				return -ENOMEM;
		} else {
			set_pud(dst_pudp,
				__pud(pud_val(pud) & ~PUD_SECT_RDONLY));
		}
	} while (dst_pudp++, src_pudp++, addr = next, addr != end);

	return 0;
}

static int copy_p4d(pgd_t *dst_pgdp, pgd_t *src_pgdp, unsigned long start,
		    unsigned long end)
{
	p4d_t *dst_p4dp;
	p4d_t *src_p4dp;
	unsigned long next;
	unsigned long addr = start;

	dst_p4dp = p4d_offset(dst_pgdp, start);
	src_p4dp = p4d_offset(src_pgdp, start);
	do {
		next = p4d_addr_end(addr, end);
		if (p4d_none(READ_ONCE(*src_p4dp)))
			continue;
		if (copy_pud(dst_p4dp, src_p4dp, addr, next))
			return -ENOMEM;
	} while (dst_p4dp++, src_p4dp++, addr = next, addr != end);

	return 0;
}

static int copy_page_tables(pgd_t *dst_pgdp, unsigned long start,
			    unsigned long end)
{
	unsigned long next;
	unsigned long addr = start;
	pgd_t *src_pgdp = pgd_offset_k(start);

	dst_pgdp = pgd_offset_pgd(dst_pgdp, start);
	do {
		next = pgd_addr_end(addr, end);
		if (pgd_none(READ_ONCE(*src_pgdp)))
			continue;
		if (copy_p4d(dst_pgdp, src_pgdp, addr, next))
			return -ENOMEM;
	} while (dst_pgdp++, src_pgdp++, addr = next, addr != end);

	return 0;
}

static int trans_pgd_create_copy(pgd_t **dst_pgdp, unsigned long start,
			  unsigned long end)
{
	int rc;
	pgd_t *trans_pgd = (pgd_t *)get_safe_page(GFP_ATOMIC);

	if (!trans_pgd) {
		pr_err("Failed to allocate memory for temporary page tables.\n");
		return -ENOMEM;
	}

	rc = copy_page_tables(trans_pgd, start, end);
	if (!rc)
		*dst_pgdp = trans_pgd;

	return rc;
}

/*
 * Setup then Resume from the hibernate image using swsusp_arch_suspend_exit().
 *
 * Memory allocated by get_safe_page() will be dealt with by the hibernate code,
 * we don't need to free it here.
 */
int swsusp_arch_resume(void)
{
	int rc;
	void *zero_page;
	size_t exit_size;
	pgd_t *tmp_pg_dir;
	phys_addr_t phys_hibernate_exit;
	void __noreturn (*hibernate_exit)(phys_addr_t, phys_addr_t, void *,
					  void *, phys_addr_t, phys_addr_t);

	/*
	 * Restoring the memory image will overwrite the ttbr1 page tables.
	 * Create a second copy of just the linear map, and use this when
	 * restoring.
	 */
	rc = trans_pgd_create_copy(&tmp_pg_dir, PAGE_OFFSET, PAGE_END);
	if (rc)
		return rc;

	/*
	 * We need a zero page that is zero before & after resume in order to
	 * to break before make on the ttbr1 page tables.
	 */
	zero_page = (void *)get_safe_page(GFP_ATOMIC);
	if (!zero_page) {
		pr_err("Failed to allocate zero page.\n");
		return -ENOMEM;
	}

	/*
	 * Locate the exit code in the bottom-but-one page, so that *NULL
	 * still has disastrous affects.
	 */
	hibernate_exit = (void *)PAGE_SIZE;
	exit_size = __hibernate_exit_text_end - __hibernate_exit_text_start;
	/*
	 * Copy swsusp_arch_suspend_exit() to a safe page. This will generate
	 * a new set of ttbr0 page tables and load them.
	 */
	rc = create_safe_exec_page(__hibernate_exit_text_start, exit_size,
				   (unsigned long)hibernate_exit,
				   &phys_hibernate_exit);
	if (rc) {
		pr_err("Failed to create safe executable page for hibernate_exit code.\n");
		return rc;
	}

	/*
	 * The hibernate exit text contains a set of el2 vectors, that will
	 * be executed at el2 with the mmu off in order to reload hyp-stub.
	 */
	__flush_dcache_area(hibernate_exit, exit_size);

	/*
	 * KASLR will cause the el2 vectors to be in a different location in
	 * the resumed kernel. Load hibernate's temporary copy into el2.
	 *
	 * We can skip this step if we booted at EL1, or are running with VHE.
	 */
	if (el2_reset_needed()) {
		phys_addr_t el2_vectors = phys_hibernate_exit;  /* base */
		el2_vectors += hibernate_el2_vectors -
			       __hibernate_exit_text_start;     /* offset */

		__hyp_set_vectors(el2_vectors);
	}

	hibernate_exit(virt_to_phys(tmp_pg_dir), resume_hdr.ttbr1_el1,
		       resume_hdr.reenter_kernel, restore_pblist,
		       resume_hdr.__hyp_stub_vectors, virt_to_phys(zero_page));

	return 0;
}

int hibernate_resume_nonboot_cpu_disable(void)
{
	if (sleep_cpu < 0) {
		pr_err("Failing to resume from hibernate on an unknown CPU.\n");
		return -ENODEV;
	}

	return freeze_secondary_cpus(sleep_cpu);
}

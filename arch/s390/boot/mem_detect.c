// SPDX-License-Identifier: GPL-2.0
#include <linux/errno.h>
#include <linux/init.h>
#include <asm/sclp.h>
#include <asm/sections.h>
#include <asm/mem_detect.h>
#include <asm/sparsemem.h>
#include "compressed/decompressor.h"
#include "boot.h"

unsigned long __bootdata(max_physmem_end);
struct mem_detect_info __bootdata(mem_detect);

/* up to 256 storage elements, 1020 subincrements each */
#define ENTRIES_EXTENDED_MAX						       \
	(256 * (1020 / 2) * sizeof(struct mem_detect_block))

/*
 * To avoid corrupting old kernel memory during dump, find lowest memory
 * chunk possible either right after the kernel end (decompressed kernel) or
 * after initrd (if it is present and there is no hole between the kernel end
 * and initrd)
 */
static void *mem_detect_alloc_extended(void)
{
	unsigned long offset = ALIGN(mem_safe_offset(), sizeof(u64));

	if (IS_ENABLED(CONFIG_BLK_DEV_INITRD) && INITRD_START && INITRD_SIZE &&
	    INITRD_START < offset + ENTRIES_EXTENDED_MAX)
		offset = ALIGN(INITRD_START + INITRD_SIZE, sizeof(u64));

	return (void *)offset;
}

static struct mem_detect_block *__get_mem_detect_block_ptr(u32 n)
{
	if (n < MEM_INLINED_ENTRIES)
		return &mem_detect.entries[n];
	if (unlikely(!mem_detect.entries_extended))
		mem_detect.entries_extended = mem_detect_alloc_extended();
	return &mem_detect.entries_extended[n - MEM_INLINED_ENTRIES];
}

/*
 * sequential calls to add_mem_detect_block with adjacent memory areas
 * are merged together into single memory block.
 */
void add_mem_detect_block(u64 start, u64 end)
{
	struct mem_detect_block *block;

	if (mem_detect.count) {
		block = __get_mem_detect_block_ptr(mem_detect.count - 1);
		if (block->end == start) {
			block->end = end;
			return;
		}
	}

	block = __get_mem_detect_block_ptr(mem_detect.count);
	block->start = start;
	block->end = end;
	mem_detect.count++;
}

static int __diag260(unsigned long rx1, unsigned long rx2)
{
	register unsigned long _rx1 asm("2") = rx1;
	register unsigned long _rx2 asm("3") = rx2;
	register unsigned long _ry asm("4") = 0x10; /* storage configuration */
	int rc = -1;				    /* fail */
	unsigned long reg1, reg2;
	psw_t old;

	asm volatile(
		"	mvc	0(16,%[psw_old]),0(%[psw_pgm])\n"
		"	epsw	%0,%1\n"
		"	st	%0,0(%[psw_pgm])\n"
		"	st	%1,4(%[psw_pgm])\n"
		"	larl	%0,1f\n"
		"	stg	%0,8(%[psw_pgm])\n"
		"	diag	%[rx],%[ry],0x260\n"
		"	ipm	%[rc]\n"
		"	srl	%[rc],28\n"
		"1:	mvc	0(16,%[psw_pgm]),0(%[psw_old])\n"
		: "=&d" (reg1), "=&a" (reg2),
		  "+Q" (S390_lowcore.program_new_psw),
		  "=Q" (old),
		  [rc] "+&d" (rc), [ry] "+d" (_ry)
		: [rx] "d" (_rx1), "d" (_rx2),
		  [psw_old] "a" (&old),
		  [psw_pgm] "a" (&S390_lowcore.program_new_psw)
		: "cc", "memory");
	return rc == 0 ? _ry : -1;
}

static int diag260(void)
{
	int rc, i;

	struct {
		unsigned long start;
		unsigned long end;
	} storage_extents[8] __aligned(16); /* VM supports up to 8 extends */

	memset(storage_extents, 0, sizeof(storage_extents));
	rc = __diag260((unsigned long)storage_extents, sizeof(storage_extents));
	if (rc == -1)
		return -1;

	for (i = 0; i < min_t(int, rc, ARRAY_SIZE(storage_extents)); i++)
		add_mem_detect_block(storage_extents[i].start, storage_extents[i].end + 1);
	return 0;
}

static int tprot(unsigned long addr)
{
	unsigned long reg1, reg2;
	int rc = -EFAULT;
	psw_t old;

	asm volatile(
		"	mvc	0(16,%[psw_old]),0(%[psw_pgm])\n"
		"	epsw	%[reg1],%[reg2]\n"
		"	st	%[reg1],0(%[psw_pgm])\n"
		"	st	%[reg2],4(%[psw_pgm])\n"
		"	larl	%[reg1],1f\n"
		"	stg	%[reg1],8(%[psw_pgm])\n"
		"	tprot	0(%[addr]),0\n"
		"	ipm	%[rc]\n"
		"	srl	%[rc],28\n"
		"1:	mvc	0(16,%[psw_pgm]),0(%[psw_old])\n"
		: [reg1] "=&d" (reg1),
		  [reg2] "=&a" (reg2),
		  [rc] "+&d" (rc),
		  "=Q" (S390_lowcore.program_new_psw.addr),
		  "=Q" (old)
		: [psw_old] "a" (&old),
		  [psw_pgm] "a" (&S390_lowcore.program_new_psw),
		  [addr] "a" (addr)
		: "cc", "memory");
	return rc;
}

static void search_mem_end(void)
{
	unsigned long range = 1 << (MAX_PHYSMEM_BITS - 20); /* in 1MB blocks */
	unsigned long offset = 0;
	unsigned long pivot;

	while (range > 1) {
		range >>= 1;
		pivot = offset + range;
		if (!tprot(pivot << 20))
			offset = pivot;
	}

	add_mem_detect_block(0, (offset + 1) << 20);
}

void detect_memory(void)
{
	sclp_early_get_memsize(&max_physmem_end);

	if (!sclp_early_read_storage_info()) {
		mem_detect.info_source = MEM_DETECT_SCLP_STOR_INFO;
		return;
	}

	if (!diag260()) {
		mem_detect.info_source = MEM_DETECT_DIAG260;
		return;
	}

	if (max_physmem_end) {
		add_mem_detect_block(0, max_physmem_end);
		mem_detect.info_source = MEM_DETECT_SCLP_READ_INFO;
		return;
	}

	search_mem_end();
	mem_detect.info_source = MEM_DETECT_BIN_SEARCH;
	max_physmem_end = get_mem_detect_end();
}

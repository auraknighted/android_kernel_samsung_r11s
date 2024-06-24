// SPDX-License-Identifier: GPL-2.0
/*
 * PCI Express I/O Virtualization (IOV) support
 *   Address Translation Service 1.0
 *   Page Request Interface added by Joerg Roedel <joerg.roedel@amd.com>
 *   PASID support added by Joerg Roedel <joerg.roedel@amd.com>
 *
 * Copyright (C) 2009 Intel Corporation, Yu Zhao <yu.zhao@intel.com>
 * Copyright (C) 2011 Advanced Micro Devices,
 */

#include <linux/export.h>
#include <linux/pci-ats.h>
#include <linux/pci.h>
#include <linux/slab.h>

#include "pci.h"

void pci_ats_init(struct pci_dev *dev)
{
	int pos;

	if (pci_ats_disabled())
		return;

	pos = pci_find_ext_capability(dev, PCI_EXT_CAP_ID_ATS);
	if (!pos)
		return;

	dev->ats_cap = pos;
}

/**
 * pci_ats_supported - check if the device can use ATS
 * @dev: the PCI device
 *
 * Returns true if the device supports ATS and is allowed to use it, false
 * otherwise.
 */
bool pci_ats_supported(struct pci_dev *dev)
{
	if (!dev->ats_cap)
		return false;

	return (dev->untrusted == 0);
}
EXPORT_SYMBOL_GPL(pci_ats_supported);

/**
 * pci_enable_ats - enable the ATS capability
 * @dev: the PCI device
 * @ps: the IOMMU page shift
 *
 * Returns 0 on success, or negative on failure.
 */
int pci_enable_ats(struct pci_dev *dev, int ps)
{
	u16 ctrl;
	struct pci_dev *pdev;

	if (!pci_ats_supported(dev))
		return -EINVAL;

	if (WARN_ON(dev->ats_enabled))
		return -EBUSY;

	if (ps < PCI_ATS_MIN_STU)
		return -EINVAL;

	/*
	 * Note that enabling ATS on a VF fails unless it's already enabled
	 * with the same STU on the PF.
	 */
	ctrl = PCI_ATS_CTRL_ENABLE;
	if (dev->is_virtfn) {
		pdev = pci_physfn(dev);
		if (pdev->ats_stu != ps)
			return -EINVAL;
	} else {
		dev->ats_stu = ps;
		ctrl |= PCI_ATS_CTRL_STU(dev->ats_stu - PCI_ATS_MIN_STU);
	}
	pci_write_config_word(dev, dev->ats_cap + PCI_ATS_CTRL, ctrl);

	dev->ats_enabled = 1;
	return 0;
}
EXPORT_SYMBOL_GPL(pci_enable_ats);

/**
 * pci_disable_ats - disable the ATS capability
 * @dev: the PCI device
 */
void pci_disable_ats(struct pci_dev *dev)
{
	u16 ctrl;

	if (WARN_ON(!dev->ats_enabled))
		return;

	pci_read_config_word(dev, dev->ats_cap + PCI_ATS_CTRL, &ctrl);
	ctrl &= ~PCI_ATS_CTRL_ENABLE;
	pci_write_config_word(dev, dev->ats_cap + PCI_ATS_CTRL, ctrl);

	dev->ats_enabled = 0;
}
EXPORT_SYMBOL_GPL(pci_disable_ats);

void pci_restore_ats_state(struct pci_dev *dev)
{
	u16 ctrl;

	if (!dev->ats_enabled)
		return;

	ctrl = PCI_ATS_CTRL_ENABLE;
	if (!dev->is_virtfn)
		ctrl |= PCI_ATS_CTRL_STU(dev->ats_stu - PCI_ATS_MIN_STU);
	pci_write_config_word(dev, dev->ats_cap + PCI_ATS_CTRL, ctrl);
}

/**
 * pci_ats_queue_depth - query the ATS Invalidate Queue Depth
 * @dev: the PCI device
 *
 * Returns the queue depth on success, or negative on failure.
 *
 * The ATS spec uses 0 in the Invalidate Queue Depth field to
 * indicate that the function can accept 32 Invalidate Request.
 * But here we use the `real' values (i.e. 1~32) for the Queue
 * Depth; and 0 indicates the function shares the Queue with
 * other functions (doesn't exclusively own a Queue).
 */
int pci_ats_queue_depth(struct pci_dev *dev)
{
	u16 cap;

	if (!dev->ats_cap)
		return -EINVAL;

	if (dev->is_virtfn)
		return 0;

	pci_read_config_word(dev, dev->ats_cap + PCI_ATS_CAP, &cap);
	return PCI_ATS_CAP_QDEP(cap) ? PCI_ATS_CAP_QDEP(cap) : PCI_ATS_MAX_QDEP;
}

/**
 * pci_ats_page_aligned - Return Page Aligned Request bit status.
 * @pdev: the PCI device
 *
 * Returns 1, if the Untranslated Addresses generated by the device
 * are always aligned or 0 otherwise.
 *
 * Per PCIe spec r4.0, sec 10.5.1.2, if the Page Aligned Request bit
 * is set, it indicates the Untranslated Addresses generated by the
 * device are always aligned to a 4096 byte boundary.
 */
int pci_ats_page_aligned(struct pci_dev *pdev)
{
	u16 cap;

	if (!pdev->ats_cap)
		return 0;

	pci_read_config_word(pdev, pdev->ats_cap + PCI_ATS_CAP, &cap);

	if (cap & PCI_ATS_CAP_PAGE_ALIGNED)
		return 1;

	return 0;
}

#ifdef CONFIG_PCI_PRI
void pci_pri_init(struct pci_dev *pdev)
{
	u16 status;

	pdev->pri_cap = pci_find_ext_capability(pdev, PCI_EXT_CAP_ID_PRI);

	if (!pdev->pri_cap)
		return;

	pci_read_config_word(pdev, pdev->pri_cap + PCI_PRI_STATUS, &status);
	if (status & PCI_PRI_STATUS_PASID)
		pdev->pasid_required = 1;
}

/**
 * pci_enable_pri - Enable PRI capability
 * @pdev: PCI device structure
 * @reqs: outstanding requests
 *
 * Returns 0 on success, negative value on error
 */
int pci_enable_pri(struct pci_dev *pdev, u32 reqs)
{
	u16 control, status;
	u32 max_requests;
	int pri = pdev->pri_cap;

	/*
	 * VFs must not implement the PRI Capability.  If their PF
	 * implements PRI, it is shared by the VFs, so if the PF PRI is
	 * enabled, it is also enabled for the VF.
	 */
	if (pdev->is_virtfn) {
		if (pci_physfn(pdev)->pri_enabled)
			return 0;
		return -EINVAL;
	}

	if (WARN_ON(pdev->pri_enabled))
		return -EBUSY;

	if (!pri)
		return -EINVAL;

	pci_read_config_word(pdev, pri + PCI_PRI_STATUS, &status);
	if (!(status & PCI_PRI_STATUS_STOPPED))
		return -EBUSY;

	pci_read_config_dword(pdev, pri + PCI_PRI_MAX_REQ, &max_requests);
	reqs = min(max_requests, reqs);
	pdev->pri_reqs_alloc = reqs;
	pci_write_config_dword(pdev, pri + PCI_PRI_ALLOC_REQ, reqs);

	control = PCI_PRI_CTRL_ENABLE;
	pci_write_config_word(pdev, pri + PCI_PRI_CTRL, control);

	pdev->pri_enabled = 1;

	return 0;
}

/**
 * pci_disable_pri - Disable PRI capability
 * @pdev: PCI device structure
 *
 * Only clears the enabled-bit, regardless of its former value
 */
void pci_disable_pri(struct pci_dev *pdev)
{
	u16 control;
	int pri = pdev->pri_cap;

	/* VFs share the PF PRI */
	if (pdev->is_virtfn)
		return;

	if (WARN_ON(!pdev->pri_enabled))
		return;

	if (!pri)
		return;

	pci_read_config_word(pdev, pri + PCI_PRI_CTRL, &control);
	control &= ~PCI_PRI_CTRL_ENABLE;
	pci_write_config_word(pdev, pri + PCI_PRI_CTRL, control);

	pdev->pri_enabled = 0;
}
EXPORT_SYMBOL_GPL(pci_disable_pri);

/**
 * pci_restore_pri_state - Restore PRI
 * @pdev: PCI device structure
 */
void pci_restore_pri_state(struct pci_dev *pdev)
{
	u16 control = PCI_PRI_CTRL_ENABLE;
	u32 reqs = pdev->pri_reqs_alloc;
	int pri = pdev->pri_cap;

	if (pdev->is_virtfn)
		return;

	if (!pdev->pri_enabled)
		return;

	if (!pri)
		return;

	pci_write_config_dword(pdev, pri + PCI_PRI_ALLOC_REQ, reqs);
	pci_write_config_word(pdev, pri + PCI_PRI_CTRL, control);
}

/**
 * pci_reset_pri - Resets device's PRI state
 * @pdev: PCI device structure
 *
 * The PRI capability must be disabled before this function is called.
 * Returns 0 on success, negative value on error.
 */
int pci_reset_pri(struct pci_dev *pdev)
{
	u16 control;
	int pri = pdev->pri_cap;

	if (pdev->is_virtfn)
		return 0;

	if (WARN_ON(pdev->pri_enabled))
		return -EBUSY;

	if (!pri)
		return -EINVAL;

	control = PCI_PRI_CTRL_RESET;
	pci_write_config_word(pdev, pri + PCI_PRI_CTRL, control);

	return 0;
}

/**
 * pci_prg_resp_pasid_required - Return PRG Response PASID Required bit
 *				 status.
 * @pdev: PCI device structure
 *
 * Returns 1 if PASID is required in PRG Response Message, 0 otherwise.
 */
int pci_prg_resp_pasid_required(struct pci_dev *pdev)
{
	if (pdev->is_virtfn)
		pdev = pci_physfn(pdev);

	return pdev->pasid_required;
}

/**
 * pci_pri_supported - Check if PRI is supported.
 * @pdev: PCI device structure
 *
 * Returns true if PRI capability is present, false otherwise.
 */
bool pci_pri_supported(struct pci_dev *pdev)
{
	/* VFs share the PF PRI */
	if (pci_physfn(pdev)->pri_cap)
		return true;
	return false;
}
EXPORT_SYMBOL_GPL(pci_pri_supported);
#endif /* CONFIG_PCI_PRI */

#ifdef CONFIG_PCI_PASID
void pci_pasid_init(struct pci_dev *pdev)
{
	pdev->pasid_cap = pci_find_ext_capability(pdev, PCI_EXT_CAP_ID_PASID);
}

/**
 * pci_enable_pasid - Enable the PASID capability
 * @pdev: PCI device structure
 * @features: Features to enable
 *
 * Returns 0 on success, negative value on error. This function checks
 * whether the features are actually supported by the device and returns
 * an error if not.
 */
int pci_enable_pasid(struct pci_dev *pdev, int features)
{
	u16 control, supported;
	int pasid = pdev->pasid_cap;

	/*
	 * VFs must not implement the PASID Capability, but if a PF
	 * supports PASID, its VFs share the PF PASID configuration.
	 */
	if (pdev->is_virtfn) {
		if (pci_physfn(pdev)->pasid_enabled)
			return 0;
		return -EINVAL;
	}

	if (WARN_ON(pdev->pasid_enabled))
		return -EBUSY;

	if (!pdev->eetlp_prefix_path)
		return -EINVAL;

	if (!pasid)
		return -EINVAL;

	pci_read_config_word(pdev, pasid + PCI_PASID_CAP, &supported);
	supported &= PCI_PASID_CAP_EXEC | PCI_PASID_CAP_PRIV;

	/* User wants to enable anything unsupported? */
	if ((supported & features) != features)
		return -EINVAL;

	control = PCI_PASID_CTRL_ENABLE | features;
	pdev->pasid_features = features;

	pci_write_config_word(pdev, pasid + PCI_PASID_CTRL, control);

	pdev->pasid_enabled = 1;

	return 0;
}
EXPORT_SYMBOL_GPL(pci_enable_pasid);

/**
 * pci_disable_pasid - Disable the PASID capability
 * @pdev: PCI device structure
 */
void pci_disable_pasid(struct pci_dev *pdev)
{
	u16 control = 0;
	int pasid = pdev->pasid_cap;

	/* VFs share the PF PASID configuration */
	if (pdev->is_virtfn)
		return;

	if (WARN_ON(!pdev->pasid_enabled))
		return;

	if (!pasid)
		return;

	pci_write_config_word(pdev, pasid + PCI_PASID_CTRL, control);

	pdev->pasid_enabled = 0;
}
EXPORT_SYMBOL_GPL(pci_disable_pasid);

/**
 * pci_restore_pasid_state - Restore PASID capabilities
 * @pdev: PCI device structure
 */
void pci_restore_pasid_state(struct pci_dev *pdev)
{
	u16 control;
	int pasid = pdev->pasid_cap;

	if (pdev->is_virtfn)
		return;

	if (!pdev->pasid_enabled)
		return;

	if (!pasid)
		return;

	control = PCI_PASID_CTRL_ENABLE | pdev->pasid_features;
	pci_write_config_word(pdev, pasid + PCI_PASID_CTRL, control);
}

/**
 * pci_pasid_features - Check which PASID features are supported
 * @pdev: PCI device structure
 *
 * Returns a negative value when no PASI capability is present.
 * Otherwise is returns a bitmask with supported features. Current
 * features reported are:
 * PCI_PASID_CAP_EXEC - Execute permission supported
 * PCI_PASID_CAP_PRIV - Privileged mode supported
 */
int pci_pasid_features(struct pci_dev *pdev)
{
	u16 supported;
	int pasid;

	if (pdev->is_virtfn)
		pdev = pci_physfn(pdev);

	pasid = pdev->pasid_cap;
	if (!pasid)
		return -EINVAL;

	pci_read_config_word(pdev, pasid + PCI_PASID_CAP, &supported);

	supported &= PCI_PASID_CAP_EXEC | PCI_PASID_CAP_PRIV;

	return supported;
}
EXPORT_SYMBOL_GPL(pci_pasid_features);

#define PASID_NUMBER_SHIFT	8
#define PASID_NUMBER_MASK	(0x1f << PASID_NUMBER_SHIFT)
/**
 * pci_max_pasid - Get maximum number of PASIDs supported by device
 * @pdev: PCI device structure
 *
 * Returns negative value when PASID capability is not present.
 * Otherwise it returns the number of supported PASIDs.
 */
int pci_max_pasids(struct pci_dev *pdev)
{
	u16 supported;
	int pasid;

	if (pdev->is_virtfn)
		pdev = pci_physfn(pdev);

	pasid = pdev->pasid_cap;
	if (!pasid)
		return -EINVAL;

	pci_read_config_word(pdev, pasid + PCI_PASID_CAP, &supported);

	supported = (supported & PASID_NUMBER_MASK) >> PASID_NUMBER_SHIFT;

	return (1 << supported);
}
EXPORT_SYMBOL_GPL(pci_max_pasids);
#endif /* CONFIG_PCI_PASID */

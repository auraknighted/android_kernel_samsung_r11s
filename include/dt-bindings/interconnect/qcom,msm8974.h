/* SPDX-License-Identifier: (GPL-2.0 OR BSD-2-Clause) */
/*
 * Qualcomm msm8974 interconnect IDs
 *
 * Copyright (c) 2019 Brian Masney <masneyb@onstation.org>
 */

#ifndef __DT_BINDINGS_INTERCONNECT_QCOM_MSM8974_H
#define __DT_BINDINGS_INTERCONNECT_QCOM_MSM8974_H

#define BIMC_MAS_AMPSS_M0		0
#define BIMC_MAS_AMPSS_M1		1
#define BIMC_MAS_MSS_PROC		2
#define BIMC_TO_MNOC			3
#define BIMC_TO_SNOC			4
#define BIMC_SLV_EBI_CH0		5
#define BIMC_SLV_AMPSS_L2		6

#define CNOC_MAS_RPM_INST		0
#define CNOC_MAS_RPM_DATA		1
#define CNOC_MAS_RPM_SYS		2
#define CNOC_MAS_DEHR			3
#define CNOC_MAS_QDSS_DAP		4
#define CNOC_MAS_SPDM			5
#define CNOC_MAS_TIC			6
#define CNOC_SLV_CLK_CTL		7
#define CNOC_SLV_CNOC_MSS		8
#define CNOC_SLV_SECURITY		9
#define CNOC_SLV_TCSR			10
#define CNOC_SLV_TLMM			11
#define CNOC_SLV_CRYPTO_0_CFG		12
#define CNOC_SLV_CRYPTO_1_CFG		13
#define CNOC_SLV_IMEM_CFG		14
#define CNOC_SLV_MESSAGE_RAM		15
#define CNOC_SLV_BIMC_CFG		16
#define CNOC_SLV_BOOT_ROM		17
#define CNOC_SLV_PMIC_ARB		18
#define CNOC_SLV_SPDM_WRAPPER		19
#define CNOC_SLV_DEHR_CFG		20
#define CNOC_SLV_MPM			21
#define CNOC_SLV_QDSS_CFG		22
#define CNOC_SLV_RBCPR_CFG		23
#define CNOC_SLV_RBCPR_QDSS_APU_CFG	24
#define CNOC_TO_SNOC			25
#define CNOC_SLV_CNOC_ONOC_CFG		26
#define CNOC_SLV_CNOC_MNOC_MMSS_CFG	27
#define CNOC_SLV_CNOC_MNOC_CFG		28
#define CNOC_SLV_PNOC_CFG		29
#define CNOC_SLV_SNOC_MPU_CFG		30
#define CNOC_SLV_SNOC_CFG		31
#define CNOC_SLV_EBI1_DLL_CFG		32
#define CNOC_SLV_PHY_APU_CFG		33
#define CNOC_SLV_EBI1_PHY_CFG		34
#define CNOC_SLV_RPM			35
#define CNOC_SLV_SERVICE_CNOC		36

#define MNOC_MAS_GRAPHICS_3D		0
#define MNOC_MAS_JPEG			1
#define MNOC_MAS_MDP_PORT0		2
#define MNOC_MAS_VIDEO_P0		3
#define MNOC_MAS_VIDEO_P1		4
#define MNOC_MAS_VFE			5
#define MNOC_TO_CNOC			6
#define MNOC_TO_BIMC			7
#define MNOC_SLV_CAMERA_CFG		8
#define MNOC_SLV_DISPLAY_CFG		9
#define MNOC_SLV_OCMEM_CFG		10
#define MNOC_SLV_CPR_CFG		11
#define MNOC_SLV_CPR_XPU_CFG		12
#define MNOC_SLV_MISC_CFG		13
#define MNOC_SLV_MISC_XPU_CFG		14
#define MNOC_SLV_VENUS_CFG		15
#define MNOC_SLV_GRAPHICS_3D_CFG	16
#define MNOC_SLV_MMSS_CLK_CFG		17
#define MNOC_SLV_MMSS_CLK_XPU_CFG	18
#define MNOC_SLV_MNOC_MPU_CFG		19
#define MNOC_SLV_ONOC_MPU_CFG		20
#define MNOC_SLV_SERVICE_MNOC		21

#define OCMEM_NOC_TO_OCMEM_VNOC		0
#define OCMEM_MAS_JPEG_OCMEM		1
#define OCMEM_MAS_MDP_OCMEM		2
#define OCMEM_MAS_VIDEO_P0_OCMEM	3
#define OCMEM_MAS_VIDEO_P1_OCMEM	4
#define OCMEM_MAS_VFE_OCMEM		5
#define OCMEM_MAS_CNOC_ONOC_CFG		6
#define OCMEM_SLV_SERVICE_ONOC		7
#define OCMEM_VNOC_TO_SNOC		8
#define OCMEM_VNOC_TO_OCMEM_NOC		9
#define OCMEM_VNOC_MAS_GFX3D		10
#define OCMEM_SLV_OCMEM			11

#define PNOC_MAS_PNOC_CFG		0
#define PNOC_MAS_SDCC_1			1
#define PNOC_MAS_SDCC_3			2
#define PNOC_MAS_SDCC_4			3
#define PNOC_MAS_SDCC_2			4
#define PNOC_MAS_TSIF			5
#define PNOC_MAS_BAM_DMA		6
#define PNOC_MAS_BLSP_2			7
#define PNOC_MAS_USB_HSIC		8
#define PNOC_MAS_BLSP_1			9
#define PNOC_MAS_USB_HS			10
#define PNOC_TO_SNOC			11
#define PNOC_SLV_SDCC_1			12
#define PNOC_SLV_SDCC_3			13
#define PNOC_SLV_SDCC_2			14
#define PNOC_SLV_SDCC_4			15
#define PNOC_SLV_TSIF			16
#define PNOC_SLV_BAM_DMA		17
#define PNOC_SLV_BLSP_2			18
#define PNOC_SLV_USB_HSIC		19
#define PNOC_SLV_BLSP_1			20
#define PNOC_SLV_USB_HS			21
#define PNOC_SLV_PDM			22
#define PNOC_SLV_PERIPH_APU_CFG		23
#define PNOC_SLV_PNOC_MPU_CFG		24
#define PNOC_SLV_PRNG			25
#define PNOC_SLV_SERVICE_PNOC		26

#define SNOC_MAS_LPASS_AHB		0
#define SNOC_MAS_QDSS_BAM		1
#define SNOC_MAS_SNOC_CFG		2
#define SNOC_TO_BIMC			3
#define SNOC_TO_CNOC			4
#define SNOC_TO_PNOC			5
#define SNOC_TO_OCMEM_VNOC		6
#define SNOC_MAS_CRYPTO_CORE0		7
#define SNOC_MAS_CRYPTO_CORE1		8
#define SNOC_MAS_LPASS_PROC		9
#define SNOC_MAS_MSS			10
#define SNOC_MAS_MSS_NAV		11
#define SNOC_MAS_OCMEM_DMA		12
#define SNOC_MAS_WCSS			13
#define SNOC_MAS_QDSS_ETR		14
#define SNOC_MAS_USB3			15
#define SNOC_SLV_AMPSS			16
#define SNOC_SLV_LPASS			17
#define SNOC_SLV_USB3			18
#define SNOC_SLV_WCSS			19
#define SNOC_SLV_OCIMEM			20
#define SNOC_SLV_SNOC_OCMEM		21
#define SNOC_SLV_SERVICE_SNOC		22
#define SNOC_SLV_QDSS_STM		23

#endif

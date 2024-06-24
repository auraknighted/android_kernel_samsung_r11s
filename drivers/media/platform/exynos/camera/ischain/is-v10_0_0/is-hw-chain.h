// SPDX-License-Identifier: GPL-2.0
/*
 * Samsung Exynos SoC series Pablo driver
 * Pablo v10.0 specific functions
 *
 * Copyright (c) 2021 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_HW_CHAIN_V10_0_H
#define IS_HW_CHAIN_V10_0_H

#include "is-hw-config.h"
#include "is-hw-api-common.h"
#include "is-groupmgr.h"
#include "is-config.h"

enum sysreg_csis_reg_name {
	SYSREG_R_CSIS_MEMCLK,
	SYSREG_R_CSIS_POWER_FAIL_DETECT,
	SYSREG_R_CSIS_EMA_STATUS,
	SYSREG_R_CSIS_CSIS_PDP_VOTF,
	SYSREG_R_CSIS_CSIS_PDP_SC_CON0,
	SYSREG_R_CSIS_CSIS_PDP_SC_CON1,
	SYSREG_R_CSIS_CSIS_PDP_SC_CON2,
	SYSREG_R_CSIS_CSIS_PDP_SC_CON3,
	SYSREG_R_CSIS_CSIS_PDP_SC_CON4,
	SYSREG_R_CSIS_CSIS_PDP_SC_CON5,
	SYSREG_R_CSIS_CSIS_PDP_SC_CON6,
	SYSREG_R_CSIS_CSIS_PDP_SC_CON7,
	SYSREG_R_CSIS_PDP_VC_CON0,
	SYSREG_R_CSIS_PDP_VC_CON1,
	SYSREG_R_CSIS_PDP_VC_CON2,
	SYSREG_R_CSIS_PDP_VC_CON3,
	SYSREG_R_CSIS_CSIS_PDP_SC_PDP0_IN_EN,
	SYSREG_R_CSIS_CSIS_PDP_SC_PDP1_IN_EN,
	SYSREG_R_CSIS_CSIS_PDP_SC_PDP2_IN_EN,
	SYSREG_R_CSIS_CSIS_PDP_SC_PDP3_IN_EN,
	SYSREG_R_CSIS_CSIS_PDP_SC_CON8,
	SYSREG_R_CSIS_CSIS_PDP_BNS_MUX,
	SYSREG_R_CSIS_CSIS0_FRAME_ID_EN,
	SYSREG_R_CSIS_CSIS1_FRAME_ID_EN,
	SYSREG_R_CSIS_CSIS2_FRAME_ID_EN,
	SYSREG_R_CSIS_CSIS3_FRAME_ID_EN,
	SYSREG_R_CSIS_CSIS4_FRAME_ID_EN,
	SYSREG_R_CSIS_CSIS5_FRAME_ID_EN,
	SYSREG_R_CSIS_CSIS6_FRAME_ID_EN,
	SYSREG_R_CSIS_MIPI_PHY_CON,
	SYSREG_CSIS_REG_CNT
};

enum sysreg_csis_reg_field {
	SYSREG_F_CSIS_EN,
	SYSREG_F_CSIS_PFD_AVDD085_MIPI_CPHY_STAT,
	SYSREG_F_CSIS_PFD_AVDD085_MIPI_CPHY,
	SYSREG_F_CSIS_SFR_ENABLE,
	SYSREG_F_CSIS_WIDTH_DATA2REQ,
	SYSREG_F_CSIS_EMA_BUSY,
	SYSREG_F_CSIS_I_PDP3_VOTF_VVALID_EN,
	SYSREG_F_CSIS_I_PDP2_VOTF_VVALID_EN,
	SYSREG_F_CSIS_I_PDP1_VOTF_VVALID_EN,
	SYSREG_F_CSIS_I_PDP0_VOTF_VVALID_EN,
	SYSREG_F_CSIS_GLUEMUX_PDP_VAL,
	SYSREG_F_CSIS_GLUEMUX_CSIS_DMA_OTF_SEL,
	SYSREG_F_CSIS_MUX_IMG_VC_PDP,
	SYSREG_F_CSIS_MUX_AF1_VC_PDP,
	SYSREG_F_CSIS_MUX_AF0_VC_PDP,
	SYSREG_F_CSIS_PDP3_IN_CSIS6_EN,
	SYSREG_F_CSIS_PDP3_IN_CSIS5_EN,
	SYSREG_F_CSIS_PDP3_IN_CSIS4_EN,
	SYSREG_F_CSIS_PDP3_IN_CSIS3_EN,
	SYSREG_F_CSIS_PDP3_IN_CSIS2_EN,
	SYSREG_F_CSIS_PDP3_IN_CSIS1_EN,
	SYSREG_F_CSIS_PDP3_IN_CSIS0_EN,
	SYSREG_F_CSIS_GLUEMUX_CSIS_BNS_SEL,
	SYSREG_F_CSIS_FID_LOC_BYTE,
	SYSREG_F_CSIS_FID_LOC_LINE,
	SYSREG_F_CSIS_FRAME_ID_EN_CSIS,
	SYSREG_F_CSIS_MIPI_DPHY_CONFIG,
	SYSREG_F_CSIS_MIPI_RESETN_DPHY_S1,
	SYSREG_F_CSIS_MIPI_RESETN_DPHY_S,
	SYSREG_F_CSIS_MIPI_RESETN_DCPHY_S4,
	SYSREG_F_CSIS_MIPI_RESETN_DCPHY_S3,
	SYSREG_F_CSIS_MIPI_RESETN_DCPHY_S2,
	SYSREG_F_CSIS_MIPI_RESETN_DCPHY_S1,
	SYSREG_F_CSIS_MIPI_RESETN_DCPHY_S,
	SYSREG_CSIS_REG_FIELD_CNT
};


#define GROUP_HW_MAX (GROUP_SLOT_MAX)

#define IORESOURCE_CSIS_DMA	0
#define IORESOURCE_PDP_CORE0	1
#define IORESOURCE_PDP_CORE1	2
#define IORESOURCE_PDP_CORE2	3
#define IORESOURCE_PDP_CORE3	4
#define IORESOURCE_CSTAT0	5
#define IORESOURCE_CSTAT1	6
#define IORESOURCE_CSTAT2	7
#define IORESOURCE_CSTAT3	8
#define IORESOURCE_BYRP_DMA_TOP	9
#define IORESOURCE_LME		10
#define IORESOURCE_BYRP		11
#define IORESOURCE_RGBP		12
#define IORESOURCE_DRCP		13
#define IORESOURCE_MCFP		14
#define IORESOURCE_YUVP		15
#define IORESOURCE_MCSC		16

/* FIXME: check each size */
#define GROUP_SENSOR_MAX_WIDTH	13696
#define GROUP_SENSOR_MAX_HEIGHT	9000
#define GROUP_PDP_MAX_WIDTH	13696
#define GROUP_PDP_MAX_HEIGHT	9000
#define GROUP_3AA_MAX_WIDTH	13696
#define GROUP_3AA_MAX_HEIGHT	9000
#define GROUP_ITP_MAX_WIDTH	7680
#define GROUP_ITP_MAX_HEIGHT	4320
#define GROUP_VRA_MAX_WIDTH	640
#define GROUP_VRA_MAX_HEIGHT	480
#define GROUP_CLAHE_MAX_WIDTH	12000
#define GROUP_CLAHE_MAX_HEIGHT	9000
#define GROUP_LME_MAX_WIDTH	2016
#define GROUP_LME_MAX_HEIGHT	1920
#define GROUP_MCFP_MAX_WIDTH	4880
#define GROUP_MCFP_MAX_HEIGHT	4320
#define GROUP_BYRP_MAX_WIDTH	8192
#define GROUP_BYRP_MAX_HEIGHT	9000

/* RTA HEAP: 6MB */
#define IS_RESERVE_LIB_SIZE	(0x00600000)

/* ORBMCH DMA: Moved to user space */
#define TAAISP_ORBMCH_SIZE	(0)

/* DDK DMA: Moved into driver */
#define IS_TAAISP_SIZE		(0)

/* TNR DMA: Moved into driver*/
#define TAAISP_TNR_SIZE		(0)

/* Secure TNR DMA: Moved into driver */
#define TAAISP_TNR_S_SIZE	(0)

/* DDK HEAP: 90MB */
#define IS_HEAP_SIZE		(0x05A00000)

/* Rule checker size for DDK */
#define IS_RCHECKER_SIZE_RO	(SZ_4M + SZ_1M)
#define IS_RCHECKER_SIZE_RW	(SZ_256K)

#define SYSREG_CSIS_BASE_ADDR	(0x17020000)
#define SYSREG_CSTAT_BASE_ADDR	(0x18420000)
#define SYSREG_BYRP_BASE_ADDR	(0x15F20000)
#define SYSREG_RGBP_BASE_ADDR	(0x17520000)
#define SYSREG_MCFP_BASE_ADDR	(0x17920000)
#define SYSREG_YUVP_BASE_ADDR	(0x18020000)
#define SYSREG_DRCP_BASE_ADDR	(0x17420000)
#define SYSREG_MCSC_BASE_ADDR	(0x15C20000)
#define SYSREG_LME_BASE_ADDR	(0x17720000)

#define HWFC_INDEX_RESET_ADDR	(0x15C71050)

enum ext_chain_id {
	ID_ORBMCH_0 = 0,
	ID_ORBMCH_1 = 1,
};

#define INTR_ID_BASE_OFFSET	(INTR_HWIP_MAX)
#define GET_IRQ_ID(y, x)	(x - (INTR_ID_BASE_OFFSET * y))
#define valid_3aaisp_intr_index(intr_index) \
	(intr_index >= 0 && intr_index < INTR_HWIP_MAX)

/* TODO: update below for 9830 */
/* Specific interrupt map belonged to each IP */

/* MC-Scaler */
#define USE_DMA_BUFFER_INDEX		(0) /* 0 ~ 7 */
#define MCSC_OFFSET_ALIGN		(2)
#define MCSC_WIDTH_ALIGN		(2)
#define MCSC_HEIGHT_ALIGN		(2)
#define MCSC_PRECISION			(20)
#define MCSC_POLY_RATIO_UP		(25)
#define MCSC_POLY_QUALITY_RATIO_DOWN	(4)
#define MCSC_POLY_RATIO_DOWN		(16)
#define MCSC_POLY_MAX_RATIO_DOWN	(256)
#define MCSC_POST_RATIO_DOWN		(16)
#define MCSC_POST_MAX_WIDTH		(1920)
#define MCSC_FLIP_WA
/* #define MCSC_POST_WA */
/* #define MCSC_POST_WA_SHIFT	(8)*/	/* 256 = 2^8 */
#define MCSC_USE_DEJAG_TUNING_PARAM	(true)
/* #define MCSC_DNR_USE_TUNING		(true) */	/* DNR and DJAG TUNING PARAM are used exclusively. */
#define MCSC_SETFILE_VERSION		(0x14027435)
#define MCSC_DJAG_ENABLE_SENSOR_BRATIO	(2000)
#define MCSC_LINE_BUF_SIZE		(7680)
#define HWFC_DMA_ID_OFFSET		(8)
#define ENTRY_HF			ENTRY_M5P	/* Subdev ID of MCSC port for High Frequency */
#define CAC_G2_VERSION			1

#define CSIS0_QCH_EN_ADDR		(0x17030004)
#define CSIS1_QCH_EN_ADDR		(0x17040004)
#define CSIS2_QCH_EN_ADDR		(0x17050004)
#define CSIS3_QCH_EN_ADDR		(0x17060004)
#define CSIS3_1_QCH_EN_ADDR		(0x17090004)

/* LME */
#define LME_IMAGE_MAX_WIDTH		2916
#define LME_IMAGE_MAX_HEIGHT		1512
#define LME_TNR_MODE_MIN_BUFFER_NUM	0

#define ALIGN_UPDOWN_STRIPE_WIDTH(w, align) \
	(w & (align) >> 1 ? ALIGN(w, (align)) : ALIGN_DOWN(w, (align)))

int exynos991_is_dump_clk(struct device *dev);

#define IS_LLC_CACHE_HINT_SHIFT 4

enum is_llc_cache_hint {
	IS_LLC_CACHE_HINT_INVALID = 0,
	IS_LLC_CACHE_HINT_BYPASS_TYPE,
	IS_LLC_CACHE_HINT_CACHE_ALLOC_TYPE,
	IS_LLC_CACHE_HINT_CACHE_NOALLOC_TYPE,
	IS_LLC_CACHE_HINT_VOTF_TYPE,
	IS_LLC_CACHE_HINT_LAST_BUT_SHARED,
	IS_LLC_CACHE_HINT_NOT_USED_FAR,
	IS_LLC_CACHE_HINT_LAST_ACCESS,
	IS_LLC_CACHE_HINT_MAX
};

enum is_llc_sn {
	IS_LLC_SN_DEFAULT = 0,
	IS_LLC_SN_FHD,
	IS_LLC_SN_UHD,
	IS_LLC_SN_8K,
	IS_LLC_SN_PREVIEW,
	IS_LLC_SN_END,
};

struct is_llc_way_num {
	int votf;
	int mcfp;
};

static ip_video_probe_t is_video_probe_fns[] = {
	/* CSTAT */
	is_30s_video_probe,
	is_31s_video_probe,
	is_32s_video_probe,
	is_33s_video_probe,

	/* BYRP */
	is_byrp_video_probe,

	/* RGBP */
	is_rgbp_video_probe,

	/* MCFP */
	is_mcfp_video_probe,

	/* YUVP */
	is_yuvp_video_probe,

	/* MCSC */
	is_m0s_video_probe,
	is_m1s_video_probe,
	is_m0p_video_probe,
	is_m1p_video_probe,
	is_m2p_video_probe,
	is_m3p_video_probe,
	is_m4p_video_probe,
	is_m5p_video_probe,

	/* LME */
	is_lme0_video_probe,
};

enum is_cstat_subdev_id {
	IS_CSTAT_CDAF,
	IS_CSTAT_PRE_THUMB,
	IS_CSTAT_AE_THUMB,
	IS_CSTAT_AWB_THUMB,
	IS_CSTAT_RGBY_HIST,
	IS_CSTAT_SUBDEV_NUM
};

static const char* const is_cstat_subdev_name[IS_CSTAT_SUBDEV_NUM] = {
	"CDAF",
	"PRE",
	"AE",
	"AWB",
	"RGBY",
};

#endif

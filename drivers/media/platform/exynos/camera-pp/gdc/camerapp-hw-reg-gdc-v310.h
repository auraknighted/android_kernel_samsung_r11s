/*
 * Samsung EXYNOS Camera PostProcessing driver
 *
 *  Copyright (C) 2019 Samsung Electronics Co., Ltd.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 */

#ifndef CAMERAPP_SFR_GDC_V310_H
#define CAMERAPP_SFR_GDC_V310_H

#define GDC_WIDTH_ALIGN		4
#define GDC_HEIGHT_ALIGN	2
#define GDC_OFFSET_ALIGN	2
#define MAX_VIRTUAL_GRID_X		8192
#define MAX_VIRTUAL_GRID_Y		6144

/* interrupt check */
#define GDC_INT_FRAME_START		0
#define GDC_INT_FRAME_END		(1 << 0)

enum camerapp_gdc_reg_name {
	GDC_R_GDC_VER,
	GDC_R_GDC_YUV_FORMAT,
	GDC_R_GDC_COMPRESSOR,
	GDC_R_GDC_DST_BASE_LUM,
	GDC_R_GDC_DST_BASE_CHROMA,
	GDC_R_GDC_DST_HEADER_BASE_LUM,
	GDC_R_GDC_DST_HEADER_BASE_CHROMA,
	GDC_R_WAXI_STRIDE_LUM,
	GDC_R_WAXI_STRIDE_CHROMA,
	GDC_R_WAXI_STRIDE_HEADER_LUM,
	GDC_R_WAXI_STRIDE_HEADER_CHROMA,
	GDC_R_GDC_CONFIG,
	GDC_R_GDC_INPUT_ORG_SIZE,
	GDC_R_GDC_INPUT_CROP_SIZE,
	GDC_R_GDC_INPUT_CROP_START,
	GDC_R_GDC_SCALE,
	GDC_R_GDC_SCALE_SHIFTER,
	GDC_R_GDC_INV_SCALE,
	GDC_R_GDC_OUT_CROP_SIZE,
	GDC_R_GDC_OUT_CROP_START,
	GDC_R_GDC_OUT_SCALE,
	GDC_R_GDC_INTERPOLATION,
	GDC_R_GDC_DEBUG_BUSY,
	GDC_R_GDC_LUMA_MINMAX,
	GDC_R_GDC_CHROMA_MINMAX,
	GDC_R_GDC_MAX_MO,
	GDC_R_PXC_FLUSH,
	GDC_R_PXC_REQ_CNT_LUM_0,
	GDC_R_PXC_HIT_CNT_LUM_0,
	GDC_R_PXC_DEBUG_LUM0,
	GDC_R_PXC_STRIDE_LUM,
	GDC_R_PXC_STRIDE_CHROMA,
	GDC_R_PXC_DPB_BASE_LUM,
	GDC_R_PXC_DPB_BASE_CHROMA,
	GDC_R_REQ_STOP,
	GDC_R_FRAMESTART_CMD,
	GDC_R_GDC_INT_MASK,
	GDC_R_GDC_INT_STATUS,
	GDC_R_GDC_SW_RESET,
	GDC_R_GDC_PROCESSING,
	GDC_R_GDC_COLOR0_CRC,
	GDC_R_GDC_COLOR1_CRC,
	GDC_R_GDC_COLOR2_CRC,
	GDC_R_GDC_SEQID,
	GDC_R_TZINFO_SEQID0,
	GDC_R_TZINFO_SEQID1,
	GDC_R_TZINFO_SEQID2,
	GDC_R_TZINFO_SEQID3,
	GDC_R_GDC_VOTF,
	GDC_R_GDC_BUS_USER_INFO_RDMA,
	GDC_R_GDC_BUS_USER_INFO_WDMA,
	GDC_R_GDC_SELREGISTERMODE,
	GDC_R_GDC_WDMA_IMG_CRC,
	GDC_R_GDC_WDMA_HEADER_CRC,
	GDC_R_GDC_WDMA_IMG_2P_CRC,
	GDC_R_GDC_WDMA_HEADER_2P_CRC,
	GDC_R_GDC_WDMA_MON_STATUS0,
	GDC_R_GDC_WDMA_MON_STATUS1,
	GDC_R_GDC_WDMA_MON_STATUS2,
	GDC_R_GDC_WDMA_MON_STATUS3,
	GDC_R_GDC_STOP_CRC_COUNT,
	GDC_R_GDC_STOP_CRC_RESULT,
	GDC_R_GDC_CORE_FREEZE_EN,
	GDC_R_GDC_CORE_FREEZE_POS,
	GDC_R_GDC_GRID_DX_0,
	GDC_R_GDC_GRID_DY_0,
	GDC_REG_CNT,
};

static const struct camerapp_sfr_reg gdc_regs[GDC_REG_CNT] = {
	{0x0, "GDC_VER"},
	{0x4, "GDC_YUV_FORMAT"},
	{0xc, "GDC_COMPRESSOR"},
	{0x10, "GDC_DST_BASE_LUM"},
	{0x14, "GDC_DST_BASE_CHROMA"},
	{0x18, "GDC_DST_HEADER_BASE_LUM"},
	{0x1c, "GDC_DST_HEADER_BASE_CHROMA"},
	{0x20, "WAXI_STRIDE_LUM"},
	{0x24, "WAXI_STRIDE_CHROMA"},
	{0x28, "WAXI_STRIDE_HEADER_LUM"},
	{0x2c, "WAXI_STRIDE_HEADER_CHROMA"},
	{0x30, "GDC_CONFIG"},
	{0x50, "GDC_INPUT_ORG_SIZE"},
	{0x54, "GDC_INPUT_CROP_SIZE"},
	{0x58, "GDC_INPUT_CROP_START"},
	{0x5c, "GDC_SCALE"},
	{0x60, "GDC_SCALE_SHIFTER"},
	{0x64, "GDC_INV_SCALE"},
	{0x68, "GDC_OUT_CROP_SIZE"},
	{0x6c, "GDC_OUT_CROP_START"},
	{0x70, "GDC_OUT_SCALE"},
	{0x7c, "GDC_INTERPOLATION"},
	{0x80, "GDC_DEBUG_BUSY"},
	{0x84, "GDC_LUMA_MINMAX"},
	{0x88, "GDC_CHROMA_MINMAX"},
	{0x8c, "GDC_MAX_MO"},
	{0x308, "PXC_FLUSH"},
	{0x314, "PXC_REQ_CNT_LUM_0"},
	{0x320, "PXC_HIT_CNT_LUM_0"},
	{0x330, "PXC_DEBUG_LUM0"},
	{0x384, "PXC_STRIDE_LUM"},
	{0x388, "PXC_STRIDE_CHROMA"},
	{0x400, "PXC_DPB_BASE_LUM"},
	{0x404, "PXC_DPB_BASE_CHROMA"},
	{0x504, "REQ_STOP"},
	{0x510, "FRAMESTART_CMD"},
	{0x514, "GDC_INT_MASK"},
	{0x518, "GDC_INT_STATUS"},
	{0x520, "GDC_SW_RESET"},
	{0x524, "GDC_PROCESSING"},
	{0x528, "GDC_COLOR0_CRC"},
	{0x52c, "GDC_COLOR1_CRC"},
	{0x530, "GDC_COLOR2_CRC"},
	{0x534, "GDC_SEQID"},
	{0x538, "TZINFO_SEQID0"},
	{0x53c, "TZINFO_SEQID1"},
	{0x540, "TZINFO_SEQID2"},
	{0x544, "TZINFO_SEQID3"},
	{0x548, "GDC_VOTF"},
	{0x54c, "GDC_BUS_USER_INFO_RDMA"},
	{0x550, "GDC_BUS_USER_INFO_WDMA"},
	{0x554, "GDC_SELREGISTERMODE"},
	{0x560, "GDC_WDMA_IMG_CRC"},
	{0x564, "GDC_WDMA_HEADER_CRC"},
	{0x568, "GDC_WDMA_IMG_2P_CRC"},
	{0x56c, "GDC_WDMA_HEADER_2P_CRC"},
	{0x570, "GDC_WDMA_MON_STATUS0"},
	{0x574, "GDC_WDMA_MON_STATUS1"},
	{0x578, "GDC_WDMA_MON_STATUS2"},
	{0x57c, "GDC_WDMA_MON_STATUS3"},
	{0x580, "GDC_STOP_CRC_COUNT"},
	{0x584, "GDC_STOP_CRC_RESULT"},
	{0x588, "GDC_CORE_FREEZE_EN"},
	{0x58c, "GDC_CORE_FREEZE_POS"},
	{0x1000, "GDC_GRID_DX_0"},
	{0x3000, "GDC_GRID_DY_0"},
};

enum camerapp_gdc_reg_field {
	GDC_F_GDC_VERSION,
	GDC_F_MONO_MODE,
	GDC_F_DST_PIXEL_FORMAT,
	GDC_F_SRC_PIXEL_FORMAT,
	GDC_F_DST_10BIT_FORMAT,
	GDC_F_SRC_10BIT_FORMAT,
	GDC_F_GDC_YUV_FORMAT,
	GDC_F_WDMA_COMP_LOSSY_BYTE32NUM,
	GDC_F_DST_COMPRESSOR,
	GDC_F_GDC_DST_BASE_LUM,
	GDC_F_GDC_DST_BASE_CHROMA,
	GDC_F_GDC_DST_HEADER_BASE_LUM,
	GDC_F_GDC_DST_HEADER_BASE_CHROMA,
	GDC_F_WRITE_STRIDE_LUMA,
	GDC_F_WRITE_STRIDE_CHROMA,
	GDC_F_WRITE_STRIDE_HEADER_LUMA,
	GDC_F_WRITE_STRIDE_HEADER_CHROMA,
	GDC_F_GDC_MIRROR_Y,
	GDC_F_GDC_MIRROR_X,
	GDC_F_GDC_ORG_HEIGHT,
	GDC_F_GDC_ORG_WIDTH,
	GDC_F_GDC_CROP_HEIGHT,
	GDC_F_GDC_CROP_WIDTH,
	GDC_F_GDC_CROP_START_Y,
	GDC_F_GDC_CROP_START_X,
	GDC_F_GDC_SCALE_Y,
	GDC_F_GDC_SCALE_X,
	GDC_F_GDC_SCALE_SHIFTER_Y,
	GDC_F_GDC_SCALE_SHIFTER_X,
	GDC_F_GDC_INV_SCALE_Y,
	GDC_F_GDC_INV_SCALE_X,
	GDC_F_GDC_IMAGE_ACTIVE_HEIGHT,
	GDC_F_GDC_IMAGE_ACTIVE_WIDTH,
	GDC_F_GDC_IMAGE_CROP_PRE_Y,
	GDC_F_GDC_IMAGE_CROP_PRE_X,
	GDC_F_GDC_OUT_SCALE_Y,
	GDC_F_GDC_OUT_SCALE_X,
	GDC_F_GDC_CLAMP_TYPE,
	GDC_F_GDC_INTERP_TYPE,
	GDC_F_WDMA_BUSY,
	GDC_F_RDMA_BUSY,
	GDC_F_PXCBUSYLUM,
	GDC_F_PORT0BUSY,
	GDC_F_GDC_ENGINE_BUSY,
	GDC_F_GDC_LUMA_MAX,
	GDC_F_GDC_LUMA_MIN,
	GDC_F_GDC_CHROMA_MAX,
	GDC_F_GDC_CHROMA_MIN,
	GDC_F_MAX_WR_MO,
	GDC_F_MAX_RD_MO,
	GDC_F_FLUSH,
	GDC_F_REQCNTLUM0,
	GDC_F_HITCNTLUM0,
	GDC_F_CHROMACACHEST0,
	GDC_F_HITFIFOST0,
	GDC_F_MISSFIFOST0,
	GDC_F_PXCSTRIDELUM,
	GDC_F_PXCSTRIDECHROMA,
	GDC_F_DPBLUMBASE,
	GDC_F_DPBCHRBASE,
	GDC_F_RESET_OK,
	GDC_F_EN_RESET,
	GDC_F_FRAMESTART_CMD,
	GDC_F_INT_MASK_VOTF_LOSTCONNECT,
	GDC_F_INT_MASK_FRAME_END,
	GDC_F_INT_STATUS_VOTF_LOSTCONNECT,
	GDC_F_INT_STATUS_FRAME_END,
	GDC_F_SW_RESET,
	GDC_F_GDC_PROCESSING,
	GDC_F_COLOR0_CRC_RESULT,
	GDC_F_COLOR0_CRC_SEED,
	GDC_F_COLOR1_CRC_RESULT,
	GDC_F_COLOR1_CRC_SEED,
	GDC_F_COLOR2_CRC_RESULT,
	GDC_F_COLOR2_CRC_SEED,
	GDC_F_SEQID,
	GDC_F_TZINFO_SEQID0_WDMA,
	GDC_F_TZINFO_SEQID0_RDMA,
	GDC_F_TZINFO_SEQID1_WDMA,
	GDC_F_TZINFO_SEQID1_RDMA,
	GDC_F_TZINFO_SEQID2_WDMA,
	GDC_F_TZINFO_SEQID2_RDMA,
	GDC_F_TZINFO_SEQID3_WDMA,
	GDC_F_TZINFO_SEQID3_RDMA,
	GDC_F_SRC_VOTF,
	GDC_F_BUS_USER_INFO_RDMA,
	GDC_F_BUS_USER_INFO_WDMA,
	GDC_F_SELREGISTERMODE,
	GDC_F_WDMA_IMG_CRC,
	GDC_F_WDMA_HEADER_CRC,
	GDC_F_WDMA_IMG_2P_CRC,
	GDC_F_WDMA_HEADER_2P_CRC,
	GDC_F_WDMA_MON_STATUS0,
	GDC_F_WDMA_MON_STATUS1,
	GDC_F_WDMA_MON_STATUS2,
	GDC_F_WDMA_MON_STATUS3,
	GDC_F_GDC_STOP_CRC_COUNT,
	GDC_F_GDC_STOP_CRC_RESULT,
	GDC_F_GDC_CORE_FREEZE_EN,
	GDC_F_GDC_CORE_FREEZE_POS_Y,
	GDC_F_GDC_CORE_FREEZE_POS_X,
	GDC_F_GRID_DX,
	GDC_F_GRID_DY,
	GDC_REG_FIELD_CNT,
};

static const struct camerapp_sfr_field gdc_fields[GDC_REG_FIELD_CNT] = {
	/* 1. field name 2. bit start 3. bit width 4. access type 5. reset */
	{"GDC_VERSION", 0, 32, RWI, 0x3100000},
	{"MONO_MODE", 7, 1, RW, 0x0},
	{"DST_PIXEL_FORMAT", 6, 1, RW, 0x0},
	{"SRC_PIXEL_FORMAT", 5, 1, RW, 0x0},
	{"DST_10BIT_FORMAT", 3, 2, RW, 0x0},
	{"SRC_10BIT_FORMAT", 1, 2, RW, 0x0},
	{"GDC_YUV_FORMAT", 0, 1, RW, 0x0},
	{"WDMA_COMP_LOSSY_BYTE32NUM", 2, 4, RW, 0x0},
	{"DST_COMPRESSOR", 0, 2, RW, 0x0},
	{"GDC_DST_BASE_LUM", 0, 32, RW, 0x0},
	{"GDC_DST_BASE_CHROMA", 0, 32, RW, 0x0},
	{"GDC_DST_HEADER_BASE_LUM", 0, 32, RW, 0x0},
	{"GDC_DST_HEADER_BASE_CHROMA", 0, 32, RW, 0x0},
	{"WRITE_STRIDE_LUMA", 0, 16, RW, 0x0},
	{"WRITE_STRIDE_CHROMA", 0, 16, RW, 0x0},
	{"WRITE_STRIDE_HEADER_LUMA", 0, 16, RW, 0x0},
	{"WRITE_STRIDE_HEADER_CHROMA", 0, 16, RW, 0x0},
	{"GDC_MIRROR_Y", 1, 1, RW, 0x0},
	{"GDC_MIRROR_X", 0, 1, RW, 0x0},
	{"GDC_ORG_HEIGHT", 16, 13, RW, 0x0},
	{"GDC_ORG_WIDTH", 0, 14, RW, 0x0},
	{"GDC_CROP_HEIGHT", 16, 13, RW, 0x0},
	{"GDC_CROP_WIDTH", 0, 14, RW, 0x0},
	{"GDC_CROP_START_Y", 16, 13, RW, 0x0},
	{"GDC_CROP_START_X", 0, 13, RW, 0x0},
	{"GDC_SCALE_Y", 16, 16, RW, 0x0},
	{"GDC_SCALE_X", 0, 16, RW, 0x0},
	{"GDC_SCALE_SHIFTER_Y", 4, 3, RW, 0x0},
	{"GDC_SCALE_SHIFTER_X", 0, 3, RW, 0x0},
	{"GDC_INV_SCALE_Y", 16, 14, RW, 0x0},
	{"GDC_INV_SCALE_X", 0, 14, RW, 0x0},
	{"GDC_IMAGE_ACTIVE_HEIGHT", 16, 13, RW, 0x0},
	{"GDC_IMAGE_ACTIVE_WIDTH", 0, 14, RW, 0x0},
	{"GDC_IMAGE_CROP_PRE_Y", 16, 13, RW, 0x0},
	{"GDC_IMAGE_CROP_PRE_X", 0, 13, RW, 0x0},
	{"GDC_OUT_SCALE_Y", 16, 8, RW, 0x80},
	{"GDC_OUT_SCALE_X", 0, 8, RW, 0x80},
	{"GDC_CLAMP_TYPE", 4, 2, RW, 0x0},
	{"GDC_INTERP_TYPE", 0, 2, RW, 0x0},
	{"WDMA_BUSY", 4, 1, RO, 0x0},
	{"RDMA_BUSY", 3, 1, RO, 0x0},
	{"PXCBUSYLUM", 2, 1, RO, 0x0},
	{"PORT0BUSY", 1, 1, RO, 0x0},
	{"GDC_ENGINE_BUSY", 0, 1, RO, 0x0},
	{"GDC_LUMA_MAX", 16, 10, RW, 0x3ff},
	{"GDC_LUMA_MIN", 0, 10, RW, 0x0},
	{"GDC_CHROMA_MAX", 16, 10, RW, 0x3ff},
	{"GDC_CHROMA_MIN", 0, 10, RW, 0x0},
	{"MAX_WR_MO", 8, 8, RW, 0x0},
	{"MAX_RD_MO", 0, 8, RW, 0x0},
	{"FLUSH", 0, 1, RW, 0x0},
	{"REQCNTLUM0", 0, 32, RO, 0x0},
	{"HITCNTLUM0", 0, 32, RO, 0x0},
	{"CHROMACACHEST0", 11, 8, RO, 0x0},
	{"HITFIFOST0", 5, 6, RO, 0x0},
	{"MISSFIFOST0", 0, 3, RO, 0x0},
	{"PXCSTRIDELUM", 0, 16, RW, 0x0},
	{"PXCSTRIDECHROMA", 0, 16, RW, 0x0},
	{"DPBLUMBASE", 0, 32, RW, 0x0},
	{"DPBCHRBASE", 0, 32, RW, 0x0},
	{"RESET_OK", 1, 1, RO, 0x0},
	{"EN_RESET", 0, 1, RW, 0x0},
	{"FRAMESTART_CMD", 0, 1, WO, 0x0},
	{"INT_MASK_VOTF_LOSTCONNECT", 1, 1, RW, 0x0},
	{"INT_MASK_FRAME_END", 0, 1, RW, 0x0},
	{"INT_STATUS_VOTF_LOSTCONNECT", 1, 1, RW, 0x0},
	{"INT_STATUS_FRAME_END", 0, 1, RW, 0x0},
	{"SW_RESET", 0, 1, RW, 0x0},
	{"GDC_PROCESSING", 0, 1, RW, 0x0},
	{"COLOR0_CRC_RESULT", 8, 8, RO, 0x0},
	{"COLOR0_CRC_SEED", 0, 8, RW, 0x0},
	{"COLOR1_CRC_RESULT", 8, 8, RO, 0x0},
	{"COLOR1_CRC_SEED", 0, 8, RW, 0x0},
	{"COLOR2_CRC_RESULT", 8, 8, RO, 0x0},
	{"COLOR2_CRC_SEED", 0, 8, RW, 0x0},
	{"SEQID", 0, 2, RW, 0x0},
	{"TZINFO_SEQID0_WDMA", 1, 1, RW, 0x0},
	{"TZINFO_SEQID0_RDMA", 0, 1, RW, 0x0},
	{"TZINFO_SEQID1_WDMA", 1, 1, RW, 0x0},
	{"TZINFO_SEQID1_RDMA", 0, 1, RW, 0x0},
	{"TZINFO_SEQID2_WDMA", 1, 1, RW, 0x0},
	{"TZINFO_SEQID2_RDMA", 0, 1, RW, 0x0},
	{"TZINFO_SEQID3_WDMA", 1, 1, RW, 0x0},
	{"TZINFO_SEQID3_RDMA", 0, 1, RW, 0x0},
	{"SRC_VOTF", 0, 1, RW, 0x0},
	{"BUS_USER_INFO_RDMA", 0, 10, RW, 0x0},
	{"BUS_USER_INFO_WDMA", 0, 10, RW, 0x0},
	{"SELREGISTERMODE", 0, 1, RW, 0x0},
	{"WDMA_IMG_CRC", 0, 32, RO, 0xffffffff},
	{"WDMA_HEADER_CRC", 0, 32, RO, 0xffffffff},
	{"WDMA_IMG_2P_CRC", 0, 32, RO, 0xffffffff},
	{"WDMA_HEADER_2P_CRC", 0, 32, RO, 0xffffffff},
	{"WDMA_MON_STATUS0", 0, 32, RO, 0x0},
	{"WDMA_MON_STATUS1", 0, 32, RO, 0x0},
	{"WDMA_MON_STATUS2", 0, 32, RO, 0x0},
	{"WDMA_MON_STATUS3", 0, 32, RO, 0x1f800},
	{"GDC_STOP_CRC_COUNT", 0, 28, RW, 0xfffffff},
	{"GDC_STOP_CRC_RESULT", 0, 8, RO, 0x0},
	{"GDC_CORE_FREEZE_EN", 0, 1, RW, 0x0},
	{"GDC_CORE_FREEZE_POS_Y", 16, 13, RW, 0x1fff},
	{"GDC_CORE_FREEZE_POS_X", 0, 13, RW, 0x1fff},
	{"GRID_DX", 0, 24, RIW, 0x0},
	{"GRID_DY", 0, 24, RIW, 0x0},
};

#endif

/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Hantro VPU codec driver
 *
 * Copyright 2018 Google LLC.
 *	Tomasz Figa <tfiga@chromium.org>
 */

#ifndef HANTRO_G1_REGS_H_
#define HANTRO_G1_REGS_H_

#define G1_SWREG(nr)                 ((nr) * 4)

/* Decoder registers. */
#define G1_REG_INTERRUPT				0x004
#define     G1_REG_INTERRUPT_DEC_PIC_INF		BIT(24)
#define     G1_REG_INTERRUPT_DEC_TIMEOUT		BIT(18)
#define     G1_REG_INTERRUPT_DEC_SLICE_INT		BIT(17)
#define     G1_REG_INTERRUPT_DEC_ERROR_INT		BIT(16)
#define     G1_REG_INTERRUPT_DEC_ASO_INT		BIT(15)
#define     G1_REG_INTERRUPT_DEC_BUFFER_INT		BIT(14)
#define     G1_REG_INTERRUPT_DEC_BUS_INT		BIT(13)
#define     G1_REG_INTERRUPT_DEC_RDY_INT		BIT(12)
#define     G1_REG_INTERRUPT_DEC_IRQ			BIT(8)
#define     G1_REG_INTERRUPT_DEC_IRQ_DIS		BIT(4)
#define     G1_REG_INTERRUPT_DEC_E			BIT(0)
#define G1_REG_CONFIG					0x008
#define     G1_REG_CONFIG_DEC_AXI_RD_ID(x)		(((x) & 0xff) << 24)
#define     G1_REG_CONFIG_DEC_TIMEOUT_E			BIT(23)
#define     G1_REG_CONFIG_DEC_STRSWAP32_E		BIT(22)
#define     G1_REG_CONFIG_DEC_STRENDIAN_E		BIT(21)
#define     G1_REG_CONFIG_DEC_INSWAP32_E		BIT(20)
#define     G1_REG_CONFIG_DEC_OUTSWAP32_E		BIT(19)
#define     G1_REG_CONFIG_DEC_DATA_DISC_E		BIT(18)
#define     G1_REG_CONFIG_TILED_MODE_MSB		BIT(17)
#define     G1_REG_CONFIG_DEC_OUT_TILED_E		BIT(17)
#define     G1_REG_CONFIG_DEC_LATENCY(x)		(((x) & 0x3f) << 11)
#define     G1_REG_CONFIG_DEC_CLK_GATE_E		BIT(10)
#define     G1_REG_CONFIG_DEC_IN_ENDIAN			BIT(9)
#define     G1_REG_CONFIG_DEC_OUT_ENDIAN		BIT(8)
#define     G1_REG_CONFIG_PRIORITY_MODE(x)		(((x) & 0x7) << 5)
#define     G1_REG_CONFIG_TILED_MODE_LSB		BIT(7)
#define     G1_REG_CONFIG_DEC_ADV_PRE_DIS		BIT(6)
#define     G1_REG_CONFIG_DEC_SCMD_DIS			BIT(5)
#define     G1_REG_CONFIG_DEC_MAX_BURST(x)		(((x) & 0x1f) << 0)
#define G1_REG_DEC_CTRL0				0x00c
#define     G1_REG_DEC_CTRL0_DEC_MODE(x)		(((x) & 0xf) << 28)
#define     G1_REG_DEC_CTRL0_RLC_MODE_E			BIT(27)
#define     G1_REG_DEC_CTRL0_SKIP_MODE			BIT(26)
#define     G1_REG_DEC_CTRL0_DIVX3_E			BIT(25)
#define     G1_REG_DEC_CTRL0_PJPEG_E			BIT(24)
#define     G1_REG_DEC_CTRL0_PIC_INTERLACE_E		BIT(23)
#define     G1_REG_DEC_CTRL0_PIC_FIELDMODE_E		BIT(22)
#define     G1_REG_DEC_CTRL0_PIC_B_E			BIT(21)
#define     G1_REG_DEC_CTRL0_PIC_INTER_E		BIT(20)
#define     G1_REG_DEC_CTRL0_PIC_TOPFIELD_E		BIT(19)
#define     G1_REG_DEC_CTRL0_FWD_INTERLACE_E		BIT(18)
#define     G1_REG_DEC_CTRL0_SORENSON_E			BIT(17)
#define     G1_REG_DEC_CTRL0_REF_TOPFIELD_E		BIT(16)
#define     G1_REG_DEC_CTRL0_DEC_OUT_DIS		BIT(15)
#define     G1_REG_DEC_CTRL0_FILTERING_DIS		BIT(14)
#define     G1_REG_DEC_CTRL0_WEBP_E			BIT(13)
#define     G1_REG_DEC_CTRL0_MVC_E			BIT(13)
#define     G1_REG_DEC_CTRL0_PIC_FIXED_QUANT		BIT(13)
#define     G1_REG_DEC_CTRL0_WRITE_MVS_E		BIT(12)
#define     G1_REG_DEC_CTRL0_REFTOPFIRST_E		BIT(11)
#define     G1_REG_DEC_CTRL0_SEQ_MBAFF_E		BIT(10)
#define     G1_REG_DEC_CTRL0_PICORD_COUNT_E		BIT(9)
#define     G1_REG_DEC_CTRL0_DEC_AHB_HLOCK_E		BIT(8)
#define     G1_REG_DEC_CTRL0_DEC_AXI_WR_ID(x)		(((x) & 0xff) << 0)
#define G1_REG_DEC_CTRL1				0x010
#define     G1_REG_DEC_CTRL1_PIC_MB_WIDTH(x)		(((x) & 0x1ff) << 23)
#define     G1_REG_DEC_CTRL1_MB_WIDTH_OFF(x)		(((x) & 0xf) << 19)
#define     G1_REG_DEC_CTRL1_PIC_MB_HEIGHT_P(x)		(((x) & 0xff) << 11)
#define     G1_REG_DEC_CTRL1_MB_HEIGHT_OFF(x)		(((x) & 0xf) << 7)
#define     G1_REG_DEC_CTRL1_ALT_SCAN_E			BIT(6)
#define     G1_REG_DEC_CTRL1_TOPFIELDFIRST_E		BIT(5)
#define     G1_REG_DEC_CTRL1_REF_FRAMES(x)		(((x) & 0x1f) << 0)
#define     G1_REG_DEC_CTRL1_PIC_MB_W_EXT(x)		(((x) & 0x7) << 3)
#define     G1_REG_DEC_CTRL1_PIC_MB_H_EXT(x)		(((x) & 0x7) << 0)
#define     G1_REG_DEC_CTRL1_PIC_REFER_FLAG		BIT(0)
#define G1_REG_DEC_CTRL2				0x014
#define     G1_REG_DEC_CTRL2_STRM_START_BIT(x)		(((x) & 0x3f) << 26)
#define     G1_REG_DEC_CTRL2_SYNC_MARKER_E		BIT(25)
#define     G1_REG_DEC_CTRL2_TYPE1_QUANT_E		BIT(24)
#define     G1_REG_DEC_CTRL2_CH_QP_OFFSET(x)		(((x) & 0x1f) << 19)
#define     G1_REG_DEC_CTRL2_CH_QP_OFFSET2(x)		(((x) & 0x1f) << 14)
#define     G1_REG_DEC_CTRL2_FIELDPIC_FLAG_E		BIT(0)
#define     G1_REG_DEC_CTRL2_INTRADC_VLC_THR(x)		(((x) & 0x7) << 16)
#define     G1_REG_DEC_CTRL2_VOP_TIME_INCR(x)		(((x) & 0xffff) << 0)
#define     G1_REG_DEC_CTRL2_DQ_PROFILE			BIT(24)
#define     G1_REG_DEC_CTRL2_DQBI_LEVEL			BIT(23)
#define     G1_REG_DEC_CTRL2_RANGE_RED_FRM_E		BIT(22)
#define     G1_REG_DEC_CTRL2_FAST_UVMC_E		BIT(20)
#define     G1_REG_DEC_CTRL2_TRANSDCTAB			BIT(17)
#define     G1_REG_DEC_CTRL2_TRANSACFRM(x)		(((x) & 0x3) << 15)
#define     G1_REG_DEC_CTRL2_TRANSACFRM2(x)		(((x) & 0x3) << 13)
#define     G1_REG_DEC_CTRL2_MB_MODE_TAB(x)		(((x) & 0x7) << 10)
#define     G1_REG_DEC_CTRL2_MVTAB(x)			(((x) & 0x7) << 7)
#define     G1_REG_DEC_CTRL2_CBPTAB(x)			(((x) & 0x7) << 4)
#define     G1_REG_DEC_CTRL2_2MV_BLK_PAT_TAB(x)		(((x) & 0x3) << 2)
#define     G1_REG_DEC_CTRL2_4MV_BLK_PAT_TAB(x)		(((x) & 0x3) << 0)
#define     G1_REG_DEC_CTRL2_QSCALE_TYPE		BIT(24)
#define     G1_REG_DEC_CTRL2_CON_MV_E			BIT(4)
#define     G1_REG_DEC_CTRL2_INTRA_DC_PREC(x)		(((x) & 0x3) << 2)
#define     G1_REG_DEC_CTRL2_INTRA_VLC_TAB		BIT(1)
#define     G1_REG_DEC_CTRL2_FRAME_PRED_DCT		BIT(0)
#define     G1_REG_DEC_CTRL2_JPEG_QTABLES(x)		(((x) & 0x3) << 11)
#define     G1_REG_DEC_CTRL2_JPEG_MODE(x)		(((x) & 0x7) << 8)
#define     G1_REG_DEC_CTRL2_JPEG_FILRIGHT_E		BIT(7)
#define     G1_REG_DEC_CTRL2_JPEG_STREAM_ALL		BIT(6)
#define     G1_REG_DEC_CTRL2_CR_AC_VLCTABLE		BIT(5)
#define     G1_REG_DEC_CTRL2_CB_AC_VLCTABLE		BIT(4)
#define     G1_REG_DEC_CTRL2_CR_DC_VLCTABLE		BIT(3)
#define     G1_REG_DEC_CTRL2_CB_DC_VLCTABLE		BIT(2)
#define     G1_REG_DEC_CTRL2_CR_DC_VLCTABLE3		BIT(1)
#define     G1_REG_DEC_CTRL2_CB_DC_VLCTABLE3		BIT(0)
#define     G1_REG_DEC_CTRL2_STRM1_START_BIT(x)		(((x) & 0x3f) << 18)
#define     G1_REG_DEC_CTRL2_HUFFMAN_E			BIT(17)
#define     G1_REG_DEC_CTRL2_MULTISTREAM_E		BIT(16)
#define     G1_REG_DEC_CTRL2_BOOLEAN_VALUE(x)		(((x) & 0xff) << 8)
#define     G1_REG_DEC_CTRL2_BOOLEAN_RANGE(x)		(((x) & 0xff) << 0)
#define     G1_REG_DEC_CTRL2_ALPHA_OFFSET(x)		(((x) & 0x1f) << 5)
#define     G1_REG_DEC_CTRL2_BETA_OFFSET(x)		(((x) & 0x1f) << 0)
#define G1_REG_DEC_CTRL3				0x018
#define     G1_REG_DEC_CTRL3_START_CODE_E		BIT(31)
#define     G1_REG_DEC_CTRL3_INIT_QP(x)			(((x) & 0x3f) << 25)
#define     G1_REG_DEC_CTRL3_CH_8PIX_ILEAV_E		BIT(24)
#define     G1_REG_DEC_CTRL3_STREAM_LEN_EXT(x)		(((x) & 0xff) << 24)
#define     G1_REG_DEC_CTRL3_STREAM_LEN(x)		(((x) & 0xffffff) << 0)
#define G1_REG_DEC_CTRL4				0x01c
#define     G1_REG_DEC_CTRL4_CABAC_E			BIT(31)
#define     G1_REG_DEC_CTRL4_BLACKWHITE_E		BIT(30)
#define     G1_REG_DEC_CTRL4_DIR_8X8_INFER_E		BIT(29)
#define     G1_REG_DEC_CTRL4_WEIGHT_PRED_E		BIT(28)
#define     G1_REG_DEC_CTRL4_WEIGHT_BIPR_IDC(x)		(((x) & 0x3) << 26)
#define     G1_REG_DEC_CTRL4_AVS_H264_H_EXT		BIT(25)
#define     G1_REG_DEC_CTRL4_FRAMENUM_LEN(x)		(((x) & 0x1f) << 16)
#define     G1_REG_DEC_CTRL4_FRAMENUM(x)		(((x) & 0xffff) << 0)
#define     G1_REG_DEC_CTRL4_BITPLANE0_E		BIT(31)
#define     G1_REG_DEC_CTRL4_BITPLANE1_E		BIT(30)
#define     G1_REG_DEC_CTRL4_BITPLANE2_E		BIT(29)
#define     G1_REG_DEC_CTRL4_ALT_PQUANT(x)		(((x) & 0x1f) << 24)
#define     G1_REG_DEC_CTRL4_DQ_EDGES(x)		(((x) & 0xf) << 20)
#define     G1_REG_DEC_CTRL4_TTMBF			BIT(19)
#define     G1_REG_DEC_CTRL4_PQINDEX(x)			(((x) & 0x1f) << 14)
#define     G1_REG_DEC_CTRL4_VC1_HEIGHT_EXT		BIT(13)
#define     G1_REG_DEC_CTRL4_BILIN_MC_E			BIT(12)
#define     G1_REG_DEC_CTRL4_UNIQP_E			BIT(11)
#define     G1_REG_DEC_CTRL4_HALFQP_E			BIT(10)
#define     G1_REG_DEC_CTRL4_TTFRM(x)			(((x) & 0x3) << 8)
#define     G1_REG_DEC_CTRL4_2ND_BYTE_EMUL_E		BIT(7)
#define     G1_REG_DEC_CTRL4_DQUANT_E			BIT(6)
#define     G1_REG_DEC_CTRL4_VC1_ADV_E			BIT(5)
#define     G1_REG_DEC_CTRL4_PJPEG_FILDOWN_E		BIT(26)
#define     G1_REG_DEC_CTRL4_PJPEG_WDIV8		BIT(25)
#define     G1_REG_DEC_CTRL4_PJPEG_HDIV8		BIT(24)
#define     G1_REG_DEC_CTRL4_PJPEG_AH(x)		(((x) & 0xf) << 20)
#define     G1_REG_DEC_CTRL4_PJPEG_AL(x)		(((x) & 0xf) << 16)
#define     G1_REG_DEC_CTRL4_PJPEG_SS(x)		(((x) & 0xff) << 8)
#define     G1_REG_DEC_CTRL4_PJPEG_SE(x)		(((x) & 0xff) << 0)
#define     G1_REG_DEC_CTRL4_DCT1_START_BIT(x)		(((x) & 0x3f) << 26)
#define     G1_REG_DEC_CTRL4_DCT2_START_BIT(x)		(((x) & 0x3f) << 20)
#define     G1_REG_DEC_CTRL4_CH_MV_RES			BIT(13)
#define     G1_REG_DEC_CTRL4_INIT_DC_MATCH0(x)		(((x) & 0x7) << 9)
#define     G1_REG_DEC_CTRL4_INIT_DC_MATCH1(x)		(((x) & 0x7) << 6)
#define     G1_REG_DEC_CTRL4_VP7_VERSION		BIT(5)
#define G1_REG_DEC_CTRL5				0x020
#define     G1_REG_DEC_CTRL5_CONST_INTRA_E		BIT(31)
#define     G1_REG_DEC_CTRL5_FILT_CTRL_PRES		BIT(30)
#define     G1_REG_DEC_CTRL5_RDPIC_CNT_PRES		BIT(29)
#define     G1_REG_DEC_CTRL5_8X8TRANS_FLAG_E		BIT(28)
#define     G1_REG_DEC_CTRL5_REFPIC_MK_LEN(x)		(((x) & 0x7ff) << 17)
#define     G1_REG_DEC_CTRL5_IDR_PIC_E			BIT(16)
#define     G1_REG_DEC_CTRL5_IDR_PIC_ID(x)		(((x) & 0xffff) << 0)
#define     G1_REG_DEC_CTRL5_MV_SCALEFACTOR(x)		(((x) & 0xff) << 24)
#define     G1_REG_DEC_CTRL5_REF_DIST_FWD(x)		(((x) & 0x1f) << 19)
#define     G1_REG_DEC_CTRL5_REF_DIST_BWD(x)		(((x) & 0x1f) << 14)
#define     G1_REG_DEC_CTRL5_LOOP_FILT_LIMIT(x)		(((x) & 0xf) << 14)
#define     G1_REG_DEC_CTRL5_VARIANCE_TEST_E		BIT(13)
#define     G1_REG_DEC_CTRL5_MV_THRESHOLD(x)		(((x) & 0x7) << 10)
#define     G1_REG_DEC_CTRL5_VAR_THRESHOLD(x)		(((x) & 0x3ff) << 0)
#define     G1_REG_DEC_CTRL5_DIVX_IDCT_E		BIT(8)
#define     G1_REG_DEC_CTRL5_DIVX3_SLICE_SIZE(x)	(((x) & 0xff) << 0)
#define     G1_REG_DEC_CTRL5_PJPEG_REST_FREQ(x)		(((x) & 0xffff) << 0)
#define     G1_REG_DEC_CTRL5_RV_PROFILE(x)		(((x) & 0x3) << 30)
#define     G1_REG_DEC_CTRL5_RV_OSV_QUANT(x)		(((x) & 0x3) << 28)
#define     G1_REG_DEC_CTRL5_RV_FWD_SCALE(x)		(((x) & 0x3fff) << 14)
#define     G1_REG_DEC_CTRL5_RV_BWD_SCALE(x)		(((x) & 0x3fff) << 0)
#define     G1_REG_DEC_CTRL5_INIT_DC_COMP0(x)		(((x) & 0xffff) << 16)
#define     G1_REG_DEC_CTRL5_INIT_DC_COMP1(x)		(((x) & 0xffff) << 0)
#define G1_REG_DEC_CTRL6				0x024
#define     G1_REG_DEC_CTRL6_PPS_ID(x)			(((x) & 0xff) << 24)
#define     G1_REG_DEC_CTRL6_REFIDX1_ACTIVE(x)		(((x) & 0x1f) << 19)
#define     G1_REG_DEC_CTRL6_REFIDX0_ACTIVE(x)		(((x) & 0x1f) << 14)
#define     G1_REG_DEC_CTRL6_POC_LENGTH(x)		(((x) & 0xff) << 0)
#define     G1_REG_DEC_CTRL6_ICOMP0_E			BIT(24)
#define     G1_REG_DEC_CTRL6_ISCALE0(x)			(((x) & 0xff) << 16)
#define     G1_REG_DEC_CTRL6_ISHIFT0(x)			(((x) & 0xffff) << 0)
#define     G1_REG_DEC_CTRL6_STREAM1_LEN(x)		(((x) & 0xffffff) << 0)
#define     G1_REG_DEC_CTRL6_PIC_SLICE_AM(x)		(((x) & 0x1fff) << 0)
#define     G1_REG_DEC_CTRL6_COEFFS_PART_AM(x)		(((x) & 0xf) << 24)
#define G1_REG_FWD_PIC(i)				(0x028 + ((i) * 0x4))
#define     G1_REG_FWD_PIC_PINIT_RLIST_F5(x)		(((x) & 0x1f) << 25)
#define     G1_REG_FWD_PIC_PINIT_RLIST_F4(x)		(((x) & 0x1f) << 20)
#define     G1_REG_FWD_PIC_PINIT_RLIST_F3(x)		(((x) & 0x1f) << 15)
#define     G1_REG_FWD_PIC_PINIT_RLIST_F2(x)		(((x) & 0x1f) << 10)
#define     G1_REG_FWD_PIC_PINIT_RLIST_F1(x)		(((x) & 0x1f) << 5)
#define     G1_REG_FWD_PIC_PINIT_RLIST_F0(x)		(((x) & 0x1f) << 0)
#define     G1_REG_FWD_PIC1_ICOMP1_E			BIT(24)
#define     G1_REG_FWD_PIC1_ISCALE1(x)			(((x) & 0xff) << 16)
#define     G1_REG_FWD_PIC1_ISHIFT1(x)			(((x) & 0xffff) << 0)
#define     G1_REG_FWD_PIC1_SEGMENT_BASE(x)		((x) << 0)
#define     G1_REG_FWD_PIC1_SEGMENT_UPD_E		BIT(1)
#define     G1_REG_FWD_PIC1_SEGMENT_E			BIT(0)
#define G1_REG_DEC_CTRL7				0x02c
#define     G1_REG_DEC_CTRL7_PINIT_RLIST_F15(x)		(((x) & 0x1f) << 25)
#define     G1_REG_DEC_CTRL7_PINIT_RLIST_F14(x)		(((x) & 0x1f) << 20)
#define     G1_REG_DEC_CTRL7_PINIT_RLIST_F13(x)		(((x) & 0x1f) << 15)
#define     G1_REG_DEC_CTRL7_PINIT_RLIST_F12(x)		(((x) & 0x1f) << 10)
#define     G1_REG_DEC_CTRL7_PINIT_RLIST_F11(x)		(((x) & 0x1f) << 5)
#define     G1_REG_DEC_CTRL7_PINIT_RLIST_F10(x)		(((x) & 0x1f) << 0)
#define     G1_REG_DEC_CTRL7_ICOMP2_E			BIT(24)
#define     G1_REG_DEC_CTRL7_ISCALE2(x)			(((x) & 0xff) << 16)
#define     G1_REG_DEC_CTRL7_ISHIFT2(x)			(((x) & 0xffff) << 0)
#define     G1_REG_DEC_CTRL7_DCT3_START_BIT(x)		(((x) & 0x3f) << 24)
#define     G1_REG_DEC_CTRL7_DCT4_START_BIT(x)		(((x) & 0x3f) << 18)
#define     G1_REG_DEC_CTRL7_DCT5_START_BIT(x)		(((x) & 0x3f) << 12)
#define     G1_REG_DEC_CTRL7_DCT6_START_BIT(x)		(((x) & 0x3f) << 6)
#define     G1_REG_DEC_CTRL7_DCT7_START_BIT(x)		(((x) & 0x3f) << 0)
#define G1_REG_ADDR_STR					0x030
#define G1_REG_ADDR_DST					0x034
#define G1_REG_ADDR_REF(i)				(0x038 + ((i) * 0x4))
#define     G1_REG_ADDR_REF_FIELD_E			BIT(1)
#define     G1_REG_ADDR_REF_TOPC_E			BIT(0)
#define G1_REG_REF_PIC(i)				(0x078 + ((i) * 0x4))
#define     G1_REG_REF_PIC_FILT_TYPE_E			BIT(31)
#define     G1_REG_REF_PIC_FILT_SHARPNESS(x)		(((x) & 0x7) << 28)
#define     G1_REG_REF_PIC_MB_ADJ_0(x)			(((x) & 0x7f) << 21)
#define     G1_REG_REF_PIC_MB_ADJ_1(x)			(((x) & 0x7f) << 14)
#define     G1_REG_REF_PIC_MB_ADJ_2(x)			(((x) & 0x7f) << 7)
#define     G1_REG_REF_PIC_MB_ADJ_3(x)			(((x) & 0x7f) << 0)
#define     G1_REG_REF_PIC_REFER1_NBR(x)		(((x) & 0xffff) << 16)
#define     G1_REG_REF_PIC_REFER0_NBR(x)		(((x) & 0xffff) << 0)
#define     G1_REG_REF_PIC_LF_LEVEL_0(x)		(((x) & 0x3f) << 18)
#define     G1_REG_REF_PIC_LF_LEVEL_1(x)		(((x) & 0x3f) << 12)
#define     G1_REG_REF_PIC_LF_LEVEL_2(x)		(((x) & 0x3f) << 6)
#define     G1_REG_REF_PIC_LF_LEVEL_3(x)		(((x) & 0x3f) << 0)
#define     G1_REG_REF_PIC_QUANT_DELTA_0(x)		(((x) & 0x1f) << 27)
#define     G1_REG_REF_PIC_QUANT_DELTA_1(x)		(((x) & 0x1f) << 22)
#define     G1_REG_REF_PIC_QUANT_0(x)			(((x) & 0x7ff) << 11)
#define     G1_REG_REF_PIC_QUANT_1(x)			(((x) & 0x7ff) << 0)
#define G1_REG_LT_REF					0x098
#define G1_REG_VALID_REF				0x09c
#define G1_REG_ADDR_QTABLE				0x0a0
#define G1_REG_ADDR_DIR_MV				0x0a4
#define G1_REG_BD_REF_PIC(i)				(0x0a8 + ((i) * 0x4))
#define     G1_REG_BD_REF_PIC_BINIT_RLIST_B2(x)		(((x) & 0x1f) << 25)
#define     G1_REG_BD_REF_PIC_BINIT_RLIST_F2(x)		(((x) & 0x1f) << 20)
#define     G1_REG_BD_REF_PIC_BINIT_RLIST_B1(x)		(((x) & 0x1f) << 15)
#define     G1_REG_BD_REF_PIC_BINIT_RLIST_F1(x)		(((x) & 0x1f) << 10)
#define     G1_REG_BD_REF_PIC_BINIT_RLIST_B0(x)		(((x) & 0x1f) << 5)
#define     G1_REG_BD_REF_PIC_BINIT_RLIST_F0(x)		(((x) & 0x1f) << 0)
#define     G1_REG_BD_REF_PIC_PRED_TAP_2_M1(x)		(((x) & 0x3) << 10)
#define     G1_REG_BD_REF_PIC_PRED_TAP_2_4(x)		(((x) & 0x3) << 8)
#define     G1_REG_BD_REF_PIC_PRED_TAP_4_M1(x)		(((x) & 0x3) << 6)
#define     G1_REG_BD_REF_PIC_PRED_TAP_4_4(x)		(((x) & 0x3) << 4)
#define     G1_REG_BD_REF_PIC_PRED_TAP_6_M1(x)		(((x) & 0x3) << 2)
#define     G1_REG_BD_REF_PIC_PRED_TAP_6_4(x)		(((x) & 0x3) << 0)
#define     G1_REG_BD_REF_PIC_QUANT_DELTA_2(x)		(((x) & 0x1f) << 27)
#define     G1_REG_BD_REF_PIC_QUANT_DELTA_3(x)		(((x) & 0x1f) << 22)
#define     G1_REG_BD_REF_PIC_QUANT_2(x)		(((x) & 0x7ff) << 11)
#define     G1_REG_BD_REF_PIC_QUANT_3(x)		(((x) & 0x7ff) << 0)
#define G1_REG_BD_P_REF_PIC				0x0bc
#define     G1_REG_BD_P_REF_PIC_QUANT_DELTA_4(x)	(((x) & 0x1f) << 27)
#define     G1_REG_BD_P_REF_PIC_PINIT_RLIST_F3(x)	(((x) & 0x1f) << 25)
#define     G1_REG_BD_P_REF_PIC_PINIT_RLIST_F2(x)	(((x) & 0x1f) << 20)
#define     G1_REG_BD_P_REF_PIC_PINIT_RLIST_F1(x)	(((x) & 0x1f) << 15)
#define     G1_REG_BD_P_REF_PIC_PINIT_RLIST_F0(x)	(((x) & 0x1f) << 10)
#define     G1_REG_BD_P_REF_PIC_BINIT_RLIST_B15(x)	(((x) & 0x1f) << 5)
#define     G1_REG_BD_P_REF_PIC_BINIT_RLIST_F15(x)	(((x) & 0x1f) << 0)
#define G1_REG_ERR_CONC					0x0c0
#define     G1_REG_ERR_CONC_STARTMB_X(x)		(((x) & 0x1ff) << 23)
#define     G1_REG_ERR_CONC_STARTMB_Y(x)		(((x) & 0xff) << 15)
#define G1_REG_PRED_FLT					0x0c4
#define     G1_REG_PRED_FLT_PRED_BC_TAP_0_0(x)		(((x) & 0x3ff) << 22)
#define     G1_REG_PRED_FLT_PRED_BC_TAP_0_1(x)		(((x) & 0x3ff) << 12)
#define     G1_REG_PRED_FLT_PRED_BC_TAP_0_2(x)		(((x) & 0x3ff) << 2)
#define G1_REG_REF_BUF_CTRL				0x0cc
#define     G1_REG_REF_BUF_CTRL_REFBU_E			BIT(31)
#define     G1_REG_REF_BUF_CTRL_REFBU_THR(x)		(((x) & 0xfff) << 19)
#define     G1_REG_REF_BUF_CTRL_REFBU_PICID(x)		(((x) & 0x1f) << 14)
#define     G1_REG_REF_BUF_CTRL_REFBU_EVAL_E		BIT(13)
#define     G1_REG_REF_BUF_CTRL_REFBU_FPARMOD_E		BIT(12)
#define     G1_REG_REF_BUF_CTRL_REFBU_Y_OFFSET(x)	(((x) & 0x1ff) << 0)
#define G1_REG_REF_BUF_CTRL2				0x0dc
#define     G1_REG_REF_BUF_CTRL2_REFBU2_BUF_E		BIT(31)
#define     G1_REG_REF_BUF_CTRL2_REFBU2_THR(x)		(((x) & 0xfff) << 19)
#define     G1_REG_REF_BUF_CTRL2_REFBU2_PICID(x)	(((x) & 0x1f) << 14)
#define     G1_REG_REF_BUF_CTRL2_APF_THRESHOLD(x)	(((x) & 0x3fff) << 0)
#define G1_REG_SOFT_RESET				0x194

/* Post-processor registers. */
#define G1_REG_PP_INTERRUPT		G1_SWREG(60)
#define    G1_REG_PP_READY_IRQ		BIT(12)
#define    G1_REG_PP_IRQ		BIT(8)
#define    G1_REG_PP_IRQ_DIS		BIT(4)
#define    G1_REG_PP_PIPELINE_EN	BIT(1)
#define    G1_REG_PP_EXTERNAL_TRIGGER	BIT(0)
#define G1_REG_PP_DEV_CONFIG		G1_SWREG(61)
#define     G1_REG_PP_AXI_RD_ID(v)	(((v) << 24) & GENMASK(31, 24))
#define     G1_REG_PP_AXI_WR_ID(v)	(((v) << 16) & GENMASK(23, 16))
#define     G1_REG_PP_INSWAP32_E(v)	((v) ? BIT(10) : 0)
#define     G1_REG_PP_DATA_DISC_E(v)	((v) ? BIT(9) : 0)
#define     G1_REG_PP_CLK_GATE_E(v)	((v) ? BIT(8) : 0)
#define     G1_REG_PP_IN_ENDIAN(v)	((v) ? BIT(7) : 0)
#define     G1_REG_PP_OUT_ENDIAN(v)	((v) ? BIT(6) : 0)
#define     G1_REG_PP_OUTSWAP32_E(v)	((v) ? BIT(5) : 0)
#define     G1_REG_PP_MAX_BURST(v)	(((v) << 0) & GENMASK(4, 0))
#define G1_REG_PP_IN_LUMA_BASE		G1_SWREG(63)
#define G1_REG_PP_IN_CB_BASE		G1_SWREG(64)
#define G1_REG_PP_IN_CR_BASE		G1_SWREG(65)
#define G1_REG_PP_OUT_LUMA_BASE		G1_SWREG(66)
#define G1_REG_PP_OUT_CHROMA_BASE	G1_SWREG(67)
#define G1_REG_PP_CONTRAST_ADJUST	G1_SWREG(68)
#define G1_REG_PP_COLOR_CONVERSION	G1_SWREG(69)
#define G1_REG_PP_COLOR_CONVERSION0	G1_SWREG(70)
#define G1_REG_PP_COLOR_CONVERSION1	G1_SWREG(71)
#define G1_REG_PP_INPUT_SIZE		G1_SWREG(72)
#define    G1_REG_PP_INPUT_SIZE_HEIGHT(v) (((v) << 9) & GENMASK(16, 9))
#define    G1_REG_PP_INPUT_SIZE_WIDTH(v)  (((v) << 0) & GENMASK(8, 0))
#define G1_REG_PP_SCALING0		G1_SWREG(79)
#define     G1_REG_PP_PADD_R(v)	(((v) << 23) & GENMASK(27, 23))
#define     G1_REG_PP_PADD_G(v)	(((v) << 18) & GENMASK(22, 18))
#define     G1_REG_PP_RANGEMAP_Y(v) ((v) ? BIT(31) : 0)
#define     G1_REG_PP_RANGEMAP_C(v) ((v) ? BIT(30) : 0)
#define     G1_REG_PP_YCBCR_RANGE(v) ((v) ? BIT(29) : 0)
#define     G1_REG_PP_RGB_16(v) ((v) ? BIT(28) : 0)
#define G1_REG_PP_SCALING1		G1_SWREG(80)
#define     G1_REG_PP_PADD_B(v)	(((v) << 18) & GENMASK(22, 18))
#define G1_REG_PP_MASK_R		G1_SWREG(82)
#define G1_REG_PP_MASK_G		G1_SWREG(83)
#define G1_REG_PP_MASK_B		G1_SWREG(84)
#define G1_REG_PP_CONTROL		G1_SWREG(85)
#define     G1_REG_PP_CONTROL_IN_FMT(v)	(((v) << 29) & GENMASK(31, 29))
#define     G1_REG_PP_CONTROL_OUT_FMT(v) (((v) << 26) & GENMASK(28, 26))
#define     G1_REG_PP_CONTROL_OUT_HEIGHT(v) (((v) << 15) & GENMASK(25, 15))
#define     G1_REG_PP_CONTROL_OUT_WIDTH(v) (((v) << 4) & GENMASK(14, 4))
#define G1_REG_PP_MASK1_ORIG_WIDTH	G1_SWREG(88)
#define     G1_REG_PP_ORIG_WIDTH(v)	(((v) << 23) & GENMASK(31, 23))
#define G1_REG_PP_DISPLAY_WIDTH		G1_SWREG(92)
#define G1_REG_PP_FUSE			G1_SWREG(99)

#endif /* HANTRO_G1_REGS_H_ */

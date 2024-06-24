/* SPDX-License-Identifier: GPL-2.0 */
/*  Marvell OcteonTx2 RVU Admin Function driver
 *
 * Copyright (C) 2018 Marvell International Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef RVU_REG_H
#define RVU_REG_H

/* Admin function registers */
#define RVU_AF_MSIXTR_BASE                  (0x10)
#define RVU_AF_ECO                          (0x20)
#define RVU_AF_BLK_RST                      (0x30)
#define RVU_AF_PF_BAR4_ADDR                 (0x40)
#define RVU_AF_RAS                          (0x100)
#define RVU_AF_RAS_W1S                      (0x108)
#define RVU_AF_RAS_ENA_W1S                  (0x110)
#define RVU_AF_RAS_ENA_W1C                  (0x118)
#define RVU_AF_GEN_INT                      (0x120)
#define RVU_AF_GEN_INT_W1S                  (0x128)
#define RVU_AF_GEN_INT_ENA_W1S              (0x130)
#define RVU_AF_GEN_INT_ENA_W1C              (0x138)
#define	RVU_AF_AFPF_MBOX0		    (0x02000)
#define	RVU_AF_AFPF_MBOX1		    (0x02008)
#define RVU_AF_AFPFX_MBOXX(a, b)            (0x2000 | (a) << 4 | (b) << 3)
#define RVU_AF_PFME_STATUS                  (0x2800)
#define RVU_AF_PFTRPEND                     (0x2810)
#define RVU_AF_PFTRPEND_W1S                 (0x2820)
#define RVU_AF_PF_RST                       (0x2840)
#define RVU_AF_HWVF_RST                     (0x2850)
#define RVU_AF_PFAF_MBOX_INT                (0x2880)
#define RVU_AF_PFAF_MBOX_INT_W1S            (0x2888)
#define RVU_AF_PFAF_MBOX_INT_ENA_W1S        (0x2890)
#define RVU_AF_PFAF_MBOX_INT_ENA_W1C        (0x2898)
#define RVU_AF_PFFLR_INT                    (0x28a0)
#define RVU_AF_PFFLR_INT_W1S                (0x28a8)
#define RVU_AF_PFFLR_INT_ENA_W1S            (0x28b0)
#define RVU_AF_PFFLR_INT_ENA_W1C            (0x28b8)
#define RVU_AF_PFME_INT                     (0x28c0)
#define RVU_AF_PFME_INT_W1S                 (0x28c8)
#define RVU_AF_PFME_INT_ENA_W1S             (0x28d0)
#define RVU_AF_PFME_INT_ENA_W1C             (0x28d8)

/* Admin function's privileged PF/VF registers */
#define RVU_PRIV_CONST                      (0x8000000)
#define RVU_PRIV_GEN_CFG                    (0x8000010)
#define RVU_PRIV_CLK_CFG                    (0x8000020)
#define RVU_PRIV_ACTIVE_PC                  (0x8000030)
#define RVU_PRIV_PFX_CFG(a)                 (0x8000100 | (a) << 16)
#define RVU_PRIV_PFX_MSIX_CFG(a)            (0x8000110 | (a) << 16)
#define RVU_PRIV_PFX_ID_CFG(a)              (0x8000120 | (a) << 16)
#define RVU_PRIV_PFX_INT_CFG(a)             (0x8000200 | (a) << 16)
#define RVU_PRIV_PFX_NIX0_CFG               (0x8000300)
#define RVU_PRIV_PFX_NPA_CFG		    (0x8000310)
#define RVU_PRIV_PFX_SSO_CFG                (0x8000320)
#define RVU_PRIV_PFX_SSOW_CFG               (0x8000330)
#define RVU_PRIV_PFX_TIM_CFG                (0x8000340)
#define RVU_PRIV_PFX_CPT0_CFG               (0x8000350)
#define RVU_PRIV_BLOCK_TYPEX_REV(a)         (0x8000400 | (a) << 3)
#define RVU_PRIV_HWVFX_INT_CFG(a)           (0x8001280 | (a) << 16)
#define RVU_PRIV_HWVFX_NIX0_CFG             (0x8001300)
#define RVU_PRIV_HWVFX_NPA_CFG              (0x8001310)
#define RVU_PRIV_HWVFX_SSO_CFG              (0x8001320)
#define RVU_PRIV_HWVFX_SSOW_CFG             (0x8001330)
#define RVU_PRIV_HWVFX_TIM_CFG              (0x8001340)
#define RVU_PRIV_HWVFX_CPT0_CFG             (0x8001350)

/* RVU PF registers */
#define	RVU_PF_VFX_PFVF_MBOX0		    (0x00000)
#define	RVU_PF_VFX_PFVF_MBOX1		    (0x00008)
#define RVU_PF_VFX_PFVF_MBOXX(a, b)         (0x0 | (a) << 12 | (b) << 3)
#define RVU_PF_VF_BAR4_ADDR                 (0x10)
#define RVU_PF_BLOCK_ADDRX_DISC(a)          (0x200 | (a) << 3)
#define RVU_PF_VFME_STATUSX(a)              (0x800 | (a) << 3)
#define RVU_PF_VFTRPENDX(a)                 (0x820 | (a) << 3)
#define RVU_PF_VFTRPEND_W1SX(a)             (0x840 | (a) << 3)
#define RVU_PF_VFPF_MBOX_INTX(a)            (0x880 | (a) << 3)
#define RVU_PF_VFPF_MBOX_INT_W1SX(a)        (0x8A0 | (a) << 3)
#define RVU_PF_VFPF_MBOX_INT_ENA_W1SX(a)    (0x8C0 | (a) << 3)
#define RVU_PF_VFPF_MBOX_INT_ENA_W1CX(a)    (0x8E0 | (a) << 3)
#define RVU_PF_VFFLR_INTX(a)                (0x900 | (a) << 3)
#define RVU_PF_VFFLR_INT_W1SX(a)            (0x920 | (a) << 3)
#define RVU_PF_VFFLR_INT_ENA_W1SX(a)        (0x940 | (a) << 3)
#define RVU_PF_VFFLR_INT_ENA_W1CX(a)        (0x960 | (a) << 3)
#define RVU_PF_VFME_INTX(a)                 (0x980 | (a) << 3)
#define RVU_PF_VFME_INT_W1SX(a)             (0x9A0 | (a) << 3)
#define RVU_PF_VFME_INT_ENA_W1SX(a)         (0x9C0 | (a) << 3)
#define RVU_PF_VFME_INT_ENA_W1CX(a)         (0x9E0 | (a) << 3)
#define RVU_PF_PFAF_MBOX0                   (0xC00)
#define RVU_PF_PFAF_MBOX1                   (0xC08)
#define RVU_PF_PFAF_MBOXX(a)                (0xC00 | (a) << 3)
#define RVU_PF_INT                          (0xc20)
#define RVU_PF_INT_W1S                      (0xc28)
#define RVU_PF_INT_ENA_W1S                  (0xc30)
#define RVU_PF_INT_ENA_W1C                  (0xc38)
#define RVU_PF_MSIX_VECX_ADDR(a)            (0x000 | (a) << 4)
#define RVU_PF_MSIX_VECX_CTL(a)             (0x008 | (a) << 4)
#define RVU_PF_MSIX_PBAX(a)                 (0xF0000 | (a) << 3)

/* RVU VF registers */
#define	RVU_VF_VFPF_MBOX0		    (0x00000)
#define	RVU_VF_VFPF_MBOX1		    (0x00008)

/* NPA block's admin function registers */
#define NPA_AF_BLK_RST                  (0x0000)
#define NPA_AF_CONST                    (0x0010)
#define NPA_AF_CONST1                   (0x0018)
#define NPA_AF_LF_RST                   (0x0020)
#define NPA_AF_GEN_CFG                  (0x0030)
#define NPA_AF_NDC_CFG                  (0x0040)
#define NPA_AF_INP_CTL                  (0x00D0)
#define NPA_AF_ACTIVE_CYCLES_PC         (0x00F0)
#define NPA_AF_AVG_DELAY                (0x0100)
#define NPA_AF_GEN_INT                  (0x0140)
#define NPA_AF_GEN_INT_W1S              (0x0148)
#define NPA_AF_GEN_INT_ENA_W1S          (0x0150)
#define NPA_AF_GEN_INT_ENA_W1C          (0x0158)
#define NPA_AF_RVU_INT                  (0x0160)
#define NPA_AF_RVU_INT_W1S              (0x0168)
#define NPA_AF_RVU_INT_ENA_W1S          (0x0170)
#define NPA_AF_RVU_INT_ENA_W1C          (0x0178)
#define NPA_AF_ERR_INT			(0x0180)
#define NPA_AF_ERR_INT_W1S		(0x0188)
#define NPA_AF_ERR_INT_ENA_W1S		(0x0190)
#define NPA_AF_ERR_INT_ENA_W1C		(0x0198)
#define NPA_AF_RAS			(0x01A0)
#define NPA_AF_RAS_W1S			(0x01A8)
#define NPA_AF_RAS_ENA_W1S		(0x01B0)
#define NPA_AF_RAS_ENA_W1C		(0x01B8)
#define NPA_AF_BP_TEST                  (0x0200)
#define NPA_AF_ECO                      (0x0300)
#define NPA_AF_AQ_CFG                   (0x0600)
#define NPA_AF_AQ_BASE                  (0x0610)
#define NPA_AF_AQ_STATUS		(0x0620)
#define NPA_AF_AQ_DOOR                  (0x0630)
#define NPA_AF_AQ_DONE_WAIT             (0x0640)
#define NPA_AF_AQ_DONE                  (0x0650)
#define NPA_AF_AQ_DONE_ACK              (0x0660)
#define NPA_AF_AQ_DONE_INT              (0x0680)
#define NPA_AF_AQ_DONE_INT_W1S          (0x0688)
#define NPA_AF_AQ_DONE_ENA_W1S          (0x0690)
#define NPA_AF_AQ_DONE_ENA_W1C          (0x0698)
#define NPA_AF_LFX_AURAS_CFG(a)         (0x4000 | (a) << 18)
#define NPA_AF_LFX_LOC_AURAS_BASE(a)    (0x4010 | (a) << 18)
#define NPA_AF_LFX_QINTS_CFG(a)         (0x4100 | (a) << 18)
#define NPA_AF_LFX_QINTS_BASE(a)        (0x4110 | (a) << 18)
#define NPA_PRIV_AF_INT_CFG             (0x10000)
#define NPA_PRIV_LFX_CFG		(0x10010)
#define NPA_PRIV_LFX_INT_CFG		(0x10020)
#define NPA_AF_RVU_LF_CFG_DEBUG         (0x10030)

/* NIX block's admin function registers */
#define NIX_AF_CFG			(0x0000)
#define NIX_AF_STATUS			(0x0010)
#define NIX_AF_NDC_CFG			(0x0018)
#define NIX_AF_CONST			(0x0020)
#define NIX_AF_CONST1			(0x0028)
#define NIX_AF_CONST2			(0x0030)
#define NIX_AF_CONST3			(0x0038)
#define NIX_AF_SQ_CONST			(0x0040)
#define NIX_AF_CQ_CONST			(0x0048)
#define NIX_AF_RQ_CONST			(0x0050)
#define NIX_AF_PSE_CONST		(0x0060)
#define NIX_AF_TL1_CONST		(0x0070)
#define NIX_AF_TL2_CONST		(0x0078)
#define NIX_AF_TL3_CONST		(0x0080)
#define NIX_AF_TL4_CONST		(0x0088)
#define NIX_AF_MDQ_CONST		(0x0090)
#define NIX_AF_MC_MIRROR_CONST		(0x0098)
#define NIX_AF_LSO_CFG			(0x00A8)
#define NIX_AF_BLK_RST			(0x00B0)
#define NIX_AF_TX_TSTMP_CFG		(0x00C0)
#define NIX_AF_RX_CFG			(0x00D0)
#define NIX_AF_AVG_DELAY		(0x00E0)
#define NIX_AF_CINT_DELAY		(0x00F0)
#define NIX_AF_RX_MCAST_BASE		(0x0100)
#define NIX_AF_RX_MCAST_CFG		(0x0110)
#define NIX_AF_RX_MCAST_BUF_BASE	(0x0120)
#define NIX_AF_RX_MCAST_BUF_CFG		(0x0130)
#define NIX_AF_RX_MIRROR_BUF_BASE	(0x0140)
#define NIX_AF_RX_MIRROR_BUF_CFG	(0x0148)
#define NIX_AF_LF_RST			(0x0150)
#define NIX_AF_GEN_INT			(0x0160)
#define NIX_AF_GEN_INT_W1S		(0x0168)
#define NIX_AF_GEN_INT_ENA_W1S		(0x0170)
#define NIX_AF_GEN_INT_ENA_W1C		(0x0178)
#define NIX_AF_ERR_INT			(0x0180)
#define NIX_AF_ERR_INT_W1S		(0x0188)
#define NIX_AF_ERR_INT_ENA_W1S		(0x0190)
#define NIX_AF_ERR_INT_ENA_W1C		(0x0198)
#define NIX_AF_RAS			(0x01A0)
#define NIX_AF_RAS_W1S			(0x01A8)
#define NIX_AF_RAS_ENA_W1S		(0x01B0)
#define NIX_AF_RAS_ENA_W1C		(0x01B8)
#define NIX_AF_RVU_INT			(0x01C0)
#define NIX_AF_RVU_INT_W1S		(0x01C8)
#define NIX_AF_RVU_INT_ENA_W1S		(0x01D0)
#define NIX_AF_RVU_INT_ENA_W1C		(0x01D8)
#define NIX_AF_TCP_TIMER		(0x01E0)
#define NIX_AF_RX_WQE_TAG_CTL		(0x01F0)
#define NIX_AF_RX_DEF_OL2		(0x0200)
#define NIX_AF_RX_DEF_OIP4		(0x0210)
#define NIX_AF_RX_DEF_IIP4		(0x0220)
#define NIX_AF_RX_DEF_OIP6		(0x0230)
#define NIX_AF_RX_DEF_IIP6		(0x0240)
#define NIX_AF_RX_DEF_OTCP		(0x0250)
#define NIX_AF_RX_DEF_ITCP		(0x0260)
#define NIX_AF_RX_DEF_OUDP		(0x0270)
#define NIX_AF_RX_DEF_IUDP		(0x0280)
#define NIX_AF_RX_DEF_OSCTP		(0x0290)
#define NIX_AF_RX_DEF_ISCTP		(0x02A0)
#define NIX_AF_RX_DEF_IPSECX		(0x02B0)
#define NIX_AF_RX_IPSEC_GEN_CFG		(0x0300)
#define NIX_AF_RX_CPTX_INST_ADDR	(0x0310)
#define NIX_AF_NDC_TX_SYNC		(0x03F0)
#define NIX_AF_AQ_CFG			(0x0400)
#define NIX_AF_AQ_BASE			(0x0410)
#define NIX_AF_AQ_STATUS		(0x0420)
#define NIX_AF_AQ_DOOR			(0x0430)
#define NIX_AF_AQ_DONE_WAIT		(0x0440)
#define NIX_AF_AQ_DONE			(0x0450)
#define NIX_AF_AQ_DONE_ACK		(0x0460)
#define NIX_AF_AQ_DONE_TIMER		(0x0470)
#define NIX_AF_AQ_DONE_INT		(0x0480)
#define NIX_AF_AQ_DONE_INT_W1S		(0x0488)
#define NIX_AF_AQ_DONE_ENA_W1S		(0x0490)
#define NIX_AF_AQ_DONE_ENA_W1C		(0x0498)
#define NIX_AF_RX_LINKX_SLX_SPKT_CNT	(0x0500)
#define NIX_AF_RX_LINKX_SLX_SXQE_CNT	(0x0510)
#define NIX_AF_RX_MCAST_JOBSX_SW_CNT	(0x0520)
#define NIX_AF_RX_MIRROR_JOBSX_SW_CNT	(0x0530)
#define NIX_AF_RX_LINKX_CFG(a)		(0x0540 | (a) << 16)
#define NIX_AF_RX_SW_SYNC		(0x0550)
#define NIX_AF_RX_SW_SYNC_DONE		(0x0560)
#define NIX_AF_SEB_ECO			(0x0600)
#define NIX_AF_SEB_TEST_BP		(0x0610)
#define NIX_AF_NORM_TX_FIFO_STATUS	(0x0620)
#define NIX_AF_EXPR_TX_FIFO_STATUS	(0x0630)
#define NIX_AF_SDP_TX_FIFO_STATUS	(0x0640)
#define NIX_AF_TX_NPC_CAPTURE_CONFIG	(0x0660)
#define NIX_AF_TX_NPC_CAPTURE_INFO	(0x0670)

#define NIX_AF_DEBUG_NPC_RESP_DATAX(a)          (0x680 | (a) << 3)
#define NIX_AF_SMQX_CFG(a)                      (0x700 | (a) << 16)
#define NIX_AF_SQM_DBG_CTL_STATUS               (0x750)
#define NIX_AF_PSE_CHANNEL_LEVEL                (0x800)
#define NIX_AF_PSE_SHAPER_CFG                   (0x810)
#define NIX_AF_TX_EXPR_CREDIT			(0x830)
#define NIX_AF_MARK_FORMATX_CTL(a)              (0x900 | (a) << 18)
#define NIX_AF_TX_LINKX_NORM_CREDIT(a)		(0xA00 | (a) << 16)
#define NIX_AF_TX_LINKX_EXPR_CREDIT(a)		(0xA10 | (a) << 16)
#define NIX_AF_TX_LINKX_SW_XOFF(a)              (0xA20 | (a) << 16)
#define NIX_AF_TX_LINKX_HW_XOFF(a)              (0xA30 | (a) << 16)
#define NIX_AF_SDP_LINK_CREDIT                  (0xa40)
#define NIX_AF_SDP_SW_XOFFX(a)                  (0xA60 | (a) << 3)
#define NIX_AF_SDP_HW_XOFFX(a)                  (0xAC0 | (a) << 3)
#define NIX_AF_TL4X_BP_STATUS(a)                (0xB00 | (a) << 16)
#define NIX_AF_TL4X_SDP_LINK_CFG(a)             (0xB10 | (a) << 16)
#define NIX_AF_TL1X_SCHEDULE(a)                 (0xC00 | (a) << 16)
#define NIX_AF_TL1X_SHAPE(a)                    (0xC10 | (a) << 16)
#define NIX_AF_TL1X_CIR(a)                      (0xC20 | (a) << 16)
#define NIX_AF_TL1X_SHAPE_STATE(a)              (0xC50 | (a) << 16)
#define NIX_AF_TL1X_SW_XOFF(a)                  (0xC70 | (a) << 16)
#define NIX_AF_TL1X_TOPOLOGY(a)                 (0xC80 | (a) << 16)
#define NIX_AF_TL1X_GREEN(a)                    (0xC90 | (a) << 16)
#define NIX_AF_TL1X_YELLOW(a)                   (0xCA0 | (a) << 16)
#define NIX_AF_TL1X_RED(a)                      (0xCB0 | (a) << 16)
#define NIX_AF_TL1X_MD_DEBUG0(a)                (0xCC0 | (a) << 16)
#define NIX_AF_TL1X_MD_DEBUG1(a)                (0xCC8 | (a) << 16)
#define NIX_AF_TL1X_MD_DEBUG2(a)                (0xCD0 | (a) << 16)
#define NIX_AF_TL1X_MD_DEBUG3(a)                (0xCD8 | (a) << 16)
#define NIX_AF_TL1A_DEBUG                       (0xce0)
#define NIX_AF_TL1B_DEBUG                       (0xcf0)
#define NIX_AF_TL1_DEBUG_GREEN                  (0xd00)
#define NIX_AF_TL1_DEBUG_NODE                   (0xd10)
#define NIX_AF_TL1X_DROPPED_PACKETS(a)          (0xD20 | (a) << 16)
#define NIX_AF_TL1X_DROPPED_BYTES(a)            (0xD30 | (a) << 16)
#define NIX_AF_TL1X_RED_PACKETS(a)              (0xD40 | (a) << 16)
#define NIX_AF_TL1X_RED_BYTES(a)                (0xD50 | (a) << 16)
#define NIX_AF_TL1X_YELLOW_PACKETS(a)           (0xD60 | (a) << 16)
#define NIX_AF_TL1X_YELLOW_BYTES(a)             (0xD70 | (a) << 16)
#define NIX_AF_TL1X_GREEN_PACKETS(a)            (0xD80 | (a) << 16)
#define NIX_AF_TL1X_GREEN_BYTES(a)              (0xD90 | (a) << 16)
#define NIX_AF_TL2X_SCHEDULE(a)                 (0xE00 | (a) << 16)
#define NIX_AF_TL2X_SHAPE(a)                    (0xE10 | (a) << 16)
#define NIX_AF_TL2X_CIR(a)                      (0xE20 | (a) << 16)
#define NIX_AF_TL2X_PIR(a)                      (0xE30 | (a) << 16)
#define NIX_AF_TL2X_SCHED_STATE(a)              (0xE40 | (a) << 16)
#define NIX_AF_TL2X_SHAPE_STATE(a)              (0xE50 | (a) << 16)
#define NIX_AF_TL2X_POINTERS(a)                 (0xE60 | (a) << 16)
#define NIX_AF_TL2X_SW_XOFF(a)                  (0xE70 | (a) << 16)
#define NIX_AF_TL2X_TOPOLOGY(a)                 (0xE80 | (a) << 16)
#define NIX_AF_TL2X_PARENT(a)                   (0xE88 | (a) << 16)
#define NIX_AF_TL2X_GREEN(a)                    (0xE90 | (a) << 16)
#define NIX_AF_TL2X_YELLOW(a)                   (0xEA0 | (a) << 16)
#define NIX_AF_TL2X_RED(a)                      (0xEB0 | (a) << 16)
#define NIX_AF_TL2X_MD_DEBUG0(a)                (0xEC0 | (a) << 16)
#define NIX_AF_TL2X_MD_DEBUG1(a)                (0xEC8 | (a) << 16)
#define NIX_AF_TL2X_MD_DEBUG2(a)                (0xED0 | (a) << 16)
#define NIX_AF_TL2X_MD_DEBUG3(a)                (0xED8 | (a) << 16)
#define NIX_AF_TL2A_DEBUG                       (0xee0)
#define NIX_AF_TL2B_DEBUG                       (0xef0)
#define NIX_AF_TL3X_SCHEDULE(a)                 (0x1000 | (a) << 16)
#define NIX_AF_TL3X_SHAPE(a)                    (0x1010 | (a) << 16)
#define NIX_AF_TL3X_CIR(a)                      (0x1020 | (a) << 16)
#define NIX_AF_TL3X_PIR(a)                      (0x1030 | (a) << 16)
#define NIX_AF_TL3X_SCHED_STATE(a)              (0x1040 | (a) << 16)
#define NIX_AF_TL3X_SHAPE_STATE(a)              (0x1050 | (a) << 16)
#define NIX_AF_TL3X_POINTERS(a)                 (0x1060 | (a) << 16)
#define NIX_AF_TL3X_SW_XOFF(a)                  (0x1070 | (a) << 16)
#define NIX_AF_TL3X_TOPOLOGY(a)                 (0x1080 | (a) << 16)
#define NIX_AF_TL3X_PARENT(a)                   (0x1088 | (a) << 16)
#define NIX_AF_TL3X_GREEN(a)                    (0x1090 | (a) << 16)
#define NIX_AF_TL3X_YELLOW(a)                   (0x10A0 | (a) << 16)
#define NIX_AF_TL3X_RED(a)                      (0x10B0 | (a) << 16)
#define NIX_AF_TL3X_MD_DEBUG0(a)                (0x10C0 | (a) << 16)
#define NIX_AF_TL3X_MD_DEBUG1(a)                (0x10C8 | (a) << 16)
#define NIX_AF_TL3X_MD_DEBUG2(a)                (0x10D0 | (a) << 16)
#define NIX_AF_TL3X_MD_DEBUG3(a)                (0x10D8 | (a) << 16)
#define NIX_AF_TL3A_DEBUG                       (0x10e0)
#define NIX_AF_TL3B_DEBUG                       (0x10f0)
#define NIX_AF_TL4X_SCHEDULE(a)                 (0x1200 | (a) << 16)
#define NIX_AF_TL4X_SHAPE(a)                    (0x1210 | (a) << 16)
#define NIX_AF_TL4X_CIR(a)                      (0x1220 | (a) << 16)
#define NIX_AF_TL4X_PIR(a)                      (0x1230 | (a) << 16)
#define NIX_AF_TL4X_SCHED_STATE(a)              (0x1240 | (a) << 16)
#define NIX_AF_TL4X_SHAPE_STATE(a)              (0x1250 | (a) << 16)
#define NIX_AF_TL4X_POINTERS(a)                 (0x1260 | (a) << 16)
#define NIX_AF_TL4X_SW_XOFF(a)                  (0x1270 | (a) << 16)
#define NIX_AF_TL4X_TOPOLOGY(a)                 (0x1280 | (a) << 16)
#define NIX_AF_TL4X_PARENT(a)                   (0x1288 | (a) << 16)
#define NIX_AF_TL4X_GREEN(a)                    (0x1290 | (a) << 16)
#define NIX_AF_TL4X_YELLOW(a)                   (0x12A0 | (a) << 16)
#define NIX_AF_TL4X_RED(a)                      (0x12B0 | (a) << 16)
#define NIX_AF_TL4X_MD_DEBUG0(a)                (0x12C0 | (a) << 16)
#define NIX_AF_TL4X_MD_DEBUG1(a)                (0x12C8 | (a) << 16)
#define NIX_AF_TL4X_MD_DEBUG2(a)                (0x12D0 | (a) << 16)
#define NIX_AF_TL4X_MD_DEBUG3(a)                (0x12D8 | (a) << 16)
#define NIX_AF_TL4A_DEBUG                       (0x12e0)
#define NIX_AF_TL4B_DEBUG                       (0x12f0)
#define NIX_AF_MDQX_SCHEDULE(a)                 (0x1400 | (a) << 16)
#define NIX_AF_MDQX_SHAPE(a)                    (0x1410 | (a) << 16)
#define NIX_AF_MDQX_CIR(a)                      (0x1420 | (a) << 16)
#define NIX_AF_MDQX_PIR(a)                      (0x1430 | (a) << 16)
#define NIX_AF_MDQX_SCHED_STATE(a)              (0x1440 | (a) << 16)
#define NIX_AF_MDQX_SHAPE_STATE(a)              (0x1450 | (a) << 16)
#define NIX_AF_MDQX_POINTERS(a)                 (0x1460 | (a) << 16)
#define NIX_AF_MDQX_SW_XOFF(a)                  (0x1470 | (a) << 16)
#define NIX_AF_MDQX_PARENT(a)                   (0x1480 | (a) << 16)
#define NIX_AF_MDQX_MD_DEBUG(a)                 (0x14C0 | (a) << 16)
#define NIX_AF_MDQX_PTR_FIFO(a)                 (0x14D0 | (a) << 16)
#define NIX_AF_MDQA_DEBUG                       (0x14e0)
#define NIX_AF_MDQB_DEBUG                       (0x14f0)
#define NIX_AF_TL3_TL2X_CFG(a)                  (0x1600 | (a) << 18)
#define NIX_AF_TL3_TL2X_BP_STATUS(a)            (0x1610 | (a) << 16)
#define NIX_AF_TL3_TL2X_LINKX_CFG(a, b)         (0x1700 | (a) << 16 | (b) << 3)
#define NIX_AF_RX_FLOW_KEY_ALGX_FIELDX(a, b)    (0x1800 | (a) << 18 | (b) << 3)
#define NIX_AF_TX_MCASTX(a)                     (0x1900 | (a) << 15)
#define NIX_AF_TX_VTAG_DEFX_CTL(a)              (0x1A00 | (a) << 16)
#define NIX_AF_TX_VTAG_DEFX_DATA(a)             (0x1A10 | (a) << 16)
#define NIX_AF_RX_BPIDX_STATUS(a)               (0x1A20 | (a) << 17)
#define NIX_AF_RX_CHANX_CFG(a)                  (0x1A30 | (a) << 15)
#define NIX_AF_CINT_TIMERX(a)                   (0x1A40 | (a) << 18)
#define NIX_AF_LSO_FORMATX_FIELDX(a, b)         (0x1B00 | (a) << 16 | (b) << 3)
#define NIX_AF_LFX_CFG(a)		(0x4000 | (a) << 17)
#define NIX_AF_LFX_SQS_CFG(a)		(0x4020 | (a) << 17)
#define NIX_AF_LFX_TX_CFG2(a)		(0x4028 | (a) << 17)
#define NIX_AF_LFX_SQS_BASE(a)		(0x4030 | (a) << 17)
#define NIX_AF_LFX_RQS_CFG(a)		(0x4040 | (a) << 17)
#define NIX_AF_LFX_RQS_BASE(a)		(0x4050 | (a) << 17)
#define NIX_AF_LFX_CQS_CFG(a)		(0x4060 | (a) << 17)
#define NIX_AF_LFX_CQS_BASE(a)		(0x4070 | (a) << 17)
#define NIX_AF_LFX_TX_CFG(a)		(0x4080 | (a) << 17)
#define NIX_AF_LFX_TX_PARSE_CFG(a)	(0x4090 | (a) << 17)
#define NIX_AF_LFX_RX_CFG(a)		(0x40A0 | (a) << 17)
#define NIX_AF_LFX_RSS_CFG(a)		(0x40C0 | (a) << 17)
#define NIX_AF_LFX_RSS_BASE(a)		(0x40D0 | (a) << 17)
#define NIX_AF_LFX_QINTS_CFG(a)		(0x4100 | (a) << 17)
#define NIX_AF_LFX_QINTS_BASE(a)	(0x4110 | (a) << 17)
#define NIX_AF_LFX_CINTS_CFG(a)		(0x4120 | (a) << 17)
#define NIX_AF_LFX_CINTS_BASE(a)	(0x4130 | (a) << 17)
#define NIX_AF_LFX_RX_IPSEC_CFG0(a)	(0x4140 | (a) << 17)
#define NIX_AF_LFX_RX_IPSEC_CFG1(a)	(0x4148 | (a) << 17)
#define NIX_AF_LFX_RX_IPSEC_DYNO_CFG(a)	(0x4150 | (a) << 17)
#define NIX_AF_LFX_RX_IPSEC_DYNO_BASE(a)	(0x4158 | (a) << 17)
#define NIX_AF_LFX_RX_IPSEC_SA_BASE(a)	(0x4170 | (a) << 17)
#define NIX_AF_LFX_TX_STATUS(a)		(0x4180 | (a) << 17)
#define NIX_AF_LFX_RX_VTAG_TYPEX(a, b)	(0x4200 | (a) << 17 | (b) << 3)
#define NIX_AF_LFX_LOCKX(a, b)		(0x4300 | (a) << 17 | (b) << 3)
#define NIX_AF_LFX_TX_STATX(a, b)	(0x4400 | (a) << 17 | (b) << 3)
#define NIX_AF_LFX_RX_STATX(a, b)	(0x4500 | (a) << 17 | (b) << 3)
#define NIX_AF_LFX_RSS_GRPX(a, b)	(0x4600 | (a) << 17 | (b) << 3)
#define NIX_AF_RX_NPC_MC_RCV		(0x4700)
#define NIX_AF_RX_NPC_MC_DROP		(0x4710)
#define NIX_AF_RX_NPC_MIRROR_RCV	(0x4720)
#define NIX_AF_RX_NPC_MIRROR_DROP	(0x4730)
#define NIX_AF_RX_ACTIVE_CYCLES_PCX(a)	(0x4800 | (a) << 16)

#define NIX_PRIV_AF_INT_CFG		(0x8000000)
#define NIX_PRIV_LFX_CFG		(0x8000010)
#define NIX_PRIV_LFX_INT_CFG		(0x8000020)
#define NIX_AF_RVU_LF_CFG_DEBUG		(0x8000030)

/* SSO */
#define SSO_AF_CONST			(0x1000)
#define SSO_AF_CONST1			(0x1008)
#define SSO_AF_BLK_RST			(0x10f8)
#define SSO_AF_LF_HWGRP_RST		(0x10e0)
#define SSO_AF_RVU_LF_CFG_DEBUG		(0x3800)
#define SSO_PRIV_LFX_HWGRP_CFG		(0x10000)
#define SSO_PRIV_LFX_HWGRP_INT_CFG	(0x20000)

/* SSOW */
#define SSOW_AF_RVU_LF_HWS_CFG_DEBUG	(0x0010)
#define SSOW_AF_LF_HWS_RST		(0x0030)
#define SSOW_PRIV_LFX_HWS_CFG		(0x1000)
#define SSOW_PRIV_LFX_HWS_INT_CFG	(0x2000)

/* TIM */
#define TIM_AF_CONST			(0x90)
#define TIM_PRIV_LFX_CFG		(0x20000)
#define TIM_PRIV_LFX_INT_CFG		(0x24000)
#define TIM_AF_RVU_LF_CFG_DEBUG		(0x30000)
#define TIM_AF_BLK_RST			(0x10)
#define TIM_AF_LF_RST			(0x20)

/* CPT */
#define CPT_AF_CONSTANTS0		(0x0000)
#define CPT_PRIV_LFX_CFG		(0x41000)
#define CPT_PRIV_LFX_INT_CFG		(0x43000)
#define CPT_AF_RVU_LF_CFG_DEBUG		(0x45000)
#define CPT_AF_LF_RST			(0x44000)
#define CPT_AF_BLK_RST			(0x46000)

#define NPC_AF_BLK_RST                  (0x00040)

/* NPC */
#define NPC_AF_CFG			(0x00000)
#define NPC_AF_ACTIVE_PC		(0x00010)
#define NPC_AF_CONST			(0x00020)
#define NPC_AF_CONST1			(0x00030)
#define NPC_AF_BLK_RST			(0x00040)
#define NPC_AF_MCAM_SCRUB_CTL		(0x000a0)
#define NPC_AF_KCAM_SCRUB_CTL		(0x000b0)
#define NPC_AF_KPUX_CFG(a)		(0x00500 | (a) << 3)
#define NPC_AF_PCK_CFG			(0x00600)
#define NPC_AF_PCK_DEF_OL2		(0x00610)
#define NPC_AF_PCK_DEF_OIP4		(0x00620)
#define NPC_AF_PCK_DEF_OIP6		(0x00630)
#define NPC_AF_PCK_DEF_IIP4		(0x00640)
#define NPC_AF_KEX_LDATAX_FLAGS_CFG(a)	(0x00800 | (a) << 3)
#define NPC_AF_INTFX_KEX_CFG(a)		(0x01010 | (a) << 8)
#define NPC_AF_PKINDX_ACTION0(a)	(0x80000ull | (a) << 6)
#define NPC_AF_PKINDX_ACTION1(a)	(0x80008ull | (a) << 6)
#define NPC_AF_PKINDX_CPI_DEFX(a, b)	(0x80020ull | (a) << 6 | (b) << 3)
#define NPC_AF_KPUX_ENTRYX_CAMX(a, b, c) \
		(0x100000 | (a) << 14 | (b) << 6 | (c) << 3)
#define NPC_AF_KPUX_ENTRYX_ACTION0(a, b) \
		(0x100020 | (a) << 14 | (b) << 6)
#define NPC_AF_KPUX_ENTRYX_ACTION1(a, b) \
		(0x100028 | (a) << 14 | (b) << 6)
#define NPC_AF_KPUX_ENTRY_DISX(a, b)	(0x180000 | (a) << 6 | (b) << 3)
#define NPC_AF_CPIX_CFG(a)		(0x200000 | (a) << 3)
#define NPC_AF_INTFX_LIDX_LTX_LDX_CFG(a, b, c, d) \
		(0x900000 | (a) << 16 | (b) << 12 | (c) << 5 | (d) << 3)
#define NPC_AF_INTFX_LDATAX_FLAGSX_CFG(a, b, c) \
		(0x980000 | (a) << 16 | (b) << 12 | (c) << 3)
#define NPC_AF_MCAMEX_BANKX_CAMX_INTF(a, b, c)       \
		(0x1000000ull | (a) << 10 | (b) << 6 | (c) << 3)
#define NPC_AF_MCAMEX_BANKX_CAMX_W0(a, b, c)         \
		(0x1000010ull | (a) << 10 | (b) << 6 | (c) << 3)
#define NPC_AF_MCAMEX_BANKX_CAMX_W1(a, b, c)         \
		(0x1000020ull | (a) << 10 | (b) << 6 | (c) << 3)
#define NPC_AF_MCAMEX_BANKX_CFG(a, b)	 (0x1800000ull | (a) << 8 | (b) << 4)
#define NPC_AF_MCAMEX_BANKX_STAT_ACT(a, b) \
		(0x1880000 | (a) << 8 | (b) << 4)
#define NPC_AF_MATCH_STATX(a)		(0x1880008 | (a) << 8)
#define NPC_AF_INTFX_MISS_STAT_ACT(a)	(0x1880040 + (a) * 0x8)
#define NPC_AF_MCAMEX_BANKX_ACTION(a, b) (0x1900000ull | (a) << 8 | (b) << 4)
#define NPC_AF_MCAMEX_BANKX_TAG_ACT(a, b) \
		(0x1900008 | (a) << 8 | (b) << 4)
#define NPC_AF_INTFX_MISS_ACT(a)	(0x1a00000 | (a) << 4)
#define NPC_AF_INTFX_MISS_TAG_ACT(a)	(0x1b00008 | (a) << 4)
#define NPC_AF_MCAM_BANKX_HITX(a, b)	(0x1c80000 | (a) << 8 | (b) << 4)
#define NPC_AF_LKUP_CTL			(0x2000000)
#define NPC_AF_LKUP_DATAX(a)		(0x2000200 | (a) << 4)
#define NPC_AF_LKUP_RESULTX(a)		(0x2000400 | (a) << 4)
#define NPC_AF_INTFX_STAT(a)		(0x2000800 | (a) << 4)
#define NPC_AF_DBG_CTL			(0x3000000)
#define NPC_AF_DBG_STATUS		(0x3000010)
#define NPC_AF_KPUX_DBG(a)		(0x3000020 | (a) << 8)
#define NPC_AF_IKPU_ERR_CTL		(0x3000080)
#define NPC_AF_KPUX_ERR_CTL(a)		(0x30000a0 | (a) << 8)
#define NPC_AF_MCAM_DBG			(0x3001000)
#define NPC_AF_DBG_DATAX(a)		(0x3001400 | (a) << 4)
#define NPC_AF_DBG_RESULTX(a)		(0x3001800 | (a) << 4)

/* NDC */
#define NDC_AF_CONST			(0x00000)
#define NDC_AF_CLK_EN			(0x00020)
#define NDC_AF_CTL			(0x00030)
#define NDC_AF_BANK_CTL			(0x00040)
#define NDC_AF_BANK_CTL_DONE		(0x00048)
#define NDC_AF_INTR			(0x00058)
#define NDC_AF_INTR_W1S			(0x00060)
#define NDC_AF_INTR_ENA_W1S		(0x00068)
#define NDC_AF_INTR_ENA_W1C		(0x00070)
#define NDC_AF_ACTIVE_PC		(0x00078)
#define NDC_AF_BP_TEST_ENABLE		(0x001F8)
#define NDC_AF_BP_TEST(a)		(0x00200 | (a) << 3)
#define NDC_AF_BLK_RST			(0x002F0)
#define NDC_PRIV_AF_INT_CFG		(0x002F8)
#define NDC_AF_HASHX(a)			(0x00300 | (a) << 3)
#define NDC_AF_PORTX_RTX_RWX_REQ_PC(a, b, c) \
		(0x00C00 | (a) << 5 | (b) << 4 | (c) << 3)
#define NDC_AF_PORTX_RTX_RWX_OSTDN_PC(a, b, c) \
		(0x00D00 | (a) << 5 | (b) << 4 | (c) << 3)
#define NDC_AF_PORTX_RTX_RWX_LAT_PC(a, b, c) \
		(0x00E00 | (a) << 5 | (b) << 4 | (c) << 3)
#define NDC_AF_PORTX_RTX_CANT_ALLOC_PC(a, b) \
		(0x00F00 | (a) << 5 | (b) << 4)
#define NDC_AF_BANKX_HIT_PC(a)		(0x01000 | (a) << 3)
#define NDC_AF_BANKX_MISS_PC(a)		(0x01100 | (a) << 3)
#endif /* RVU_REG_H */

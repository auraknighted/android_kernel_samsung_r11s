/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
 *              http://www.samsung.com
 *
 * Author: Sung-Hyun Na <sunghyun.na@samsung.com>
 *
 * Chip Abstraction Layer for USB PHY
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef DRIVER_USB_USBPHY_CAL_PHY_EXYNOS_USB3P1_REG_H_
#define DRIVER_USB_USBPHY_CAL_PHY_EXYNOS_USB3P1_REG_H_

#define EXYNOS_USBCON_CTRL_VER		(0x00)

#define EXYNOS_USBCON_LINK_CTRL		(0x04)
#define LINKCTRL_PIPE3_FORCE_RX_ELEC_IDLE	(0x1 << 18)
#define LINKCTRL_PIPE3_FORCE_PHY_STATUS		(0x1 << 17)
#define LINKCTRL_PIPE3_FORCE_EN			(0x1 << 16)
#define LINKCTRL_DIS_QACT_BUSPEND		(0x1 << 13)
#define LINKCTRL_DIS_QACT_LINKGATE		(0x1 << 12)
#define LINKCTRL_DIS_QACT_ID0			(0x1 << 11)
#define LINKCTRL_DIS_QACT_VBUS_VALID		(0x1 << 10)
#define LINKCTRL_DIS_QACT_BVALID		(0x1 << 9)
#define LINKCTRL_FORCE_QACT			(0x1 << 8)
#define LINKCTRL_BUS_FILTER_BYPASS(_x)		((_x & 0xf) << 4)
#define LINKCTRL_BUS_FILTER_BYPASS_MASK		(0xf << 4)
#define LINKCTRL_HOST_SYSTEM_ERR		(0x1 << 2)
#define LINKCTRL_LINK_PME			(0x1 << 1)
#define LINKCTRL_PME_GENERATION			(0x1 << 0)

#define EXYNOS_USBCON_LINK_PORT		(0x08)
#define LINKPORT_HOST_NUM_U3(_x)		((_x & 0xf) << 16)
#define LINKPORT_HOST_NUM_U2(_x)		((_x & 0xf) << 12)
#define LINKPORT_HOST_U3_PORT_DISABLE		(0x1 << 9)
#define LINKPORT_HOST_U2_PORT_DISABLE		(0x1 << 8)
#define LINKPORT_HOST_PORT_POWER_CON_PRESENT	(0x1 << 6)
#define LINKPORT_HUB_PORT_SET_OCD_U3		(0x1 << 5)
#define LINKPORT_HUB_PORT_SET_OCD_U2		(0x1 << 4)
#define LINKPORT_HUB_PORT_SEL_OCD_U3		(0x1 << 3)
#define LINKPORT_HUB_PORT_SEL_OCD_U2		(0x1 << 2)
#define LINKPORT_HUB_PERM_ATTACH_U3		(0x1 << 1)
#define LINKPORT_HUB_PERM_ATTACH_U2		(0x1 << 0)

#define EXYNOS_USBCON_LINK_DEBUG_L	(0x0C)
#define EXYNOS_USBCON_LINK_DEBUG_H	(0x10)

#define EXYNOS_USBCON_LTSTATE_HIS	(0x14)
#define LTSTATE_LINKTRN_DONE			(0x1 << 31)
#define LTSTATE_HIS4(_x)			((_x & 0xf) << 16)
#define LTSTATE_HIS3(_x)			((_x & 0xf) << 12)
#define LTSTATE_HIS2(_x)			((_x & 0xf) << 8)
#define LTSTATE_HIS1(_x)			((_x & 0xf) << 4)
#define LTSTATE_HIS0(_x)			((_x & 0xf) << 0)

#define EXYNOS_USBCON_CLKRST		(0x20)
#define CLKRST_PHY20_SW_RST			(0x1 << 13)
#define CLKRST_PHY20_RST_SEL			(0x1 << 12)
#define CLKRST_USBAUDIO_CLK_GATE_EN		(0x1 << 9)
#define CLKRST_USBAUDIO_CLK_SEL			(0x1 << 8)
#define CLKRST_LINK_PCLK_SEL			(0x1 << 7)
#define CLKRST_PHYCLOCKSEL			(0x1 << 6)
#define CLKRST_REFCLK_SEL			(0x1 << 4)
/* MK Verion */
#define CLKRST_PHY30_SW_RST			(0x1 << 3)
#define CLKRST_PHY30_RST_SEL			(0x1 << 2)
/* Lhotse Verion */
#define CLKRST_PHY_SW_RST			(0x1 << 3)
#define CLKRST_PHY_RST_SEL			(0x1 << 2)
#define CLKRST_PORT_RST				(0x1 << 1)
#define CLKRST_LINK_SW_RST			(0x1 << 0)

#define EXYNOS_USBCON_PWR		(0x24)

#define PWR_PIPE3_POWERDONW			(0xf << 4)
#define PWR_FORCE_POWERDOWN_EN			(0x1 << 3)
#define RSVD1					(0x7 << 0)
#define PWR_FORCE_POWERDONW			(0x1 << 2)
#define PWR_TEST_POWERDOWN_SSP			(0x1 << 1)
#define PWR_TEST_POWERDOWN_HSP			(0x1 << 0)

#define EXYNOS_USBCON_DUALPHYSEL	(0x28)
#define DUALPHYSEL_PHYSEL_CTRL			(0x1 << 0)
#define DUALPHYSEL_PHYSEL_SSPHY			(0x1 << 1)
#define DUALPHYSEL_PHYSEL_PIPECLK		(0x1 << 4)
#define DUALPHYSEL_PHYSEL_PIPERST		(0x1 << 8)

#define EXYNOS_USBCON_SSP_PLL		(0x30)
#define SSP_PLL_MPLL_MULTIPLIER_MASK		(0x7F << 24)
#define SSP_PLL_MPLL_MULTIPLIER(_x)		((_x & 0x7f) << 24)
#define SSP_PLL_SSC_REF_CLK_SEL_MASK		(0x1ff << 12)
#define SSP_PLL_SSC_REF_CLK_SEL(_x)		((_x & 0x1ff) << 12)
#define SSP_PLL_SSC_EN				(0x1 << 11)
#define SSP_PLL_SSC_RANGE_MASK			(0x7 << 8)
#define SSP_PLL_SSC_RANGE(_x)			((_x & 0x7) << 8)
#define SSP_PLL_REF_SSP_EN			(0x1 << 7)
#define SSP_PLL_REF_CLKDIV2			(0x1 << 6)
#define SSP_PLL_FSEL_MASK			(0x3f << 0)
#define SSP_PLL_FSEL(_x)			((_x & 0x3f) << 0)

#define EXYNOS_USBCON_SSP_PARACON0	(0x34)
#define SSP_PARACON0_TX0_TERM_OFFSET_MASK	(0x1f << 25)
#define SSP_PARACON0_TX0_TERM_OFFSET(_x)	((_x & 0x1f) << 25)
#define SSP_PARACON0_PCS_TX_SWING_FULL_MASK	(0x7f << 16)
#define SSP_PARACON0_PCS_TX_SWING_FULL(_x)	((_x & 0x7f) << 16)
#define SSP_PARACON0_PCS_TX_DEEMPH_6DB_MASK	(0x3f << 8)
#define SSP_PARACON0_PCS_TX_DEEMPH_6DB(_x)	((_x & 0x3f) << 8)
#define SSP_PARACON0_PCS_TX_DEEMPH_3P5DB_MASK	(0x3f << 0)
#define SSP_PARACON0_PCS_TX_DEEMPH_3P5DB(_x)	((_x & 0x3f) << 0)

#define EXYNOS_USBCON_SSP_PARACON1	(0x38)
#define SSP_PARACON1_TX_VBOOST_LVL_SSTX_MASK	(0x7 << 28)
#define SSP_PARACON1_TX_VBOOST_LVL_SSTX(_x)		((_x & 0x7) << 28)
#define SSP_PARACON1_TX_VBOOST_LVL_MASK		(0x7 << 24)
#define SSP_PARACON1_TX_VBOOST_LVL(_x)		((_x & 0x7) << 24)
#define SSP_PARACON1_LOS_LEVEL_MASK		(0x1f << 16)
#define SSP_PARACON1_LOS_LEVEL(_x)		((_x & 0x1f) << 16)
#define SSP_PARACON1_LOS_BIAS_MASK		(0x7 << 12)
#define SSP_PARACON1_LOS_BIAS(_x)		((_x & 0x7) << 12)
#define SSP_PARACON1_PCS_RX_LOS_MASK_VAL_MASK	(0x3ff << 0)
#define SSP_PARACON1_PCS_RX_LOS_MASK_VAL(_x)	((_x & 0x3ff) << 0)

#define EXYNOS_USBCON_SSP_TEST		(0x3C)
#define SSP_TEST_TX_EYE_HEIGHT_CNTL_EN_MASK		(0x1 << 28)
#define SSP_TEST_TX_EYE_HEIGHT_CNTL_EN(_x)		((_x & 0x1) << 28)
#define SSP_TEST_PIPE_TX_DEEMPH_UPDATE_DELAY_MASK	(0xf << 24)
#define SSP_TEST_PIPE_TX_DEEMPH_UPDATE_DELAY(_x)	((_x & 0xf) << 24)
#define SSP_TEST_PCS_TX_SWING_FULL_SSTX_MASK	(0x7f << 16)
#define SSP_TEST_PCS_TX_SWING_FULL_SSTX(_x)		((_x & 0x7f) << 16)
#define SSP_TEST_RTUNE_ACK			(0x1 << 3)
#define SSP_TEST_RTUNE_REQ			(0x1 << 2)
#define SSP_TEST_LANE0_TX2RX_LOOPBK		(0x1 << 1)
#define SSP_TEST_LOOPBACKENB			(0x1 << 0)

#define EXYNOS_USBCON_SSP_CRCTL0	(0x40)
#define SSP_CCTRL0_CR_DATA_IN_MASK		(0xffffU << 16)
#define SSP_CCTRL0_CR_DATA_IN(_x)		((_x & 0xffffU) << 16)
#define SSP_CRCTRL0_CR_WRITE			(0x1 << 3)
#define SSP_CRCTRL0_CR_READ			(0x1 << 2)
#define SSP_CRCTRL0_CR_CAP_DATA			(0x1 << 1)
#define SSP_CRCTRL0_CR_CAP_ADDR			(0x1 << 0)

#define EXYNOS_USBCON_SSP_CRCTL1	(0x44)
#define SSP_CRCTL1_CR_DATA_OUT_MASK		(0xffffU << 16)
#define SSP_CRCTL1_CR_DATA_OUT(_x)		((_x & 0xffffU) << 16)
#define SSP_CRCTL1_CR_ACK			(0x1 << 0)

#define EXYNOS_USBCON_COMBO_PMA_CTRL	(0x48)
/* S5E9820 added */
#define PMA_REF_SOC_PLL_SSC             (0x1 << 16)
#define PMA_ROPLL_REF_CLK_SEL_MASK      (0x3 << 12)
#define PMA_ROPLL_REF_CLK_SEL_SET(_x)   ((_x & 0x3) << 12)
#define PMA_ROPLL_REF_CLK_SEL_GET(_x)   ((_x & (0x3 << 12)) >> 12)
#define PMA_LCPLL_REF_CLK_SEL_MASK      (0x3 << 10)
#define PMA_LCPLL_REF_CLK_SEL_SET(_x)   ((_x & 0x3) << 10)
#define PMA_LCPLL_REF_CLK_SEL_GET(_x)   ((_x & (0x3 << 10)) >> 10)
/* S5E9820 added */
#define PMA_PLL_REF_REQ_MASK			(0x3 << 10)
#define PMA_PLL_REF_REQ_SET(_x)			((_x & 0x3) << 10)
#define PMA_PLL_REF_REQ_GET(_x)			((_x & (0x3 << 10)) >> 10)
#define PMA_REF_FREQ_SEL_MASK			(0x3 << 8)
#define PMA_REF_FREQ_SEL_SET(_x)			((_x & 0x3) << 8)
#define PMA_REF_FREQ_SEL_GET(_x)			((_x & (0x3 << 8)) >> 8)
#define PMA_LOW_PWR					(0x1 << 4)
#define PMA_TRSV_SW_RST				(0x1 << 3)
#define PMA_CMN_SW_RST				(0x1 << 2)
#define PMA_INIT_SW_RST				(0x1 << 1)
#define PMA_APB_SW_RST				(0x1 << 0)


#define EXYNOS_USBCON_UTMI		(0x50)
#define UTMI_OPMODE_CTRL_EN			(0x1 << 8)
#define UTMI_FORCE_OPMODE_MASK			(0x3 << 6)
#define UTMI_FORCE_OPMODE_SET(_x)		((_x & 0x3) << 6)
#define UTMI_FORCE_VBUSVALID			(0x1 << 5)
#define UTMI_FORCE_BVALID			(0x1 << 4)
#define UTMI_DP_PULLDOWN			(0x1 << 3)
#define UTMI_DM_PULLDOWN			(0x1 << 2)
#define UTMI_FORCE_SUSPEND			(0x1 << 1)
#define UTMI_FORCE_SLEEP			(0x1 << 0)

#define EXYNOS_USBCON_HSP		(0x54)
#define HSP_AUTORSM_ENB				(0x1 << 29)
#define HSP_RETENABLE_EN			(0x1 << 28)
#define HSP_FSVM_OUT_EN				(0x1 << 26)
#define HSP_FSLS_SPEED_SEL			(0x1 << 25)
#define HSP_FSVP_OUT_EN				(0x1 << 24)
#define HSP_HS_XCVR_EXT_CTL			(0x1 << 22)
#define HSP_HS_RXDAT				(0x1 << 21)
#define HSP_HS_SQUELCH				(0x1 << 20)
#define HSP_FSVMINUS				(0x1 << 17)
#define HSP_FSVMINUS_GET(_x)		((_x & (0x1 << 17)) >> 17)
#define HSP_FSVPLUS				(0x1 << 16)
#define HSP_FSVPLUS_GET(_x)		((_x & (0x1 << 16)) >> 16)
#define HSP_VBUSVLDEXTSEL			(0x1 << 13)
#define HSP_VBUSVLDEXT				(0x1 << 12)
#define HSP_EN_UTMISUSPEND			(0x1 << 9)
#define HSP_COMMONONN				(0x1 << 8)
#define HSP_VATESTENB				(0x1 << 6)
#define HSP_CHGDET				(0x1 << 5)
#define HSP_CHGDET_GET(_x)		((_x & (0x1 << 5)) >> 5)
#define HSP_VDATSRCENB				(0x1 << 4)
#define HSP_VDATDETENB				(0x1 << 3)
#define HSP_CHRGSEL				(0x1 << 2)
#define HSP_ACAENB				(0x1 << 1)
#define HSP_DCDENB				(0x1 << 0)

#define EXYNOS_USBCON_HSP_TUNE		(0x58)
#define HSP_TUNE_TXVREF_MASK			((unsigned) 0xf << 28)
#define HSP_TUNE_TXVREF_SET(_x)			((unsigned) (_x & 0xf) << 28)
#define HSP_TUNE_TXVREF_GET(_x)			((_x & (0xfU << 28)) >> 28)
#define HSP_TUNE_TXRISE_MASK			(0x3 << 24)
#define HSP_TUNE_TXRISE_SET(_x)			((_x & 0x3) << 24)
#define HSP_TUNE_TXRISE_GET(_x)			((_x & (0x3 << 24)) >> 24)
#define HSP_TUNE_TXRES_MASK			(0x3 << 21)
#define HSP_TUNE_TXRES_SET(_x)			((_x & 0x3) << 21)
#define HSP_TUNE_TXRES_GET(_x)			((_x & (0x3 << 21)) >> 21)
#define HSP_TUNE_TXPREEMPA_PLUS			(0x1 << 20)
#define HSP_TUNE_TXPREEMPA_PLUS_GET(_x)	((_x & (0x1 << 20)) >> 20)
#define HSP_TUNE_TXPREEMPA_MASK			(0x3 << 18)
#define HSP_TUNE_TXPREEMPA_SET(_x)		((_x & 0x3) << 18)
#define HSP_TUNE_TXPREEMPA_GET(_x)		((_x & (0x3 << 18)) >> 18)
#define HSP_TUNE_HSXV_MASK			(0x3 << 16)
#define HSP_TUNE_HSXV_SET(_x)			((_x & 0x3) << 16)
#define HSP_TUNE_HSXV_GET(_x)			((_x & (0x3 << 16)) >> 16)
#define HSP_TUNE_TXFSLS_MASK			(0xf << 12)
#define HSP_TUNE_TXFSLS_SET(_x)			((_x & 0xf) << 12)
#define HSP_TUNE_TXFSLS_GET(_x)			((_x & (0xf << 12)) >> 12)
#define HSP_TUNE_SQRX_MASK			(0x7 << 8)
#define HSP_TUNE_SQRX_SET(_x)			((_x & 0x7) << 8)
#define HSP_TUNE_SQRX_GET(_x)			((_x & (0x7 << 8)) >> 8)
#define HSP_TUNE_OTG_MASK			(0x7 << 4)
#define HSP_TUNE_OTG_SET(_x)			((_x & 0x7) << 4)
#define HSP_TUNE_OTG_GET(_x)			((_x & (0x7 << 4)) >> 4)
#define HSP_TUNE_COMPDIS_MASK			(0x7 << 0)
#define HSP_TUNE_COMPDIS_SET(_x)		((_x & 0x7) << 0)
#define HSP_TUNE_COMPDIS_GET(_x)		((_x & (0x7 << 0)) >> 0)

#define EXYNOS_USBCON_HSP_TEST		(0x5c)
#define HSP_TEST_PHYCLKCNT_GET(_x)	((_x & (0x3f << 26)) >> 26)
#define HSP_TEST_HS_RXDAT			(0x1 << 26)
#define HSP_TEST_HS_SQUELCH			(0x1 << 25)
#define HSP_TEST_SIDDQ				(0x1 << 24)
#define HSP_TEST_LINESTATE_MASK			(0x3 << 20)
#define HSP_TEST_LINESTATE_SET(_x)		((_x & 0x3) << 20)
#define HSP_TEST_LINESTATE_GET(_x)		((_x & (0x3 << 20)) >> 20)
#define HSP_TEST_DATA_OUT_MASK			(0xf << 16)
#define HSP_TEST_DATA_OUT_SET(_x)		((_x & 0xf) << 16)
#define HSP_TEST_DATA_OUT_GET(_x)		((_x & (0xf << 16)) >> 16)
#define HSP_TEST_CLK				(0x1 << 13)
#define HSP_TEST_DATA_OUT_SEL			(0x1 << 12)
#define HSP_TEST_DATA_ADDR_MASK			(0xf << 8)
#define HSP_TEST_DATA_ADDR_SET(_x)		((_x & 0xf) << 8)
#define HSP_TEST_DATA_ADDR_GET(_x)		((_x & (0xf << 8)) >> 8)
#define HSP_TEST_DATA_IN_MASK			(0xff << 0)
#define HSP_TEST_DATA_IN_SET(_x)		((_x & 0xff) << 0)
#define HSP_TEST_DATA_IN_GET(_x)		((_x & (0xff << 0)) >> 0)

#define EXYNOS_USBCON_HSP_PLL_TUNE	(0x60)
#define HSP_PLL_BTUNE				(0x1 << 8)
#define HSP_PLL_ITUNE_MASK			(0x3 << 4)
#define HSP_PLL_ITUNE_IN_SET(_x)		((_x & 0x3) << 4)
#define HSP_PLL_ITUNE_IN_GET(_x)		((_x & (0x3 << 4)) >> 4)
#define HSP_PLL_PTUNE_MASK			(0xf << 0)
#define HSP_PLL_PTUNE_IN_SET(_x)		((_x & 0xf) << 0)
#define HSP_PLL_PTUNE_IN_GET(_x)		((_x & (0xf << 0)) >> 0)

#define EXYNOS_USBCON_G2PHY_CRPARCON0	(0x80)
#define G2PHY_CRPARCON0_CR_PARA_ADDR(_x)		((_x & 0xffff) << 16)
#define G2PHY_CRPARCON0_CR_PARA_ACK			(0x1 << 8)
#define G2PHY_CRPARCON0_CR_PARA_ACK_GET(_x)	((_x & (0x1 << 8)) >> 8)
#define G2PHY_CRPARCON0_CR_PARA_SEL			(0x1 << 4)
#define G2PHY_CRPARCON0_CR_PARA_CLK			(0x1 << 0)

#define EXYNOS_USBCON_G2PHY_CRPARCON1	(0x84)
#define G2PHY_CRPARCON1_CR_PARA_RD_DATA(_x)	((_x & 0xffff) << 16)
#define G2PHY_CRPARCON1_CR_PARA_RD_EN			(0x1 << 0)

#define EXYNOS_USBCON_G2PHY_CRPARCON2	(0x88)
#define G2PHY_CRPARCON2_CR_PARA_WR_DATA(_x)	((_x & 0xffff) << 16)
#define G2PHY_CRPARCON2_CR_PARA_WR_EN			(0x1 << 0)

#define EXYNOS_USBCON_G2PHY_CNTL0		(0x8c)
#define G2PHY_CNTL0_UPCS_PIPE_CONFIG(_x)		((_x & 0xffff) << 16)
#define G2PHY_CNTL0_DTB_OUT(_x)				((_x & 0x3) << 14)
#define G2PHY_CNTL0_UPCS_PWR_EN				(0x1 << 13)
#define G2PHY_CNTL0_UPCS_PWR_STABLE			(0x1 << 12)
#define G2PHY_CNTL0_SRAM_INIT_DONE			(0x1 << 10)
#define G2PHY_CNTL0_SRAM_EXT_LD_DONE			(0x1 << 9)
#define G2PHY_CNTL0_SRAM_BYPASS				(0x1 << 8)
#define G2PHY_CNTL0_EXT_PCLK_REQ				(0x1 << 7)
#define G2PHY_CNTL0_FORCE_PIPE_RX0_STANDBY	(0x1 << 6)
#define G2PHY_CNTL0_FORCE_PIPE_RX0_SRIS_MODE_EN	(0x1 << 5)
#define G2PHY_CNTL0_TEST_POWERDOWN			(0x1 << 4)
#define G2PHY_CNTL0_EXT_CTRL_SEL				(0x1 << 3)
#define G2PHY_CNTL0_FORCE_PHY_MODE			(0x1 << 2)
#define G2PHY_CNTL0_PHY_MODE(_x)				((_x & 0x3) << 0)

#define EXYNOS_USBCON_G2PHY_CNTL1		(0x90)
#define G2PHY_CNTL1_RX_RECAL_CONT_EN			(0x1 << 9)
#define G2PHY_CNTL1_RX2TX_PAR_LB_EN			(0x1 << 8)
#define G2PHY_CNTL1_MPLLB_SSC_EN				(0x1 << 5)
#define G2PHY_CNTL1_MPLLA_SSC_EN				(0x1 << 4)
#define G2PHY_CNTL1_PMA_PWR_STABLE			(0x1 << 2)
#define G2PHY_CNTL1_PCS_PWR_STABLE			(0x1 << 1)
#define G2PHY_CNTL1_ANA_PWR_EN				(0x1 << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT0	(0x94)
#define G2PHY_PRTCL1EXT0_BS_RX_BIGSWING		(0x1 << 12)
#define G2PHY_PRTCL1EXT0_BS_RX_LEVEL(_x)		((_x & 0x1f) << 4)
#define G2PHY_PRTCL1EXT0_BS_RX_LOWSWING		(0x1 << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT1	(0x98)
#define G2PHY_PRTCL1EXT1_MPLLA_BANDWIDTH(_x)	((_x & 0xffff) << 16)
#define G2PHY_PRTCL1EXT1_MPLLA_DIV10_CLK_EN		(0x1 << 11)
#define G2PHY_PRTCL1EXT1_MPLLA_DIV16P5_CLK_EN	(0x1 << 10)
#define G2PHY_PRTCL1EXT1_MPLLA_DIV8_CLK_EN		(0x1 << 9)
#define G2PHY_PRTCL1EXT1_MPLLA_DIV_CLK_EN		(0x1 << 8)
#define G2PHY_PRTCL1EXT1_MPLLA_DIV_MULTIPLIER(_x) ((_x & 0xff) << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT2	(0x9c)
#define G2PHY_PRTCL1EXT2_MPLLA_FRACN_CTRL(_x)	((_x & 0x7ff) << 16)
#define G2PHY_PRTCL1EXT2_MPLLA_MULTIPLIER(_x)	((_x & 0xff) << 8)
#define G2PHY_PRTCL1EXT2_MPLLA_SSC_CLK_SEL(_x)	((_x & 0x3) << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT3	(0xa0)
#define G2PHY_PRTCL1EXT3_MPLLA_SSC_FREQ_CNT_INIT(_x)	((_x & 0xfff) << 16)
#define G2PHY_PRTCL1EXT3_MPLLA_SSC_FREQ_CNT_PEAK(_x)	((_x & 0xff) << 8)
#define G2PHY_PRTCL1EXT3_MPLLA_SSC_FREQ_CNT_OVRD_EN		(0x1 << 7)
#define G2PHY_PRTCL1EXT3_MPLLA_SSC_RANGE(_x)			((_x & 0x7) << 4)
#define G2PHY_PRTCL1EXT3_MPLLA_TX_CLK_DIV(_x)			((_x & 0x7) << 1)
#define G2PHY_PRTCL1EXT3_MPLLA_WORD_DIV2_EN				(0x1 << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT4	(0xa4)
#define G2PHY_PRTCL1EXT4_MPLLB_BANDWIDTH(_x)			((_x & 0xffff) << 16)
#define G2PHY_PRTCL1EXT4_MPLLB_DIV10_CLK_EN				(0x1 << 11)
#define G2PHY_PRTCL1EXT4_MPLLB_DIV8_CLK_EN				(0x1 << 9)
#define G2PHY_PRTCL1EXT4_MPLLB_DIV_CLK_EN				(0x1 << 8)
#define G2PHY_PRTCL1EXT4_MPLLB_DIV_MULTIPLIER(_x)		((_x & 0xff) << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT5	(0xa8)
#define G2PHY_PRTCL1EXT5_MPLLB_FRACN_CTRL(_x)			((_x & 0x7ff) << 16)
#define G2PHY_PRTCL1EXT5_MPLLB_MULTIPLIER(_x)			((_x & 0xff) << 8)
#define G2PHY_PRTCL1EXT5_MPLLB_SSC_CLK_SEL(_x)			((_x & 0x7) << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT6	(0xac)
#define G2PHY_PRTCL1EXT6_MPLLB_SSC_FREQ_CNT_INIT(_x)	((_x & 0xfff) << 16)
#define G2PHY_PRTCL1EXT6_MPLLB_SSC_FREQ_CNT_PEAK(_x)	((_x & 0xff) << 8)
#define G2PHY_PRTCL1EXT6_MPLLB_SSC_FREQ_CNT_OVRD_EN		(0x1 << 7)
#define G2PHY_PRTCL1EXT6_MPLLB_SSC_RANGE(_x)			((_x & 0x7) << 4)
#define G2PHY_PRTCL1EXT6_MPLLB_TX_CLK_DIV(_x)			((_x & 0x7) << 1)
#define G2PHY_PRTCL1EXT6_MPLL_WORD_DIV2_EN				(0x1 << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT7	(0xb0)
#define G2PHY_PRTCL1EXT7_REF_CLK_DIV2_EN				(0x1 << 29)
#define G2PHY_PRTCL1EXT7_REF_CLK_MPLLA_DIV2_EN			(0x1 << 28)
#define G2PHY_PRTCL1EXT7_REF_CLK_MPLLB_DIV2_EN			(0x1 << 27)
#define G2PHY_PRTCL1EXT7_REF_RANGE(_x)					((_x & 0x7) << 24)
#define G2PHY_PRTCL1EXT7_RX_ADAPT_AFE_EN_G2				(0x1 << 21)
#define G2PHY_PRTCL1EXT7_RX_ADAPT_AFE_EN_G1				(0x1 << 20)
#define G2PHY_PRTCL1EXT7_RX_ADAPT_DFE_EN_G2				(0x1 << 17)
#define G2PHY_PRTCL1EXT7_RX_ADAPT_DFE_EN_G1				(0x1 << 16)
#define G2PHY_PRTCL1EXT7_RX_EQ_AFE_GAIN_G2(_x)			((_x & 0xf) << 4)
#define G2PHY_PRTCL1EXT7_RX_EQ_AFE_GAIN_G1(_x)			((_x & 0xf) << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT8	(0xb4)
#define G2PHY_PRTCL1EXT8_RX_EQ_DELTA_IQ_G2(_x)			((_x & 0xf) << 20)
#define G2PHY_PRTCL1EXT8_RX_EQ_DELTA_IQ_G1(_x)			((_x & 0xf) << 16)
#define G2PHY_PRTCL1EXT8_RX_EQ_ATT_LVL_G2(_x)			((_x & 0x7) << 4)
#define G2PHY_PRTCL1EXT8_RX_EQ_ATT_LVL_G1(_x)			((_x & 0x7) << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT9	(0xb8)
#define G2PHY_PRTCL1EXT9_RX_EQ_CTLE_BOOT_G2(_x)			((_x & 0x1f) << 8)
#define G2PHY_PRTCL1EXT9_RX_EQ_CTLE_BOOT_G1(_x)			((_x & 0x1f) << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT10	(0xbc)
#define G2PHY_PRTCL1EXT10_RX_EQ_DFE_TAP1_G2(_x)			((_x & 0xff) << 8)
#define G2PHY_PRTCL1EXT10_RX_EQ_DFE_TAP1_G1(_x)			((_x & 0xff) << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT11	(0xc0)
#define G2PHY_PRTCL1EXT11_RX_VREF_CTRL(_x)				((_x & 0x1f) << 24)
#define G2PHY_PRTCL1EXT11_RX_LOS_LFPS_EN				(0x1 << 23)
#define G2PHY_PRTCL1EXT11_RX_LOS_THRESHOLD(_x)			((_x & 0x7) << 20)
#define G2PHY_PRTCL1EXT11_RX_TERM_CTRL(_x)				((_x & 0x7) << 16)
#define G2PHY_PRTCL1EXT11_RX_REF_LD_VAL_G2(_x)			((_x & 0x3f) << 8)
#define G2PHY_PRTCL1EXT11_RX_REF_LD_VAL_G1(_x)			((_x & 0x3f) << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT12	(0xc4)
#define G2PHY_PRTCL1EXT12_RX_LOS_PWR_UP_CNT				((_x & 0x7ff) << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT13	(0xc8)
#define G2PHY_PRTCL1EXT13_RX_VCO_LD_VAL_G2(_x)			((_x & 0x1fff) << 16)
#define G2PHY_PRTCL1EXT13_RX_VCO_LD_VAL_G1(_x)			((_x & 0x1fff) << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT14	(0xcc)
#define G2PHY_PRTCL1EXT14_TX_EQ_OVRD_G2					(0x1 << 17)
#define G2PHY_PRTCL1EXT14_TX_EQ_OVRD_G1					(0x1 << 16)
#define G2PHY_PRTCL1EXT14_TX_EQ_POST_G2(_x)				((_x & 0xf) << 12)
#define G2PHY_PRTCL1EXT14_TX_EQ_POST_G1(_x)				((_x & 0xf) << 8)
#define G2PHY_PRTCL1EXT14_TX_EQ_PRE_G2(_x)				((_x & 0xf) << 4)
#define G2PHY_PRTCL1EXT14_TX_EQ_PRE_G1(_x)				((_x & 0xf) << 0)

#define EXYNOS_USBCON_G2PHY_PRTCL1EXT15	(0xd0)
#define G2PHY_PRTCL1EXT15_TX_IBOOST_LVL_MASK			(0xf << 24)
#define G2PHY_PRTCL1EXT15_TX_IBOOST_LVL(_x)				((_x & 0xf) << 24)
#define G2PHY_PRTCL1EXT15_TX_TERM_CTRL_MASK				(0x7 << 20)
#define G2PHY_PRTCL1EXT15_TX_TERM_CTRL(_x)				((_x & 0x7) << 20)
#define G2PHY_PRTCL1EXT15_TX_VBOOST_LVL_MASK			(0x7 << 16)
#define G2PHY_PRTCL1EXT15_TX_VBOOST_LVL(_x)				((_x & 0x7) << 16)
#define G2PHY_PRTCL1EXT15_TX_EQ_MAIN_G2_MASK			(0x1f << 8)
#define G2PHY_PRTCL1EXT15_TX_EQ_MAIN_G2(_x)				((_x & 0x1f) << 8)
#define G2PHY_PRTCL1EXT15_TX_EQ_MAIN_G1_MASK			(0x1f << 0)
#define G2PHY_PRTCL1EXT15_TX_EQ_MAIN_G1(_x)				((_x & 0x1f) << 0)
#define EXYNOS_USBCON_ESS_CTL		(0x70)
#define ESS_DISRXDETU3RXDET			(0x1 << 9)

/* Remote Wake-up Advisor (HS ReWA) */
#define EXYNOS_USBCON_REWA_ENABLE	(0x100)
#define REWA_ENABLE_SS_REWA_EN			(0x1 << 8)
#define REWA_ENABLE_HS_REWA_EN			(0x1 << 0)

#define EXYNOS_USBCON_HSREWA_INTR	(0x104)
#define HSREWA_INTR_WAKEUP_REQ_MASK		(0x1 << 12)
#define HSREWA_INTR_TIMEOUT_MASK		(0x1 << 8)
#define HSREWA_INTR_EVT_MASK			(0x1 << 4)
#define HSREWA_INTR_WAKEUP_MASK			(0x1 << 0)

#define EXYNOS_USBCON_HSREWA_CTRL	(0x108)
#define HSREWA_CTRL_DIG_BYPASS_CON_EN		(0x1 << 28)
#define HSREWA_CTRL_DPDM_MON_SEL		(0x1 << 24)
#define HSREWA_CTRL_HS_LINK_READY		(0x1 << 20)
#define HSREWA_CTRL_HS_SYS_VALID		(0x1 << 16)
#define HSREWA_CTRL_HS_REWA_ERR			(0x1 << 4)
#define HSREWA_CTRL_HS_REWA_DONE		(0x1 << 0)

#define EXYNOS_USBCON_HSREWA_REFTO	(0x10C)

#define EXYNOS_USBCON_HSREWA_HSTK	(0x110)

#define EXYNOS_USBCON_HSREWA_CNT	(0x114)

#define EXYNOS_USBCON_HSREWA_INT1_EVT	(0x118)
#define HSREWA_CTRL_HS_EVT_ERR_SUS		(0x1 << 18)
#define HSREWA_CTRL_HS_EVT_ERR_DEV_K		(0x1 << 17)
#define HSREWA_CTRL_HS_EVT_DISCON		(0x1 << 16)
#define HSREWA_CTRL_HS_EVT_BYPASS_DIS		(0x1 << 2)
#define HSREWA_CTRL_HS_EVT_RET_DIS		(0x1 << 1)
#define HSREWA_CTRL_HS_EVT_RET_EN		(0x1 << 0)

#define EXYNOS_USBCON_HSREWA_INT1_MASK	(0x11C)

/* Remote Wake-up Advisor (U3 ReWA) */
#define EXYNOS_USBCON_U3REWA_CTRL	(0x120)
#define U3REWA_CTRL_SYS_WAKEUP_INTER								(0x1 << 28)
#define U3REWA_CTRL_SYS_WAKEUP_INTR_MASK						(0x1 << 24)
#define U3REWA_CTRL_SKIP_WAKEUPLFPS_CNT_MASK			(0xf << 4)
#define U3REWA_CTRL_SKIP_WAKEUPLFPS_CNT_SET(_x)	((_x & 0xf) << 4)
#define U3REWA_CTRL_SKIP_WAKEUPLFPS_CNT_GET(_x)	((_x & (0xf << 4)) >> 4)
#define U3REWA_CTRL_OVERLAP_LFPS											(0x1 << 1)
#define U3REWA_CTRL_U3REWA_BLK_EN										(0x1 << 0)

#define EXYNOS_USBCON_U3REWA_LMCNT	(0x124)

#endif /* DRIVER_USB_USBPHY_CAL_PHY_EXYNOS_USB3P1_REG_H_ */

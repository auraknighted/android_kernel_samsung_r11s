/*
 * Copyright (c) 2011-2019 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _REGTABLE_PCIE_H_
#define _REGTABLE_PCIE_H_

#define MISSING  0

#define A_SOC_CORE_PCIE_INTR_ENABLE_GRP0_Q6_MASK \
	(scn->targetdef->d_A_SOC_CORE_PCIE_INTR_ENABLE_GRP0_Q6_MASK)
#define A_SOC_CORE_PCIE_INTR_CAUSE_GRP1 \
	(scn->targetdef->d_A_SOC_CORE_PCIE_INTR_CAUSE_GRP1)
#define A_SOC_CORE_SPARE_1_REGISTER \
	(scn->targetdef->d_A_SOC_CORE_SPARE_1_REGISTER)
#define A_SOC_CORE_PCIE_INTR_CLR_GRP1 \
	(scn->targetdef->d_A_SOC_CORE_PCIE_INTR_CLR_GRP1)
#define A_SOC_CORE_PCIE_INTR_ENABLE_GRP1 \
	(scn->targetdef->d_A_SOC_CORE_PCIE_INTR_ENABLE_GRP1)
#define A_SOC_PCIE_PCIE_SCRATCH_0 \
	(scn->targetdef->d_A_SOC_PCIE_PCIE_SCRATCH_0)
#define A_SOC_PCIE_PCIE_SCRATCH_1 \
	(scn->targetdef->d_A_SOC_PCIE_PCIE_SCRATCH_1)
#define A_WIFI_APB_1_A_WFSS_CE_TARGET_HOST_DELTA \
	(scn->targetdef->d_A_WIFI_APB_1_A_WFSS_CE_TARGET_HOST_DELTA)
#define A_SOC_PCIE_PCIE_SCRATCH_2 \
	(scn->targetdef->d_A_SOC_PCIE_PCIE_SCRATCH_2)
/* end Q6 iHelium emu registers */

#define PCIE_INTR_FIRMWARE_ROUTE_MASK \
	(scn->targetdef->d_PCIE_INTR_FIRMWARE_ROUTE_MASK)
#define A_SOC_CORE_SPARE_0_REGISTER \
	(scn->targetdef->d_A_SOC_CORE_SPARE_0_REGISTER)
#define A_SOC_CORE_SCRATCH_0_ADDRESS  \
	(scn->targetdef->d_A_SOC_CORE_SCRATCH_0_ADDRESS)
#define A_SOC_CORE_SCRATCH_1_ADDRESS  \
	(scn->targetdef->d_A_SOC_CORE_SCRATCH_1_ADDRESS)
#define A_SOC_CORE_SCRATCH_2_ADDRESS  \
	(scn->targetdef->d_A_SOC_CORE_SCRATCH_2_ADDRESS)
#define A_SOC_CORE_SCRATCH_3_ADDRESS  \
	(scn->targetdef->d_A_SOC_CORE_SCRATCH_3_ADDRESS)
#define A_SOC_CORE_SCRATCH_4_ADDRESS  \
	(scn->targetdef->d_A_SOC_CORE_SCRATCH_4_ADDRESS)
#define A_SOC_CORE_SCRATCH_5_ADDRESS  \
	(scn->targetdef->d_A_SOC_CORE_SCRATCH_5_ADDRESS)
#define A_SOC_CORE_SCRATCH_6_ADDRESS  \
	(scn->targetdef->d_A_SOC_CORE_SCRATCH_6_ADDRESS)
#define A_SOC_CORE_SCRATCH_7_ADDRESS  \
	(scn->targetdef->d_A_SOC_CORE_SCRATCH_7_ADDRESS)
#define RTC_SOC_BASE_ADDRESS  (scn->targetdef->d_RTC_SOC_BASE_ADDRESS)
#define RTC_WMAC_BASE_ADDRESS (scn->targetdef->d_RTC_WMAC_BASE_ADDRESS)
#define SYSTEM_SLEEP_OFFSET   (scn->targetdef->d_SYSTEM_SLEEP_OFFSET)
#define WLAN_SYSTEM_SLEEP_OFFSET \
	(scn->targetdef->d_WLAN_SYSTEM_SLEEP_OFFSET)
#define WLAN_SYSTEM_SLEEP_DISABLE_LSB \
	(scn->targetdef->d_WLAN_SYSTEM_SLEEP_DISABLE_LSB)
#define WLAN_SYSTEM_SLEEP_DISABLE_MASK \
	(scn->targetdef->d_WLAN_SYSTEM_SLEEP_DISABLE_MASK)
#define CLOCK_CONTROL_OFFSET (scn->targetdef->d_CLOCK_CONTROL_OFFSET)
#define CLOCK_CONTROL_SI0_CLK_MASK \
	(scn->targetdef->d_CLOCK_CONTROL_SI0_CLK_MASK)
#define RESET_CONTROL_OFFSET    (scn->targetdef->d_RESET_CONTROL_OFFSET)
#define RESET_CONTROL_MBOX_RST_MASK \
	(scn->targetdef->d_RESET_CONTROL_MBOX_RST_MASK)
#define RESET_CONTROL_SI0_RST_MASK \
	(scn->targetdef->d_RESET_CONTROL_SI0_RST_MASK)
#define WLAN_RESET_CONTROL_OFFSET \
	(scn->targetdef->d_WLAN_RESET_CONTROL_OFFSET)
#define WLAN_RESET_CONTROL_COLD_RST_MASK \
	(scn->targetdef->d_WLAN_RESET_CONTROL_COLD_RST_MASK)
#define WLAN_RESET_CONTROL_WARM_RST_MASK \
	(scn->targetdef->d_WLAN_RESET_CONTROL_WARM_RST_MASK)
#define GPIO_BASE_ADDRESS       (scn->targetdef->d_GPIO_BASE_ADDRESS)
#define GPIO_PIN0_OFFSET        (scn->targetdef->d_GPIO_PIN0_OFFSET)
#define GPIO_PIN1_OFFSET        (scn->targetdef->d_GPIO_PIN1_OFFSET)
#define GPIO_PIN0_CONFIG_MASK   (scn->targetdef->d_GPIO_PIN0_CONFIG_MASK)
#define GPIO_PIN1_CONFIG_MASK   (scn->targetdef->d_GPIO_PIN1_CONFIG_MASK)
#define A_SOC_CORE_SCRATCH_0    (scn->targetdef->d_A_SOC_CORE_SCRATCH_0)
#define SI_CONFIG_BIDIR_OD_DATA_LSB \
	(scn->targetdef->d_SI_CONFIG_BIDIR_OD_DATA_LSB)
#define SI_CONFIG_BIDIR_OD_DATA_MASK \
	(scn->targetdef->d_SI_CONFIG_BIDIR_OD_DATA_MASK)
#define SI_CONFIG_I2C_LSB       (scn->targetdef->d_SI_CONFIG_I2C_LSB)
#define SI_CONFIG_I2C_MASK \
	(scn->targetdef->d_SI_CONFIG_I2C_MASK)
#define SI_CONFIG_POS_SAMPLE_LSB \
	(scn->targetdef->d_SI_CONFIG_POS_SAMPLE_LSB)
#define SI_CONFIG_POS_SAMPLE_MASK \
	(scn->targetdef->d_SI_CONFIG_POS_SAMPLE_MASK)
#define SI_CONFIG_INACTIVE_CLK_LSB \
	(scn->targetdef->d_SI_CONFIG_INACTIVE_CLK_LSB)
#define SI_CONFIG_INACTIVE_CLK_MASK \
	(scn->targetdef->d_SI_CONFIG_INACTIVE_CLK_MASK)
#define SI_CONFIG_INACTIVE_DATA_LSB \
	(scn->targetdef->d_SI_CONFIG_INACTIVE_DATA_LSB)
#define SI_CONFIG_INACTIVE_DATA_MASK \
	(scn->targetdef->d_SI_CONFIG_INACTIVE_DATA_MASK)
#define SI_CONFIG_DIVIDER_LSB   (scn->targetdef->d_SI_CONFIG_DIVIDER_LSB)
#define SI_CONFIG_DIVIDER_MASK  (scn->targetdef->d_SI_CONFIG_DIVIDER_MASK)
#define SI_BASE_ADDRESS         (scn->targetdef->d_SI_BASE_ADDRESS)
#define SI_CONFIG_OFFSET        (scn->targetdef->d_SI_CONFIG_OFFSET)
#define SI_TX_DATA0_OFFSET      (scn->targetdef->d_SI_TX_DATA0_OFFSET)
#define SI_TX_DATA1_OFFSET      (scn->targetdef->d_SI_TX_DATA1_OFFSET)
#define SI_RX_DATA0_OFFSET      (scn->targetdef->d_SI_RX_DATA0_OFFSET)
#define SI_RX_DATA1_OFFSET      (scn->targetdef->d_SI_RX_DATA1_OFFSET)
#define SI_CS_OFFSET            (scn->targetdef->d_SI_CS_OFFSET)
#define SI_CS_DONE_ERR_MASK     (scn->targetdef->d_SI_CS_DONE_ERR_MASK)
#define SI_CS_DONE_INT_MASK     (scn->targetdef->d_SI_CS_DONE_INT_MASK)
#define SI_CS_START_LSB         (scn->targetdef->d_SI_CS_START_LSB)
#define SI_CS_START_MASK        (scn->targetdef->d_SI_CS_START_MASK)
#define SI_CS_RX_CNT_LSB        (scn->targetdef->d_SI_CS_RX_CNT_LSB)
#define SI_CS_RX_CNT_MASK       (scn->targetdef->d_SI_CS_RX_CNT_MASK)
#define SI_CS_TX_CNT_LSB        (scn->targetdef->d_SI_CS_TX_CNT_LSB)
#define SI_CS_TX_CNT_MASK       (scn->targetdef->d_SI_CS_TX_CNT_MASK)
#define EEPROM_SZ               (scn->targetdef->d_BOARD_DATA_SZ)
#define EEPROM_EXT_SZ           (scn->targetdef->d_BOARD_EXT_DATA_SZ)
#define MBOX_BASE_ADDRESS       (scn->targetdef->d_MBOX_BASE_ADDRESS)
#define LOCAL_SCRATCH_OFFSET    (scn->targetdef->d_LOCAL_SCRATCH_OFFSET)
#define CPU_CLOCK_OFFSET        (scn->targetdef->d_CPU_CLOCK_OFFSET)
#define LPO_CAL_OFFSET          (scn->targetdef->d_LPO_CAL_OFFSET)
#define GPIO_PIN10_OFFSET       (scn->targetdef->d_GPIO_PIN10_OFFSET)
#define GPIO_PIN11_OFFSET       (scn->targetdef->d_GPIO_PIN11_OFFSET)
#define GPIO_PIN12_OFFSET       (scn->targetdef->d_GPIO_PIN12_OFFSET)
#define GPIO_PIN13_OFFSET       (scn->targetdef->d_GPIO_PIN13_OFFSET)
#define CLOCK_GPIO_OFFSET       (scn->targetdef->d_CLOCK_GPIO_OFFSET)
#define CPU_CLOCK_STANDARD_LSB  (scn->targetdef->d_CPU_CLOCK_STANDARD_LSB)
#define CPU_CLOCK_STANDARD_MASK (scn->targetdef->d_CPU_CLOCK_STANDARD_MASK)
#define LPO_CAL_ENABLE_LSB      (scn->targetdef->d_LPO_CAL_ENABLE_LSB)
#define LPO_CAL_ENABLE_MASK     (scn->targetdef->d_LPO_CAL_ENABLE_MASK)
#define CLOCK_GPIO_BT_CLK_OUT_EN_LSB \
	(scn->targetdef->d_CLOCK_GPIO_BT_CLK_OUT_EN_LSB)
#define CLOCK_GPIO_BT_CLK_OUT_EN_MASK \
	(scn->targetdef->d_CLOCK_GPIO_BT_CLK_OUT_EN_MASK)
#define ANALOG_INTF_BASE_ADDRESS (scn->targetdef->d_ANALOG_INTF_BASE_ADDRESS)
#define WLAN_MAC_BASE_ADDRESS    (scn->targetdef->d_WLAN_MAC_BASE_ADDRESS)
#define FW_INDICATOR_ADDRESS     (scn->targetdef->d_FW_INDICATOR_ADDRESS)
#define DRAM_BASE_ADDRESS        (scn->targetdef->d_DRAM_BASE_ADDRESS)
#define SOC_CORE_BASE_ADDRESS    (scn->targetdef->d_SOC_CORE_BASE_ADDRESS)
#define CORE_CTRL_ADDRESS        (scn->targetdef->d_CORE_CTRL_ADDRESS)
#define CE_COUNT                 (scn->targetdef->d_CE_COUNT)
#define PCIE_INTR_ENABLE_ADDRESS (scn->targetdef->d_PCIE_INTR_ENABLE_ADDRESS)
#define PCIE_INTR_CLR_ADDRESS    (scn->targetdef->d_PCIE_INTR_CLR_ADDRESS)
#define PCIE_INTR_FIRMWARE_MASK  (scn->targetdef->d_PCIE_INTR_FIRMWARE_MASK)
#define PCIE_INTR_CE_MASK_ALL    (scn->targetdef->d_PCIE_INTR_CE_MASK_ALL)
#define CORE_CTRL_CPU_INTR_MASK  (scn->targetdef->d_CORE_CTRL_CPU_INTR_MASK)
#define PCIE_INTR_CAUSE_ADDRESS  (scn->targetdef->d_PCIE_INTR_CAUSE_ADDRESS)
#define SOC_RESET_CONTROL_ADDRESS  (scn->targetdef->d_SOC_RESET_CONTROL_ADDRESS)
#define HOST_GROUP0_MASK (PCIE_INTR_FIRMWARE_MASK | PCIE_INTR_CE_MASK_ALL | \
	A_SOC_CORE_PCIE_INTR_ENABLE_GRP0_Q6_MASK)
#define SOC_RESET_CONTROL_CE_RST_MASK \
	(scn->targetdef->d_SOC_RESET_CONTROL_CE_RST_MASK)
#define SOC_RESET_CONTROL_CPU_WARM_RST_MASK \
	(scn->targetdef->d_SOC_RESET_CONTROL_CPU_WARM_RST_MASK)
#define CPU_INTR_ADDRESS        (scn->targetdef->d_CPU_INTR_ADDRESS)
#define SOC_LF_TIMER_CONTROL0_ADDRESS \
	(scn->targetdef->d_SOC_LF_TIMER_CONTROL0_ADDRESS)
#define SOC_LF_TIMER_CONTROL0_ENABLE_MASK \
	(scn->targetdef->d_SOC_LF_TIMER_CONTROL0_ENABLE_MASK)
#define SOC_LF_TIMER_STATUS0_ADDRESS \
	(scn->targetdef->d_SOC_LF_TIMER_STATUS0_ADDRESS)
#define SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB \
	(scn->targetdef->d_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB)
#define SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK \
	(scn->targetdef->d_SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK)

#define SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_GET(x) \
	(((x) & SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK) >> \
	 SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB)
#define SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_SET(x) \
	(((x) << SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_LSB) & \
		SOC_RESET_CONTROL_PCIE_RST_SHORT_OVRD_MASK)

/* hif_pci.c */
#define CHIP_ID_ADDRESS           (scn->targetdef->d_SOC_CHIP_ID_ADDRESS)
#define SOC_CHIP_ID_REVISION_MASK (scn->targetdef->d_SOC_CHIP_ID_REVISION_MASK)
#define SOC_CHIP_ID_REVISION_LSB  (scn->targetdef->d_SOC_CHIP_ID_REVISION_LSB)
#define SOC_CHIP_ID_VERSION_MASK  (scn->targetdef->d_SOC_CHIP_ID_VERSION_MASK)
#define SOC_CHIP_ID_VERSION_LSB   (scn->targetdef->d_SOC_CHIP_ID_VERSION_LSB)
#define CHIP_ID_REVISION_GET(x) \
	(((x) & SOC_CHIP_ID_REVISION_MASK) >> SOC_CHIP_ID_REVISION_LSB)
#define CHIP_ID_VERSION_GET(x) \
	(((x) & SOC_CHIP_ID_VERSION_MASK) >> SOC_CHIP_ID_VERSION_LSB)
/* hif_pci.c end */

/* misc */
#define SR_WR_INDEX_ADDRESS     (scn->targetdef->d_SR_WR_INDEX_ADDRESS)
#define DST_WATERMARK_ADDRESS   (scn->targetdef->d_DST_WATERMARK_ADDRESS)
#define SOC_POWER_REG_OFFSET    (scn->targetdef->d_SOC_POWER_REG_OFFSET)
/* end */

/* copy_engine.c */
/* end */
/* PLL start */
#define EFUSE_OFFSET              (scn->targetdef->d_EFUSE_OFFSET)
#define EFUSE_XTAL_SEL_MSB        (scn->targetdef->d_EFUSE_XTAL_SEL_MSB)
#define EFUSE_XTAL_SEL_LSB        (scn->targetdef->d_EFUSE_XTAL_SEL_LSB)
#define EFUSE_XTAL_SEL_MASK       (scn->targetdef->d_EFUSE_XTAL_SEL_MASK)
#define BB_PLL_CONFIG_OFFSET      (scn->targetdef->d_BB_PLL_CONFIG_OFFSET)
#define BB_PLL_CONFIG_OUTDIV_MSB  (scn->targetdef->d_BB_PLL_CONFIG_OUTDIV_MSB)
#define BB_PLL_CONFIG_OUTDIV_LSB  (scn->targetdef->d_BB_PLL_CONFIG_OUTDIV_LSB)
#define BB_PLL_CONFIG_OUTDIV_MASK (scn->targetdef->d_BB_PLL_CONFIG_OUTDIV_MASK)
#define BB_PLL_CONFIG_FRAC_MSB    (scn->targetdef->d_BB_PLL_CONFIG_FRAC_MSB)
#define BB_PLL_CONFIG_FRAC_LSB    (scn->targetdef->d_BB_PLL_CONFIG_FRAC_LSB)
#define BB_PLL_CONFIG_FRAC_MASK   (scn->targetdef->d_BB_PLL_CONFIG_FRAC_MASK)
#define WLAN_PLL_SETTLE_TIME_MSB  (scn->targetdef->d_WLAN_PLL_SETTLE_TIME_MSB)
#define WLAN_PLL_SETTLE_TIME_LSB  (scn->targetdef->d_WLAN_PLL_SETTLE_TIME_LSB)
#define WLAN_PLL_SETTLE_TIME_MASK (scn->targetdef->d_WLAN_PLL_SETTLE_TIME_MASK)
#define WLAN_PLL_SETTLE_OFFSET    (scn->targetdef->d_WLAN_PLL_SETTLE_OFFSET)
#define WLAN_PLL_SETTLE_SW_MASK   (scn->targetdef->d_WLAN_PLL_SETTLE_SW_MASK)
#define WLAN_PLL_SETTLE_RSTMASK   (scn->targetdef->d_WLAN_PLL_SETTLE_RSTMASK)
#define WLAN_PLL_SETTLE_RESET     (scn->targetdef->d_WLAN_PLL_SETTLE_RESET)
#define WLAN_PLL_CONTROL_NOPWD_MSB  \
	(scn->targetdef->d_WLAN_PLL_CONTROL_NOPWD_MSB)
#define WLAN_PLL_CONTROL_NOPWD_LSB  \
	(scn->targetdef->d_WLAN_PLL_CONTROL_NOPWD_LSB)
#define WLAN_PLL_CONTROL_NOPWD_MASK \
	(scn->targetdef->d_WLAN_PLL_CONTROL_NOPWD_MASK)
#define WLAN_PLL_CONTROL_BYPASS_MSB \
	(scn->targetdef->d_WLAN_PLL_CONTROL_BYPASS_MSB)
#define WLAN_PLL_CONTROL_BYPASS_LSB \
	(scn->targetdef->d_WLAN_PLL_CONTROL_BYPASS_LSB)
#define WLAN_PLL_CONTROL_BYPASS_MASK \
	(scn->targetdef->d_WLAN_PLL_CONTROL_BYPASS_MASK)
#define WLAN_PLL_CONTROL_BYPASS_RESET \
	(scn->targetdef->d_WLAN_PLL_CONTROL_BYPASS_RESET)
#define WLAN_PLL_CONTROL_CLK_SEL_MSB \
	(scn->targetdef->d_WLAN_PLL_CONTROL_CLK_SEL_MSB)
#define WLAN_PLL_CONTROL_CLK_SEL_LSB \
	(scn->targetdef->d_WLAN_PLL_CONTROL_CLK_SEL_LSB)
#define WLAN_PLL_CONTROL_CLK_SEL_MASK \
	(scn->targetdef->d_WLAN_PLL_CONTROL_CLK_SEL_MASK)
#define WLAN_PLL_CONTROL_CLK_SEL_RESET \
	(scn->targetdef->d_WLAN_PLL_CONTROL_CLK_SEL_RESET)
#define WLAN_PLL_CONTROL_REFDIV_MSB \
	(scn->targetdef->d_WLAN_PLL_CONTROL_REFDIV_MSB)
#define WLAN_PLL_CONTROL_REFDIV_LSB \
	(scn->targetdef->d_WLAN_PLL_CONTROL_REFDIV_LSB)
#define WLAN_PLL_CONTROL_REFDIV_MASK \
	(scn->targetdef->d_WLAN_PLL_CONTROL_REFDIV_MASK)
#define WLAN_PLL_CONTROL_REFDIV_RESET \
	(scn->targetdef->d_WLAN_PLL_CONTROL_REFDIV_RESET)
#define WLAN_PLL_CONTROL_DIV_MSB   (scn->targetdef->d_WLAN_PLL_CONTROL_DIV_MSB)
#define WLAN_PLL_CONTROL_DIV_LSB   (scn->targetdef->d_WLAN_PLL_CONTROL_DIV_LSB)
#define WLAN_PLL_CONTROL_DIV_MASK  (scn->targetdef->d_WLAN_PLL_CONTROL_DIV_MASK)
#define WLAN_PLL_CONTROL_DIV_RESET \
	(scn->targetdef->d_WLAN_PLL_CONTROL_DIV_RESET)
#define WLAN_PLL_CONTROL_OFFSET    (scn->targetdef->d_WLAN_PLL_CONTROL_OFFSET)
#define WLAN_PLL_CONTROL_SW_MASK   (scn->targetdef->d_WLAN_PLL_CONTROL_SW_MASK)
#define WLAN_PLL_CONTROL_RSTMASK   (scn->targetdef->d_WLAN_PLL_CONTROL_RSTMASK)
#define WLAN_PLL_CONTROL_RESET     (scn->targetdef->d_WLAN_PLL_CONTROL_RESET)
#define SOC_CORE_CLK_CTRL_OFFSET   (scn->targetdef->d_SOC_CORE_CLK_CTRL_OFFSET)
#define SOC_CORE_CLK_CTRL_DIV_MSB  (scn->targetdef->d_SOC_CORE_CLK_CTRL_DIV_MSB)
#define SOC_CORE_CLK_CTRL_DIV_LSB  (scn->targetdef->d_SOC_CORE_CLK_CTRL_DIV_LSB)
#define SOC_CORE_CLK_CTRL_DIV_MASK \
	(scn->targetdef->d_SOC_CORE_CLK_CTRL_DIV_MASK)
#define RTC_SYNC_STATUS_PLL_CHANGING_MSB \
	(scn->targetdef->d_RTC_SYNC_STATUS_PLL_CHANGING_MSB)
#define RTC_SYNC_STATUS_PLL_CHANGING_LSB \
	(scn->targetdef->d_RTC_SYNC_STATUS_PLL_CHANGING_LSB)
#define RTC_SYNC_STATUS_PLL_CHANGING_MASK \
	(scn->targetdef->d_RTC_SYNC_STATUS_PLL_CHANGING_MASK)
#define RTC_SYNC_STATUS_PLL_CHANGING_RESET \
	(scn->targetdef->d_RTC_SYNC_STATUS_PLL_CHANGING_RESET)
#define RTC_SYNC_STATUS_OFFSET      (scn->targetdef->d_RTC_SYNC_STATUS_OFFSET)
#define SOC_CPU_CLOCK_OFFSET        (scn->targetdef->d_SOC_CPU_CLOCK_OFFSET)
#define SOC_CPU_CLOCK_STANDARD_MSB \
	(scn->targetdef->d_SOC_CPU_CLOCK_STANDARD_MSB)
#define SOC_CPU_CLOCK_STANDARD_LSB \
	(scn->targetdef->d_SOC_CPU_CLOCK_STANDARD_LSB)
#define SOC_CPU_CLOCK_STANDARD_MASK \
	(scn->targetdef->d_SOC_CPU_CLOCK_STANDARD_MASK)
/* PLL end */

#define FW_CPU_PLL_CONFIG \
	(scn->targetdef->d_FW_CPU_PLL_CONFIG)

#define WIFICMN_PCIE_BAR_REG_ADDRESS \
	(sc->targetdef->d_WIFICMN_PCIE_BAR_REG_ADDRESS)

    /* htt tx */
#define MSDU_LINK_EXT_3_TCP_OVER_IPV4_CHECKSUM_EN_MASK \
	(pdev->targetdef->d_MSDU_LINK_EXT_3_TCP_OVER_IPV4_CHECKSUM_EN_MASK)
#define MSDU_LINK_EXT_3_TCP_OVER_IPV6_CHECKSUM_EN_MASK \
	(pdev->targetdef->d_MSDU_LINK_EXT_3_TCP_OVER_IPV6_CHECKSUM_EN_MASK)
#define MSDU_LINK_EXT_3_UDP_OVER_IPV4_CHECKSUM_EN_MASK \
	(pdev->targetdef->d_MSDU_LINK_EXT_3_UDP_OVER_IPV4_CHECKSUM_EN_MASK)
#define MSDU_LINK_EXT_3_UDP_OVER_IPV6_CHECKSUM_EN_MASK \
	(pdev->targetdef->d_MSDU_LINK_EXT_3_UDP_OVER_IPV6_CHECKSUM_EN_MASK)
#define MSDU_LINK_EXT_3_TCP_OVER_IPV4_CHECKSUM_EN_LSB  \
	(pdev->targetdef->d_MSDU_LINK_EXT_3_TCP_OVER_IPV4_CHECKSUM_EN_LSB)
#define MSDU_LINK_EXT_3_TCP_OVER_IPV6_CHECKSUM_EN_LSB  \
	(pdev->targetdef->d_MSDU_LINK_EXT_3_TCP_OVER_IPV6_CHECKSUM_EN_LSB)
#define MSDU_LINK_EXT_3_UDP_OVER_IPV4_CHECKSUM_EN_LSB  \
	(pdev->targetdef->d_MSDU_LINK_EXT_3_UDP_OVER_IPV4_CHECKSUM_EN_LSB)
#define MSDU_LINK_EXT_3_UDP_OVER_IPV6_CHECKSUM_EN_LSB  \
	(pdev->targetdef->d_MSDU_LINK_EXT_3_UDP_OVER_IPV6_CHECKSUM_EN_LSB)

#define CE_CMD_ADDRESS            \
	(scn->targetdef->d_CE_CMD_ADDRESS)
#define CE_CMD_HALT_MASK          \
	(scn->targetdef->d_CE_CMD_HALT_MASK)
#define CE_CMD_HALT_STATUS_MASK   \
	(scn->targetdef->d_CE_CMD_HALT_STATUS_MASK)
#define CE_CMD_HALT_STATUS_LSB    \
	(scn->targetdef->d_CE_CMD_HALT_STATUS_LSB)

#define SI_CONFIG_ERR_INT_MASK       \
	(scn->targetdef->d_SI_CONFIG_ERR_INT_MASK)
#define SI_CONFIG_ERR_INT_LSB        \
	(scn->targetdef->d_SI_CONFIG_ERR_INT_LSB)
#define GPIO_ENABLE_W1TS_LOW_ADDRESS \
	(scn->targetdef->d_GPIO_ENABLE_W1TS_LOW_ADDRESS)
#define GPIO_PIN0_CONFIG_LSB         \
	(scn->targetdef->d_GPIO_PIN0_CONFIG_LSB)
#define GPIO_PIN0_PAD_PULL_LSB       \
	(scn->targetdef->d_GPIO_PIN0_PAD_PULL_LSB)
#define GPIO_PIN0_PAD_PULL_MASK      \
	(scn->targetdef->d_GPIO_PIN0_PAD_PULL_MASK)

#define SOC_CHIP_ID_REVISION_MSB \
	(scn->targetdef->d_SOC_CHIP_ID_REVISION_MSB)

#define FW_AXI_MSI_ADDR                \
	(scn->targetdef->d_FW_AXI_MSI_ADDR)
#define FW_AXI_MSI_DATA                \
	(scn->targetdef->d_FW_AXI_MSI_DATA)
#define WLAN_SUBSYSTEM_CORE_ID_ADDRESS \
	(scn->targetdef->d_WLAN_SUBSYSTEM_CORE_ID_ADDRESS)
#define FPGA_VERSION_ADDRESS           \
	(scn->targetdef->d_FPGA_VERSION_ADDRESS)

/* SET macros */
#define WLAN_SYSTEM_SLEEP_DISABLE_SET(x) \
	(((x) << WLAN_SYSTEM_SLEEP_DISABLE_LSB) & \
	    WLAN_SYSTEM_SLEEP_DISABLE_MASK)
#define SI_CONFIG_BIDIR_OD_DATA_SET(x) \
	(((x) << SI_CONFIG_BIDIR_OD_DATA_LSB) & SI_CONFIG_BIDIR_OD_DATA_MASK)
#define SI_CONFIG_I2C_SET(x)  (((x) << SI_CONFIG_I2C_LSB) & SI_CONFIG_I2C_MASK)
#define SI_CONFIG_POS_SAMPLE_SET(x) \
	(((x) << SI_CONFIG_POS_SAMPLE_LSB) & SI_CONFIG_POS_SAMPLE_MASK)
#define SI_CONFIG_INACTIVE_CLK_SET(x) \
	(((x) << SI_CONFIG_INACTIVE_CLK_LSB) & SI_CONFIG_INACTIVE_CLK_MASK)
#define SI_CONFIG_INACTIVE_DATA_SET(x) \
	(((x) << SI_CONFIG_INACTIVE_DATA_LSB) & SI_CONFIG_INACTIVE_DATA_MASK)
#define SI_CONFIG_DIVIDER_SET(x) \
	(((x) << SI_CONFIG_DIVIDER_LSB) & SI_CONFIG_DIVIDER_MASK)
#define SI_CS_START_SET(x)  (((x) << SI_CS_START_LSB) & SI_CS_START_MASK)
#define SI_CS_RX_CNT_SET(x) (((x) << SI_CS_RX_CNT_LSB) & SI_CS_RX_CNT_MASK)
#define SI_CS_TX_CNT_SET(x) (((x) << SI_CS_TX_CNT_LSB) & SI_CS_TX_CNT_MASK)
#define LPO_CAL_ENABLE_SET(x) \
	(((x) << LPO_CAL_ENABLE_LSB) & LPO_CAL_ENABLE_MASK)
#define CPU_CLOCK_STANDARD_SET(x) \
	(((x) << CPU_CLOCK_STANDARD_LSB) & CPU_CLOCK_STANDARD_MASK)
#define CLOCK_GPIO_BT_CLK_OUT_EN_SET(x) \
	(((x) << CLOCK_GPIO_BT_CLK_OUT_EN_LSB) & CLOCK_GPIO_BT_CLK_OUT_EN_MASK)
/* copy_engine.c */
/* end */
/* PLL start */
#define EFUSE_XTAL_SEL_GET(x) \
	(((x) & EFUSE_XTAL_SEL_MASK) >> EFUSE_XTAL_SEL_LSB)
#define EFUSE_XTAL_SEL_SET(x) \
	(((x) << EFUSE_XTAL_SEL_LSB) & EFUSE_XTAL_SEL_MASK)
#define BB_PLL_CONFIG_OUTDIV_GET(x) \
	(((x) & BB_PLL_CONFIG_OUTDIV_MASK) >> BB_PLL_CONFIG_OUTDIV_LSB)
#define BB_PLL_CONFIG_OUTDIV_SET(x) \
	(((x) << BB_PLL_CONFIG_OUTDIV_LSB) & BB_PLL_CONFIG_OUTDIV_MASK)
#define BB_PLL_CONFIG_FRAC_GET(x) \
	(((x) & BB_PLL_CONFIG_FRAC_MASK) >> BB_PLL_CONFIG_FRAC_LSB)
#define BB_PLL_CONFIG_FRAC_SET(x) \
	(((x) << BB_PLL_CONFIG_FRAC_LSB) & BB_PLL_CONFIG_FRAC_MASK)
#define WLAN_PLL_SETTLE_TIME_GET(x) \
	(((x) & WLAN_PLL_SETTLE_TIME_MASK) >> WLAN_PLL_SETTLE_TIME_LSB)
#define WLAN_PLL_SETTLE_TIME_SET(x) \
	(((x) << WLAN_PLL_SETTLE_TIME_LSB) & WLAN_PLL_SETTLE_TIME_MASK)
#define WLAN_PLL_CONTROL_NOPWD_GET(x) \
	(((x) & WLAN_PLL_CONTROL_NOPWD_MASK) >> WLAN_PLL_CONTROL_NOPWD_LSB)
#define WLAN_PLL_CONTROL_NOPWD_SET(x) \
	(((x) << WLAN_PLL_CONTROL_NOPWD_LSB) & WLAN_PLL_CONTROL_NOPWD_MASK)
#define WLAN_PLL_CONTROL_BYPASS_GET(x) \
	(((x) & WLAN_PLL_CONTROL_BYPASS_MASK) >> WLAN_PLL_CONTROL_BYPASS_LSB)
#define WLAN_PLL_CONTROL_BYPASS_SET(x) \
	(((x) << WLAN_PLL_CONTROL_BYPASS_LSB) & WLAN_PLL_CONTROL_BYPASS_MASK)
#define WLAN_PLL_CONTROL_CLK_SEL_GET(x) \
	(((x) & WLAN_PLL_CONTROL_CLK_SEL_MASK) >> WLAN_PLL_CONTROL_CLK_SEL_LSB)
#define WLAN_PLL_CONTROL_CLK_SEL_SET(x) \
	(((x) << WLAN_PLL_CONTROL_CLK_SEL_LSB) & WLAN_PLL_CONTROL_CLK_SEL_MASK)
#define WLAN_PLL_CONTROL_REFDIV_GET(x) \
	(((x) & WLAN_PLL_CONTROL_REFDIV_MASK) >> WLAN_PLL_CONTROL_REFDIV_LSB)
#define WLAN_PLL_CONTROL_REFDIV_SET(x) \
	(((x) << WLAN_PLL_CONTROL_REFDIV_LSB) & WLAN_PLL_CONTROL_REFDIV_MASK)
#define WLAN_PLL_CONTROL_DIV_GET(x) \
	(((x) & WLAN_PLL_CONTROL_DIV_MASK) >> WLAN_PLL_CONTROL_DIV_LSB)
#define WLAN_PLL_CONTROL_DIV_SET(x) \
	(((x) << WLAN_PLL_CONTROL_DIV_LSB) & WLAN_PLL_CONTROL_DIV_MASK)
#define SOC_CORE_CLK_CTRL_DIV_GET(x) \
	(((x) & SOC_CORE_CLK_CTRL_DIV_MASK) >> SOC_CORE_CLK_CTRL_DIV_LSB)
#define SOC_CORE_CLK_CTRL_DIV_SET(x) \
	(((x) << SOC_CORE_CLK_CTRL_DIV_LSB) & SOC_CORE_CLK_CTRL_DIV_MASK)
#define RTC_SYNC_STATUS_PLL_CHANGING_GET(x) \
	(((x) & RTC_SYNC_STATUS_PLL_CHANGING_MASK) >> \
		RTC_SYNC_STATUS_PLL_CHANGING_LSB)
#define RTC_SYNC_STATUS_PLL_CHANGING_SET(x) \
	(((x) << RTC_SYNC_STATUS_PLL_CHANGING_LSB) & \
		RTC_SYNC_STATUS_PLL_CHANGING_MASK)
#define SOC_CPU_CLOCK_STANDARD_GET(x) \
	(((x) & SOC_CPU_CLOCK_STANDARD_MASK) >> SOC_CPU_CLOCK_STANDARD_LSB)
#define SOC_CPU_CLOCK_STANDARD_SET(x) \
	(((x) << SOC_CPU_CLOCK_STANDARD_LSB) & SOC_CPU_CLOCK_STANDARD_MASK)
/* PLL end */
#define WLAN_GPIO_PIN0_CONFIG_SET(x)   \
	(((x) << GPIO_PIN0_CONFIG_LSB) & GPIO_PIN0_CONFIG_MASK)
#define WLAN_GPIO_PIN0_PAD_PULL_SET(x) \
	(((x) << GPIO_PIN0_PAD_PULL_LSB) & GPIO_PIN0_PAD_PULL_MASK)
#define SI_CONFIG_ERR_INT_SET(x)       \
	(((x) << SI_CONFIG_ERR_INT_LSB) & SI_CONFIG_ERR_INT_MASK)


#ifdef QCA_WIFI_3_0_ADRASTEA
#define Q6_ENABLE_REGISTER_0 \
	(scn->targetdef->d_Q6_ENABLE_REGISTER_0)
#define Q6_ENABLE_REGISTER_1 \
	(scn->targetdef->d_Q6_ENABLE_REGISTER_1)
#define Q6_CAUSE_REGISTER_0 \
	(scn->targetdef->d_Q6_CAUSE_REGISTER_0)
#define Q6_CAUSE_REGISTER_1 \
	(scn->targetdef->d_Q6_CAUSE_REGISTER_1)
#define Q6_CLEAR_REGISTER_0 \
	(scn->targetdef->d_Q6_CLEAR_REGISTER_0)
#define Q6_CLEAR_REGISTER_1 \
	(scn->targetdef->d_Q6_CLEAR_REGISTER_1)
#endif

#ifdef CONFIG_BYPASS_QMI
#define BYPASS_QMI_TEMP_REGISTER \
	(scn->targetdef->d_BYPASS_QMI_TEMP_REGISTER)
#endif

#define A_SOC_PCIE_PCIE_BAR0_START (scn->hostdef->d_A_SOC_PCIE_PCIE_BAR0_START)
#define DESC_DATA_FLAG_MASK        (scn->hostdef->d_DESC_DATA_FLAG_MASK)
#define MUX_ID_MASK                (scn->hostdef->d_MUX_ID_MASK)
#define TRANSACTION_ID_MASK        (scn->hostdef->d_TRANSACTION_ID_MASK)
#define HOST_CE_COUNT              (scn->hostdef->d_HOST_CE_COUNT)
#define ENABLE_MSI                 (scn->hostdef->d_ENABLE_MSI)
#define INT_STATUS_ENABLE_ERROR_LSB \
	(scn->hostdef->d_INT_STATUS_ENABLE_ERROR_LSB)
#define INT_STATUS_ENABLE_ERROR_MASK \
	(scn->hostdef->d_INT_STATUS_ENABLE_ERROR_MASK)
#define INT_STATUS_ENABLE_CPU_LSB  (scn->hostdef->d_INT_STATUS_ENABLE_CPU_LSB)
#define INT_STATUS_ENABLE_CPU_MASK (scn->hostdef->d_INT_STATUS_ENABLE_CPU_MASK)
#define INT_STATUS_ENABLE_COUNTER_LSB \
	(scn->hostdef->d_INT_STATUS_ENABLE_COUNTER_LSB)
#define INT_STATUS_ENABLE_COUNTER_MASK \
	(scn->hostdef->d_INT_STATUS_ENABLE_COUNTER_MASK)
#define INT_STATUS_ENABLE_MBOX_DATA_LSB \
	(scn->hostdef->d_INT_STATUS_ENABLE_MBOX_DATA_LSB)
#define INT_STATUS_ENABLE_MBOX_DATA_MASK \
	(scn->hostdef->d_INT_STATUS_ENABLE_MBOX_DATA_MASK)
#define ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB \
	(scn->hostdef->d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB)
#define ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK \
	(scn->hostdef->d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK)
#define ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB \
	(scn->hostdef->d_ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB)
#define ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK \
	(scn->hostdef->d_ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK)
#define COUNTER_INT_STATUS_ENABLE_BIT_LSB \
	(scn->hostdef->d_COUNTER_INT_STATUS_ENABLE_BIT_LSB)
#define COUNTER_INT_STATUS_ENABLE_BIT_MASK \
	(scn->hostdef->d_COUNTER_INT_STATUS_ENABLE_BIT_MASK)
#define INT_STATUS_ENABLE_ADDRESS \
	(scn->hostdef->d_INT_STATUS_ENABLE_ADDRESS)
#define CPU_INT_STATUS_ENABLE_BIT_LSB \
	(scn->hostdef->d_CPU_INT_STATUS_ENABLE_BIT_LSB)
#define CPU_INT_STATUS_ENABLE_BIT_MASK \
	(scn->hostdef->d_CPU_INT_STATUS_ENABLE_BIT_MASK)
#define HOST_INT_STATUS_ADDRESS     (scn->hostdef->d_HOST_INT_STATUS_ADDRESS)
#define CPU_INT_STATUS_ADDRESS      (scn->hostdef->d_CPU_INT_STATUS_ADDRESS)
#define ERROR_INT_STATUS_ADDRESS    (scn->hostdef->d_ERROR_INT_STATUS_ADDRESS)
#define ERROR_INT_STATUS_WAKEUP_MASK \
	(scn->hostdef->d_ERROR_INT_STATUS_WAKEUP_MASK)
#define ERROR_INT_STATUS_WAKEUP_LSB \
	(scn->hostdef->d_ERROR_INT_STATUS_WAKEUP_LSB)
#define ERROR_INT_STATUS_RX_UNDERFLOW_MASK \
	(scn->hostdef->d_ERROR_INT_STATUS_RX_UNDERFLOW_MASK)
#define ERROR_INT_STATUS_RX_UNDERFLOW_LSB \
	(scn->hostdef->d_ERROR_INT_STATUS_RX_UNDERFLOW_LSB)
#define ERROR_INT_STATUS_TX_OVERFLOW_MASK \
	(scn->hostdef->d_ERROR_INT_STATUS_TX_OVERFLOW_MASK)
#define ERROR_INT_STATUS_TX_OVERFLOW_LSB \
	(scn->hostdef->d_ERROR_INT_STATUS_TX_OVERFLOW_LSB)
#define COUNT_DEC_ADDRESS          (scn->hostdef->d_COUNT_DEC_ADDRESS)
#define HOST_INT_STATUS_CPU_MASK   (scn->hostdef->d_HOST_INT_STATUS_CPU_MASK)
#define HOST_INT_STATUS_CPU_LSB    (scn->hostdef->d_HOST_INT_STATUS_CPU_LSB)
#define HOST_INT_STATUS_ERROR_MASK (scn->hostdef->d_HOST_INT_STATUS_ERROR_MASK)
#define HOST_INT_STATUS_ERROR_LSB  (scn->hostdef->d_HOST_INT_STATUS_ERROR_LSB)
#define HOST_INT_STATUS_COUNTER_MASK \
	(scn->hostdef->d_HOST_INT_STATUS_COUNTER_MASK)
#define HOST_INT_STATUS_COUNTER_LSB \
	(scn->hostdef->d_HOST_INT_STATUS_COUNTER_LSB)
#define RX_LOOKAHEAD_VALID_ADDRESS (scn->hostdef->d_RX_LOOKAHEAD_VALID_ADDRESS)
#define WINDOW_DATA_ADDRESS        (scn->hostdef->d_WINDOW_DATA_ADDRESS)
#define WINDOW_READ_ADDR_ADDRESS   (scn->hostdef->d_WINDOW_READ_ADDR_ADDRESS)
#define WINDOW_WRITE_ADDR_ADDRESS  (scn->hostdef->d_WINDOW_WRITE_ADDR_ADDRESS)
#define SOC_GLOBAL_RESET_ADDRESS   (scn->hostdef->d_SOC_GLOBAL_RESET_ADDRESS)
#define RTC_STATE_ADDRESS          (scn->hostdef->d_RTC_STATE_ADDRESS)
#define RTC_STATE_COLD_RESET_MASK  (scn->hostdef->d_RTC_STATE_COLD_RESET_MASK)
#define PCIE_LOCAL_BASE_ADDRESS    (scn->hostdef->d_PCIE_LOCAL_BASE_ADDRESS)
#define PCIE_SOC_WAKE_RESET        (scn->hostdef->d_PCIE_SOC_WAKE_RESET)
#define PCIE_SOC_WAKE_ADDRESS      (scn->hostdef->d_PCIE_SOC_WAKE_ADDRESS)
#define PCIE_SOC_WAKE_V_MASK       (scn->hostdef->d_PCIE_SOC_WAKE_V_MASK)
#define RTC_STATE_V_MASK           (scn->hostdef->d_RTC_STATE_V_MASK)
#define RTC_STATE_V_LSB            (scn->hostdef->d_RTC_STATE_V_LSB)
#define FW_IND_EVENT_PENDING       (scn->hostdef->d_FW_IND_EVENT_PENDING)
#define FW_IND_INITIALIZED         (scn->hostdef->d_FW_IND_INITIALIZED)
#define FW_IND_HELPER              (scn->hostdef->d_FW_IND_HELPER)
#define RTC_STATE_V_ON             (scn->hostdef->d_RTC_STATE_V_ON)

#define FW_IND_HOST_READY          (scn->hostdef->d_FW_IND_HOST_READY)

#if defined(SDIO_3_0)
#define HOST_INT_STATUS_MBOX_DATA_MASK \
	(scn->hostdef->d_HOST_INT_STATUS_MBOX_DATA_MASK)
#define HOST_INT_STATUS_MBOX_DATA_LSB \
	(scn->hostdef->d_HOST_INT_STATUS_MBOX_DATA_LSB)
#endif

#if !defined(SOC_PCIE_BASE_ADDRESS)
#define SOC_PCIE_BASE_ADDRESS 0
#endif

#if !defined(PCIE_SOC_RDY_STATUS_ADDRESS)
#define PCIE_SOC_RDY_STATUS_ADDRESS 0
#define PCIE_SOC_RDY_STATUS_BAR_MASK 0
#endif

#if !defined(MSI_MAGIC_ADR_ADDRESS)
#define MSI_MAGIC_ADR_ADDRESS 0
#define MSI_MAGIC_ADDRESS 0
#endif

/* SET/GET macros */
#define INT_STATUS_ENABLE_ERROR_SET(x) \
	(((x) << INT_STATUS_ENABLE_ERROR_LSB) & INT_STATUS_ENABLE_ERROR_MASK)
#define INT_STATUS_ENABLE_CPU_SET(x) \
	(((x) << INT_STATUS_ENABLE_CPU_LSB) & INT_STATUS_ENABLE_CPU_MASK)
#define INT_STATUS_ENABLE_COUNTER_SET(x) \
	(((x) << INT_STATUS_ENABLE_COUNTER_LSB) & \
		INT_STATUS_ENABLE_COUNTER_MASK)
#define INT_STATUS_ENABLE_MBOX_DATA_SET(x) \
	(((x) << INT_STATUS_ENABLE_MBOX_DATA_LSB) & \
	 INT_STATUS_ENABLE_MBOX_DATA_MASK)
#define CPU_INT_STATUS_ENABLE_BIT_SET(x) \
	(((x) << CPU_INT_STATUS_ENABLE_BIT_LSB) & \
		CPU_INT_STATUS_ENABLE_BIT_MASK)
#define ERROR_STATUS_ENABLE_RX_UNDERFLOW_SET(x) \
	(((x) << ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB) & \
		ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK)
#define ERROR_STATUS_ENABLE_TX_OVERFLOW_SET(x) \
	(((x) << ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB) & \
		ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK)
#define COUNTER_INT_STATUS_ENABLE_BIT_SET(x) \
	(((x) << COUNTER_INT_STATUS_ENABLE_BIT_LSB) & \
		COUNTER_INT_STATUS_ENABLE_BIT_MASK)
#define ERROR_INT_STATUS_WAKEUP_GET(x) \
	(((x) & ERROR_INT_STATUS_WAKEUP_MASK) >> \
		ERROR_INT_STATUS_WAKEUP_LSB)
#define ERROR_INT_STATUS_RX_UNDERFLOW_GET(x) \
	(((x) & ERROR_INT_STATUS_RX_UNDERFLOW_MASK) >> \
		ERROR_INT_STATUS_RX_UNDERFLOW_LSB)
#define ERROR_INT_STATUS_TX_OVERFLOW_GET(x) \
	(((x) & ERROR_INT_STATUS_TX_OVERFLOW_MASK) >> \
		ERROR_INT_STATUS_TX_OVERFLOW_LSB)
#define HOST_INT_STATUS_CPU_GET(x) \
	(((x) & HOST_INT_STATUS_CPU_MASK) >> HOST_INT_STATUS_CPU_LSB)
#define HOST_INT_STATUS_ERROR_GET(x) \
	(((x) & HOST_INT_STATUS_ERROR_MASK) >> HOST_INT_STATUS_ERROR_LSB)
#define HOST_INT_STATUS_COUNTER_GET(x) \
	(((x) & HOST_INT_STATUS_COUNTER_MASK) >> HOST_INT_STATUS_COUNTER_LSB)
#define RTC_STATE_V_GET(x) \
	(((x) & RTC_STATE_V_MASK) >> RTC_STATE_V_LSB)
#if defined(SDIO_3_0)
#define HOST_INT_STATUS_MBOX_DATA_GET(x) \
	(((x) & HOST_INT_STATUS_MBOX_DATA_MASK) >> \
		HOST_INT_STATUS_MBOX_DATA_LSB)
#endif

#define INVALID_REG_LOC_DUMMY_DATA 0xAA

#define AR6320_CORE_CLK_DIV_ADDR        0x403fa8
#define AR6320_CPU_PLL_INIT_DONE_ADDR   0x403fd0
#define AR6320_CPU_SPEED_ADDR           0x403fa4
#define AR6320V2_CORE_CLK_DIV_ADDR      0x403fd8
#define AR6320V2_CPU_PLL_INIT_DONE_ADDR 0x403fd0
#define AR6320V2_CPU_SPEED_ADDR         0x403fd4
#define AR6320V3_CORE_CLK_DIV_ADDR      0x404028
#define AR6320V3_CPU_PLL_INIT_DONE_ADDR 0x404020
#define AR6320V3_CPU_SPEED_ADDR         0x404024

enum a_refclk_speed_t {
	SOC_REFCLK_UNKNOWN = -1, /* Unsupported ref clock -- use PLL Bypass */
	SOC_REFCLK_48_MHZ = 0,
	SOC_REFCLK_19_2_MHZ = 1,
	SOC_REFCLK_24_MHZ = 2,
	SOC_REFCLK_26_MHZ = 3,
	SOC_REFCLK_37_4_MHZ = 4,
	SOC_REFCLK_38_4_MHZ = 5,
	SOC_REFCLK_40_MHZ = 6,
	SOC_REFCLK_52_MHZ = 7,
};

#define A_REFCLK_UNKNOWN    SOC_REFCLK_UNKNOWN
#define A_REFCLK_48_MHZ     SOC_REFCLK_48_MHZ
#define A_REFCLK_19_2_MHZ   SOC_REFCLK_19_2_MHZ
#define A_REFCLK_24_MHZ     SOC_REFCLK_24_MHZ
#define A_REFCLK_26_MHZ     SOC_REFCLK_26_MHZ
#define A_REFCLK_37_4_MHZ   SOC_REFCLK_37_4_MHZ
#define A_REFCLK_38_4_MHZ   SOC_REFCLK_38_4_MHZ
#define A_REFCLK_40_MHZ     SOC_REFCLK_40_MHZ
#define A_REFCLK_52_MHZ     SOC_REFCLK_52_MHZ

#define TARGET_CPU_FREQ 176000000

struct wlan_pll_s {
	uint32_t refdiv;
	uint32_t div;
	uint32_t rnfrac;
	uint32_t outdiv;
};

struct cmnos_clock_s {
	enum a_refclk_speed_t refclk_speed;
	uint32_t refclk_hz;
	uint32_t pll_settling_time;     /* 50us */
	struct wlan_pll_s wlan_pll;
};

struct tgt_reg_section {
	uint32_t start_addr;
	uint32_t end_addr;
};

struct tgt_reg_table {
	const struct tgt_reg_section *section;
	uint32_t section_size;
};

struct hif_softc;
void hif_target_register_tbl_attach(struct hif_softc *scn, u32 target_type);
void hif_register_tbl_attach(struct hif_softc *scn, u32 hif_type);

#endif /* _REGTABLE_PCIE_H_ */

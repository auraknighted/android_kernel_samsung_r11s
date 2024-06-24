/* SPDX-License-Identifier: GPL-2.0+ */
/*
 * Copyright 2018 NXP
 *   Dong Aisheng <aisheng.dong@nxp.com>
 */

#ifndef __DT_BINDINGS_CLOCK_IMX_H
#define __DT_BINDINGS_CLOCK_IMX_H

/* SCU Clocks */

#define IMX_CLK_DUMMY				0

/* CPU */
#define IMX_A35_CLK					1

/* LSIO SS */
#define IMX_LSIO_MEM_CLK				2
#define IMX_LSIO_BUS_CLK				3
#define IMX_LSIO_PWM0_CLK				10
#define IMX_LSIO_PWM1_CLK				11
#define IMX_LSIO_PWM2_CLK				12
#define IMX_LSIO_PWM3_CLK				13
#define IMX_LSIO_PWM4_CLK				14
#define IMX_LSIO_PWM5_CLK				15
#define IMX_LSIO_PWM6_CLK				16
#define IMX_LSIO_PWM7_CLK				17
#define IMX_LSIO_GPT0_CLK				18
#define IMX_LSIO_GPT1_CLK				19
#define IMX_LSIO_GPT2_CLK				20
#define IMX_LSIO_GPT3_CLK				21
#define IMX_LSIO_GPT4_CLK				22
#define IMX_LSIO_FSPI0_CLK				23
#define IMX_LSIO_FSPI1_CLK				24

/* Connectivity SS */
#define IMX_CONN_AXI_CLK_ROOT				30
#define IMX_CONN_AHB_CLK_ROOT				31
#define IMX_CONN_IPG_CLK_ROOT				32
#define IMX_CONN_SDHC0_CLK				40
#define IMX_CONN_SDHC1_CLK				41
#define IMX_CONN_SDHC2_CLK				42
#define IMX_CONN_ENET0_ROOT_CLK				43
#define IMX_CONN_ENET0_BYPASS_CLK			44
#define IMX_CONN_ENET0_RGMII_CLK			45
#define IMX_CONN_ENET1_ROOT_CLK				46
#define IMX_CONN_ENET1_BYPASS_CLK			47
#define IMX_CONN_ENET1_RGMII_CLK			48
#define IMX_CONN_GPMI_BCH_IO_CLK			49
#define IMX_CONN_GPMI_BCH_CLK				50
#define IMX_CONN_USB2_ACLK				51
#define IMX_CONN_USB2_BUS_CLK				52
#define IMX_CONN_USB2_LPM_CLK				53

/* HSIO SS */
#define IMX_HSIO_AXI_CLK				60
#define IMX_HSIO_PER_CLK				61

/* Display controller SS */
#define IMX_DC_AXI_EXT_CLK				70
#define IMX_DC_AXI_INT_CLK				71
#define IMX_DC_CFG_CLK					72
#define IMX_DC0_PLL0_CLK				80
#define IMX_DC0_PLL1_CLK				81
#define IMX_DC0_DISP0_CLK				82
#define IMX_DC0_DISP1_CLK				83

/* MIPI-LVDS SS */
#define IMX_MIPI_IPG_CLK				90
#define IMX_MIPI0_PIXEL_CLK				100
#define IMX_MIPI0_BYPASS_CLK				101
#define IMX_MIPI0_LVDS_PIXEL_CLK			102
#define IMX_MIPI0_LVDS_BYPASS_CLK			103
#define IMX_MIPI0_LVDS_PHY_CLK				104
#define IMX_MIPI0_I2C0_CLK				105
#define IMX_MIPI0_I2C1_CLK				106
#define IMX_MIPI0_PWM0_CLK				107
#define IMX_MIPI1_PIXEL_CLK				108
#define IMX_MIPI1_BYPASS_CLK				109
#define IMX_MIPI1_LVDS_PIXEL_CLK			110
#define IMX_MIPI1_LVDS_BYPASS_CLK			111
#define IMX_MIPI1_LVDS_PHY_CLK				112
#define IMX_MIPI1_I2C0_CLK				113
#define IMX_MIPI1_I2C1_CLK				114
#define IMX_MIPI1_PWM0_CLK				115

/* IMG SS */
#define IMX_IMG_AXI_CLK					120
#define IMX_IMG_IPG_CLK					121
#define IMX_IMG_PXL_CLK					122

/* MIPI-CSI SS */
#define IMX_CSI0_CORE_CLK				130
#define IMX_CSI0_ESC_CLK				131
#define IMX_CSI0_PWM0_CLK				132
#define IMX_CSI0_I2C0_CLK				133

/* PARALLER CSI SS */
#define IMX_PARALLEL_CSI_DPLL_CLK			140
#define IMX_PARALLEL_CSI_PIXEL_CLK			141
#define IMX_PARALLEL_CSI_MCLK_CLK			142

/* VPU SS */
#define IMX_VPU_ENC_CLK					150
#define IMX_VPU_DEC_CLK					151

/* GPU SS */
#define IMX_GPU0_CORE_CLK				160
#define IMX_GPU0_SHADER_CLK				161

/* ADMA SS */
#define IMX_ADMA_IPG_CLK_ROOT				165
#define IMX_ADMA_UART0_CLK				170
#define IMX_ADMA_UART1_CLK				171
#define IMX_ADMA_UART2_CLK				172
#define IMX_ADMA_UART3_CLK				173
#define IMX_ADMA_SPI0_CLK				174
#define IMX_ADMA_SPI1_CLK				175
#define IMX_ADMA_SPI2_CLK				176
#define IMX_ADMA_SPI3_CLK				177
#define IMX_ADMA_CAN0_CLK				178
#define IMX_ADMA_CAN1_CLK				179
#define IMX_ADMA_CAN2_CLK				180
#define IMX_ADMA_I2C0_CLK				181
#define IMX_ADMA_I2C1_CLK				182
#define IMX_ADMA_I2C2_CLK				183
#define IMX_ADMA_I2C3_CLK				184
#define IMX_ADMA_FTM0_CLK				185
#define IMX_ADMA_FTM1_CLK				186
#define IMX_ADMA_ADC0_CLK				187
#define IMX_ADMA_PWM_CLK				188
#define IMX_ADMA_LCD_CLK				189

#define IMX_SCU_CLK_END					190

/* LPCG clocks */

/* LSIO SS LPCG */
#define IMX_LSIO_LPCG_PWM0_IPG_CLK			0
#define IMX_LSIO_LPCG_PWM0_IPG_S_CLK			1
#define IMX_LSIO_LPCG_PWM0_IPG_HF_CLK			2
#define IMX_LSIO_LPCG_PWM0_IPG_SLV_CLK			3
#define IMX_LSIO_LPCG_PWM0_IPG_MSTR_CLK			4
#define IMX_LSIO_LPCG_PWM1_IPG_CLK			5
#define IMX_LSIO_LPCG_PWM1_IPG_S_CLK			6
#define IMX_LSIO_LPCG_PWM1_IPG_HF_CLK			7
#define IMX_LSIO_LPCG_PWM1_IPG_SLV_CLK			8
#define IMX_LSIO_LPCG_PWM1_IPG_MSTR_CLK			9
#define IMX_LSIO_LPCG_PWM2_IPG_CLK			10
#define IMX_LSIO_LPCG_PWM2_IPG_S_CLK			11
#define IMX_LSIO_LPCG_PWM2_IPG_HF_CLK			12
#define IMX_LSIO_LPCG_PWM2_IPG_SLV_CLK			13
#define IMX_LSIO_LPCG_PWM2_IPG_MSTR_CLK			14
#define IMX_LSIO_LPCG_PWM3_IPG_CLK			15
#define IMX_LSIO_LPCG_PWM3_IPG_S_CLK			16
#define IMX_LSIO_LPCG_PWM3_IPG_HF_CLK			17
#define IMX_LSIO_LPCG_PWM3_IPG_SLV_CLK			18
#define IMX_LSIO_LPCG_PWM3_IPG_MSTR_CLK			19
#define IMX_LSIO_LPCG_PWM4_IPG_CLK			20
#define IMX_LSIO_LPCG_PWM4_IPG_S_CLK			21
#define IMX_LSIO_LPCG_PWM4_IPG_HF_CLK			22
#define IMX_LSIO_LPCG_PWM4_IPG_SLV_CLK			23
#define IMX_LSIO_LPCG_PWM4_IPG_MSTR_CLK			24
#define IMX_LSIO_LPCG_PWM5_IPG_CLK			25
#define IMX_LSIO_LPCG_PWM5_IPG_S_CLK			26
#define IMX_LSIO_LPCG_PWM5_IPG_HF_CLK			27
#define IMX_LSIO_LPCG_PWM5_IPG_SLV_CLK			28
#define IMX_LSIO_LPCG_PWM5_IPG_MSTR_CLK			29
#define IMX_LSIO_LPCG_PWM6_IPG_CLK			30
#define IMX_LSIO_LPCG_PWM6_IPG_S_CLK			31
#define IMX_LSIO_LPCG_PWM6_IPG_HF_CLK			32
#define IMX_LSIO_LPCG_PWM6_IPG_SLV_CLK			33
#define IMX_LSIO_LPCG_PWM6_IPG_MSTR_CLK			34
#define IMX_LSIO_LPCG_PWM7_IPG_CLK			35
#define IMX_LSIO_LPCG_PWM7_IPG_S_CLK			36
#define IMX_LSIO_LPCG_PWM7_IPG_HF_CLK			37
#define IMX_LSIO_LPCG_PWM7_IPG_SLV_CLK			38
#define IMX_LSIO_LPCG_PWM7_IPG_MSTR_CLK			39
#define IMX_LSIO_LPCG_GPT0_IPG_CLK			40
#define IMX_LSIO_LPCG_GPT0_IPG_S_CLK			41
#define IMX_LSIO_LPCG_GPT0_IPG_HF_CLK			42
#define IMX_LSIO_LPCG_GPT0_IPG_SLV_CLK			43
#define IMX_LSIO_LPCG_GPT0_IPG_MSTR_CLK			44
#define IMX_LSIO_LPCG_GPT1_IPG_CLK			45
#define IMX_LSIO_LPCG_GPT1_IPG_S_CLK			46
#define IMX_LSIO_LPCG_GPT1_IPG_HF_CLK			47
#define IMX_LSIO_LPCG_GPT1_IPG_SLV_CLK			48
#define IMX_LSIO_LPCG_GPT1_IPG_MSTR_CLK			49
#define IMX_LSIO_LPCG_GPT2_IPG_CLK			50
#define IMX_LSIO_LPCG_GPT2_IPG_S_CLK			51
#define IMX_LSIO_LPCG_GPT2_IPG_HF_CLK			52
#define IMX_LSIO_LPCG_GPT2_IPG_SLV_CLK			53
#define IMX_LSIO_LPCG_GPT2_IPG_MSTR_CLK			54
#define IMX_LSIO_LPCG_GPT3_IPG_CLK			55
#define IMX_LSIO_LPCG_GPT3_IPG_S_CLK			56
#define IMX_LSIO_LPCG_GPT3_IPG_HF_CLK			57
#define IMX_LSIO_LPCG_GPT3_IPG_SLV_CLK			58
#define IMX_LSIO_LPCG_GPT3_IPG_MSTR_CLK			59
#define IMX_LSIO_LPCG_GPT4_IPG_CLK			60
#define IMX_LSIO_LPCG_GPT4_IPG_S_CLK			61
#define IMX_LSIO_LPCG_GPT4_IPG_HF_CLK			62
#define IMX_LSIO_LPCG_GPT4_IPG_SLV_CLK			63
#define IMX_LSIO_LPCG_GPT4_IPG_MSTR_CLK			64
#define IMX_LSIO_LPCG_FSPI0_HCLK			65
#define IMX_LSIO_LPCG_FSPI0_IPG_CLK			66
#define IMX_LSIO_LPCG_FSPI0_IPG_S_CLK			67
#define IMX_LSIO_LPCG_FSPI0_IPG_SFCK			68
#define IMX_LSIO_LPCG_FSPI1_HCLK			69
#define IMX_LSIO_LPCG_FSPI1_IPG_CLK			70
#define IMX_LSIO_LPCG_FSPI1_IPG_S_CLK			71
#define IMX_LSIO_LPCG_FSPI1_IPG_SFCK			72

#define IMX_LSIO_LPCG_CLK_END				73

/* Connectivity SS LPCG */
#define IMX_CONN_LPCG_SDHC0_IPG_CLK			0
#define IMX_CONN_LPCG_SDHC0_PER_CLK			1
#define IMX_CONN_LPCG_SDHC0_HCLK			2
#define IMX_CONN_LPCG_SDHC1_IPG_CLK			3
#define IMX_CONN_LPCG_SDHC1_PER_CLK			4
#define IMX_CONN_LPCG_SDHC1_HCLK			5
#define IMX_CONN_LPCG_SDHC2_IPG_CLK			6
#define IMX_CONN_LPCG_SDHC2_PER_CLK			7
#define IMX_CONN_LPCG_SDHC2_HCLK			8
#define IMX_CONN_LPCG_GPMI_APB_CLK			9
#define IMX_CONN_LPCG_GPMI_BCH_APB_CLK			10
#define IMX_CONN_LPCG_GPMI_BCH_IO_CLK			11
#define IMX_CONN_LPCG_GPMI_BCH_CLK			12
#define IMX_CONN_LPCG_APBHDMA_CLK			13
#define IMX_CONN_LPCG_ENET0_ROOT_CLK			14
#define IMX_CONN_LPCG_ENET0_TX_CLK			15
#define IMX_CONN_LPCG_ENET0_AHB_CLK			16
#define IMX_CONN_LPCG_ENET0_IPG_S_CLK			17
#define IMX_CONN_LPCG_ENET0_IPG_CLK			18

#define IMX_CONN_LPCG_ENET1_ROOT_CLK			19
#define IMX_CONN_LPCG_ENET1_TX_CLK			20
#define IMX_CONN_LPCG_ENET1_AHB_CLK			21
#define IMX_CONN_LPCG_ENET1_IPG_S_CLK			22
#define IMX_CONN_LPCG_ENET1_IPG_CLK			23

#define IMX_CONN_LPCG_CLK_END				24

/* ADMA SS LPCG */
#define IMX_ADMA_LPCG_UART0_IPG_CLK			0
#define IMX_ADMA_LPCG_UART0_BAUD_CLK			1
#define IMX_ADMA_LPCG_UART1_IPG_CLK			2
#define IMX_ADMA_LPCG_UART1_BAUD_CLK			3
#define IMX_ADMA_LPCG_UART2_IPG_CLK			4
#define IMX_ADMA_LPCG_UART2_BAUD_CLK			5
#define IMX_ADMA_LPCG_UART3_IPG_CLK			6
#define IMX_ADMA_LPCG_UART3_BAUD_CLK			7
#define IMX_ADMA_LPCG_SPI0_IPG_CLK			8
#define IMX_ADMA_LPCG_SPI1_IPG_CLK			9
#define IMX_ADMA_LPCG_SPI2_IPG_CLK			10
#define IMX_ADMA_LPCG_SPI3_IPG_CLK			11
#define IMX_ADMA_LPCG_SPI0_CLK				12
#define IMX_ADMA_LPCG_SPI1_CLK				13
#define IMX_ADMA_LPCG_SPI2_CLK				14
#define IMX_ADMA_LPCG_SPI3_CLK				15
#define IMX_ADMA_LPCG_CAN0_IPG_CLK			16
#define IMX_ADMA_LPCG_CAN0_IPG_PE_CLK			17
#define IMX_ADMA_LPCG_CAN0_IPG_CHI_CLK			18
#define IMX_ADMA_LPCG_CAN1_IPG_CLK			19
#define IMX_ADMA_LPCG_CAN1_IPG_PE_CLK			20
#define IMX_ADMA_LPCG_CAN1_IPG_CHI_CLK			21
#define IMX_ADMA_LPCG_CAN2_IPG_CLK			22
#define IMX_ADMA_LPCG_CAN2_IPG_PE_CLK			23
#define IMX_ADMA_LPCG_CAN2_IPG_CHI_CLK			24
#define IMX_ADMA_LPCG_I2C0_CLK				25
#define IMX_ADMA_LPCG_I2C1_CLK				26
#define IMX_ADMA_LPCG_I2C2_CLK				27
#define IMX_ADMA_LPCG_I2C3_CLK				28
#define IMX_ADMA_LPCG_I2C0_IPG_CLK			29
#define IMX_ADMA_LPCG_I2C1_IPG_CLK			30
#define IMX_ADMA_LPCG_I2C2_IPG_CLK			31
#define IMX_ADMA_LPCG_I2C3_IPG_CLK			32
#define IMX_ADMA_LPCG_FTM0_CLK				33
#define IMX_ADMA_LPCG_FTM1_CLK				34
#define IMX_ADMA_LPCG_FTM0_IPG_CLK			35
#define IMX_ADMA_LPCG_FTM1_IPG_CLK			36
#define IMX_ADMA_LPCG_PWM_HI_CLK			37
#define IMX_ADMA_LPCG_PWM_IPG_CLK			38
#define IMX_ADMA_LPCG_LCD_PIX_CLK			39
#define IMX_ADMA_LPCG_LCD_APB_CLK			40
#define IMX_ADMA_LPCG_DSP_ADB_CLK			41
#define IMX_ADMA_LPCG_DSP_IPG_CLK			42
#define IMX_ADMA_LPCG_DSP_CORE_CLK			43
#define IMX_ADMA_LPCG_OCRAM_IPG_CLK			44

#define IMX_ADMA_LPCG_CLK_END				45

#endif /* __DT_BINDINGS_CLOCK_IMX_H */

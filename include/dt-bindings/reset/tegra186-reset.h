/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2015, NVIDIA CORPORATION.  All rights reserved.
 */

#ifndef _ABI_MACH_T186_RESET_T186_H_
#define _ABI_MACH_T186_RESET_T186_H_


#define TEGRA186_RESET_ACTMON			0
#define TEGRA186_RESET_AFI			1
#define TEGRA186_RESET_CEC			2
#define TEGRA186_RESET_CSITE			3
#define TEGRA186_RESET_DP2			4
#define TEGRA186_RESET_DPAUX			5
#define TEGRA186_RESET_DSI			6
#define TEGRA186_RESET_DSIB			7
#define TEGRA186_RESET_DTV			8
#define TEGRA186_RESET_DVFS			9
#define TEGRA186_RESET_ENTROPY			10
#define TEGRA186_RESET_EXTPERIPH1		11
#define TEGRA186_RESET_EXTPERIPH2		12
#define TEGRA186_RESET_EXTPERIPH3		13
#define TEGRA186_RESET_GPU			14
#define TEGRA186_RESET_HDA			15
#define TEGRA186_RESET_HDA2CODEC_2X		16
#define TEGRA186_RESET_HDA2HDMICODEC		17
#define TEGRA186_RESET_HOST1X			18
#define TEGRA186_RESET_I2C1			19
#define TEGRA186_RESET_I2C2			20
#define TEGRA186_RESET_I2C3			21
#define TEGRA186_RESET_I2C4			22
#define TEGRA186_RESET_I2C5			23
#define TEGRA186_RESET_I2C6			24
#define TEGRA186_RESET_ISP			25
#define TEGRA186_RESET_KFUSE			26
#define TEGRA186_RESET_LA			27
#define TEGRA186_RESET_MIPI_CAL			28
#define TEGRA186_RESET_PCIE			29
#define TEGRA186_RESET_PCIEXCLK			30
#define TEGRA186_RESET_SATA			31
#define TEGRA186_RESET_SATACOLD			32
#define TEGRA186_RESET_SDMMC1			33
#define TEGRA186_RESET_SDMMC2			34
#define TEGRA186_RESET_SDMMC3			35
#define TEGRA186_RESET_SDMMC4			36
#define TEGRA186_RESET_SE			37
#define TEGRA186_RESET_SOC_THERM		38
#define TEGRA186_RESET_SOR0			39
#define TEGRA186_RESET_SPI1			40
#define TEGRA186_RESET_SPI2			41
#define TEGRA186_RESET_SPI3			42
#define TEGRA186_RESET_SPI4			43
#define TEGRA186_RESET_TMR			44
#define TEGRA186_RESET_TRIG_SYS			45
#define TEGRA186_RESET_TSEC			46
#define TEGRA186_RESET_UARTA			47
#define TEGRA186_RESET_UARTB			48
#define TEGRA186_RESET_UARTC			49
#define TEGRA186_RESET_UARTD			50
#define TEGRA186_RESET_VI			51
#define TEGRA186_RESET_VIC			52
#define TEGRA186_RESET_XUSB_DEV			53
#define TEGRA186_RESET_XUSB_HOST		54
#define TEGRA186_RESET_XUSB_PADCTL		55
#define TEGRA186_RESET_XUSB_SS			56
#define TEGRA186_RESET_AON_APB			57
#define TEGRA186_RESET_AXI_CBB			58
#define TEGRA186_RESET_BPMP_APB			59
#define TEGRA186_RESET_CAN1			60
#define TEGRA186_RESET_CAN2			61
#define TEGRA186_RESET_DMIC5			62
#define TEGRA186_RESET_DSIC			63
#define TEGRA186_RESET_DSID			64
#define TEGRA186_RESET_EMC_EMC			65
#define TEGRA186_RESET_EMC_MEM			66
#define TEGRA186_RESET_EMCSB_EMC		67
#define TEGRA186_RESET_EMCSB_MEM		68
#define TEGRA186_RESET_EQOS			69
#define TEGRA186_RESET_GPCDMA			70
#define TEGRA186_RESET_GPIO_CTL0		71
#define TEGRA186_RESET_GPIO_CTL1		72
#define TEGRA186_RESET_GPIO_CTL2		73
#define TEGRA186_RESET_GPIO_CTL3		74
#define TEGRA186_RESET_GPIO_CTL4		75
#define TEGRA186_RESET_GPIO_CTL5		76
#define TEGRA186_RESET_I2C10			77
#define TEGRA186_RESET_I2C12			78
#define TEGRA186_RESET_I2C13			79
#define TEGRA186_RESET_I2C14			80
#define TEGRA186_RESET_I2C7			81
#define TEGRA186_RESET_I2C8			82
#define TEGRA186_RESET_I2C9			83
#define TEGRA186_RESET_JTAG2AXI			84
#define TEGRA186_RESET_MPHY_IOBIST		85
#define TEGRA186_RESET_MPHY_L0_RX		86
#define TEGRA186_RESET_MPHY_L0_TX		87
#define TEGRA186_RESET_NVCSI			88
#define TEGRA186_RESET_NVDISPLAY0_HEAD0		89
#define TEGRA186_RESET_NVDISPLAY0_HEAD1		90
#define TEGRA186_RESET_NVDISPLAY0_HEAD2		91
#define TEGRA186_RESET_NVDISPLAY0_MISC		92
#define TEGRA186_RESET_NVDISPLAY0_WGRP0		93
#define TEGRA186_RESET_NVDISPLAY0_WGRP1		94
#define TEGRA186_RESET_NVDISPLAY0_WGRP2		95
#define TEGRA186_RESET_NVDISPLAY0_WGRP3		96
#define TEGRA186_RESET_NVDISPLAY0_WGRP4		97
#define TEGRA186_RESET_NVDISPLAY0_WGRP5		98
#define TEGRA186_RESET_PWM1			99
#define TEGRA186_RESET_PWM2			100
#define TEGRA186_RESET_PWM3			101
#define TEGRA186_RESET_PWM4			102
#define TEGRA186_RESET_PWM5			103
#define TEGRA186_RESET_PWM6			104
#define TEGRA186_RESET_PWM7			105
#define TEGRA186_RESET_PWM8			106
#define TEGRA186_RESET_SCE_APB			107
#define TEGRA186_RESET_SOR1			108
#define TEGRA186_RESET_TACH			109
#define TEGRA186_RESET_TSC			110
#define TEGRA186_RESET_UARTF			111
#define TEGRA186_RESET_UARTG			112
#define TEGRA186_RESET_UFSHC			113
#define TEGRA186_RESET_UFSHC_AXI_M		114
#define TEGRA186_RESET_UPHY			115
#define TEGRA186_RESET_ADSP			116
#define TEGRA186_RESET_ADSPDBG			117
#define TEGRA186_RESET_ADSPINTF			118
#define TEGRA186_RESET_ADSPNEON			119
#define TEGRA186_RESET_ADSPPERIPH		120
#define TEGRA186_RESET_ADSPSCU			121
#define TEGRA186_RESET_ADSPWDT			122
#define TEGRA186_RESET_APE			123
#define TEGRA186_RESET_DPAUX1			124
#define TEGRA186_RESET_NVDEC			125
#define TEGRA186_RESET_NVENC			126
#define TEGRA186_RESET_NVJPG			127
#define TEGRA186_RESET_PEX_USB_UPHY		128
#define TEGRA186_RESET_QSPI			129
#define TEGRA186_RESET_TSECB			130
#define TEGRA186_RESET_VI_I2C			131
#define TEGRA186_RESET_UARTE			132
#define TEGRA186_RESET_TOP_GTE			133
#define TEGRA186_RESET_SHSP			134
#define TEGRA186_RESET_PEX_USB_UPHY_L5		135
#define TEGRA186_RESET_PEX_USB_UPHY_L4		136
#define TEGRA186_RESET_PEX_USB_UPHY_L3		137
#define TEGRA186_RESET_PEX_USB_UPHY_L2		138
#define TEGRA186_RESET_PEX_USB_UPHY_L1		139
#define TEGRA186_RESET_PEX_USB_UPHY_L0		140
#define TEGRA186_RESET_PEX_USB_UPHY_PLL1	141
#define TEGRA186_RESET_PEX_USB_UPHY_PLL0	142
#define TEGRA186_RESET_TSCTNVI			143
#define TEGRA186_RESET_EXTPERIPH4		144
#define TEGRA186_RESET_DSIPADCTL		145
#define TEGRA186_RESET_AUD_MCLK			146
#define TEGRA186_RESET_MPHY_CLK_CTL		147
#define TEGRA186_RESET_MPHY_L1_RX		148
#define TEGRA186_RESET_MPHY_L1_TX		149
#define TEGRA186_RESET_UFSHC_LP			150
#define TEGRA186_RESET_BPMP_NIC			151
#define TEGRA186_RESET_BPMP_NSYSPORESET		152
#define TEGRA186_RESET_BPMP_NRESET		153
#define TEGRA186_RESET_BPMP_DBGRESETN		154
#define TEGRA186_RESET_BPMP_PRESETDBGN		155
#define TEGRA186_RESET_BPMP_PM			156
#define TEGRA186_RESET_BPMP_CVC			157
#define TEGRA186_RESET_BPMP_DMA			158
#define TEGRA186_RESET_BPMP_HSP			159
#define TEGRA186_RESET_TSCTNBPMP		160
#define TEGRA186_RESET_BPMP_TKE			161
#define TEGRA186_RESET_BPMP_GTE			162
#define TEGRA186_RESET_BPMP_PM_ACTMON		163
#define TEGRA186_RESET_AON_NIC			164
#define TEGRA186_RESET_AON_NSYSPORESET		165
#define TEGRA186_RESET_AON_NRESET		166
#define TEGRA186_RESET_AON_DBGRESETN		167
#define TEGRA186_RESET_AON_PRESETDBGN		168
#define TEGRA186_RESET_AON_ACTMON		169
#define TEGRA186_RESET_AOPM			170
#define TEGRA186_RESET_AOVC			171
#define TEGRA186_RESET_AON_DMA			172
#define TEGRA186_RESET_AON_GPIO			173
#define TEGRA186_RESET_AON_HSP			174
#define TEGRA186_RESET_TSCTNAON			175
#define TEGRA186_RESET_AON_TKE			176
#define TEGRA186_RESET_AON_GTE			177
#define TEGRA186_RESET_SCE_NIC			178
#define TEGRA186_RESET_SCE_NSYSPORESET		179
#define TEGRA186_RESET_SCE_NRESET		180
#define TEGRA186_RESET_SCE_DBGRESETN		181
#define TEGRA186_RESET_SCE_PRESETDBGN		182
#define TEGRA186_RESET_SCE_ACTMON		183
#define TEGRA186_RESET_SCE_PM			184
#define TEGRA186_RESET_SCE_DMA			185
#define TEGRA186_RESET_SCE_HSP			186
#define TEGRA186_RESET_TSCTNSCE			187
#define TEGRA186_RESET_SCE_TKE			188
#define TEGRA186_RESET_SCE_GTE			189
#define TEGRA186_RESET_SCE_CFG			190
#define TEGRA186_RESET_ADSP_ALL			191
/** @brief controls the power up/down sequence of UFSHC PSW partition. Controls LP_PWR_READY, LP_ISOL_EN, and LP_RESET_N signals */
#define TEGRA186_RESET_UFSHC_LP_SEQ		192
#define TEGRA186_RESET_SIZE			193

#endif

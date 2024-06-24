/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright 2014 Freescale Semiconductor, Inc.
 */

#ifndef __DT_BINDINGS_CLOCK_IMX6QDL_H
#define __DT_BINDINGS_CLOCK_IMX6QDL_H

#define IMX6QDL_CLK_DUMMY			0
#define IMX6QDL_CLK_CKIL			1
#define IMX6QDL_CLK_CKIH			2
#define IMX6QDL_CLK_OSC				3
#define IMX6QDL_CLK_PLL2_PFD0_352M		4
#define IMX6QDL_CLK_PLL2_PFD1_594M		5
#define IMX6QDL_CLK_PLL2_PFD2_396M		6
#define IMX6QDL_CLK_PLL3_PFD0_720M		7
#define IMX6QDL_CLK_PLL3_PFD1_540M		8
#define IMX6QDL_CLK_PLL3_PFD2_508M		9
#define IMX6QDL_CLK_PLL3_PFD3_454M		10
#define IMX6QDL_CLK_PLL2_198M			11
#define IMX6QDL_CLK_PLL3_120M			12
#define IMX6QDL_CLK_PLL3_80M			13
#define IMX6QDL_CLK_PLL3_60M			14
#define IMX6QDL_CLK_TWD				15
#define IMX6QDL_CLK_STEP			16
#define IMX6QDL_CLK_PLL1_SW			17
#define IMX6QDL_CLK_PERIPH_PRE			18
#define IMX6QDL_CLK_PERIPH2_PRE			19
#define IMX6QDL_CLK_PERIPH_CLK2_SEL		20
#define IMX6QDL_CLK_PERIPH2_CLK2_SEL		21
#define IMX6QDL_CLK_AXI_SEL			22
#define IMX6QDL_CLK_ESAI_SEL			23
#define IMX6QDL_CLK_ASRC_SEL			24
#define IMX6QDL_CLK_SPDIF_SEL			25
#define IMX6QDL_CLK_GPU2D_AXI			26
#define IMX6QDL_CLK_GPU3D_AXI			27
#define IMX6QDL_CLK_GPU2D_CORE_SEL		28
#define IMX6QDL_CLK_GPU3D_CORE_SEL		29
#define IMX6QDL_CLK_GPU3D_SHADER_SEL		30
#define IMX6QDL_CLK_IPU1_SEL			31
#define IMX6QDL_CLK_IPU2_SEL			32
#define IMX6QDL_CLK_LDB_DI0_SEL			33
#define IMX6QDL_CLK_LDB_DI1_SEL			34
#define IMX6QDL_CLK_IPU1_DI0_PRE_SEL		35
#define IMX6QDL_CLK_IPU1_DI1_PRE_SEL		36
#define IMX6QDL_CLK_IPU2_DI0_PRE_SEL		37
#define IMX6QDL_CLK_IPU2_DI1_PRE_SEL		38
#define IMX6QDL_CLK_IPU1_DI0_SEL		39
#define IMX6QDL_CLK_IPU1_DI1_SEL		40
#define IMX6QDL_CLK_IPU2_DI0_SEL		41
#define IMX6QDL_CLK_IPU2_DI1_SEL		42
#define IMX6QDL_CLK_HSI_TX_SEL			43
#define IMX6QDL_CLK_PCIE_AXI_SEL		44
#define IMX6QDL_CLK_SSI1_SEL			45
#define IMX6QDL_CLK_SSI2_SEL			46
#define IMX6QDL_CLK_SSI3_SEL			47
#define IMX6QDL_CLK_USDHC1_SEL			48
#define IMX6QDL_CLK_USDHC2_SEL			49
#define IMX6QDL_CLK_USDHC3_SEL			50
#define IMX6QDL_CLK_USDHC4_SEL			51
#define IMX6QDL_CLK_ENFC_SEL			52
#define IMX6QDL_CLK_EIM_SEL			53
#define IMX6QDL_CLK_EIM_SLOW_SEL		54
#define IMX6QDL_CLK_VDO_AXI_SEL			55
#define IMX6QDL_CLK_VPU_AXI_SEL			56
#define IMX6QDL_CLK_CKO1_SEL			57
#define IMX6QDL_CLK_PERIPH			58
#define IMX6QDL_CLK_PERIPH2			59
#define IMX6QDL_CLK_PERIPH_CLK2			60
#define IMX6QDL_CLK_PERIPH2_CLK2		61
#define IMX6QDL_CLK_IPG				62
#define IMX6QDL_CLK_IPG_PER			63
#define IMX6QDL_CLK_ESAI_PRED			64
#define IMX6QDL_CLK_ESAI_PODF			65
#define IMX6QDL_CLK_ASRC_PRED			66
#define IMX6QDL_CLK_ASRC_PODF			67
#define IMX6QDL_CLK_SPDIF_PRED			68
#define IMX6QDL_CLK_SPDIF_PODF			69
#define IMX6QDL_CLK_CAN_ROOT			70
#define IMX6QDL_CLK_ECSPI_ROOT			71
#define IMX6QDL_CLK_GPU2D_CORE_PODF		72
#define IMX6QDL_CLK_GPU3D_CORE_PODF		73
#define IMX6QDL_CLK_GPU3D_SHADER		74
#define IMX6QDL_CLK_IPU1_PODF			75
#define IMX6QDL_CLK_IPU2_PODF			76
#define IMX6QDL_CLK_LDB_DI0_PODF		77
#define IMX6QDL_CLK_LDB_DI1_PODF		78
#define IMX6QDL_CLK_IPU1_DI0_PRE		79
#define IMX6QDL_CLK_IPU1_DI1_PRE		80
#define IMX6QDL_CLK_IPU2_DI0_PRE		81
#define IMX6QDL_CLK_IPU2_DI1_PRE		82
#define IMX6QDL_CLK_HSI_TX_PODF			83
#define IMX6QDL_CLK_SSI1_PRED			84
#define IMX6QDL_CLK_SSI1_PODF			85
#define IMX6QDL_CLK_SSI2_PRED			86
#define IMX6QDL_CLK_SSI2_PODF			87
#define IMX6QDL_CLK_SSI3_PRED			88
#define IMX6QDL_CLK_SSI3_PODF			89
#define IMX6QDL_CLK_UART_SERIAL_PODF		90
#define IMX6QDL_CLK_USDHC1_PODF			91
#define IMX6QDL_CLK_USDHC2_PODF			92
#define IMX6QDL_CLK_USDHC3_PODF			93
#define IMX6QDL_CLK_USDHC4_PODF			94
#define IMX6QDL_CLK_ENFC_PRED			95
#define IMX6QDL_CLK_ENFC_PODF			96
#define IMX6QDL_CLK_EIM_PODF			97
#define IMX6QDL_CLK_EIM_SLOW_PODF		98
#define IMX6QDL_CLK_VPU_AXI_PODF		99
#define IMX6QDL_CLK_CKO1_PODF			100
#define IMX6QDL_CLK_AXI				101
#define IMX6QDL_CLK_MMDC_CH0_AXI_PODF		102
#define IMX6QDL_CLK_MMDC_CH1_AXI_PODF		103
#define IMX6QDL_CLK_ARM				104
#define IMX6QDL_CLK_AHB				105
#define IMX6QDL_CLK_APBH_DMA			106
#define IMX6QDL_CLK_ASRC			107
#define IMX6QDL_CLK_CAN1_IPG			108
#define IMX6QDL_CLK_CAN1_SERIAL			109
#define IMX6QDL_CLK_CAN2_IPG			110
#define IMX6QDL_CLK_CAN2_SERIAL			111
#define IMX6QDL_CLK_ECSPI1			112
#define IMX6QDL_CLK_ECSPI2			113
#define IMX6QDL_CLK_ECSPI3			114
#define IMX6QDL_CLK_ECSPI4			115
#define IMX6Q_CLK_ECSPI5			116
#define IMX6DL_CLK_I2C4				116
#define IMX6QDL_CLK_ENET			117
#define IMX6QDL_CLK_ESAI_EXTAL			118
#define IMX6QDL_CLK_GPT_IPG			119
#define IMX6QDL_CLK_GPT_IPG_PER			120
#define IMX6QDL_CLK_GPU2D_CORE			121
#define IMX6QDL_CLK_GPU3D_CORE			122
#define IMX6QDL_CLK_HDMI_IAHB			123
#define IMX6QDL_CLK_HDMI_ISFR			124
#define IMX6QDL_CLK_I2C1			125
#define IMX6QDL_CLK_I2C2			126
#define IMX6QDL_CLK_I2C3			127
#define IMX6QDL_CLK_IIM				128
#define IMX6QDL_CLK_ENFC			129
#define IMX6QDL_CLK_IPU1			130
#define IMX6QDL_CLK_IPU1_DI0			131
#define IMX6QDL_CLK_IPU1_DI1			132
#define IMX6QDL_CLK_IPU2			133
#define IMX6QDL_CLK_IPU2_DI0			134
#define IMX6QDL_CLK_LDB_DI0			135
#define IMX6QDL_CLK_LDB_DI1			136
#define IMX6QDL_CLK_IPU2_DI1			137
#define IMX6QDL_CLK_HSI_TX			138
#define IMX6QDL_CLK_MLB				139
#define IMX6QDL_CLK_MMDC_CH0_AXI		140
#define IMX6QDL_CLK_MMDC_CH1_AXI		141
#define IMX6QDL_CLK_OCRAM			142
#define IMX6QDL_CLK_OPENVG_AXI			143
#define IMX6QDL_CLK_PCIE_AXI			144
#define IMX6QDL_CLK_PWM1			145
#define IMX6QDL_CLK_PWM2			146
#define IMX6QDL_CLK_PWM3			147
#define IMX6QDL_CLK_PWM4			148
#define IMX6QDL_CLK_PER1_BCH			149
#define IMX6QDL_CLK_GPMI_BCH_APB		150
#define IMX6QDL_CLK_GPMI_BCH			151
#define IMX6QDL_CLK_GPMI_IO			152
#define IMX6QDL_CLK_GPMI_APB			153
#define IMX6QDL_CLK_SATA			154
#define IMX6QDL_CLK_SDMA			155
#define IMX6QDL_CLK_SPBA			156
#define IMX6QDL_CLK_SSI1			157
#define IMX6QDL_CLK_SSI2			158
#define IMX6QDL_CLK_SSI3			159
#define IMX6QDL_CLK_UART_IPG			160
#define IMX6QDL_CLK_UART_SERIAL			161
#define IMX6QDL_CLK_USBOH3			162
#define IMX6QDL_CLK_USDHC1			163
#define IMX6QDL_CLK_USDHC2			164
#define IMX6QDL_CLK_USDHC3			165
#define IMX6QDL_CLK_USDHC4			166
#define IMX6QDL_CLK_VDO_AXI			167
#define IMX6QDL_CLK_VPU_AXI			168
#define IMX6QDL_CLK_CKO1			169
#define IMX6QDL_CLK_PLL1_SYS			170
#define IMX6QDL_CLK_PLL2_BUS			171
#define IMX6QDL_CLK_PLL3_USB_OTG		172
#define IMX6QDL_CLK_PLL4_AUDIO			173
#define IMX6QDL_CLK_PLL5_VIDEO			174
#define IMX6QDL_CLK_PLL8_MLB			175
#define IMX6QDL_CLK_PLL7_USB_HOST		176
#define IMX6QDL_CLK_PLL6_ENET			177
#define IMX6QDL_CLK_SSI1_IPG			178
#define IMX6QDL_CLK_SSI2_IPG			179
#define IMX6QDL_CLK_SSI3_IPG			180
#define IMX6QDL_CLK_ROM				181
#define IMX6QDL_CLK_USBPHY1			182
#define IMX6QDL_CLK_USBPHY2			183
#define IMX6QDL_CLK_LDB_DI0_DIV_3_5		184
#define IMX6QDL_CLK_LDB_DI1_DIV_3_5		185
#define IMX6QDL_CLK_SATA_REF			186
#define IMX6QDL_CLK_SATA_REF_100M		187
#define IMX6QDL_CLK_PCIE_REF			188
#define IMX6QDL_CLK_PCIE_REF_125M		189
#define IMX6QDL_CLK_ENET_REF			190
#define IMX6QDL_CLK_USBPHY1_GATE		191
#define IMX6QDL_CLK_USBPHY2_GATE		192
#define IMX6QDL_CLK_PLL4_POST_DIV		193
#define IMX6QDL_CLK_PLL5_POST_DIV		194
#define IMX6QDL_CLK_PLL5_VIDEO_DIV		195
#define IMX6QDL_CLK_EIM_SLOW			196
#define IMX6QDL_CLK_SPDIF			197
#define IMX6QDL_CLK_CKO2_SEL			198
#define IMX6QDL_CLK_CKO2_PODF			199
#define IMX6QDL_CLK_CKO2			200
#define IMX6QDL_CLK_CKO				201
#define IMX6QDL_CLK_VDOA			202
#define IMX6QDL_CLK_PLL4_AUDIO_DIV		203
#define IMX6QDL_CLK_LVDS1_SEL			204
#define IMX6QDL_CLK_LVDS2_SEL			205
#define IMX6QDL_CLK_LVDS1_GATE			206
#define IMX6QDL_CLK_LVDS2_GATE			207
#define IMX6QDL_CLK_ESAI_IPG			208
#define IMX6QDL_CLK_ESAI_MEM			209
#define IMX6QDL_CLK_ASRC_IPG			210
#define IMX6QDL_CLK_ASRC_MEM			211
#define IMX6QDL_CLK_LVDS1_IN			212
#define IMX6QDL_CLK_LVDS2_IN			213
#define IMX6QDL_CLK_ANACLK1			214
#define IMX6QDL_CLK_ANACLK2			215
#define IMX6QDL_PLL1_BYPASS_SRC			216
#define IMX6QDL_PLL2_BYPASS_SRC			217
#define IMX6QDL_PLL3_BYPASS_SRC			218
#define IMX6QDL_PLL4_BYPASS_SRC			219
#define IMX6QDL_PLL5_BYPASS_SRC			220
#define IMX6QDL_PLL6_BYPASS_SRC			221
#define IMX6QDL_PLL7_BYPASS_SRC			222
#define IMX6QDL_CLK_PLL1			223
#define IMX6QDL_CLK_PLL2			224
#define IMX6QDL_CLK_PLL3			225
#define IMX6QDL_CLK_PLL4			226
#define IMX6QDL_CLK_PLL5			227
#define IMX6QDL_CLK_PLL6			228
#define IMX6QDL_CLK_PLL7			229
#define IMX6QDL_PLL1_BYPASS			230
#define IMX6QDL_PLL2_BYPASS			231
#define IMX6QDL_PLL3_BYPASS			232
#define IMX6QDL_PLL4_BYPASS			233
#define IMX6QDL_PLL5_BYPASS			234
#define IMX6QDL_PLL6_BYPASS			235
#define IMX6QDL_PLL7_BYPASS			236
#define IMX6QDL_CLK_GPT_3M			237
#define IMX6QDL_CLK_VIDEO_27M			238
#define IMX6QDL_CLK_MIPI_CORE_CFG		239
#define IMX6QDL_CLK_MIPI_IPG			240
#define IMX6QDL_CLK_CAAM_MEM			241
#define IMX6QDL_CLK_CAAM_ACLK			242
#define IMX6QDL_CLK_CAAM_IPG			243
#define IMX6QDL_CLK_SPDIF_GCLK			244
#define IMX6QDL_CLK_UART_SEL			245
#define IMX6QDL_CLK_IPG_PER_SEL			246
#define IMX6QDL_CLK_ECSPI_SEL			247
#define IMX6QDL_CLK_CAN_SEL			248
#define IMX6QDL_CLK_MMDC_CH1_AXI_CG		249
#define IMX6QDL_CLK_PRE0			250
#define IMX6QDL_CLK_PRE1			251
#define IMX6QDL_CLK_PRE2			252
#define IMX6QDL_CLK_PRE3			253
#define IMX6QDL_CLK_PRG0_AXI			254
#define IMX6QDL_CLK_PRG1_AXI			255
#define IMX6QDL_CLK_PRG0_APB			256
#define IMX6QDL_CLK_PRG1_APB			257
#define IMX6QDL_CLK_PRE_AXI			258
#define IMX6QDL_CLK_MLB_SEL			259
#define IMX6QDL_CLK_MLB_PODF			260
#define IMX6QDL_CLK_EPIT1			261
#define IMX6QDL_CLK_EPIT2			262
#define IMX6QDL_CLK_MMDC_P0_IPG			263
#define IMX6QDL_CLK_DCIC1			264
#define IMX6QDL_CLK_DCIC2			265
#define IMX6QDL_CLK_END				266

#endif /* __DT_BINDINGS_CLOCK_IMX6QDL_H */

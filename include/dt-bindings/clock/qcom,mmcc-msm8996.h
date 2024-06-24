/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2015, The Linux Foundation. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_MSM_MMCC_8996_H
#define _DT_BINDINGS_CLK_MSM_MMCC_8996_H

#define MMPLL0_EARLY					0
#define MMPLL0_PLL					1
#define MMPLL1_EARLY					2
#define MMPLL1_PLL					3
#define MMPLL2_EARLY					4
#define MMPLL2_PLL					5
#define MMPLL3_EARLY					6
#define MMPLL3_PLL					7
#define MMPLL4_EARLY					8
#define MMPLL4_PLL					9
#define MMPLL5_EARLY					10
#define MMPLL5_PLL					11
#define MMPLL8_EARLY					12
#define MMPLL8_PLL					13
#define MMPLL9_EARLY					14
#define MMPLL9_PLL					15
#define AHB_CLK_SRC					16
#define AXI_CLK_SRC					17
#define MAXI_CLK_SRC					18
#define DSA_CORE_CLK_SRC				19
#define GFX3D_CLK_SRC					20
#define RBBMTIMER_CLK_SRC				21
#define ISENSE_CLK_SRC					22
#define RBCPR_CLK_SRC					23
#define VIDEO_CORE_CLK_SRC				24
#define VIDEO_SUBCORE0_CLK_SRC				25
#define VIDEO_SUBCORE1_CLK_SRC				26
#define PCLK0_CLK_SRC					27
#define PCLK1_CLK_SRC					28
#define MDP_CLK_SRC					29
#define EXTPCLK_CLK_SRC					30
#define VSYNC_CLK_SRC					31
#define HDMI_CLK_SRC					32
#define BYTE0_CLK_SRC					33
#define BYTE1_CLK_SRC					34
#define ESC0_CLK_SRC					35
#define ESC1_CLK_SRC					36
#define CAMSS_GP0_CLK_SRC				37
#define CAMSS_GP1_CLK_SRC				38
#define MCLK0_CLK_SRC					39
#define MCLK1_CLK_SRC					40
#define MCLK2_CLK_SRC					41
#define MCLK3_CLK_SRC					42
#define CCI_CLK_SRC					43
#define CSI0PHYTIMER_CLK_SRC				44
#define CSI1PHYTIMER_CLK_SRC				45
#define CSI2PHYTIMER_CLK_SRC				46
#define CSIPHY0_3P_CLK_SRC				47
#define CSIPHY1_3P_CLK_SRC				48
#define CSIPHY2_3P_CLK_SRC				49
#define JPEG0_CLK_SRC					50
#define JPEG2_CLK_SRC					51
#define JPEG_DMA_CLK_SRC				52
#define VFE0_CLK_SRC					53
#define VFE1_CLK_SRC					54
#define CPP_CLK_SRC					55
#define CSI0_CLK_SRC					56
#define CSI1_CLK_SRC					57
#define CSI2_CLK_SRC					58
#define CSI3_CLK_SRC					59
#define FD_CORE_CLK_SRC					60
#define MMSS_CXO_CLK					61
#define MMSS_SLEEPCLK_CLK				62
#define MMSS_MMAGIC_AHB_CLK				63
#define MMSS_MMAGIC_CFG_AHB_CLK				64
#define MMSS_MISC_AHB_CLK				65
#define MMSS_MISC_CXO_CLK				66
#define MMSS_BTO_AHB_CLK				67
#define MMSS_MMAGIC_AXI_CLK				68
#define MMSS_S0_AXI_CLK					69
#define MMSS_MMAGIC_MAXI_CLK				70
#define DSA_CORE_CLK					71
#define DSA_NOC_CFG_AHB_CLK				72
#define MMAGIC_CAMSS_AXI_CLK				73
#define MMAGIC_CAMSS_NOC_CFG_AHB_CLK			74
#define THROTTLE_CAMSS_CXO_CLK				75
#define THROTTLE_CAMSS_AHB_CLK				76
#define THROTTLE_CAMSS_AXI_CLK				77
#define SMMU_VFE_AHB_CLK				78
#define SMMU_VFE_AXI_CLK				79
#define SMMU_CPP_AHB_CLK				80
#define SMMU_CPP_AXI_CLK				81
#define SMMU_JPEG_AHB_CLK				82
#define SMMU_JPEG_AXI_CLK				83
#define MMAGIC_MDSS_AXI_CLK				84
#define MMAGIC_MDSS_NOC_CFG_AHB_CLK			85
#define THROTTLE_MDSS_CXO_CLK				86
#define THROTTLE_MDSS_AHB_CLK				87
#define THROTTLE_MDSS_AXI_CLK				88
#define SMMU_ROT_AHB_CLK				89
#define SMMU_ROT_AXI_CLK				90
#define SMMU_MDP_AHB_CLK				91
#define SMMU_MDP_AXI_CLK				92
#define MMAGIC_VIDEO_AXI_CLK				93
#define MMAGIC_VIDEO_NOC_CFG_AHB_CLK			94
#define THROTTLE_VIDEO_CXO_CLK				95
#define THROTTLE_VIDEO_AHB_CLK				96
#define THROTTLE_VIDEO_AXI_CLK				97
#define SMMU_VIDEO_AHB_CLK				98
#define SMMU_VIDEO_AXI_CLK				99
#define MMAGIC_BIMC_AXI_CLK				100
#define MMAGIC_BIMC_NOC_CFG_AHB_CLK			101
#define GPU_GX_GFX3D_CLK				102
#define GPU_GX_RBBMTIMER_CLK				103
#define GPU_AHB_CLK					104
#define GPU_AON_ISENSE_CLK				105
#define VMEM_MAXI_CLK					106
#define VMEM_AHB_CLK					107
#define MMSS_RBCPR_CLK					108
#define MMSS_RBCPR_AHB_CLK				109
#define VIDEO_CORE_CLK					110
#define VIDEO_AXI_CLK					111
#define VIDEO_MAXI_CLK					112
#define VIDEO_AHB_CLK					113
#define VIDEO_SUBCORE0_CLK				114
#define VIDEO_SUBCORE1_CLK				115
#define MDSS_AHB_CLK					116
#define MDSS_HDMI_AHB_CLK				117
#define MDSS_AXI_CLK					118
#define MDSS_PCLK0_CLK					119
#define MDSS_PCLK1_CLK					120
#define MDSS_MDP_CLK					121
#define MDSS_EXTPCLK_CLK				122
#define MDSS_VSYNC_CLK					123
#define MDSS_HDMI_CLK					124
#define MDSS_BYTE0_CLK					125
#define MDSS_BYTE1_CLK					126
#define MDSS_ESC0_CLK					127
#define MDSS_ESC1_CLK					128
#define CAMSS_TOP_AHB_CLK				129
#define CAMSS_AHB_CLK					130
#define CAMSS_MICRO_AHB_CLK				131
#define CAMSS_GP0_CLK					132
#define CAMSS_GP1_CLK					133
#define CAMSS_MCLK0_CLK					134
#define CAMSS_MCLK1_CLK					135
#define CAMSS_MCLK2_CLK					136
#define CAMSS_MCLK3_CLK					137
#define CAMSS_CCI_CLK					138
#define CAMSS_CCI_AHB_CLK				139
#define CAMSS_CSI0PHYTIMER_CLK				140
#define CAMSS_CSI1PHYTIMER_CLK				141
#define CAMSS_CSI2PHYTIMER_CLK				142
#define CAMSS_CSIPHY0_3P_CLK				143
#define CAMSS_CSIPHY1_3P_CLK				144
#define CAMSS_CSIPHY2_3P_CLK				145
#define CAMSS_JPEG0_CLK					146
#define CAMSS_JPEG2_CLK					147
#define CAMSS_JPEG_DMA_CLK				148
#define CAMSS_JPEG_AHB_CLK				149
#define CAMSS_JPEG_AXI_CLK				150
#define CAMSS_VFE_AHB_CLK				151
#define CAMSS_VFE_AXI_CLK				152
#define CAMSS_VFE0_CLK					153
#define CAMSS_VFE0_STREAM_CLK				154
#define CAMSS_VFE0_AHB_CLK				155
#define CAMSS_VFE1_CLK					156
#define CAMSS_VFE1_STREAM_CLK				157
#define CAMSS_VFE1_AHB_CLK				158
#define CAMSS_CSI_VFE0_CLK				159
#define CAMSS_CSI_VFE1_CLK				160
#define CAMSS_CPP_VBIF_AHB_CLK				161
#define CAMSS_CPP_AXI_CLK				162
#define CAMSS_CPP_CLK					163
#define CAMSS_CPP_AHB_CLK				164
#define CAMSS_CSI0_CLK					165
#define CAMSS_CSI0_AHB_CLK				166
#define CAMSS_CSI0PHY_CLK				167
#define CAMSS_CSI0RDI_CLK				168
#define CAMSS_CSI0PIX_CLK				169
#define CAMSS_CSI1_CLK					170
#define CAMSS_CSI1_AHB_CLK				171
#define CAMSS_CSI1PHY_CLK				172
#define CAMSS_CSI1RDI_CLK				173
#define CAMSS_CSI1PIX_CLK				174
#define CAMSS_CSI2_CLK					175
#define CAMSS_CSI2_AHB_CLK				176
#define CAMSS_CSI2PHY_CLK				177
#define CAMSS_CSI2RDI_CLK				178
#define CAMSS_CSI2PIX_CLK				179
#define CAMSS_CSI3_CLK					180
#define CAMSS_CSI3_AHB_CLK				181
#define CAMSS_CSI3PHY_CLK				182
#define CAMSS_CSI3RDI_CLK				183
#define CAMSS_CSI3PIX_CLK				184
#define CAMSS_ISPIF_AHB_CLK				185
#define FD_CORE_CLK					186
#define FD_CORE_UAR_CLK					187
#define FD_AHB_CLK					188
#define MMSS_SPDM_CSI0_CLK				189
#define MMSS_SPDM_JPEG_DMA_CLK				190
#define MMSS_SPDM_CPP_CLK				191
#define MMSS_SPDM_PCLK0_CLK				192
#define MMSS_SPDM_AHB_CLK				193
#define MMSS_SPDM_GFX3D_CLK				194
#define MMSS_SPDM_PCLK1_CLK				195
#define MMSS_SPDM_JPEG2_CLK				196
#define MMSS_SPDM_DEBUG_CLK				197
#define MMSS_SPDM_VFE1_CLK				198
#define MMSS_SPDM_VFE0_CLK				199
#define MMSS_SPDM_VIDEO_CORE_CLK			200
#define MMSS_SPDM_AXI_CLK				201
#define MMSS_SPDM_MDP_CLK				202
#define MMSS_SPDM_JPEG0_CLK				203
#define MMSS_SPDM_RM_AXI_CLK				204
#define MMSS_SPDM_RM_MAXI_CLK				205

#define MMAGICAHB_BCR					0
#define MMAGIC_CFG_BCR					1
#define MISC_BCR					2
#define BTO_BCR						3
#define MMAGICAXI_BCR					4
#define MMAGICMAXI_BCR					5
#define DSA_BCR						6
#define MMAGIC_CAMSS_BCR				7
#define THROTTLE_CAMSS_BCR				8
#define SMMU_VFE_BCR					9
#define SMMU_CPP_BCR					10
#define SMMU_JPEG_BCR					11
#define MMAGIC_MDSS_BCR					12
#define THROTTLE_MDSS_BCR				13
#define SMMU_ROT_BCR					14
#define SMMU_MDP_BCR					15
#define MMAGIC_VIDEO_BCR				16
#define THROTTLE_VIDEO_BCR				17
#define SMMU_VIDEO_BCR					18
#define MMAGIC_BIMC_BCR					19
#define GPU_GX_BCR					20
#define GPU_BCR						21
#define GPU_AON_BCR					22
#define VMEM_BCR					23
#define MMSS_RBCPR_BCR					24
#define VIDEO_BCR					25
#define MDSS_BCR					26
#define CAMSS_TOP_BCR					27
#define CAMSS_AHB_BCR					28
#define CAMSS_MICRO_BCR					29
#define CAMSS_CCI_BCR					30
#define CAMSS_PHY0_BCR					31
#define CAMSS_PHY1_BCR					32
#define CAMSS_PHY2_BCR					33
#define CAMSS_CSIPHY0_3P_BCR				34
#define CAMSS_CSIPHY1_3P_BCR				35
#define CAMSS_CSIPHY2_3P_BCR				36
#define CAMSS_JPEG_BCR					37
#define CAMSS_VFE_BCR					38
#define CAMSS_VFE0_BCR					39
#define CAMSS_VFE1_BCR					40
#define CAMSS_CSI_VFE0_BCR				41
#define CAMSS_CSI_VFE1_BCR				42
#define CAMSS_CPP_TOP_BCR				43
#define CAMSS_CPP_BCR					44
#define CAMSS_CSI0_BCR					45
#define CAMSS_CSI0RDI_BCR				46
#define CAMSS_CSI0PIX_BCR				47
#define CAMSS_CSI1_BCR					48
#define CAMSS_CSI1RDI_BCR				49
#define CAMSS_CSI1PIX_BCR				50
#define CAMSS_CSI2_BCR					51
#define CAMSS_CSI2RDI_BCR				52
#define CAMSS_CSI2PIX_BCR				53
#define CAMSS_CSI3_BCR					54
#define CAMSS_CSI3RDI_BCR				55
#define CAMSS_CSI3PIX_BCR				56
#define CAMSS_ISPIF_BCR					57
#define FD_BCR						58
#define MMSS_SPDM_RM_BCR				59

/* Indexes for GDSCs */
#define MMAGIC_VIDEO_GDSC	0
#define MMAGIC_MDSS_GDSC	1
#define MMAGIC_CAMSS_GDSC	2
#define GPU_GDSC		3
#define VENUS_GDSC		4
#define VENUS_CORE0_GDSC	5
#define VENUS_CORE1_GDSC	6
#define CAMSS_GDSC		7
#define VFE0_GDSC		8
#define VFE1_GDSC		9
#define JPEG_GDSC		10
#define CPP_GDSC		11
#define FD_GDSC			12
#define MDSS_GDSC		13
#define GPU_GX_GDSC		14
#define MMAGIC_BIMC_GDSC	15

#endif

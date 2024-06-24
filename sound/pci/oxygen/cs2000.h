/* SPDX-License-Identifier: GPL-2.0 */
#ifndef CS2000_H_INCLUDED
#define CS2000_H_INCLUDED

#define CS2000_DEV_ID		0x01
#define CS2000_DEV_CTRL		0x02
#define CS2000_DEV_CFG_1	0x03
#define CS2000_DEV_CFG_2	0x04
#define CS2000_GLOBAL_CFG	0x05
#define CS2000_RATIO_0		0x06 /* 32 bits, big endian */
#define CS2000_RATIO_1		0x0a
#define CS2000_RATIO_2		0x0e
#define CS2000_RATIO_3		0x12
#define CS2000_FUN_CFG_1	0x16
#define CS2000_FUN_CFG_2	0x17
#define CS2000_FUN_CFG_3	0x1e

/* DEV_ID */
#define CS2000_DEVICE_MASK		0xf8
#define CS2000_REVISION_MASK		0x07

/* DEV_CTRL */
#define CS2000_UNLOCK			0x80
#define CS2000_AUX_OUT_DIS		0x02
#define CS2000_CLK_OUT_DIS		0x01

/* DEV_CFG_1 */
#define CS2000_R_MOD_SEL_MASK		0xe0
#define CS2000_R_MOD_SEL_1		0x00
#define CS2000_R_MOD_SEL_2		0x20
#define CS2000_R_MOD_SEL_4		0x40
#define CS2000_R_MOD_SEL_8		0x60
#define CS2000_R_MOD_SEL_1_2		0x80
#define CS2000_R_MOD_SEL_1_4		0xa0
#define CS2000_R_MOD_SEL_1_8		0xc0
#define CS2000_R_MOD_SEL_1_16		0xe0
#define CS2000_R_SEL_MASK		0x18
#define CS2000_R_SEL_SHIFT		3
#define CS2000_AUX_OUT_SRC_MASK		0x06
#define CS2000_AUX_OUT_SRC_REF_CLK	0x00
#define CS2000_AUX_OUT_SRC_CLK_IN	0x02
#define CS2000_AUX_OUT_SRC_CLK_OUT	0x04
#define CS2000_AUX_OUT_SRC_PLL_LOCK	0x06
#define CS2000_EN_DEV_CFG_1		0x01

/* DEV_CFG_2 */
#define CS2000_LOCK_CLK_MASK		0x06
#define CS2000_LOCK_CLK_SHIFT		1
#define CS2000_FRAC_N_SRC_MASK		0x01
#define CS2000_FRAC_N_SRC_STATIC	0x00
#define CS2000_FRAC_N_SRC_DYNAMIC	0x01

/* GLOBAL_CFG */
#define CS2000_FREEZE			0x08
#define CS2000_EN_DEV_CFG_2		0x01

/* FUN_CFG_1 */
#define CS2000_CLK_SKIP_EN		0x80
#define CS2000_AUX_LOCK_CFG_MASK	0x40
#define CS2000_AUX_LOCK_CFG_PP_HIGH	0x00
#define CS2000_AUX_LOCK_CFG_OD_LOW	0x40
#define CS2000_REF_CLK_DIV_MASK		0x18
#define CS2000_REF_CLK_DIV_4		0x00
#define CS2000_REF_CLK_DIV_2		0x08
#define CS2000_REF_CLK_DIV_1		0x10

/* FUN_CFG_2 */
#define CS2000_CLK_OUT_UNL		0x10
#define CS2000_L_F_RATIO_CFG_MASK	0x08
#define CS2000_L_F_RATIO_CFG_20_12	0x00
#define CS2000_L_F_RATIO_CFG_12_20	0x08

/* FUN_CFG_3 */
#define CS2000_CLK_IN_BW_MASK		0x70
#define CS2000_CLK_IN_BW_1		0x00
#define CS2000_CLK_IN_BW_2		0x10
#define CS2000_CLK_IN_BW_4		0x20
#define CS2000_CLK_IN_BW_8		0x30
#define CS2000_CLK_IN_BW_16		0x40
#define CS2000_CLK_IN_BW_32		0x50
#define CS2000_CLK_IN_BW_64		0x60
#define CS2000_CLK_IN_BW_128		0x70

#endif

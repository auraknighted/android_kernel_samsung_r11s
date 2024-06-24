#ifndef __S6E3FC5_MDNIE_H__
#define __S6E3FC5_MDNIE_H__

#include "oled_common_mdnie.h"

#define NR_S6E3FC5_MDNIE_REG	(2)

#define S6E3FC5_MDNIE_0_REG		(0x64)
#define S6E3FC5_MDNIE_0_OFS		(0)
#define S6E3FC5_MDNIE_0_LEN		(24)

#define S6E3FC5_MDNIE_1_REG		(0x65)
#define S6E3FC5_MDNIE_1_OFS		(0)
#define S6E3FC5_MDNIE_1_LEN		(167)

#define S6E3FC5_SCR_CR_OFS	(3)
#define S6E3FC5_SCR_WR_OFS	(21)
#define S6E3FC5_SCR_WG_OFS	(22)
#define S6E3FC5_SCR_WB_OFS	(23)
#define S6E3FC5_SCR_WHITE_LEN (1)
#define S6E3FC5_NIGHT_MODE_OFS	(S6E3FC5_SCR_CR_OFS)
#define S6E3FC5_NIGHT_MODE_LEN	(21)
#define S6E3FC5_COLOR_LENS_OFS	(S6E3FC5_SCR_CR_OFS)
#define S6E3FC5_COLOR_LENS_LEN	(21)

#endif /* __S6E3FC5_MDNIE_H__ */

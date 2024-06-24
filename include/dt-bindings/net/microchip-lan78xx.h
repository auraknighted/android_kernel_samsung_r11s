/* SPDX-License-Identifier: GPL-2.0 */
#ifndef _DT_BINDINGS_MICROCHIP_LAN78XX_H
#define _DT_BINDINGS_MICROCHIP_LAN78XX_H

/* LED modes for LAN7800/LAN7850 embedded PHY */

#define LAN78XX_LINK_ACTIVITY           0
#define LAN78XX_LINK_1000_ACTIVITY      1
#define LAN78XX_LINK_100_ACTIVITY       2
#define LAN78XX_LINK_10_ACTIVITY        3
#define LAN78XX_LINK_100_1000_ACTIVITY  4
#define LAN78XX_LINK_10_1000_ACTIVITY   5
#define LAN78XX_LINK_10_100_ACTIVITY    6
#define LAN78XX_DUPLEX_COLLISION        8
#define LAN78XX_COLLISION               9
#define LAN78XX_ACTIVITY                10
#define LAN78XX_AUTONEG_FAULT           12
#define LAN78XX_FORCE_LED_OFF           14
#define LAN78XX_FORCE_LED_ON            15

#endif

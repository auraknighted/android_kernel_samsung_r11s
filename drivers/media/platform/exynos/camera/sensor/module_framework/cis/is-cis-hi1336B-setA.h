/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2018 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_HI1336_SET_A_H
#define IS_CIS_HI1336_SET_A_H

#include "is-cis.h"
#include "is-cis-hi1336.h"

/*
 * [Mode Information]
 *
 * Reference File : Hi-1336_setting_v4.0.3_SEC16_20190904.xlsx
 * Update Data    : 2019-09-26
 * Author         : sk.pankaj
 *
 *  - Global setting
 *
 *  - Mode setting
 *  - Default Mode setting For HI1336B
 *  [ 0 ]  4128 x 3096(4:3)      @30,  MIPI lane: 4, MIPI data rate(Mbps/lane):  1456, Mclk(Mhz): 26
 *  [ 1 ] 4128 x 2324(16:9)     @30,  MIPI lane: 4, MIPI data rate(Mbps/lane):  1456, Mclk(Mhz): 26
 *  [ 2 ] 4128 x 1908(19.5:9)   @30,  MIPI lane: 4, MIPI data rate(Mbps/lane):  1456, Mclk(Mhz): 26
 *  [ 3 ] 3088 x 3088(1:1)      @30,  MIPI lane: 4, MIPI data rate(Mbps/lane):  1456, Mclk(Mhz): 26
 *  - FAST AE (4 binning) setting For HI1336B
 *  [ 4 ] 1024 x 768(4:3)        @120, MIPI lane: 4, MIPI data rate(Mbps/lane):   364, Mclk(Mhz): 26
 *
 *  - Fsync setting
 *  [ 0 ] Normal
 *  [ 1 ] Slave
 *  [ 2 ] Master full
 *  [ 3 ] Master 2-binnig
 *  [ 4 ] Master 4-binning
 *
 */

const u32 sensor_hi1336_setfile_A_Global[] = {
	0x0808, 0x0000, 0x02,
	0x2000, 0x0030, 0x02,
	0x2002, 0x0fa5, 0x02,
	0x2004, 0x0020, 0x02,
	0x2006, 0xc09c, 0x02,
	0x2008, 0x0064, 0x02,
	0x200a, 0x088e, 0x02,
	0x200c, 0x01c2, 0x02,
	0x200e, 0x00b4, 0x02,
	0x2010, 0x4020, 0x02,
	0x2012, 0x120b, 0x02,
	0x2014, 0x120a, 0x02,
	0x2016, 0x1209, 0x02,
	0x2018, 0x1208, 0x02,
	0x201a, 0x1207, 0x02,
	0x201c, 0x1206, 0x02,
	0x201e, 0x1205, 0x02,
	0x2020, 0x1204, 0x02,
	0x2022, 0x8031, 0x02,
	0x2024, 0x000a, 0x02,
	0x2026, 0x4291, 0x02,
	0x2028, 0x82d8, 0x02,
	0x202a, 0x0004, 0x02,
	0x202c, 0x411f, 0x02,
	0x202e, 0x0004, 0x02,
	0x2030, 0x4fa1, 0x02,
	0x2032, 0x0006, 0x02,
	0x2034, 0x4257, 0x02,
	0x2036, 0x82e5, 0x02,
	0x2038, 0x4708, 0x02,
	0x203a, 0xd038, 0x02,
	0x203c, 0xff00, 0x02,
	0x203e, 0x4349, 0x02,
	0x2040, 0x4346, 0x02,
	0x2042, 0x90b2, 0x02,
	0x2044, 0x07d1, 0x02,
	0x2046, 0x0b94, 0x02,
	0x2048, 0x2806, 0x02,
	0x204a, 0x40b2, 0x02,
	0x204c, 0x0246, 0x02,
	0x204e, 0x0228, 0x02,
	0x2050, 0x40b2, 0x02,
	0x2052, 0x09fb, 0x02,
	0x2054, 0x0232, 0x02,
	0x2056, 0x4291, 0x02,
	0x2058, 0x0422, 0x02,
	0x205a, 0x0000, 0x02,
	0x205c, 0x421f, 0x02,
	0x205e, 0x0424, 0x02,
	0x2060, 0x812f, 0x02,
	0x2062, 0x4f81, 0x02,
	0x2064, 0x0002, 0x02,
	0x2066, 0x4291, 0x02,
	0x2068, 0x8248, 0x02,
	0x206a, 0x0008, 0x02,
	0x206c, 0x4214, 0x02,
	0x206e, 0x0310, 0x02,
	0x2070, 0x421a, 0x02,
	0x2072, 0x82a0, 0x02,
	0x2074, 0xf80a, 0x02,
	0x2076, 0x421b, 0x02,
	0x2078, 0x82a2, 0x02,
	0x207a, 0xf80b, 0x02,
	0x207c, 0x4382, 0x02,
	0x207e, 0x7334, 0x02,
	0x2080, 0x0f00, 0x02,
	0x2082, 0x7304, 0x02,
	0x2084, 0x4192, 0x02,
	0x2086, 0x0008, 0x02,
	0x2088, 0x0a08, 0x02,
	0x208a, 0x4382, 0x02,
	0x208c, 0x040c, 0x02,
	0x208e, 0x4305, 0x02,
	0x2090, 0x9382, 0x02,
	0x2092, 0x7112, 0x02,
	0x2094, 0x2001, 0x02,
	0x2096, 0x4315, 0x02,
	0x2098, 0x421e, 0x02,
	0x209a, 0x7100, 0x02,
	0x209c, 0xb2f2, 0x02,
	0x209e, 0x0261, 0x02,
	0x20a0, 0x2406, 0x02,
	0x20a2, 0xb3d2, 0x02,
	0x20a4, 0x0b02, 0x02,
	0x20a6, 0x2403, 0x02,
	0x20a8, 0x42d2, 0x02,
	0x20aa, 0x0809, 0x02,
	0x20ac, 0x0b00, 0x02,
	0x20ae, 0x40b2, 0x02,
	0x20b0, 0x00b6, 0x02,
	0x20b2, 0x7334, 0x02,
	0x20b4, 0x0f00, 0x02,
	0x20b6, 0x7304, 0x02,
	0x20b8, 0x4482, 0x02,
	0x20ba, 0x0a08, 0x02,
	0x20bc, 0xb2e2, 0x02,
	0x20be, 0x0b05, 0x02,
	0x20c0, 0x2404, 0x02,
	0x20c2, 0x4392, 0x02,
	0x20c4, 0x7a0e, 0x02,
	0x20c6, 0x0800, 0x02,
	0x20c8, 0x7a10, 0x02,
	0x20ca, 0xf80e, 0x02,
	0x20cc, 0x93c2, 0x02,
	0x20ce, 0x82de, 0x02,
	0x20d0, 0x2468, 0x02,
	0x20d2, 0x9e0a, 0x02,
	0x20d4, 0x2803, 0x02,
	0x20d6, 0x9349, 0x02,
	0x20d8, 0x2001, 0x02,
	0x20da, 0x4359, 0x02,
	0x20dc, 0x9e0b, 0x02,
	0x20de, 0x2802, 0x02,
	0x20e0, 0x9369, 0x02,
	0x20e2, 0x245c, 0x02,
	0x20e4, 0x421f, 0x02,
	0x20e6, 0x731a, 0x02,
	0x20e8, 0xc312, 0x02,
	0x20ea, 0x100f, 0x02,
	0x20ec, 0x4f82, 0x02,
	0x20ee, 0x7334, 0x02,
	0x20f0, 0x0f00, 0x02,
	0x20f2, 0x7304, 0x02,
	0x20f4, 0x4192, 0x02,
	0x20f6, 0x0008, 0x02,
	0x20f8, 0x0a08, 0x02,
	0x20fa, 0x421e, 0x02,
	0x20fc, 0x7100, 0x02,
	0x20fe, 0x812e, 0x02,
	0x2100, 0x425c, 0x02,
	0x2102, 0x0419, 0x02,
	0x2104, 0x537c, 0x02,
	0x2106, 0xfe4c, 0x02,
	0x2108, 0x9305, 0x02,
	0x210a, 0x2003, 0x02,
	0x210c, 0x40b2, 0x02,
	0x210e, 0x0c78, 0x02,
	0x2110, 0x7100, 0x02,
	0x2112, 0x421f, 0x02,
	0x2114, 0x731a, 0x02,
	0x2116, 0xc312, 0x02,
	0x2118, 0x100f, 0x02,
	0x211a, 0x503f, 0x02,
	0x211c, 0x00b6, 0x02,
	0x211e, 0x4f82, 0x02,
	0x2120, 0x7334, 0x02,
	0x2122, 0x0f00, 0x02,
	0x2124, 0x7304, 0x02,
	0x2126, 0x4482, 0x02,
	0x2128, 0x0a08, 0x02,
	0x212a, 0x9e81, 0x02,
	0x212c, 0x0002, 0x02,
	0x212e, 0x2814, 0x02,
	0x2130, 0xf74c, 0x02,
	0x2132, 0x434d, 0x02,
	0x2134, 0x411f, 0x02,
	0x2136, 0x0004, 0x02,
	0x2138, 0x4f1e, 0x02,
	0x213a, 0x0002, 0x02,
	0x213c, 0x9381, 0x02,
	0x213e, 0x0006, 0x02,
	0x2140, 0x240b, 0x02,
	0x2142, 0x4e6f, 0x02,
	0x2144, 0xf74f, 0x02,
	0x2146, 0x9c4f, 0x02,
	0x2148, 0x2423, 0x02,
	0x214a, 0x535d, 0x02,
	0x214c, 0x503e, 0x02,
	0x214e, 0x0006, 0x02,
	0x2150, 0x4d4f, 0x02,
	0x2152, 0x911f, 0x02,
	0x2154, 0x0006, 0x02,
	0x2156, 0x2bf5, 0x02,
	0x2158, 0x9359, 0x02,
	0x215a, 0x2403, 0x02,
	0x215c, 0x9079, 0x02,
	0x215e, 0x0003, 0x02,
	0x2160, 0x2028, 0x02,
	0x2162, 0x434d, 0x02,
	0x2164, 0x464f, 0x02,
	0x2166, 0x5f0f, 0x02,
	0x2168, 0x5f0f, 0x02,
	0x216a, 0x4f9f, 0x02,
	0x216c, 0x2dfc, 0x02,
	0x216e, 0x8020, 0x02,
	0x2170, 0x4f9f, 0x02,
	0x2172, 0x2dfe, 0x02,
	0x2174, 0x8022, 0x02,
	0x2176, 0x5356, 0x02,
	0x2178, 0x9076, 0x02,
	0x217a, 0x0040, 0x02,
	0x217c, 0x2407, 0x02,
	0x217e, 0x9076, 0x02,
	0x2180, 0xff80, 0x02,
	0x2182, 0x2404, 0x02,
	0x2184, 0x535d, 0x02,
	0x2186, 0x926d, 0x02,
	0x2188, 0x2bed, 0x02,
	0x218a, 0x3c13, 0x02,
	0x218c, 0x5359, 0x02,
	0x218e, 0x3c11, 0x02,
	0x2190, 0x4ea2, 0x02,
	0x2192, 0x040c, 0x02,
	0x2194, 0x4e92, 0x02,
	0x2196, 0x0002, 0x02,
	0x2198, 0x040e, 0x02,
	0x219a, 0x3fde, 0x02,
	0x219c, 0x4079, 0x02,
	0x219e, 0x0003, 0x02,
	0x21a0, 0x3fa1, 0x02,
	0x21a2, 0x9a0e, 0x02,
	0x21a4, 0x2803, 0x02,
	0x21a6, 0x9349, 0x02,
	0x21a8, 0x2001, 0x02,
	0x21aa, 0x4359, 0x02,
	0x21ac, 0x9b0e, 0x02,
	0x21ae, 0x2b9a, 0x02,
	0x21b0, 0x3f97, 0x02,
	0x21b2, 0x9305, 0x02,
	0x21b4, 0x2363, 0x02,
	0x21b6, 0x5031, 0x02,
	0x21b8, 0x000a, 0x02,
	0x21ba, 0x4134, 0x02,
	0x21bc, 0x4135, 0x02,
	0x21be, 0x4136, 0x02,
	0x21c0, 0x4137, 0x02,
	0x21c2, 0x4138, 0x02,
	0x21c4, 0x4139, 0x02,
	0x21c6, 0x413a, 0x02,
	0x21c8, 0x413b, 0x02,
	0x21ca, 0x4130, 0x02,
	0x2ffe, 0xc114, 0x02,
	0x322a, 0xf012, 0x02,
	0x32a0, 0x0000, 0x02,
	0x32a2, 0x0000, 0x02,
	0x32a4, 0x0000, 0x02,
	0x32b0, 0x0000, 0x02,
	0x32c0, 0x0000, 0x02,
	0x32c2, 0x0000, 0x02,
	0x32c4, 0x0000, 0x02,
	0x32c6, 0x0000, 0x02,
	0x32c8, 0x0000, 0x02,
	0x32ca, 0x0000, 0x02,
	0x0a7e, 0x0100, 0x02,
	0x3250, 0xa060, 0x02,
	0x0600, 0x1190, 0x02,
	0x0602, 0x0052, 0x02,
	0x0604, 0x1008, 0x02,
	0x0606, 0x0200, 0x02,
	0x0616, 0x0040, 0x02,
	0x0614, 0x0040, 0x02,
	0x0612, 0x0040, 0x02,
	0x0610, 0x0040, 0x02,
	0x06b2, 0x0500, 0x02,
	0x06b4, 0x3ff0, 0x02,
	0x0618, 0x0a80, 0x02,
	0x0668, 0x4303, 0x02,
	0x06ca, 0x02cc, 0x02,
	0x066e, 0x0050, 0x02,
	0x0670, 0x0050, 0x02,
	0x113c, 0x0001, 0x02,
	0x11c4, 0x1080, 0x02,
	0x11c6, 0x0c34, 0x02,
	0x1104, 0x0160, 0x02,
	0x1106, 0x0138, 0x02,
	0x110a, 0x010e, 0x02,
	0x110c, 0x021d, 0x02,
	0x110e, 0xba2e, 0x02,
	0x1110, 0x0056, 0x02,
	0x1112, 0x00ac, 0x02,
	0x1114, 0x6907, 0x02,
	0x1122, 0x0011, 0x02,
	0x1124, 0x0022, 0x02,
	0x1126, 0x2e8c, 0x02,
	0x1128, 0x0016, 0x02,
	0x112a, 0x002b, 0x02,
	0x112c, 0x3483, 0x02,
	0x1130, 0x0200, 0x02,
	0x1132, 0x0200, 0x02,
	0x1102, 0x0028, 0x02,
	0x113e, 0x0200, 0x02,
	0x0d00, 0x4000, 0x02,
	0x0d02, 0x8004, 0x02,
	0x120a, 0x0a00, 0x02,
	0x0214, 0x0200, 0x02,
	0x0216, 0x0200, 0x02,
	0x0218, 0x0200, 0x02,
	0x021a, 0x0200, 0x02,
	0x1000, 0x0300, 0x02,
	0x1002, 0xc319, 0x02,
	0x105a, 0x0091, 0x02,
	0x105c, 0x0f08, 0x02,
	0x105e, 0x0000, 0x02,
	0x1060, 0x3008, 0x02,
	0x1062, 0x0000, 0x02,
	0x0202, 0x0100, 0x02,
	0x0b10, 0x400c, 0x02,
	0x0212, 0x0000, 0x02,
	0x035e, 0x0701, 0x02,
	0x040a, 0x0000, 0x02,
	0x0420, 0x0003, 0x02,
	0x0424, 0x0c47, 0x02,
	0x0418, 0x1010, 0x02,
	0x0740, 0x004f, 0x02,
	0x0354, 0x1000, 0x02,
	0x035c, 0x0303, 0x02,
	0x050e, 0x0000, 0x02,
	0x0510, 0x0058, 0x02,
	0x0512, 0x0058, 0x02,
	0x0514, 0x0050, 0x02,
	0x0516, 0x0050, 0x02,
	0x0260, 0x000b, 0x02,
	0x0262, 0x0700, 0x02,
	0x0266, 0x0007, 0x02,
	0x0250, 0x0000, 0x02,
	0x0258, 0x0002, 0x02,
	0x025c, 0x0002, 0x02,
	0x025a, 0x03e8, 0x02,
	0x0256, 0x0100, 0x02,
	0x0254, 0x0001, 0x02,
	0x0440, 0x000c, 0x02,
	0x0908, 0x0003, 0x02,
	0x0708, 0x2f00, 0x02,
	0x0b02, 0x0000, 0x02,
};


const u32 sensor_hi1336_setfile_A_full_crop_4128x3096_30fps[] = {
	0x3250, 0xa060, 0x02,
	0x0730, 0x700f, 0x02,
	0x0732, 0xe0b0, 0x02,
	0x0734, 0x5c0f, 0x02,
	0x0736, 0xd8b0, 0x02,
	0x1118, 0x0012, 0x02,
	0x1200, 0x001f, 0x02,
	0x1204, 0x1c01, 0x02,
	0x1240, 0x0100, 0x02,
	0x0b20, 0x8100, 0x02,
	0x0f00, 0x0000, 0x02,
	0x1002, 0xc319, 0x02,
	0x103e, 0x0000, 0x02,
	0x1020, 0xc10b, 0x02,
	0x1022, 0x0a31, 0x02,
	0x1024, 0x030b, 0x02,
	0x1026, 0x0d0f, 0x02,
	0x1028, 0x1a0e, 0x02,
	0x102a, 0x1311, 0x02,
	0x102c, 0x2400, 0x02,
	0x1010, 0x07d0, 0x02,
	0x1012, 0x01b9, 0x02,
	0x1014, 0x0088, 0x02,
	0x1016, 0x0088, 0x02,
	0x101a, 0x0088, 0x02,
	0x0404, 0x0008, 0x02,
	0x0406, 0x1087, 0x02,
	0x0220, 0x0008, 0x02,
	0x022a, 0x0017, 0x02,
	0x0222, 0x0c80, 0x02,
	0x022c, 0x0c89, 0x02,
	0x0224, 0x003a, 0x02,
	0x022e, 0x0c55, 0x02,
	0x0f04, 0x0030, 0x02,
	0x0f06, 0x0000, 0x02,
	0x023a, 0x1111, 0x02,
	0x0234, 0x1111, 0x02,
	0x0238, 0x1111, 0x02,
	0x0246, 0x0020, 0x02,
	0x020a, 0x0bb6, 0x02,
	0x021c, 0x0008, 0x02,
	0x0206, 0x05dd, 0x02,
	0x020e, 0x0cf4, 0x02,
	0x0b12, 0x1020, 0x02,
	0x0b14, 0x0c18, 0x02,
	0x0204, 0x0000, 0x02,
	0x041c, 0x0048, 0x02,
	0x041e, 0x1047, 0x02,
	0x0b04, 0x037e, 0x02,
	0x027e, 0x0100, 0x02,
};

const u32 sensor_hi1336_setfile_A_full_crop_4128x2324_30fps[] = {
	0x3250, 0xa060, 0x02,
	0x0730, 0x700f, 0x02,
	0x0732, 0xe0b0, 0x02,
	0x0734, 0x5c0f, 0x02,
	0x0736, 0xd8b0, 0x02,
	0x1118, 0x0194, 0x02,
	0x1200, 0x001f, 0x02,
	0x1204, 0x1c01, 0x02,
	0x1240, 0x0100, 0x02,
	0x0b20, 0x8100, 0x02,
	0x0f00, 0x0000, 0x02,
	0x1002, 0xc319, 0x02,
	0x103e, 0x0000, 0x02,
	0x1020, 0xc10b, 0x02,
	0x1022, 0x0a31, 0x02,
	0x1024, 0x030b, 0x02,
	0x1026, 0x0d0f, 0x02,
	0x1028, 0x1a0e, 0x02,
	0x102a, 0x1311, 0x02,
	0x102c, 0x2400, 0x02,
	0x1010, 0x07d0, 0x02,
	0x1012, 0x01b9, 0x02,
	0x1014, 0x0088, 0x02,
	0x1016, 0x0088, 0x02,
	0x101a, 0x0088, 0x02,
	0x0404, 0x0008, 0x02,
	0x0406, 0x1087, 0x02,
	0x0220, 0x0008, 0x02,
	0x022a, 0x0017, 0x02,
	0x0222, 0x0c80, 0x02,
	0x022c, 0x0c89, 0x02,
	0x0224, 0x01bc, 0x02,
	0x022e, 0x0ad3, 0x02,
	0x0f04, 0x0030, 0x02,
	0x0f06, 0x0000, 0x02,
	0x023a, 0x1111, 0x02,
	0x0234, 0x1111, 0x02,
	0x0238, 0x1111, 0x02,
	0x0246, 0x0020, 0x02,
	0x020a, 0x0bb6, 0x02,
	0x021c, 0x0008, 0x02,
	0x0206, 0x05dd, 0x02,
	0x020e, 0x0cf4, 0x02,
	0x0b12, 0x1020, 0x02,
	0x0b14, 0x0914, 0x02,
	0x0204, 0x0000, 0x02,
	0x041c, 0x0048, 0x02,
	0x041e, 0x1047, 0x02,
	0x0b04, 0x037e, 0x02,
	0x027e, 0x0100, 0x02,
};

const u32 sensor_hi1336_setfile_A_full_crop_4128x1908_30fps[] = {
	0x3250, 0xa060, 0x02,
	0x0730, 0x700f, 0x02,
	0x0732, 0xe0b0, 0x02,
	0x0734, 0x5c0f, 0x02,
	0x0736, 0xd8b0, 0x02,
	0x1118, 0x0264, 0x02,
	0x1200, 0x001f, 0x02,
	0x1204, 0x1c01, 0x02,
	0x1240, 0x0100, 0x02,
	0x0b20, 0x8100, 0x02,
	0x0f00, 0x0000, 0x02,
	0x1002, 0xc319, 0x02,
	0x103e, 0x0000, 0x02,
	0x1020, 0xc10b, 0x02,
	0x1022, 0x0a31, 0x02,
	0x1024, 0x030b, 0x02,
	0x1026, 0x0d0f, 0x02,
	0x1028, 0x1a0e, 0x02,
	0x102a, 0x1311, 0x02,
	0x102c, 0x2400, 0x02,
	0x1010, 0x07d0, 0x02,
	0x1012, 0x01b9, 0x02,
	0x1014, 0x0088, 0x02,
	0x1016, 0x0088, 0x02,
	0x101a, 0x0088, 0x02,
	0x0404, 0x0008, 0x02,
	0x0406, 0x1087, 0x02,
	0x0220, 0x0008, 0x02,
	0x022a, 0x0017, 0x02,
	0x0222, 0x0c80, 0x02,
	0x022c, 0x0c89, 0x02,
	0x0224, 0x028c, 0x02,
	0x022e, 0x0a03, 0x02,
	0x0f04, 0x0030, 0x02,
	0x0f06, 0x0000, 0x02,
	0x023a, 0x1111, 0x02,
	0x0234, 0x1111, 0x02,
	0x0238, 0x1111, 0x02,
	0x0246, 0x0020, 0x02,
	0x020a, 0x0bb6, 0x02,
	0x021c, 0x0008, 0x02,
	0x0206, 0x05dd, 0x02,
	0x020e, 0x0cf4, 0x02,
	0x0b12, 0x1020, 0x02,
	0x0b14, 0x0774, 0x02,
	0x0204, 0x0000, 0x02,
	0x041c, 0x0048, 0x02,
	0x041e, 0x1047, 0x02,
	0x0b04, 0x037e, 0x02,
	0x027e, 0x0100, 0x02,
};

const u32 sensor_hi1336_setfile_A_full_crop_3088x3088_30fps[] = {
	0x3250, 0xa060, 0x02,
	0x0730, 0x700f, 0x02,
	0x0732, 0xe0b0, 0x02,
	0x0734, 0x5c0f, 0x02,
	0x0736, 0xd8b0, 0x02,
	0x1118, 0x0016, 0x02,
	0x1200, 0x001f, 0x02,
	0x1204, 0x1c01, 0x02,
	0x1240, 0x0100, 0x02,
	0x0b20, 0x8100, 0x02,
	0x0f00, 0x0000, 0x02,
	0x1002, 0xc319, 0x02,
	0x103e, 0x0000, 0x02,
	0x1020, 0xc10b, 0x02,
	0x1022, 0x0a31, 0x02,
	0x1024, 0x030b, 0x02,
	0x1026, 0x0d0f, 0x02,
	0x1028, 0x1a0e, 0x02,
	0x102a, 0x1311, 0x02,
	0x102c, 0x2400, 0x02,
	0x1010, 0x07d0, 0x02,
	0x1012, 0x02fe, 0x02,
	0x1014, 0x012b, 0x02,
	0x1016, 0x012b, 0x02,
	0x101a, 0x012b, 0x02,
	0x0404, 0x0008, 0x02,
	0x0406, 0x1087, 0x02,
	0x0220, 0x0008, 0x02,
	0x022a, 0x0017, 0x02,
	0x0222, 0x0c80, 0x02,
	0x022c, 0x0c89, 0x02,
	0x0224, 0x003e, 0x02,
	0x022e, 0x0c51, 0x02,
	0x0f04, 0x0238, 0x02,
	0x0f06, 0x0000, 0x02,
	0x023a, 0x1111, 0x02,
	0x0234, 0x1111, 0x02,
	0x0238, 0x1111, 0x02,
	0x0246, 0x0020, 0x02,
	0x020a, 0x0bb6, 0x02,
	0x021c, 0x0008, 0x02,
	0x0206, 0x05dd, 0x02,
	0x020e, 0x0cf4, 0x02,
	0x0b12, 0x0c10, 0x02,
	0x0b14, 0x0c10, 0x02,
	0x0204, 0x0000, 0x02,
	0x041c, 0x0048, 0x02,
	0x041e, 0x1047, 0x02,
	0x0b04, 0x037e, 0x02,
	0x027e, 0x0100, 0x02,
};

const u32 sensor_hi1336_setfile_A_4binnig_crop_1024x768_120fps[] = {
	0x3250, 0xa870, 0x02,
	0x0730, 0x700f, 0x02,
	0x0732, 0xe3b0, 0x02,
	0x0734, 0x5c0f, 0x02,
	0x0736, 0xd8b0, 0x02,
	0x1118, 0x0318, 0x02,
	0x1200, 0x001f, 0x02,
	0x1204, 0x1c01, 0x02,
	0x1240, 0x0100, 0x02,
	0x0b20, 0x8400, 0x02,
	0x0f00, 0x0c00, 0x02,
	0x1002, 0xc319, 0x02,
	0x103e, 0x0300, 0x02,
	0x1020, 0xc103, 0x02,
	0x1022, 0x030d, 0x02,
	0x1024, 0x0304, 0x02,
	0x1026, 0x0306, 0x02,
	0x1028, 0x0c04, 0x02,
	0x102a, 0x0505, 0x02,
	0x102c, 0x2400, 0x02,
	0x1010, 0x07d0, 0x02,
	0x1012, 0x0064, 0x02,
	0x1014, 0xfffc, 0x02,
	0x1016, 0xfffc, 0x02,
	0x101a, 0xfffc, 0x02,
	0x0404, 0x0008, 0x02,
	0x0406, 0x1087, 0x02,
	0x0220, 0x0008, 0x02,
	0x022a, 0x0011, 0x02,
	0x0222, 0x0c80, 0x02,
	0x022c, 0x0c89, 0x02,
	0x0224, 0x0040, 0x02,
	0x022e, 0x0c49, 0x02,
	0x0f04, 0x0010, 0x02,
	0x0f06, 0x0000, 0x02,
	0x023a, 0x4444, 0x02,
	0x0234, 0x7711, 0x02,
	0x0238, 0x7711, 0x02,
	0x0246, 0x0c78, 0x02,
	0x020a, 0x0330, 0x02,
	0x021c, 0x0008, 0x02,
	0x0206, 0x05dd, 0x02,
	0x020e, 0x033d, 0x02,
	0x0b12, 0x0400, 0x02,
	0x0b14, 0x0300, 0x02,
	0x0204, 0x0300, 0x02,
	0x041c, 0x0048, 0x02,
	0x041e, 0x1047, 0x02,
	0x0b04, 0x037e, 0x02,
	0x027e, 0x0100, 0x02,
};

const struct sensor_pll_info_compact sensor_hi1336_pllinfo_A_full_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,  /* ext_clk */
	1456 * 1000 * 1000,         /* mipi_datarate */
	149500000,                  /* pclk, VT system clock */
	3316,                       /* frame_length_lines */
	1501,                       /* line_length_pck(per lane) */
};

const struct sensor_pll_info_compact sensor_hi1336_pllinfo_A_2binning_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,  /* ext_clk */
	747500000,                  /* mipi_datarate */
	149500000,                  /* pclk, VT system clock */
	3316,                       /* frame_length_lines */
	1501,                       /* line_length_pck(per lane)*/
};

const struct sensor_pll_info_compact sensor_hi1336_pllinfo_A_4binning_120fps = {
	EXT_CLK_Mhz * 1000 * 1000,  /* ext_clk */
	364 * 1000 * 1000,          /* mipi_datarate */
	149500000,                  /* pclk, VT system clock */
	829,                        /* frame_length_lines */
	1501,                       /* line_length_pck(per lane) */
};

static const u32 *sensor_hi1336_setfiles_A[] = {

	sensor_hi1336_setfile_A_full_crop_4128x3096_30fps,
	sensor_hi1336_setfile_A_full_crop_4128x2324_30fps,
	sensor_hi1336_setfile_A_full_crop_4128x1908_30fps,
	sensor_hi1336_setfile_A_full_crop_3088x3088_30fps,
	sensor_hi1336_setfile_A_4binnig_crop_1024x768_120fps

};

static const u32 sensor_hi1336_setfile_A_sizes[] = {

	ARRAY_SIZE(sensor_hi1336_setfile_A_full_crop_4128x3096_30fps),
	ARRAY_SIZE(sensor_hi1336_setfile_A_full_crop_4128x2324_30fps),
	ARRAY_SIZE(sensor_hi1336_setfile_A_full_crop_4128x1908_30fps),
	ARRAY_SIZE(sensor_hi1336_setfile_A_full_crop_3088x3088_30fps),
	ARRAY_SIZE(sensor_hi1336_setfile_A_4binnig_crop_1024x768_120fps),
};

static const struct sensor_pll_info_compact *sensor_hi1336_pllinfos_A[] = {

	&sensor_hi1336_pllinfo_A_full_30fps,       /* full_crop_4128x3096_30fps */
	&sensor_hi1336_pllinfo_A_full_30fps,       /* full_crop_4128x2324_30fps */
	&sensor_hi1336_pllinfo_A_full_30fps,       /* full_crop_4128x1908_30fps */
	&sensor_hi1336_pllinfo_A_full_30fps,       /* full_crop_3088x3088_30fps */
	&sensor_hi1336_pllinfo_A_4binning_120fps,  /* 4binnig_crop_1024x768_120fps */
};

/***************************************************************************
 *                           Hi1336 Fsync setting                          *
 ***************************************************************************/
const u32 sensor_hi1336_setfile_A_fsync_normal[] = {
	0x0250, 0x0000, 0x02,
	0x0254, 0x0001, 0x02,
	0x0256, 0x0100, 0x02,
	0x0258, 0x0002, 0x02,
	0x025a, 0x03e8, 0x02,
	0x025c, 0x0002, 0x02,
};

const u32 sensor_hi1336_setfile_A_fsync_slave[] = {
	0x0250, 0x0300, 0x02,
	0x0254, 0x0011, 0x02,
	0x0256, 0x0100, 0x02,
	0x0258, 0x0002, 0x02,
	0x025a, 0x03e8, 0x02,
	0x025c, 0x0002, 0x02,
};

const u32 sensor_hi1336_setfile_A_fsync_master_full[] = {
	0x0250, 0x0100, 0x02,
	0x0254, 0x1a00, 0x02,
	0x0256, 0x0000, 0x02,
	0x0258, 0x0001, 0x02,
	0x025a, 0x0000, 0x02,
	0x025c, 0x0c5a, 0x02,
};

const u32 sensor_hi1336_setfile_A_fsync_master_2_binnig[] = {
	0x0250, 0x0100, 0x02,
	0x0254, 0x1a00, 0x02,
	0x0256, 0x0000, 0x02,
	0x0258, 0x0001, 0x02,
	0x025a, 0x0000, 0x02,
	0x025c, 0x063a, 0x02,
};

const u32 sensor_hi1336_setfile_A_fsync_master_4_binnig[] = {
	0x0250, 0x0100, 0x02,
	0x0254, 0x1a00, 0x02,
	0x0256, 0x0000, 0x02,
	0x0258, 0x0001, 0x02,
	0x025a, 0x0000, 0x02,
	0x025c, 0x032a, 0x02,
};

struct setfile_info sensor_hi1336_setfile_A_fsync_info[] = {
	SET_SETFILE_INFO(sensor_hi1336_setfile_A_fsync_normal),
	SET_SETFILE_INFO(sensor_hi1336_setfile_A_fsync_slave),
	SET_SETFILE_INFO(sensor_hi1336_setfile_A_fsync_master_2_binnig),
	SET_SETFILE_INFO(sensor_hi1336_setfile_A_fsync_master_4_binnig),
	SET_SETFILE_INFO(sensor_hi1336_setfile_A_fsync_master_full),
};

#endif

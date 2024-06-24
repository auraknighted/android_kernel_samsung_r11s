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

#ifndef IS_CIS_GD1_SET_A_H
#define IS_CIS_GD1_SET_A_H

#include "is-cis.h"
#include "is-cis-gd1.h"

const u32 sensor_gd1_setfile_A_Global[] = {
	0x6028, 0x4000, 2,
	0x0000, 0x0010, 2,
	0x0000, 0x0841, 2,
	0x6010, 0x0001, 2,
	I2C_MODE_DELAY, 30000, 0,
	0x6214, 0xF9F0, 2,
	0x6218, 0xE150, 2,
	0x6242, 0x0E00, 2,
	0x6028, 0x2001, 2,
	0x602A, 0x518C, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0549, 2,
	0x6F12, 0x0448, 2,
	0x6F12, 0x054A, 2,
	0x6F12, 0xC1F8, 2,
	0x6F12, 0xD006, 2,
	0x6F12, 0x101A, 2,
	0x6F12, 0xA1F8, 2,
	0x6F12, 0xD406, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x79B9, 2,
	0x6F12, 0x2001, 2,
	0x6F12, 0x5628, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0x68C0, 2,
	0x6F12, 0x2001, 2,
	0x6F12, 0xF800, 2,
	0x6F12, 0x70B5, 2,
	0x6F12, 0xC94D, 2,
	0x6F12, 0xC94C, 2,
	0x6F12, 0x2888, 2,
	0x6F12, 0x2081, 2,
	0x6F12, 0xA081, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xBAF9, 2,
	0x6F12, 0x2080, 2,
	0x6F12, 0x2888, 2,
	0x6F12, 0xE080, 2,
	0x6F12, 0x0320, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xB9F9, 2,
	0x6F12, 0x0820, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xBBF9, 2,
	0x6F12, 0xC34D, 2,
	0x6F12, 0xA080, 2,
	0x6F12, 0x287D, 2,
	0x6F12, 0x0328, 2,
	0x6F12, 0x06D1, 2,
	0x6F12, 0x0020, 2,
	0x6F12, 0x2875, 2,
	0x6F12, 0xC048, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xB6F9, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xB9F9, 2,
	0x6F12, 0x287D, 2,
	0x6F12, 0x58BB, 2,
	0x6F12, 0xBE4C, 2,
	0x6F12, 0x94F8, 2,
	0x6F12, 0x6709, 2,
	0x6F12, 0x68B9, 2,
	0x6F12, 0xBD48, 2,
	0x6F12, 0x0078, 2,
	0x6F12, 0x50B9, 2,
	0x6F12, 0x94F8, 2,
	0x6F12, 0x6C09, 2,
	0x6F12, 0x38B9, 2,
	0x6F12, 0xBB48, 2,
	0x6F12, 0x007A, 2,
	0x6F12, 0x10B1, 2,
	0x6F12, 0x94F8, 2,
	0x6F12, 0x5C09, 2,
	0x6F12, 0x08B9, 2,
	0x6F12, 0x687D, 2,
	0x6F12, 0x18B1, 2,
	0x6F12, 0x1021, 2,
	0x6F12, 0xB348, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xA6F9, 2,
	0x6F12, 0x94F8, 2,
	0x6F12, 0x6909, 2,
	0x6F12, 0x08B9, 2,
	0x6F12, 0x687D, 2,
	0x6F12, 0x18B1, 2,
	0x6F12, 0x4021, 2,
	0x6F12, 0xAF48, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x9DF9, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xA0F9, 2,
	0x6F12, 0x08B9, 2,
	0x6F12, 0x687D, 2,
	0x6F12, 0x38B1, 2,
	0x6F12, 0x0C21, 2,
	0x6F12, 0xAA48, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x94F9, 2,
	0x6F12, 0x0121, 2,
	0x6F12, 0xA848, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x90F9, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x98F9, 2,
	0x6F12, 0x687D, 2,
	0x6F12, 0x0028, 2,
	0x6F12, 0x04D0, 2,
	0x6F12, 0xBDE8, 2,
	0x6F12, 0x7040, 2,
	0x6F12, 0xA748, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x95B9, 2,
	0x6F12, 0x70BD, 2,
	0x6F12, 0x8908, 2,
	0x6F12, 0x8900, 2,
	0x6F12, 0x41EA, 2,
	0x6F12, 0x4000, 2,
	0x6F12, 0x82B2, 2,
	0x6F12, 0x3E21, 2,
	0x6F12, 0x46F2, 2,
	0x6F12, 0x4420, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x8FB9, 2,
	0x6F12, 0x2DE9, 2,
	0x6F12, 0xFE4F, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x90F9, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x93F9, 2,
	0x6F12, 0x0128, 2,
	0x6F12, 0x7DD1, 2,
	0x6F12, 0x9D4C, 2,
	0x6F12, 0x94F8, 2,
	0x6F12, 0xA700, 2,
	0x6F12, 0x0090, 2,
	0x6F12, 0x94F8, 2,
	0x6F12, 0xA800, 2,
	0x6F12, 0xDF34, 2,
	0x6F12, 0x0190, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x8CF9, 2,
	0x6F12, 0x994F, 2,
	0x6F12, 0x0646, 2,
	0x6F12, 0x994D, 2,
	0x6F12, 0x97F8, 2,
	0x6F12, 0xA800, 2,
	0x6F12, 0x4000, 2,
	0x6F12, 0x40F4, 2,
	0x6F12, 0x0070, 2,
	0x6F12, 0xA5F8, 2,
	0x6F12, 0xB201, 2,
	0x6F12, 0xDFF8, 2,
	0x6F12, 0x44A2, 2,
	0x6F12, 0x6B46, 2,
	0x6F12, 0x3246, 2,
	0x6F12, 0xBAF8, 2,
	0x6F12, 0xEC11, 2,
	0x6F12, 0x4FF2, 2,
	0x6F12, 0xB010, 2,
	0x6F12, 0x05F5, 2,
	0x6F12, 0xC275, 2,
	0x6F12, 0x9E37, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x7AF9, 2,
	0x6F12, 0x0E20, 2,
	0x6F12, 0xA077, 2,
	0x6F12, 0xA885, 2,
	0x6F12, 0xB97A, 2,
	0x6F12, 0x4FF4, 2,
	0x6F12, 0x0078, 2,
	0x6F12, 0x48EA, 2,
	0x6F12, 0x4100, 2,
	0x6F12, 0xE887, 2,
	0x6F12, 0xB988, 2,
	0x6F12, 0x6B46, 2,
	0x6F12, 0x3246, 2,
	0x6F12, 0x4FF2, 2,
	0x6F12, 0xC010, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x6AF9, 2,
	0x6F12, 0x0026, 2,
	0x6F12, 0xA677, 2,
	0x6F12, 0xAE87, 2,
	0x6F12, 0x25F8, 2,
	0x6F12, 0x128C, 2,
	0x6F12, 0x4FF0, 2,
	0x6F12, 0x0109, 2,
	0x6F12, 0x84F8, 2,
	0x6F12, 0x1D90, 2,
	0x6F12, 0x84F8, 2,
	0x6F12, 0x1F90, 2,
	0x6F12, 0xBAF8, 2,
	0x6F12, 0xEA21, 2,
	0x6F12, 0x0198, 2,
	0x6F12, 0x3988, 2,
	0x6F12, 0x4243, 2,
	0x6F12, 0x6B46, 2,
	0x6F12, 0x4FF2, 2,
	0x6F12, 0x7010, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x55F9, 2,
	0x6F12, 0x25F8, 2,
	0x6F12, 0x149C, 2,
	0x6F12, 0x7C4C, 2,
	0x6F12, 0x7D48, 2,
	0x6F12, 0x84F8, 2,
	0x6F12, 0xCE6C, 2,
	0x6F12, 0x0680, 2,
	0x6F12, 0x7C48, 2,
	0x6F12, 0x0680, 2,
	0x6F12, 0xA5F8, 2,
	0x6F12, 0x0E80, 2,
	0x6F12, 0x7B4E, 2,
	0x6F12, 0x6B46, 2,
	0x6F12, 0x2821, 2,
	0x6F12, 0x7288, 2,
	0x6F12, 0x4FF2, 2,
	0x6F12, 0x9010, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x42F9, 2,
	0x6F12, 0x0220, 2,
	0x6F12, 0xA881, 2,
	0x6F12, 0xA5F8, 2,
	0x6F12, 0x1E80, 2,
	0x6F12, 0x94F8, 2,
	0x6F12, 0xCE0C, 2,
	0x6F12, 0xF021, 2,
	0x6F12, 0x0201, 2,
	0x6F12, 0x4BF2, 2,
	0x6F12, 0x0600, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x22F9, 2,
	0x6F12, 0xA4F5, 2,
	0x6F12, 0x8045, 2,
	0x6F12, 0x2878, 2,
	0x6F12, 0xE8B1, 2,
	0x6F12, 0x94F8, 2,
	0x6F12, 0xCE0C, 2,
	0x6F12, 0xF021, 2,
	0x6F12, 0x0201, 2,
	0x6F12, 0x4BF2, 2,
	0x6F12, 0x0800, 2,
	0x6F12, 0x04F6, 2,
	0x6F12, 0xCE44, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x14F9, 2,
	0x6F12, 0x2078, 2,
	0x6F12, 0xF021, 2,
	0x6F12, 0x0201, 2,
	0x6F12, 0x4BF2, 2,
	0x6F12, 0x0A00, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x0DF9, 2,
	0x6F12, 0xA079, 2,
	0x6F12, 0xE179, 2,
	0x6F12, 0x0001, 2,
	0x6F12, 0x00E0, 2,
	0x6F12, 0x0EE0, 2,
	0x6F12, 0x40EA, 2,
	0x6F12, 0x0130, 2,
	0x6F12, 0xB5F8, 2,
	0x6F12, 0xDC12, 2,
	0x6F12, 0x0843, 2,
	0x6F12, 0x6249, 2,
	0x6F12, 0xA1F8, 2,
	0x6F12, 0x0601, 2,
	0x6F12, 0x6248, 2,
	0x6F12, 0x7288, 2,
	0x6F12, 0xB0F8, 2,
	0x6F12, 0xF412, 2,
	0x6F12, 0x1144, 2,
	0x6F12, 0xA0F8, 2,
	0x6F12, 0xF412, 2,
	0x6F12, 0xBDE8, 2,
	0x6F12, 0xFE8F, 2,
	0x6F12, 0x10B5, 2,
	0x6F12, 0x5D4C, 2,
	0x6F12, 0x94F8, 2,
	0x6F12, 0xFC10, 2,
	0x6F12, 0x94F8, 2,
	0x6F12, 0xFA00, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x08F9, 2,
	0x6F12, 0x81B2, 2,
	0x6F12, 0xA4F8, 2,
	0x6F12, 0x2A12, 2,
	0x6F12, 0x8807, 2,
	0x6F12, 0x02D0, 2,
	0x6F12, 0x0E20, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x05F9, 2,
	0x6F12, 0x0020, 2,
	0x6F12, 0xA4F8, 2,
	0x6F12, 0x2C02, 2,
	0x6F12, 0x94F8, 2,
	0x6F12, 0x1612, 2,
	0x6F12, 0xA4F8, 2,
	0x6F12, 0x2612, 2,
	0x6F12, 0xC807, 2,
	0x6F12, 0x02D0, 2,
	0x6F12, 0x4520, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xF9F8, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xFCF8, 2,
	0x6F12, 0xA4F8, 2,
	0x6F12, 0x2802, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xDFF8, 2,
	0x6F12, 0x0128, 2,
	0x6F12, 0x16D1, 2,
	0x6F12, 0x4C48, 2,
	0x6F12, 0x0078, 2,
	0x6F12, 0x98B1, 2,
	0x6F12, 0x4848, 2,
	0x6F12, 0x94F8, 2,
	0x6F12, 0x1622, 2,
	0x6F12, 0x4188, 2,
	0x6F12, 0x4048, 2,
	0x6F12, 0x90F8, 2,
	0x6F12, 0xC000, 2,
	0x6F12, 0xC140, 2,
	0x6F12, 0x1144, 2,
	0x6F12, 0xA4F8, 2,
	0x6F12, 0x2612, 2,
	0x6F12, 0xB4F8, 2,
	0x6F12, 0x2812, 2,
	0x6F12, 0x4FF6, 2,
	0x6F12, 0xFF72, 2,
	0x6F12, 0x02EA, 2,
	0x6F12, 0x4101, 2,
	0x6F12, 0xC140, 2,
	0x6F12, 0xA4F8, 2,
	0x6F12, 0x2812, 2,
	0x6F12, 0xB4F8, 2,
	0x6F12, 0x2C32, 2,
	0x6F12, 0xB4F8, 2,
	0x6F12, 0x2A22, 2,
	0x6F12, 0xB4F8, 2,
	0x6F12, 0x2812, 2,
	0x6F12, 0xB4F8, 2,
	0x6F12, 0x2602, 2,
	0x6F12, 0xBDE8, 2,
	0x6F12, 0x1040, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xD8B8, 2,
	0x6F12, 0x70B5, 2,
	0x6F12, 0x3748, 2,
	0x6F12, 0x0022, 2,
	0x6F12, 0x4068, 2,
	0x6F12, 0x86B2, 2,
	0x6F12, 0x040C, 2,
	0x6F12, 0x3146, 2,
	0x6F12, 0x2046, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xD3F8, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xD6F8, 2,
	0x6F12, 0x0546, 2,
	0x6F12, 0x0122, 2,
	0x6F12, 0x3146, 2,
	0x6F12, 0x2046, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xCBF8, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xA6F8, 2,
	0x6F12, 0x0128, 2,
	0x6F12, 0x01D0, 2,
	0x6F12, 0x2846, 2,
	0x6F12, 0x70BD, 2,
	0x6F12, 0x2E48, 2,
	0x6F12, 0x90F8, 2,
	0x6F12, 0xD512, 2,
	0x6F12, 0x2D48, 2,
	0x6F12, 0x0078, 2,
	0x6F12, 0x00B1, 2,
	0x6F12, 0x1821, 2,
	0x6F12, 0x284C, 2,
	0x6F12, 0x6180, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xC4F8, 2,
	0x6F12, 0x6188, 2,
	0x6F12, 0xC140, 2,
	0x6F12, 0x4FF6, 2,
	0x6F12, 0xF870, 2,
	0x6F12, 0xC91D, 2,
	0x6F12, 0x0140, 2,
	0x6F12, 0x1D48, 2,
	0x6F12, 0x6180, 2,
	0x6F12, 0x90F8, 2,
	0x6F12, 0xC000, 2,
	0x6F12, 0xC140, 2,
	0x6F12, 0x4819, 2,
	0x6F12, 0x1849, 2,
	0x6F12, 0xB1F8, 2,
	0x6F12, 0xEA11, 2,
	0x6F12, 0x0844, 2,
	0x6F12, 0x70BD, 2,
	0x6F12, 0x10B5, 2,
	0x6F12, 0x0122, 2,
	0x6F12, 0xAFF2, 2,
	0x6F12, 0xEB21, 2,
	0x6F12, 0x2048, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xB1F8, 2,
	0x6F12, 0x0022, 2,
	0x6F12, 0xAFF2, 2,
	0x6F12, 0x4B21, 2,
	0x6F12, 0x1E48, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xABF8, 2,
	0x6F12, 0xAFF2, 2,
	0x6F12, 0x4320, 2,
	0x6F12, 0x1C49, 2,
	0x6F12, 0x0022, 2,
	0x6F12, 0x8864, 2,
	0x6F12, 0xAFF2, 2,
	0x6F12, 0x1B11, 2,
	0x6F12, 0x1B48, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0xA1F8, 2,
	0x6F12, 0x0122, 2,
	0x6F12, 0xAFF2, 2,
	0x6F12, 0x9901, 2,
	0x6F12, 0x1948, 2,
	0x6F12, 0x00F0, 2,
	0x6F12, 0x9BF8, 2,
	0x6F12, 0x0F49, 2,
	0x6F12, 0x4860, 2,
	0x6F12, 0x10BD, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0xED50, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0x61F0, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0x2390, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0x3A70, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0xBA00, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0xED60, 2,
	0x6F12, 0x2001, 2,
	0x6F12, 0xF000, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0x9420, 2,
	0x6F12, 0x2001, 2,
	0x6F12, 0x45B0, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0x12F0, 2,
	0x6F12, 0x4000, 2,
	0x6F12, 0xF000, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0xDA00, 2,
	0x6F12, 0x4000, 2,
	0x6F12, 0xF4F2, 2,
	0x6F12, 0x4000, 2,
	0x6F12, 0xB40C, 2,
	0x6F12, 0x2001, 2,
	0x6F12, 0x5620, 2,
	0x6F12, 0x4000, 2,
	0x6F12, 0xE000, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0x68C0, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0x9A00, 2,
	0x6F12, 0x0001, 2,
	0x6F12, 0x7E15, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x6D83, 2,
	0x6F12, 0x2000, 2,
	0x6F12, 0x5D90, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0ACB, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0xA89B, 2,
	0x6F12, 0x41F2, 2,
	0x6F12, 0x331C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x000C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x44F2, 2,
	0x6F12, 0xE53C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x020C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x48F2, 2,
	0x6F12, 0x554C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x000C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x40F2, 2,
	0x6F12, 0x6D7C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x000C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x47F6, 2,
	0x6F12, 0x975C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x010C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x40F2, 2,
	0x6F12, 0x476C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x000C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x40F6, 2,
	0x6F12, 0xBF6C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x000C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x47F6, 2,
	0x6F12, 0xC55C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x010C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x43F6, 2,
	0x6F12, 0xBB1C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x010C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x48F2, 2,
	0x6F12, 0x551C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x000C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x45F2, 2,
	0x6F12, 0xC70C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x020C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x40F6, 2,
	0x6F12, 0x692C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x000C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x44F2, 2,
	0x6F12, 0x8F6C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x020C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x44F6, 2,
	0x6F12, 0x451C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x020C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x44F2, 2,
	0x6F12, 0x3F6C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x020C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x42F2, 2,
	0x6F12, 0x113C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x000C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x44F2, 2,
	0x6F12, 0xC36C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x020C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x43F2, 2,
	0x6F12, 0x374C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x010C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x48F2, 2,
	0x6F12, 0x391C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x000C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x4AF6, 2,
	0x6F12, 0x9B0C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x000C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x44F6, 2,
	0x6F12, 0x290C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x020C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x4BF6, 2,
	0x6F12, 0x152C, 2,
	0x6F12, 0xC0F2, 2,
	0x6F12, 0x000C, 2,
	0x6F12, 0x6047, 2,
	0x6F12, 0x0841, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x00B0, 2,
	0x602A, 0xF1EA, 2,
	0x6F12, 0x0008, 2,
	0x6F12, 0x13C0, 2,
	0x602A, 0xF008, 2,
	0x6F12, 0x0000, 2,
	0x6028, 0x2000, 2,
	0x602A, 0x2500, 2,
	0x6F12, 0x0080, 2,
	0x602A, 0x10B8, 2,
	0x6F12, 0x0020, 2,
	0x602A, 0x1EE0, 2,
	0x6F12, 0x0078, 2,
	0x602A, 0x2870, 2,
	0x6F12, 0x0100, 2,
	0x602A, 0x250A, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x23A0, 2,
	0x6F12, 0x0001, 2,
	0x602A, 0x3022, 2,
	0x6F12, 0x1281, 2,
	0x602A, 0x32E8, 2,
	0x6F12, 0x0100, 2,
	0x602A, 0x54A2, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x120E, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x1212, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x2860, 2,
	0x6F12, 0x0001, 2,
	0x602A, 0x3220, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x1226, 2,
	0x6F12, 0x0301, 2,
	0x602A, 0x29C8, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x32EC, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x12BE, 2,
	0x6F12, 0x0101, 2,
	0x602A, 0x3034, 2,
	0x6F12, 0x049B, 2,
	0x602A, 0x1230, 2,
	0x6F12, 0x0100, 2,
	0x602A, 0x1232, 2,
	0x6F12, 0x00F0, 2,
	0x602A, 0x1236, 2,
	0x6F12, 0x01FF, 2,
	0x602A, 0x123A, 2,
	0x6F12, 0x0004, 2,
	0x602A, 0x123E, 2,
	0x6F12, 0xF45A, 2,
	0x602A, 0x1EE2, 2,
	0x6F12, 0x19CD, 2,
	0x602A, 0x115E, 2,
	0x6F12, 0x0048, 2,
	0x602A, 0x131C, 2,
	0x6F12, 0x2400, 2,
	0x602A, 0x2872, 2,
	0x6F12, 0x0001, 2,
	0x602A, 0x1314, 2,
	0x6F12, 0x0100, 2,
	0x602A, 0x20DE, 2,
	0x6F12, 0x0003, 2,
	0x6F12, 0x0011, 2,
	0x6F12, 0x0022, 2,
	0x6F12, 0x0011, 2,
	0x6F12, 0x0022, 2,
	0x6F12, 0x0011, 2,
	0x6F12, 0x0022, 2,
	0x6F12, 0x0011, 2,
	0x6F12, 0x0022, 2,
	0x6F12, 0x0011, 2,
	0x6F12, 0x0022, 2,
	0x602A, 0x2108, 2,
	0x6F12, 0x0022, 2,
	0x6F12, 0x0011, 2,
	0x6F12, 0x0022, 2,
	0x6F12, 0x0011, 2,
	0x6F12, 0x0022, 2,
	0x6F12, 0x0011, 2,
	0x6F12, 0x0022, 2,
	0x6F12, 0x0011, 2,
	0x6F12, 0x0022, 2,
	0x6F12, 0x0011, 2,
	0x602A, 0x1EDC, 2,
	0x6F12, 0x5008, 2,
	0x602A, 0x138E, 2,
	0x6F12, 0x13C0, 2,
	0x602A, 0x1392, 2,
	0x6F12, 0x0038, 2,
	0x602A, 0x21B6, 2,
	0x6F12, 0x0002, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x2550, 2,
	0x6F12, 0x193C, 2,
	0x6028, 0x4000, 2,
	0x0BC0, 0x0040, 2,
	0x0FE8, 0x49C1, 2,
	0x0FEA, 0x0040, 2,
	0x0BC8, 0x0001, 2,
	0x0B0A, 0x0101, 2,
	0x0BC6, 0x0000, 2,
	0x0B06, 0x0101, 2,
	0xF446, 0x000C, 2,
	0xF448, 0x0018, 2,
	0xF450, 0x0010, 2,
	0xF44E, 0x0000, 2,
	0xF468, 0xE000, 2,
	0x6B76, 0x0200, 2,
	0x6028, 0x2000, 2,
	0x602A, 0x3778, 2,
	0x6F12, 0x0100, 2,
	0x602A, 0x37FC, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x4BFC, 2,
	0x6F12, 0xD2D2, 2,
	0x6F12, 0xD2D2, 2,
	0x6F12, 0xD2D2, 2,
	0x602A, 0x465C, 2,
	0x6F12, 0x1414, 2,
	0x6F12, 0x1414, 2,
	0x6F12, 0x1414, 2,
	0x602A, 0x4652, 2,
	0x6F12, 0x1023, 2,
	0x6F12, 0x2323, 2,
	0x6F12, 0x2323, 2,
	0x6F12, 0x2300, 2,
	0x602A, 0x466E, 2,
	0x6F12, 0x1313, 2,
	0x6F12, 0x1313, 2,
	0x6F12, 0x1313, 2,
	0x602A, 0x469A, 2,
	0x6F12, 0x1014, 2,
	0x6F12, 0x1414, 2,
	0x6F12, 0x1414, 2,
	0x6F12, 0x1400, 2,
	0x602A, 0x46AC, 2,
	0x6F12, 0x1013, 2,
	0x6F12, 0x1313, 2,
	0x6F12, 0x1313, 2,
	0x6F12, 0x1300, 2,
	0x602A, 0x4676, 2,
	0x6F12, 0x100A, 2,
	0x6F12, 0x0A0A, 2,
	0x6F12, 0x0A0A, 2,
	0x6F12, 0x0A00, 2,
	0x602A, 0x4688, 2,
	0x6F12, 0x101D, 2,
	0x6F12, 0x1D1D, 2,
	0x6F12, 0x1D1D, 2,
	0x6F12, 0x1D00, 2,
	0x602A, 0x4C0E, 2,
	0x6F12, 0x7878, 2,
	0x6F12, 0x7878, 2,
	0x6F12, 0x7878, 2,
	0x602A, 0x3B1E, 2,
	0x6F12, 0x008C, 2,
	0x602A, 0x4C20, 2,
	0x6F12, 0x1D1D, 2,
	0x6F12, 0x1D1D, 2,
	0x6F12, 0x1D1D, 2,
	0x602A, 0x3B12, 2,
	0x6F12, 0x0002, 2,
	0x602A, 0x3AF2, 2,
	0x6F12, 0x0002, 2,
	0x602A, 0x3AF6, 2,
	0x6F12, 0x0005, 2,
	0x602A, 0x3AFA, 2,
	0x6F12, 0x0007, 2,
	0x602A, 0x3AFE, 2,
	0x6F12, 0x0064, 2,
	0x602A, 0x3B02, 2,
	0x6F12, 0x00AF, 2,
	0x602A, 0x3B06, 2,
	0x6F12, 0x00C8, 2,
	0x602A, 0x46BE, 2,
	0x6F12, 0x10D4, 2,
	0x6F12, 0xD4D4, 2,
	0x6F12, 0xD4D4, 2,
	0x6F12, 0xD400, 2,
	0x602A, 0x46C8, 2,
	0x6F12, 0xFAFA, 2,
	0x6F12, 0xFAFA, 2,
	0x6F12, 0xFAFA, 2,
	0x602A, 0x3B2E, 2,
	0x6F12, 0x0008, 2,
	0x602A, 0x3B32, 2,
	0x6F12, 0x0070, 2,
	0x602A, 0x4C28, 2,
	0x6F12, 0x1033, 2,
	0x6F12, 0x3333, 2,
	0x6F12, 0x3333, 2,
	0x6F12, 0x3300, 2,
	0x602A, 0x4C32, 2,
	0x6F12, 0x1919, 2,
	0x6F12, 0x1919, 2,
	0x6F12, 0x1919, 2,
	0x602A, 0x4C3A, 2,
	0x6F12, 0x10CC, 2,
	0x6F12, 0xCCCC, 2,
	0x6F12, 0xCCCC, 2,
	0x6F12, 0xCC00, 2,
	0x602A, 0x4C44, 2,
	0x6F12, 0x3333, 2,
	0x6F12, 0x3333, 2,
	0x6F12, 0x3333, 2,
	0x602A, 0x4C4C, 2,
	0x6F12, 0x1066, 2,
	0x6F12, 0x6666, 2,
	0x6F12, 0x6666, 2,
	0x6F12, 0x6600, 2,
	0x602A, 0x4C56, 2,
	0x6F12, 0x2222, 2,
	0x6F12, 0x2222, 2,
	0x6F12, 0x2222, 2,
	0x602A, 0x3E06, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x3E0A, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x3E2E, 2,
	0x6F12, 0x0060, 2,
	0x602A, 0x37FE, 2,
	0x6F12, 0x0001, 2,
	0x6F12, 0x0001, 2,
	0x6F12, 0x0001, 2,
	0x6F12, 0x0001, 2,
	0x602A, 0x3E0E, 2,
	0x6F12, 0x0019, 2,
	0x602A, 0x3E12, 2,
	0x6F12, 0x00FE, 2,
	0x602A, 0x3E16, 2,
	0x6F12, 0x0019, 2,
	0x602A, 0x3E1A, 2,
	0x6F12, 0x00FE, 2,
	0x602A, 0x3E1E, 2,
	0x6F12, 0x001E, 2,
	0x602A, 0x3E22, 2,
	0x6F12, 0x00FF, 2,
	0x602A, 0x3E26, 2,
	0x6F12, 0x0014, 2,
	0x602A, 0x3E2A, 2,
	0x6F12, 0x00DA, 2,
	0x602A, 0x3CB2, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x3BA2, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x4C5E, 2,
	0x6F12, 0x4078, 2,
	0x6F12, 0x785E, 2,
	0x6F12, 0x4236, 2,
	0x6F12, 0x3601, 2,
	0x602A, 0x4C68, 2,
	0x6F12, 0x7878, 2,
	0x6F12, 0x5E42, 2,
	0x6F12, 0x3636, 2,
	0x602A, 0x4C70, 2,
	0x6F12, 0x405A, 2,
	0x6F12, 0x5A78, 2,
	0x6F12, 0x96B4, 2,
	0x6F12, 0xB401, 2,
	0x602A, 0x4C7A, 2,
	0x6F12, 0x6464, 2,
	0x6F12, 0x85A7, 2,
	0x602A, 0x4C82, 2,
	0x6F12, 0x4053, 2,
	0x6F12, 0x5370, 2,
	0x6F12, 0x8BA7, 2,
	0x6F12, 0xA701, 2,
	0x602A, 0x4C8C, 2,
	0x6F12, 0x5353, 2,
	0x6F12, 0x708B, 2,
	0x6F12, 0xA7A7, 2,
	0x602A, 0x4C94, 2,
	0x6F12, 0x4064, 2,
	0x6F12, 0x6486, 2,
	0x6F12, 0xA7C8, 2,
	0x6F12, 0xC801, 2,
	0x602A, 0x4C9E, 2,
	0x6F12, 0x1414, 2,
	0x6F12, 0x1B21, 2,
	0x6F12, 0x2828, 2,
	0x602A, 0x4CA6, 2,
	0x6F12, 0x4014, 2,
	0x6F12, 0x141B, 2,
	0x6F12, 0x2128, 2,
	0x6F12, 0x2801, 2,
	0x602A, 0x4CB0, 2,
	0x6F12, 0x1B1B, 2,
	0x6F12, 0x232D, 2,
	0x6F12, 0x3636, 2,
	0x602A, 0x4CB8, 2,
	0x6F12, 0x403C, 2,
	0x6F12, 0x3C50, 2,
	0x6F12, 0x6478, 2,
	0x6F12, 0x7801, 2,
	0x602A, 0x4CC2, 2,
	0x6F12, 0x3C3C, 2,
	0x6F12, 0x5064, 2,
	0x6F12, 0x7878, 2,
	0x602A, 0x3DA6, 2,
	0x6F12, 0x0035, 2,
	0x602A, 0x3DAA, 2,
	0x6F12, 0x0028, 2,
	0x602A, 0x3DB0, 2,
	0x6F12, 0x01AB, 2,
	0x6F12, 0x0001, 2,
	0x6F12, 0x01AC, 2,
	0x6F12, 0x0050, 2,
	0x6F12, 0x01AD, 2,
	0x6F12, 0x0064, 2,
	0x6F12, 0x01AE, 2,
	0x6F12, 0x0064, 2,
	0x6F12, 0x01AF, 2,
	0x6F12, 0x00C8, 2,
	0x6F12, 0x01B0, 2,
	0x6F12, 0x00C8, 2,
	0x602A, 0x3DD4, 2,
	0x6F12, 0x01B4, 2,
	0x6F12, 0x0032, 2,
	0x6F12, 0x01B5, 2,
	0x6F12, 0x0050, 2,
	0x6F12, 0x01B6, 2,
	0x6F12, 0x0050, 2,
	0x6F12, 0x01B7, 2,
	0x6F12, 0x00C8, 2,
	0x6F12, 0x01B8, 2,
	0x6F12, 0x00C8, 2,
	0x6F12, 0x01B9, 2,
	0x6F12, 0x0081, 2,
	0x6028, 0x4000, 2,
	0x6B76, 0xC000, 2,

};

const u32 sensor_gd1_setfile_A_6528x4896_15fps[] = {
	0x6028, 0x4000, 2,
	0x6214, 0xF9F0, 2,
	0x6218, 0xE150, 2,
	0x6242, 0x0E00, 2,
	0x6028, 0x2000, 2,
	0x602A, 0x12F2, 2,
	0x6F12, 0x0D10, 2,
	0x6F12, 0x0A18, 2,
	0x6F12, 0x19B0, 2,
	0x6F12, 0x1350, 2,
	0x602A, 0x1EB6, 2,
	0x6F12, 0x0206, 2,
	0x602A, 0x3770, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x1EB8, 2,
	0x6F12, 0x0300, 2,
	0x602A, 0x131E, 2,
	0x6F12, 0x0100, 2,
	0x602A, 0x3DEA, 2,
	0x6F12, 0x0081, 2,
	0x602A, 0x11A6, 2,
	0x6F12, 0x0200, 2,
	0x6F12, 0x0098, 2,
	0x602A, 0x11AE, 2,
	0x6F12, 0x0088, 2,
	0x602A, 0x13FC, 2,
	0x6F12, 0x0064, 2,
	0x6F12, 0x0044, 2,
	0x6F12, 0x0044, 2,
	0x602A, 0x3302, 2,
	0x6F12, 0x0101, 2,
	0x6F12, 0x0100, 2,
	0x6F12, 0x0001, 2,
	0x602A, 0x27D2, 2,
	0x6F12, 0x0101, 2,
	0x602A, 0x1EC8, 2,
	0x6F12, 0x0603, 2,
	0x6F12, 0x0504, 2,
	0x602A, 0x1ED2, 2,
	0x6F12, 0x080F, 2,
	0x602A, 0x1ED6, 2,
	0x6F12, 0x0307, 2,
	0x602A, 0x123C, 2,
	0x6F12, 0x0004, 2,
	0x602A, 0x21BE, 2,
	0x6F12, 0x04D2, 2,
	0x6F12, 0x41A6, 2,
	0x602A, 0x1EE0, 2,
	0x6F12, 0x006C, 2,
	0x602A, 0x145C, 2,
	0x6F12, 0x0049, 2,
	0x6F12, 0x0035, 2,
	0x6F12, 0x0035, 2,
	0x602A, 0x140E, 2,
	0x6F12, 0x0001, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x1224, 2,
	0x6F12, 0x014B, 2,
	0x6028, 0x4000, 2,
	0xF466, 0x0FFD, 2,
	0x0328, 0x0100, 2,
	0x0344, 0x0018, 2,
	0x0346, 0x0010, 2,
	0x0348, 0x1997, 2,
	0x034A, 0x133F, 2,
	0x034C, 0x1980, 2,
	0x034E, 0x1320, 2,
	0x0350, 0x0000, 2,
	0x0352, 0x0008, 2,
	0x0900, 0x0111, 2,
	0x0380, 0x0001, 2,
	0x0382, 0x0001, 2,
	0x0384, 0x0001, 2,
	0x0386, 0x0001, 2,
	0x0400, 0x1010, 2,
	0x0404, 0x1000, 2,
	0x0402, 0x1010, 2,
	0x0114, 0x0300, 2,
	0x0116, 0x3000, 2,
	0x0110, 0x1002, 2,
	0x011C, 0x0100, 2,
	0x0136, 0x1A00, 2,
	0x0300, 0x0002, 2,
	0x0302, 0x0003, 2,
	0x0304, 0x0004, 2,
	0x0306, 0x0108, 2,
	0x0308, 0x0008, 2,
	0x030A, 0x0002, 2,
	0x030C, 0x0000, 2,
	0x030E, 0x0004, 2,
	0x0310, 0x00E9, 2,
	0x0312, 0x0001, 2,
	0x0340, 0x15B4, 2,
	0x0342, 0x35A0, 2,
	0x0202, 0x0100, 2,
	0x0200, 0x0100, 2,
	0x022C, 0x0100, 2,
	0x0226, 0x0100, 2,
	0x021E, 0x0000, 2,
	0x6028, 0x2000, 2,
	0x602A, 0x3020, 2,
	0x6F12, 0x0000, 2,
	0x6028, 0x4000, 2,
	0x0B00, 0x0180, 2,
	0x0B08, 0x0001, 2,
	0x0D00, 0x0000, 2,
	0x0D02, 0x0000, 2,
	0x0D04, 0x0000, 2,
};

/*
 * [Mode Information]
 *	0: [MCLK:26,Width:4000,Height:3000,Format:MIPI_RAW10,mipi_lane:4,mipi_datarate:1152,pvi_pclk_inverse:0]
 */
const u32 sensor_gd1_setfile_A_3264x2448_30fps[] = {
	0x6028, 0x4000, 2,
	0x6214, 0xF9F0, 2,
	0x6218, 0xE150, 2,
	0x6242, 0x0E00, 2,
	0x6028, 0x2000, 2,
	0x602A, 0x12F2, 2,
	0x6F12, 0x0D10, 2,
	0x6F12, 0x0A18, 2,
	0x6F12, 0x19B0, 2,
	0x6F12, 0x1350, 2,
	0x602A, 0x1EB6, 2,
	0x6F12, 0x0200, 2,
	0x602A, 0x3770, 2,
	0x6F12, 0x0100, 2,
	0x602A, 0x1EB8, 2,
	0x6F12, 0x0302, 2,
	0x602A, 0x131E, 2,
	0x6F12, 0x0101, 2,
	0x602A, 0x3DEA, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x11A6, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0004, 2,
	0x602A, 0x11AE, 2,
	0x6F12, 0x0003, 2,
	0x602A, 0x13FC, 2,
	0x6F12, 0x0044, 2,
	0x6F12, 0x0044, 2,
	0x6F12, 0x0064, 2,
	0x602A, 0x3302, 2,
	0x6F12, 0x0101, 2,
	0x6F12, 0x0101, 2,
	0x6F12, 0x0101, 2,
	0x602A, 0x27D2, 2,
	0x6F12, 0x0101, 2,
	0x602A, 0x1EC8, 2,
	0x6F12, 0x0503, 2,
	0x6F12, 0x0104, 2,
	0x602A, 0x1ED2, 2,
	0x6F12, 0x0807, 2,
	0x602A, 0x1ED6, 2,
	0x6F12, 0x0207, 2,
	0x602A, 0x123C, 2,
	0x6F12, 0x0009, 2,
	0x602A, 0x21BE, 2,
	0x6F12, 0x04CE, 2,
	0x6F12, 0x41A6, 2,
	0x602A, 0x1EE0, 2,
	0x6F12, 0x006C, 2,
	0x602A, 0x145C, 2,
	0x6F12, 0x0035, 2,
	0x6F12, 0x0035, 2,
	0x6F12, 0x0049, 2,
	0x602A, 0x140E, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0001, 2,
	0x602A, 0x1224, 2,
	0x6F12, 0x014B, 2,
	0x6028, 0x4000, 2,
	0xF466, 0x0FCD, 2,
	0x0328, 0x0100, 2,
	0x0344, 0x0018, 2,
	0x0346, 0x0010, 2,
	0x0348, 0x1997, 2,
	0x034A, 0x133F, 2,
	0x034C, 0x0CC0, 2,
	0x034E, 0x0990, 2,
	0x0350, 0x0000, 2,
	0x0352, 0x0004, 2,
	0x0900, 0x0122, 2,
	0x0380, 0x0002, 2,
	0x0382, 0x0002, 2,
	0x0384, 0x0002, 2,
	0x0386, 0x0002, 2,
	0x0400, 0x1010, 2,
	0x0404, 0x1000, 2,
	0x0402, 0x1010, 2,
	0x0114, 0x0100, 2,
	0x0116, 0x3000, 2,
	0x0110, 0x1002, 2,
	0x011C, 0x0100, 2,
	0x0136, 0x1A00, 2,
	0x0300, 0x0002, 2,
	0x0302, 0x0003, 2,
	0x0304, 0x0004, 2,
	0x0306, 0x0108, 2,
	0x0308, 0x0008, 2,
	0x030A, 0x0002, 2,
	0x030C, 0x0000, 2,
	0x030E, 0x0004, 2,
	0x0310, 0x00E0, 2,
	0x0312, 0x0001, 2,
	0x0340, 0x0ABA, 2,
	0x0342, 0x3638, 2,
	0x0202, 0x0100, 2,
	0x0200, 0x0100, 2,
	0x022C, 0x0100, 2,
	0x0226, 0x0100, 2,
	0x021E, 0x0000, 2,
	0x6028, 0x2000, 2,
	0x602A, 0x3020, 2,
	0x6F12, 0x0000, 2,
	0x6028, 0x4000, 2,
	0x0B00, 0x0180, 2,
	0x0B08, 0x0000, 2,
	0x0D00, 0x0000, 2,
	0x0D02, 0x0000, 2,
	0x0D04, 0x0000, 2,
};

const u32 sensor_gd1_setfile_A_3264x1836_30fps[] = {
	0x6028, 0x4000, 2,
	0x6214, 0xF9F0, 2,
	0x6218, 0xE150, 2,
	0x6242, 0x0E00, 2,
	0x6028, 0x2000, 2,
	0x602A, 0x12F2, 2,
	0x6F12, 0x0D10, 2,
	0x6F12, 0x0A18, 2,
	0x6F12, 0x19B0, 2,
	0x6F12, 0x1350, 2,
	0x602A, 0x1EB6, 2,
	0x6F12, 0x0200, 2,
	0x602A, 0x3770, 2,
	0x6F12, 0x0100, 2,
	0x602A, 0x1EB8, 2,
	0x6F12, 0x0302, 2,
	0x602A, 0x131E, 2,
	0x6F12, 0x0101, 2,
	0x602A, 0x3DEA, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x11A6, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0004, 2,
	0x602A, 0x11AE, 2,
	0x6F12, 0x0003, 2,
	0x602A, 0x13FC, 2,
	0x6F12, 0x0044, 2,
	0x6F12, 0x0044, 2,
	0x6F12, 0x0064, 2,
	0x602A, 0x3302, 2,
	0x6F12, 0x0101, 2,
	0x6F12, 0x0101, 2,
	0x6F12, 0x0101, 2,
	0x602A, 0x27D2, 2,
	0x6F12, 0x0101, 2,
	0x602A, 0x1EC8, 2,
	0x6F12, 0x0503, 2,
	0x6F12, 0x0104, 2,
	0x602A, 0x1ED2, 2,
	0x6F12, 0x0807, 2,
	0x602A, 0x1ED6, 2,
	0x6F12, 0x0207, 2,
	0x602A, 0x123C, 2,
	0x6F12, 0x0009, 2,
	0x602A, 0x21BE, 2,
	0x6F12, 0x04CE, 2,
	0x6F12, 0x41A6, 2,
	0x602A, 0x1EE0, 2,
	0x6F12, 0x006C, 2,
	0x602A, 0x145C, 2,
	0x6F12, 0x0035, 2,
	0x6F12, 0x0035, 2,
	0x6F12, 0x0049, 2,
	0x602A, 0x140E, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0001, 2,
	0x602A, 0x1224, 2,
	0x6F12, 0x014B, 2,
	0x6028, 0x4000, 2,
	0xF466, 0x0FCD, 2,
	0x0328, 0x0100, 2,
	0x0344, 0x0018, 2,
	0x0346, 0x0274, 2,
	0x0348, 0x1997, 2,
	0x034A, 0x10DB, 2,
	0x034C, 0x0CC0, 2,
	0x034E, 0x072C, 2,
	0x0350, 0x0000, 2,
	0x0352, 0x0004, 2,
	0x0900, 0x0122, 2,
	0x0380, 0x0002, 2,
	0x0382, 0x0002, 2,
	0x0384, 0x0002, 2,
	0x0386, 0x0002, 2,
	0x0400, 0x1010, 2,
	0x0404, 0x1000, 2,
	0x0402, 0x1010, 2,
	0x0114, 0x0100, 2,
	0x0116, 0x3000, 2,
	0x0110, 0x1002, 2,
	0x011C, 0x0100, 2,
	0x0136, 0x1A00, 2,
	0x0300, 0x0002, 2,
	0x0302, 0x0003, 2,
	0x0304, 0x0004, 2,
	0x0306, 0x0108, 2,
	0x0308, 0x0008, 2,
	0x030A, 0x0002, 2,
	0x030C, 0x0000, 2,
	0x030E, 0x0004, 2,
	0x0310, 0x00E0, 2,
	0x0312, 0x0001, 2,
	0x0340, 0x0ABA, 2,
	0x0342, 0x3638, 2,
	0x0202, 0x0100, 2,
	0x0200, 0x0100, 2,
	0x022C, 0x0100, 2,
	0x0226, 0x0100, 2,
	0x021E, 0x0000, 2,
	0x6028, 0x2000, 2,
	0x602A, 0x3020, 2,
	0x6F12, 0x0000, 2,
	0x6028, 0x4000, 2,
	0x0B00, 0x0180, 2,
	0x0B08, 0x0000, 2,
	0x0D00, 0x0000, 2,
	0x0D02, 0x0000, 2,
	0x0D04, 0x0000, 2,
};

const u32 sensor_gd1_setfile_A_1632x1224_30fps[] = {
	0x6028, 0x4000, 2,
	0x6214, 0xF9F0, 2,
	0x6218, 0xE150, 2,
	0x6242, 0x0E00, 2,
	0x6028, 0x2000, 2,
	0x602A, 0x12F2, 2,
	0x6F12, 0x0D10, 2,
	0x6F12, 0x0A18, 2,
	0x6F12, 0x19B0, 2,
	0x6F12, 0x1350, 2,
	0x602A, 0x1EB6, 2,
	0x6F12, 0x0206, 2,
	0x602A, 0x3770, 2,
	0x6F12, 0x0100, 2,
	0x602A, 0x1EB8, 2,
	0x6F12, 0x0301, 2,
	0x602A, 0x131E, 2,
	0x6F12, 0x0100, 2,
	0x602A, 0x3DEA, 2,
	0x6F12, 0x0081, 2,
	0x602A, 0x11A6, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0004, 2,
	0x602A, 0x11AE, 2,
	0x6F12, 0x0003, 2,
	0x602A, 0x13FC, 2,
	0x6F12, 0x0044, 2,
	0x6F12, 0x0064, 2,
	0x6F12, 0x0044, 2,
	0x602A, 0x3302, 2,
	0x6F12, 0x0100, 2,
	0x6F12, 0x0100, 2,
	0x6F12, 0x0001, 2,
	0x602A, 0x27D2, 2,
	0x6F12, 0x0203, 2,
	0x602A, 0x1EC8, 2,
	0x6F12, 0x0503, 2,
	0x6F12, 0x0104, 2,
	0x602A, 0x1ED2, 2,
	0x6F12, 0x0807, 2,
	0x602A, 0x1ED6, 2,
	0x6F12, 0x0207, 2,
	0x602A, 0x123C, 2,
	0x6F12, 0x0009, 2,
	0x602A, 0x21BE, 2,
	0x6F12, 0x04D2, 2,
	0x6F12, 0x41A6, 2,
	0x602A, 0x1EE0, 2,
	0x6F12, 0x006C, 2,
	0x602A, 0x145C, 2,
	0x6F12, 0x0035, 2,
	0x6F12, 0x0049, 2,
	0x6F12, 0x0035, 2,
	0x602A, 0x140E, 2,
	0x6F12, 0x0000, 2,
	0x6F12, 0x0001, 2,
	0x6F12, 0x0000, 2,
	0x602A, 0x1224, 2,
	0x6F12, 0x014B, 2,
	0x6028, 0x4000, 2,
	0xF466, 0x0E0D, 2,
	0x0328, 0x0100, 2,
	0x0344, 0x0008, 2,
	0x0346, 0x0010, 2,
	0x0348, 0x19A7, 2,
	0x034A, 0x133F, 2,
	0x034C, 0x0660, 2,
	0x034E, 0x04C8, 2,
	0x0350, 0x0000, 2,
	0x0352, 0x0002, 2,
	0x0900, 0x0112, 2,
	0x0380, 0x0001, 2,
	0x0382, 0x0001, 2,
	0x0384, 0x0002, 2,
	0x0386, 0x0002, 2,
	0x0400, 0x2010, 2,
	0x0404, 0x2000, 2,
	0x0402, 0x1020, 2,
	0x0114, 0x0300, 2,
	0x0116, 0x3000, 2,
	0x0110, 0x1002, 2,
	0x011C, 0x0100, 2,
	0x0136, 0x1A00, 2,
	0x0300, 0x0002, 2,
	0x0302, 0x0003, 2,
	0x0304, 0x0004, 2,
	0x0306, 0x0108, 2,
	0x0308, 0x0008, 2,
	0x030A, 0x0002, 2,
	0x030C, 0x0000, 2,
	0x030E, 0x0004, 2,
	0x0310, 0x010A, 2,
	0x0312, 0x0003, 2,
	0x0340, 0x0ABA, 2,
	0x0342, 0x3638, 2,
	0x0202, 0x0100, 2,
	0x0200, 0x0100, 2,
	0x022C, 0x0100, 2,
	0x0226, 0x0100, 2,
	0x021E, 0x0000, 2,
	0x6028, 0x2000, 2,
	0x602A, 0x3020, 2,
	0x6F12, 0x0000, 2,
	0x6028, 0x4000, 2,
	0x0B00, 0x0180, 2,
	0x0B08, 0x0000, 2,
	0x0D00, 0x0000, 2,
	0x0D02, 0x0000, 2,
	0x0D04, 0x0000, 2,
};

const struct sensor_pll_info_compact sensor_gd1_pllinfo_A_6528x4896_15fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1515000000ULL, /* mipi_datarate */
	1144100000ULL,	/* pclk  = VT pix CLK (this value is different by cis) */
	5556, /* frame_length_lines	(0x0340) */
	13728, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info_compact sensor_gd1_pllinfo_A_3264x2448_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1456000000ULL, /* mipi_datarate */
	1144000000ULL,	/* pclk  = VT pix CLK (this value is different by cis) */
	2746, /* frame_length_lines	(0x0340) */
	13880, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info_compact sensor_gd1_pllinfo_A_3264x1836_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1456000000ULL, /* mipi_datarate */
	1144000000ULL,	/* pclk  = VT pix CLK (this value is different by cis) */
	2746, /* frame_length_lines	(0x0340) */
	13880, /* line_length_pck	(0x0342) */
};

const struct sensor_pll_info_compact sensor_gd1_pllinfo_A_1632x1224_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	432000000ULL, /* mipi_datarate */
	1144000000ULL,	/* pclk  = VT pix CLK (this value is different by cis) */
	2746, /* frame_length_lines	(0x0340) */
	13880, /* line_length_pck	(0x0342) */
};

static const u32 *sensor_gd1_setfiles_A[] = {
	sensor_gd1_setfile_A_6528x4896_15fps,
	sensor_gd1_setfile_A_3264x2448_30fps,
	sensor_gd1_setfile_A_3264x1836_30fps,
	sensor_gd1_setfile_A_1632x1224_30fps,
};

static const u32 sensor_gd1_setfile_A_sizes[] = {
	ARRAY_SIZE(sensor_gd1_setfile_A_6528x4896_15fps),
	ARRAY_SIZE(sensor_gd1_setfile_A_3264x2448_30fps),
	ARRAY_SIZE(sensor_gd1_setfile_A_3264x1836_30fps),
	ARRAY_SIZE(sensor_gd1_setfile_A_1632x1224_30fps),
};

static const struct sensor_pll_info_compact *sensor_gd1_pllinfos_A[] = {
	&sensor_gd1_pllinfo_A_6528x4896_15fps,
	&sensor_gd1_pllinfo_A_3264x2448_30fps,
	&sensor_gd1_pllinfo_A_3264x1836_30fps,
	&sensor_gd1_pllinfo_A_1632x1224_30fps,
};
#endif

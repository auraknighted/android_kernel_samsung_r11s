/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_2T7SX_SET_B_H
#define IS_CIS_2T7SX_SET_B_H

#include "is-cis.h"
#include "is-cis-2t7sx.h"

const u32 sensor_2t7sx_setfile_B_Global[] = {
	0x6028, 0x4000, 0x02,
	0x6010, 0x0001, 0x02,
	I2C_MODE_DELAY, 0x3000, 0x00,
	0x6214, 0x7970, 0x02,
	0x6218, 0x7150, 0x02,

	0x6028, 0x2000, 0x02,
	0x602A, 0x3FE4, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0449, 0x02,
	0x6F12, 0x0348, 0x02,
	0x6F12, 0x044A, 0x02,
	0x6F12, 0x4860, 0x02,
	0x6F12, 0x101A, 0x02,
	0x6F12, 0x0881, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x2BB9, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x43CE, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x2120, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x9C00, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x2DE9, 0x02,
	0x6F12, 0xF041, 0x02,
	0x6F12, 0xA648, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x0068, 0x02,
	0x6F12, 0x85B2, 0x02,
	0x6F12, 0x040C, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x2046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x69F9, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x6CF9, 0x02,
	0x6F12, 0xA14E, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xA149, 0x02,
	0x6F12, 0x1036, 0x02,
	0x6F12, 0x01EB, 0x02,
	0x6F12, 0x8203, 0x02,
	0x6F12, 0x02F0, 0x02,
	0x6F12, 0x0307, 0x02,
	0x6F12, 0x03F5, 0x02,
	0x6F12, 0xD960, 0x02,
	0x6F12, 0xD3F8, 0x02,
	0x6F12, 0xC836, 0x02,
	0x6F12, 0x36F8, 0x02,
	0x6F12, 0x1770, 0x02,
	0x6F12, 0x521C, 0x02,
	0x6F12, 0x7B43, 0x02,
	0x6F12, 0x03F5, 0x02,
	0x6F12, 0x0063, 0x02,
	0x6F12, 0x1B0B, 0x02,
	0x6F12, 0x0360, 0x02,
	0x6F12, 0x082A, 0x02,
	0x6F12, 0xEDD3, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x2046, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0xF041, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x4AB9, 0x02,
	0x6F12, 0x10B5, 0x02,
	0x6F12, 0x4FF4, 0x02,
	0x6F12, 0x8041, 0x02,
	0x6F12, 0x0F20, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x4EF9, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0x1040, 0x02,
	0x6F12, 0x0121, 0x02,
	0x6F12, 0x4FF2, 0x02,
	0x6F12, 0xA040, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x3CB9, 0x02,
	0x6F12, 0x10B5, 0x02,
	0x6F12, 0x0446, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x47F9, 0x02,
	0x6F12, 0x8A49, 0x02,
	0x6F12, 0x91F8, 0x02,
	0x6F12, 0x4423, 0x02,
	0x6F12, 0x012A, 0x02,
	0x6F12, 0x05D1, 0x02,
	0x6F12, 0x94F8, 0x02,
	0x6F12, 0xA500, 0x02,
	0x6F12, 0x10B1, 0x02,
	0x6F12, 0x874A, 0x02,
	0x6F12, 0x0120, 0x02,
	0x6F12, 0x1080, 0x02,
	0x6F12, 0x8448, 0x02,
	0x6F12, 0x91F8, 0x02,
	0x6F12, 0xBE11, 0x02,
	0x6F12, 0x1030, 0x02,
	0x6F12, 0x007A, 0x02,
	0x6F12, 0x4000, 0x02,
	0x6F12, 0x40EA, 0x02,
	0x6F12, 0x4120, 0x02,
	0x6F12, 0x8349, 0x02,
	0x6F12, 0x0880, 0x02,
	0x6F12, 0x8349, 0x02,
	0x6F12, 0x40F2, 0x02,
	0x6F12, 0x5510, 0x02,
	0x6F12, 0x8880, 0x02,
	0x6F12, 0x43F6, 0x02,
	0x6F12, 0xFF73, 0x02,
	0x6F12, 0x0422, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0x5F01, 0x02,
	0x6F12, 0x0F20, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x2BF9, 0x02,
	0x6F12, 0x7A48, 0x02,
	0x6F12, 0xB0F8, 0x02,
	0x6F12, 0xE214, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0x1040, 0x02,
	0x6F12, 0x4FF2, 0x02,
	0x6F12, 0x1400, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x27B9, 0x02,
	0x6F12, 0x7948, 0x02,
	0x6F12, 0x90F8, 0x02,
	0x6F12, 0x7610, 0x02,
	0x6F12, 0x7948, 0x02,
	0x6F12, 0x0229, 0x02,
	0x6F12, 0x04D1, 0x02,
	0x6F12, 0x90F8, 0x02,
	0x6F12, 0x9C10, 0x02,
	0x6F12, 0x09B1, 0x02,
	0x6F12, 0x0120, 0x02,
	0x6F12, 0x7047, 0x02,
	0x6F12, 0x0168, 0x02,
	0x6F12, 0xC0F8, 0x02,
	0x6F12, 0xD410, 0x02,
	0x6F12, 0x0020, 0x02,
	0x6F12, 0x7047, 0x02,
	0x6F12, 0x70B5, 0x02,
	0x6F12, 0x0446, 0x02,
	0x6F12, 0x6B48, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x4168, 0x02,
	0x6F12, 0x0D0C, 0x02,
	0x6F12, 0x8EB2, 0x02,
	0x6F12, 0x3146, 0x02,
	0x6F12, 0x2846, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0xF3F8, 0x02,
	0x6F12, 0x6007, 0x02,
	0x6F12, 0x05D5, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x1146, 0x02,
	0x6F12, 0x4FF2, 0x02,
	0x6F12, 0xA040, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0xEBF8, 0x02,
	0x6F12, 0x2046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x06F9, 0x02,
	0x6F12, 0x3146, 0x02,
	0x6F12, 0x2846, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0x7040, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0xE1B8, 0x02,
	0x6F12, 0x70B5, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x01F9, 0x02,
	0x6F12, 0xE0B3, 0x02,
	0x6F12, 0x49F2, 0x02,
	0x6F12, 0x3430, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x01F9, 0x02,
	0x6F12, 0x6149, 0x02,
	0x6F12, 0x0A88, 0x02,
	0x6F12, 0x614D, 0x02,
	0x6F12, 0xB0FB, 0x02,
	0x6F12, 0xF2F0, 0x02,
	0x6F12, 0xB5F8, 0x02,
	0x6F12, 0x4A10, 0x02,
	0x6F12, 0x401A, 0x02,
	0x6F12, 0x0021, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0xFBF8, 0x02,
	0x6F12, 0x5D4C, 0x02,
	0x6F12, 0x5A4E, 0x02,
	0x6F12, 0x00B2, 0x02,
	0x6F12, 0xA081, 0x02,
	0x6F12, 0xF17A, 0x02,
	0x6F12, 0x11F0, 0x02,
	0x6F12, 0x060F, 0x02,
	0x6F12, 0x0DD0, 0x02,
	0x6F12, 0x0020, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0xF5F8, 0x02,
	0x6F12, 0xF07A, 0x02,
	0x6F12, 0x5C35, 0x02,
	0x6F12, 0xC0F3, 0x02,
	0x6F12, 0x4003, 0x02,
	0x6F12, 0x6A78, 0x02,
	0x6F12, 0x2978, 0x02,
	0x6F12, 0xB4F9, 0x02,
	0x6F12, 0x0C00, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0xF0F8, 0x02,
	0x6F12, 0x07E0, 0x02,
	0x6F12, 0x4949, 0x02,
	0x6F12, 0x1031, 0x02,
	0x6F12, 0x4A89, 0x02,
	0x6F12, 0x8989, 0x02,
	0x6F12, 0x5043, 0x02,
	0x6F12, 0x01EB, 0x02,
	0x6F12, 0x2030, 0x02,
	0x6F12, 0xA081, 0x02,
	0x6F12, 0xB4F9, 0x02,
	0x6F12, 0x0800, 0x02,
	0x6F12, 0x0028, 0x02,
	0x6F12, 0x0AD0, 0x02,
	0x6F12, 0xB4F9, 0x02,
	0x6F12, 0x0C20, 0x02,
	0x6F12, 0x6168, 0x02,
	0x6F12, 0xC1EB, 0x02,
	0x6F12, 0x0221, 0x02,
	0x6F12, 0xB4F9, 0x02,
	0x6F12, 0x0A20, 0x02,
	0x6F12, 0x5143, 0x02,
	0x6F12, 0x91FB, 0x02,
	0x6F12, 0xF0F0, 0x02,
	0x6F12, 0x2080, 0x02,
	0x6F12, 0x70BD, 0x02,
	0x6F12, 0xFFE7, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0x7040, 0x02,
	0x6F12, 0x0021, 0x02,
	0x6F12, 0x3820, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0xD5B8, 0x02,
	0x6F12, 0x2DE9, 0x02,
	0x6F12, 0xF041, 0x02,
	0x6F12, 0x3948, 0x02,
	0x6F12, 0x1E46, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xC068, 0x02,
	0x6F12, 0x85B2, 0x02,
	0x6F12, 0x040C, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x2046, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x8DF8, 0x02,
	0x6F12, 0x3E4A, 0x02,
	0x6F12, 0x3346, 0x02,
	0x6F12, 0xA2F5, 0x02,
	0x6F12, 0x0C71, 0x02,
	0x6F12, 0x01F5, 0x02,
	0x6F12, 0x6B70, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0xC6F8, 0x02,
	0x6F12, 0x3148, 0x02,
	0x6F12, 0x2F4E, 0x02,
	0x6F12, 0x90F8, 0x02,
	0x6F12, 0x3D03, 0x02,
	0x6F12, 0x1036, 0x02,
	0x6F12, 0x0428, 0x02,
	0x6F12, 0x02D0, 0x02,
	0x6F12, 0x3749, 0x02,
	0x6F12, 0x708D, 0x02,
	0x6F12, 0x8881, 0x02,
	0x6F12, 0x2C48, 0x02,
	0x6F12, 0xF189, 0x02,
	0x6F12, 0xB0F8, 0x02,
	0x6F12, 0x0806, 0x02,
	0x6F12, 0xC008, 0x02,
	0x6F12, 0x8142, 0x02,
	0x6F12, 0x01D3, 0x02,
	0x6F12, 0x0020, 0x02,
	0x6F12, 0x03E0, 0x02,
	0x6F12, 0x318A, 0x02,
	0x6F12, 0x8142, 0x02,
	0x6F12, 0x01D8, 0x02,
	0x6F12, 0x0220, 0x02,
	0x6F12, 0xB085, 0x02,
	0x6F12, 0xB08D, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x1227, 0x02,
	0x6F12, 0x8119, 0x02,
	0x6F12, 0x08E0, 0x02,
	0x6F12, 0x07EB, 0x02,
	0x6F12, 0x4000, 0x02,
	0x6F12, 0x03F1, 0x02,
	0x6F12, 0x8043, 0x02,
	0x6F12, 0x085A, 0x02,
	0x6F12, 0x1880, 0x02,
	0x6F12, 0x521C, 0x02,
	0x6F12, 0x042A, 0x02,
	0x6F12, 0x06D2, 0x02,
	0x6F12, 0x02EB, 0x02,
	0x6F12, 0x4200, 0x02,
	0x6F12, 0x06EB, 0x02,
	0x6F12, 0x4003, 0x02,
	0x6F12, 0xDB8A, 0x02,
	0x6F12, 0x002B, 0x02,
	0x6F12, 0xEFD1, 0x02,
	0x6F12, 0x2946, 0x02,
	0x6F12, 0x2046, 0x02,
	0x6F12, 0xBDE8, 0x02,
	0x6F12, 0xF041, 0x02,
	0x6F12, 0x0122, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x51B8, 0x02,
	0x6F12, 0x10B5, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0x4B21, 0x02,
	0x6F12, 0x2048, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x90F8, 0x02,
	0x6F12, 0x124C, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0xE711, 0x02,
	0x6F12, 0x2060, 0x02,
	0x6F12, 0x1D48, 0x02,
	0x6F12, 0x8164, 0x02,
	0x6F12, 0x0021, 0x02,
	0x6F12, 0x4163, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0x9B11, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0x0163, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0x8311, 0x02,
	0x6F12, 0x1948, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x7FF8, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0x5511, 0x02,
	0x6F12, 0x6060, 0x02,
	0x6F12, 0x1748, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x78F8, 0x02,
	0x6F12, 0x0022, 0x02,
	0x6F12, 0xAFF2, 0x02,
	0x6F12, 0xD101, 0x02,
	0x6F12, 0xA060, 0x02,
	0x6F12, 0x1448, 0x02,
	0x6F12, 0x00F0, 0x02,
	0x6F12, 0x71F8, 0x02,
	0x6F12, 0x1449, 0x02,
	0x6F12, 0xE060, 0x02,
	0x6F12, 0x4FF6, 0x02,
	0x6F12, 0xA330, 0x02,
	0x6F12, 0x0968, 0x02,
	0x6F12, 0x4883, 0x02,
	0x6F12, 0x10BD, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x4390, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x2240, 0x02,
	0x6F12, 0x4000, 0x02,
	0x6F12, 0xF410, 0x02,
	0x6F12, 0x4000, 0x02,
	0x6F12, 0xF192, 0x02,
	0x6F12, 0x4000, 0x02,
	0x6F12, 0x9000, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x0900, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x2120, 0x02,
	0x6F12, 0x4000, 0x02,
	0x6F12, 0x9338, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x1880, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x3280, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x25E8, 0x02,
	0x6F12, 0x4000, 0x02,
	0x6F12, 0xB000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x303B, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x08B0, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x4F0B, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x9D6F, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x57FD, 0x02,
	0x6F12, 0x2000, 0x02,
	0x6F12, 0x0510, 0x02,
	0x6F12, 0x40F6, 0x02,
	0x6F12, 0xAF2C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x43F2, 0x02,
	0x6F12, 0x3B0C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x40F2, 0x02,
	0x6F12, 0x3B4C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x45F6, 0x02,
	0x6F12, 0x8D7C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x40F2, 0x02,
	0x6F12, 0xA54C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x40F6, 0x02,
	0x6F12, 0xD12C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x44F6, 0x02,
	0x6F12, 0x0B7C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x40F2, 0x02,
	0x6F12, 0x0F7C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x40F6, 0x02,
	0x6F12, 0xC32C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x40F6, 0x02,
	0x6F12, 0x0D2C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x45F6, 0x02,
	0x6F12, 0x5D3C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x41F2, 0x02,
	0x6F12, 0x370C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x40F2, 0x02,
	0x6F12, 0x9F3C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x45F2, 0x02,
	0x6F12, 0xFD7C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x40F2, 0x02,
	0x6F12, 0xE51C, 0x02,
	0x6F12, 0xC0F2, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x6047, 0x02,
	0x6F12, 0x0000, 0x02,

	0x6028, 0x2000, 0x02,
	0x602A, 0x130C, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x13BA, 0x02,
	0x6F12, 0x0C48, 0x02,
	0x602A, 0x1390, 0x02,
	0x6F12, 0x0015, 0x02,
	0x602A, 0x139E, 0x02,
	0x6F12, 0x0050, 0x02,
	0x602A, 0x139C, 0x02,
	0x6F12, 0x02AF, 0x02,
	0x602A, 0x139A, 0x02,
	0x6F12, 0x7086, 0x02,
	0x602A, 0x13A2, 0x02,
	0x6F12, 0x0430, 0x02,
	0x602A, 0x13BC, 0x02,
	0x6F12, 0x0114, 0x02,
	0x602A, 0x12AA, 0x02,
	0x6F12, 0x0300, 0x02,
	0x6F12, 0x0307, 0x02,
	0x602A, 0x0A18, 0x02,
	0x6F12, 0x0440, 0x02,
	0x602A, 0x0A28, 0x02,
	0x6F12, 0x0007, 0x02,
	0x602A, 0x0A58, 0x02,
	0x6F12, 0x0008, 0x02,
	0x602A, 0x0A78, 0x02,
	0x6F12, 0x00E8, 0x02,
	0x602A, 0x0A80, 0x02,
	0x6F12, 0x0114, 0x02,
	0x602A, 0x0A88, 0x02,
	0x6F12, 0x00E6, 0x02,
	0x602A, 0x0A90, 0x02,
	0x6F12, 0x0116, 0x02,
	0x602A, 0x0A98, 0x02,
	0x6F12, 0x011D, 0x02,
	0x602A, 0x0AA0, 0x02,
	0x6F12, 0x00F7, 0x02,
	0x602A, 0x0AB8, 0x02,
	0x6F12, 0x0116, 0x02,
	0x602A, 0x0AC0, 0x02,
	0x6F12, 0x00FE, 0x02,
	0x602A, 0x0AF0, 0x02,
	0x6F12, 0x00E5, 0x02,
	0x602A, 0x0AF8, 0x02,
	0x6F12, 0x02B5, 0x02,
	0x602A, 0x0B00, 0x02,
	0x6F12, 0x00E8, 0x02,
	0x602A, 0x0B08, 0x02,
	0x6F12, 0x02B3, 0x02,
	0x602A, 0x0B20, 0x02,
	0x6F12, 0x00E5, 0x02,
	0x602A, 0x0B28, 0x02,
	0x6F12, 0x0126, 0x02,
	0x602A, 0x0B80, 0x02,
	0x6F12, 0x00E5, 0x02,
	0x602A, 0x0B88, 0x02,
	0x6F12, 0x0011, 0x02,
	0x602A, 0x0B90, 0x02,
	0x6F12, 0x0015, 0x02,
	0x602A, 0x0B98, 0x02,
	0x6F12, 0x0114, 0x02,
	0x602A, 0x0BA0, 0x02,
	0x6F12, 0x012A, 0x02,
	0x602A, 0x0BB8, 0x02,
	0x6F12, 0x0114, 0x02,
	0x602A, 0x0BC0, 0x02,
	0x6F12, 0x0118, 0x02,
	0x602A, 0x0BF0, 0x02,
	0x6F12, 0x02B1, 0x02,
	0x602A, 0x0C80, 0x02,
	0x6F12, 0x00E5, 0x02,
	0x602A, 0x0C88, 0x02,
	0x6F12, 0x0184, 0x02,
	0x602A, 0x0C90, 0x02,
	0x6F12, 0x02B1, 0x02,
	0x602A, 0x0C98, 0x02,
	0x6F12, 0x00ED, 0x02,
	0x602A, 0x0CA0, 0x02,
	0x6F12, 0x0104, 0x02,
	0x602A, 0x0CA8, 0x02,
	0x6F12, 0x00F4, 0x02,
	0x602A, 0x0CB0, 0x02,
	0x6F12, 0x010C, 0x02,
	0x602A, 0x0CB8, 0x02,
	0x6F12, 0x00FC, 0x02,
	0x602A, 0x0CC0, 0x02,
	0x6F12, 0x010C, 0x02,
	0x602A, 0x0CC8, 0x02,
	0x6F12, 0x00ED, 0x02,
	0x602A, 0x0CD0, 0x02,
	0x6F12, 0x00EF, 0x02,
	0x602A, 0x0CE8, 0x02,
	0x6F12, 0x00F4, 0x02,
	0x602A, 0x0CF0, 0x02,
	0x6F12, 0x010C, 0x02,
	0x602A, 0x0D08, 0x02,
	0x6F12, 0x00ED, 0x02,
	0x602A, 0x0D10, 0x02,
	0x6F12, 0x00EF, 0x02,
	0x602A, 0x0D20, 0x02,
	0x6F12, 0x00E7, 0x02,
	0x602A, 0x0D28, 0x02,
	0x6F12, 0x0182, 0x02,
	0x602A, 0x0D30, 0x02,
	0x6F12, 0x02B3, 0x02,
	0x602A, 0x0D58, 0x02,
	0x6F12, 0x00ED, 0x02,
	0x602A, 0x0D60, 0x02,
	0x6F12, 0x0107, 0x02,
	0x602A, 0x0D78, 0x02,
	0x6F12, 0x00ED, 0x02,
	0x602A, 0x0D80, 0x02,
	0x6F12, 0x00EF, 0x02,
	0x602A, 0x0DA0, 0x02,
	0x6F12, 0x02B7, 0x02,
	0x602A, 0x0DB8, 0x02,
	0x6F12, 0x00E7, 0x02,
	0x602A, 0x0DC0, 0x02,
	0x6F12, 0x00EA, 0x02,
	0x602A, 0x0DC8, 0x02,
	0x6F12, 0x02B3, 0x02,
	0x602A, 0x0DD0, 0x02,
	0x6F12, 0x02B6, 0x02,
	0x602A, 0x0DD8, 0x02,
	0x6F12, 0x00E7, 0x02,
	0x602A, 0x0DE8, 0x02,
	0x6F12, 0x00F1, 0x02,
	0x602A, 0x0DF0, 0x02,
	0x6F12, 0x0012, 0x02,
	0x602A, 0x0F00, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x09BE, 0x02,
	0x6F12, 0x0080, 0x02,
	0x602A, 0x1382, 0x02,
	0x6F12, 0x3CFC, 0x02,
	0x602A, 0x1E80, 0x02,
	0x6F12, 0x0100, 0x02,
	0x6F12, 0x003F, 0x02,
	0x6F12, 0x003F, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0006, 0x02,
	0x6F12, 0xF48E, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0x0006, 0x02,
	0x6F12, 0xF490, 0x02,
	0x6F12, 0x0005, 0x02,
	0x6F12, 0x0004, 0x02,
	0x6F12, 0xF488, 0x02,
	0x602A, 0x43AE, 0x02,
	0x6F12, 0x0170, 0x02,
	0x6F12, 0x017F, 0x02,
	0x6F12, 0x00E7, 0x02,
	0x6F12, 0x02B2, 0x02,
	0x6F12, 0xF5E8, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x0220, 0x0000, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x0990, 0x02,
	0x6F12, 0x0001, 0x02,
	0x602A, 0x1C7E, 0x02,
	0x6F12, 0x001A, 0x02,
	0x0B04, 0x0101, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x1E5C, 0x02,
	0x6F12, 0x0100, 0x02,
	0x302A, 0x0CA0, 0x02,
	0x300E, 0x0100, 0x02,
	0x0138, 0x0100, 0x02,
	0x6028, 0x2000, 0x02,
	0x602A, 0x18DE, 0x02,
	0x6F12, 0x0F28, 0x02,
	0x602A, 0x1952, 0x02,
	0x6F12, 0x000A, 0x02,
	0x602A, 0x43A0, 0x02,
	0x6F12, 0x1000, 0x02,
	0x6F12, 0x1000, 0x02,
	0x6F12, 0x1000, 0x02,
	0x6F12, 0x1000, 0x02,
	0x6F12, 0x0410, 0x02,
	0x6F12, 0x1000, 0x02,
	0x6F12, 0x0000, 0x02,
	0x602A, 0x18DA, 0x02,
	0x6F12, 0x2850, 0x02,
	0x602A, 0x1A74, 0x02,
	0x6F12, 0x0100, 0x02,
};

/*
 * [Mode Information]
 *	0: [MCLK:26,Width:5184,Height:3880,Format:MIPI_RAW10,mipi_lane:4,mipi_datarate:1500,pvi_pclk_inverse:0]
 */

const u32 sensor_2t7sx_setfile_B_5184x3880_30fps[] = {
	0x6028, 0x2000, 0x02,
	0x0344, 0x0008, 0x02,
	0x0346, 0x0008, 0x02,
	0x0348, 0x1447, 0x02,
	0x034A, 0x0F2F, 0x02,
	0x034C, 0x1440, 0x02,
	0x034E, 0x0F28, 0x02,
	0x0408, 0x0000, 0x02,
	0x040A, 0x0000, 0x02,
	0x0900, 0x0011, 0x02,
	0x0380, 0x0001, 0x02,
	0x0382, 0x0001, 0x02,
	0x0384, 0x0001, 0x02,
	0x0386, 0x0001, 0x02,
	0x0400, 0x0000, 0x02,
	0x0404, 0x0010, 0x02,
	0x301E, 0x0110, 0x02,
	0x0110, 0x0002, 0x02,
	0x0114, 0x0300, 0x02,
	0x0136, 0x1A00, 0x02,
	0x0300, 0x0005, 0x02,
	0x0302, 0x0001, 0x02,
	0x0304, 0x0006, 0x02,
	0x0306, 0x00C3, 0x02,
	0x0308, 0x0008, 0x02,
	0x030A, 0x0001, 0x02,
	0x030C, 0x0004, 0x02,
	0x030E, 0x0082, 0x02,
	0x0310, 0x0100, 0x02,
	0x0312, 0x0000, 0x02,
	0x0340, 0x0FA8, 0x02,
	0x0342, 0x1608, 0x02,
	0x602A, 0x1C78, 0x02,
	0x6F12, 0x8100, 0x02,
	0x602A, 0x43CA, 0x02,
	0x6F12, 0x0020, 0x02,
	0x602A, 0x13E4, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x0012, 0x02,
	0x6F12, 0x0012, 0x02,
	0x6F12, 0x0012, 0x02,
	0x6F12, 0x0012, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x000C, 0x02,
	0x6F12, 0x0012, 0x02,
	0x6F12, 0x0012, 0x02,
	0x6F12, 0x0012, 0x02,
	0x6F12, 0x0012, 0x02,
	0x6226, 0x0001, 0x02,
	0x9400, 0x0001, 0x02,
	0x9402, 0x0028, 0x02,
	0x9404, 0x000A, 0x02,
	0x9406, 0x0000, 0x02,
	0x9408, 0x0000, 0x02,
	0x940A, 0x0000, 0x02,
	0x940C, 0x0000, 0x02,
	0x940E, 0x1400, 0x02,
	0x9410, 0x0780, 0x02,
	0x9412, 0x0000, 0x02,
	0x9414, 0x0000, 0x02,
	0x9416, 0x0000, 0x02,
	0x9418, 0x0001, 0x02,
	0x941A, 0x0082, 0x02,
	0x941C, 0x0186, 0x02,
	0x941E, 0x0082, 0x02,
	0x9420, 0x0186, 0x02,
	0x9422, 0x0141, 0x02,
	0x9424, 0x0141, 0x02,
	0x9426, 0x0141, 0x02,
	0x9428, 0x0141, 0x02,
	0x942A, 0x0008, 0x02,
	0x942C, 0x0008, 0x02,
	0x942E, 0x0004, 0x02,
	0x9430, 0x0004, 0x02,
	0x9432, 0x5500, 0x02,
	0x9434, 0x5500, 0x02,
	0x6226, 0x0000, 0x02,
	0x602A, 0x1E76, 0x02,
	0x6F12, 0x0100, 0x02,
	0x6F12, 0x0000, 0x02,
};

const struct sensor_pll_info_compact sensor_2t7sx_pllinfo_B_5184x3880_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	1690000000ULL, /* mipi_datarate */
	676000000ULL,	/* pclk  = VT pix CLK (this value is different by cis) */
	0x0FA8, /* frame_length_lines	(0x0340) */
	0x1608, /* line_length_pck	(0x0342) */
};

static const u32 *sensor_2t7sx_setfiles_B[] = {
	sensor_2t7sx_setfile_B_5184x3880_30fps,
};

static const u32 sensor_2t7sx_setfile_B_sizes[] = {
	ARRAY_SIZE(sensor_2t7sx_setfile_B_5184x3880_30fps),
};

static const struct sensor_pll_info_compact *sensor_2t7sx_pllinfos_B[] = {
	&sensor_2t7sx_pllinfo_B_5184x3880_30fps,
};
#endif

/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2011 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_5E3_SET_A_H
#define IS_CIS_5E3_SET_A_H

#include "is-cis.h"
#include "is-cis-5e3.h"

const u32 sensor_5e3_setfile_A_Global[] = {
	/* Analog Global Setting */
	0x3000,	0x04, 0x1,
	0x3002,	0x03, 0x1,
	0x3003,	0x04, 0x1,
	0x3004,	0x05, 0x1,
	0x3005,	0x00, 0x1,
	0x3006,	0x10, 0x1,
	0x3007,	0x0A, 0x1,
	0x3008,	0x55, 0x1,
	0x3039,	0x00, 0x1,
	0x303A,	0x00, 0x1,
	0x303B,	0x00, 0x1,
	0x3009,	0x05, 0x1,
	0x300A,	0x55, 0x1,
	0x300B,	0x38, 0x1,
	0x300C,	0x10, 0x1,
	0x3012,	0x14, 0x1,
	0x3013,	0x00, 0x1,
	0x3014,	0x22, 0x1,
	0x300E,	0x79, 0x1,
	0x3010,	0x68, 0x1,
	0x3019,	0x03, 0x1,
	0x301A,	0x00, 0x1,
	0x301B,	0x06, 0x1,
	0x301C,	0x00, 0x1,
	0x301D,	0x22, 0x1,
	0x301E,	0x00, 0x1,
	0x301F,	0x10, 0x1,
	0x3020,	0x00, 0x1,
	0x3021,	0x00, 0x1,
	0x3022,	0x0A, 0x1,
	0x3023,	0x1E, 0x1,
	0x3024,	0x00, 0x1,
	0x3025,	0x00, 0x1,
	0x3026,	0x00, 0x1,
	0x3027,	0x00, 0x1,
	0x3028,	0x1A, 0x1,
	0x3015,	0x00, 0x1,
	0x3016,	0x84, 0x1,
	0x3017,	0x00, 0x1,
	0x3018,	0xA0, 0x1,
	0x302B,	0x10, 0x1,
	0x302C,	0x0A, 0x1,
	0x302D,	0x06, 0x1,
	0x302E,	0x05, 0x1,
	0x302F,	0x0E, 0x1,
	0x3030,	0x2F, 0x1,
	0x3031,	0x08, 0x1,
	0x3032,	0x05, 0x1,
	0x3033,	0x09, 0x1,
	0x3034,	0x05, 0x1,
	0x3035,	0x00, 0x1,
	0x3036,	0x00, 0x1,
	0x3037,	0x00, 0x1,
	0x3038,	0x00, 0x1,
	0x3088,	0x06, 0x1,
	0x308A,	0x08, 0x1,
	0x308C,	0x05, 0x1,
	0x308E,	0x07, 0x1,
	0x3090,	0x06, 0x1,
	0x3092,	0x08, 0x1,
	0x3094,	0x05, 0x1,
	0x3096,	0x21, 0x1,
	0x3055,	0x9E, 0x1,
	0x3099,	0x06, 0x1,
	0x3070,	0x10, 0x1,
	0x3085,	0x31, 0x1,
	0x3086,	0x01, 0x1,
	0x3064,	0x00, 0x1,
	0x3062,	0x08, 0x1,
	0x3061,	0x15, 0x1,
	0x307B,	0x20, 0x1,
	0x3068,	0x01, 0x1,
	0x3074,	0x00, 0x1,
	0x307D,	0x05, 0x1,
	0x3045,	0x01, 0x1,
	0x3046,	0x05, 0x1,
	0x3047,	0x78, 0x1,
	0x307F,	0xB1, 0x1,
	0x3098,	0x01, 0x1,
	0x305C,	0xF6, 0x1,
	0x3063,	0x2F, 0x1,
	0x3400,	0x01, 0x1,
	0x3235,	0x49, 0x1,
	0x3233,	0x00, 0x1,
	0x3234,	0x00, 0x1,
	0x3300,	0x0C, 0x1,
	0x3203,	0x45, 0x1,
	0x3205,	0x4D, 0x1,
	0x320B,	0x40, 0x1,
	0x320C,	0x06, 0x1,
	0x320D,	0xC0, 0x1,
	0x3244,	0x00, 0x1,
	0x3245,	0x00, 0x1,
	0x3246,	0x01, 0x1,
	0x3247,	0x00, 0x1,
	0x3268,	0x88, 0x1,
	0x3269,	0x01, 0x1,
};

/* 16x10 margin, EXTCLK 24.37Mhz */
const u32 sensor_5e3_setfile_A_2576x1932_30fps[] = {
	0x0136, 0x18, 0x1,
	0x0137, 0x5E, 0x1,
	0x0305, 0x08, 0x1,
	0x0306, 0x01, 0x1,
	0x0307, 0x26, 0x1,
	0x3C1F, 0x00, 0x1,
	0x0820, 0x03, 0x1,
	0x0821, 0x80, 0x1,
	0x3C1C, 0x58, 0x1,
	0x0114, 0x01, 0x1,
	0x0340, 0x07, 0x1,
	0x0341, 0xE9, 0x1,
	0x0342, 0x0B, 0x1,
	0x0343, 0x86, 0x1,
	0x0344, 0x00, 0x1,
	0x0345, 0x00, 0x1,
	0x0346, 0x00, 0x1,
	0x0347, 0x02, 0x1,
	0x0348, 0x0A, 0x1,
	0x0349, 0x0F, 0x1,
	0x034A, 0x07, 0x1,
	0x034B, 0x8D, 0x1,
	0x034C, 0x0A, 0x1,
	0x034D, 0x10, 0x1,
	0x034E, 0x07, 0x1,
	0x034F, 0x8C, 0x1,
	0x0900, 0x00, 0x1,
	0x0901, 0x00, 0x1,
	0x0383, 0x01, 0x1,
	0x0387, 0x01, 0x1,
	0x0204, 0x00, 0x1,
	0x0205, 0x20, 0x1,
	0x0202, 0x02, 0x1,
	0x0203, 0x00, 0x1,
	0x0200, 0x04, 0x1,
	0x0201, 0x98, 0x1,
	0x3941, 0x05, 0x1,
	0x3942, 0xB6, 0x1,
	0x3924, 0x39, 0x1,
	0x3925, 0x1E, 0x1,
	0x3C31, 0x6D, 0x1,
	0x3C32, 0xB0, 0x1,
	0x3C08, 0x72, 0x1,
	0x3C09, 0x3C, 0x1,
	0x3320, 0x02, 0x1,
};

/* 16x10 margin, EXTCLK 24.37Mhz */
const u32 sensor_5e3_setfile_A_1280x960_30fps[] = {
	0x0136,	0x18, 0x1,
	0x0137,	0x5E, 0x1,
	0x0305,	0x08, 0x1,
	0x0306,	0x01, 0x1,
	0x0307,	0x26, 0x1,
	0x3C1F,	0x00, 0x1,
	0x0820,	0x03, 0x1,
	0x0821,	0x80, 0x1,
	0x3C1C,	0x58, 0x1,
	0x0114,	0x01, 0x1,
	0x0340,	0x07, 0x1,
	0x0341,	0xE9, 0x1,
	0x0342,	0x0B, 0x1,
	0x0343,	0x86, 0x1,
	0x0344,	0x00, 0x1,
	0x0345,	0x08, 0x1,
	0x0346,	0x00, 0x1,
	0x0347,	0x08, 0x1,
	0x0348,	0x0A, 0x1,
	0x0349,	0x07, 0x1,
	0x034A,	0x07, 0x1,
	0x034B,	0x87, 0x1,
	0x034C,	0x05, 0x1,
	0x034D,	0x00, 0x1,
	0x034E,	0x03, 0x1,
	0x034F,	0xC0, 0x1,
	0x0900,	0x01, 0x1,
	0x0901,	0x22, 0x1,
	0x0383,	0x01, 0x1,
	0x0387,	0x03, 0x1,
	0x0204,	0x00, 0x1,
	0x0205,	0x20, 0x1,
	0x0202,	0x02, 0x1,
	0x0203,	0x00, 0x1,
	0x0200,	0x04, 0x1,
	0x0201,	0x98, 0x1,
	0x3941,	0x05, 0x1,
	0x3942,	0xB6, 0x1,
	0x3924,	0x39, 0x1,
	0x3925,	0x1E, 0x1,
	0x3C31,	0x6D, 0x1,
	0x3C32,	0xB0, 0x1,
	0x3C08,	0x72, 0x1,
	0x3C09,	0x3C, 0x1,
	0x3320,	0x02, 0x1,
};

/* 16x10 margin, EXTCLK 24.37Mhz */
const u32 sensor_5e3_setfile_A_1280x960_15fps[] = {
	0x0136,	0x18, 0x1,
	0x0137,	0x5E, 0x1,
	0x0305,	0x08, 0x1,
	0x0306,	0x01, 0x1,
	0x0307,	0x26, 0x1,
	0x3C1F,	0x00, 0x1,
	0x0820,	0x03, 0x1,
	0x0821,	0x80, 0x1,
	0x3C1C,	0x58, 0x1,
	0x0114,	0x01, 0x1,
	0x0340,	0x0F, 0x1,
	0x0341,	0xC0, 0x1,
	0x0342,	0x0B, 0x1,
	0x0343,	0x86, 0x1,
	0x0344,	0x00, 0x1,
	0x0345,	0x08, 0x1,
	0x0346,	0x00, 0x1,
	0x0347,	0x08, 0x1,
	0x0348,	0x0A, 0x1,
	0x0349,	0x07, 0x1,
	0x034A,	0x07, 0x1,
	0x034B,	0x87, 0x1,
	0x034C,	0x05, 0x1,
	0x034D,	0x00, 0x1,
	0x034E,	0x03, 0x1,
	0x034F,	0xC0, 0x1,
	0x0900,	0x01, 0x1,
	0x0901,	0x22, 0x1,
	0x0383,	0x01, 0x1,
	0x0387,	0x03, 0x1,
	0x0204,	0x00, 0x1,
	0x0205,	0x20, 0x1,
	0x0202,	0x02, 0x1,
	0x0203,	0x00, 0x1,
	0x0200,	0x04, 0x1,
	0x0201,	0x98, 0x1,
	0x3941,	0x05, 0x1,
	0x3942,	0xB6, 0x1,
	0x3924,	0x39, 0x1,
	0x3925,	0x1E, 0x1,
	0x3C31,	0x6D, 0x1,
	0x3C32,	0xB0, 0x1,
	0x3C08,	0x72, 0x1,
	0x3C09,	0x3C, 0x1,
	0x3320,	0x02, 0x1,
};

/* 16x10 margin, EXTCLK 24.37Mhz */
const u32 sensor_5e3_setfile_A_640x480_116fps[] = {
	0x0136,	0x18, 0x1,
	0x0137,	0x5E, 0x1,
	0x0305,	0x08, 0x1,
	0x0306,	0x01, 0x1,
	0x0307,	0x26, 0x1,
	0x3C1F,	0x00, 0x1,
	0x0820,	0x03, 0x1,
	0x0821,	0x80, 0x1,
	0x3C1C,	0x58, 0x1,
	0x0114,	0x01, 0x1,
	0x0340,	0x02, 0x1,
	0x0341,	0x0A, 0x1,
	0x0342,	0x0B, 0x1,
	0x0343,	0x86, 0x1,
	0x0344,	0x00, 0x1,
	0x0345,	0x08, 0x1,
	0x0346,	0x00, 0x1,
	0x0347,	0x08, 0x1,
	0x0348,	0x0A, 0x1,
	0x0349,	0x07, 0x1,
	0x034A,	0x07, 0x1,
	0x034B,	0x87, 0x1,
	0x034C,	0x02, 0x1,
	0x034D,	0x80, 0x1,
	0x034E,	0x01, 0x1,
	0x034F,	0xE0, 0x1,
	0x0900,	0x01, 0x1,
	0x0901,	0x44, 0x1,
	0x0383,	0x03, 0x1,
	0x0387,	0x07, 0x1,
	0x0204,	0x00, 0x1,
	0x0205,	0x20, 0x1,
	0x0202,	0x01, 0x1,
	0x0203,	0x00, 0x1,
	0x0200,	0x04, 0x1,
	0x0201,	0x98, 0x1,
	0x3941,	0x05, 0x1,
	0x3942,	0xB6, 0x1,
	0x3924,	0x39, 0x1,
	0x3925,	0x1E, 0x1,
	0x3C31,	0x6D, 0x1,
	0x3C32,	0xB0, 0x1,
	0x3C08,	0x72, 0x1,
	0x3C09,	0x3C, 0x1,
	0x3320,	0x02, 0x1,
};

const struct sensor_pll_info sensor_5e3_pllinfo_A_2576x1932_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x01, /* vt_pix_clk_div  (0x0301) */
	0x05, /* vt_sys_clk_div  (0x3C1C[7:4]) */
	0x08, /* pre_pll_clk_div (0x0305) */
	0x126, /* pll_multiplier        (0x0306, 0x0307) */
	0x00, /* op_pix_clk_div        (0x0309) */
	0x00, /* op_sys_clk_div  (0x030B) */

	0x00, /* secnd_pre_pll_clk_div	(0x030D) */
	0x00, /* secnd_pll_multiplier	(0x030F) */
	0x07E9, /* frame_length_lines    (0x0341) */
	0x0B86, /* line_length_pck       (0x0343) */
};

const struct sensor_pll_info sensor_5e3_pllinfo_A_1280x960_30fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x01, /* vt_pix_clk_div  (0x0301) */
	0x05, /* vt_sys_clk_div  (0x3C1C[7:4]) */
	0x08, /* pre_pll_clk_div (0x0305) */
	0x126, /* pll_multiplier        (0x0306, 0x0307) */
	0x00, /* op_pix_clk_div        (0x0309) */
	0x00, /* op_sys_clk_div  (0x030B) */

	0x00, /* secnd_pre_pll_clk_div	(0x030D) */
	0x00, /* secnd_pll_multiplier	(0x030F) */
	0x07E9, /* frame_length_lines    (0x0341) */
	0x0B86, /* line_length_pck       (0x0343) */
};

const struct sensor_pll_info sensor_5e3_pllinfo_A_1280x960_15fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x01, /* vt_pix_clk_div  (0x0301) */
	0x05, /* vt_sys_clk_div  (0x3C1C[7:4]) */
	0x08, /* pre_pll_clk_div (0x0305) */
	0x126, /* pll_multiplier        (0x0306, 0x0307) */
	0x00, /* op_pix_clk_div        (0x0309) */
	0x00, /* op_sys_clk_div  (0x030B) */

	0x00, /* secnd_pre_pll_clk_div	(0x030D) */
	0x00, /* secnd_pll_multiplier	(0x030F) */
	0x0FC0, /* frame_length_lines    (0x0341) */
	0x0B86, /* line_length_pck       (0x0343) */
};

const struct sensor_pll_info sensor_5e3_pllinfo_A_640x480_116fps = {
	EXT_CLK_Mhz * 1000 * 1000, /* ext_clk */
	0x01, /* vt_pix_clk_div  (0x0301) */
	0x05, /* vt_sys_clk_div  (0x3C1C[7:4]) */
	0x08, /* pre_pll_clk_div (0x0305) */
	0x126, /* pll_multiplier  (0x0306, 0x0307) */
	0x00, /* op_pix_clk_div  (0x0309) */
	0x00, /* op_sys_clk_div  (0x030B) */

	0x00, /* secnd_pre_pll_clk_div   (0x030D) */
	0x00, /* secnd_pll_multiplier    (0x030F) */
	0x020A, /* frame_length_lines    (0x0341) */
	0x0B86, /* line_length_pck       (0x0343) */
};

static const u32 *sensor_5e3_setfiles_A[] = {
	sensor_5e3_setfile_A_2576x1932_30fps,
	sensor_5e3_setfile_A_1280x960_30fps,
	sensor_5e3_setfile_A_1280x960_15fps,
	sensor_5e3_setfile_A_640x480_116fps,
};

static const u32 sensor_5e3_setfile_A_sizes[] = {
	sizeof(sensor_5e3_setfile_A_2576x1932_30fps) / sizeof(sensor_5e3_setfile_A_2576x1932_30fps[0]),
	sizeof(sensor_5e3_setfile_A_1280x960_30fps) / sizeof(sensor_5e3_setfile_A_1280x960_30fps[0]),
	sizeof(sensor_5e3_setfile_A_1280x960_15fps) / sizeof(sensor_5e3_setfile_A_1280x960_15fps[0]),
	sizeof(sensor_5e3_setfile_A_640x480_116fps) / sizeof(sensor_5e3_setfile_A_640x480_116fps[0]),
};

static const struct sensor_pll_info *sensor_5e3_pllinfos_A[] = {
	&sensor_5e3_pllinfo_A_2576x1932_30fps,
	&sensor_5e3_pllinfo_A_1280x960_30fps,
	&sensor_5e3_pllinfo_A_1280x960_15fps,
	&sensor_5e3_pllinfo_A_640x480_116fps,
};

#endif


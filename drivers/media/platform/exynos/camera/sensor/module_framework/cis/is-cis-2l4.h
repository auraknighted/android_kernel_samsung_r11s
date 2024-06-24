/*
 * Samsung Exynos SoC series Sensor driver
 *
 *
 * Copyright (c) 2016 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_2L4_H
#define IS_CIS_2L4_H

#include "is-cis.h"

#define EXT_CLK_Mhz (26)

#define SENSOR_2L4_MAX_WIDTH		(4032 + 0)
#define SENSOR_2L4_MAX_HEIGHT		(3024 + 0)

#define SENSOR_2L4_FINE_INTEGRATION_TIME_MIN                0x100
#define SENSOR_2L4_FINE_INTEGRATION_TIME_MAX                0x100
#define SENSOR_2L4_COARSE_INTEGRATION_TIME_MIN              0x10
#define SENSOR_2L4_COARSE_INTEGRATION_TIME_MAX_MARGIN       0x30

#ifdef USE_CAMERA_FACTORY_DRAM_TEST
#define SENSOR_2L4_DRAMTEST_SECTION2_FCOUNT	(8)
#endif

#define USE_GROUP_PARAM_HOLD	(0)

enum sensor_2l4_mode_enum {
	/* MODE 3 */
	SENSOR_2L4_4032X3024_30FPS = 0,
	SENSOR_2L4_4032X2268_60FPS = 1,
	SENSOR_2L4_4032X2268_30FPS = 2,
	SENSOR_2L4_4032X1908_30FPS = 3,
	SENSOR_2L4_3024X3024_30FPS = 4,
	SENSOR_2L4_2016X1512_30FPS = 5,
	SENSOR_2L4_2016X1134_30FPS = 6,
	SENSOR_2L4_1504X1504_30FPS = 7,
	/* MODE 3 - 24fps LIVE FOCUS */
	SENSOR_2L4_4032X3024_24FPS = 8,
	SENSOR_2L4_4032X2268_24FPS = 9,
	SENSOR_2L4_4032X1908_24FPS = 10,
	SENSOR_2L4_3024X3024_24FPS = 11,
	/* MODE 2 */
	SENSOR_2L4_2016X1134_240FPS_MODE2 = 12,
	SENSOR_2L4_1008X756_120FPS_MODE2 = 13,
	/* MODE 2 SSM */
	SENSOR_2L4_2016X1134_60FPS_MODE2_SSM_960 = 14,
	SENSOR_2L4_2016X1134_60FPS_MODE2_SSM_480 = 15,
	SENSOR_2L4_1280X720_60FPS_MODE2_SSM_960 = 16,
	SENSOR_2L4_1280X720_60FPS_MODE2_SSM_480 = 17,
	/* MODE 2 DRAM TEST */
	SENSOR_2L4_4032X3024_30FPS_MODE2_DRAM_TEST_SECTION1 = 18,
	SENSOR_2L4_4032X3024_30FPS_MODE2_DRAM_TEST_SECTION2 = 19,
	SENSOR_2L4_MODE_MAX,
};

static bool sensor_2l4_support_wdr[] = {
	/* MODE 3 */
	true, //SENSOR_2L4_4032X3024_30FPS = 0,
	true, //SENSOR_2L4_4032X2268_60FPS = 1,
	true, //SENSOR_2L4_4032X2268_30FPS = 2,
	true, //SENSOR_2L4_4032X1908_30FPS = 3,
	true, //SENSOR_2L4_3024X3024_30FPS = 4,
	false, //SENSOR_2L4_2016X1512_30FPS = 5,
	false, //SENSOR_2L4_2016X1134_30FPS = 6,
	false, //SENSOR_2L4_1504X1504_30FPS = 7,
	/* MODE 3 - 24fps LIVE FOCUS */
	true, //SENSOR_2L4_4032X3024_24FPS = 8,
	true, //SENSOR_2L4_4032X2268_24FPS = 9,
	true, //SENSOR_2L4_4032X1908_24FPS = 10,
	true, //SENSOR_2L4_3024X3024_24FPS = 11,
	/* MODE 2 */
	false, //SENSOR_2L4_2016X1134_240FPS_MODE2 = 12,
	false, //SENSOR_2L4_1008X756_120FPS_MODE2 = 13,
	/* MODE 2 SSM */
	false, //SENSOR_2L4_2016X1134_60FPS_MODE2_SSM_960 = 14,
	false, //SENSOR_2L4_2016X1134_60FPS_MODE2_SSM_480 = 15,
	false, //SENSOR_2L4_1280X720_60FPS_MODE2_SSM_960 = 16,
	false, //SENSOR_2L4_1280X720_60FPS_MODE2_SSM_480 = 17,
	/* MODE 2 DRAM TEST */
	false, //SENSOR_2L4_4032X3024_30FPS_MODE2_DRAM_TEST_SECTION1 = 18,
	false, //SENSOR_2L4_4032X3024_30FPS_MODE2_DRAM_TEST_SECTION2 = 19,
};

enum sensor_2l4_load_sram_mode {
	SENSOR_2L4_4032x3024_30FPS_LOAD_SRAM = 0,
	SENSOR_2L4_4032x2268_30FPS_LOAD_SRAM,
	SENSOR_2L4_4032x3024_24FPS_LOAD_SRAM,
	SENSOR_2L4_4032x2268_24FPS_LOAD_SRAM,
	SENSOR_2L4_4032x2268_60FPS_LOAD_SRAM,
	SENSOR_2L4_1008x756_120FPS_LOAD_SRAM,
};

int sensor_2l4_cis_stream_on(struct v4l2_subdev *subdev);
int sensor_2l4_cis_stream_off(struct v4l2_subdev *subdev);
#ifdef CONFIG_SENSOR_RETENTION_USE
int sensor_2l4_cis_retention_crc_check(struct v4l2_subdev *subdev);
int sensor_2l4_cis_retention_prepare(struct v4l2_subdev *subdev);
#endif
int sensor_2l4_cis_set_lownoise_mode_change(struct v4l2_subdev *subdev);
#endif

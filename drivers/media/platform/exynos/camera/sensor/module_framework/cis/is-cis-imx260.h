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

#ifndef IS_CIS_IMX260_H
#define IS_CIS_IMX260_H

#include "is-cis.h"

#define EXT_CLK_Mhz (26)

#define SENSOR_IMX260_MAX_WIDTH		(4032 + 0)
#define SENSOR_IMX260_MAX_HEIGHT		(3024 + 0)

#define SENSOR_IMX260_FINE_INTEGRATION_TIME_MIN                0x510
#define SENSOR_IMX260_FINE_INTEGRATION_TIME_MAX                0x510
#define SENSOR_IMX260_COARSE_INTEGRATION_TIME_MIN              0x2
#define SENSOR_IMX260_COARSE_INTEGRATION_TIME_MAX_MARGIN       0x0A
#define SENSOR_IMX260_COARSE_STEP_2N 2
#define SENSOR_IMX260_COARSE_STEP_4N 4
#define SENSOR_IMX260_BRIGHT_ILLUMINATION_COMPENSATE_THR 100
#define SENSOR_IMX260_DUMMY_MULTIPLIER 1000

#define USE_GROUP_PARAM_HOLD	(0)

enum sensor_imx260_mode_enum {
	SENSOR_IMX260_8064X3024_30FPS = 0,
	SENSOR_IMX260_8064X2268_30FPS,
	SENSOR_IMX260_6048X3024_30FPS,
	SENSOR_IMX260_4032X2268_60FPS,
	SENSOR_IMX260_2016X1134_120FPS,
	SENSOR_IMX260_2016X1134_240FPS,
	SENSOR_IMX260_1008X756_120FPS,
	SENSOR_IMX260_2016X1512_30FPS,
	SENSOR_IMX260_1504X1504_30FPS,
	SENSOR_IMX260_2016X1134_30FPS,
};

#endif


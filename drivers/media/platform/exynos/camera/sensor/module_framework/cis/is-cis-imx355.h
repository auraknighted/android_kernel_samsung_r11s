/*
 * Samsung Exynos5 SoC series Sensor driver
 *
 *
 * Copyright (c) 2021 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef IS_CIS_IMX355_H
#define IS_CIS_IMX355_H

#include "is-cis.h"

#define EXT_CLK_Mhz (26)

#define SENSOR_IMX355_MAX_WIDTH		(3264 + 16)
#define SENSOR_IMX355_MAX_HEIGHT	(2448 + 10)

#define TOTAL_NUM_OF_IVTPX_CHANNEL	(2)

/* TODO: Check below values are valid */
#define SENSOR_IMX355_FINE_INTEGRATION_TIME_MIN                0x54C
#define SENSOR_IMX355_FINE_INTEGRATION_TIME_MAX                0x54C
#define SENSOR_IMX355_COARSE_INTEGRATION_TIME_MIN              0x1
#define SENSOR_IMX355_COARSE_INTEGRATION_TIME_MAX_MARGIN       0xA

/* Register Value */
#define SENSOR_IMX355_MIN_AGAIN_VALUE                   (0)
#define SENSOR_IMX355_MAX_AGAIN_VALUE                   (960)
#define SENSOR_IMX355_MIN_DGAIN_VALUE                   (0x0100)
#define SENSOR_IMX355_MAX_DGAIN_VALUE                   (0x0FFF)


#define USE_GROUP_PARAM_HOLD	(0)
#endif


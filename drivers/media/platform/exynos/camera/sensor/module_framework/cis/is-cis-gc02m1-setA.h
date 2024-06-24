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

#ifndef IS_CIS_GC02M1_SET_A_H
#define IS_CIS_GC02M1_SET_A_H

#include "is-cis.h"
#include "is-cis-gc02m1.h"

// Reference Version : GC02M1 MIPI data rate 676M official setfile V0.0.2_test.xlsx
// DATE : 2020-02-13

const u32 sensor_gc02m1_setfile_A_Global[] = {
	0xfc, 0x01, 0x01,
	0xf4, 0x41, 0x01,
	0xf5, 0xc0, 0x01,
	0xf6, 0x44, 0x01,
	0xf8, 0x34, 0x01,
	0xf9, 0x82, 0x01,
	0xfa, 0x00, 0x01,
	0xfd, 0x80, 0x01,
	0xfc, 0x81, 0x01,
	0xfe, 0x03, 0x01,
	0x01, 0x0b, 0x01,
	0xf7, 0x01, 0x01,
	0xfc, 0x80, 0x01,
	0xfc, 0x80, 0x01,
	0xfc, 0x80, 0x01,
	0xfc, 0x8e, 0x01,
	0xfe, 0x00, 0x01,
	0x87, 0x09, 0x01,
	0xee, 0x72, 0x01,
	0xfe, 0x01, 0x01,
	0x8c, 0x90, 0x01,
	0xfe, 0x00, 0x01,
	0x17, 0x80, 0x01,
	0x19, 0x04, 0x01,
	0x56, 0x20, 0x01,
	0x5b, 0x00, 0x01,
	0x5e, 0x01, 0x01,
	0x21, 0x3c, 0x01,
	0x29, 0x40, 0x01,
	0x44, 0x20, 0x01,
	0x4b, 0x10, 0x01,
	0x55, 0x1a, 0x01,
	0xcc, 0x01, 0x01,
	0x27, 0x30, 0x01,
	0x2b, 0x00, 0x01,
	0x33, 0x00, 0x01,
	0x53, 0x90, 0x01,
	0xe6, 0x50, 0x01,
	0x39, 0x07, 0x01,
	0x43, 0x04, 0x01,
	0x46, 0x2a, 0x01,
	0x7c, 0xa0, 0x01,
	0xd0, 0xbe, 0x01,
	0xd1, 0x60, 0x01,
	0xd2, 0x40, 0x01,
	0xd3, 0xf3, 0x01,
	0xde, 0x1d, 0x01,
	0xcd, 0x05, 0x01,
	0xce, 0x6f, 0x01,
	0xfc, 0x88, 0x01,
	0xfe, 0x10, 0x01,
	0xfe, 0x00, 0x01,
	0xfc, 0x8e, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0xfc, 0x88, 0x01,
	0xfe, 0x10, 0x01,
	0xfe, 0x00, 0x01,
	0xfc, 0x8e, 0x01,
	0xfe, 0x04, 0x01,
	0xe0, 0x01, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0x3e, 0x00, 0x01,
};

const u32 sensor_gc02m1_setfile_A_1600x1200_30fps[] = {
	0xfc, 0x01, 0x01,
	0xf4, 0x41, 0x01,
	0xf5, 0xc0, 0x01,
	0xf6, 0x44, 0x01,
	0xf8, 0x34, 0x01,
	0xf9, 0x82, 0x01,
	0xfa, 0x00, 0x01,
	0xfd, 0x80, 0x01,
	0xfc, 0x81, 0x01,
	0xfe, 0x03, 0x01,
	0x01, 0x0b, 0x01,
	0xf7, 0x01, 0x01,
	0xfc, 0x80, 0x01,
	0xfc, 0x80, 0x01,
	0xfc, 0x80, 0x01,
	0xfc, 0x8e, 0x01,
	0xfe, 0x00, 0x01,
	0x87, 0x09, 0x01,
	0xee, 0x72, 0x01,
	0xfe, 0x01, 0x01,
	0x8c, 0x90, 0x01,
	0xfe, 0x00, 0x01,
	0x90, 0x00, 0x01,
	0x03, 0x04, 0x01,
	0x04, 0x83, 0x01,
	0x41, 0x04, 0x01,
	0x42, 0xf4, 0x01,
	0x05, 0x04, 0x01,
	0x06, 0x48, 0x01,
	0x07, 0x00, 0x01,
	0x08, 0x18, 0x01,
	0x9d, 0x18, 0x01,
	0x09, 0x00, 0x01,
	0x0a, 0x02, 0x01,
	0x0b, 0x00, 0x01,
	0x0c, 0x00, 0x01,
	0x0d, 0x04, 0x01,
	0x0e, 0xbc, 0x01,
	0x0f, 0x06, 0x01,
	0x10, 0x4c, 0x01,
	0x24, 0x00, 0x01,
	0x1a, 0x04, 0x01,
	0x1f, 0x11, 0x01,
	0xfc, 0x88, 0x01,
	0xfe, 0x10, 0x01,
	0xfe, 0x00, 0x01,
	0xfc, 0x8e, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0xfc, 0x88, 0x01,
	0xfe, 0x10, 0x01,
	0xfe, 0x00, 0x01,
	0xfc, 0x8e, 0x01,
	0xfe, 0x04, 0x01,
	0xe0, 0x01, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x01, 0x01,
	0x53, 0x44, 0x01,
	0x87, 0x51, 0x01,
	0x89, 0x03, 0x01,
	0xfe, 0x00, 0x01,
	0xb0, 0x74, 0x01,
	0xb1, 0x04, 0x01,
	0xb2, 0x00, 0x01,
	0xb6, 0x00, 0x01,
	0xfe, 0x04, 0x01,
	0xd8, 0x00, 0x01,
	0xc0, 0x40, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x60, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0xc0, 0x01,
	0xc0, 0x2a, 0x01,
	0xc0, 0x80, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x40, 0x01,
	0xc0, 0xa0, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x90, 0x01,
	0xc0, 0x19, 0x01,
	0xc0, 0xc0, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0xD0, 0x01,
	0xc0, 0x2F, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x90, 0x01,
	0xc0, 0x39, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0x20, 0x01,
	0xc0, 0x04, 0x01,
	0xc0, 0x20, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x0f, 0x01,
	0xc0, 0x40, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x1a, 0x01,
	0xc0, 0x60, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0x20, 0x01,
	0xc0, 0x25, 0x01,
	0xc0, 0x80, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0xa0, 0x01,
	0xc0, 0x2c, 0x01,
	0xc0, 0xa0, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x32, 0x01,
	0xc0, 0xc0, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0x20, 0x01,
	0xc0, 0x38, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0x60, 0x01,
	0xc0, 0x3c, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x02, 0x01,
	0xc0, 0xa0, 0x01,
	0xc0, 0x40, 0x01,
	0xc0, 0x80, 0x01,
	0xc0, 0x02, 0x01,
	0xc0, 0x18, 0x01,
	0xc0, 0x5c, 0x01,
	0xfe, 0x00, 0x01,
	0x9f, 0x10, 0x01,
	0xfe, 0x00, 0x01,
	0x26, 0x20, 0x01,
	0xfe, 0x01, 0x01,
	0x40, 0x22, 0x01,
	0x46, 0x7f, 0x01,
	0x49, 0x0f, 0x01,
	0x4a, 0xf0, 0x01,
	0xfe, 0x04, 0x01,
	0x14, 0x80, 0x01,
	0x15, 0x80, 0x01,
	0x16, 0x80, 0x01,
	0x17, 0x80, 0x01,
	0xfe, 0x01, 0x01,
	0x41, 0x20, 0x01,
	0x4c, 0x00, 0x01,
	0x4d, 0x0c, 0x01,
	0x44, 0x08, 0x01,
	0x48, 0x03, 0x01,
	0xfe, 0x01, 0x01,
	0x90, 0x01, 0x01,
	0x91, 0x00, 0x01,
	0x92, 0x06, 0x01,
	0x93, 0x00, 0x01,
	0x94, 0x06, 0x01,
	0x95, 0x04, 0x01,
	0x96, 0xb0, 0x01,
	0x97, 0x06, 0x01,
	0x98, 0x40, 0x01,
	0xfe, 0x03, 0x01,
	0x01, 0x23, 0x01,
	0x03, 0xce, 0x01,
	0x04, 0x48, 0x01,
	0x15, 0x00, 0x01,
	0x21, 0x10, 0x01,
	0x22, 0x05, 0x01,
	0x23, 0x20, 0x01,
	0x25, 0x20, 0x01,
	0x26, 0x08, 0x01,
	0x29, 0x06, 0x01,
	0x2a, 0x0c, 0x01,
	0x2b, 0x08, 0x01,
};

const u32 sensor_gc02m1_setfile_A_1600x900_30fps[] = {
	0xfc, 0x01, 0x01,
	0xf4, 0x41, 0x01,
	0xf5, 0xc0, 0x01,
	0xf6, 0x44, 0x01,
	0xf8, 0x34, 0x01,
	0xf9, 0x82, 0x01,
	0xfa, 0x00, 0x01,
	0xfd, 0x80, 0x01,
	0xfc, 0x81, 0x01,
	0xfe, 0x03, 0x01,
	0x01, 0x0b, 0x01,
	0xf7, 0x01, 0x01,
	0xfc, 0x80, 0x01,
	0xfc, 0x80, 0x01,
	0xfc, 0x80, 0x01,
	0xfc, 0x8e, 0x01,
	0xfe, 0x00, 0x01,
	0x87, 0x09, 0x01,
	0xee, 0x72, 0x01,
	0xfe, 0x01, 0x01,
	0x8c, 0x90, 0x01,
	0xfe, 0x00, 0x01,
	0x90, 0x00, 0x01,
	0x03, 0x04, 0x01,
	0x04, 0x83, 0x01,
	0x41, 0x04, 0x01,
	0x42, 0xf4, 0x01,
	0x05, 0x04, 0x01,
	0x06, 0x48, 0x01,
	0x07, 0x00, 0x01,
	0x08, 0x18, 0x01,
	0x9d, 0x18, 0x01,
	0x09, 0x00, 0x01,
	0x0a, 0x02, 0x01,
	0x0b, 0x00, 0x01,
	0x0c, 0x00, 0x01,
	0x0d, 0x04, 0x01,
	0x0e, 0xbc, 0x01,
	0x0f, 0x06, 0x01,
	0x10, 0x4c, 0x01,
	0x24, 0x00, 0x01,
	0x1a, 0x04, 0x01,
	0x1f, 0x11, 0x01,
	0xfc, 0x88, 0x01,
	0xfe, 0x10, 0x01,
	0xfe, 0x00, 0x01,
	0xfc, 0x8e, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0xfc, 0x88, 0x01,
	0xfe, 0x10, 0x01,
	0xfe, 0x00, 0x01,
	0xfc, 0x8e, 0x01,
	0xfe, 0x04, 0x01,
	0xe0, 0x01, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x01, 0x01,
	0x53, 0x44, 0x01,
	0x87, 0x51, 0x01,
	0x89, 0x03, 0x01,
	0xfe, 0x00, 0x01,
	0xb0, 0x74, 0x01,
	0xb1, 0x04, 0x01,
	0xb2, 0x00, 0x01,
	0xb6, 0x00, 0x01,
	0xfe, 0x04, 0x01,
	0xd8, 0x00, 0x01,
	0xc0, 0x40, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x60, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0xc0, 0x01,
	0xc0, 0x2a, 0x01,
	0xc0, 0x80, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x40, 0x01,
	0xc0, 0xa0, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x90, 0x01,
	0xc0, 0x19, 0x01,
	0xc0, 0xc0, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0xD0, 0x01,
	0xc0, 0x2F, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x90, 0x01,
	0xc0, 0x39, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0x20, 0x01,
	0xc0, 0x04, 0x01,
	0xc0, 0x20, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x0f, 0x01,
	0xc0, 0x40, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x1a, 0x01,
	0xc0, 0x60, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0x20, 0x01,
	0xc0, 0x25, 0x01,
	0xc0, 0x80, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0xa0, 0x01,
	0xc0, 0x2c, 0x01,
	0xc0, 0xa0, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x32, 0x01,
	0xc0, 0xc0, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0x20, 0x01,
	0xc0, 0x38, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0x60, 0x01,
	0xc0, 0x3c, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x02, 0x01,
	0xc0, 0xa0, 0x01,
	0xc0, 0x40, 0x01,
	0xc0, 0x80, 0x01,
	0xc0, 0x02, 0x01,
	0xc0, 0x18, 0x01,
	0xc0, 0x5c, 0x01,
	0xfe, 0x00, 0x01,
	0x9f, 0x10, 0x01,
	0xfe, 0x00, 0x01,
	0x26, 0x20, 0x01,
	0xfe, 0x01, 0x01,
	0x40, 0x22, 0x01,
	0x46, 0x7f, 0x01,
	0x49, 0x0f, 0x01,
	0x4a, 0xf0, 0x01,
	0xfe, 0x04, 0x01,
	0x14, 0x80, 0x01,
	0x15, 0x80, 0x01,
	0x16, 0x80, 0x01,
	0x17, 0x80, 0x01,
	0xfe, 0x01, 0x01,
	0x41, 0x20, 0x01,
	0x4c, 0x00, 0x01,
	0x4d, 0x0c, 0x01,
	0x44, 0x08, 0x01,
	0x48, 0x03, 0x01,
	0xfe, 0x01, 0x01,
	0x90, 0x01, 0x01,
	0x91, 0x00, 0x01,
	0x92, 0x9c, 0x01,
	0x93, 0x00, 0x01,
	0x94, 0x06, 0x01,
	0x95, 0x03, 0x01,
	0x96, 0x84, 0x01,
	0x97, 0x06, 0x01,
	0x98, 0x40, 0x01,
	0xfe, 0x03, 0x01,
	0x01, 0x23, 0x01,
	0x03, 0xce, 0x01,
	0x04, 0x48, 0x01,
	0x15, 0x00, 0x01,
	0x21, 0x10, 0x01,
	0x22, 0x05, 0x01,
	0x23, 0x20, 0x01,
	0x25, 0x20, 0x01,
	0x26, 0x08, 0x01,
	0x29, 0x06, 0x01,
	0x2a, 0x0c, 0x01,
	0x2b, 0x08, 0x01,
};

const u32 sensor_gc02m1_setfile_A_800x600_60fps[] = {
	0xfc, 0x01, 0x01,
	0xf4, 0x41, 0x01,
	0xf5, 0xc0, 0x01,
	0xf6, 0x44, 0x01,
	0xf8, 0x34, 0x01,
	0xf9, 0x82, 0x01,
	0xfa, 0x00, 0x01,
	0xfd, 0xc0, 0x01,
	0xfc, 0x81, 0x01,
	0xfe, 0x03, 0x01,
	0x01, 0x0b, 0x01,
	0xf7, 0x01, 0x01,
	0xfc, 0x80, 0x01,
	0xfc, 0x80, 0x01,
	0xfc, 0x80, 0x01,
	0xfc, 0x8e, 0x01,
	0xfe, 0x00, 0x01,
	0x87, 0x09, 0x01,
	0xee, 0x72, 0x01,
	0xfe, 0x01, 0x01,
	0x8c, 0x90, 0x01,
	0xfe, 0x00, 0x01,
	0x90, 0x00, 0x01,
	0x03, 0x01, 0x01,
	0x04, 0x81, 0x01,
	0x41, 0x02, 0x01,
	0x42, 0x7f, 0x01,
	0x05, 0x04, 0x01,
	0x06, 0x48, 0x01,
	0x07, 0x00, 0x01,
	0x08, 0x22, 0x01,
	0x9d, 0x22, 0x01,
	0x09, 0x00, 0x01,
	0x0a, 0x02, 0x01,
	0x0b, 0x00, 0x01,
	0x0c, 0x00, 0x01,
	0x0d, 0x04, 0x01,
	0x0e, 0xbc, 0x01,
	0x0f, 0x06, 0x01,
	0x10, 0x4c, 0x01,
	0x24, 0x41, 0x01,
	0x1a, 0x14, 0x01,
	0x1f, 0x19, 0x01,
	0xfc, 0x88, 0x01,
	0xfe, 0x10, 0x01,
	0xfe, 0x00, 0x01,
	0xfc, 0x8e, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x00, 0x01,
	0xfc, 0x88, 0x01,
	0xfe, 0x10, 0x01,
	0xfe, 0x00, 0x01,
	0xfc, 0x8e, 0x01,
	0xfe, 0x04, 0x01,
	0xe0, 0x01, 0x01,
	0xfe, 0x00, 0x01,
	0xfe, 0x01, 0x01,
	0x53, 0x44, 0x01,
	0x87, 0x51, 0x01,
	0x89, 0x03, 0x01,
	0xfe, 0x00, 0x01,
	0xb0, 0x74, 0x01,
	0xb1, 0x04, 0x01,
	0xb2, 0x00, 0x01,
	0xb6, 0x00, 0x01,
	0xfe, 0x04, 0x01,
	0xd8, 0x00, 0x01,
	0xc0, 0x40, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x60, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0xc0, 0x01,
	0xc0, 0x2a, 0x01,
	0xc0, 0x80, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x40, 0x01,
	0xc0, 0xa0, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x90, 0x01,
	0xc0, 0x19, 0x01,
	0xc0, 0xc0, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0xD0, 0x01,
	0xc0, 0x2F, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x90, 0x01,
	0xc0, 0x39, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0x20, 0x01,
	0xc0, 0x04, 0x01,
	0xc0, 0x20, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x0f, 0x01,
	0xc0, 0x40, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x1a, 0x01,
	0xc0, 0x60, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0x20, 0x01,
	0xc0, 0x25, 0x01,
	0xc0, 0x80, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0xa0, 0x01,
	0xc0, 0x2c, 0x01,
	0xc0, 0xa0, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x32, 0x01,
	0xc0, 0xc0, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0x20, 0x01,
	0xc0, 0x38, 0x01,
	0xc0, 0xe0, 0x01,
	0xc0, 0x01, 0x01,
	0xc0, 0x60, 0x01,
	0xc0, 0x3c, 0x01,
	0xc0, 0x00, 0x01,
	0xc0, 0x02, 0x01,
	0xc0, 0xa0, 0x01,
	0xc0, 0x40, 0x01,
	0xc0, 0x80, 0x01,
	0xc0, 0x02, 0x01,
	0xc0, 0x18, 0x01,
	0xc0, 0x5c, 0x01,
	0xfe, 0x00, 0x01,
	0x9f, 0x10, 0x01,
	0xfe, 0x00, 0x01,
	0x26, 0x20, 0x01,
	0xfe, 0x01, 0x01,
	0x40, 0x22, 0x01,
	0x46, 0x7f, 0x01,
	0x49, 0x0f, 0x01,
	0x4a, 0xf0, 0x01,
	0xfe, 0x04, 0x01,
	0x14, 0x80, 0x01,
	0x15, 0x80, 0x01,
	0x16, 0x80, 0x01,
	0x17, 0x80, 0x01,
	0xfe, 0x01, 0x01,
	0x41, 0x20, 0x01,
	0x4c, 0x00, 0x01,
	0x4d, 0x0c, 0x01,
	0x44, 0x08, 0x01,
	0x48, 0x03, 0x01,
	0xfe, 0x01, 0x01,
	0x90, 0x01, 0x01,
	0x91, 0x00, 0x01,
	0x92, 0x04, 0x01,
	0x93, 0x00, 0x01,
	0x94, 0x03, 0x01,
	0x95, 0x02, 0x01,
	0x96, 0x58, 0x01,
	0x97, 0x03, 0x01,
	0x98, 0x20, 0x01,
	0xfe, 0x03, 0x01,
	0x01, 0x23, 0x01,
	0x03, 0xce, 0x01,
	0x04, 0x48, 0x01,
	0x15, 0x00, 0x01,
	0x21, 0x10, 0x01,
	0x22, 0x05, 0x01,
	0x23, 0x20, 0x01,
	0x25, 0x20, 0x01,
	0x26, 0x08, 0x01,
	0x29, 0x06, 0x01,
	0x2a, 0x0c, 0x01,
	0x2b, 0x08, 0x01,
};

const u32 sensor_gc02m1_setfile_A_Fsync_Slave[] = {
	0xfe, 0x00, 0x01,
	0x7f, 0x29, 0x01,
	0x82, 0x08, 0x01,
	0x83, 0x0a, 0x01,
	0x84, 0x81, 0x01,
	0x86, 0x02, 0x01,
	0x88, 0x00, 0x01,
	0x89, 0x04, 0x01,
	0x8a, 0x00, 0x01,
	0x8b, 0x12, 0x01,
	0x85, 0x51, 0x01,
};

const u32 sensor_gc02m1_setfile_A_Fsync_Master[] = {
	0xfe, 0x00, 0x01,
	0x84, 0x81, 0x01,
	0x80, 0x20, 0x01,
	0x83, 0x20, 0x01,
	0x81, 0x13, 0x01,
	0x7f, 0x0b, 0x01,
	0x82, 0x01, 0x01,
};

const struct sensor_pll_info_compact sensor_gc02m1_pllinfo_A_1600x1200_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	676 * 1000 * 1000,          /* mipi_datarate = OPSYCK */
	84500000,                  /* pclk = VTPXCK*/
	1268,                        /* frame_length_lines */
	2192,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_gc02m1_pllinfo_A_1600x900_30fps = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	676 * 1000 * 1000,          /* mipi_datarate = OPSYCK */
	84500000,                  /* pclk = VTPXCK*/
	1268,                        /* frame_length_lines */
	2192,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_gc02m1_pllinfo_A_800x600_60fps = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	676 * 1000 * 1000,          /* mipi_datarate = OPSYCK */
	84500000,                  /* pclk = VTPXCK*/
	639,                        /* frame_length_lines */
	2192,                        /* line_length_pck */
};

static const u32 *sensor_gc02m1_setfiles_A[] = {
	sensor_gc02m1_setfile_A_1600x1200_30fps,
	sensor_gc02m1_setfile_A_1600x900_30fps,
	sensor_gc02m1_setfile_A_800x600_60fps,
};

static const u32 sensor_gc02m1_setfile_A_sizes[] = {
	ARRAY_SIZE(sensor_gc02m1_setfile_A_1600x1200_30fps),
	ARRAY_SIZE(sensor_gc02m1_setfile_A_1600x900_30fps),
	ARRAY_SIZE(sensor_gc02m1_setfile_A_800x600_60fps),
};

static const struct sensor_pll_info_compact *sensor_gc02m1_pllinfos_A[] = {
	&sensor_gc02m1_pllinfo_A_1600x1200_30fps,
	&sensor_gc02m1_pllinfo_A_1600x900_30fps,
	&sensor_gc02m1_pllinfo_A_800x600_60fps,
};

#endif


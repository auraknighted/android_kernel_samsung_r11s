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

#ifndef IS_CIS_IMX682_SET_A_H
#define IS_CIS_IMX682_SET_A_H

#include "is-cis.h"
#include "is-cis-imx682.h"

/*
 * [Mode Information]
 *
 * Reference File : IMX682_SEC-CPHY-26MHz_RegisterSetting_ver4.10-4.00_b1_MP_201029_SEC_1
 * Update Data    : 2021-09-02
 * Author         : raj.kabra
 *
 * - Global Setting -
 *
 *    [ 0 ] 2Bin_A3         : 2x2 Binning mode A 4624x3468 30fps       : Single Still Preview/Capture (4:3)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 1358.5
 *    [ 1 ] 2Bin_B3         : 2x2 Binning mode B 4624x2604 30fps       : Single Still Preview/Capture (16:9)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 1358.5
 *    [ 2 ] 2Bin_C3         : 2x2 Binning mode C 4624x2604 60fps       : FHD Video Recording 60 FPS (16:9)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 1358.5
 *    [ 3 ] V2H2_FAE3         : 2x2 Binning mode V2H2 2304x1728 120fps       : FastenAE (4:3)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 1856
 *    [ 4 ] V2H2_SSL5         : 2x2 Binning mode V2H2 2304x1296 240fps       : SM/SSM (16:9)    ,  MIPI lane: 3, MIPI data rate(Mbps/lane): 1856
 */

const u32 sensor_imx682_setfile_A_Global[] = {
	/* External Clock Setting */
	0x0136, 0x1A, 0x01,
	0x0137, 0x00, 0x01,
	/* Register version */
	0x33F0, 0x04, 0x01,
	0x33F1, 0x04, 0x01,
	/* Signaling mode setting */
	0x0111, 0x03, 0x01,
	/* PDAF TYPE2 data type Setting */
	0x3076, 0x01, 0x01,
	0x3077, 0x2B, 0x01,
	/* Global Setting for 123 */
	0x57C6, 0x00, 0x01,
};

const u32 sensor_imx682_setfile_A_2X2BIN_FULL_4624x3468_30FPS[] = {
	/* reg_2Bin_A */
	/* 2x2 Binning mode A 4624x3468 30fps */
	/* H: 4624 */
	/* W: 3468 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x24, 0x01,
	0x0343, 0xD8, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x0F, 0x01,
	0x0341, 0x22, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x00, 0x01,
	0x0347, 0x00, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x1B, 0x01,
	0x034B, 0x1F, 0x01,
	/* Mode Setting */
	0x0900, 0x01, 0x01,
	0x0901, 0x22, 0x01,
	0x0902, 0x08, 0x01,
	0x30D8, 0x04, 0x01,
	0x3200, 0x41, 0x01,
	0x3201, 0x41, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x00, 0x01,
	0x0409, 0x00, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x02, 0x01,
	0x040C, 0x12, 0x01,
	0x040D, 0x10, 0x01,
	0x040E, 0x0D, 0x01,
	0x040F, 0x8C, 0x01,
	/* Output Size Setting */
	0x034C, 0x12, 0x01,
	0x034D, 0x10, 0x01,
	0x034E, 0x0D, 0x01,
	0x034F, 0x8C, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xFD, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xD1, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x00, 0x01,
	0x32D5, 0x00, 0x01,
	0x32D6, 0x00, 0x01,
	0x401E, 0x00, 0x01,
	0x40B8, 0x00, 0x01,
	0x40B9, 0xCD, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0xC8, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0x0E, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x01, 0x01,
	0x5A17, 0x01, 0x01,
	0x5A25, 0x01, 0x01,
	0x5A33, 0x01, 0x01,
	0x98D7, 0xB4, 0x01,
	0x98D8, 0x8C, 0x01,
	0x98D9, 0x0A, 0x01,
	0x99C4, 0x16, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x00, 0x01,
	0x40A1, 0x00, 0x01,
	/* Integration Setting */
	0x0202, 0x0E, 0x01,
	0x0203, 0xF2, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x04, 0x01,
	0x4019, 0x80, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x01, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x00, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x01, 0x01,
};

const u32 sensor_imx682_setfile_A_2X2BIN_FULL_4624x2604_30FPS[] = {
	/* reg_2Bin_A */
	/* 2x2 Binning mode A 4624x2604 30fps */
	/* H: 4624 */
	/* W: 2604 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x24, 0x01,
	0x0343, 0xD8, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x0F, 0x01,
	0x0341, 0x22, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x03, 0x01,
	0x0347, 0x60, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x17, 0x01,
	0x034B, 0xBF, 0x01,
	/* Mode Setting */
	0x0900, 0x01, 0x01,
	0x0901, 0x22, 0x01,
	0x0902, 0x08, 0x01,
	0x30D8, 0x04, 0x01,
	0x3200, 0x41, 0x01,
	0x3201, 0x41, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x00, 0x01,
	0x0409, 0x00, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x02, 0x01,
	0x040C, 0x12, 0x01,
	0x040D, 0x10, 0x01,
	0x040E, 0x0A, 0x01,
	0x040F, 0x2C, 0x01,
	/* Output Size Setting */
	0x034C, 0x12, 0x01,
	0x034D, 0x10, 0x01,
	0x034E, 0x0A, 0x01,
	0x034F, 0x2C, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xFD, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xD1, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x00, 0x01,
	0x32D5, 0x00, 0x01,
	0x32D6, 0x00, 0x01,
	0x401E, 0x00, 0x01,
	0x40B8, 0x00, 0x01,
	0x40B9, 0xCD, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0xC8, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0x0E, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x01, 0x01,
	0x5A17, 0x01, 0x01,
	0x5A25, 0x01, 0x01,
	0x5A33, 0x01, 0x01,
	0x98D7, 0xB4, 0x01,
	0x98D8, 0x8C, 0x01,
	0x98D9, 0x0A, 0x01,
	0x99C4, 0x16, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x00, 0x01,
	0x40A1, 0x00, 0x01,
	/* Integration Setting */
	0x0202, 0x0E, 0x01,
	0x0203, 0xF2, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x04, 0x01,
	0x4019, 0x80, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x01, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x00, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x01, 0x01,
};

const u32 sensor_imx682_setfile_A_2X2BIN_FULL_4624x2604_60FPS[] = {
	/* reg_2Bin_A */
	/* 2x2 Binning mode A 4624x2604 60fps */
	/* H: 4624 */
	/* W: 2604 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x14, 0x01,
	0x0343, 0x18, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x0B, 0x01,
	0x0341, 0x14, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x03, 0x01,
	0x0347, 0x60, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x17, 0x01,
	0x034B, 0xBF, 0x01,
	/* Mode Setting */
	0x0900, 0x01, 0x01,
	0x0901, 0x22, 0x01,
	0x0902, 0x08, 0x01,
	0x30D8, 0x00, 0x01,
	0x3200, 0x41, 0x01,
	0x3201, 0x41, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x00, 0x01,
	0x0409, 0x00, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x02, 0x01,
	0x040C, 0x12, 0x01,
	0x040D, 0x10, 0x01,
	0x040E, 0x0A, 0x01,
	0x040F, 0x2C, 0x01,
	/* Output Size Setting */
	0x034C, 0x12, 0x01,
	0x034D, 0x10, 0x01,
	0x034E, 0x0A, 0x01,
	0x034F, 0x2C, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xCA, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xD1, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x01, 0x01,
	0x32D5, 0x00, 0x01,
	0x32D6, 0x00, 0x01,
	0x401E, 0x00, 0x01,
	0x40B8, 0x01, 0x01,
	0x40B9, 0xFE, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0xCC, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0xCC, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x01, 0x01,
	0x5A17, 0x01, 0x01,
	0x5A25, 0x01, 0x01,
	0x5A33, 0x01, 0x01,
	0x98D7, 0xB4, 0x01,
	0x98D8, 0x8C, 0x01,
	0x98D9, 0x0A, 0x01,
	0x99C4, 0x16, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x00, 0x01,
	0x40A1, 0x00, 0x01,
	/* Integration Setting */
	0x0202, 0x0A, 0x01,
	0x0203, 0xE4, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x00, 0x01,
	0x4019, 0x00, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x00, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x00, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x00, 0x01,
};

const u32 sensor_imx682_setfile_A_2X2BIN_FULL_2304x1728_120FPS[] = {
	/* reg_V2H2_FAE3 */
	/* 2x2 Binning mode V2H2 Fast AE @120fps */
	/* H: 2304 */
	/* W: 1728 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x0A, 0x01,
	0x0343, 0xA8, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x08, 0x01,
	0x0341, 0xF2, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x00, 0x01,
	0x0347, 0x10, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x1B, 0x01,
	0x034B, 0x0F, 0x01,
	/* Mode Setting */
	0x0900, 0x01, 0x01,
	0x0901, 0x44, 0x01,
	0x0902, 0x0A, 0x01,
	0x30D8, 0x00, 0x01,
	0x3200, 0x43, 0x01,
	0x3201, 0x43, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x00, 0x01,
	0x0409, 0x04, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x00, 0x01,
	0x040C, 0x10, 0x01,
	0x040D, 0x00, 0x01,
	0x040E, 0x06, 0x01,
	0x040F, 0xC0, 0x01,
	/* Output Size Setting */
	0x034C, 0x09, 0x01,
	0x034D, 0x00, 0x01,
	0x034E, 0x06, 0x01,
	0x034F, 0xC0, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xAD, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x00, 0x01,
	0x030F, 0xD1, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x01, 0x01,
	0x32D5, 0x00, 0x01,
	0x32D6, 0x00, 0x01,
	0x401E, 0x4D, 0x01,
	0x40B8, 0x00, 0x01,
	0x40B9, 0x32, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0x08, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0x08, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x01, 0x01,
	0x5A17, 0x01, 0x01,
	0x5A25, 0x01, 0x01,
	0x5A33, 0x01, 0x01,
	0x98D7, 0xB4, 0x01,
	0x98D8, 0x8C, 0x01,
	0x98D9, 0x0A, 0x01,
	0x99C4, 0x16, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x00, 0x01,
	0x40A1, 0x00, 0x01,
	/* Integration Setting */
	0x0202, 0x08, 0x01,
	0x0203, 0xC2, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x00, 0x01,
	0x4019, 0x00, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x00, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x00, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x00, 0x01,
};

const u32 sensor_imx682_setfile_A_2X2BIN_FULL_2304x1296_240FPS[] = {
	/* reg_V2H2_SSL5 */
	/* 2x2 Binning mode V2H2 Slow Motion @240fps */
	/* H: 2304 */
	/* W: 1296 */
	/* MIPI output setting */
	0x0112, 0x0A, 0x01,
	0x0113, 0x0A, 0x01,
	0x0114, 0x02, 0x01,
	/* Line Length PCK Setting */
	0x0342, 0x0A, 0x01,
	0x0343, 0xA8, 0x01,
	/* Frame Length Lines Setting */
	0x0340, 0x05, 0x01,
	0x0341, 0xBC, 0x01,
	/* ROI Setting */
	0x0344, 0x00, 0x01,
	0x0345, 0x00, 0x01,
	0x0346, 0x03, 0x01,
	0x0347, 0x70, 0x01,
	0x0348, 0x24, 0x01,
	0x0349, 0x1F, 0x01,
	0x034A, 0x17, 0x01,
	0x034B, 0xAF, 0x01,
	/* Mode Setting */
	0x0900, 0x01, 0x01,
	0x0901, 0x44, 0x01,
	0x0902, 0x0A, 0x01,
	0x30D8, 0x00, 0x01,
	0x3200, 0x43, 0x01,
	0x3201, 0x43, 0x01,
	/* Digital Crop & Scaling */
	0x0408, 0x00, 0x01,
	0x0409, 0x04, 0x01,
	0x040A, 0x00, 0x01,
	0x040B, 0x00, 0x01,
	0x040C, 0x09, 0x01,
	0x040D, 0x00, 0x01,
	0x040E, 0x05, 0x01,
	0x040F, 0x10, 0x01,
	/* Output Size Setting */
	0x034C, 0x09, 0x01,
	0x034D, 0x00, 0x01,
	0x034E, 0x05, 0x01,
	0x034F, 0x10, 0x01,
	/* Clock Setting */
	0x0301, 0x08, 0x01,
	0x0303, 0x02, 0x01,
	0x0305, 0x03, 0x01,
	0x0306, 0x00, 0x01,
	0x0307, 0xDE, 0x01,
	0x030B, 0x01, 0x01,
	0x030D, 0x04, 0x01,
	0x030E, 0x01, 0x01,
	0x030F, 0x1C, 0x01,
	0x0310, 0x01, 0x01,
	/* Other Setting */
	0x30D9, 0x01, 0x01,
	0x32D5, 0x00, 0x01,
	0x32D6, 0x00, 0x01,
	0x401E, 0x4D, 0x01,
	0x40B8, 0x00, 0x01,
	0x40B9, 0x32, 0x01,
	0x40BC, 0x00, 0x01,
	0x40BD, 0x08, 0x01,
	0x40BE, 0x00, 0x01,
	0x40BF, 0x08, 0x01,
	0x41A4, 0x00, 0x01,
	0x5A09, 0x00, 0x01,
	0x5A17, 0x00, 0x01,
	0x5A25, 0x00, 0x01,
	0x5A33, 0x00, 0x01,
	0x98D7, 0xB4, 0x01,
	0x98D8, 0x8C, 0x01,
	0x98D9, 0x0A, 0x01,
	0x99C4, 0x16, 0x01,
	0x7107, 0x02, 0x01,
	0x40A0, 0x00, 0x01,
	0x40A1, 0x00, 0x01,
	/* Integration Setting */
	0x0202, 0x05, 0x01,
	0x0203, 0x8C, 0x01,
	/* Gain Setting */
	0x0204, 0x00, 0x01,
	0x0205, 0x00, 0x01,
	0x020E, 0x01, 0x01,
	0x020F, 0x00, 0x01,
	/* PDAF Setting */
	0x4018, 0x00, 0x01,
	0x4019, 0x00, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x00, 0x01,
	/* DPC correction ctrl Setting */
	0x0B06, 0x00, 0x01,
	/* PDAF TYPE Setting */
	0x3400, 0x02, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x00, 0x01,
};

const u32 sensor_imx682_pdaf_off_setfile_A[] = {
	/* PDAF Setting */
	0x4018, 0x00, 0x01,
	0x4019, 0x00, 0x01,
	0x401A, 0x00, 0x01,
	0x401B, 0x00, 0x01,
	/* PDAF TYPE2 Setting */
	0x3093, 0x00, 0x01,
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_A_2X2BIN_FULL_4624x3468_30FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1358500000,                  /* mipi_datarate = OPSYCK */
	219267000,                   /* pclk = VTPXCK of Clock Information */
	3874,                        /* frame_length_lines */
	9432,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_A_2X2BIN_FULL_4624x2604_30FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1358500000,                  /* mipi_datarate = OPSYCK */
	219267000,                   /* pclk = VTPXCK of Clock Information */
	3874,                        /* frame_length_lines */
	9432,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_A_2X2BIN_FULL_4624x2604_60FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1358500000,                  /* mipi_datarate = OPSYCK */
	175067000,                   /* pclk = VTPXCK of Clock Information */
	2836,                        /* frame_length_lines */
	5144,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_A_2X2BIN_FULL_2304x1728_120FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1358500000,                  /* mipi_datarate = OPSYCK */
	149933000,                   /* pclk = VTPXCK of Clock Information */
	2290,                        /* frame_length_lines */
	2728,                        /* line_length_pck */
};

const struct sensor_pll_info_compact sensor_imx682_pllinfo_A_2X2BIN_FULL_2304x1296_240FPS = {
	EXT_CLK_Mhz * 1000 * 1000,   /* ext_clk */
	1846000000,                  /* mipi_datarate = OPSYCK */
	192400000,                   /* pclk = VTPXCK of Clock Information */
	1468,                        /* frame_length_lines */
	2728,                        /* line_length_pck */
};

static const u32 *sensor_imx682_setfiles_A[] = {
	sensor_imx682_setfile_A_2X2BIN_FULL_4624x3468_30FPS,
	sensor_imx682_setfile_A_2X2BIN_FULL_4624x2604_30FPS,
	sensor_imx682_setfile_A_2X2BIN_FULL_4624x2604_60FPS,
	sensor_imx682_setfile_A_2X2BIN_FULL_2304x1728_120FPS,
	sensor_imx682_setfile_A_2X2BIN_FULL_2304x1296_240FPS,
};

static const u32 sensor_imx682_setfile_A_sizes[] = {
	ARRAY_SIZE(sensor_imx682_setfile_A_2X2BIN_FULL_4624x3468_30FPS),
	ARRAY_SIZE(sensor_imx682_setfile_A_2X2BIN_FULL_4624x2604_30FPS),
	ARRAY_SIZE(sensor_imx682_setfile_A_2X2BIN_FULL_4624x2604_60FPS),
	ARRAY_SIZE(sensor_imx682_setfile_A_2X2BIN_FULL_2304x1728_120FPS),
	ARRAY_SIZE(sensor_imx682_setfile_A_2X2BIN_FULL_2304x1296_240FPS),
};

static const struct sensor_pll_info_compact *sensor_imx682_pllinfos_A[] = {
	&sensor_imx682_pllinfo_A_2X2BIN_FULL_4624x3468_30FPS,
	&sensor_imx682_pllinfo_A_2X2BIN_FULL_4624x2604_30FPS,
	&sensor_imx682_pllinfo_A_2X2BIN_FULL_4624x2604_60FPS,
	&sensor_imx682_pllinfo_A_2X2BIN_FULL_2304x1728_120FPS,
	&sensor_imx682_pllinfo_A_2X2BIN_FULL_2304x1296_240FPS,
};

#endif

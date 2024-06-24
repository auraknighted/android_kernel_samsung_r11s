/*
 * s2mps24-private.h - Voltage regulator driver for the s2mps24
 *
 *  Copyright (C) 2020 Samsung Electrnoics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __LINUX_MFD_S2MPS24_REGULATOR_H
#define __LINUX_MFD_S2MPS24_REGULATOR_H
#include <linux/i2c.h>

#define MASK(width, shift)		(((0x1 << (width)) - 1) << shift)
#define SetBit(no)			(0x1 << (no))

#define S2MPS24_REG_INVALID		(0xFF)

/* PMIC Top-Level Registers */
#define S2MPS24_PMIC_REG_VGPIO0		0x00
#define S2MPS24_PMIC_REG_VGPIO1		0x01
#define S2MPS24_PMIC_REG_VGPIO2		0x02
#define S2MPS24_PMIC_REG_VGPIO3		0x03
#define	S2MPS24_PMIC_REG_PMICID		0x0D
#define S2MPS24_PMIC_REG_I3C_CONFIG	0x0E
#define S2MPS24_PMIC_REG_I3C_STSA	0x0F
#define	S2MPS24_PMIC_REG_IRQM		0x10 /* IRQM */
#define	S2MPS24_PMIC_REG_IRQM_MASK	0x01 /* IRQM MASK BIT*/
#define S2MPS24_PMIC_REG_OTP_TEST	0x15 /* COM_OTP_TEST */

/* PMIC CHIP ID H/W */
#define CHIP_ID_HW_MASK			(0x0F)

/* PMIC Registers */
#define S2MPS24_REG_INT1		0x00
#define S2MPS24_REG_INT2		0x01
#define S2MPS24_REG_INT3		0x02
#define S2MPS24_REG_INT4		0x03
#define S2MPS24_REG_INT5		0x04

#define S2MPS24_REG_INT1M		0x05
#define S2MPS24_REG_INT2M		0x06
#define S2MPS24_REG_INT3M		0x07
#define S2MPS24_REG_INT4M		0x08
#define S2MPS24_REG_INT5M		0x09

#define S2MPS24_REG_STATUS1		0x0A
#define S2MPS24_REG_STATUS2		0x0B

#define S2MPS24_REG_OFFSRC1		0x0C
#define S2MPS24_REG_OFFSRC2		0x0D

#define S2MPS24_REG_CTRL1		0x12
#define S2MPS24_REG_CTRL2		0x13
#define S2MPS24_REG_CTRL3		0x14

#define S2MPS24_REG_ETC_OTP1		0x15
#define S2MPS24_REG_ETC_OTP2		0x16
#define S2MPS24_REG_UVLO_OTP		0x17
#define S2MPS24_REG_CFG1		0x18
#define S2MPS24_REG_CFG2		0x19

#define S2MPS24_REG_BUCK1S_CTRL		0x1A
#define S2MPS24_REG_BUCK1S_OUT1		0x1B
#define S2MPS24_REG_BUCK1S_OUT2		0x1C
#define S2MPS24_REG_BUCK2S_CTRL		0x1D
#define S2MPS24_REG_BUCK2S_OUT1		0x1E
#define S2MPS24_REG_BUCK2S_OUT2		0x1F
#define S2MPS24_REG_BUCK2S_OUT3		0x20
#define S2MPS24_REG_BUCK3S_CTRL		0x21
#define S2MPS24_REG_BUCK3S_OUT1		0x22
#define S2MPS24_REG_BUCK3S_OUT2		0x23
#define S2MPS24_REG_BUCK3S_OUT3		0x24
#define S2MPS24_REG_BUCK4S_CTRL		0x25
#define S2MPS24_REG_BUCK4S_OUT1		0x26
#define S2MPS24_REG_BUCK4S_OUT2		0x27
#define S2MPS24_REG_BUCK5S_CTRL		0x28
#define S2MPS24_REG_BUCK5S_OUT1		0x29
#define S2MPS24_REG_BUCK5S_OUT2		0x2A
#define S2MPS24_REG_BUCK6S_CTRL		0x2B
#define S2MPS24_REG_BUCK6S_OUT1		0x2C
#define S2MPS24_REG_BUCK7S_CTRL		0x2D
#define S2MPS24_REG_BUCK7S_OUT1		0x2E
#define S2MPS24_REG_BUCK8S_CTRL		0x2F
#define S2MPS24_REG_BUCK8S_OUT1		0x30
#define S2MPS24_REG_BB_CTRL		0x31
#define S2MPS24_REG_BB_OUT		0x32

#define S2MPS24_REG_BUCK_DVS1		0x33
#define S2MPS24_REG_BUCK_DVS2		0x34
#define S2MPS24_REG_BUCK_DVS3		0x35
#define S2MPS24_REG_BUCK_DVS4		0x36
#define S2MPS24_REG_BUCK_DVS5		0x37
#define S2MPS24_REG_BUCK_DVS6		0x38

#define S2MPS24_REG_AVP_CTRL1		0x39
#define S2MPS24_REG_AVP_CTRL2		0x3A

#define S2MPS24_REG_DVS_LDO1_CTRL	0x3B
#define S2MPS24_REG_DVS_LDO2_CTRL	0x3C
#define S2MPS24_REG_DVS_LDO3_CTRL	0x3D
#define S2MPS24_REG_DVS_LDO22_CTRL	0x3E

#define S2MPS24_REG_LDO_RAMP1		0X3F

#define S2MPS24_REG_LDO1S_CTRL		0x40
#define S2MPS24_REG_LDO2S_CTRL		0x41
#define S2MPS24_REG_LDO3S_CTRL		0x42
#define S2MPS24_REG_LDO4S_CTRL		0x43
#define S2MPS24_REG_LDO5S_CTRL		0x44
#define S2MPS24_REG_LDO6S_CTRL		0x45
#define S2MPS24_REG_LDO7S_CTRL		0x46
#define S2MPS24_REG_LDO8S_CTRL		0X47
#define S2MPS24_REG_LDO9S_CTRL		0X48
#define S2MPS24_REG_LDO10S_CTRL		0X49
#define S2MPS24_REG_LDO11S_CTRL		0X4A
#define S2MPS24_REG_LDO12S_CTRL		0X4B
#define S2MPS24_REG_LDO13S_CTRL		0X4C
#define S2MPS24_REG_LDO14S_CTRL		0X4D
#define S2MPS24_REG_LDO15S_CTRL		0X4E
#define S2MPS24_REG_LDO16S_CTRL		0X4F
#define S2MPS24_REG_LDO17S_CTRL		0X50
#define S2MPS24_REG_LDO18S_CTRL		0X51
#define S2MPS24_REG_LDO19S_CTRL		0X52
#define S2MPS24_REG_LDO20S_CTRL		0X53
#define S2MPS24_REG_LDO21S_CTRL		0X54
#define S2MPS24_REG_LDO22S_CTRL		0X55
#define S2MPS24_REG_LDO23S_CTRL		0X56

#define S2MPS24_REG_LDO_DSCH1		0x57
#define S2MPS24_REG_LDO_DSCH2		0x58
#define S2MPS24_REG_LDO_DSCH3		0x59
#define S2MPS24_REG_LDO_DSCH4		0x5A
#define S2MPS24_REG_LDO_DSCH5		0x5B

#define S2MPS24_REG_IOCONF		0x5C
#define S2MPS24_REG_IPTAT		0x5D

#define S2MPS24_REG_ONSEQ_CTRL1		0x5E
#define S2MPS24_REG_ONSEQ_CTRL2		0x5F
#define S2MPS24_REG_ONSEQ_CTRL3		0x60
#define S2MPS24_REG_ONSEQ_CTRL4		0x61
#define S2MPS24_REG_ONSEQ_CTRL5		0x62
#define S2MPS24_REG_ONSEQ_CTRL6		0x63
#define S2MPS24_REG_ONSEQ_CTRL7		0x64
#define S2MPS24_REG_ONSEQ_CTRL8		0x65
#define S2MPS24_REG_ONSEQ_CTRL9		0x66
#define S2MPS24_REG_ONSEQ_CTRL10	0x67
#define S2MPS24_REG_ONSEQ_CTRL11	0x68
#define S2MPS24_REG_ONSEQ_CTRL12	0x69
#define S2MPS24_REG_ONSEQ_CTRL13	0x6A
#define S2MPS24_REG_ONSEQ_CTRL14	0x6B
#define S2MPS24_REG_ONSEQ_CTRL15	0x6C
#define S2MPS24_REG_ONSEQ_CTRL16	0x6D
#define S2MPS24_REG_ONSEQ_CTRL17	0x6E
#define S2MPS24_REG_ONSEQ_CTRL18	0x6F
#define S2MPS24_REG_ONSEQ_CTRL19	0x70
#define S2MPS24_REG_ONSEQ_CTRL20	0x71
#define S2MPS24_REG_ONSEQ_CTRL21	0x72
#define S2MPS24_REG_ONSEQ_CTRL22	0x73
#define S2MPS24_REG_ONSEQ_CTRL23	0x74
#define S2MPS24_REG_ONSEQ_CTRL24	0x75
#define S2MPS24_REG_ONSEQ_CTRL25	0x76
#define S2MPS24_REG_ONSEQ_CTRL26	0x77
#define S2MPS24_REG_ONSEQ_CTRL27	0x78

#define S2MPS24_REG_OFF_SEQ_CTRL1	0x79
#define S2MPS24_REG_OFF_SEQ_CTRL2	0x7A
#define S2MPS24_REG_OFF_SEQ_CTRL3	0x7B
#define S2MPS24_REG_OFF_SEQ_CTRL4	0x7C
#define S2MPS24_REG_OFF_SEQ_CTRL5	0x7D
#define S2MPS24_REG_OFF_SEQ_CTRL6	0x7E
#define S2MPS24_REG_OFF_SEQ_CTRL7	0x7F
#define S2MPS24_REG_OFF_SEQ_CTRL8	0x80
#define S2MPS24_REG_OFF_SEQ_CTRL9	0x81
#define S2MPS24_REG_OFF_SEQ_CTRL10	0x82
#define S2MPS24_REG_OFF_SEQ_CTRL11	0x83
#define S2MPS24_REG_OFF_SEQ_CTRL12	0x84
#define S2MPS24_REG_OFF_SEQ_CTRL13	0x85
#define S2MPS24_REG_OFF_SEQ_CTRL14	0x86
#define S2MPS24_REG_OFF_SEQ_CTRL15	0x87
#define S2MPS24_REG_OFF_SEQ_CTRL16	0x88

#define S2MPS24_REG_CONTROL_SEL1	0x89
#define S2MPS24_REG_CONTROL_SEL2	0x8A
#define S2MPS24_REG_CONTROL_SEL3	0x8B
#define S2MPS24_REG_CONTROL_SEL4	0x8C
#define S2MPS24_REG_CONTROL_SEL5	0x8D
#define S2MPS24_REG_CONTROL_SEL6	0x8E
#define S2MPS24_REG_CONTROL_SEL7	0x8F
#define S2MPS24_REG_CONTROL_SEL8	0x90
#define S2MPS24_REG_CONTROL_SEL9	0x91
#define S2MPS24_REG_CONTROL_SEL10	0x92
#define S2MPS24_REG_CONTROL_SEL11	0x93
#define S2MPS24_REG_CONTROL_SEL12	0x94
#define S2MPS24_REG_CONTROL_SEL13	0x95
#define S2MPS24_REG_CONTROL_SEL14	0x96
#define S2MPS24_REG_CONTROL_SEL15	0x97
#define S2MPS24_REG_CONTROL_SEL16	0x98

#define S2MPS24_REG_OFF_CTRL1		0x99
#define S2MPS24_REG_OFF_CTRL2		0x9A
#define S2MPS24_REG_OFF_CTRL3		0x9B
#define S2MPS24_REG_OFF_CTRL4		0x9C
#define S2MPS24_REG_OFF_CTRL5		0x9D

#define S2MPS24_REG_SUB_CTRL		0x9E

#define S2MPS24_REG_AFM_WARN1		0x9F
#define S2MPS24_REG_AFM_WARN1_X		0xA0
#define S2MPS24_REG_AFM_WARN1_Y		0xA1
#define S2MPS24_REG_AFM_WARN1_Z		0xA2
#define S2MPS24_REG_AFM_WARN2		0xA3
#define S2MPS24_REG_AFM_WARN2_X		0xA4
#define S2MPS24_REG_AFM_WARN2_Y		0xA5
#define S2MPS24_REG_AFM_WARN2_Z		0xA6
#define S2MPS24_REG_AFM_WARN3		0xA7
#define S2MPS24_REG_AFM_WARN3_X		0xA8
#define S2MPS24_REG_AFM_WARN3_Y		0xA9
#define S2MPS24_REG_AFM_WARN3_Z		0xAA
#define S2MPS24_REG_AFM_WARN4		0xAB
#define S2MPS24_REG_AFM_WARN4_X		0xAC
#define S2MPS24_REG_AFM_WARN4_Y		0xAD
#define S2MPS24_REG_AFM_WARN4_Z		0xAE

#define S2MPS24_REG_BUCK_OI_EN1		0xAF
#define S2MPS24_REG_BUCK_OI_EN2		0xB0
#define S2MPS24_REG_BUCK_OI_PD_EN1	0XB1
#define S2MPS24_REG_BUCK_OI_PD_EN2	0XB2

#define S2MPS24_REG_BUCK_OI_CTRL1	0xB3
#define S2MPS24_REG_BUCK_OI_CTRL2	0xB4
#define S2MPS24_REG_BUCK_OI_CTRL3	0xB5
#define S2MPS24_REG_BUCK_OI_CTRL4	0xB6
#define S2MPS24_REG_BUCK_OI_CTRL5	0xB7
#define S2MPS24_REG_BUCK_OI_CTRL6	0xB8
#define S2MPS24_REG_BUCK_OI_CTRL7	0xB9

#define S2MPS24_REG_BUCK_OVP_EN1	0xBA
#define S2MPS24_REG_BUCK_OVP_EN2	0xBB

#define S2MPS24_REG_SEQ_CTRL		0xBC
#define S2MPS24_REG_CFG_PM2		0xBD
#define S2MPS24_REG_PSI_CTRL1		0xBE
#define S2MPS24_REG_PSI_CTRL2		0xBF
#define S2MPS24_REG_OFF_SEQ_SKIP	0xC0
#define S2MPS24_REG_SEL_HW_GPIO		0xC1
#define S2MPS24_REG_ETX_EN		0xC2
#define S2MPS24_REG_PSI_CTRL3		0xC3
#define S2MPS24_REG_PSI_CTRL4		0xC4
#define S2MPS24_REG_PERI_CNT_R		0xC5
#define S2MPS24_REG_BUCK_PH_MODE	0xC6
#define S2MPS24_REG_PROT_CTRL		0xC7
#define S2MPS24_REG_PERI_UPDATE		0xC8

#define S2MPS24_REG_VGPIO0		0xF0
#define S2MPS24_REG_VGPIO1		0xF1
#define S2MPS24_REG_VGPIO2		0xF2
#define S2MPS24_REG_VGPIO3		0xF3

#define S2MPS24_REG_EXT_CTRLX		0xFB
#define S2MPS24_REG_EXT_CTRL2		0xFE
#define S2MPS24_REG_EXT_CTRL1		0xFF

#define S2MPS24_AFM_WARN_EN_SHIFT	7
#define S2MPS24_AFM_WARN_CNT_SHIFT	6
#define S2MPS24_AFM_WARN_DVS_MASK_SHIFT	5
#define S2MPS24_AFM_WARN_LV_SHIFT	0

/* regulator mask */
#define BUCK_RAMP_MASK			(0x03)

/* CONTROL_SEL */
#define S2MPS24_CONTROL_SEL_NUM		16
#define S2MPS24_CONTROL_SEL_MAX_VAL	0xFF
#define S2MPS24_PWREN_MIF_MASK		0x00
#define S2MPS24_PWREN_CPUCL0_MASK	0x01
#define S2MPS24_PWREN_CPUCL1_MASK	0x02
#define S2MPS24_PWREN_CPUCL2_MASK	0x03
#define S2MPS24_PWREN_G3D_MASK		0x04
#define S2MPS24_PWREN_NPU_MASK		0x05
#define S2MPS24_PWREN_CP_MASK		0x06
#define S2MPS24_PWREN_CLK_MASK		0x07
#define S2MPS24_PWREN_RF0_MASK		0x08
#define S2MPS24_PWREN_RF1_MASK		0x09
#define S2MPS24_PWREN_NFC_MASK		0x0A
#define S2MPS24_PWREN_CPUCL0_CPUCL1_MASK	0x0C
#define S2MPS24_PWREN_CPUCL0_CPUCL2_MASK	0x0D
#define S2MPS24_PWREN_RF0_RF1_MASK		0x0E
#define S2MPS24_PWREN_CLK_RF0_RF1_NFC_MASK	0x0F

/* WTSR Mask */
#define S2MPS24_WTSREN_MASK		MASK(1,2)

/* S2MPS24 Regulator ids */
enum S2MPS24_regulators {
	S2MPS24_LDO1,
	S2MPS24_LDO2,
	S2MPS24_LDO3,
	S2MPS24_LDO4,
/*
	S2MPS24_LDO5,
*/
	S2MPS24_LDO6,
/*	S2MPS24_LDO7,
	S2MPS24_LDO8,
*/
	S2MPS24_LDO9,
/*
	S2MPS24_LDO10,
	S2MPS24_LDO11,
	S2MPS24_LDO12,
	S2MPS24_LDO13,
*/
	S2MPS24_LDO14,
/*
	S2MPS24_LDO15,
*/
	S2MPS24_LDO16,
	S2MPS24_LDO17,
	S2MPS24_LDO18,
	S2MPS24_LDO19,
	S2MPS24_LDO20,
	S2MPS24_LDO21,
	S2MPS24_LDO22,
	S2MPS24_LDO23,
	S2MPS24_BUCK1,
	S2MPS24_BUCK2,
	S2MPS24_BUCK3,
	S2MPS24_BUCK4,
	S2MPS24_BUCK5,
	S2MPS24_BUCK6,
	S2MPS24_BUCK7,
	S2MPS24_BUCK8,
	S2MPS24_BB,

	S2MPS24_REG_MAX,
};

/* BUCKs 1S ~ 8S  */
#define S2MPS24_BUCK_MIN1		300000
#define S2MPS24_BUCK_STEP1		6250
/* BUCK BB */
#define S2MPS24_BB_MIN1			2600000
#define S2MPS24_BB_STEP1		12500
/* LDOs 1S/2S/3S/22S */
#define S2MPS24_LDO_MIN1		300000
#define S2MPS24_LDO_STEP1		25000
/* LDOs 4S/5S/10S/11S/13S/14S/15S/16S */
#define S2MPS24_LDO_MIN2		725000
#define S2MPS24_LDO_STEP2		12500
/* LDOs 6S/7S/8S/9S/12S/17S/18S/19S/20S/21S/23S */
#define S2MPS24_LDO_MIN3		1800000
#define S2MPS24_LDO_STEP3		25000

/* LDO/BUCK output voltage control */
#define S2MPS24_LDO_VSEL_MASK		0x3F
#define S2MPS24_BUCK_VSEL_MASK		0xFF
#define S2MPS24_BB_VSEL_MASK		0x7F
#define S2MPS24_LDO_N_VOLTAGES		(S2MPS24_LDO_VSEL_MASK + 1)
#define S2MPS24_BUCK_N_VOLTAGES 	(S2MPS24_BUCK_VSEL_MASK + 1)
#define S2MPS24_BB_N_VOLTAGES		(S2MPS24_BB_VSEL_MASK +1)

/* BUCK/LDO Enable control[7:6] */
#define S2MPS24_ENABLE_SHIFT		0x06
#define S2MPS24_ENABLE_MASK		(0x03 << S2MPS24_ENABLE_SHIFT)
#define CONTROL_SEL_ON		(0x01 << S2MPS24_ENABLE_SHIFT)
#define CONTROL_SEL_NORMAL	(0x02 << S2MPS24_ENABLE_SHIFT)

#define S2MPS24_REGULATOR_MAX		(S2MPS24_REG_MAX)
#define SEC_PMIC_REV(iodev)		(iodev)->pmic_rev
/* Set LDO/BUCK soft time */
#define S2MPS24_ENABLE_TIME_LDO		128
#define S2MPS24_ENABLE_TIME_BUCK	130
#define S2MPS24_ENABLE_TIME_BB		160

#define S2MPS24_BUCK_OCP_IRQ_NUM	4	/* S2MPS24_IRQ_OCP_Bx_INT3 */

/* OI mask */
#define S2MPS24_PMIC_IRQ_OI_B1_MASK	(1 << 0)
#define S2MPS24_PMIC_IRQ_OI_B2_MASK	(1 << 1)
#define S2MPS24_PMIC_IRQ_OI_B3_MASK	(1 << 2)
#define S2MPS24_PMIC_IRQ_OI_B4_MASK	(1 << 3)
#define S2MPS24_PMIC_IRQ_OI_B5_MASK	(1 << 4)
#define S2MPS24_PMIC_IRQ_OI_B6_MASK	(1 << 5)
#define S2MPS24_PMIC_IRQ_OI_B7_MASK	(1 << 6)
#define S2MPS24_PMIC_IRQ_OI_B8_MASK	(1 << 7)
#define S2MPS24_PMIC_IRQ_OI_BB_MASK	(1 << 0)

/* OCP mask */
#define S2MPS24_PMIC_IRQ_OCP_B1_MASK	(1 << 0)
#define S2MPS24_PMIC_IRQ_OCP_B2_MASK	(1 << 1)
#define S2MPS24_PMIC_IRQ_OCP_B3_MASK	(1 << 2)
#define S2MPS24_PMIC_IRQ_OCP_B4_MASK	(1 << 3)
#define S2MPS24_PMIC_IRQ_OCP_B5_MASK	(1 << 4)
#define S2MPS24_PMIC_IRQ_OCP_B6_MASK	(1 << 5)
#define S2MPS24_PMIC_IRQ_OCP_B7_MASK	(1 << 6)
#define S2MPS24_PMIC_IRQ_OCP_B8_MASK	(1 << 7)
#define S2MPS24_PMIC_IRQ_OCP_BB_MASK	(1 << 0)

/* Temp mask */
#define S2MPS24_IRQ_INT120C_MASK	(1 << 2)
#define S2MPS24_IRQ_INT140C_MASK	(1 << 3)

/*
 * sec_opmode_data - regulator operation mode data
 * @id: regulator id
 * @mode: regulator operation mode
 */

enum s2mps24_temperature_source {
	S2MPS24_TEMP_120 = 0,	/* 120 degree */
	S2MPS24_TEMP_140,	/* 140 degree */

	S2MPS24_TEMP_NR,
};

enum s2mps24_irq_source {
	S2MPS24_PMIC_INT1 = 0,
	S2MPS24_PMIC_INT2,
	S2MPS24_PMIC_INT3,
	S2MPS24_PMIC_INT4,
	S2MPS24_PMIC_INT5,

	S2MPS24_IRQ_GROUP_NR,
};

#define S2MPS24_NUM_IRQ_PMIC_REGS	5
#define S2MPS24_BUCK_MAX		8
#define S2MPS24_TEMP_MAX		2

enum s2mps24_irq {
	/* PMIC */
	S2MPS24_IRQ_PWRONF_INT1,
	S2MPS24_IRQ_PWRONR_INT1,
	S2MPS24_IRQ_INT120C_INT1,
	S2MPS24_IRQ_INT140C_INT1,
	S2MPS24_IRQ_TSD_INT1,
	S2MPS24_IRQ_WTSR_INT1,
	S2MPS24_IRQ_WRSTB_INT1,

	S2MPS24_IRQ_OCP_B1S_INT2,
	S2MPS24_IRQ_OCP_B2S_INT2,
	S2MPS24_IRQ_OCP_B3S_INT2,
	S2MPS24_IRQ_OCP_B4S_INT2,
	S2MPS24_IRQ_OCP_B5S_INT2,
	S2MPS24_IRQ_OCP_B6S_INT2,
	S2MPS24_IRQ_OCP_B7S_INT2,
	S2MPS24_IRQ_OCP_B8S_INT2,

	S2MPS24_IRQ_OCP_BB_INT3,
	S2MPS24_IRQ_UV_BB_INT3,
	S2MPS24_IRQ_BB_NTR_DET_INT3,
	S2MPS24_IRQ_OVP_INT3,

	S2MPS24_IRQ_OI_B1S_INT4,
	S2MPS24_IRQ_OI_B2S_INT4,
	S2MPS24_IRQ_OI_B3S_INT4,
	S2MPS24_IRQ_OI_B4S_INT4,
	S2MPS24_IRQ_OI_B5S_INT4,
	S2MPS24_IRQ_OI_B6S_INT4,
	S2MPS24_IRQ_OI_B7S_INT4,
	S2MPS24_IRQ_OI_B8S_INT4,

	S2MPS24_IRQ_OI_BB_INT5,
	S2MPS24_IRQ_LDO17_SCP_INT5,
	S2MPS24_IRQ_LDO09_SCP_INT5,
	S2MPS24_IRQ_LDO08_SCP_INT5,
	S2MPS24_IRQ_LDO07_SCP_INT5,
	S2MPS24_IRQ_PARITY_ERR0_INT5,
	S2MPS24_IRQ_PARITY_ERR1_INT5,
	S2MPS24_IRQ_PARITY_ERR2_INT5,

	S2MPS24_IRQ_NR,
};

enum s2mps24_irq_type {
	/* OI */
	S2MPS24_IRQ_OI_B1S = 1,
	S2MPS24_IRQ_OI_B2S,
	S2MPS24_IRQ_OI_B3S,
	S2MPS24_IRQ_OI_B4S,
	S2MPS24_IRQ_OI_B5S,
	S2MPS24_IRQ_OI_B6S,
	S2MPS24_IRQ_OI_B7S,
	S2MPS24_IRQ_OI_B8S,
	S2MPS24_IRQ_OI_BBS,
	/* OCP */
	S2MPS24_IRQ_OCP_B1S,
	S2MPS24_IRQ_OCP_B2S,
	S2MPS24_IRQ_OCP_B3S,
	S2MPS24_IRQ_OCP_B4S,
	S2MPS24_IRQ_OCP_B5S,
	S2MPS24_IRQ_OCP_B6S,
	S2MPS24_IRQ_OCP_B7S,
	S2MPS24_IRQ_OCP_B8S,
	S2MPS24_IRQ_OCP_BBS,
	/* Temp */
	S2MPS24_IRQ_INT120C,
	S2MPS24_IRQ_INT140C,
};

enum sec_device_type {
	S2MPS24X,
};

struct s2mps24_dev {
	/* pmic VER/REV register */
	u8 pmic_rev;	/* pmic Rev */

	bool wakeup;

	int type;
	int device_type;

	int irq;
	int irq_base;
	int irq_masks_cur[S2MPS24_IRQ_GROUP_NR];
	int irq_masks_cache[S2MPS24_IRQ_GROUP_NR];

	struct device *dev;
	struct i2c_client *i2c;
	struct i2c_client *pmic;
	struct i2c_client *debug_i2c;
	struct i2c_client *adc_i2c;
	struct mutex i2c_lock;

	struct apm_ops *ops;
	//struct mutex irqlock;
	struct mutex irq_lock;
	struct s2mps24_platform_data *pdata;
#if IS_ENABLED(CONFIG_DRV_SAMSUNG_PMIC)
	struct device *powermeter_dev;
	struct device *irq_dev;
#endif
	/* power meter */
	struct adc_info *adc_meter;
	int adc_mode;

	/* Work queue */
	struct workqueue_struct *irq_wqueue;
	struct delayed_work irq_work;
};

enum s2mps24_types {
	TYPE_S2MPS24,
};

extern int s2mps24_adc_set_enable(struct adc_info *adc_meter, int en);
extern int s2mps24_irq_init(struct s2mps24_dev *s2mps24);
extern void s2mps24_irq_exit(struct s2mps24_dev *s2mps24);

extern void s2mps24_powermeter_init(struct s2mps24_dev *s2mps24);
extern void s2mps24_powermeter_deinit(struct s2mps24_dev *s2mps24);

/* S2MPS24 shared i2c API function */
extern int s2mps24_read_reg(struct i2c_client *i2c, u8 reg, u8 *dest);
extern int s2mps24_bulk_read(struct i2c_client *i2c, u8 reg, int count,
			     u8 *buf);
extern int s2mps24_write_reg(struct i2c_client *i2c, u8 reg, u8 value);
extern int s2mps24_bulk_write(struct i2c_client *i2c, u8 reg, int count,
			      u8 *buf);
extern int s2mps24_write_word(struct i2c_client *i2c, u8 reg, u16 value);
extern int s2mps24_read_word(struct i2c_client *i2c, u8 reg);

extern int s2mps24_update_reg(struct i2c_client *i2c, u8 reg, u8 val, u8 mask);
extern void s2mps24_call_notifier(void);
extern int s2mps24_notifier_init(struct s2mps24_dev *s2mps24);
extern void s2mps24_notifier_deinit(struct s2mps24_dev *s2mps24);
#if IS_ENABLED(CONFIG_EXYNOS_AFM)
extern void get_s2mps24_i2c(struct i2c_client **i2c);
#endif

#endif /* __LINUX_MFD_S2MPS24_REGULATOR_H */

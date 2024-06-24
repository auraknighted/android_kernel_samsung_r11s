// SPDX-License-Identifier: GPL-2.0
/*
 * SH7786 Pinmux
 *
 * Copyright (C) 2008, 2009  Renesas Solutions Corp.
 * Kuninori Morimoto <morimoto.kuninori@renesas.com>
 *
 *  Based on SH7785 pinmux
 *
 *  Copyright (C) 2008  Magnus Damm
 */

#include <linux/init.h>
#include <linux/kernel.h>
#include <cpu/sh7786.h>

#include "sh_pfc.h"

enum {
	PINMUX_RESERVED = 0,

	PINMUX_DATA_BEGIN,
	PA7_DATA, PA6_DATA, PA5_DATA, PA4_DATA,
	PA3_DATA, PA2_DATA, PA1_DATA, PA0_DATA,
	PB7_DATA, PB6_DATA, PB5_DATA, PB4_DATA,
	PB3_DATA, PB2_DATA, PB1_DATA, PB0_DATA,
	PC7_DATA, PC6_DATA, PC5_DATA, PC4_DATA,
	PC3_DATA, PC2_DATA, PC1_DATA, PC0_DATA,
	PD7_DATA, PD6_DATA, PD5_DATA, PD4_DATA,
	PD3_DATA, PD2_DATA, PD1_DATA, PD0_DATA,
	PE7_DATA, PE6_DATA,
	PF7_DATA, PF6_DATA, PF5_DATA, PF4_DATA,
	PF3_DATA, PF2_DATA, PF1_DATA, PF0_DATA,
	PG7_DATA, PG6_DATA, PG5_DATA,
	PH7_DATA, PH6_DATA, PH5_DATA, PH4_DATA,
	PH3_DATA, PH2_DATA, PH1_DATA, PH0_DATA,
	PJ7_DATA, PJ6_DATA, PJ5_DATA, PJ4_DATA,
	PJ3_DATA, PJ2_DATA, PJ1_DATA,
	PINMUX_DATA_END,

	PINMUX_INPUT_BEGIN,
	PA7_IN, PA6_IN, PA5_IN, PA4_IN,
	PA3_IN, PA2_IN, PA1_IN, PA0_IN,
	PB7_IN, PB6_IN, PB5_IN, PB4_IN,
	PB3_IN, PB2_IN, PB1_IN, PB0_IN,
	PC7_IN, PC6_IN, PC5_IN, PC4_IN,
	PC3_IN, PC2_IN, PC1_IN, PC0_IN,
	PD7_IN, PD6_IN, PD5_IN, PD4_IN,
	PD3_IN, PD2_IN, PD1_IN, PD0_IN,
	PE7_IN, PE6_IN,
	PF7_IN, PF6_IN, PF5_IN, PF4_IN,
	PF3_IN, PF2_IN, PF1_IN, PF0_IN,
	PG7_IN, PG6_IN, PG5_IN,
	PH7_IN, PH6_IN, PH5_IN, PH4_IN,
	PH3_IN, PH2_IN, PH1_IN, PH0_IN,
	PJ7_IN, PJ6_IN, PJ5_IN, PJ4_IN,
	PJ3_IN, PJ2_IN, PJ1_IN,
	PINMUX_INPUT_END,

	PINMUX_OUTPUT_BEGIN,
	PA7_OUT, PA6_OUT, PA5_OUT, PA4_OUT,
	PA3_OUT, PA2_OUT, PA1_OUT, PA0_OUT,
	PB7_OUT, PB6_OUT, PB5_OUT, PB4_OUT,
	PB3_OUT, PB2_OUT, PB1_OUT, PB0_OUT,
	PC7_OUT, PC6_OUT, PC5_OUT, PC4_OUT,
	PC3_OUT, PC2_OUT, PC1_OUT, PC0_OUT,
	PD7_OUT, PD6_OUT, PD5_OUT, PD4_OUT,
	PD3_OUT, PD2_OUT, PD1_OUT, PD0_OUT,
	PE7_OUT, PE6_OUT,
	PF7_OUT, PF6_OUT, PF5_OUT, PF4_OUT,
	PF3_OUT, PF2_OUT, PF1_OUT, PF0_OUT,
	PG7_OUT, PG6_OUT, PG5_OUT,
	PH7_OUT, PH6_OUT, PH5_OUT, PH4_OUT,
	PH3_OUT, PH2_OUT, PH1_OUT, PH0_OUT,
	PJ7_OUT, PJ6_OUT, PJ5_OUT, PJ4_OUT,
	PJ3_OUT, PJ2_OUT, PJ1_OUT,
	PINMUX_OUTPUT_END,

	PINMUX_FUNCTION_BEGIN,
	PA7_FN, PA6_FN, PA5_FN, PA4_FN,
	PA3_FN, PA2_FN, PA1_FN, PA0_FN,
	PB7_FN, PB6_FN, PB5_FN, PB4_FN,
	PB3_FN, PB2_FN, PB1_FN, PB0_FN,
	PC7_FN, PC6_FN, PC5_FN, PC4_FN,
	PC3_FN, PC2_FN, PC1_FN, PC0_FN,
	PD7_FN, PD6_FN, PD5_FN, PD4_FN,
	PD3_FN, PD2_FN, PD1_FN, PD0_FN,
	PE7_FN, PE6_FN,
	PF7_FN, PF6_FN, PF5_FN, PF4_FN,
	PF3_FN, PF2_FN, PF1_FN, PF0_FN,
	PG7_FN, PG6_FN, PG5_FN,
	PH7_FN, PH6_FN, PH5_FN, PH4_FN,
	PH3_FN, PH2_FN, PH1_FN, PH0_FN,
	PJ7_FN, PJ6_FN, PJ5_FN, PJ4_FN,
	PJ3_FN, PJ2_FN, PJ1_FN,
	P1MSEL14_0, P1MSEL14_1,
	P1MSEL13_0, P1MSEL13_1,
	P1MSEL12_0, P1MSEL12_1,
	P1MSEL11_0, P1MSEL11_1,
	P1MSEL10_0, P1MSEL10_1,
	P1MSEL9_0, P1MSEL9_1,
	P1MSEL8_0, P1MSEL8_1,
	P1MSEL7_0, P1MSEL7_1,
	P1MSEL6_0, P1MSEL6_1,
	P1MSEL5_0, P1MSEL5_1,
	P1MSEL4_0, P1MSEL4_1,
	P1MSEL3_0, P1MSEL3_1,
	P1MSEL2_0, P1MSEL2_1,
	P1MSEL1_0, P1MSEL1_1,
	P1MSEL0_0, P1MSEL0_1,

	P2MSEL15_0, P2MSEL15_1,
	P2MSEL14_0, P2MSEL14_1,
	P2MSEL13_0, P2MSEL13_1,
	P2MSEL12_0, P2MSEL12_1,
	P2MSEL11_0, P2MSEL11_1,
	P2MSEL10_0, P2MSEL10_1,
	P2MSEL9_0, P2MSEL9_1,
	P2MSEL8_0, P2MSEL8_1,
	P2MSEL7_0, P2MSEL7_1,
	P2MSEL6_0, P2MSEL6_1,
	P2MSEL5_0, P2MSEL5_1,
	P2MSEL4_0, P2MSEL4_1,
	P2MSEL3_0, P2MSEL3_1,
	P2MSEL2_0, P2MSEL2_1,
	P2MSEL1_0, P2MSEL1_1,
	P2MSEL0_0, P2MSEL0_1,
	PINMUX_FUNCTION_END,

	PINMUX_MARK_BEGIN,
	DCLKIN_MARK, DCLKOUT_MARK, ODDF_MARK,
	VSYNC_MARK, HSYNC_MARK, CDE_MARK, DISP_MARK,
	DR0_MARK, DR1_MARK, DR2_MARK, DR3_MARK, DR4_MARK, DR5_MARK,
	DG0_MARK, DG1_MARK, DG2_MARK, DG3_MARK, DG4_MARK, DG5_MARK,
	DB0_MARK, DB1_MARK, DB2_MARK, DB3_MARK, DB4_MARK, DB5_MARK,
	ETH_MAGIC_MARK, ETH_LINK_MARK, ETH_TX_ER_MARK, ETH_TX_EN_MARK,
	ETH_MDIO_MARK, ETH_RX_CLK_MARK, ETH_MDC_MARK, ETH_COL_MARK,
	ETH_TX_CLK_MARK, ETH_CRS_MARK, ETH_RX_DV_MARK, ETH_RX_ER_MARK,
	ETH_TXD3_MARK, ETH_TXD2_MARK, ETH_TXD1_MARK, ETH_TXD0_MARK,
	ETH_RXD3_MARK, ETH_RXD2_MARK, ETH_RXD1_MARK, ETH_RXD0_MARK,
	HSPI_CLK_MARK, HSPI_CS_MARK, HSPI_RX_MARK, HSPI_TX_MARK,
	SCIF0_CTS_MARK, SCIF0_RTS_MARK,
	SCIF0_SCK_MARK, SCIF0_RXD_MARK, SCIF0_TXD_MARK,
	SCIF1_SCK_MARK, SCIF1_RXD_MARK, SCIF1_TXD_MARK,
	SCIF3_SCK_MARK, SCIF3_RXD_MARK, SCIF3_TXD_MARK,
	SCIF4_SCK_MARK, SCIF4_RXD_MARK, SCIF4_TXD_MARK,
	SCIF5_SCK_MARK, SCIF5_RXD_MARK, SCIF5_TXD_MARK,
	BREQ_MARK, IOIS16_MARK, CE2B_MARK, CE2A_MARK, BACK_MARK,
	FALE_MARK, FRB_MARK, FSTATUS_MARK,
	FSE_MARK, FCLE_MARK,
	DACK0_MARK, DACK1_MARK, DACK2_MARK, DACK3_MARK,
	DREQ0_MARK, DREQ1_MARK, DREQ2_MARK, DREQ3_MARK,
	DRAK0_MARK, DRAK1_MARK, DRAK2_MARK, DRAK3_MARK,
	USB_OVC1_MARK, USB_OVC0_MARK,
	USB_PENC1_MARK, USB_PENC0_MARK,
	HAC_RES_MARK,
	HAC1_SDOUT_MARK, HAC1_SDIN_MARK, HAC1_SYNC_MARK, HAC1_BITCLK_MARK,
	HAC0_SDOUT_MARK, HAC0_SDIN_MARK, HAC0_SYNC_MARK, HAC0_BITCLK_MARK,
	SSI0_SDATA_MARK, SSI0_SCK_MARK, SSI0_WS_MARK, SSI0_CLK_MARK,
	SSI1_SDATA_MARK, SSI1_SCK_MARK, SSI1_WS_MARK, SSI1_CLK_MARK,
	SSI2_SDATA_MARK, SSI2_SCK_MARK, SSI2_WS_MARK,
	SSI3_SDATA_MARK, SSI3_SCK_MARK, SSI3_WS_MARK,
	SDIF1CMD_MARK, SDIF1CD_MARK, SDIF1WP_MARK, SDIF1CLK_MARK,
	SDIF1D3_MARK, SDIF1D2_MARK, SDIF1D1_MARK, SDIF1D0_MARK,
	SDIF0CMD_MARK, SDIF0CD_MARK, SDIF0WP_MARK, SDIF0CLK_MARK,
	SDIF0D3_MARK, SDIF0D2_MARK, SDIF0D1_MARK, SDIF0D0_MARK,
	TCLK_MARK,
	IRL7_MARK, IRL6_MARK, IRL5_MARK, IRL4_MARK,
	PINMUX_MARK_END,
};

static const u16 pinmux_data[] = {
	/* PA GPIO */
	PINMUX_DATA(PA7_DATA, PA7_IN, PA7_OUT),
	PINMUX_DATA(PA6_DATA, PA6_IN, PA6_OUT),
	PINMUX_DATA(PA5_DATA, PA5_IN, PA5_OUT),
	PINMUX_DATA(PA4_DATA, PA4_IN, PA4_OUT),
	PINMUX_DATA(PA3_DATA, PA3_IN, PA3_OUT),
	PINMUX_DATA(PA2_DATA, PA2_IN, PA2_OUT),
	PINMUX_DATA(PA1_DATA, PA1_IN, PA1_OUT),
	PINMUX_DATA(PA0_DATA, PA0_IN, PA0_OUT),

	/* PB GPIO */
	PINMUX_DATA(PB7_DATA, PB7_IN, PB7_OUT),
	PINMUX_DATA(PB6_DATA, PB6_IN, PB6_OUT),
	PINMUX_DATA(PB5_DATA, PB5_IN, PB5_OUT),
	PINMUX_DATA(PB4_DATA, PB4_IN, PB4_OUT),
	PINMUX_DATA(PB3_DATA, PB3_IN, PB3_OUT),
	PINMUX_DATA(PB2_DATA, PB2_IN, PB2_OUT),
	PINMUX_DATA(PB1_DATA, PB1_IN, PB1_OUT),
	PINMUX_DATA(PB0_DATA, PB0_IN, PB0_OUT),

	/* PC GPIO */
	PINMUX_DATA(PC7_DATA, PC7_IN, PC7_OUT),
	PINMUX_DATA(PC6_DATA, PC6_IN, PC6_OUT),
	PINMUX_DATA(PC5_DATA, PC5_IN, PC5_OUT),
	PINMUX_DATA(PC4_DATA, PC4_IN, PC4_OUT),
	PINMUX_DATA(PC3_DATA, PC3_IN, PC3_OUT),
	PINMUX_DATA(PC2_DATA, PC2_IN, PC2_OUT),
	PINMUX_DATA(PC1_DATA, PC1_IN, PC1_OUT),
	PINMUX_DATA(PC0_DATA, PC0_IN, PC0_OUT),

	/* PD GPIO */
	PINMUX_DATA(PD7_DATA, PD7_IN, PD7_OUT),
	PINMUX_DATA(PD6_DATA, PD6_IN, PD6_OUT),
	PINMUX_DATA(PD5_DATA, PD5_IN, PD5_OUT),
	PINMUX_DATA(PD4_DATA, PD4_IN, PD4_OUT),
	PINMUX_DATA(PD3_DATA, PD3_IN, PD3_OUT),
	PINMUX_DATA(PD2_DATA, PD2_IN, PD2_OUT),
	PINMUX_DATA(PD1_DATA, PD1_IN, PD1_OUT),
	PINMUX_DATA(PD0_DATA, PD0_IN, PD0_OUT),

	/* PE GPIO */
	PINMUX_DATA(PE7_DATA, PE7_IN, PE7_OUT),
	PINMUX_DATA(PE6_DATA, PE6_IN, PE6_OUT),

	/* PF GPIO */
	PINMUX_DATA(PF7_DATA, PF7_IN, PF7_OUT),
	PINMUX_DATA(PF6_DATA, PF6_IN, PF6_OUT),
	PINMUX_DATA(PF5_DATA, PF5_IN, PF5_OUT),
	PINMUX_DATA(PF4_DATA, PF4_IN, PF4_OUT),
	PINMUX_DATA(PF3_DATA, PF3_IN, PF3_OUT),
	PINMUX_DATA(PF2_DATA, PF2_IN, PF2_OUT),
	PINMUX_DATA(PF1_DATA, PF1_IN, PF1_OUT),
	PINMUX_DATA(PF0_DATA, PF0_IN, PF0_OUT),

	/* PG GPIO */
	PINMUX_DATA(PG7_DATA, PG7_IN, PG7_OUT),
	PINMUX_DATA(PG6_DATA, PG6_IN, PG6_OUT),
	PINMUX_DATA(PG5_DATA, PG5_IN, PG5_OUT),

	/* PH GPIO */
	PINMUX_DATA(PH7_DATA, PH7_IN, PH7_OUT),
	PINMUX_DATA(PH6_DATA, PH6_IN, PH6_OUT),
	PINMUX_DATA(PH5_DATA, PH5_IN, PH5_OUT),
	PINMUX_DATA(PH4_DATA, PH4_IN, PH4_OUT),
	PINMUX_DATA(PH3_DATA, PH3_IN, PH3_OUT),
	PINMUX_DATA(PH2_DATA, PH2_IN, PH2_OUT),
	PINMUX_DATA(PH1_DATA, PH1_IN, PH1_OUT),
	PINMUX_DATA(PH0_DATA, PH0_IN, PH0_OUT),

	/* PJ GPIO */
	PINMUX_DATA(PJ7_DATA, PJ7_IN, PJ7_OUT),
	PINMUX_DATA(PJ6_DATA, PJ6_IN, PJ6_OUT),
	PINMUX_DATA(PJ5_DATA, PJ5_IN, PJ5_OUT),
	PINMUX_DATA(PJ4_DATA, PJ4_IN, PJ4_OUT),
	PINMUX_DATA(PJ3_DATA, PJ3_IN, PJ3_OUT),
	PINMUX_DATA(PJ2_DATA, PJ2_IN, PJ2_OUT),
	PINMUX_DATA(PJ1_DATA, PJ1_IN, PJ1_OUT),

	/* PA FN */
	PINMUX_DATA(CDE_MARK,		P1MSEL2_0, PA7_FN),
	PINMUX_DATA(DISP_MARK,		P1MSEL2_0, PA6_FN),
	PINMUX_DATA(DR5_MARK,		P1MSEL2_0, PA5_FN),
	PINMUX_DATA(DR4_MARK,		P1MSEL2_0, PA4_FN),
	PINMUX_DATA(DR3_MARK,		P1MSEL2_0, PA3_FN),
	PINMUX_DATA(DR2_MARK,		P1MSEL2_0, PA2_FN),
	PINMUX_DATA(DR1_MARK,		P1MSEL2_0, PA1_FN),
	PINMUX_DATA(DR0_MARK,		P1MSEL2_0, PA0_FN),
	PINMUX_DATA(ETH_MAGIC_MARK,	P1MSEL2_1, PA7_FN),
	PINMUX_DATA(ETH_LINK_MARK,	P1MSEL2_1, PA6_FN),
	PINMUX_DATA(ETH_TX_ER_MARK,	P1MSEL2_1, PA5_FN),
	PINMUX_DATA(ETH_TX_EN_MARK,	P1MSEL2_1, PA4_FN),
	PINMUX_DATA(ETH_TXD3_MARK,	P1MSEL2_1, PA3_FN),
	PINMUX_DATA(ETH_TXD2_MARK,	P1MSEL2_1, PA2_FN),
	PINMUX_DATA(ETH_TXD1_MARK,	P1MSEL2_1, PA1_FN),
	PINMUX_DATA(ETH_TXD0_MARK,	P1MSEL2_1, PA0_FN),

	/* PB FN */
	PINMUX_DATA(VSYNC_MARK,		P1MSEL3_0, PB7_FN),
	PINMUX_DATA(ODDF_MARK,		P1MSEL3_0, PB6_FN),
	PINMUX_DATA(DG5_MARK,		P1MSEL2_0, PB5_FN),
	PINMUX_DATA(DG4_MARK,		P1MSEL2_0, PB4_FN),
	PINMUX_DATA(DG3_MARK,		P1MSEL2_0, PB3_FN),
	PINMUX_DATA(DG2_MARK,		P1MSEL2_0, PB2_FN),
	PINMUX_DATA(DG1_MARK,		P1MSEL2_0, PB1_FN),
	PINMUX_DATA(DG0_MARK,		P1MSEL2_0, PB0_FN),
	PINMUX_DATA(HSPI_CLK_MARK,	P1MSEL3_1, PB7_FN),
	PINMUX_DATA(HSPI_CS_MARK,	P1MSEL3_1, PB6_FN),
	PINMUX_DATA(ETH_MDIO_MARK,	P1MSEL2_1, PB5_FN),
	PINMUX_DATA(ETH_RX_CLK_MARK,	P1MSEL2_1, PB4_FN),
	PINMUX_DATA(ETH_MDC_MARK,	P1MSEL2_1, PB3_FN),
	PINMUX_DATA(ETH_COL_MARK,	P1MSEL2_1, PB2_FN),
	PINMUX_DATA(ETH_TX_CLK_MARK,	P1MSEL2_1, PB1_FN),
	PINMUX_DATA(ETH_CRS_MARK,	P1MSEL2_1, PB0_FN),

	/* PC FN */
	PINMUX_DATA(DCLKIN_MARK,	P1MSEL3_0, PC7_FN),
	PINMUX_DATA(HSYNC_MARK,		P1MSEL3_0, PC6_FN),
	PINMUX_DATA(DB5_MARK,		P1MSEL2_0, PC5_FN),
	PINMUX_DATA(DB4_MARK,		P1MSEL2_0, PC4_FN),
	PINMUX_DATA(DB3_MARK,		P1MSEL2_0, PC3_FN),
	PINMUX_DATA(DB2_MARK,		P1MSEL2_0, PC2_FN),
	PINMUX_DATA(DB1_MARK,		P1MSEL2_0, PC1_FN),
	PINMUX_DATA(DB0_MARK,		P1MSEL2_0, PC0_FN),

	PINMUX_DATA(HSPI_RX_MARK,	P1MSEL3_1, PC7_FN),
	PINMUX_DATA(HSPI_TX_MARK,	P1MSEL3_1, PC6_FN),
	PINMUX_DATA(ETH_RXD3_MARK,	P1MSEL2_1, PC5_FN),
	PINMUX_DATA(ETH_RXD2_MARK,	P1MSEL2_1, PC4_FN),
	PINMUX_DATA(ETH_RXD1_MARK,	P1MSEL2_1, PC3_FN),
	PINMUX_DATA(ETH_RXD0_MARK,	P1MSEL2_1, PC2_FN),
	PINMUX_DATA(ETH_RX_DV_MARK,	P1MSEL2_1, PC1_FN),
	PINMUX_DATA(ETH_RX_ER_MARK,	P1MSEL2_1, PC0_FN),

	/* PD FN */
	PINMUX_DATA(DCLKOUT_MARK,	PD7_FN),
	PINMUX_DATA(SCIF1_SCK_MARK,	PD6_FN),
	PINMUX_DATA(SCIF1_RXD_MARK,	PD5_FN),
	PINMUX_DATA(SCIF1_TXD_MARK,	PD4_FN),
	PINMUX_DATA(DACK1_MARK,		P1MSEL13_1, P1MSEL12_0, PD3_FN),
	PINMUX_DATA(BACK_MARK,		P1MSEL13_0, P1MSEL12_1, PD3_FN),
	PINMUX_DATA(FALE_MARK,		P1MSEL13_0, P1MSEL12_0, PD3_FN),
	PINMUX_DATA(DACK0_MARK,		P1MSEL14_1, PD2_FN),
	PINMUX_DATA(FCLE_MARK,		P1MSEL14_0, PD2_FN),
	PINMUX_DATA(DREQ1_MARK,		P1MSEL10_0, P1MSEL9_1, PD1_FN),
	PINMUX_DATA(BREQ_MARK,		P1MSEL10_1, P1MSEL9_0, PD1_FN),
	PINMUX_DATA(USB_OVC1_MARK,	P1MSEL10_0, P1MSEL9_0, PD1_FN),
	PINMUX_DATA(DREQ0_MARK,		P1MSEL11_1, PD0_FN),
	PINMUX_DATA(USB_OVC0_MARK,	P1MSEL11_0, PD0_FN),

	/* PE FN */
	PINMUX_DATA(USB_PENC1_MARK,	PE7_FN),
	PINMUX_DATA(USB_PENC0_MARK,	PE6_FN),

	/* PF FN */
	PINMUX_DATA(HAC1_SDOUT_MARK,	P2MSEL15_0, P2MSEL14_0, PF7_FN),
	PINMUX_DATA(HAC1_SDIN_MARK,	P2MSEL15_0, P2MSEL14_0, PF6_FN),
	PINMUX_DATA(HAC1_SYNC_MARK,	P2MSEL15_0, P2MSEL14_0, PF5_FN),
	PINMUX_DATA(HAC1_BITCLK_MARK,	P2MSEL15_0, P2MSEL14_0, PF4_FN),
	PINMUX_DATA(HAC0_SDOUT_MARK,	P2MSEL13_0, P2MSEL12_0, PF3_FN),
	PINMUX_DATA(HAC0_SDIN_MARK,	P2MSEL13_0, P2MSEL12_0, PF2_FN),
	PINMUX_DATA(HAC0_SYNC_MARK,	P2MSEL13_0, P2MSEL12_0, PF1_FN),
	PINMUX_DATA(HAC0_BITCLK_MARK,	P2MSEL13_0, P2MSEL12_0, PF0_FN),
	PINMUX_DATA(SSI1_SDATA_MARK,	P2MSEL15_0, P2MSEL14_1, PF7_FN),
	PINMUX_DATA(SSI1_SCK_MARK,	P2MSEL15_0, P2MSEL14_1, PF6_FN),
	PINMUX_DATA(SSI1_WS_MARK,	P2MSEL15_0, P2MSEL14_1, PF5_FN),
	PINMUX_DATA(SSI1_CLK_MARK,	P2MSEL15_0, P2MSEL14_1, PF4_FN),
	PINMUX_DATA(SSI0_SDATA_MARK,	P2MSEL13_0, P2MSEL12_1, PF3_FN),
	PINMUX_DATA(SSI0_SCK_MARK,	P2MSEL13_0, P2MSEL12_1, PF2_FN),
	PINMUX_DATA(SSI0_WS_MARK,	P2MSEL13_0, P2MSEL12_1, PF1_FN),
	PINMUX_DATA(SSI0_CLK_MARK,	P2MSEL13_0, P2MSEL12_1, PF0_FN),
	PINMUX_DATA(SDIF1CMD_MARK,	P2MSEL15_1, P2MSEL14_0, PF7_FN),
	PINMUX_DATA(SDIF1CD_MARK,	P2MSEL15_1, P2MSEL14_0, PF6_FN),
	PINMUX_DATA(SDIF1WP_MARK,	P2MSEL15_1, P2MSEL14_0, PF5_FN),
	PINMUX_DATA(SDIF1CLK_MARK,	P2MSEL15_1, P2MSEL14_0, PF4_FN),
	PINMUX_DATA(SDIF1D3_MARK,	P2MSEL13_1, P2MSEL12_0, PF3_FN),
	PINMUX_DATA(SDIF1D2_MARK,	P2MSEL13_1, P2MSEL12_0, PF2_FN),
	PINMUX_DATA(SDIF1D1_MARK,	P2MSEL13_1, P2MSEL12_0, PF1_FN),
	PINMUX_DATA(SDIF1D0_MARK,	P2MSEL13_1, P2MSEL12_0, PF0_FN),

	/* PG FN */
	PINMUX_DATA(SCIF3_SCK_MARK,	P1MSEL8_0, PG7_FN),
	PINMUX_DATA(SSI2_SDATA_MARK,	P1MSEL8_1, PG7_FN),
	PINMUX_DATA(SCIF3_RXD_MARK,	P1MSEL7_0, P1MSEL6_0, PG6_FN),
	PINMUX_DATA(SSI2_SCK_MARK,	P1MSEL7_1, P1MSEL6_0, PG6_FN),
	PINMUX_DATA(TCLK_MARK,		P1MSEL7_0, P1MSEL6_1, PG6_FN),
	PINMUX_DATA(SCIF3_TXD_MARK,	P1MSEL5_0, P1MSEL4_0, PG5_FN),
	PINMUX_DATA(SSI2_WS_MARK,	P1MSEL5_1, P1MSEL4_0, PG5_FN),
	PINMUX_DATA(HAC_RES_MARK,	P1MSEL5_0, P1MSEL4_1, PG5_FN),

	/* PH FN */
	PINMUX_DATA(DACK3_MARK,		P2MSEL4_0, PH7_FN),
	PINMUX_DATA(SDIF0CMD_MARK,	P2MSEL4_1, PH7_FN),
	PINMUX_DATA(DACK2_MARK,		P2MSEL4_0, PH6_FN),
	PINMUX_DATA(SDIF0CD_MARK,	P2MSEL4_1, PH6_FN),
	PINMUX_DATA(DREQ3_MARK,		P2MSEL4_0, PH5_FN),
	PINMUX_DATA(SDIF0WP_MARK,	P2MSEL4_1, PH5_FN),
	PINMUX_DATA(DREQ2_MARK,		P2MSEL3_0, P2MSEL2_1, PH4_FN),
	PINMUX_DATA(SDIF0CLK_MARK,	P2MSEL3_1, P2MSEL2_0, PH4_FN),
	PINMUX_DATA(SCIF0_CTS_MARK,	P2MSEL3_0, P2MSEL2_0, PH4_FN),
	PINMUX_DATA(SDIF0D3_MARK,	P2MSEL1_1, P2MSEL0_0, PH3_FN),
	PINMUX_DATA(SCIF0_RTS_MARK,	P2MSEL1_0, P2MSEL0_0, PH3_FN),
	PINMUX_DATA(IRL7_MARK,		P2MSEL1_0, P2MSEL0_1, PH3_FN),
	PINMUX_DATA(SDIF0D2_MARK,	P2MSEL1_1, P2MSEL0_0, PH2_FN),
	PINMUX_DATA(SCIF0_SCK_MARK,	P2MSEL1_0, P2MSEL0_0, PH2_FN),
	PINMUX_DATA(IRL6_MARK,		P2MSEL1_0, P2MSEL0_1, PH2_FN),
	PINMUX_DATA(SDIF0D1_MARK,	P2MSEL1_1, P2MSEL0_0, PH1_FN),
	PINMUX_DATA(SCIF0_RXD_MARK,	P2MSEL1_0, P2MSEL0_0, PH1_FN),
	PINMUX_DATA(IRL5_MARK,		P2MSEL1_0, P2MSEL0_1, PH1_FN),
	PINMUX_DATA(SDIF0D0_MARK,	P2MSEL1_1, P2MSEL0_0, PH0_FN),
	PINMUX_DATA(SCIF0_TXD_MARK,	P2MSEL1_0, P2MSEL0_0, PH0_FN),
	PINMUX_DATA(IRL4_MARK,		P2MSEL1_0, P2MSEL0_1, PH0_FN),

	/* PJ FN */
	PINMUX_DATA(SCIF5_SCK_MARK,	P2MSEL11_1, PJ7_FN),
	PINMUX_DATA(FRB_MARK,		P2MSEL11_0, PJ7_FN),
	PINMUX_DATA(SCIF5_RXD_MARK,	P2MSEL10_0, PJ6_FN),
	PINMUX_DATA(IOIS16_MARK,	P2MSEL10_1, PJ6_FN),
	PINMUX_DATA(SCIF5_TXD_MARK,	P2MSEL10_0, PJ5_FN),
	PINMUX_DATA(CE2B_MARK,		P2MSEL10_1, PJ5_FN),
	PINMUX_DATA(DRAK3_MARK,		P2MSEL7_0, PJ4_FN),
	PINMUX_DATA(CE2A_MARK,		P2MSEL7_1, PJ4_FN),
	PINMUX_DATA(SCIF4_SCK_MARK,	P2MSEL9_0, P2MSEL8_0, PJ3_FN),
	PINMUX_DATA(DRAK2_MARK,		P2MSEL9_0, P2MSEL8_1, PJ3_FN),
	PINMUX_DATA(SSI3_WS_MARK,	P2MSEL9_1, P2MSEL8_0, PJ3_FN),
	PINMUX_DATA(SCIF4_RXD_MARK,	P2MSEL6_1, P2MSEL5_0, PJ2_FN),
	PINMUX_DATA(DRAK1_MARK,		P2MSEL6_0, P2MSEL5_1, PJ2_FN),
	PINMUX_DATA(FSTATUS_MARK,	P2MSEL6_0, P2MSEL5_0, PJ2_FN),
	PINMUX_DATA(SSI3_SDATA_MARK,	P2MSEL6_1, P2MSEL5_1, PJ2_FN),
	PINMUX_DATA(SCIF4_TXD_MARK,	P2MSEL6_1, P2MSEL5_0, PJ1_FN),
	PINMUX_DATA(DRAK0_MARK,		P2MSEL6_0, P2MSEL5_1, PJ1_FN),
	PINMUX_DATA(FSE_MARK,		P2MSEL6_0, P2MSEL5_0, PJ1_FN),
	PINMUX_DATA(SSI3_SCK_MARK,	P2MSEL6_1, P2MSEL5_1, PJ1_FN),
};

static const struct sh_pfc_pin pinmux_pins[] = {
	/* PA */
	PINMUX_GPIO(PA7),
	PINMUX_GPIO(PA6),
	PINMUX_GPIO(PA5),
	PINMUX_GPIO(PA4),
	PINMUX_GPIO(PA3),
	PINMUX_GPIO(PA2),
	PINMUX_GPIO(PA1),
	PINMUX_GPIO(PA0),

	/* PB */
	PINMUX_GPIO(PB7),
	PINMUX_GPIO(PB6),
	PINMUX_GPIO(PB5),
	PINMUX_GPIO(PB4),
	PINMUX_GPIO(PB3),
	PINMUX_GPIO(PB2),
	PINMUX_GPIO(PB1),
	PINMUX_GPIO(PB0),

	/* PC */
	PINMUX_GPIO(PC7),
	PINMUX_GPIO(PC6),
	PINMUX_GPIO(PC5),
	PINMUX_GPIO(PC4),
	PINMUX_GPIO(PC3),
	PINMUX_GPIO(PC2),
	PINMUX_GPIO(PC1),
	PINMUX_GPIO(PC0),

	/* PD */
	PINMUX_GPIO(PD7),
	PINMUX_GPIO(PD6),
	PINMUX_GPIO(PD5),
	PINMUX_GPIO(PD4),
	PINMUX_GPIO(PD3),
	PINMUX_GPIO(PD2),
	PINMUX_GPIO(PD1),
	PINMUX_GPIO(PD0),

	/* PE */
	PINMUX_GPIO(PE7),
	PINMUX_GPIO(PE6),

	/* PF */
	PINMUX_GPIO(PF7),
	PINMUX_GPIO(PF6),
	PINMUX_GPIO(PF5),
	PINMUX_GPIO(PF4),
	PINMUX_GPIO(PF3),
	PINMUX_GPIO(PF2),
	PINMUX_GPIO(PF1),
	PINMUX_GPIO(PF0),

	/* PG */
	PINMUX_GPIO(PG7),
	PINMUX_GPIO(PG6),
	PINMUX_GPIO(PG5),

	/* PH */
	PINMUX_GPIO(PH7),
	PINMUX_GPIO(PH6),
	PINMUX_GPIO(PH5),
	PINMUX_GPIO(PH4),
	PINMUX_GPIO(PH3),
	PINMUX_GPIO(PH2),
	PINMUX_GPIO(PH1),
	PINMUX_GPIO(PH0),

	/* PJ */
	PINMUX_GPIO(PJ7),
	PINMUX_GPIO(PJ6),
	PINMUX_GPIO(PJ5),
	PINMUX_GPIO(PJ4),
	PINMUX_GPIO(PJ3),
	PINMUX_GPIO(PJ2),
	PINMUX_GPIO(PJ1),
};

#define PINMUX_FN_BASE	ARRAY_SIZE(pinmux_pins)

static const struct pinmux_func pinmux_func_gpios[] = {
	/* FN */
	GPIO_FN(CDE),
	GPIO_FN(ETH_MAGIC),
	GPIO_FN(DISP),
	GPIO_FN(ETH_LINK),
	GPIO_FN(DR5),
	GPIO_FN(ETH_TX_ER),
	GPIO_FN(DR4),
	GPIO_FN(ETH_TX_EN),
	GPIO_FN(DR3),
	GPIO_FN(ETH_TXD3),
	GPIO_FN(DR2),
	GPIO_FN(ETH_TXD2),
	GPIO_FN(DR1),
	GPIO_FN(ETH_TXD1),
	GPIO_FN(DR0),
	GPIO_FN(ETH_TXD0),
	GPIO_FN(VSYNC),
	GPIO_FN(HSPI_CLK),
	GPIO_FN(ODDF),
	GPIO_FN(HSPI_CS),
	GPIO_FN(DG5),
	GPIO_FN(ETH_MDIO),
	GPIO_FN(DG4),
	GPIO_FN(ETH_RX_CLK),
	GPIO_FN(DG3),
	GPIO_FN(ETH_MDC),
	GPIO_FN(DG2),
	GPIO_FN(ETH_COL),
	GPIO_FN(DG1),
	GPIO_FN(ETH_TX_CLK),
	GPIO_FN(DG0),
	GPIO_FN(ETH_CRS),
	GPIO_FN(DCLKIN),
	GPIO_FN(HSPI_RX),
	GPIO_FN(HSYNC),
	GPIO_FN(HSPI_TX),
	GPIO_FN(DB5),
	GPIO_FN(ETH_RXD3),
	GPIO_FN(DB4),
	GPIO_FN(ETH_RXD2),
	GPIO_FN(DB3),
	GPIO_FN(ETH_RXD1),
	GPIO_FN(DB2),
	GPIO_FN(ETH_RXD0),
	GPIO_FN(DB1),
	GPIO_FN(ETH_RX_DV),
	GPIO_FN(DB0),
	GPIO_FN(ETH_RX_ER),
	GPIO_FN(DCLKOUT),
	GPIO_FN(SCIF1_SCK),
	GPIO_FN(SCIF1_RXD),
	GPIO_FN(SCIF1_TXD),
	GPIO_FN(DACK1),
	GPIO_FN(BACK),
	GPIO_FN(FALE),
	GPIO_FN(DACK0),
	GPIO_FN(FCLE),
	GPIO_FN(DREQ1),
	GPIO_FN(BREQ),
	GPIO_FN(USB_OVC1),
	GPIO_FN(DREQ0),
	GPIO_FN(USB_OVC0),
	GPIO_FN(USB_PENC1),
	GPIO_FN(USB_PENC0),
	GPIO_FN(HAC1_SDOUT),
	GPIO_FN(SSI1_SDATA),
	GPIO_FN(SDIF1CMD),
	GPIO_FN(HAC1_SDIN),
	GPIO_FN(SSI1_SCK),
	GPIO_FN(SDIF1CD),
	GPIO_FN(HAC1_SYNC),
	GPIO_FN(SSI1_WS),
	GPIO_FN(SDIF1WP),
	GPIO_FN(HAC1_BITCLK),
	GPIO_FN(SSI1_CLK),
	GPIO_FN(SDIF1CLK),
	GPIO_FN(HAC0_SDOUT),
	GPIO_FN(SSI0_SDATA),
	GPIO_FN(SDIF1D3),
	GPIO_FN(HAC0_SDIN),
	GPIO_FN(SSI0_SCK),
	GPIO_FN(SDIF1D2),
	GPIO_FN(HAC0_SYNC),
	GPIO_FN(SSI0_WS),
	GPIO_FN(SDIF1D1),
	GPIO_FN(HAC0_BITCLK),
	GPIO_FN(SSI0_CLK),
	GPIO_FN(SDIF1D0),
	GPIO_FN(SCIF3_SCK),
	GPIO_FN(SSI2_SDATA),
	GPIO_FN(SCIF3_RXD),
	GPIO_FN(TCLK),
	GPIO_FN(SSI2_SCK),
	GPIO_FN(SCIF3_TXD),
	GPIO_FN(HAC_RES),
	GPIO_FN(SSI2_WS),
	GPIO_FN(DACK3),
	GPIO_FN(SDIF0CMD),
	GPIO_FN(DACK2),
	GPIO_FN(SDIF0CD),
	GPIO_FN(DREQ3),
	GPIO_FN(SDIF0WP),
	GPIO_FN(SCIF0_CTS),
	GPIO_FN(DREQ2),
	GPIO_FN(SDIF0CLK),
	GPIO_FN(SCIF0_RTS),
	GPIO_FN(IRL7),
	GPIO_FN(SDIF0D3),
	GPIO_FN(SCIF0_SCK),
	GPIO_FN(IRL6),
	GPIO_FN(SDIF0D2),
	GPIO_FN(SCIF0_RXD),
	GPIO_FN(IRL5),
	GPIO_FN(SDIF0D1),
	GPIO_FN(SCIF0_TXD),
	GPIO_FN(IRL4),
	GPIO_FN(SDIF0D0),
	GPIO_FN(SCIF5_SCK),
	GPIO_FN(FRB),
	GPIO_FN(SCIF5_RXD),
	GPIO_FN(IOIS16),
	GPIO_FN(SCIF5_TXD),
	GPIO_FN(CE2B),
	GPIO_FN(DRAK3),
	GPIO_FN(CE2A),
	GPIO_FN(SCIF4_SCK),
	GPIO_FN(DRAK2),
	GPIO_FN(SSI3_WS),
	GPIO_FN(SCIF4_RXD),
	GPIO_FN(DRAK1),
	GPIO_FN(SSI3_SDATA),
	GPIO_FN(FSTATUS),
	GPIO_FN(SCIF4_TXD),
	GPIO_FN(DRAK0),
	GPIO_FN(SSI3_SCK),
	GPIO_FN(FSE),
};

static const struct pinmux_cfg_reg pinmux_config_regs[] = {
	{ PINMUX_CFG_REG("PACR", 0xffcc0000, 16, 2, GROUP(
		PA7_FN, PA7_OUT, PA7_IN, 0,
		PA6_FN, PA6_OUT, PA6_IN, 0,
		PA5_FN, PA5_OUT, PA5_IN, 0,
		PA4_FN, PA4_OUT, PA4_IN, 0,
		PA3_FN, PA3_OUT, PA3_IN, 0,
		PA2_FN, PA2_OUT, PA2_IN, 0,
		PA1_FN, PA1_OUT, PA1_IN, 0,
		PA0_FN, PA0_OUT, PA0_IN, 0 ))
	},
	{ PINMUX_CFG_REG("PBCR", 0xffcc0002, 16, 2, GROUP(
		PB7_FN, PB7_OUT, PB7_IN, 0,
		PB6_FN, PB6_OUT, PB6_IN, 0,
		PB5_FN, PB5_OUT, PB5_IN, 0,
		PB4_FN, PB4_OUT, PB4_IN, 0,
		PB3_FN, PB3_OUT, PB3_IN, 0,
		PB2_FN, PB2_OUT, PB2_IN, 0,
		PB1_FN, PB1_OUT, PB1_IN, 0,
		PB0_FN, PB0_OUT, PB0_IN, 0 ))
	},
	{ PINMUX_CFG_REG("PCCR", 0xffcc0004, 16, 2, GROUP(
		PC7_FN, PC7_OUT, PC7_IN, 0,
		PC6_FN, PC6_OUT, PC6_IN, 0,
		PC5_FN, PC5_OUT, PC5_IN, 0,
		PC4_FN, PC4_OUT, PC4_IN, 0,
		PC3_FN, PC3_OUT, PC3_IN, 0,
		PC2_FN, PC2_OUT, PC2_IN, 0,
		PC1_FN, PC1_OUT, PC1_IN, 0,
		PC0_FN, PC0_OUT, PC0_IN, 0 ))
	},
	{ PINMUX_CFG_REG("PDCR", 0xffcc0006, 16, 2, GROUP(
		PD7_FN, PD7_OUT, PD7_IN, 0,
		PD6_FN, PD6_OUT, PD6_IN, 0,
		PD5_FN, PD5_OUT, PD5_IN, 0,
		PD4_FN, PD4_OUT, PD4_IN, 0,
		PD3_FN, PD3_OUT, PD3_IN, 0,
		PD2_FN, PD2_OUT, PD2_IN, 0,
		PD1_FN, PD1_OUT, PD1_IN, 0,
		PD0_FN, PD0_OUT, PD0_IN, 0 ))
	},
	{ PINMUX_CFG_REG("PECR", 0xffcc0008, 16, 2, GROUP(
		PE7_FN, PE7_OUT, PE7_IN, 0,
		PE6_FN, PE6_OUT, PE6_IN, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0, ))
	},
	{ PINMUX_CFG_REG("PFCR", 0xffcc000a, 16, 2, GROUP(
		PF7_FN, PF7_OUT, PF7_IN, 0,
		PF6_FN, PF6_OUT, PF6_IN, 0,
		PF5_FN, PF5_OUT, PF5_IN, 0,
		PF4_FN, PF4_OUT, PF4_IN, 0,
		PF3_FN, PF3_OUT, PF3_IN, 0,
		PF2_FN, PF2_OUT, PF2_IN, 0,
		PF1_FN, PF1_OUT, PF1_IN, 0,
		PF0_FN, PF0_OUT, PF0_IN, 0 ))
	},
	{ PINMUX_CFG_REG("PGCR", 0xffcc000c, 16, 2, GROUP(
		PG7_FN, PG7_OUT, PG7_IN, 0,
		PG6_FN, PG6_OUT, PG6_IN, 0,
		PG5_FN, PG5_OUT, PG5_IN, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0,
		0, 0, 0, 0, ))
	},
	{ PINMUX_CFG_REG("PHCR", 0xffcc000e, 16, 2, GROUP(
		PH7_FN, PH7_OUT, PH7_IN, 0,
		PH6_FN, PH6_OUT, PH6_IN, 0,
		PH5_FN, PH5_OUT, PH5_IN, 0,
		PH4_FN, PH4_OUT, PH4_IN, 0,
		PH3_FN, PH3_OUT, PH3_IN, 0,
		PH2_FN, PH2_OUT, PH2_IN, 0,
		PH1_FN, PH1_OUT, PH1_IN, 0,
		PH0_FN, PH0_OUT, PH0_IN, 0 ))
	},
	{ PINMUX_CFG_REG("PJCR", 0xffcc0010, 16, 2, GROUP(
		PJ7_FN, PJ7_OUT, PJ7_IN, 0,
		PJ6_FN, PJ6_OUT, PJ6_IN, 0,
		PJ5_FN, PJ5_OUT, PJ5_IN, 0,
		PJ4_FN, PJ4_OUT, PJ4_IN, 0,
		PJ3_FN, PJ3_OUT, PJ3_IN, 0,
		PJ2_FN, PJ2_OUT, PJ2_IN, 0,
		PJ1_FN, PJ1_OUT, PJ1_IN, 0,
		0, 0, 0, 0, ))
	},
	{ PINMUX_CFG_REG("P1MSELR", 0xffcc0080, 16, 1, GROUP(
		0, 0,
		P1MSEL14_0, P1MSEL14_1,
		P1MSEL13_0, P1MSEL13_1,
		P1MSEL12_0, P1MSEL12_1,
		P1MSEL11_0, P1MSEL11_1,
		P1MSEL10_0, P1MSEL10_1,
		P1MSEL9_0,  P1MSEL9_1,
		P1MSEL8_0,  P1MSEL8_1,
		P1MSEL7_0,  P1MSEL7_1,
		P1MSEL6_0,  P1MSEL6_1,
		P1MSEL5_0,  P1MSEL5_1,
		P1MSEL4_0,  P1MSEL4_1,
		P1MSEL3_0,  P1MSEL3_1,
		P1MSEL2_0,  P1MSEL2_1,
		P1MSEL1_0,  P1MSEL1_1,
		P1MSEL0_0,  P1MSEL0_1 ))
	},
	{ PINMUX_CFG_REG("P2MSELR", 0xffcc0082, 16, 1, GROUP(
		P2MSEL15_0, P2MSEL15_1,
		P2MSEL14_0, P2MSEL14_1,
		P2MSEL13_0, P2MSEL13_1,
		P2MSEL12_0, P2MSEL12_1,
		P2MSEL11_0, P2MSEL11_1,
		P2MSEL10_0, P2MSEL10_1,
		P2MSEL9_0,  P2MSEL9_1,
		P2MSEL8_0,  P2MSEL8_1,
		P2MSEL7_0,  P2MSEL7_1,
		P2MSEL6_0,  P2MSEL6_1,
		P2MSEL5_0,  P2MSEL5_1,
		P2MSEL4_0,  P2MSEL4_1,
		P2MSEL3_0,  P2MSEL3_1,
		P2MSEL2_0,  P2MSEL2_1,
		P2MSEL1_0,  P2MSEL1_1,
		P2MSEL0_0,  P2MSEL0_1 ))
	},
	{}
};

static const struct pinmux_data_reg pinmux_data_regs[] = {
	{ PINMUX_DATA_REG("PADR", 0xffcc0020, 8, GROUP(
		PA7_DATA, PA6_DATA, PA5_DATA, PA4_DATA,
		PA3_DATA, PA2_DATA, PA1_DATA, PA0_DATA ))
	},
	{ PINMUX_DATA_REG("PBDR", 0xffcc0022, 8, GROUP(
		PB7_DATA, PB6_DATA, PB5_DATA, PB4_DATA,
		PB3_DATA, PB2_DATA, PB1_DATA, PB0_DATA ))
	},
	{ PINMUX_DATA_REG("PCDR", 0xffcc0024, 8, GROUP(
		PC7_DATA, PC6_DATA, PC5_DATA, PC4_DATA,
		PC3_DATA, PC2_DATA, PC1_DATA, PC0_DATA ))
	},
	{ PINMUX_DATA_REG("PDDR", 0xffcc0026, 8, GROUP(
		PD7_DATA, PD6_DATA, PD5_DATA, PD4_DATA,
		PD3_DATA, PD2_DATA, PD1_DATA, PD0_DATA ))
	},
	{ PINMUX_DATA_REG("PEDR", 0xffcc0028, 8, GROUP(
		PE7_DATA, PE6_DATA,
		0, 0, 0, 0, 0, 0 ))
	},
	{ PINMUX_DATA_REG("PFDR", 0xffcc002a, 8, GROUP(
		PF7_DATA, PF6_DATA, PF5_DATA, PF4_DATA,
		PF3_DATA, PF2_DATA, PF1_DATA, PF0_DATA ))
	},
	{ PINMUX_DATA_REG("PGDR", 0xffcc002c, 8, GROUP(
		PG7_DATA, PG6_DATA, PG5_DATA, 0,
		0, 0, 0, 0 ))
	},
	{ PINMUX_DATA_REG("PHDR", 0xffcc002e, 8, GROUP(
		PH7_DATA, PH6_DATA, PH5_DATA, PH4_DATA,
		PH3_DATA, PH2_DATA, PH1_DATA, PH0_DATA ))
	},
	{ PINMUX_DATA_REG("PJDR", 0xffcc0030, 8, GROUP(
		PJ7_DATA, PJ6_DATA, PJ5_DATA, PJ4_DATA,
		PJ3_DATA, PJ2_DATA, PJ1_DATA, 0 ))
	},
	{ },
};

const struct sh_pfc_soc_info sh7786_pinmux_info = {
	.name = "sh7786_pfc",
	.input = { PINMUX_INPUT_BEGIN, PINMUX_INPUT_END },
	.output = { PINMUX_OUTPUT_BEGIN, PINMUX_OUTPUT_END },
	.function = { PINMUX_FUNCTION_BEGIN, PINMUX_FUNCTION_END },

	.pins = pinmux_pins,
	.nr_pins = ARRAY_SIZE(pinmux_pins),
	.func_gpios = pinmux_func_gpios,
	.nr_func_gpios = ARRAY_SIZE(pinmux_func_gpios),

	.cfg_regs = pinmux_config_regs,
	.data_regs = pinmux_data_regs,

	.pinmux_data = pinmux_data,
	.pinmux_data_size = ARRAY_SIZE(pinmux_data),
};

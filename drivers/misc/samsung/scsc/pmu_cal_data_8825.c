/****************************************************************************
 *
 * Copyright (c) 2014 - 2021 Samsung Electronics Co., Ltd. All rights reserved
 *
 ****************************************************************************/
/*pmucal guide version : v0.38*/
#include "pmu_cal.h"

struct pmucal_data WLBT_INIT_SEQ[] = {
	{ PMUCAL_WRITE, 1, 1, WLBT_CTRL_S, 3, 0x1 },
	{ PMUCAL_WRITE, 1, 1, WLBT_OPTION, 3, 0x1 },
	{ PMUCAL_DELAY, 1, 0, 0, 0, 0x3 },
	{ PMUCAL_ATOMIC, 1, 1, SYSTEM_OUT, 31, 0x1B },
	{ PMUCAL_ATOMIC, 1, 1, SYSTEM_OUT, 31, 0x1D },
	{ PMUCAL_READ, 1, 1, VGPIO_TX_MONITOR, 23, 0x1 },
	{ PMUCAL_READ, 1, 1, VGPIO_TX_MONITOR, 12, 0x1 },
	{ PMUCAL_DELAY, 1, 0, 0, 0, 0x3E8 },
	{ PMUCAL_WRITE, 1, 1, WLBT_CONFIGURATION, 0, 0x1 },
	{ PMUCAL_READ, 1, 1, WLBT_STATUS, 0, 0x1 },
	{ PMUCAL_READ, 1, 1, WLBT_IN, 4, 0x1 },
};

struct pmucal_data WLBT_RESET_ASSERT[] = {
	{ PMUCAL_WRITE, 1, 1, WLBT_CONFIGURATION, 0, 0x0 },
	{ PMUCAL_READ, 1, 1, WLBT_STATUS, 0, 0x0 },
};

struct pmucal_data WLBT_RESET_RELEASE[] = {
	{ PMUCAL_WRITE, 1, 1, WLBT_OPTION, 3, 0x1 },
	{ PMUCAL_ATOMIC, 1, 1, SYSTEM_OUT, 31, 0x1B },
	{ PMUCAL_ATOMIC, 1, 1, SYSTEM_OUT, 31, 0x1D },
	{ PMUCAL_READ, 1, 1, VGPIO_TX_MONITOR, 23, 0x1 },
	{ PMUCAL_READ, 1, 1, VGPIO_TX_MONITOR, 12, 0x1 },
	{ PMUCAL_DELAY, 1, 0, 0, 0, 0x3E8 },
	{ PMUCAL_WRITE, 1, 1, WLBT_CONFIGURATION, 0, 0x1 },
	{ PMUCAL_READ, 1, 1, WLBT_STATUS, 0, 0x1 },
	{ PMUCAL_READ, 1, 1, WLBT_IN, 4, 0x1 },
};

struct pmucal pmucal_wlbt = {
	WLBT_INIT_SEQ, WLBT_RESET_ASSERT, WLBT_RESET_RELEASE, 11, 2, 9,
};

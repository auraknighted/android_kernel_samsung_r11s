/*
 * Copyright (c) 2016 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef HOST_REG_INIT_H
#define HOST_REG_INIT_H

#include "reg_struct.h"
#include "targaddrs.h"

#if defined(MY_HOST_DEF)

#if !defined(FW_IND_HOST_READY)
#define FW_IND_HOST_READY 0
#endif

#if !defined(PCIE_LOCAL_BASE_ADDRESS)
#define PCIE_LOCAL_BASE_ADDRESS 0
#define PCIE_SOC_WAKE_RESET 0
#define PCIE_SOC_WAKE_ADDRESS 0
#define PCIE_SOC_WAKE_V_MASK 0
#define RTC_STATE_ADDRESS 0
#define RTC_STATE_COLD_RESET_MASK 0
#define RTC_STATE_V_MASK 0
#define RTC_STATE_V_LSB 0
#define RTC_STATE_V_ON 0
#define SOC_GLOBAL_RESET_ADDRESS 0
#endif

#if !defined(CE_COUNT)
#define CE_COUNT 0
#endif

#if !defined(TRANSACTION_ID_MASK)
#define TRANSACTION_ID_MASK 0xfff
#endif

static struct hostdef_s my_host_def = {
	.d_INT_STATUS_ENABLE_ERROR_LSB = INT_STATUS_ENABLE_ERROR_LSB,
	.d_INT_STATUS_ENABLE_ERROR_MASK = INT_STATUS_ENABLE_ERROR_MASK,
	.d_INT_STATUS_ENABLE_CPU_LSB = INT_STATUS_ENABLE_CPU_LSB,
	.d_INT_STATUS_ENABLE_CPU_MASK = INT_STATUS_ENABLE_CPU_MASK,
	.d_INT_STATUS_ENABLE_COUNTER_LSB = INT_STATUS_ENABLE_COUNTER_LSB,
	.d_INT_STATUS_ENABLE_COUNTER_MASK = INT_STATUS_ENABLE_COUNTER_MASK,
	.d_INT_STATUS_ENABLE_MBOX_DATA_LSB = INT_STATUS_ENABLE_MBOX_DATA_LSB,
	.d_INT_STATUS_ENABLE_MBOX_DATA_MASK = INT_STATUS_ENABLE_MBOX_DATA_MASK,
	.d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB
		= ERROR_STATUS_ENABLE_RX_UNDERFLOW_LSB,
	.d_ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK
		= ERROR_STATUS_ENABLE_RX_UNDERFLOW_MASK,
	.d_ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB
		= ERROR_STATUS_ENABLE_TX_OVERFLOW_LSB,
	.d_ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK
		= ERROR_STATUS_ENABLE_TX_OVERFLOW_MASK,
	.d_COUNTER_INT_STATUS_ENABLE_BIT_LSB
		= COUNTER_INT_STATUS_ENABLE_BIT_LSB,
	.d_COUNTER_INT_STATUS_ENABLE_BIT_MASK
		= COUNTER_INT_STATUS_ENABLE_BIT_MASK,
	.d_INT_STATUS_ENABLE_ADDRESS = INT_STATUS_ENABLE_ADDRESS,
	.d_CPU_INT_STATUS_ENABLE_BIT_LSB = CPU_INT_STATUS_ENABLE_BIT_LSB,
	.d_CPU_INT_STATUS_ENABLE_BIT_MASK = CPU_INT_STATUS_ENABLE_BIT_MASK,
	.d_HOST_INT_STATUS_ADDRESS = HOST_INT_STATUS_ADDRESS,
	.d_CPU_INT_STATUS_ADDRESS = CPU_INT_STATUS_ADDRESS,
	.d_ERROR_INT_STATUS_ADDRESS = ERROR_INT_STATUS_ADDRESS,
	.d_ERROR_INT_STATUS_WAKEUP_MASK = ERROR_INT_STATUS_WAKEUP_MASK,
	.d_ERROR_INT_STATUS_WAKEUP_LSB = ERROR_INT_STATUS_WAKEUP_LSB,
	.d_ERROR_INT_STATUS_RX_UNDERFLOW_MASK
		= ERROR_INT_STATUS_RX_UNDERFLOW_MASK,
	.d_ERROR_INT_STATUS_RX_UNDERFLOW_LSB
		= ERROR_INT_STATUS_RX_UNDERFLOW_LSB,
	.d_ERROR_INT_STATUS_TX_OVERFLOW_MASK
		= ERROR_INT_STATUS_TX_OVERFLOW_MASK,
	.d_ERROR_INT_STATUS_TX_OVERFLOW_LSB = ERROR_INT_STATUS_TX_OVERFLOW_LSB,
	.d_COUNT_DEC_ADDRESS = COUNT_DEC_ADDRESS,
	.d_HOST_INT_STATUS_CPU_MASK = HOST_INT_STATUS_CPU_MASK,
	.d_HOST_INT_STATUS_CPU_LSB = HOST_INT_STATUS_CPU_LSB,
	.d_HOST_INT_STATUS_ERROR_MASK = HOST_INT_STATUS_ERROR_MASK,
	.d_HOST_INT_STATUS_ERROR_LSB = HOST_INT_STATUS_ERROR_LSB,
	.d_HOST_INT_STATUS_COUNTER_MASK = HOST_INT_STATUS_COUNTER_MASK,
	.d_HOST_INT_STATUS_COUNTER_LSB = HOST_INT_STATUS_COUNTER_LSB,
	.d_RX_LOOKAHEAD_VALID_ADDRESS = RX_LOOKAHEAD_VALID_ADDRESS,
	.d_WINDOW_DATA_ADDRESS = WINDOW_DATA_ADDRESS,
	.d_WINDOW_READ_ADDR_ADDRESS = WINDOW_READ_ADDR_ADDRESS,
	.d_WINDOW_WRITE_ADDR_ADDRESS = WINDOW_WRITE_ADDR_ADDRESS,
	.d_SOC_GLOBAL_RESET_ADDRESS = SOC_GLOBAL_RESET_ADDRESS,
	.d_RTC_STATE_ADDRESS = RTC_STATE_ADDRESS,
	.d_RTC_STATE_COLD_RESET_MASK = RTC_STATE_COLD_RESET_MASK,
	.d_PCIE_LOCAL_BASE_ADDRESS = PCIE_LOCAL_BASE_ADDRESS,
	.d_PCIE_SOC_WAKE_RESET = PCIE_SOC_WAKE_RESET,
	.d_PCIE_SOC_WAKE_ADDRESS = PCIE_SOC_WAKE_ADDRESS,
	.d_PCIE_SOC_WAKE_V_MASK = PCIE_SOC_WAKE_V_MASK,
	.d_RTC_STATE_V_MASK = RTC_STATE_V_MASK,
	.d_RTC_STATE_V_LSB = RTC_STATE_V_LSB,
	.d_FW_IND_EVENT_PENDING = FW_IND_EVENT_PENDING,
	.d_FW_IND_INITIALIZED = FW_IND_INITIALIZED,
	.d_RTC_STATE_V_ON = RTC_STATE_V_ON,
#if defined(SDIO_3_0)
	.d_HOST_INT_STATUS_MBOX_DATA_MASK = HOST_INT_STATUS_MBOX_DATA_MASK,
	.d_HOST_INT_STATUS_MBOX_DATA_LSB = HOST_INT_STATUS_MBOX_DATA_LSB,
#endif
	.d_FW_IND_HOST_READY = FW_IND_HOST_READY,
	.d_HOST_CE_COUNT = CE_COUNT,
	.d_TRANSACTION_ID_MASK = TRANSACTION_ID_MASK,
};

struct hostdef_s *MY_HOST_DEF = &my_host_def;
#else /* MY_HOST_DEF */
#endif /* MY_HOST_DEF */



#if defined(MY_HOST_SHADOW_REGS)
struct host_shadow_regs_s my_host_shadow_regs = {
	.d_A_LOCAL_SHADOW_REG_VALUE_0 = A_LOCAL_SHADOW_REG_VALUE_0;
	.d_A_LOCAL_SHADOW_REG_VALUE_1 = A_LOCAL_SHADOW_REG_VALUE_1;
	.d_A_LOCAL_SHADOW_REG_VALUE_2 = A_LOCAL_SHADOW_REG_VALUE_2;
	.d_A_LOCAL_SHADOW_REG_VALUE_3 = A_LOCAL_SHADOW_REG_VALUE_3;
	.d_A_LOCAL_SHADOW_REG_VALUE_4 = A_LOCAL_SHADOW_REG_VALUE_4;
	.d_A_LOCAL_SHADOW_REG_VALUE_5 = A_LOCAL_SHADOW_REG_VALUE_5;
	.d_A_LOCAL_SHADOW_REG_VALUE_6 = A_LOCAL_SHADOW_REG_VALUE_6;
	.d_A_LOCAL_SHADOW_REG_VALUE_7 = A_LOCAL_SHADOW_REG_VALUE_7;
	.d_A_LOCAL_SHADOW_REG_VALUE_8 = A_LOCAL_SHADOW_REG_VALUE_8;
	.d_A_LOCAL_SHADOW_REG_VALUE_9 = A_LOCAL_SHADOW_REG_VALUE_9;
	.d_A_LOCAL_SHADOW_REG_VALUE_10 = A_LOCAL_SHADOW_REG_VALUE_10;
	.d_A_LOCAL_SHADOW_REG_VALUE_11 = A_LOCAL_SHADOW_REG_VALUE_11;
	.d_A_LOCAL_SHADOW_REG_VALUE_12 = A_LOCAL_SHADOW_REG_VALUE_12;
	.d_A_LOCAL_SHADOW_REG_VALUE_13 = A_LOCAL_SHADOW_REG_VALUE_13;
	.d_A_LOCAL_SHADOW_REG_VALUE_14 = A_LOCAL_SHADOW_REG_VALUE_14;
	.d_A_LOCAL_SHADOW_REG_VALUE_15 = A_LOCAL_SHADOW_REG_VALUE_15;
	.d_A_LOCAL_SHADOW_REG_VALUE_16 = A_LOCAL_SHADOW_REG_VALUE_16;
	.d_A_LOCAL_SHADOW_REG_VALUE_17 = A_LOCAL_SHADOW_REG_VALUE_17;
	.d_A_LOCAL_SHADOW_REG_VALUE_18 = A_LOCAL_SHADOW_REG_VALUE_18;
	.d_A_LOCAL_SHADOW_REG_VALUE_19 = A_LOCAL_SHADOW_REG_VALUE_19;
	.d_A_LOCAL_SHADOW_REG_VALUE_20 = A_LOCAL_SHADOW_REG_VALUE_20;
	.d_A_LOCAL_SHADOW_REG_VALUE_21 = A_LOCAL_SHADOW_REG_VALUE_21;
	.d_A_LOCAL_SHADOW_REG_VALUE_22 = A_LOCAL_SHADOW_REG_VALUE_22;
	.d_A_LOCAL_SHADOW_REG_VALUE_23 = A_LOCAL_SHADOW_REG_VALUE_23;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_0 = A_LOCAL_SHADOW_REG_ADDRESS_0;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_1 = A_LOCAL_SHADOW_REG_ADDRESS_1;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_2 = A_LOCAL_SHADOW_REG_ADDRESS_2;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_3 = A_LOCAL_SHADOW_REG_ADDRESS_3;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_4 = A_LOCAL_SHADOW_REG_ADDRESS_4;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_5 = A_LOCAL_SHADOW_REG_ADDRESS_5;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_6 = A_LOCAL_SHADOW_REG_ADDRESS_6;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_7 = A_LOCAL_SHADOW_REG_ADDRESS_7;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_8 = A_LOCAL_SHADOW_REG_ADDRESS_8;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_9 = A_LOCAL_SHADOW_REG_ADDRESS_9;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_10 = A_LOCAL_SHADOW_REG_ADDRESS_10;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_11 = A_LOCAL_SHADOW_REG_ADDRESS_11;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_12 = A_LOCAL_SHADOW_REG_ADDRESS_12;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_13 = A_LOCAL_SHADOW_REG_ADDRESS_13;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_14 = A_LOCAL_SHADOW_REG_ADDRESS_14;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_15 = A_LOCAL_SHADOW_REG_ADDRESS_15;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_16 = A_LOCAL_SHADOW_REG_ADDRESS_16;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_17 = A_LOCAL_SHADOW_REG_ADDRESS_17;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_18 = A_LOCAL_SHADOW_REG_ADDRESS_18;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_19 = A_LOCAL_SHADOW_REG_ADDRESS_19;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_20 = A_LOCAL_SHADOW_REG_ADDRESS_20;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_21 = A_LOCAL_SHADOW_REG_ADDRESS_21;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_22 = A_LOCAL_SHADOW_REG_ADDRESS_22;
	.d_A_LOCAL_SHADOW_REG_ADDRESS_23 = A_LOCAL_SHADOW_REG_ADDRESS_23;
};

struct hostdef_s *MY_HOST_SHADOW_REGS = &my_host_shadow_regs;
#else /* MY_HOST_SHADOW_REGS */
#endif /* MY_HOST_SHADOW_REGS */
#endif /* HOST_REG_INIT_H */

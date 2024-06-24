
/*
 * Copyright (c) 2022 Qualcomm Innovation Center, Inc. All rights reserved.
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

 

#ifndef _PHYRX_LOCATION_H_
#define _PHYRX_LOCATION_H_
#if !defined(__ASSEMBLER__)
#endif

#include "rx_location_info.h"
#define NUM_OF_DWORDS_PHYRX_LOCATION 28

#define NUM_OF_QWORDS_PHYRX_LOCATION 14

struct phyrx_location {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   rx_location_info                                          rx_location_info_details;
#else
             struct   rx_location_info                                          rx_location_info_details;
#endif
};

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_LOCATION_INFO_VALID_OFFSET       0x0000000000000000
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_LOCATION_INFO_VALID_LSB          0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_LOCATION_INFO_VALID_MSB          0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_LOCATION_INFO_VALID_MASK         0x0000000000000001

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_HW_IFFT_MODE_OFFSET             0x0000000000000000
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_HW_IFFT_MODE_LSB                1
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_HW_IFFT_MODE_MSB                1
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_HW_IFFT_MODE_MASK               0x0000000000000002

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_11AZ_MODE_OFFSET                0x0000000000000000
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_11AZ_MODE_LSB                   2
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_11AZ_MODE_MSB                   3
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_11AZ_MODE_MASK                  0x000000000000000c

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RESERVED_0_OFFSET                   0x0000000000000000
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RESERVED_0_LSB                      4
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RESERVED_0_MSB                      7
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RESERVED_0_MASK                     0x00000000000000f0

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_NUM_FAC_OFFSET                  0x0000000000000000
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_NUM_FAC_LSB                     8
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_NUM_FAC_MSB                     15
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_NUM_FAC_MASK                    0x000000000000ff00

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_RX_CHAIN_MASK_OFFSET            0x0000000000000000
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_RX_CHAIN_MASK_LSB               16
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_RX_CHAIN_MASK_MSB               23
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_RX_CHAIN_MASK_MASK              0x0000000000ff0000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_NUM_STREAMS_OFFSET              0x0000000000000000
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_NUM_STREAMS_LSB                 24
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_NUM_STREAMS_MSB                 31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_NUM_STREAMS_MASK                0x00000000ff000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FIRST_SELECTED_CHAIN_OFFSET     0x0000000000000000
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FIRST_SELECTED_CHAIN_LSB        32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FIRST_SELECTED_CHAIN_MSB        39
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FIRST_SELECTED_CHAIN_MASK       0x000000ff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_SECOND_SELECTED_CHAIN_OFFSET    0x0000000000000000
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_SECOND_SELECTED_CHAIN_LSB       40
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_SECOND_SELECTED_CHAIN_MSB       47
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_SECOND_SELECTED_CHAIN_MASK      0x0000ff0000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CFR_STATUS_OFFSET               0x0000000000000000
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CFR_STATUS_LSB                  48
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CFR_STATUS_MSB                  55
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CFR_STATUS_MASK                 0x00ff000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CIR_STATUS_OFFSET               0x0000000000000000
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CIR_STATUS_LSB                  56
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CIR_STATUS_MSB                  63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CIR_STATUS_MASK                 0xff00000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CHE_BUFFER_POINTER_LOW32_OFFSET 0x0000000000000008
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CHE_BUFFER_POINTER_LOW32_LSB    0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CHE_BUFFER_POINTER_LOW32_MSB    31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CHE_BUFFER_POINTER_LOW32_MASK   0x00000000ffffffff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CHE_BUFFER_POINTER_HIGH8_OFFSET 0x0000000000000008
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CHE_BUFFER_POINTER_HIGH8_LSB    32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CHE_BUFFER_POINTER_HIGH8_MSB    39
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CHE_BUFFER_POINTER_HIGH8_MASK   0x000000ff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RESERVED_3_OFFSET                   0x0000000000000008
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RESERVED_3_LSB                      40
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RESERVED_3_MSB                      47
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RESERVED_3_MASK                     0x0000ff0000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_PKT_BW_VHT_OFFSET               0x0000000000000008
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_PKT_BW_VHT_LSB                  48
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_PKT_BW_VHT_MSB                  51
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_PKT_BW_VHT_MASK                 0x000f000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_PKT_BW_LEG_OFFSET               0x0000000000000008
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_PKT_BW_LEG_LSB                  52
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_PKT_BW_LEG_MSB                  55
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_PKT_BW_LEG_MASK                 0x00f0000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_MCS_RATE_OFFSET                 0x0000000000000008
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_MCS_RATE_LSB                    56
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_MCS_RATE_MSB                    63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_MCS_RATE_MASK                   0xff00000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CFO_MEASUREMENT_OFFSET          0x0000000000000010
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CFO_MEASUREMENT_LSB             0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CFO_MEASUREMENT_MSB             15
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_CFO_MEASUREMENT_MASK            0x000000000000ffff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_PREAMBLE_TYPE_OFFSET            0x0000000000000010
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_PREAMBLE_TYPE_LSB               16
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_PREAMBLE_TYPE_MSB               23
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_PREAMBLE_TYPE_MASK              0x0000000000ff0000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_GI_TYPE_OFFSET                  0x0000000000000010
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_GI_TYPE_LSB                     24
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_GI_TYPE_MSB                     31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_GI_TYPE_MASK                    0x00000000ff000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_START_TS_OFFSET                  0x0000000000000010
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_START_TS_LSB                     32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_START_TS_MSB                     63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_START_TS_MASK                    0xffffffff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_START_TS_UPPER_OFFSET            0x0000000000000018
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_START_TS_UPPER_LSB               0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_START_TS_UPPER_MSB               31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_START_TS_UPPER_MASK              0x00000000ffffffff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_END_TS_OFFSET                    0x0000000000000018
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_END_TS_LSB                       32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_END_TS_MSB                       63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RX_END_TS_MASK                      0xffffffff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN0_OFFSET                  0x0000000000000020
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN0_LSB                     0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN0_MSB                     15
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN0_MASK                    0x000000000000ffff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN1_OFFSET                  0x0000000000000020
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN1_LSB                     16
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN1_MSB                     31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN1_MASK                    0x00000000ffff0000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN2_OFFSET                  0x0000000000000020
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN2_LSB                     32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN2_MSB                     47
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN2_MASK                    0x0000ffff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN3_OFFSET                  0x0000000000000020
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN3_LSB                     48
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN3_MSB                     63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_CHAIN3_MASK                    0xffff000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_REPORT_STATUS_OFFSET           0x0000000000000028
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_REPORT_STATUS_LSB              0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_REPORT_STATUS_MSB              7
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_GAIN_REPORT_STATUS_MASK             0x00000000000000ff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_TIMING_BACKOFF_SEL_OFFSET       0x0000000000000028
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_TIMING_BACKOFF_SEL_LSB          8
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_TIMING_BACKOFF_SEL_MSB          15
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_TIMING_BACKOFF_SEL_MASK         0x000000000000ff00

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_COMBINED_OFFSET             0x0000000000000028
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_COMBINED_LSB                16
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_COMBINED_MSB                31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_COMBINED_MASK               0x00000000ffff0000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_0_OFFSET                    0x0000000000000028
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_0_LSB                       32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_0_MSB                       47
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_0_MASK                      0x0000ffff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_1_OFFSET                    0x0000000000000028
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_1_LSB                       48
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_1_MSB                       63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_1_MASK                      0xffff000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_2_OFFSET                    0x0000000000000030
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_2_LSB                       0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_2_MSB                       15
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_2_MASK                      0x000000000000ffff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_3_OFFSET                    0x0000000000000030
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_3_LSB                       16
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_3_MSB                       31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_3_MASK                      0x00000000ffff0000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_4_OFFSET                    0x0000000000000030
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_4_LSB                       32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_4_MSB                       47
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_4_MASK                      0x0000ffff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_5_OFFSET                    0x0000000000000030
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_5_LSB                       48
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_5_MSB                       63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_5_MASK                      0xffff000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_6_OFFSET                    0x0000000000000038
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_6_LSB                       0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_6_MSB                       15
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_6_MASK                      0x000000000000ffff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_7_OFFSET                    0x0000000000000038
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_7_LSB                       16
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_7_MSB                       31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_7_MASK                      0x00000000ffff0000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_8_OFFSET                    0x0000000000000038
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_8_LSB                       32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_8_MSB                       47
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_8_MASK                      0x0000ffff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_9_OFFSET                    0x0000000000000038
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_9_LSB                       48
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_9_MSB                       63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_9_MASK                      0xffff000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_10_OFFSET                   0x0000000000000040
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_10_LSB                      0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_10_MSB                      15
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_10_MASK                     0x000000000000ffff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_11_OFFSET                   0x0000000000000040
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_11_LSB                      16
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_11_MSB                      31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_11_MASK                     0x00000000ffff0000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_12_OFFSET                   0x0000000000000040
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_12_LSB                      32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_12_MSB                      47
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_12_MASK                     0x0000ffff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_13_OFFSET                   0x0000000000000040
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_13_LSB                      48
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_13_MSB                      63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_13_MASK                     0xffff000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_14_OFFSET                   0x0000000000000048
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_14_LSB                      0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_14_MSB                      15
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_14_MASK                     0x000000000000ffff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_15_OFFSET                   0x0000000000000048
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_15_LSB                      16
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_15_MSB                      31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_15_MASK                     0x00000000ffff0000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_16_OFFSET                   0x0000000000000048
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_16_LSB                      32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_16_MSB                      47
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_16_MASK                     0x0000ffff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_17_OFFSET                   0x0000000000000048
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_17_LSB                      48
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_17_MSB                      63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_17_MASK                     0xffff000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_18_OFFSET                   0x0000000000000050
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_18_LSB                      0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_18_MSB                      15
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_18_MASK                     0x000000000000ffff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_19_OFFSET                   0x0000000000000050
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_19_LSB                      16
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_19_MSB                      31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_19_MASK                     0x00000000ffff0000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_20_OFFSET                   0x0000000000000050
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_20_LSB                      32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_20_MSB                      47
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_20_MASK                     0x0000ffff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_21_OFFSET                   0x0000000000000050
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_21_LSB                      48
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_21_MSB                      63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_21_MASK                     0xffff000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_22_OFFSET                   0x0000000000000058
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_22_LSB                      0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_22_MSB                      15
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_22_MASK                     0x000000000000ffff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_23_OFFSET                   0x0000000000000058
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_23_LSB                      16
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_23_MSB                      31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_23_MASK                     0x00000000ffff0000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_24_OFFSET                   0x0000000000000058
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_24_LSB                      32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_24_MSB                      47
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_24_MASK                     0x0000ffff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_25_OFFSET                   0x0000000000000058
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_25_LSB                      48
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_25_MSB                      63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_25_MASK                     0xffff000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_26_OFFSET                   0x0000000000000060
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_26_LSB                      0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_26_MSB                      15
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_26_MASK                     0x000000000000ffff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_27_OFFSET                   0x0000000000000060
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_27_LSB                      16
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_27_MSB                      31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_27_MASK                     0x00000000ffff0000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_28_OFFSET                   0x0000000000000060
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_28_LSB                      32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_28_MSB                      47
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_28_MASK                     0x0000ffff00000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_29_OFFSET                   0x0000000000000060
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_29_LSB                      48
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_29_MSB                      63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_29_MASK                     0xffff000000000000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_30_OFFSET                   0x0000000000000068
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_30_LSB                      0
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_30_MSB                      15
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_30_MASK                     0x000000000000ffff

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_31_OFFSET                   0x0000000000000068
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_31_LSB                      16
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_31_MSB                      31
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RTT_FAC_31_MASK                     0x00000000ffff0000

#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RESERVED_27A_OFFSET                 0x0000000000000068
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RESERVED_27A_LSB                    32
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RESERVED_27A_MSB                    63
#define PHYRX_LOCATION_RX_LOCATION_INFO_DETAILS_RESERVED_27A_MASK                   0xffffffff00000000

#endif

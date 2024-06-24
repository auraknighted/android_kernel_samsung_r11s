/*
 * Copyright (c) 2016-2017 The Linux Foundation. All rights reserved.
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

// $ATH_LICENSE_HW_HDR_C$
//
// DO NOT EDIT!  This file is automatically generated
//               These definitions are tied to a particular hardware layout


#ifndef _RX_MPDU_START_H_
#define _RX_MPDU_START_H_
#if !defined(__ASSEMBLER__)
#endif

#include "rx_mpdu_info.h"

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0-22	struct rx_mpdu_info rx_mpdu_info_details;
//	23	raw_mpdu[0], reserved_23[31:1]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_MPDU_START 24

struct rx_mpdu_start {
    struct            rx_mpdu_info                       rx_mpdu_info_details;
             uint32_t raw_mpdu                        :  1, //[0]
                      reserved_23                     : 31; //[31:1]
};

/*

struct rx_mpdu_info rx_mpdu_info_details
			
			Structure containing all the MPDU header details that
			might be needed for other modules further down the received
			path

raw_mpdu
			
			Set by OLE when it has not performed any .11 to .3
			header conversion on this MPDU.
			
			<legal all>

reserved_23
			
			<legal 0>
*/

#define RX_MPDU_START_0_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET     0x00000000
#define RX_MPDU_START_0_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB        1
#define RX_MPDU_START_0_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK       0xffffffff
#define RX_MPDU_START_1_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET     0x00000004
#define RX_MPDU_START_1_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB        1
#define RX_MPDU_START_1_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK       0xffffffff
#define RX_MPDU_START_2_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET     0x00000008
#define RX_MPDU_START_2_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB        1
#define RX_MPDU_START_2_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK       0xffffffff
#define RX_MPDU_START_3_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET     0x0000000c
#define RX_MPDU_START_3_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB        1
#define RX_MPDU_START_3_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK       0xffffffff
#define RX_MPDU_START_4_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET     0x00000010
#define RX_MPDU_START_4_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB        1
#define RX_MPDU_START_4_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK       0xffffffff
#define RX_MPDU_START_5_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET     0x00000014
#define RX_MPDU_START_5_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB        1
#define RX_MPDU_START_5_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK       0xffffffff
#define RX_MPDU_START_6_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET     0x00000018
#define RX_MPDU_START_6_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB        1
#define RX_MPDU_START_6_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK       0xffffffff
#define RX_MPDU_START_7_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET     0x0000001c
#define RX_MPDU_START_7_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB        1
#define RX_MPDU_START_7_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK       0xffffffff
#define RX_MPDU_START_8_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET     0x00000020
#define RX_MPDU_START_8_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB        1
#define RX_MPDU_START_8_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK       0xffffffff
#define RX_MPDU_START_9_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET     0x00000024
#define RX_MPDU_START_9_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB        1
#define RX_MPDU_START_9_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK       0xffffffff
#define RX_MPDU_START_10_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x00000028
#define RX_MPDU_START_10_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_10_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff
#define RX_MPDU_START_11_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x0000002c
#define RX_MPDU_START_11_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_11_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff
#define RX_MPDU_START_12_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x00000030
#define RX_MPDU_START_12_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_12_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff
#define RX_MPDU_START_13_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x00000034
#define RX_MPDU_START_13_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_13_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff
#define RX_MPDU_START_14_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x00000038
#define RX_MPDU_START_14_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_14_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff
#define RX_MPDU_START_15_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x0000003c
#define RX_MPDU_START_15_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_15_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff
#define RX_MPDU_START_16_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x00000040
#define RX_MPDU_START_16_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_16_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff
#define RX_MPDU_START_17_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x00000044
#define RX_MPDU_START_17_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_17_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff
#define RX_MPDU_START_18_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x00000048
#define RX_MPDU_START_18_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_18_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff
#define RX_MPDU_START_19_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x0000004c
#define RX_MPDU_START_19_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_19_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff
#define RX_MPDU_START_20_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x00000050
#define RX_MPDU_START_20_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_20_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff
#define RX_MPDU_START_21_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x00000054
#define RX_MPDU_START_21_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_21_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff
#define RX_MPDU_START_22_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_OFFSET    0x00000058
#define RX_MPDU_START_22_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_LSB       1
#define RX_MPDU_START_22_RX_MPDU_INFO_RX_MPDU_INFO_DETAILS_MASK      0xffffffff

/* Description		RX_MPDU_START_23_RAW_MPDU
			
			Set by OLE when it has not performed any .11 to .3
			header conversion on this MPDU.
			
			<legal all>
*/
#define RX_MPDU_START_23_RAW_MPDU_OFFSET                             0x0000005c
#define RX_MPDU_START_23_RAW_MPDU_LSB                                0
#define RX_MPDU_START_23_RAW_MPDU_MASK                               0x00000001

/* Description		RX_MPDU_START_23_RESERVED_23
			
			<legal 0>
*/
#define RX_MPDU_START_23_RESERVED_23_OFFSET                          0x0000005c
#define RX_MPDU_START_23_RESERVED_23_LSB                             1
#define RX_MPDU_START_23_RESERVED_23_MASK                            0xfffffffe


#endif // _RX_MPDU_START_H_

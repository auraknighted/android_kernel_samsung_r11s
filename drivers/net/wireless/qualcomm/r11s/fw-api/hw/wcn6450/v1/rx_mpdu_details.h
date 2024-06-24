
/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
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



#ifndef _RX_MPDU_DETAILS_H_
#define _RX_MPDU_DETAILS_H_
#if !defined(__ASSEMBLER__)
#endif

#include "buffer_addr_info.h"
#include "rx_mpdu_desc_info.h"

#define NUM_OF_DWORDS_RX_MPDU_DETAILS 4

struct rx_mpdu_details {
    struct            buffer_addr_info                       msdu_link_desc_addr_info;
    struct            rx_mpdu_desc_info                       rx_mpdu_desc_info_details;
};

#define RX_MPDU_DETAILS_0_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000000
#define RX_MPDU_DETAILS_0_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_MPDU_DETAILS_0_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

#define RX_MPDU_DETAILS_1_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000004
#define RX_MPDU_DETAILS_1_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_MPDU_DETAILS_1_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

#define RX_MPDU_DETAILS_1_MSDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000004
#define RX_MPDU_DETAILS_1_MSDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_MPDU_DETAILS_1_MSDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

#define RX_MPDU_DETAILS_1_MSDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000004
#define RX_MPDU_DETAILS_1_MSDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_MPDU_DETAILS_1_MSDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MSDU_COUNT_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MSDU_COUNT_LSB   0
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MSDU_COUNT_MASK  0x000000ff

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MPDU_SEQUENCE_NUMBER_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MPDU_SEQUENCE_NUMBER_LSB 8
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MPDU_SEQUENCE_NUMBER_MASK 0x000fff00

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_FRAGMENT_FLAG_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_FRAGMENT_FLAG_LSB 20
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_FRAGMENT_FLAG_MASK 0x00100000

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MPDU_RETRY_BIT_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MPDU_RETRY_BIT_LSB 21
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MPDU_RETRY_BIT_MASK 0x00200000

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_AMPDU_FLAG_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_AMPDU_FLAG_LSB   22
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_AMPDU_FLAG_MASK  0x00400000

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_BAR_FRAME_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_BAR_FRAME_LSB    23
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_BAR_FRAME_MASK   0x00800000

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_PN_FIELDS_CONTAIN_VALID_INFO_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_PN_FIELDS_CONTAIN_VALID_INFO_LSB 24
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_PN_FIELDS_CONTAIN_VALID_INFO_MASK 0x01000000

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_SA_IS_VALID_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_SA_IS_VALID_LSB  25
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_SA_IS_VALID_MASK 0x02000000

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT_LSB 26
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT_MASK 0x04000000

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_DA_IS_VALID_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_DA_IS_VALID_LSB  27
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_DA_IS_VALID_MASK 0x08000000

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_DA_IS_MCBC_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_DA_IS_MCBC_LSB   28
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_DA_IS_MCBC_MASK  0x10000000

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT_LSB 29
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT_MASK 0x20000000

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_RAW_MPDU_OFFSET  0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_RAW_MPDU_LSB     30
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_RAW_MPDU_MASK    0x40000000

#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MORE_FRAGMENT_FLAG_OFFSET 0x00000008
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MORE_FRAGMENT_FLAG_LSB 31
#define RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MORE_FRAGMENT_FLAG_MASK 0x80000000

#define RX_MPDU_DETAILS_3_RX_MPDU_DESC_INFO_DETAILS_PEER_META_DATA_OFFSET 0x0000000c
#define RX_MPDU_DETAILS_3_RX_MPDU_DESC_INFO_DETAILS_PEER_META_DATA_LSB 0
#define RX_MPDU_DETAILS_3_RX_MPDU_DESC_INFO_DETAILS_PEER_META_DATA_MASK 0xffffffff

#endif

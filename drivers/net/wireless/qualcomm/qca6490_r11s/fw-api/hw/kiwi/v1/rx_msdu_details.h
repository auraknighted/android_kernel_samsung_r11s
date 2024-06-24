
/*
 * Copyright (c) 2021 Qualcomm Innovation Center, Inc. All rights reserved.
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











#ifndef _RX_MSDU_DETAILS_H_
#define _RX_MSDU_DETAILS_H_
#if !defined(__ASSEMBLER__)
#endif

#include "rx_msdu_desc_info.h"
#include "rx_msdu_ext_desc_info.h"
#include "buffer_addr_info.h"
#define NUM_OF_DWORDS_RX_MSDU_DETAILS 4


struct rx_msdu_details {
	     struct   buffer_addr_info                                          buffer_addr_info_details;
	     struct   rx_msdu_desc_info                                         rx_msdu_desc_info_details;
	     struct   rx_msdu_ext_desc_info                                     rx_msdu_ext_desc_info_details;
};







#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_BUFFER_ADDR_31_0_OFFSET            0x00000000
#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_BUFFER_ADDR_31_0_LSB               0
#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_BUFFER_ADDR_31_0_MSB               31
#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_BUFFER_ADDR_31_0_MASK              0xffffffff




#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_BUFFER_ADDR_39_32_OFFSET           0x00000004
#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_BUFFER_ADDR_39_32_LSB              0
#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_BUFFER_ADDR_39_32_MSB              7
#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_BUFFER_ADDR_39_32_MASK             0x000000ff




#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_RETURN_BUFFER_MANAGER_OFFSET       0x00000004
#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_RETURN_BUFFER_MANAGER_LSB          8
#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_RETURN_BUFFER_MANAGER_MSB          11
#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_RETURN_BUFFER_MANAGER_MASK         0x00000f00




#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_SW_BUFFER_COOKIE_OFFSET            0x00000004
#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_SW_BUFFER_COOKIE_LSB               12
#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_SW_BUFFER_COOKIE_MSB               31
#define RX_MSDU_DETAILS_BUFFER_ADDR_INFO_DETAILS_SW_BUFFER_COOKIE_MASK              0xfffff000







#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_FIRST_MSDU_IN_MPDU_FLAG_OFFSET    0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_FIRST_MSDU_IN_MPDU_FLAG_LSB       0
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_FIRST_MSDU_IN_MPDU_FLAG_MSB       0
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_FIRST_MSDU_IN_MPDU_FLAG_MASK      0x00000001




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_LAST_MSDU_IN_MPDU_FLAG_OFFSET     0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_LAST_MSDU_IN_MPDU_FLAG_LSB        1
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_LAST_MSDU_IN_MPDU_FLAG_MSB        1
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_LAST_MSDU_IN_MPDU_FLAG_MASK       0x00000002




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_MSDU_CONTINUATION_OFFSET          0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_MSDU_CONTINUATION_LSB             2
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_MSDU_CONTINUATION_MSB             2
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_MSDU_CONTINUATION_MASK            0x00000004




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_MSDU_LENGTH_OFFSET                0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_MSDU_LENGTH_LSB                   3
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_MSDU_LENGTH_MSB                   16
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_MSDU_LENGTH_MASK                  0x0001fff8




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_MSDU_DROP_OFFSET                  0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_MSDU_DROP_LSB                     17
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_MSDU_DROP_MSB                     17
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_MSDU_DROP_MASK                    0x00020000




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_SA_IS_VALID_OFFSET                0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_SA_IS_VALID_LSB                   18
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_SA_IS_VALID_MSB                   18
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_SA_IS_VALID_MASK                  0x00040000




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_DA_IS_VALID_OFFSET                0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_DA_IS_VALID_LSB                   19
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_DA_IS_VALID_MSB                   19
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_DA_IS_VALID_MASK                  0x00080000




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_DA_IS_MCBC_OFFSET                 0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_DA_IS_MCBC_LSB                    20
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_DA_IS_MCBC_MSB                    20
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_DA_IS_MCBC_MASK                   0x00100000




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_L3_HEADER_PADDING_MSB_OFFSET      0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_L3_HEADER_PADDING_MSB_LSB         21
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_L3_HEADER_PADDING_MSB_MSB         21
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_L3_HEADER_PADDING_MSB_MASK        0x00200000




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_TCP_UDP_CHKSUM_FAIL_OFFSET        0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_TCP_UDP_CHKSUM_FAIL_LSB           22
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_TCP_UDP_CHKSUM_FAIL_MSB           22
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_TCP_UDP_CHKSUM_FAIL_MASK          0x00400000




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_IP_CHKSUM_FAIL_OFFSET             0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_IP_CHKSUM_FAIL_LSB                23
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_IP_CHKSUM_FAIL_MSB                23
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_IP_CHKSUM_FAIL_MASK               0x00800000




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_FR_DS_OFFSET                      0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_FR_DS_LSB                         24
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_FR_DS_MSB                         24
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_FR_DS_MASK                        0x01000000




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_TO_DS_OFFSET                      0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_TO_DS_LSB                         25
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_TO_DS_MSB                         25
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_TO_DS_MASK                        0x02000000




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_INTRA_BSS_OFFSET                  0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_INTRA_BSS_LSB                     26
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_INTRA_BSS_MSB                     26
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_INTRA_BSS_MASK                    0x04000000




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_DEST_CHIP_ID_OFFSET               0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_DEST_CHIP_ID_LSB                  27
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_DEST_CHIP_ID_MSB                  28
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_DEST_CHIP_ID_MASK                 0x18000000




#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_RESERVED_0A_OFFSET                0x00000008
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_RESERVED_0A_LSB                   29
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_RESERVED_0A_MSB                   31
#define RX_MSDU_DETAILS_RX_MSDU_DESC_INFO_DETAILS_RESERVED_0A_MASK                  0xe0000000







#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_REO_DESTINATION_INDICATION_OFFSET 0x0000000c
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_REO_DESTINATION_INDICATION_LSB 0
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_REO_DESTINATION_INDICATION_MSB 4
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_REO_DESTINATION_INDICATION_MASK 0x0000001f




#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_SERVICE_CODE_OFFSET           0x0000000c
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_SERVICE_CODE_LSB              5
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_SERVICE_CODE_MSB              13
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_SERVICE_CODE_MASK             0x00003fe0




#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_PRIORITY_VALID_OFFSET         0x0000000c
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_PRIORITY_VALID_LSB            14
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_PRIORITY_VALID_MSB            14
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_PRIORITY_VALID_MASK           0x00004000




#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_DATA_OFFSET_OFFSET            0x0000000c
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_DATA_OFFSET_LSB               15
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_DATA_OFFSET_MSB               26
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_DATA_OFFSET_MASK              0x07ff8000




#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_RESERVED_0A_OFFSET            0x0000000c
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_RESERVED_0A_LSB               27
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_RESERVED_0A_MSB               31
#define RX_MSDU_DETAILS_RX_MSDU_EXT_DESC_INFO_DETAILS_RESERVED_0A_MASK              0xf8000000



#endif

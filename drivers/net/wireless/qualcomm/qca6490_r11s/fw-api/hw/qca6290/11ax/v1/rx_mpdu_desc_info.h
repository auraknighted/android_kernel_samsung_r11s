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

#ifndef _RX_MPDU_DESC_INFO_H_
#define _RX_MPDU_DESC_INFO_H_
#if !defined(__ASSEMBLER__)
#endif


// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	msdu_count[7:0], mpdu_sequence_number[19:8], fragment_flag[20], mpdu_retry_bit[21], ampdu_flag[22], bar_frame[23], pn_fields_contain_valid_info[24], sa_is_valid[25], sa_idx_timeout[26], da_is_valid[27], da_is_mcbc[28], da_idx_timeout[29], raw_mpdu[30], reserved[31]
//	1	peer_meta_data[31:0]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_MPDU_DESC_INFO 2

struct rx_mpdu_desc_info {
             uint32_t msdu_count                      :  8, //[7:0]
                      mpdu_sequence_number            : 12, //[19:8]
                      fragment_flag                   :  1, //[20]
                      mpdu_retry_bit                  :  1, //[21]
                      ampdu_flag                      :  1, //[22]
                      bar_frame                       :  1, //[23]
                      pn_fields_contain_valid_info    :  1, //[24]
                      sa_is_valid                     :  1, //[25]
                      sa_idx_timeout                  :  1, //[26]
                      da_is_valid                     :  1, //[27]
                      da_is_mcbc                      :  1, //[28]
                      da_idx_timeout                  :  1, //[29]
                      raw_mpdu                        :  1, //[30]
                      reserved                        :  1; //[31]
             uint32_t peer_meta_data                  : 32; //[31:0]
};

/*

msdu_count
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			The number of MSDUs within the MPDU 
			
			<legal all>

mpdu_sequence_number
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			The field can have two different meanings based on the
			setting of field 'BAR_frame':
			
			
			
			'BAR_frame' is NOT set:
			
			The MPDU sequence number of the received frame.
			
			
			
			'BAR_frame' is set.
			
			The MPDU Start sequence number from the BAR frame
			
			<legal all>

fragment_flag
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			When set, this MPDU is a fragment and REO should forward
			this fragment MPDU to the REO destination ring without any
			reorder checks, pn checks or bitmap update. This implies
			that REO is forwarding the pointer to the MSDU link
			descriptor. The destination ring is coming from a
			programmable register setting in REO
			
			
			
			<legal all>

mpdu_retry_bit
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			The retry bit setting from the MPDU header of the
			received frame
			
			<legal all>

ampdu_flag
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			When set, the MPDU was received as part of an A-MPDU.
			
			<legal all>

bar_frame
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			When set, the received frame is a BAR frame. After
			processing, this frame shall be pushed to SW or deleted.
			
			<legal all>

pn_fields_contain_valid_info
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			Copied here by RXDMA from RX_MPDU_END
			
			When not set, REO will Not perform a PN sequence number
			check

sa_is_valid
			
			When set, OLE found a valid SA entry for all MSDUs in
			this MPDU
			
			<legal all>

sa_idx_timeout
			
			When set, at least 1 MSDU within the MPDU has an
			unsuccessful MAC source address search due to the expiration
			of the search timer.
			
			<legal all>

da_is_valid
			
			When set, OLE found a valid DA entry for all MSDUs in
			this MPDU
			
			<legal all>

da_is_mcbc
			
			Field Only valid if da_is_valid is set
			
			
			
			When set, at least one of the DA addresses is a
			Multicast or Broadcast address.
			
			<legal all>

da_idx_timeout
			
			When set, at least 1 MSDU within the MPDU has an
			unsuccessful MAC destination address search due to the
			expiration of the search timer.
			
			<legal all>

raw_mpdu
			
			Field only valid when first_msdu_in_mpdu_flag is set.
			
			
			
			When set, the contents in the MSDU buffer contains a
			'RAW' MPDU. This 'RAW' MPDU might be spread out over
			multiple MSDU buffers.
			
			<legal all>

reserved
			
			<legal 0>

peer_meta_data
			
			Meta data that SW has programmed in the Peer table entry
			of the transmitting STA.
			
			<legal all>
*/


/* Description		RX_MPDU_DESC_INFO_0_MSDU_COUNT
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			The number of MSDUs within the MPDU 
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_0_MSDU_COUNT_OFFSET                        0x00000000
#define RX_MPDU_DESC_INFO_0_MSDU_COUNT_LSB                           0
#define RX_MPDU_DESC_INFO_0_MSDU_COUNT_MASK                          0x000000ff

/* Description		RX_MPDU_DESC_INFO_0_MPDU_SEQUENCE_NUMBER
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			The field can have two different meanings based on the
			setting of field 'BAR_frame':
			
			
			
			'BAR_frame' is NOT set:
			
			The MPDU sequence number of the received frame.
			
			
			
			'BAR_frame' is set.
			
			The MPDU Start sequence number from the BAR frame
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_0_MPDU_SEQUENCE_NUMBER_OFFSET              0x00000000
#define RX_MPDU_DESC_INFO_0_MPDU_SEQUENCE_NUMBER_LSB                 8
#define RX_MPDU_DESC_INFO_0_MPDU_SEQUENCE_NUMBER_MASK                0x000fff00

/* Description		RX_MPDU_DESC_INFO_0_FRAGMENT_FLAG
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			When set, this MPDU is a fragment and REO should forward
			this fragment MPDU to the REO destination ring without any
			reorder checks, pn checks or bitmap update. This implies
			that REO is forwarding the pointer to the MSDU link
			descriptor. The destination ring is coming from a
			programmable register setting in REO
			
			
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_0_FRAGMENT_FLAG_OFFSET                     0x00000000
#define RX_MPDU_DESC_INFO_0_FRAGMENT_FLAG_LSB                        20
#define RX_MPDU_DESC_INFO_0_FRAGMENT_FLAG_MASK                       0x00100000

/* Description		RX_MPDU_DESC_INFO_0_MPDU_RETRY_BIT
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			The retry bit setting from the MPDU header of the
			received frame
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_0_MPDU_RETRY_BIT_OFFSET                    0x00000000
#define RX_MPDU_DESC_INFO_0_MPDU_RETRY_BIT_LSB                       21
#define RX_MPDU_DESC_INFO_0_MPDU_RETRY_BIT_MASK                      0x00200000

/* Description		RX_MPDU_DESC_INFO_0_AMPDU_FLAG
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			When set, the MPDU was received as part of an A-MPDU.
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_0_AMPDU_FLAG_OFFSET                        0x00000000
#define RX_MPDU_DESC_INFO_0_AMPDU_FLAG_LSB                           22
#define RX_MPDU_DESC_INFO_0_AMPDU_FLAG_MASK                          0x00400000

/* Description		RX_MPDU_DESC_INFO_0_BAR_FRAME
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			When set, the received frame is a BAR frame. After
			processing, this frame shall be pushed to SW or deleted.
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_0_BAR_FRAME_OFFSET                         0x00000000
#define RX_MPDU_DESC_INFO_0_BAR_FRAME_LSB                            23
#define RX_MPDU_DESC_INFO_0_BAR_FRAME_MASK                           0x00800000

/* Description		RX_MPDU_DESC_INFO_0_PN_FIELDS_CONTAIN_VALID_INFO
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			Copied here by RXDMA from RX_MPDU_END
			
			When not set, REO will Not perform a PN sequence number
			check
*/
#define RX_MPDU_DESC_INFO_0_PN_FIELDS_CONTAIN_VALID_INFO_OFFSET      0x00000000
#define RX_MPDU_DESC_INFO_0_PN_FIELDS_CONTAIN_VALID_INFO_LSB         24
#define RX_MPDU_DESC_INFO_0_PN_FIELDS_CONTAIN_VALID_INFO_MASK        0x01000000

/* Description		RX_MPDU_DESC_INFO_0_SA_IS_VALID
			
			When set, OLE found a valid SA entry for all MSDUs in
			this MPDU
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_0_SA_IS_VALID_OFFSET                       0x00000000
#define RX_MPDU_DESC_INFO_0_SA_IS_VALID_LSB                          25
#define RX_MPDU_DESC_INFO_0_SA_IS_VALID_MASK                         0x02000000

/* Description		RX_MPDU_DESC_INFO_0_SA_IDX_TIMEOUT
			
			When set, at least 1 MSDU within the MPDU has an
			unsuccessful MAC source address search due to the expiration
			of the search timer.
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_0_SA_IDX_TIMEOUT_OFFSET                    0x00000000
#define RX_MPDU_DESC_INFO_0_SA_IDX_TIMEOUT_LSB                       26
#define RX_MPDU_DESC_INFO_0_SA_IDX_TIMEOUT_MASK                      0x04000000

/* Description		RX_MPDU_DESC_INFO_0_DA_IS_VALID
			
			When set, OLE found a valid DA entry for all MSDUs in
			this MPDU
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_0_DA_IS_VALID_OFFSET                       0x00000000
#define RX_MPDU_DESC_INFO_0_DA_IS_VALID_LSB                          27
#define RX_MPDU_DESC_INFO_0_DA_IS_VALID_MASK                         0x08000000

/* Description		RX_MPDU_DESC_INFO_0_DA_IS_MCBC
			
			Field Only valid if da_is_valid is set
			
			
			
			When set, at least one of the DA addresses is a
			Multicast or Broadcast address.
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_0_DA_IS_MCBC_OFFSET                        0x00000000
#define RX_MPDU_DESC_INFO_0_DA_IS_MCBC_LSB                           28
#define RX_MPDU_DESC_INFO_0_DA_IS_MCBC_MASK                          0x10000000

/* Description		RX_MPDU_DESC_INFO_0_DA_IDX_TIMEOUT
			
			When set, at least 1 MSDU within the MPDU has an
			unsuccessful MAC destination address search due to the
			expiration of the search timer.
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_0_DA_IDX_TIMEOUT_OFFSET                    0x00000000
#define RX_MPDU_DESC_INFO_0_DA_IDX_TIMEOUT_LSB                       29
#define RX_MPDU_DESC_INFO_0_DA_IDX_TIMEOUT_MASK                      0x20000000

/* Description		RX_MPDU_DESC_INFO_0_RAW_MPDU
			
			Field only valid when first_msdu_in_mpdu_flag is set.
			
			
			
			When set, the contents in the MSDU buffer contains a
			'RAW' MPDU. This 'RAW' MPDU might be spread out over
			multiple MSDU buffers.
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_0_RAW_MPDU_OFFSET                          0x00000000
#define RX_MPDU_DESC_INFO_0_RAW_MPDU_LSB                             30
#define RX_MPDU_DESC_INFO_0_RAW_MPDU_MASK                            0x40000000

/* Description		RX_MPDU_DESC_INFO_0_RESERVED
			
			<legal 0>
*/
#define RX_MPDU_DESC_INFO_0_RESERVED_OFFSET                          0x00000000
#define RX_MPDU_DESC_INFO_0_RESERVED_LSB                             31
#define RX_MPDU_DESC_INFO_0_RESERVED_MASK                            0x80000000

/* Description		RX_MPDU_DESC_INFO_1_PEER_META_DATA
			
			Meta data that SW has programmed in the Peer table entry
			of the transmitting STA.
			
			<legal all>
*/
#define RX_MPDU_DESC_INFO_1_PEER_META_DATA_OFFSET                    0x00000004
#define RX_MPDU_DESC_INFO_1_PEER_META_DATA_LSB                       0
#define RX_MPDU_DESC_INFO_1_PEER_META_DATA_MASK                      0xffffffff


#endif // _RX_MPDU_DESC_INFO_H_

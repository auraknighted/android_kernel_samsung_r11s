/*
 * Copyright (c) 2020, The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef _REO_ENTRANCE_RING_H_
#define _REO_ENTRANCE_RING_H_
#if !defined(__ASSEMBLER__)
#endif

#include "rx_mpdu_details.h"

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0-3	struct rx_mpdu_details reo_level_mpdu_frame_info;
//	4	rx_reo_queue_desc_addr_31_0[31:0]
//	5	rx_reo_queue_desc_addr_39_32[7:0], rounded_mpdu_byte_count[21:8], reo_destination_indication[26:22], frameless_bar[27], reserved_5a[31:28]
//	6	rxdma_push_reason[1:0], rxdma_error_code[6:2], mpdu_fragment_number[10:7], sw_exception[11], sw_exception_mpdu_delink[12], sw_exception_destination_ring_valid[13], sw_exception_destination_ring[18:14], reserved_6a[31:19]
//	7	phy_ppdu_id[15:0], reserved_7a[19:16], ring_id[27:20], looping_count[31:28]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_REO_ENTRANCE_RING 8

struct reo_entrance_ring {
    struct            rx_mpdu_details                       reo_level_mpdu_frame_info;
             uint32_t rx_reo_queue_desc_addr_31_0     : 32; //[31:0]
             uint32_t rx_reo_queue_desc_addr_39_32    :  8, //[7:0]
                      rounded_mpdu_byte_count         : 14, //[21:8]
                      reo_destination_indication      :  5, //[26:22]
                      frameless_bar                   :  1, //[27]
                      reserved_5a                     :  4; //[31:28]
             uint32_t rxdma_push_reason               :  2, //[1:0]
                      rxdma_error_code                :  5, //[6:2]
                      mpdu_fragment_number            :  4, //[10:7]
                      sw_exception                    :  1, //[11]
                      sw_exception_mpdu_delink        :  1, //[12]
                      sw_exception_destination_ring_valid:  1, //[13]
                      sw_exception_destination_ring   :  5, //[18:14]
                      reserved_6a                     : 13; //[31:19]
             uint32_t phy_ppdu_id                     : 16, //[15:0]
                      reserved_7a                     :  4, //[19:16]
                      ring_id                         :  8, //[27:20]
                      looping_count                   :  4; //[31:28]
};

/*

struct rx_mpdu_details reo_level_mpdu_frame_info
			
			Consumer: REO
			
			Producer: RXDMA
			
			
			
			Details related to the MPDU being pushed into the REO

rx_reo_queue_desc_addr_31_0
			
			Consumer: REO
			
			Producer: RXDMA
			
			
			
			Address (lower 32 bits) of the REO queue descriptor. 
			
			<legal all>

rx_reo_queue_desc_addr_39_32
			
			Consumer: REO
			
			Producer: RXDMA
			
			
			
			Address (upper 8 bits) of the REO queue descriptor. 
			
			<legal all>

rounded_mpdu_byte_count
			
			An approximation of the number of bytes received in this
			MPDU. 
			
			Used to keeps stats on the amount of data flowing
			through a queue.
			
			<legal all>

reo_destination_indication
			
			RXDMA copy the MPDU's first MSDU's destination
			indication field here. This is used for REO to be able to
			re-route the packet to a different SW destination ring if
			the packet is detected as error in REO.
			
			
			
			The ID of the REO exit ring where the MSDU frame shall
			push after (MPDU level) reordering has finished.
			
			
			
			<enum 0 reo_destination_tcl> Reo will push the frame
			into the REO2TCL ring
			
			<enum 1 reo_destination_sw1> Reo will push the frame
			into the REO2SW1 ring
			
			<enum 2 reo_destination_sw2> Reo will push the frame
			into the REO2SW2 ring
			
			<enum 3 reo_destination_sw3> Reo will push the frame
			into the REO2SW3 ring
			
			<enum 4 reo_destination_sw4> Reo will push the frame
			into the REO2SW4 ring
			
			<enum 5 reo_destination_release> Reo will push the frame
			into the REO_release ring
			
			<enum 6 reo_destination_fw> Reo will push the frame into
			the REO2FW ring
			
			<enum 7 reo_destination_sw5> Reo will push the frame
			into the REO2SW5 ring (REO remaps this in chips without
			REO2SW5 ring, e.g. Pine)
			
			<enum 8 reo_destination_sw6> Reo will push the frame
			into the REO2SW6 ring (REO remaps this in chips without
			REO2SW6 ring, e.g. Pine)
			
			 <enum 9 reo_destination_9> REO remaps this <enum 10
			reo_destination_10> REO remaps this 
			
			<enum 11 reo_destination_11> REO remaps this 
			
			<enum 12 reo_destination_12> REO remaps this <enum 13
			reo_destination_13> REO remaps this 
			
			<enum 14 reo_destination_14> REO remaps this 
			
			<enum 15 reo_destination_15> REO remaps this 
			
			<enum 16 reo_destination_16> REO remaps this 
			
			<enum 17 reo_destination_17> REO remaps this 
			
			<enum 18 reo_destination_18> REO remaps this 
			
			<enum 19 reo_destination_19> REO remaps this 
			
			<enum 20 reo_destination_20> REO remaps this 
			
			<enum 21 reo_destination_21> REO remaps this 
			
			<enum 22 reo_destination_22> REO remaps this 
			
			<enum 23 reo_destination_23> REO remaps this 
			
			<enum 24 reo_destination_24> REO remaps this 
			
			<enum 25 reo_destination_25> REO remaps this 
			
			<enum 26 reo_destination_26> REO remaps this 
			
			<enum 27 reo_destination_27> REO remaps this 
			
			<enum 28 reo_destination_28> REO remaps this 
			
			<enum 29 reo_destination_29> REO remaps this 
			
			<enum 30 reo_destination_30> REO remaps this 
			
			<enum 31 reo_destination_31> REO remaps this 
			
			
			
			<legal all>

frameless_bar
			
			When set, this REO entrance ring struct contains BAR
			info from a multi TID BAR frame. The original multi TID BAR
			frame itself contained all the REO info for the first TID,
			but all the subsequent TID info and their linkage to the REO
			descriptors is passed down as 'frameless' BAR info.
			
			
			
			The only fields valid in this descriptor when this bit
			is set are:
			
			Rx_reo_queue_desc_addr_31_0
			
			RX_reo_queue_desc_addr_39_32
			
			
			
			And within the
			
			Reo_level_mpdu_frame_info:    
			
			   Within Rx_mpdu_desc_info_details:
			
			Mpdu_Sequence_number
			
			BAR_frame
			
			Peer_meta_data
			
			All other fields shall be set to 0
			
			
			
			<legal all>

reserved_5a
			
			<legal 0>

rxdma_push_reason
			
			Indicates why rxdma pushed the frame to this ring
			
			
			
			This field is ignored by REO. 
			
			
			
			<enum 0 rxdma_error_detected> RXDMA detected an error an
			pushed this frame to this queue
			
			<enum 1 rxdma_routing_instruction> RXDMA pushed the
			frame to this queue per received routing instructions. No
			error within RXDMA was detected
			
			<enum 2 rxdma_rx_flush> RXDMA received an RX_FLUSH. As a
			result the MSDU link descriptor might not have the
			last_msdu_in_mpdu_flag set, but instead WBM might just see a
			NULL pointer in the MSDU link descriptor. This is to be
			considered a normal condition for this scenario.
			
			
			
			<legal 0 - 2>

rxdma_error_code
			
			Field only valid when 'rxdma_push_reason' set to
			'rxdma_error_detected'.
			
			
			
			This field is ignored by REO.
			
			
			
			<enum 0 rxdma_overflow_err>MPDU frame is not complete
			due to a FIFO overflow error in RXPCU.
			
			<enum 1 rxdma_mpdu_length_err>MPDU frame is not complete
			due to receiving incomplete MPDU from the PHY
			
			
			<enum 3 rxdma_decrypt_err>CRYPTO reported a decryption
			error or CRYPTO received an encrypted frame, but did not get
			a valid corresponding key id in the peer entry.
			
			<enum 4 rxdma_tkip_mic_err>CRYPTO reported a TKIP MIC
			error
			
			<enum 5 rxdma_unecrypted_err>CRYPTO reported an
			unencrypted frame error when encrypted was expected
			
			<enum 6 rxdma_msdu_len_err>RX OLE reported an MSDU
			length error
			
			<enum 7 rxdma_msdu_limit_err>RX OLE reported that max
			number of MSDUs allowed in an MPDU got exceeded
			
			<enum 8 rxdma_wifi_parse_err>RX OLE reported a parsing
			error
			
			<enum 9 rxdma_amsdu_parse_err>RX OLE reported an A-MSDU
			parsing error
			
			<enum 10 rxdma_sa_timeout_err>RX OLE reported a timeout
			during SA search
			
			<enum 11 rxdma_da_timeout_err>RX OLE reported a timeout
			during DA search
			
			<enum 12 rxdma_flow_timeout_err>RX OLE reported a
			timeout during flow search
			
			<enum 13 rxdma_flush_request>RXDMA received a flush
			request
			
			<enum 14 rxdma_amsdu_fragment_err>Rx PCU reported A-MSDU
			present as well as a fragmented MPDU. A-MSDU defragmentation
			is not supported in Lithium SW so this is treated as an
			error.

mpdu_fragment_number
			
			Field only valid when Reo_level_mpdu_frame_info.
			Rx_mpdu_desc_info_details.Fragment_flag is set.
			
			
			
			The fragment number from the 802.11 header.
			
			
			
			Note that the sequence number is embedded in the field:
			Reo_level_mpdu_frame_info. Rx_mpdu_desc_info_details.
			Mpdu_sequence_number
			
			
			
			<legal all>

sw_exception
			
			When not set, REO is performing all its default MPDU
			processing operations,
			
			When set, this REO entrance descriptor is generated by
			FW, and should be processed as an exception. This implies: 
			
			NO re-order function is needed.
			
			MPDU delinking is determined by the setting of field
			SW_excection_mpdu_delink
			
			Destination ring selection is based on the setting of
			the field SW_exception_destination_ring_valid
			
			In the destination ring descriptor set bit:
			SW_exception_entry
			
			Feature supported only in HastingsPrime
			
			<legal all>

sw_exception_mpdu_delink
			
			Field only valid when SW_exception is set.
			
			1'b0: REO should NOT delink the MPDU, and thus pass this
			MPDU on to the destination ring as is. This implies that in
			the REO_DESTINATION_RING struct field
			Buf_or_link_desc_addr_info should point to an MSDU link
			descriptor
			
			1'b1: REO should perform the normal MPDU delink into
			MSDU operations.
			
			Feature supported only in HastingsPrime
			
			<legal all>

sw_exception_destination_ring_valid
			
			Field only valid when SW_exception is set.
			
			1'b0: REO shall push the MPDU (or delinked MPDU based on
			the setting of SW_exception_mpdu_delink) to the destination
			ring according to field reo_destination_indication.
			
			1'b1: REO shall push the MPDU (or delinked MPDU based on
			the setting of SW_exception_mpdu_delink) to the destination
			ring according to field SW_exception_destination_ring.
			
			Feature supported only in HastingsPrime
			
			<legal all>

sw_exception_destination_ring
			
			Field only valid when fields SW_exception and
			SW_exception_destination_ring_valid are set.
			
			The ID of the ring where REO shall push this frame.
			
			<enum 0 reo_destination_tcl> Reo will push the frame
			into the REO2TCL ring
			
			<enum 1 reo_destination_sw1> Reo will push the frame
			into the REO2SW1 ring
			
			<enum 2 reo_destination_sw2> Reo will push the frame
			into the REO2SW1 ring
			
			<enum 3 reo_destination_sw3> Reo will push the frame
			into the REO2SW1 ring
			
			<enum 4 reo_destination_sw4> Reo will push the frame
			into the REO2SW1 ring
			
			<enum 5 reo_destination_release> Reo will push the frame
			into the REO_release ring
			
			<enum 6 reo_destination_fw> Reo will push the frame into
			the REO2FW ring
			
			<enum 7 reo_destination_sw5> REO remaps this
			
			<enum 8 reo_destination_sw6> REO remaps this 
			
			<enum 9 reo_destination_9> REO remaps this
			
			<enum 10 reo_destination_10> REO remaps this 
			
			<enum 11 reo_destination_11> REO remaps this 
			
			<enum 12 reo_destination_12> REO remaps this <enum 13
			reo_destination_13> REO remaps this 
			
			<enum 14 reo_destination_14> REO remaps this 
			
			<enum 15 reo_destination_15> REO remaps this 
			
			<enum 16 reo_destination_16> REO remaps this 
			
			<enum 17 reo_destination_17> REO remaps this 
			
			<enum 18 reo_destination_18> REO remaps this 
			
			<enum 19 reo_destination_19> REO remaps this 
			
			<enum 20 reo_destination_20> REO remaps this 
			
			<enum 21 reo_destination_21> REO remaps this 
			
			<enum 22 reo_destination_22> REO remaps this 
			
			<enum 23 reo_destination_23> REO remaps this 
			
			<enum 24 reo_destination_24> REO remaps this 
			
			<enum 25 reo_destination_25> REO remaps this 
			
			<enum 26 reo_destination_26> REO remaps this 
			
			<enum 27 reo_destination_27> REO remaps this 
			
			<enum 28 reo_destination_28> REO remaps this 
			
			<enum 29 reo_destination_29> REO remaps this 
			
			<enum 30 reo_destination_30> REO remaps this 
			
			<enum 31 reo_destination_31> REO remaps this 
			
			
			
			Feature supported only in HastingsPrime
			
			<legal all>

reserved_6a
			
			<legal 0>

phy_ppdu_id
			
			A PPDU counter value that PHY increments for every PPDU
			received
			
			The counter value wraps around. Pine RXDMA can be
			configured to copy this from the RX_PPDU_START TLV for every
			output descriptor.
			
			
			
			This field is ignored by REO.
			
			
			
			Feature supported only in Pine
			
			<legal all>

reserved_7a
			
			<legal 0>

ring_id
			
			Consumer: SW/REO/DEBUG
			
			Producer: SRNG (of RXDMA)
			
			
			
			For debugging. 
			
			This field is filled in by the SRNG module.
			
			It help to identify the ring that is being looked <legal
			all>

looping_count
			
			Consumer: SW/REO/DEBUG
			
			Producer: SRNG (of RXDMA)
			
			
			
			For debugging. 
			
			This field is filled in by the SRNG module.
			
			
			
			A count value that indicates the number of times the
			producer of entries into this Ring has looped around the
			ring.
			
			At initialization time, this value is set to 0. On the
			first loop, this value is set to 1. After the max value is
			reached allowed by the number of bits for this field, the
			count value continues with 0 again.
			
			
			
			In case SW is the consumer of the ring entries, it can
			use this field to figure out up to where the producer of
			entries has created new entries. This eliminates the need to
			check where the head pointer' of the ring is located once
			the SW starts processing an interrupt indicating that new
			entries have been put into this ring...
			
			
			
			Also note that SW if it wants only needs to look at the
			LSB bit of this count value.
			
			<legal all>
*/


 /* EXTERNAL REFERENCE : struct rx_mpdu_details reo_level_mpdu_frame_info */ 


 /* EXTERNAL REFERENCE : struct buffer_addr_info msdu_link_desc_addr_info */ 


/* Description		REO_ENTRANCE_RING_0_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define REO_ENTRANCE_RING_0_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000000
#define REO_ENTRANCE_RING_0_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define REO_ENTRANCE_RING_0_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		REO_ENTRANCE_RING_1_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define REO_ENTRANCE_RING_1_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000004
#define REO_ENTRANCE_RING_1_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define REO_ENTRANCE_RING_1_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		REO_ENTRANCE_RING_1_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
			Consumer: WBM
			
			Producer: SW/FW
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			Indicates to which buffer manager the buffer OR
			MSDU_EXTENSION descriptor OR link descriptor that is being
			pointed to shall be returned after the frame has been
			processed. It is used by WBM for routing purposes.
			
			
			
			<enum 0 WBM_IDLE_BUF_LIST> This buffer shall be returned
			to the WMB buffer idle list
			
			<enum 1 WBM_IDLE_DESC_LIST> This buffer shall be
			returned to the WMB idle link descriptor idle list
			
			<enum 2 FW_BM> This buffer shall be returned to the FW
			
			<enum 3 SW0_BM> This buffer shall be returned to the SW,
			ring 0
			
			<enum 4 SW1_BM> This buffer shall be returned to the SW,
			ring 1
			
			<enum 5 SW2_BM> This buffer shall be returned to the SW,
			ring 2
			
			<enum 6 SW3_BM> This buffer shall be returned to the SW,
			ring 3
			
			<enum 7 SW4_BM> This buffer shall be returned to the SW,
			ring 4
			
			
			
			<legal all>
*/
#define REO_ENTRANCE_RING_1_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000004
#define REO_ENTRANCE_RING_1_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define REO_ENTRANCE_RING_1_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		REO_ENTRANCE_RING_1_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE1:
			
			The three most significant bits can have a special
			meaning in case this struct is embedded in a TX_MPDU_DETAILS
			STRUCT, and field transmit_bw_restriction is set
			
			
			
			In case of NON punctured transmission:
			
			Sw_buffer_cookie[20:19] = 2'b00: 20 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b01: 40 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b10: 80 MHz TX only
			
			Sw_buffer_cookie[20:19] = 2'b11: 160 MHz TX only
			
			
			
			In case of punctured transmission:
			
			Sw_buffer_cookie[20:18] = 3'b000: pattern 0 only
			
			Sw_buffer_cookie[20:18] = 3'b001: pattern 1 only
			
			Sw_buffer_cookie[20:18] = 3'b010: pattern 2 only
			
			Sw_buffer_cookie[20:18] = 3'b011: pattern 3 only
			
			Sw_buffer_cookie[20:18] = 3'b100: pattern 4 only
			
			Sw_buffer_cookie[20:18] = 3'b101: pattern 5 only
			
			Sw_buffer_cookie[20:18] = 3'b110: pattern 6 only
			
			Sw_buffer_cookie[20:18] = 3'b111: pattern 7 only
			
			
			
			Note: a punctured transmission is indicated by the
			presence of TLV TX_PUNCTURE_SETUP embedded in the scheduler
			TLV
			
			
			
			NOTE 2:The five most significant bits can have a special
			meaning in case this struct is embedded in an
			RX_MSDU_DETAILS STRUCT, and Maple/Spruce Rx DMA is
			configured for passing on the additional info
			from 'RX_MPDU_INFO' structure in 'RX_MPDU_START' TLV
			(FR56821). This is not supported in HastingsPrime, Pine or
			Moselle. 
			
			
			
			Sw_buffer_cookie[20:17]: Tid: The TID field in the QoS
			control field
			
			
			
			Sw_buffer_cookie[16]: Mpdu_qos_control_valid: This field
			indicates MPDUs with a QoS control field.
			
			
			
			
			
			<legal all>
*/
#define REO_ENTRANCE_RING_1_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000004
#define REO_ENTRANCE_RING_1_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define REO_ENTRANCE_RING_1_REO_LEVEL_MPDU_FRAME_INFO_MSDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

 /* EXTERNAL REFERENCE : struct rx_mpdu_desc_info rx_mpdu_desc_info_details */ 


/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MSDU_COUNT
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			The number of MSDUs within the MPDU 
			
			<legal all>
*/
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MSDU_COUNT_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MSDU_COUNT_LSB 0
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MSDU_COUNT_MASK 0x000000ff

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MPDU_SEQUENCE_NUMBER
			
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
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MPDU_SEQUENCE_NUMBER_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MPDU_SEQUENCE_NUMBER_LSB 8
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MPDU_SEQUENCE_NUMBER_MASK 0x000fff00

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_FRAGMENT_FLAG
			
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
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_FRAGMENT_FLAG_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_FRAGMENT_FLAG_LSB 20
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_FRAGMENT_FLAG_MASK 0x00100000

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MPDU_RETRY_BIT
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			The retry bit setting from the MPDU header of the
			received frame
			
			<legal all>
*/
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MPDU_RETRY_BIT_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MPDU_RETRY_BIT_LSB 21
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MPDU_RETRY_BIT_MASK 0x00200000

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_AMPDU_FLAG
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			When set, the MPDU was received as part of an A-MPDU.
			
			<legal all>
*/
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_AMPDU_FLAG_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_AMPDU_FLAG_LSB 22
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_AMPDU_FLAG_MASK 0x00400000

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_BAR_FRAME
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			When set, the received frame is a BAR frame. After
			processing, this frame shall be pushed to SW or deleted.
			
			<legal all>
*/
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_BAR_FRAME_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_BAR_FRAME_LSB 23
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_BAR_FRAME_MASK 0x00800000

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_PN_FIELDS_CONTAIN_VALID_INFO
			
			Consumer: REO/SW/FW
			
			Producer: RXDMA
			
			
			
			Copied here by RXDMA from RX_MPDU_END
			
			When not set, REO will Not perform a PN sequence number
			check
*/
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_PN_FIELDS_CONTAIN_VALID_INFO_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_PN_FIELDS_CONTAIN_VALID_INFO_LSB 24
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_PN_FIELDS_CONTAIN_VALID_INFO_MASK 0x01000000

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_SA_IS_VALID
			
			When set, OLE found a valid SA entry for all MSDUs in
			this MPDU
			
			<legal all>
*/
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_SA_IS_VALID_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_SA_IS_VALID_LSB 25
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_SA_IS_VALID_MASK 0x02000000

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT
			
			When set, at least 1 MSDU within the MPDU has an
			unsuccessful MAC source address search due to the expiration
			of the search timer.
			
			<legal all>
*/
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT_LSB 26
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_SA_IDX_TIMEOUT_MASK 0x04000000

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_DA_IS_VALID
			
			When set, OLE found a valid DA entry for all MSDUs in
			this MPDU
			
			<legal all>
*/
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_DA_IS_VALID_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_DA_IS_VALID_LSB 27
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_DA_IS_VALID_MASK 0x08000000

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_DA_IS_MCBC
			
			Field Only valid if da_is_valid is set
			
			
			
			When set, at least one of the DA addresses is a
			Multicast or Broadcast address.
			
			<legal all>
*/
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_DA_IS_MCBC_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_DA_IS_MCBC_LSB 28
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_DA_IS_MCBC_MASK 0x10000000

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT
			
			When set, at least 1 MSDU within the MPDU has an
			unsuccessful MAC destination address search due to the
			expiration of the search timer.
			
			<legal all>
*/
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT_LSB 29
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_DA_IDX_TIMEOUT_MASK 0x20000000

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_RAW_MPDU
			
			Field only valid when first_msdu_in_mpdu_flag is set.
			
			
			
			When set, the contents in the MSDU buffer contains a
			'RAW' MPDU. This 'RAW' MPDU might be spread out over
			multiple MSDU buffers.
			
			<legal all>
*/
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_RAW_MPDU_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_RAW_MPDU_LSB 30
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_RAW_MPDU_MASK 0x40000000

/* Description		REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MORE_FRAGMENT_FLAG
			
			The More Fragment bit setting from the MPDU header of
			the received frame
			
			
			
			<legal all>
*/
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MORE_FRAGMENT_FLAG_OFFSET 0x00000008
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MORE_FRAGMENT_FLAG_LSB 31
#define REO_ENTRANCE_RING_2_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_MORE_FRAGMENT_FLAG_MASK 0x80000000

/* Description		REO_ENTRANCE_RING_3_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_PEER_META_DATA
			
			Meta data that SW has programmed in the Peer table entry
			of the transmitting STA.
			
			<legal all>
*/
#define REO_ENTRANCE_RING_3_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_PEER_META_DATA_OFFSET 0x0000000c
#define REO_ENTRANCE_RING_3_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_PEER_META_DATA_LSB 0
#define REO_ENTRANCE_RING_3_REO_LEVEL_MPDU_FRAME_INFO_RX_MPDU_DESC_INFO_DETAILS_PEER_META_DATA_MASK 0xffffffff

/* Description		REO_ENTRANCE_RING_4_RX_REO_QUEUE_DESC_ADDR_31_0
			
			Consumer: REO
			
			Producer: RXDMA
			
			
			
			Address (lower 32 bits) of the REO queue descriptor. 
			
			<legal all>
*/
#define REO_ENTRANCE_RING_4_RX_REO_QUEUE_DESC_ADDR_31_0_OFFSET       0x00000010
#define REO_ENTRANCE_RING_4_RX_REO_QUEUE_DESC_ADDR_31_0_LSB          0
#define REO_ENTRANCE_RING_4_RX_REO_QUEUE_DESC_ADDR_31_0_MASK         0xffffffff

/* Description		REO_ENTRANCE_RING_5_RX_REO_QUEUE_DESC_ADDR_39_32
			
			Consumer: REO
			
			Producer: RXDMA
			
			
			
			Address (upper 8 bits) of the REO queue descriptor. 
			
			<legal all>
*/
#define REO_ENTRANCE_RING_5_RX_REO_QUEUE_DESC_ADDR_39_32_OFFSET      0x00000014
#define REO_ENTRANCE_RING_5_RX_REO_QUEUE_DESC_ADDR_39_32_LSB         0
#define REO_ENTRANCE_RING_5_RX_REO_QUEUE_DESC_ADDR_39_32_MASK        0x000000ff

/* Description		REO_ENTRANCE_RING_5_ROUNDED_MPDU_BYTE_COUNT
			
			An approximation of the number of bytes received in this
			MPDU. 
			
			Used to keeps stats on the amount of data flowing
			through a queue.
			
			<legal all>
*/
#define REO_ENTRANCE_RING_5_ROUNDED_MPDU_BYTE_COUNT_OFFSET           0x00000014
#define REO_ENTRANCE_RING_5_ROUNDED_MPDU_BYTE_COUNT_LSB              8
#define REO_ENTRANCE_RING_5_ROUNDED_MPDU_BYTE_COUNT_MASK             0x003fff00

/* Description		REO_ENTRANCE_RING_5_REO_DESTINATION_INDICATION
			
			RXDMA copy the MPDU's first MSDU's destination
			indication field here. This is used for REO to be able to
			re-route the packet to a different SW destination ring if
			the packet is detected as error in REO.
			
			
			
			The ID of the REO exit ring where the MSDU frame shall
			push after (MPDU level) reordering has finished.
			
			
			
			<enum 0 reo_destination_tcl> Reo will push the frame
			into the REO2TCL ring
			
			<enum 1 reo_destination_sw1> Reo will push the frame
			into the REO2SW1 ring
			
			<enum 2 reo_destination_sw2> Reo will push the frame
			into the REO2SW2 ring
			
			<enum 3 reo_destination_sw3> Reo will push the frame
			into the REO2SW3 ring
			
			<enum 4 reo_destination_sw4> Reo will push the frame
			into the REO2SW4 ring
			
			<enum 5 reo_destination_release> Reo will push the frame
			into the REO_release ring
			
			<enum 6 reo_destination_fw> Reo will push the frame into
			the REO2FW ring
			
			<enum 7 reo_destination_sw5> Reo will push the frame
			into the REO2SW5 ring (REO remaps this in chips without
			REO2SW5 ring, e.g. Pine)
			
			<enum 8 reo_destination_sw6> Reo will push the frame
			into the REO2SW6 ring (REO remaps this in chips without
			REO2SW6 ring, e.g. Pine)
			
			 <enum 9 reo_destination_9> REO remaps this <enum 10
			reo_destination_10> REO remaps this 
			
			<enum 11 reo_destination_11> REO remaps this 
			
			<enum 12 reo_destination_12> REO remaps this <enum 13
			reo_destination_13> REO remaps this 
			
			<enum 14 reo_destination_14> REO remaps this 
			
			<enum 15 reo_destination_15> REO remaps this 
			
			<enum 16 reo_destination_16> REO remaps this 
			
			<enum 17 reo_destination_17> REO remaps this 
			
			<enum 18 reo_destination_18> REO remaps this 
			
			<enum 19 reo_destination_19> REO remaps this 
			
			<enum 20 reo_destination_20> REO remaps this 
			
			<enum 21 reo_destination_21> REO remaps this 
			
			<enum 22 reo_destination_22> REO remaps this 
			
			<enum 23 reo_destination_23> REO remaps this 
			
			<enum 24 reo_destination_24> REO remaps this 
			
			<enum 25 reo_destination_25> REO remaps this 
			
			<enum 26 reo_destination_26> REO remaps this 
			
			<enum 27 reo_destination_27> REO remaps this 
			
			<enum 28 reo_destination_28> REO remaps this 
			
			<enum 29 reo_destination_29> REO remaps this 
			
			<enum 30 reo_destination_30> REO remaps this 
			
			<enum 31 reo_destination_31> REO remaps this 
			
			
			
			<legal all>
*/
#define REO_ENTRANCE_RING_5_REO_DESTINATION_INDICATION_OFFSET        0x00000014
#define REO_ENTRANCE_RING_5_REO_DESTINATION_INDICATION_LSB           22
#define REO_ENTRANCE_RING_5_REO_DESTINATION_INDICATION_MASK          0x07c00000

/* Description		REO_ENTRANCE_RING_5_FRAMELESS_BAR
			
			When set, this REO entrance ring struct contains BAR
			info from a multi TID BAR frame. The original multi TID BAR
			frame itself contained all the REO info for the first TID,
			but all the subsequent TID info and their linkage to the REO
			descriptors is passed down as 'frameless' BAR info.
			
			
			
			The only fields valid in this descriptor when this bit
			is set are:
			
			Rx_reo_queue_desc_addr_31_0
			
			RX_reo_queue_desc_addr_39_32
			
			
			
			And within the
			
			Reo_level_mpdu_frame_info:    
			
			   Within Rx_mpdu_desc_info_details:
			
			Mpdu_Sequence_number
			
			BAR_frame
			
			Peer_meta_data
			
			All other fields shall be set to 0
			
			
			
			<legal all>
*/
#define REO_ENTRANCE_RING_5_FRAMELESS_BAR_OFFSET                     0x00000014
#define REO_ENTRANCE_RING_5_FRAMELESS_BAR_LSB                        27
#define REO_ENTRANCE_RING_5_FRAMELESS_BAR_MASK                       0x08000000

/* Description		REO_ENTRANCE_RING_5_RESERVED_5A
			
			<legal 0>
*/
#define REO_ENTRANCE_RING_5_RESERVED_5A_OFFSET                       0x00000014
#define REO_ENTRANCE_RING_5_RESERVED_5A_LSB                          28
#define REO_ENTRANCE_RING_5_RESERVED_5A_MASK                         0xf0000000

/* Description		REO_ENTRANCE_RING_6_RXDMA_PUSH_REASON
			
			Indicates why rxdma pushed the frame to this ring
			
			
			
			This field is ignored by REO. 
			
			
			
			<enum 0 rxdma_error_detected> RXDMA detected an error an
			pushed this frame to this queue
			
			<enum 1 rxdma_routing_instruction> RXDMA pushed the
			frame to this queue per received routing instructions. No
			error within RXDMA was detected
			
			<enum 2 rxdma_rx_flush> RXDMA received an RX_FLUSH. As a
			result the MSDU link descriptor might not have the
			last_msdu_in_mpdu_flag set, but instead WBM might just see a
			NULL pointer in the MSDU link descriptor. This is to be
			considered a normal condition for this scenario.
			
			
			
			<legal 0 - 2>
*/
#define REO_ENTRANCE_RING_6_RXDMA_PUSH_REASON_OFFSET                 0x00000018
#define REO_ENTRANCE_RING_6_RXDMA_PUSH_REASON_LSB                    0
#define REO_ENTRANCE_RING_6_RXDMA_PUSH_REASON_MASK                   0x00000003

/* Description		REO_ENTRANCE_RING_6_RXDMA_ERROR_CODE
			
			Field only valid when 'rxdma_push_reason' set to
			'rxdma_error_detected'.
			
			
			
			This field is ignored by REO.
			
			
			
			<enum 0 rxdma_overflow_err>MPDU frame is not complete
			due to a FIFO overflow error in RXPCU.
			
			<enum 1 rxdma_mpdu_length_err>MPDU frame is not complete
			due to receiving incomplete MPDU from the PHY
			
			
			<enum 3 rxdma_decrypt_err>CRYPTO reported a decryption
			error or CRYPTO received an encrypted frame, but did not get
			a valid corresponding key id in the peer entry.
			
			<enum 4 rxdma_tkip_mic_err>CRYPTO reported a TKIP MIC
			error
			
			<enum 5 rxdma_unecrypted_err>CRYPTO reported an
			unencrypted frame error when encrypted was expected
			
			<enum 6 rxdma_msdu_len_err>RX OLE reported an MSDU
			length error
			
			<enum 7 rxdma_msdu_limit_err>RX OLE reported that max
			number of MSDUs allowed in an MPDU got exceeded
			
			<enum 8 rxdma_wifi_parse_err>RX OLE reported a parsing
			error
			
			<enum 9 rxdma_amsdu_parse_err>RX OLE reported an A-MSDU
			parsing error
			
			<enum 10 rxdma_sa_timeout_err>RX OLE reported a timeout
			during SA search
			
			<enum 11 rxdma_da_timeout_err>RX OLE reported a timeout
			during DA search
			
			<enum 12 rxdma_flow_timeout_err>RX OLE reported a
			timeout during flow search
			
			<enum 13 rxdma_flush_request>RXDMA received a flush
			request
			
			<enum 14 rxdma_amsdu_fragment_err>Rx PCU reported A-MSDU
			present as well as a fragmented MPDU. A-MSDU defragmentation
			is not supported in Lithium SW so this is treated as an
			error.
*/
#define REO_ENTRANCE_RING_6_RXDMA_ERROR_CODE_OFFSET                  0x00000018
#define REO_ENTRANCE_RING_6_RXDMA_ERROR_CODE_LSB                     2
#define REO_ENTRANCE_RING_6_RXDMA_ERROR_CODE_MASK                    0x0000007c

/* Description		REO_ENTRANCE_RING_6_MPDU_FRAGMENT_NUMBER
			
			Field only valid when Reo_level_mpdu_frame_info.
			Rx_mpdu_desc_info_details.Fragment_flag is set.
			
			
			
			The fragment number from the 802.11 header.
			
			
			
			Note that the sequence number is embedded in the field:
			Reo_level_mpdu_frame_info. Rx_mpdu_desc_info_details.
			Mpdu_sequence_number
			
			
			
			<legal all>
*/
#define REO_ENTRANCE_RING_6_MPDU_FRAGMENT_NUMBER_OFFSET              0x00000018
#define REO_ENTRANCE_RING_6_MPDU_FRAGMENT_NUMBER_LSB                 7
#define REO_ENTRANCE_RING_6_MPDU_FRAGMENT_NUMBER_MASK                0x00000780

/* Description		REO_ENTRANCE_RING_6_SW_EXCEPTION
			
			When not set, REO is performing all its default MPDU
			processing operations,
			
			When set, this REO entrance descriptor is generated by
			FW, and should be processed as an exception. This implies: 
			
			NO re-order function is needed.
			
			MPDU delinking is determined by the setting of field
			SW_excection_mpdu_delink
			
			Destination ring selection is based on the setting of
			the field SW_exception_destination_ring_valid
			
			In the destination ring descriptor set bit:
			SW_exception_entry
			
			Feature supported only in HastingsPrime
			
			<legal all>
*/
#define REO_ENTRANCE_RING_6_SW_EXCEPTION_OFFSET                      0x00000018
#define REO_ENTRANCE_RING_6_SW_EXCEPTION_LSB                         11
#define REO_ENTRANCE_RING_6_SW_EXCEPTION_MASK                        0x00000800

/* Description		REO_ENTRANCE_RING_6_SW_EXCEPTION_MPDU_DELINK
			
			Field only valid when SW_exception is set.
			
			1'b0: REO should NOT delink the MPDU, and thus pass this
			MPDU on to the destination ring as is. This implies that in
			the REO_DESTINATION_RING struct field
			Buf_or_link_desc_addr_info should point to an MSDU link
			descriptor
			
			1'b1: REO should perform the normal MPDU delink into
			MSDU operations.
			
			Feature supported only in HastingsPrime
			
			<legal all>
*/
#define REO_ENTRANCE_RING_6_SW_EXCEPTION_MPDU_DELINK_OFFSET          0x00000018
#define REO_ENTRANCE_RING_6_SW_EXCEPTION_MPDU_DELINK_LSB             12
#define REO_ENTRANCE_RING_6_SW_EXCEPTION_MPDU_DELINK_MASK            0x00001000

/* Description		REO_ENTRANCE_RING_6_SW_EXCEPTION_DESTINATION_RING_VALID
			
			Field only valid when SW_exception is set.
			
			1'b0: REO shall push the MPDU (or delinked MPDU based on
			the setting of SW_exception_mpdu_delink) to the destination
			ring according to field reo_destination_indication.
			
			1'b1: REO shall push the MPDU (or delinked MPDU based on
			the setting of SW_exception_mpdu_delink) to the destination
			ring according to field SW_exception_destination_ring.
			
			Feature supported only in HastingsPrime
			
			<legal all>
*/
#define REO_ENTRANCE_RING_6_SW_EXCEPTION_DESTINATION_RING_VALID_OFFSET 0x00000018
#define REO_ENTRANCE_RING_6_SW_EXCEPTION_DESTINATION_RING_VALID_LSB  13
#define REO_ENTRANCE_RING_6_SW_EXCEPTION_DESTINATION_RING_VALID_MASK 0x00002000

/* Description		REO_ENTRANCE_RING_6_SW_EXCEPTION_DESTINATION_RING
			
			Field only valid when fields SW_exception and
			SW_exception_destination_ring_valid are set.
			
			The ID of the ring where REO shall push this frame.
			
			<enum 0 reo_destination_tcl> Reo will push the frame
			into the REO2TCL ring
			
			<enum 1 reo_destination_sw1> Reo will push the frame
			into the REO2SW1 ring
			
			<enum 2 reo_destination_sw2> Reo will push the frame
			into the REO2SW1 ring
			
			<enum 3 reo_destination_sw3> Reo will push the frame
			into the REO2SW1 ring
			
			<enum 4 reo_destination_sw4> Reo will push the frame
			into the REO2SW1 ring
			
			<enum 5 reo_destination_release> Reo will push the frame
			into the REO_release ring
			
			<enum 6 reo_destination_fw> Reo will push the frame into
			the REO2FW ring
			
			<enum 7 reo_destination_sw5> REO remaps this
			
			<enum 8 reo_destination_sw6> REO remaps this 
			
			<enum 9 reo_destination_9> REO remaps this
			
			<enum 10 reo_destination_10> REO remaps this 
			
			<enum 11 reo_destination_11> REO remaps this 
			
			<enum 12 reo_destination_12> REO remaps this <enum 13
			reo_destination_13> REO remaps this 
			
			<enum 14 reo_destination_14> REO remaps this 
			
			<enum 15 reo_destination_15> REO remaps this 
			
			<enum 16 reo_destination_16> REO remaps this 
			
			<enum 17 reo_destination_17> REO remaps this 
			
			<enum 18 reo_destination_18> REO remaps this 
			
			<enum 19 reo_destination_19> REO remaps this 
			
			<enum 20 reo_destination_20> REO remaps this 
			
			<enum 21 reo_destination_21> REO remaps this 
			
			<enum 22 reo_destination_22> REO remaps this 
			
			<enum 23 reo_destination_23> REO remaps this 
			
			<enum 24 reo_destination_24> REO remaps this 
			
			<enum 25 reo_destination_25> REO remaps this 
			
			<enum 26 reo_destination_26> REO remaps this 
			
			<enum 27 reo_destination_27> REO remaps this 
			
			<enum 28 reo_destination_28> REO remaps this 
			
			<enum 29 reo_destination_29> REO remaps this 
			
			<enum 30 reo_destination_30> REO remaps this 
			
			<enum 31 reo_destination_31> REO remaps this 
			
			
			
			Feature supported only in HastingsPrime
			
			<legal all>
*/
#define REO_ENTRANCE_RING_6_SW_EXCEPTION_DESTINATION_RING_OFFSET     0x00000018
#define REO_ENTRANCE_RING_6_SW_EXCEPTION_DESTINATION_RING_LSB        14
#define REO_ENTRANCE_RING_6_SW_EXCEPTION_DESTINATION_RING_MASK       0x0007c000

/* Description		REO_ENTRANCE_RING_6_RESERVED_6A
			
			<legal 0>
*/
#define REO_ENTRANCE_RING_6_RESERVED_6A_OFFSET                       0x00000018
#define REO_ENTRANCE_RING_6_RESERVED_6A_LSB                          19
#define REO_ENTRANCE_RING_6_RESERVED_6A_MASK                         0xfff80000

/* Description		REO_ENTRANCE_RING_7_PHY_PPDU_ID
			
			A PPDU counter value that PHY increments for every PPDU
			received
			
			The counter value wraps around. Pine RXDMA can be
			configured to copy this from the RX_PPDU_START TLV for every
			output descriptor.
			
			
			
			This field is ignored by REO.
			
			
			
			Feature supported only in Pine
			
			<legal all>
*/
#define REO_ENTRANCE_RING_7_PHY_PPDU_ID_OFFSET                       0x0000001c
#define REO_ENTRANCE_RING_7_PHY_PPDU_ID_LSB                          0
#define REO_ENTRANCE_RING_7_PHY_PPDU_ID_MASK                         0x0000ffff

/* Description		REO_ENTRANCE_RING_7_RESERVED_7A
			
			<legal 0>
*/
#define REO_ENTRANCE_RING_7_RESERVED_7A_OFFSET                       0x0000001c
#define REO_ENTRANCE_RING_7_RESERVED_7A_LSB                          16
#define REO_ENTRANCE_RING_7_RESERVED_7A_MASK                         0x000f0000

/* Description		REO_ENTRANCE_RING_7_RING_ID
			
			Consumer: SW/REO/DEBUG
			
			Producer: SRNG (of RXDMA)
			
			
			
			For debugging. 
			
			This field is filled in by the SRNG module.
			
			It help to identify the ring that is being looked <legal
			all>
*/
#define REO_ENTRANCE_RING_7_RING_ID_OFFSET                           0x0000001c
#define REO_ENTRANCE_RING_7_RING_ID_LSB                              20
#define REO_ENTRANCE_RING_7_RING_ID_MASK                             0x0ff00000

/* Description		REO_ENTRANCE_RING_7_LOOPING_COUNT
			
			Consumer: SW/REO/DEBUG
			
			Producer: SRNG (of RXDMA)
			
			
			
			For debugging. 
			
			This field is filled in by the SRNG module.
			
			
			
			A count value that indicates the number of times the
			producer of entries into this Ring has looped around the
			ring.
			
			At initialization time, this value is set to 0. On the
			first loop, this value is set to 1. After the max value is
			reached allowed by the number of bits for this field, the
			count value continues with 0 again.
			
			
			
			In case SW is the consumer of the ring entries, it can
			use this field to figure out up to where the producer of
			entries has created new entries. This eliminates the need to
			check where the head pointer' of the ring is located once
			the SW starts processing an interrupt indicating that new
			entries have been put into this ring...
			
			
			
			Also note that SW if it wants only needs to look at the
			LSB bit of this count value.
			
			<legal all>
*/
#define REO_ENTRANCE_RING_7_LOOPING_COUNT_OFFSET                     0x0000001c
#define REO_ENTRANCE_RING_7_LOOPING_COUNT_LSB                        28
#define REO_ENTRANCE_RING_7_LOOPING_COUNT_MASK                       0xf0000000


#endif // _REO_ENTRANCE_RING_H_

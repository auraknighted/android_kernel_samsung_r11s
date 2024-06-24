/*
 * Copyright (c) 2019, The Linux Foundation. All rights reserved.
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

#ifndef _WBM_RELEASE_RING_H_
#define _WBM_RELEASE_RING_H_
#if !defined(__ASSEMBLER__)
#endif

#include "buffer_addr_info.h"
#include "tx_rate_stats_info.h"

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0-1	struct buffer_addr_info released_buff_or_desc_addr_info;
//	2	release_source_module[2:0], bm_action[5:3], buffer_or_desc_type[8:6], first_msdu_index[12:9], tqm_release_reason[16:13], rxdma_push_reason[18:17], rxdma_error_code[23:19], reo_push_reason[25:24], reo_error_code[30:26], wbm_internal_error[31]
//	3	tqm_status_number[23:0], transmit_count[30:24], msdu_continuation[31]
//	4	ack_frame_rssi[7:0], sw_release_details_valid[8], first_msdu[9], last_msdu[10], msdu_part_of_amsdu[11], fw_tx_notify_frame[12], buffer_timestamp[31:13]
//	5-6	struct tx_rate_stats_info tx_rate_stats;
//	7	sw_peer_id[15:0], tid[19:16], ring_id[27:20], looping_count[31:28]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_WBM_RELEASE_RING 8

struct wbm_release_ring {
    struct            buffer_addr_info                       released_buff_or_desc_addr_info;
             uint32_t release_source_module           :  3, //[2:0]
                      bm_action                       :  3, //[5:3]
                      buffer_or_desc_type             :  3, //[8:6]
                      first_msdu_index                :  4, //[12:9]
                      tqm_release_reason              :  4, //[16:13]
                      rxdma_push_reason               :  2, //[18:17]
                      rxdma_error_code                :  5, //[23:19]
                      reo_push_reason                 :  2, //[25:24]
                      reo_error_code                  :  5, //[30:26]
                      wbm_internal_error              :  1; //[31]
             uint32_t tqm_status_number               : 24, //[23:0]
                      transmit_count                  :  7, //[30:24]
                      msdu_continuation               :  1; //[31]
             uint32_t ack_frame_rssi                  :  8, //[7:0]
                      sw_release_details_valid        :  1, //[8]
                      first_msdu                      :  1, //[9]
                      last_msdu                       :  1, //[10]
                      msdu_part_of_amsdu              :  1, //[11]
                      fw_tx_notify_frame              :  1, //[12]
                      buffer_timestamp                : 19; //[31:13]
    struct            tx_rate_stats_info                       tx_rate_stats;
             uint32_t sw_peer_id                      : 16, //[15:0]
                      tid                             :  4, //[19:16]
                      ring_id                         :  8, //[27:20]
                      looping_count                   :  4; //[31:28]
};

/*

struct buffer_addr_info released_buff_or_desc_addr_info
			
			Consumer: WBM/SW/FW
			
			Producer: SW/TQM/RXDMA/REO/SWITCH
			
			
			
			Details of the physical address of the buffer or link
			descriptor that is being released. Note that within this
			descriptor, WBM will look at the 'owner' of the released
			buffer/descriptor and forward it to SW/FW is WBM is not the
			owner.
			
			
			
			In case of TQM releasing Tx MSDU link descriptors with
			Tqm_release_reason set to 'tqm_fw_reason3,' HastingsPrime
			WBM can optionally release the MSDU buffers pointed to by
			the MSDU link descriptors to FW and override the
			tx_rate_stats field, for FW reinjection of these MSDUs.
			This is not supported in Pine.

release_source_module
			
			Indicates which module initiated the release of this
			buffer or descriptor
			
			
			
			<enum 0 release_source_TQM> TQM released this buffer or
			descriptor
			
			<enum 1 release_source_RXDMA> RXDMA released this buffer
			or descriptor
			
			<enum 2 release_source_REO> REO released this buffer or
			descriptor
			
			<enum 3 release_source_FW> FW released this buffer or
			descriptor
			
			<enum 4 release_source_SW> SW released this buffer or
			descriptor
			
			<legal 0-4>

bm_action
			
			Consumer: WBM/SW/FW
			
			Producer: SW/TQM/RXDMA/REO/SWITCH
			
			
			
			Field only valid when the field return_buffer_manager in
			the Released_buff_or_desc_addr_info indicates:
			
			WBM_IDLE_BUF_LIST or
			
			WBM_IDLE_DESC_LIST
			
			
			
			An MSDU extension descriptor shall never be marked as
			
			
			
			<enum 0 Put_in_idle_list> Put the buffer or descriptor
			back in the idle list. In case of MSDU or MDPU link
			descriptor, BM does not need to check to release any
			individual MSDU buffers
			
			
			
			<enum 1 release_msdu_list > This BM action can only be
			used in combination with buffer_or_desc_type being
			msdu_link_descriptor. Field first_msdu_index points out
			which MSDU pointer in the MSDU link descriptor is the first
			of an MPDU that is released.
			
			BM shall release all the MSDU buffers linked to this
			first MSDU buffer pointer. All related MSDU buffer pointer
			entries shall be set to value 0, which represents the 'NULL
			pointer. When all MSDU buffer pointers in the MSDU link
			descriptor are 'NULL', the MSDU link descriptor itself shall
			also be released.
			
			
			
			<enum 2 Put_in_idle_list_expanded> CURRENTLY NOT
			IMPLEMENTED....
			
			Put the buffer or descriptor back in the idle list. Only
			valid in combination with buffer_or_desc_type indicating
			MDPU_link_descriptor.
			
			BM shall release the MPDU link descriptor as well as all
			MSDUs that are linked to the MPDUs in this descriptor. 
			
			
			
			<legal 0-2>

buffer_or_desc_type
			
			Consumer: WBM/SW/FW
			
			Producer: SW/TQM/RXDMA/REO/SWITCH
			
			
			
			Field only valid when WBM is marked as the
			return_buffer_manager in the Released_Buffer_address_info
			
			
			
			Indicates that type of buffer or descriptor is being
			released
			
			
			
			<enum 0 MSDU_rel_buffer> The address points to an MSDU
			buffer 
			
			<enum 1 msdu_link_descriptor> The address points to an
			TX MSDU link descriptor
			
			<enum 2 mpdu_link_descriptor> The address points to an
			MPDU link descriptor
			
			<enum 3 msdu_ext_descriptor > The address points to an
			MSDU extension descriptor.
			
			In case BM finds this one in a release ring, it passes
			it on to FW...
			
			<enum 4 queue_ext_descriptor> The address points to an
			TQM queue extension descriptor. WBM should treat this is the
			same way as a link descriptor. That is, put the 128 byte
			buffer back in the link buffer idle list.
			
			
			
			<legal 0-4>

first_msdu_index
			
			Consumer: WBM/SW/FW
			
			Producer: SW/TQM/RXDMA/REO/SWITCH
			
			
			
			Field only valid for the bm_action release_msdu_list.
			
			
			
			The index of the first MSDU in an MSDU link descriptor
			all belonging to the same MPDU.
			
			
			
			<legal 0-6>

tqm_release_reason
			
			Consumer: WBM/SW/FW
			
			Producer: TQM
			
			
			
			Field only valid when Release_source_module is set to
			release_source_TQM
			
			
			
			(rr = Release Reason)
			
			<enum 0 tqm_rr_frame_acked> frame is removed because an
			ACK of BA for it was received 
			
			<enum 1 tqm_rr_rem_cmd_rem> frame is removed because a
			remove command of type Remove_mpdus initiated by SW
			
			<enum 2 tqm_rr_rem_cmd_tx> frame is removed because a
			remove command of type Remove_transmitted_mpdus initiated by
			SW
			
			<enum 3 tqm_rr_rem_cmd_notx> frame is removed because a
			remove command of type Remove_untransmitted_mpdus initiated
			by SW
			
			<enum 4 tqm_rr_rem_cmd_aged> frame is removed because a
			remove command of type Remove_aged_mpdus or
			Remove_aged_msdus initiated by SW
			
			<enum 5 tqm_fw_reason1> frame is removed because a
			remove command where fw indicated that remove reason is
			fw_reason1
			
			<enum 6 tqm_fw_reason2> frame is removed because a
			remove command where fw indicated that remove reason is
			fw_reason1
			
			<enum 7 tqm_fw_reason3> frame is removed because a
			remove command where fw indicated that remove reason is
			fw_reason1
			
			<enum 8 tqm_rr_rem_cmd_disable_queue> frame is removed
			because a remove command of type
			remove_mpdus_and_disable_queue or
			remove_msdus_and_disable_flow initiated by SW
			
			
			
			<legal 0-8>
			
			
			
			In case of TQM releasing Tx MSDU link descriptors with
			Tqm_release_reason set to 'tqm_fw_reason3,' HastingsPrime
			WBM can optionally release the MSDU buffers pointed to by
			the MSDU link descriptors to FW and override the
			tx_rate_stats field, for FW reinjection of these MSDUs.
			This is not supported in Pine.

rxdma_push_reason
			
			Field only valid when Release_source_module is set to
			release_source_RXDMA
			
			
			
			Indicates why rxdma pushed the frame to this ring
			
			
			
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

reo_push_reason
			
			Field only valid when Release_source_module is set to
			release_source_REO
			
			
			
			Indicates why REO pushed the frame to this release ring
			
			
			
			<enum 0 reo_error_detected> Reo detected an error an
			pushed this frame to this queue
			
			<enum 1 reo_routing_instruction> Reo pushed the frame to
			this queue per received routing instructions. No error
			within REO was detected
			
			
			
			<legal 0 - 1>

reo_error_code
			
			Field only valid when 'Reo_push_reason' set to
			'reo_error_detected'.
			
			
			
			<enum 0 reo_queue_desc_addr_zero> Reo queue descriptor
			provided in the REO_ENTRANCE ring is set to 0
			
			<enum 1 reo_queue_desc_not_valid> Reo queue descriptor
			valid bit is NOT set
			
			<enum 2 ampdu_in_non_ba> AMPDU frame received without BA
			session having been setup.
			
			<enum 3 non_ba_duplicate> Non-BA session, SN equal to
			SSN, Retry bit set: duplicate frame
			
			<enum 4 ba_duplicate> BA session, duplicate frame
			
			<enum 5 regular_frame_2k_jump> A normal (management/data
			frame) received with 2K jump in SN
			
			<enum 6 bar_frame_2k_jump> A bar received with 2K jump
			in SSN
			
			<enum 7 regular_frame_OOR> A normal (management/data
			frame) received with SN falling within the OOR window
			
			<enum 8 bar_frame_OOR> A bar received with SSN falling
			within the OOR window
			
			<enum 9 bar_frame_no_ba_session> A bar received without
			a BA session
			
			<enum 10 bar_frame_sn_equals_ssn> A bar received with
			SSN equal to SN
			
			<enum 11 pn_check_failed> PN Check Failed packet.
			
			<enum 12 2k_error_handling_flag_set> Frame is forwarded
			as a result of the 'Seq_2k_error_detected_flag' been set in
			the REO Queue descriptor
			
			<enum 13 pn_error_handling_flag_set> Frame is forwarded
			as a result of the 'pn_error_detected_flag' been set in the
			REO Queue descriptor
			
			<enum 14 queue_descriptor_blocked_set> Frame is
			forwarded as a result of the queue descriptor(address) being
			blocked as SW/FW seems to be currently in the process of
			making updates to this descriptor...
			
			
			
			<legal 0-14>

wbm_internal_error
			
			Can only be set by WBM.
			
			
			
			Is set when WBM got a buffer pointer but the action was
			to push it to the idle link descriptor ring or do link
			related activity
			
			OR
			
			Is set when WBM got a link buffer pointer but the action
			was to push it to the buffer  descriptor ring 
			
			
			
			<legal all>

tqm_status_number
			
			Field only valid when Release_source_module is set to
			release_source_TQM
			
			
			
			The value in this field is equal to value of the
			'TQM_CMD_Number' field the TQM command or the
			'TQM_add_cmd_Number' field from the TQM entrance ring
			descriptor
			
			
			
			This field helps to correlate the statuses with the TQM
			commands.
			
			
			
			NOTE that SW could program this number to be equal to
			the PPDU_ID number in case direct correlation with the PPDU
			ID is desired
			
			
			
			<legal all> 

transmit_count
			
			Field only valid when Release_source_module is set to
			release_source_TQM
			
			
			
			The number of times this frame has been transmitted

msdu_continuation
			
			requests MSDU_continuation reporting for Rx
			MSDUs in Pine and HastingsPrime for which
			SW_release_details_valid may not be set.
			
			<legal all>

ack_frame_rssi
			
			This field is only valid when the source is TQM.
			
			
			
			If this frame is removed as the result of the reception
			of an ACK or BA, this field indicates the RSSI of the
			received ACK or BA frame. 
			
			
			
			When the frame is removed as result of a direct remove
			command from the SW,  this field is set to 0x0 (which is
			never a valid value when real RSSI is available)
			
			
			
			<legal all>

sw_release_details_valid
			
			Consumer: SW
			
			Producer: WBM
			
			
			
			When set, some WBM specific release info for SW is
			valid.
			
			This is set when WMB got a 'release_msdu_list' command
			from TQM and the return buffer manager is not WMB. WBM will
			then de-aggregate all the MSDUs and pass them one at a time
			on to the 'buffer owner'
			
			
			
			<legal all>

first_msdu
			
			Field only valid when SW_release_details_valid is set.
			
			
			
			Consumer: SW
			
			Producer: WBM
			
			
			
			When set, this MSDU is the first MSDU pointed to in the
			'release_msdu_list' command.
			
			
			
			extends this to Rx MSDUs in Pine and
			HastingsPrime for which SW_release_details_valid may not be
			set.
			
			<legal all>

last_msdu
			
			Field only valid when SW_release_details_valid is set.
			
			
			
			Consumer: SW
			
			Producer: WBM
			
			
			
			When set, this MSDU is the last MSDU pointed to in the
			'release_msdu_list' command.
			
			
			
			extends this to Rx MSDUs in Pine and
			HastingsPrime for which SW_release_details_valid may not be
			set.
			
			<legal all>

msdu_part_of_amsdu
			
			Field only valid when SW_release_details_valid is set.
			
			
			
			Consumer: SW
			
			Producer: WBM
			
			
			
			When set, this MSDU was part of an A-MSDU in MPDU
			
			<legal all>

fw_tx_notify_frame
			
			Field only valid when SW_release_details_valid is set.
			
			
			
			Consumer: SW
			
			Producer: WBM
			
			
			
			This is the FW_tx_notify_frame field from the
			
			<legal all>

buffer_timestamp
			
			Field only valid when SW_release_details_valid is set.
			
			
			
			Consumer: SW
			
			Producer: WBM
			
			
			
			This is the Buffer_timestamp field from the
			TX_MSDU_DETAILS for this frame from the MSDU link
			descriptor.
			
			
			
			Timestamp in units of 1024 µs
			
			<legal all>

struct tx_rate_stats_info tx_rate_stats
			
			Consumer: TQM
			
			Producer: SW/SCH(from TXPCU, PDG)
			
			
			
			Details for command execution tracking purposes. 
			
			
			
			In case of TQM releasing Tx MSDU link descriptors with
			Tqm_release_reason set to 'tqm_fw_reason3,' HastingsPrime
			WBM can optionally release the MSDU buffers pointed to by
			the MSDU link descriptors to FW and override the
			tx_rate_stats field with words 2 and 3 of the
			'TX_MSDU_DETAILS' structure, for FW reinjection of these
			MSDUs. This is not supported in Pine.

sw_peer_id
			
			Field only valid when Release_source_module is set to
			release_source_TQM
			
			
			
			1) Release of msdu buffer due to drop_frame = 1. Flow is
			not fetched and hence sw_peer_id and tid = 0
			
			buffer_or_desc_type = e_num 0
			MSDU_rel_buffertqm_release_reason = e_num 1
			tqm_rr_rem_cmd_rem
			
			
			
			
			
			2) Release of msdu buffer due to Flow is not fetched and
			hence sw_peer_id and tid = 0
			
			buffer_or_desc_type = e_num 0
			MSDU_rel_buffertqm_release_reason = e_num 1
			tqm_rr_rem_cmd_rem
			
			
			
			
			
			3) Release of msdu link due to remove_mpdu or acked_mpdu
			command.
			
			buffer_or_desc_type = e_num1
			msdu_link_descriptortqm_release_reason can be:e_num 1
			tqm_rr_rem_cmd_reme_num 2 tqm_rr_rem_cmd_tx
			
			e_num 3 tqm_rr_rem_cmd_notxe_num 4 tqm_rr_rem_cmd_aged
			
			
			
			Sw_peer_id from the TX_MSDU_FLOW descriptor or
			TX_MPDU_QUEUE descriptor
			
			<legal all>

tid
			
			Field only valid when Release_source_module is set to
			release_source_TQM
			
			
			
			1) Release of msdu buffer due to drop_frame = 1. Flow is
			not fetched and hence sw_peer_id and tid = 0
			
			buffer_or_desc_type = e_num 0
			MSDU_rel_buffertqm_release_reason = e_num 1
			tqm_rr_rem_cmd_rem
			
			
			
			
			
			2) Release of msdu buffer due to Flow is not fetched and
			hence sw_peer_id and tid = 0
			
			buffer_or_desc_type = e_num 0
			MSDU_rel_buffertqm_release_reason = e_num 1
			tqm_rr_rem_cmd_rem
			
			
			
			
			
			3) Release of msdu link due to remove_mpdu or acked_mpdu
			command.
			
			buffer_or_desc_type = e_num1
			msdu_link_descriptortqm_release_reason can be:e_num 1
			tqm_rr_rem_cmd_reme_num 2 tqm_rr_rem_cmd_tx
			
			e_num 3 tqm_rr_rem_cmd_notxe_num 4 tqm_rr_rem_cmd_aged
			
			
			
			
			
			This field represents the TID from the TX_MSDU_FLOW
			descriptor or TX_MPDU_QUEUE descriptor
			
			
			
			 <legal all>

ring_id
			
			Consumer: TQM/REO/RXDMA/SW
			
			Producer: SRNG (of RXDMA)
			
			
			
			For debugging. 
			
			This field is filled in by the SRNG module.
			
			It help to identify the ring that is being looked <legal
			all>

looping_count
			
			Consumer: WBM/SW/FW
			
			Producer: SW/TQM/RXDMA/REO/SWITCH
			
			
			
			A count value that indicates the number of times the
			producer of entries into the Buffer Manager Ring has looped
			around the ring.
			
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


 /* EXTERNAL REFERENCE : struct buffer_addr_info released_buff_or_desc_addr_info */ 


/* Description		WBM_RELEASE_RING_0_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define WBM_RELEASE_RING_0_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000000
#define WBM_RELEASE_RING_0_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define WBM_RELEASE_RING_0_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		WBM_RELEASE_RING_1_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define WBM_RELEASE_RING_1_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000004
#define WBM_RELEASE_RING_1_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define WBM_RELEASE_RING_1_RELEASED_BUFF_OR_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		WBM_RELEASE_RING_1_RELEASED_BUFF_OR_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
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
#define WBM_RELEASE_RING_1_RELEASED_BUFF_OR_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000004
#define WBM_RELEASE_RING_1_RELEASED_BUFF_OR_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define WBM_RELEASE_RING_1_RELEASED_BUFF_OR_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		WBM_RELEASE_RING_1_RELEASED_BUFF_OR_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
			Cookie field exclusively used by SW. 
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			
			
			HW ignores the contents, accept that it passes the
			programmed value on to other descriptors together with the
			physical address 
			
			
			
			Field can be used by SW to for example associate the
			buffers physical address with the virtual address
			
			The bit definitions as used by SW are within SW HLD
			specification
			
			
			
			NOTE:
			
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
			
			
			
			<legal all>
*/
#define WBM_RELEASE_RING_1_RELEASED_BUFF_OR_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000004
#define WBM_RELEASE_RING_1_RELEASED_BUFF_OR_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define WBM_RELEASE_RING_1_RELEASED_BUFF_OR_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800

/* Description		WBM_RELEASE_RING_2_RELEASE_SOURCE_MODULE
			
			Indicates which module initiated the release of this
			buffer or descriptor
			
			
			
			<enum 0 release_source_TQM> TQM released this buffer or
			descriptor
			
			<enum 1 release_source_RXDMA> RXDMA released this buffer
			or descriptor
			
			<enum 2 release_source_REO> REO released this buffer or
			descriptor
			
			<enum 3 release_source_FW> FW released this buffer or
			descriptor
			
			<enum 4 release_source_SW> SW released this buffer or
			descriptor
			
			<legal 0-4>
*/
#define WBM_RELEASE_RING_2_RELEASE_SOURCE_MODULE_OFFSET              0x00000008
#define WBM_RELEASE_RING_2_RELEASE_SOURCE_MODULE_LSB                 0
#define WBM_RELEASE_RING_2_RELEASE_SOURCE_MODULE_MASK                0x00000007

/* Description		WBM_RELEASE_RING_2_BM_ACTION
			
			Consumer: WBM/SW/FW
			
			Producer: SW/TQM/RXDMA/REO/SWITCH
			
			
			
			Field only valid when the field return_buffer_manager in
			the Released_buff_or_desc_addr_info indicates:
			
			WBM_IDLE_BUF_LIST or
			
			WBM_IDLE_DESC_LIST
			
			
			
			An MSDU extension descriptor shall never be marked as
			
			
			
			<enum 0 Put_in_idle_list> Put the buffer or descriptor
			back in the idle list. In case of MSDU or MDPU link
			descriptor, BM does not need to check to release any
			individual MSDU buffers
			
			
			
			<enum 1 release_msdu_list > This BM action can only be
			used in combination with buffer_or_desc_type being
			msdu_link_descriptor. Field first_msdu_index points out
			which MSDU pointer in the MSDU link descriptor is the first
			of an MPDU that is released.
			
			BM shall release all the MSDU buffers linked to this
			first MSDU buffer pointer. All related MSDU buffer pointer
			entries shall be set to value 0, which represents the 'NULL
			pointer. When all MSDU buffer pointers in the MSDU link
			descriptor are 'NULL', the MSDU link descriptor itself shall
			also be released.
			
			
			
			<enum 2 Put_in_idle_list_expanded> CURRENTLY NOT
			IMPLEMENTED....
			
			Put the buffer or descriptor back in the idle list. Only
			valid in combination with buffer_or_desc_type indicating
			MDPU_link_descriptor.
			
			BM shall release the MPDU link descriptor as well as all
			MSDUs that are linked to the MPDUs in this descriptor. 
			
			
			
			<legal 0-2>
*/
#define WBM_RELEASE_RING_2_BM_ACTION_OFFSET                          0x00000008
#define WBM_RELEASE_RING_2_BM_ACTION_LSB                             3
#define WBM_RELEASE_RING_2_BM_ACTION_MASK                            0x00000038

/* Description		WBM_RELEASE_RING_2_BUFFER_OR_DESC_TYPE
			
			Consumer: WBM/SW/FW
			
			Producer: SW/TQM/RXDMA/REO/SWITCH
			
			
			
			Field only valid when WBM is marked as the
			return_buffer_manager in the Released_Buffer_address_info
			
			
			
			Indicates that type of buffer or descriptor is being
			released
			
			
			
			<enum 0 MSDU_rel_buffer> The address points to an MSDU
			buffer 
			
			<enum 1 msdu_link_descriptor> The address points to an
			TX MSDU link descriptor
			
			<enum 2 mpdu_link_descriptor> The address points to an
			MPDU link descriptor
			
			<enum 3 msdu_ext_descriptor > The address points to an
			MSDU extension descriptor.
			
			In case BM finds this one in a release ring, it passes
			it on to FW...
			
			<enum 4 queue_ext_descriptor> The address points to an
			TQM queue extension descriptor. WBM should treat this is the
			same way as a link descriptor. That is, put the 128 byte
			buffer back in the link buffer idle list.
			
			
			
			<legal 0-4>
*/
#define WBM_RELEASE_RING_2_BUFFER_OR_DESC_TYPE_OFFSET                0x00000008
#define WBM_RELEASE_RING_2_BUFFER_OR_DESC_TYPE_LSB                   6
#define WBM_RELEASE_RING_2_BUFFER_OR_DESC_TYPE_MASK                  0x000001c0

/* Description		WBM_RELEASE_RING_2_FIRST_MSDU_INDEX
			
			Consumer: WBM/SW/FW
			
			Producer: SW/TQM/RXDMA/REO/SWITCH
			
			
			
			Field only valid for the bm_action release_msdu_list.
			
			
			
			The index of the first MSDU in an MSDU link descriptor
			all belonging to the same MPDU.
			
			
			
			<legal 0-6>
*/
#define WBM_RELEASE_RING_2_FIRST_MSDU_INDEX_OFFSET                   0x00000008
#define WBM_RELEASE_RING_2_FIRST_MSDU_INDEX_LSB                      9
#define WBM_RELEASE_RING_2_FIRST_MSDU_INDEX_MASK                     0x00001e00

/* Description		WBM_RELEASE_RING_2_TQM_RELEASE_REASON
			
			Consumer: WBM/SW/FW
			
			Producer: TQM
			
			
			
			Field only valid when Release_source_module is set to
			release_source_TQM
			
			
			
			(rr = Release Reason)
			
			<enum 0 tqm_rr_frame_acked> frame is removed because an
			ACK of BA for it was received 
			
			<enum 1 tqm_rr_rem_cmd_rem> frame is removed because a
			remove command of type Remove_mpdus initiated by SW
			
			<enum 2 tqm_rr_rem_cmd_tx> frame is removed because a
			remove command of type Remove_transmitted_mpdus initiated by
			SW
			
			<enum 3 tqm_rr_rem_cmd_notx> frame is removed because a
			remove command of type Remove_untransmitted_mpdus initiated
			by SW
			
			<enum 4 tqm_rr_rem_cmd_aged> frame is removed because a
			remove command of type Remove_aged_mpdus or
			Remove_aged_msdus initiated by SW
			
			<enum 5 tqm_fw_reason1> frame is removed because a
			remove command where fw indicated that remove reason is
			fw_reason1
			
			<enum 6 tqm_fw_reason2> frame is removed because a
			remove command where fw indicated that remove reason is
			fw_reason1
			
			<enum 7 tqm_fw_reason3> frame is removed because a
			remove command where fw indicated that remove reason is
			fw_reason1
			
			<enum 8 tqm_rr_rem_cmd_disable_queue> frame is removed
			because a remove command of type
			remove_mpdus_and_disable_queue or
			remove_msdus_and_disable_flow initiated by SW
			
			
			
			<legal 0-8>
			
			
			
			In case of TQM releasing Tx MSDU link descriptors with
			Tqm_release_reason set to 'tqm_fw_reason3,' HastingsPrime
			WBM can optionally release the MSDU buffers pointed to by
			the MSDU link descriptors to FW and override the
			tx_rate_stats field, for FW reinjection of these MSDUs.
			This is not supported in Pine.
*/
#define WBM_RELEASE_RING_2_TQM_RELEASE_REASON_OFFSET                 0x00000008
#define WBM_RELEASE_RING_2_TQM_RELEASE_REASON_LSB                    13
#define WBM_RELEASE_RING_2_TQM_RELEASE_REASON_MASK                   0x0001e000

/* Description		WBM_RELEASE_RING_2_RXDMA_PUSH_REASON
			
			Field only valid when Release_source_module is set to
			release_source_RXDMA
			
			
			
			Indicates why rxdma pushed the frame to this ring
			
			
			
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
#define WBM_RELEASE_RING_2_RXDMA_PUSH_REASON_OFFSET                  0x00000008
#define WBM_RELEASE_RING_2_RXDMA_PUSH_REASON_LSB                     17
#define WBM_RELEASE_RING_2_RXDMA_PUSH_REASON_MASK                    0x00060000

/* Description		WBM_RELEASE_RING_2_RXDMA_ERROR_CODE
			
			Field only valid when 'rxdma_push_reason' set to
			'rxdma_error_detected'.
			
			
			
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
#define WBM_RELEASE_RING_2_RXDMA_ERROR_CODE_OFFSET                   0x00000008
#define WBM_RELEASE_RING_2_RXDMA_ERROR_CODE_LSB                      19
#define WBM_RELEASE_RING_2_RXDMA_ERROR_CODE_MASK                     0x00f80000

/* Description		WBM_RELEASE_RING_2_REO_PUSH_REASON
			
			Field only valid when Release_source_module is set to
			release_source_REO
			
			
			
			Indicates why REO pushed the frame to this release ring
			
			
			
			<enum 0 reo_error_detected> Reo detected an error an
			pushed this frame to this queue
			
			<enum 1 reo_routing_instruction> Reo pushed the frame to
			this queue per received routing instructions. No error
			within REO was detected
			
			
			
			<legal 0 - 1>
*/
#define WBM_RELEASE_RING_2_REO_PUSH_REASON_OFFSET                    0x00000008
#define WBM_RELEASE_RING_2_REO_PUSH_REASON_LSB                       24
#define WBM_RELEASE_RING_2_REO_PUSH_REASON_MASK                      0x03000000

/* Description		WBM_RELEASE_RING_2_REO_ERROR_CODE
			
			Field only valid when 'Reo_push_reason' set to
			'reo_error_detected'.
			
			
			
			<enum 0 reo_queue_desc_addr_zero> Reo queue descriptor
			provided in the REO_ENTRANCE ring is set to 0
			
			<enum 1 reo_queue_desc_not_valid> Reo queue descriptor
			valid bit is NOT set
			
			<enum 2 ampdu_in_non_ba> AMPDU frame received without BA
			session having been setup.
			
			<enum 3 non_ba_duplicate> Non-BA session, SN equal to
			SSN, Retry bit set: duplicate frame
			
			<enum 4 ba_duplicate> BA session, duplicate frame
			
			<enum 5 regular_frame_2k_jump> A normal (management/data
			frame) received with 2K jump in SN
			
			<enum 6 bar_frame_2k_jump> A bar received with 2K jump
			in SSN
			
			<enum 7 regular_frame_OOR> A normal (management/data
			frame) received with SN falling within the OOR window
			
			<enum 8 bar_frame_OOR> A bar received with SSN falling
			within the OOR window
			
			<enum 9 bar_frame_no_ba_session> A bar received without
			a BA session
			
			<enum 10 bar_frame_sn_equals_ssn> A bar received with
			SSN equal to SN
			
			<enum 11 pn_check_failed> PN Check Failed packet.
			
			<enum 12 2k_error_handling_flag_set> Frame is forwarded
			as a result of the 'Seq_2k_error_detected_flag' been set in
			the REO Queue descriptor
			
			<enum 13 pn_error_handling_flag_set> Frame is forwarded
			as a result of the 'pn_error_detected_flag' been set in the
			REO Queue descriptor
			
			<enum 14 queue_descriptor_blocked_set> Frame is
			forwarded as a result of the queue descriptor(address) being
			blocked as SW/FW seems to be currently in the process of
			making updates to this descriptor...
			
			
			
			<legal 0-14>
*/
#define WBM_RELEASE_RING_2_REO_ERROR_CODE_OFFSET                     0x00000008
#define WBM_RELEASE_RING_2_REO_ERROR_CODE_LSB                        26
#define WBM_RELEASE_RING_2_REO_ERROR_CODE_MASK                       0x7c000000

/* Description		WBM_RELEASE_RING_2_WBM_INTERNAL_ERROR
			
			Can only be set by WBM.
			
			
			
			Is set when WBM got a buffer pointer but the action was
			to push it to the idle link descriptor ring or do link
			related activity
			
			OR
			
			Is set when WBM got a link buffer pointer but the action
			was to push it to the buffer  descriptor ring 
			
			
			
			<legal all>
*/
#define WBM_RELEASE_RING_2_WBM_INTERNAL_ERROR_OFFSET                 0x00000008
#define WBM_RELEASE_RING_2_WBM_INTERNAL_ERROR_LSB                    31
#define WBM_RELEASE_RING_2_WBM_INTERNAL_ERROR_MASK                   0x80000000

/* Description		WBM_RELEASE_RING_3_TQM_STATUS_NUMBER
			
			Field only valid when Release_source_module is set to
			release_source_TQM
			
			
			
			The value in this field is equal to value of the
			'TQM_CMD_Number' field the TQM command or the
			'TQM_add_cmd_Number' field from the TQM entrance ring
			descriptor
			
			
			
			This field helps to correlate the statuses with the TQM
			commands.
			
			
			
			NOTE that SW could program this number to be equal to
			the PPDU_ID number in case direct correlation with the PPDU
			ID is desired
			
			
			
			<legal all> 
*/
#define WBM_RELEASE_RING_3_TQM_STATUS_NUMBER_OFFSET                  0x0000000c
#define WBM_RELEASE_RING_3_TQM_STATUS_NUMBER_LSB                     0
#define WBM_RELEASE_RING_3_TQM_STATUS_NUMBER_MASK                    0x00ffffff

/* Description		WBM_RELEASE_RING_3_TRANSMIT_COUNT
			
			Field only valid when Release_source_module is set to
			release_source_TQM
			
			
			
			The number of times this frame has been transmitted
*/
#define WBM_RELEASE_RING_3_TRANSMIT_COUNT_OFFSET                     0x0000000c
#define WBM_RELEASE_RING_3_TRANSMIT_COUNT_LSB                        24
#define WBM_RELEASE_RING_3_TRANSMIT_COUNT_MASK                       0x7f000000

/* Description		WBM_RELEASE_RING_3_MSDU_CONTINUATION
			
			requests MSDU_continuation reporting for Rx
			MSDUs in Pine and HastingsPrime for which
			SW_release_details_valid may not be set.
			
			<legal all>
*/
#define WBM_RELEASE_RING_3_MSDU_CONTINUATION_OFFSET                  0x0000000c
#define WBM_RELEASE_RING_3_MSDU_CONTINUATION_LSB                     31
#define WBM_RELEASE_RING_3_MSDU_CONTINUATION_MASK                    0x80000000

/* Description		WBM_RELEASE_RING_4_ACK_FRAME_RSSI
			
			This field is only valid when the source is TQM.
			
			
			
			If this frame is removed as the result of the reception
			of an ACK or BA, this field indicates the RSSI of the
			received ACK or BA frame. 
			
			
			
			When the frame is removed as result of a direct remove
			command from the SW,  this field is set to 0x0 (which is
			never a valid value when real RSSI is available)
			
			
			
			<legal all>
*/
#define WBM_RELEASE_RING_4_ACK_FRAME_RSSI_OFFSET                     0x00000010
#define WBM_RELEASE_RING_4_ACK_FRAME_RSSI_LSB                        0
#define WBM_RELEASE_RING_4_ACK_FRAME_RSSI_MASK                       0x000000ff

/* Description		WBM_RELEASE_RING_4_SW_RELEASE_DETAILS_VALID
			
			Consumer: SW
			
			Producer: WBM
			
			
			
			When set, some WBM specific release info for SW is
			valid.
			
			This is set when WMB got a 'release_msdu_list' command
			from TQM and the return buffer manager is not WMB. WBM will
			then de-aggregate all the MSDUs and pass them one at a time
			on to the 'buffer owner'
			
			
			
			<legal all>
*/
#define WBM_RELEASE_RING_4_SW_RELEASE_DETAILS_VALID_OFFSET           0x00000010
#define WBM_RELEASE_RING_4_SW_RELEASE_DETAILS_VALID_LSB              8
#define WBM_RELEASE_RING_4_SW_RELEASE_DETAILS_VALID_MASK             0x00000100

/* Description		WBM_RELEASE_RING_4_FIRST_MSDU
			
			Field only valid when SW_release_details_valid is set.
			
			
			
			Consumer: SW
			
			Producer: WBM
			
			
			
			When set, this MSDU is the first MSDU pointed to in the
			'release_msdu_list' command.
			
			
			
			extends this to Rx MSDUs in Pine and
			HastingsPrime for which SW_release_details_valid may not be
			set.
			
			<legal all>
*/
#define WBM_RELEASE_RING_4_FIRST_MSDU_OFFSET                         0x00000010
#define WBM_RELEASE_RING_4_FIRST_MSDU_LSB                            9
#define WBM_RELEASE_RING_4_FIRST_MSDU_MASK                           0x00000200

/* Description		WBM_RELEASE_RING_4_LAST_MSDU
			
			Field only valid when SW_release_details_valid is set.
			
			
			
			Consumer: SW
			
			Producer: WBM
			
			
			
			When set, this MSDU is the last MSDU pointed to in the
			'release_msdu_list' command.
			
			
			
			extends this to Rx MSDUs in Pine and
			HastingsPrime for which SW_release_details_valid may not be
			set.
			
			<legal all>
*/
#define WBM_RELEASE_RING_4_LAST_MSDU_OFFSET                          0x00000010
#define WBM_RELEASE_RING_4_LAST_MSDU_LSB                             10
#define WBM_RELEASE_RING_4_LAST_MSDU_MASK                            0x00000400

/* Description		WBM_RELEASE_RING_4_MSDU_PART_OF_AMSDU
			
			Field only valid when SW_release_details_valid is set.
			
			
			
			Consumer: SW
			
			Producer: WBM
			
			
			
			When set, this MSDU was part of an A-MSDU in MPDU
			
			<legal all>
*/
#define WBM_RELEASE_RING_4_MSDU_PART_OF_AMSDU_OFFSET                 0x00000010
#define WBM_RELEASE_RING_4_MSDU_PART_OF_AMSDU_LSB                    11
#define WBM_RELEASE_RING_4_MSDU_PART_OF_AMSDU_MASK                   0x00000800

/* Description		WBM_RELEASE_RING_4_FW_TX_NOTIFY_FRAME
			
			Field only valid when SW_release_details_valid is set.
			
			
			
			Consumer: SW
			
			Producer: WBM
			
			
			
			This is the FW_tx_notify_frame field from the
			
			<legal all>
*/
#define WBM_RELEASE_RING_4_FW_TX_NOTIFY_FRAME_OFFSET                 0x00000010
#define WBM_RELEASE_RING_4_FW_TX_NOTIFY_FRAME_LSB                    12
#define WBM_RELEASE_RING_4_FW_TX_NOTIFY_FRAME_MASK                   0x00001000

/* Description		WBM_RELEASE_RING_4_BUFFER_TIMESTAMP
			
			Field only valid when SW_release_details_valid is set.
			
			
			
			Consumer: SW
			
			Producer: WBM
			
			
			
			This is the Buffer_timestamp field from the
			TX_MSDU_DETAILS for this frame from the MSDU link
			descriptor.
			
			
			
			Timestamp in units of 1024 µs
			
			<legal all>
*/
#define WBM_RELEASE_RING_4_BUFFER_TIMESTAMP_OFFSET                   0x00000010
#define WBM_RELEASE_RING_4_BUFFER_TIMESTAMP_LSB                      13
#define WBM_RELEASE_RING_4_BUFFER_TIMESTAMP_MASK                     0xffffe000

 /* EXTERNAL REFERENCE : struct tx_rate_stats_info tx_rate_stats */ 


/* Description		WBM_RELEASE_RING_5_TX_RATE_STATS_TX_RATE_STATS_INFO_VALID
			
			When set all other fields in this STRUCT contain valid
			info.
			
			
			
			
			<legal all>
*/
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TX_RATE_STATS_INFO_VALID_OFFSET 0x00000014
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TX_RATE_STATS_INFO_VALID_LSB 0
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TX_RATE_STATS_INFO_VALID_MASK 0x00000001

/* Description		WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_BW
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Indicates the BW of the upcoming transmission that shall
			likely start in about 3 -4 us on the medium
			
			
			
			<enum 0 transmit_bw_20_MHz>
			
			<enum 1 transmit_bw_40_MHz>
			
			<enum 2 transmit_bw_80_MHz>
			
			<enum 3 transmit_bw_160_MHz>
			
			
			
			<legal all>
*/
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_BW_OFFSET          0x00000014
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_BW_LSB             1
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_BW_MASK            0x00000006

/* Description		WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_PKT_TYPE
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			The packet type
			
			<enum 0 dot11a>802.11a PPDU type
			
			<enum 1 dot11b>802.11b PPDU type
			
			<enum 2 dot11n_mm>802.11n Mixed Mode PPDU type
			
			<enum 3 dot11ac>802.11ac PPDU type
			
			<enum 4 dot11ax>802.11ax PPDU type
			
			<enum 5 dot11ba>802.11ba (WUR) PPDU type
*/
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_PKT_TYPE_OFFSET    0x00000014
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_PKT_TYPE_LSB       3
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_PKT_TYPE_MASK      0x00000078

/* Description		WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_STBC
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			When set, STBC transmission rate was used.
*/
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_STBC_OFFSET        0x00000014
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_STBC_LSB           7
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_STBC_MASK          0x00000080

/* Description		WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_LDPC
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			When set, use LDPC transmission rates
*/
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_LDPC_OFFSET        0x00000014
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_LDPC_LSB           8
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_LDPC_MASK          0x00000100

/* Description		WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_SGI
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			<enum 0     0_8_us_sgi > Legacy normal GI. Can also be
			used for HE
			
			<enum 1     0_4_us_sgi > Legacy short GI. Can also be
			used for HE
			
			<enum 2     1_6_us_sgi > HE related GI
			
			<enum 3     3_2_us_sgi > HE related GI
			
			<legal 0 - 3>
*/
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_SGI_OFFSET         0x00000014
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_SGI_LSB            9
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_SGI_MASK           0x00000600

/* Description		WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_MCS
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			For details, refer to  MCS_TYPE description
			
			<legal all>
*/
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_MCS_OFFSET         0x00000014
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_MCS_LSB            11
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TRANSMIT_MCS_MASK           0x00007800

/* Description		WBM_RELEASE_RING_5_TX_RATE_STATS_OFDMA_TRANSMISSION
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			
			
			Set when the transmission was an OFDMA transmission (DL
			or UL).
			
			<legal all>
*/
#define WBM_RELEASE_RING_5_TX_RATE_STATS_OFDMA_TRANSMISSION_OFFSET   0x00000014
#define WBM_RELEASE_RING_5_TX_RATE_STATS_OFDMA_TRANSMISSION_LSB      15
#define WBM_RELEASE_RING_5_TX_RATE_STATS_OFDMA_TRANSMISSION_MASK     0x00008000

/* Description		WBM_RELEASE_RING_5_TX_RATE_STATS_TONES_IN_RU
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Field filled in by PDG.
			
			Not valid when in SW transmit mode
			
			
			
			The number of tones in the RU used.
			
			<legal all>
*/
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TONES_IN_RU_OFFSET          0x00000014
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TONES_IN_RU_LSB             16
#define WBM_RELEASE_RING_5_TX_RATE_STATS_TONES_IN_RU_MASK            0x0fff0000

/* Description		WBM_RELEASE_RING_5_TX_RATE_STATS_RESERVED_0A
			
			<legal 0>
*/
#define WBM_RELEASE_RING_5_TX_RATE_STATS_RESERVED_0A_OFFSET          0x00000014
#define WBM_RELEASE_RING_5_TX_RATE_STATS_RESERVED_0A_LSB             28
#define WBM_RELEASE_RING_5_TX_RATE_STATS_RESERVED_0A_MASK            0xf0000000

/* Description		WBM_RELEASE_RING_6_TX_RATE_STATS_PPDU_TRANSMISSION_TSF
			
			Field only valid when Tx_rate_stats_info_valid is set
			
			
			
			Based on a HWSCH configuration register setting, this
			field either contains:
			
			
			
			Lower 32 bits of the TSF, snapshot of this value when
			transmission of the PPDU containing the frame finished.
			
			OR
			
			Lower 32 bits of the TSF, snapshot of this value when
			transmission of the PPDU containing the frame started
			
			
			
			<legal all>
*/
#define WBM_RELEASE_RING_6_TX_RATE_STATS_PPDU_TRANSMISSION_TSF_OFFSET 0x00000018
#define WBM_RELEASE_RING_6_TX_RATE_STATS_PPDU_TRANSMISSION_TSF_LSB   0
#define WBM_RELEASE_RING_6_TX_RATE_STATS_PPDU_TRANSMISSION_TSF_MASK  0xffffffff

/* Description		WBM_RELEASE_RING_7_SW_PEER_ID
			
			Field only valid when Release_source_module is set to
			release_source_TQM
			
			
			
			1) Release of msdu buffer due to drop_frame = 1. Flow is
			not fetched and hence sw_peer_id and tid = 0
			
			buffer_or_desc_type = e_num 0
			MSDU_rel_buffertqm_release_reason = e_num 1
			tqm_rr_rem_cmd_rem
			
			
			
			
			
			2) Release of msdu buffer due to Flow is not fetched and
			hence sw_peer_id and tid = 0
			
			buffer_or_desc_type = e_num 0
			MSDU_rel_buffertqm_release_reason = e_num 1
			tqm_rr_rem_cmd_rem
			
			
			
			
			
			3) Release of msdu link due to remove_mpdu or acked_mpdu
			command.
			
			buffer_or_desc_type = e_num1
			msdu_link_descriptortqm_release_reason can be:e_num 1
			tqm_rr_rem_cmd_reme_num 2 tqm_rr_rem_cmd_tx
			
			e_num 3 tqm_rr_rem_cmd_notxe_num 4 tqm_rr_rem_cmd_aged
			
			
			
			Sw_peer_id from the TX_MSDU_FLOW descriptor or
			TX_MPDU_QUEUE descriptor
			
			<legal all>
*/
#define WBM_RELEASE_RING_7_SW_PEER_ID_OFFSET                         0x0000001c
#define WBM_RELEASE_RING_7_SW_PEER_ID_LSB                            0
#define WBM_RELEASE_RING_7_SW_PEER_ID_MASK                           0x0000ffff

/* Description		WBM_RELEASE_RING_7_TID
			
			Field only valid when Release_source_module is set to
			release_source_TQM
			
			
			
			1) Release of msdu buffer due to drop_frame = 1. Flow is
			not fetched and hence sw_peer_id and tid = 0
			
			buffer_or_desc_type = e_num 0
			MSDU_rel_buffertqm_release_reason = e_num 1
			tqm_rr_rem_cmd_rem
			
			
			
			
			
			2) Release of msdu buffer due to Flow is not fetched and
			hence sw_peer_id and tid = 0
			
			buffer_or_desc_type = e_num 0
			MSDU_rel_buffertqm_release_reason = e_num 1
			tqm_rr_rem_cmd_rem
			
			
			
			
			
			3) Release of msdu link due to remove_mpdu or acked_mpdu
			command.
			
			buffer_or_desc_type = e_num1
			msdu_link_descriptortqm_release_reason can be:e_num 1
			tqm_rr_rem_cmd_reme_num 2 tqm_rr_rem_cmd_tx
			
			e_num 3 tqm_rr_rem_cmd_notxe_num 4 tqm_rr_rem_cmd_aged
			
			
			
			
			
			This field represents the TID from the TX_MSDU_FLOW
			descriptor or TX_MPDU_QUEUE descriptor
			
			
			
			 <legal all>
*/
#define WBM_RELEASE_RING_7_TID_OFFSET                                0x0000001c
#define WBM_RELEASE_RING_7_TID_LSB                                   16
#define WBM_RELEASE_RING_7_TID_MASK                                  0x000f0000

/* Description		WBM_RELEASE_RING_7_RING_ID
			
			Consumer: TQM/REO/RXDMA/SW
			
			Producer: SRNG (of RXDMA)
			
			
			
			For debugging. 
			
			This field is filled in by the SRNG module.
			
			It help to identify the ring that is being looked <legal
			all>
*/
#define WBM_RELEASE_RING_7_RING_ID_OFFSET                            0x0000001c
#define WBM_RELEASE_RING_7_RING_ID_LSB                               20
#define WBM_RELEASE_RING_7_RING_ID_MASK                              0x0ff00000

/* Description		WBM_RELEASE_RING_7_LOOPING_COUNT
			
			Consumer: WBM/SW/FW
			
			Producer: SW/TQM/RXDMA/REO/SWITCH
			
			
			
			A count value that indicates the number of times the
			producer of entries into the Buffer Manager Ring has looped
			around the ring.
			
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
#define WBM_RELEASE_RING_7_LOOPING_COUNT_OFFSET                      0x0000001c
#define WBM_RELEASE_RING_7_LOOPING_COUNT_LSB                         28
#define WBM_RELEASE_RING_7_LOOPING_COUNT_MASK                        0xf0000000


#endif // _WBM_RELEASE_RING_H_

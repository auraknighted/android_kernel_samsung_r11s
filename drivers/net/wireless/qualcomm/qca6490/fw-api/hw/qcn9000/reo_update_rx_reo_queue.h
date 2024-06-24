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

#ifndef _REO_UPDATE_RX_REO_QUEUE_H_
#define _REO_UPDATE_RX_REO_QUEUE_H_
#if !defined(__ASSEMBLER__)
#endif

#include "uniform_reo_cmd_header.h"

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	struct uniform_reo_cmd_header cmd_header;
//	1	rx_reo_queue_desc_addr_31_0[31:0]
//	2	rx_reo_queue_desc_addr_39_32[7:0], update_receive_queue_number[8], update_vld[9], update_associated_link_descriptor_counter[10], update_disable_duplicate_detection[11], update_soft_reorder_enable[12], update_ac[13], update_bar[14], update_rty[15], update_chk_2k_mode[16], update_oor_mode[17], update_ba_window_size[18], update_pn_check_needed[19], update_pn_shall_be_even[20], update_pn_shall_be_uneven[21], update_pn_handling_enable[22], update_pn_size[23], update_ignore_ampdu_flag[24], update_svld[25], update_ssn[26], update_seq_2k_error_detected_flag[27], update_pn_error_detected_flag[28], update_pn_valid[29], update_pn[30], clear_stat_counters[31]
//	3	receive_queue_number[15:0], vld[16], associated_link_descriptor_counter[18:17], disable_duplicate_detection[19], soft_reorder_enable[20], ac[22:21], bar[23], rty[24], chk_2k_mode[25], oor_mode[26], pn_check_needed[27], pn_shall_be_even[28], pn_shall_be_uneven[29], pn_handling_enable[30], ignore_ampdu_flag[31]
//	4	ba_window_size[7:0], pn_size[9:8], svld[10], ssn[22:11], seq_2k_error_detected_flag[23], pn_error_detected_flag[24], pn_valid[25], flush_from_cache[26], reserved_4a[31:27]
//	5	pn_31_0[31:0]
//	6	pn_63_32[31:0]
//	7	pn_95_64[31:0]
//	8	pn_127_96[31:0]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_REO_UPDATE_RX_REO_QUEUE 9

struct reo_update_rx_reo_queue {
    struct            uniform_reo_cmd_header                       cmd_header;
             uint32_t rx_reo_queue_desc_addr_31_0     : 32; //[31:0]
             uint32_t rx_reo_queue_desc_addr_39_32    :  8, //[7:0]
                      update_receive_queue_number     :  1, //[8]
                      update_vld                      :  1, //[9]
                      update_associated_link_descriptor_counter:  1, //[10]
                      update_disable_duplicate_detection:  1, //[11]
                      update_soft_reorder_enable      :  1, //[12]
                      update_ac                       :  1, //[13]
                      update_bar                      :  1, //[14]
                      update_rty                      :  1, //[15]
                      update_chk_2k_mode              :  1, //[16]
                      update_oor_mode                 :  1, //[17]
                      update_ba_window_size           :  1, //[18]
                      update_pn_check_needed          :  1, //[19]
                      update_pn_shall_be_even         :  1, //[20]
                      update_pn_shall_be_uneven       :  1, //[21]
                      update_pn_handling_enable       :  1, //[22]
                      update_pn_size                  :  1, //[23]
                      update_ignore_ampdu_flag        :  1, //[24]
                      update_svld                     :  1, //[25]
                      update_ssn                      :  1, //[26]
                      update_seq_2k_error_detected_flag:  1, //[27]
                      update_pn_error_detected_flag   :  1, //[28]
                      update_pn_valid                 :  1, //[29]
                      update_pn                       :  1, //[30]
                      clear_stat_counters             :  1; //[31]
             uint32_t receive_queue_number            : 16, //[15:0]
                      vld                             :  1, //[16]
                      associated_link_descriptor_counter:  2, //[18:17]
                      disable_duplicate_detection     :  1, //[19]
                      soft_reorder_enable             :  1, //[20]
                      ac                              :  2, //[22:21]
                      bar                             :  1, //[23]
                      rty                             :  1, //[24]
                      chk_2k_mode                     :  1, //[25]
                      oor_mode                        :  1, //[26]
                      pn_check_needed                 :  1, //[27]
                      pn_shall_be_even                :  1, //[28]
                      pn_shall_be_uneven              :  1, //[29]
                      pn_handling_enable              :  1, //[30]
                      ignore_ampdu_flag               :  1; //[31]
             uint32_t ba_window_size                  :  8, //[7:0]
                      pn_size                         :  2, //[9:8]
                      svld                            :  1, //[10]
                      ssn                             : 12, //[22:11]
                      seq_2k_error_detected_flag      :  1, //[23]
                      pn_error_detected_flag          :  1, //[24]
                      pn_valid                        :  1, //[25]
                      flush_from_cache                :  1, //[26]
                      reserved_4a                     :  5; //[31:27]
             uint32_t pn_31_0                         : 32; //[31:0]
             uint32_t pn_63_32                        : 32; //[31:0]
             uint32_t pn_95_64                        : 32; //[31:0]
             uint32_t pn_127_96                       : 32; //[31:0]
};

/*

struct uniform_reo_cmd_header cmd_header
			
			Consumer: REO
			
			Producer: SW
			
			
			
			Details for command execution tracking purposes.

rx_reo_queue_desc_addr_31_0
			
			Consumer: REO
			
			Producer: SW
			
			
			
			Address (lower 32 bits) of the REO queue descriptor
			
			<legal all>

rx_reo_queue_desc_addr_39_32
			
			Consumer: REO
			
			Producer: SW
			
			
			
			Address (upper 8 bits) of the REO queue descriptor
			
			<legal all>

update_receive_queue_number
			
			Consumer: REO
			
			Producer: SW
			
			When set, receive_queue_number from this command will be
			updated in the descriptor.
			
			<legal all>

update_vld
			
			Consumer: REO
			
			Producer: SW
			
			
			
			When clear, REO will NOT update the VLD bit setting. For
			this setting, SW MUST set the Flush_from_cache bit in this
			command.
			
			
			
			When set, VLD from this command will be updated in the
			descriptor.
			
			<legal all>

update_associated_link_descriptor_counter
			
			Consumer: REO
			
			Producer: SW
			
			When set, Associated_link_descriptor_counter from this
			command will be updated in the descriptor.
			
			<legal all>

update_disable_duplicate_detection
			
			Consumer: REO
			
			Producer: SW
			
			When set, Disable_duplicate_detection from this command
			will be updated in the descriptor.
			
			<legal all>

update_soft_reorder_enable
			
			Consumer: REO
			
			Producer: SW
			
			When set, Soft_reorder_enable from this command will be
			updated in the descriptor.
			
			<legal all>

update_ac
			
			Consumer: REO
			
			Producer: SW
			
			When set, AC from this command will be updated in the
			descriptor.
			
			<legal all>

update_bar
			
			Consumer: REO
			
			Producer: SW
			
			When set, BAR from this command will be updated in the
			descriptor.
			
			<legal all>

update_rty
			
			Consumer: REO
			
			Producer: SW
			
			When set, RTY from this command will be updated in the
			descriptor.
			
			<legal all>

update_chk_2k_mode
			
			Consumer: REO
			
			Producer: SW
			
			When set, Chk_2k_mode from this command will be updated
			in the descriptor.
			
			<legal all>

update_oor_mode
			
			Consumer: REO
			
			Producer: SW
			
			When set, OOR_Mode from this command will be updated in
			the descriptor.
			
			<legal all>

update_ba_window_size
			
			Consumer: REO
			
			Producer: SW
			
			When set, BA_window_size from this command will be
			updated in the descriptor.
			
			<legal all>

update_pn_check_needed
			
			Consumer: REO
			
			Producer: SW
			
			When set, Pn_check_needed from this command will be
			updated in the descriptor.
			
			<legal all>

update_pn_shall_be_even
			
			Consumer: REO
			
			Producer: SW
			
			When set, Pn_shall_be_even from this command will be
			updated in the descriptor.
			
			<legal all>

update_pn_shall_be_uneven
			
			Consumer: REO
			
			Producer: SW
			
			When set, Pn_shall_be_uneven from this command will be
			updated in the descriptor.
			
			<legal all>

update_pn_handling_enable
			
			Consumer: REO
			
			Producer: SW
			
			When set, Pn_handling_enable from this command will be
			updated in the descriptor.
			
			<legal all>

update_pn_size
			
			Consumer: REO
			
			Producer: SW
			
			When set, Pn_size from this command will be updated in
			the descriptor.
			
			<legal all>

update_ignore_ampdu_flag
			
			Consumer: REO
			
			Producer: SW
			
			When set, Ignore_ampdu_flag from this command will be
			updated in the descriptor.
			
			<legal all>

update_svld
			
			Consumer: REO
			
			Producer: SW
			
			When set, Svld from this command will be updated in the
			descriptor.
			
			<legal all>

update_ssn
			
			Consumer: REO
			
			Producer: SW
			
			When set, SSN from this command will be updated in the
			descriptor.
			
			<legal all>

update_seq_2k_error_detected_flag
			
			Consumer: REO
			
			Producer: SW
			
			When set, Seq_2k_error_detected_flag from this command
			will be updated in the descriptor.
			
			<legal all>

update_pn_error_detected_flag
			
			Consumer: REO
			
			Producer: SW
			
			When set, pn_error_detected_flag from this command will
			be updated in the descriptor.
			
			<legal all>

update_pn_valid
			
			Consumer: REO
			
			Producer: SW
			
			When set, pn_valid from this command will be updated in
			the descriptor.
			
			<legal all>

update_pn
			
			Consumer: REO
			
			Producer: SW
			
			When set, all pn_... fields from this command will be
			updated in the descriptor.
			
			<legal all>

clear_stat_counters
			
			Consumer: REO
			
			Producer: SW
			
			When set, REO will clear (=> set to 0) the following
			stat counters in the REO_QUEUE_STRUCT
			
			
			
			Last_rx_enqueue_TimeStamp
			
			Last_rx_dequeue_Timestamp
			
			Rx_bitmap (not a counter, but bitmap is cleared)
			
			Timeout_count
			
			Forward_due_to_bar_count
			
			Duplicate_count
			
			Frames_in_order_count
			
			BAR_received_count
			
			MPDU_Frames_processed_count
			
			MSDU_Frames_processed_count
			
			Total_processed_byte_count
			
			Late_receive_MPDU_count
			
			window_jump_2k
			
			Hole_count
			
			
			
			<legal all>

receive_queue_number
			
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

vld
			
			Field only valid when Update_VLD is set
			
			
			
			For Update_VLD set and VLD clear, SW MUST set the
			Flush_from_cache bit in this command.
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

associated_link_descriptor_counter
			
			Field only valid when
			Update_Associated_link_descriptor_counter is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

disable_duplicate_detection
			
			Field only valid when Update_Disable_duplicate_detection
			is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

soft_reorder_enable
			
			Field only valid when Update_Soft_reorder_enable is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

ac
			
			Field only valid when Update_AC is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

bar
			
			Field only valid when Update_BAR is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

rty
			
			Field only valid when Update_RTY is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

chk_2k_mode
			
			Field only valid when Update_Chk_2k_Mode is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

oor_mode
			
			Field only valid when Update_OOR_Mode is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

pn_check_needed
			
			Field only valid when Update_Pn_check_needed is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

pn_shall_be_even
			
			Field only valid when Update_Pn_shall_be_even is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

pn_shall_be_uneven
			
			Field only valid when Update_Pn_shall_be_uneven is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

pn_handling_enable
			
			Field only valid when Update_Pn_handling_enable is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

ignore_ampdu_flag
			
			Field only valid when Update_Ignore_ampdu_flag is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

ba_window_size
			
			Field only valid when Update_BA_window_size is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

pn_size
			
			Field only valid when Update_Pn_size is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			
			
			<enum 0     pn_size_24>
			
			<enum 1     pn_size_48>
			
			<enum 2     pn_size_128>
			
			
			
			<legal 0-2>

svld
			
			Field only valid when Update_Svld is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

ssn
			
			Field only valid when Update_SSN is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

seq_2k_error_detected_flag
			
			Field only valid when Update_Seq_2k_error_detected_flag
			is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

pn_error_detected_flag
			
			Field only valid when Update_pn_error_detected_flag is
			set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

pn_valid
			
			Field only valid when Update_pn_valid is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

flush_from_cache
			
			When set, REO shall, after finishing the execution of
			this command, flush the related descriptor from the cache.
			
			<legal all>

reserved_4a
			
			<legal 0>

pn_31_0
			
			Field only valid when Update_Pn is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

pn_63_32
			
			Field only valid when Update_pn is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

pn_95_64
			
			Field only valid when Update_pn is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>

pn_127_96
			
			Field only valid when Update_pn is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/


 /* EXTERNAL REFERENCE : struct uniform_reo_cmd_header cmd_header */ 


/* Description		REO_UPDATE_RX_REO_QUEUE_0_CMD_HEADER_REO_CMD_NUMBER
			
			Consumer: REO/SW/DEBUG
			
			Producer: SW 
			
			
			
			This number can be used by SW to track, identify and
			link the created commands with the command statusses
			
			
			
			
			
			<legal all> 
*/
#define REO_UPDATE_RX_REO_QUEUE_0_CMD_HEADER_REO_CMD_NUMBER_OFFSET   0x00000000
#define REO_UPDATE_RX_REO_QUEUE_0_CMD_HEADER_REO_CMD_NUMBER_LSB      0
#define REO_UPDATE_RX_REO_QUEUE_0_CMD_HEADER_REO_CMD_NUMBER_MASK     0x0000ffff

/* Description		REO_UPDATE_RX_REO_QUEUE_0_CMD_HEADER_REO_STATUS_REQUIRED
			
			Consumer: REO
			
			Producer: SW 
			
			
			
			<enum 0 NoStatus> REO does not need to generate a status
			TLV for the execution of this command
			
			<enum 1 StatusRequired> REO shall generate a status TLV
			for the execution of this command
			
			
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_0_CMD_HEADER_REO_STATUS_REQUIRED_OFFSET 0x00000000
#define REO_UPDATE_RX_REO_QUEUE_0_CMD_HEADER_REO_STATUS_REQUIRED_LSB 16
#define REO_UPDATE_RX_REO_QUEUE_0_CMD_HEADER_REO_STATUS_REQUIRED_MASK 0x00010000

/* Description		REO_UPDATE_RX_REO_QUEUE_0_CMD_HEADER_RESERVED_0A
			
			<legal 0>
*/
#define REO_UPDATE_RX_REO_QUEUE_0_CMD_HEADER_RESERVED_0A_OFFSET      0x00000000
#define REO_UPDATE_RX_REO_QUEUE_0_CMD_HEADER_RESERVED_0A_LSB         17
#define REO_UPDATE_RX_REO_QUEUE_0_CMD_HEADER_RESERVED_0A_MASK        0xfffe0000

/* Description		REO_UPDATE_RX_REO_QUEUE_1_RX_REO_QUEUE_DESC_ADDR_31_0
			
			Consumer: REO
			
			Producer: SW
			
			
			
			Address (lower 32 bits) of the REO queue descriptor
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_1_RX_REO_QUEUE_DESC_ADDR_31_0_OFFSET 0x00000004
#define REO_UPDATE_RX_REO_QUEUE_1_RX_REO_QUEUE_DESC_ADDR_31_0_LSB    0
#define REO_UPDATE_RX_REO_QUEUE_1_RX_REO_QUEUE_DESC_ADDR_31_0_MASK   0xffffffff

/* Description		REO_UPDATE_RX_REO_QUEUE_2_RX_REO_QUEUE_DESC_ADDR_39_32
			
			Consumer: REO
			
			Producer: SW
			
			
			
			Address (upper 8 bits) of the REO queue descriptor
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_RX_REO_QUEUE_DESC_ADDR_39_32_OFFSET 0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_RX_REO_QUEUE_DESC_ADDR_39_32_LSB   0
#define REO_UPDATE_RX_REO_QUEUE_2_RX_REO_QUEUE_DESC_ADDR_39_32_MASK  0x000000ff

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_RECEIVE_QUEUE_NUMBER
			
			Consumer: REO
			
			Producer: SW
			
			When set, receive_queue_number from this command will be
			updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_RECEIVE_QUEUE_NUMBER_OFFSET 0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_RECEIVE_QUEUE_NUMBER_LSB    8
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_RECEIVE_QUEUE_NUMBER_MASK   0x00000100

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_VLD
			
			Consumer: REO
			
			Producer: SW
			
			
			
			When clear, REO will NOT update the VLD bit setting. For
			this setting, SW MUST set the Flush_from_cache bit in this
			command.
			
			
			
			When set, VLD from this command will be updated in the
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_VLD_OFFSET                  0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_VLD_LSB                     9
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_VLD_MASK                    0x00000200

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_ASSOCIATED_LINK_DESCRIPTOR_COUNTER
			
			Consumer: REO
			
			Producer: SW
			
			When set, Associated_link_descriptor_counter from this
			command will be updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_ASSOCIATED_LINK_DESCRIPTOR_COUNTER_OFFSET 0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_ASSOCIATED_LINK_DESCRIPTOR_COUNTER_LSB 10
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_ASSOCIATED_LINK_DESCRIPTOR_COUNTER_MASK 0x00000400

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_DISABLE_DUPLICATE_DETECTION
			
			Consumer: REO
			
			Producer: SW
			
			When set, Disable_duplicate_detection from this command
			will be updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_DISABLE_DUPLICATE_DETECTION_OFFSET 0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_DISABLE_DUPLICATE_DETECTION_LSB 11
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_DISABLE_DUPLICATE_DETECTION_MASK 0x00000800

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SOFT_REORDER_ENABLE
			
			Consumer: REO
			
			Producer: SW
			
			When set, Soft_reorder_enable from this command will be
			updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SOFT_REORDER_ENABLE_OFFSET  0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SOFT_REORDER_ENABLE_LSB     12
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SOFT_REORDER_ENABLE_MASK    0x00001000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_AC
			
			Consumer: REO
			
			Producer: SW
			
			When set, AC from this command will be updated in the
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_AC_OFFSET                   0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_AC_LSB                      13
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_AC_MASK                     0x00002000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_BAR
			
			Consumer: REO
			
			Producer: SW
			
			When set, BAR from this command will be updated in the
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_BAR_OFFSET                  0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_BAR_LSB                     14
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_BAR_MASK                    0x00004000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_RTY
			
			Consumer: REO
			
			Producer: SW
			
			When set, RTY from this command will be updated in the
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_RTY_OFFSET                  0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_RTY_LSB                     15
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_RTY_MASK                    0x00008000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_CHK_2K_MODE
			
			Consumer: REO
			
			Producer: SW
			
			When set, Chk_2k_mode from this command will be updated
			in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_CHK_2K_MODE_OFFSET          0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_CHK_2K_MODE_LSB             16
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_CHK_2K_MODE_MASK            0x00010000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_OOR_MODE
			
			Consumer: REO
			
			Producer: SW
			
			When set, OOR_Mode from this command will be updated in
			the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_OOR_MODE_OFFSET             0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_OOR_MODE_LSB                17
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_OOR_MODE_MASK               0x00020000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_BA_WINDOW_SIZE
			
			Consumer: REO
			
			Producer: SW
			
			When set, BA_window_size from this command will be
			updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_BA_WINDOW_SIZE_OFFSET       0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_BA_WINDOW_SIZE_LSB          18
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_BA_WINDOW_SIZE_MASK         0x00040000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_CHECK_NEEDED
			
			Consumer: REO
			
			Producer: SW
			
			When set, Pn_check_needed from this command will be
			updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_CHECK_NEEDED_OFFSET      0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_CHECK_NEEDED_LSB         19
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_CHECK_NEEDED_MASK        0x00080000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_SHALL_BE_EVEN
			
			Consumer: REO
			
			Producer: SW
			
			When set, Pn_shall_be_even from this command will be
			updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_SHALL_BE_EVEN_OFFSET     0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_SHALL_BE_EVEN_LSB        20
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_SHALL_BE_EVEN_MASK       0x00100000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_SHALL_BE_UNEVEN
			
			Consumer: REO
			
			Producer: SW
			
			When set, Pn_shall_be_uneven from this command will be
			updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_SHALL_BE_UNEVEN_OFFSET   0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_SHALL_BE_UNEVEN_LSB      21
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_SHALL_BE_UNEVEN_MASK     0x00200000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_HANDLING_ENABLE
			
			Consumer: REO
			
			Producer: SW
			
			When set, Pn_handling_enable from this command will be
			updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_HANDLING_ENABLE_OFFSET   0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_HANDLING_ENABLE_LSB      22
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_HANDLING_ENABLE_MASK     0x00400000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_SIZE
			
			Consumer: REO
			
			Producer: SW
			
			When set, Pn_size from this command will be updated in
			the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_SIZE_OFFSET              0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_SIZE_LSB                 23
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_SIZE_MASK                0x00800000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_IGNORE_AMPDU_FLAG
			
			Consumer: REO
			
			Producer: SW
			
			When set, Ignore_ampdu_flag from this command will be
			updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_IGNORE_AMPDU_FLAG_OFFSET    0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_IGNORE_AMPDU_FLAG_LSB       24
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_IGNORE_AMPDU_FLAG_MASK      0x01000000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SVLD
			
			Consumer: REO
			
			Producer: SW
			
			When set, Svld from this command will be updated in the
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SVLD_OFFSET                 0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SVLD_LSB                    25
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SVLD_MASK                   0x02000000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SSN
			
			Consumer: REO
			
			Producer: SW
			
			When set, SSN from this command will be updated in the
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SSN_OFFSET                  0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SSN_LSB                     26
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SSN_MASK                    0x04000000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SEQ_2K_ERROR_DETECTED_FLAG
			
			Consumer: REO
			
			Producer: SW
			
			When set, Seq_2k_error_detected_flag from this command
			will be updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SEQ_2K_ERROR_DETECTED_FLAG_OFFSET 0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SEQ_2K_ERROR_DETECTED_FLAG_LSB 27
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_SEQ_2K_ERROR_DETECTED_FLAG_MASK 0x08000000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_ERROR_DETECTED_FLAG
			
			Consumer: REO
			
			Producer: SW
			
			When set, pn_error_detected_flag from this command will
			be updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_ERROR_DETECTED_FLAG_OFFSET 0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_ERROR_DETECTED_FLAG_LSB  28
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_ERROR_DETECTED_FLAG_MASK 0x10000000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_VALID
			
			Consumer: REO
			
			Producer: SW
			
			When set, pn_valid from this command will be updated in
			the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_VALID_OFFSET             0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_VALID_LSB                29
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_VALID_MASK               0x20000000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN
			
			Consumer: REO
			
			Producer: SW
			
			When set, all pn_... fields from this command will be
			updated in the descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_OFFSET                   0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_LSB                      30
#define REO_UPDATE_RX_REO_QUEUE_2_UPDATE_PN_MASK                     0x40000000

/* Description		REO_UPDATE_RX_REO_QUEUE_2_CLEAR_STAT_COUNTERS
			
			Consumer: REO
			
			Producer: SW
			
			When set, REO will clear (=> set to 0) the following
			stat counters in the REO_QUEUE_STRUCT
			
			
			
			Last_rx_enqueue_TimeStamp
			
			Last_rx_dequeue_Timestamp
			
			Rx_bitmap (not a counter, but bitmap is cleared)
			
			Timeout_count
			
			Forward_due_to_bar_count
			
			Duplicate_count
			
			Frames_in_order_count
			
			BAR_received_count
			
			MPDU_Frames_processed_count
			
			MSDU_Frames_processed_count
			
			Total_processed_byte_count
			
			Late_receive_MPDU_count
			
			window_jump_2k
			
			Hole_count
			
			
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_2_CLEAR_STAT_COUNTERS_OFFSET         0x00000008
#define REO_UPDATE_RX_REO_QUEUE_2_CLEAR_STAT_COUNTERS_LSB            31
#define REO_UPDATE_RX_REO_QUEUE_2_CLEAR_STAT_COUNTERS_MASK           0x80000000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_RECEIVE_QUEUE_NUMBER
			
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_RECEIVE_QUEUE_NUMBER_OFFSET        0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_RECEIVE_QUEUE_NUMBER_LSB           0
#define REO_UPDATE_RX_REO_QUEUE_3_RECEIVE_QUEUE_NUMBER_MASK          0x0000ffff

/* Description		REO_UPDATE_RX_REO_QUEUE_3_VLD
			
			Field only valid when Update_VLD is set
			
			
			
			For Update_VLD set and VLD clear, SW MUST set the
			Flush_from_cache bit in this command.
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_VLD_OFFSET                         0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_VLD_LSB                            16
#define REO_UPDATE_RX_REO_QUEUE_3_VLD_MASK                           0x00010000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_ASSOCIATED_LINK_DESCRIPTOR_COUNTER
			
			Field only valid when
			Update_Associated_link_descriptor_counter is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_ASSOCIATED_LINK_DESCRIPTOR_COUNTER_OFFSET 0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_ASSOCIATED_LINK_DESCRIPTOR_COUNTER_LSB 17
#define REO_UPDATE_RX_REO_QUEUE_3_ASSOCIATED_LINK_DESCRIPTOR_COUNTER_MASK 0x00060000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_DISABLE_DUPLICATE_DETECTION
			
			Field only valid when Update_Disable_duplicate_detection
			is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_DISABLE_DUPLICATE_DETECTION_OFFSET 0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_DISABLE_DUPLICATE_DETECTION_LSB    19
#define REO_UPDATE_RX_REO_QUEUE_3_DISABLE_DUPLICATE_DETECTION_MASK   0x00080000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_SOFT_REORDER_ENABLE
			
			Field only valid when Update_Soft_reorder_enable is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_SOFT_REORDER_ENABLE_OFFSET         0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_SOFT_REORDER_ENABLE_LSB            20
#define REO_UPDATE_RX_REO_QUEUE_3_SOFT_REORDER_ENABLE_MASK           0x00100000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_AC
			
			Field only valid when Update_AC is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_AC_OFFSET                          0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_AC_LSB                             21
#define REO_UPDATE_RX_REO_QUEUE_3_AC_MASK                            0x00600000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_BAR
			
			Field only valid when Update_BAR is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_BAR_OFFSET                         0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_BAR_LSB                            23
#define REO_UPDATE_RX_REO_QUEUE_3_BAR_MASK                           0x00800000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_RTY
			
			Field only valid when Update_RTY is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_RTY_OFFSET                         0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_RTY_LSB                            24
#define REO_UPDATE_RX_REO_QUEUE_3_RTY_MASK                           0x01000000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_CHK_2K_MODE
			
			Field only valid when Update_Chk_2k_Mode is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_CHK_2K_MODE_OFFSET                 0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_CHK_2K_MODE_LSB                    25
#define REO_UPDATE_RX_REO_QUEUE_3_CHK_2K_MODE_MASK                   0x02000000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_OOR_MODE
			
			Field only valid when Update_OOR_Mode is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_OOR_MODE_OFFSET                    0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_OOR_MODE_LSB                       26
#define REO_UPDATE_RX_REO_QUEUE_3_OOR_MODE_MASK                      0x04000000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_PN_CHECK_NEEDED
			
			Field only valid when Update_Pn_check_needed is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_PN_CHECK_NEEDED_OFFSET             0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_PN_CHECK_NEEDED_LSB                27
#define REO_UPDATE_RX_REO_QUEUE_3_PN_CHECK_NEEDED_MASK               0x08000000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_PN_SHALL_BE_EVEN
			
			Field only valid when Update_Pn_shall_be_even is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_PN_SHALL_BE_EVEN_OFFSET            0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_PN_SHALL_BE_EVEN_LSB               28
#define REO_UPDATE_RX_REO_QUEUE_3_PN_SHALL_BE_EVEN_MASK              0x10000000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_PN_SHALL_BE_UNEVEN
			
			Field only valid when Update_Pn_shall_be_uneven is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_PN_SHALL_BE_UNEVEN_OFFSET          0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_PN_SHALL_BE_UNEVEN_LSB             29
#define REO_UPDATE_RX_REO_QUEUE_3_PN_SHALL_BE_UNEVEN_MASK            0x20000000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_PN_HANDLING_ENABLE
			
			Field only valid when Update_Pn_handling_enable is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_PN_HANDLING_ENABLE_OFFSET          0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_PN_HANDLING_ENABLE_LSB             30
#define REO_UPDATE_RX_REO_QUEUE_3_PN_HANDLING_ENABLE_MASK            0x40000000

/* Description		REO_UPDATE_RX_REO_QUEUE_3_IGNORE_AMPDU_FLAG
			
			Field only valid when Update_Ignore_ampdu_flag is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_3_IGNORE_AMPDU_FLAG_OFFSET           0x0000000c
#define REO_UPDATE_RX_REO_QUEUE_3_IGNORE_AMPDU_FLAG_LSB              31
#define REO_UPDATE_RX_REO_QUEUE_3_IGNORE_AMPDU_FLAG_MASK             0x80000000

/* Description		REO_UPDATE_RX_REO_QUEUE_4_BA_WINDOW_SIZE
			
			Field only valid when Update_BA_window_size is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_4_BA_WINDOW_SIZE_OFFSET              0x00000010
#define REO_UPDATE_RX_REO_QUEUE_4_BA_WINDOW_SIZE_LSB                 0
#define REO_UPDATE_RX_REO_QUEUE_4_BA_WINDOW_SIZE_MASK                0x000000ff

/* Description		REO_UPDATE_RX_REO_QUEUE_4_PN_SIZE
			
			Field only valid when Update_Pn_size is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			
			
			<enum 0     pn_size_24>
			
			<enum 1     pn_size_48>
			
			<enum 2     pn_size_128>
			
			
			
			<legal 0-2>
*/
#define REO_UPDATE_RX_REO_QUEUE_4_PN_SIZE_OFFSET                     0x00000010
#define REO_UPDATE_RX_REO_QUEUE_4_PN_SIZE_LSB                        8
#define REO_UPDATE_RX_REO_QUEUE_4_PN_SIZE_MASK                       0x00000300

/* Description		REO_UPDATE_RX_REO_QUEUE_4_SVLD
			
			Field only valid when Update_Svld is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_4_SVLD_OFFSET                        0x00000010
#define REO_UPDATE_RX_REO_QUEUE_4_SVLD_LSB                           10
#define REO_UPDATE_RX_REO_QUEUE_4_SVLD_MASK                          0x00000400

/* Description		REO_UPDATE_RX_REO_QUEUE_4_SSN
			
			Field only valid when Update_SSN is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_4_SSN_OFFSET                         0x00000010
#define REO_UPDATE_RX_REO_QUEUE_4_SSN_LSB                            11
#define REO_UPDATE_RX_REO_QUEUE_4_SSN_MASK                           0x007ff800

/* Description		REO_UPDATE_RX_REO_QUEUE_4_SEQ_2K_ERROR_DETECTED_FLAG
			
			Field only valid when Update_Seq_2k_error_detected_flag
			is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_4_SEQ_2K_ERROR_DETECTED_FLAG_OFFSET  0x00000010
#define REO_UPDATE_RX_REO_QUEUE_4_SEQ_2K_ERROR_DETECTED_FLAG_LSB     23
#define REO_UPDATE_RX_REO_QUEUE_4_SEQ_2K_ERROR_DETECTED_FLAG_MASK    0x00800000

/* Description		REO_UPDATE_RX_REO_QUEUE_4_PN_ERROR_DETECTED_FLAG
			
			Field only valid when Update_pn_error_detected_flag is
			set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_4_PN_ERROR_DETECTED_FLAG_OFFSET      0x00000010
#define REO_UPDATE_RX_REO_QUEUE_4_PN_ERROR_DETECTED_FLAG_LSB         24
#define REO_UPDATE_RX_REO_QUEUE_4_PN_ERROR_DETECTED_FLAG_MASK        0x01000000

/* Description		REO_UPDATE_RX_REO_QUEUE_4_PN_VALID
			
			Field only valid when Update_pn_valid is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_4_PN_VALID_OFFSET                    0x00000010
#define REO_UPDATE_RX_REO_QUEUE_4_PN_VALID_LSB                       25
#define REO_UPDATE_RX_REO_QUEUE_4_PN_VALID_MASK                      0x02000000

/* Description		REO_UPDATE_RX_REO_QUEUE_4_FLUSH_FROM_CACHE
			
			When set, REO shall, after finishing the execution of
			this command, flush the related descriptor from the cache.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_4_FLUSH_FROM_CACHE_OFFSET            0x00000010
#define REO_UPDATE_RX_REO_QUEUE_4_FLUSH_FROM_CACHE_LSB               26
#define REO_UPDATE_RX_REO_QUEUE_4_FLUSH_FROM_CACHE_MASK              0x04000000

/* Description		REO_UPDATE_RX_REO_QUEUE_4_RESERVED_4A
			
			<legal 0>
*/
#define REO_UPDATE_RX_REO_QUEUE_4_RESERVED_4A_OFFSET                 0x00000010
#define REO_UPDATE_RX_REO_QUEUE_4_RESERVED_4A_LSB                    27
#define REO_UPDATE_RX_REO_QUEUE_4_RESERVED_4A_MASK                   0xf8000000

/* Description		REO_UPDATE_RX_REO_QUEUE_5_PN_31_0
			
			Field only valid when Update_Pn is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_5_PN_31_0_OFFSET                     0x00000014
#define REO_UPDATE_RX_REO_QUEUE_5_PN_31_0_LSB                        0
#define REO_UPDATE_RX_REO_QUEUE_5_PN_31_0_MASK                       0xffffffff

/* Description		REO_UPDATE_RX_REO_QUEUE_6_PN_63_32
			
			Field only valid when Update_pn is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_6_PN_63_32_OFFSET                    0x00000018
#define REO_UPDATE_RX_REO_QUEUE_6_PN_63_32_LSB                       0
#define REO_UPDATE_RX_REO_QUEUE_6_PN_63_32_MASK                      0xffffffff

/* Description		REO_UPDATE_RX_REO_QUEUE_7_PN_95_64
			
			Field only valid when Update_pn is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_7_PN_95_64_OFFSET                    0x0000001c
#define REO_UPDATE_RX_REO_QUEUE_7_PN_95_64_LSB                       0
#define REO_UPDATE_RX_REO_QUEUE_7_PN_95_64_MASK                      0xffffffff

/* Description		REO_UPDATE_RX_REO_QUEUE_8_PN_127_96
			
			Field only valid when Update_pn is set
			
			
			
			Field value to be copied over into the RX_REO_QUEUE
			descriptor.
			
			<legal all>
*/
#define REO_UPDATE_RX_REO_QUEUE_8_PN_127_96_OFFSET                   0x00000020
#define REO_UPDATE_RX_REO_QUEUE_8_PN_127_96_LSB                      0
#define REO_UPDATE_RX_REO_QUEUE_8_PN_127_96_MASK                     0xffffffff


#endif // _REO_UPDATE_RX_REO_QUEUE_H_

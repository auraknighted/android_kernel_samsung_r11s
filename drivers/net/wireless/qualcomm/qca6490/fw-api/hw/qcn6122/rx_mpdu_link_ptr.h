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

#ifndef _RX_MPDU_LINK_PTR_H_
#define _RX_MPDU_LINK_PTR_H_
#if !defined(__ASSEMBLER__)
#endif

#include "buffer_addr_info.h"

// ################ START SUMMARY #################
//
//	Dword	Fields
//	0-1	struct buffer_addr_info mpdu_link_desc_addr_info;
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_RX_MPDU_LINK_PTR 2

struct rx_mpdu_link_ptr {
    struct            buffer_addr_info                       mpdu_link_desc_addr_info;
};

/*

struct buffer_addr_info mpdu_link_desc_addr_info
			
			Details of the physical address of an MPDU link
			descriptor
*/


 /* EXTERNAL REFERENCE : struct buffer_addr_info mpdu_link_desc_addr_info */ 


/* Description		RX_MPDU_LINK_PTR_0_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0
			
			Address (lower 32 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_MPDU_LINK_PTR_0_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_OFFSET 0x00000000
#define RX_MPDU_LINK_PTR_0_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_LSB 0
#define RX_MPDU_LINK_PTR_0_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_31_0_MASK 0xffffffff

/* Description		RX_MPDU_LINK_PTR_1_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32
			
			Address (upper 8 bits) of the MSDU buffer OR
			MSDU_EXTENSION descriptor OR Link Descriptor
			
			
			
			In case of 'NULL' pointer, this field is set to 0
			
			<legal all>
*/
#define RX_MPDU_LINK_PTR_1_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_OFFSET 0x00000004
#define RX_MPDU_LINK_PTR_1_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_LSB 0
#define RX_MPDU_LINK_PTR_1_MPDU_LINK_DESC_ADDR_INFO_BUFFER_ADDR_39_32_MASK 0x000000ff

/* Description		RX_MPDU_LINK_PTR_1_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER
			
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
#define RX_MPDU_LINK_PTR_1_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_OFFSET 0x00000004
#define RX_MPDU_LINK_PTR_1_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_LSB 8
#define RX_MPDU_LINK_PTR_1_MPDU_LINK_DESC_ADDR_INFO_RETURN_BUFFER_MANAGER_MASK 0x00000700

/* Description		RX_MPDU_LINK_PTR_1_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE
			
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
#define RX_MPDU_LINK_PTR_1_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_OFFSET 0x00000004
#define RX_MPDU_LINK_PTR_1_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_LSB 11
#define RX_MPDU_LINK_PTR_1_MPDU_LINK_DESC_ADDR_INFO_SW_BUFFER_COOKIE_MASK 0xfffff800


#endif // _RX_MPDU_LINK_PTR_H_

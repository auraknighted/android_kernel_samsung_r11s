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

#ifndef _UNIFORM_DESCRIPTOR_HEADER_H_
#define _UNIFORM_DESCRIPTOR_HEADER_H_
#if !defined(__ASSEMBLER__)
#endif


// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	owner[3:0], buffer_type[7:4], reserved_0a[31:8]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_UNIFORM_DESCRIPTOR_HEADER 1

struct uniform_descriptor_header {
             uint32_t owner                           :  4, //[3:0]
                      buffer_type                     :  4, //[7:4]
                      reserved_0a                     : 24; //[31:8]
};

/*

owner
			
			Consumer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO
			
			Producer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO 
			
			
			
			The owner of this data structure:
			
			<enum 0 WBM_owned> Buffer Manager currently owns this
			data structure.
			
			<enum 1 SW_OR_FW_owned> Software of FW currently owns
			this data structure.
			
			<enum 2 TQM_owned> Transmit Queue Manager currently owns
			this data structure.
			
			<enum 3 RXDMA_owned> Receive DMA currently owns this
			data structure.
			
			<enum 4 REO_owned> Reorder currently owns this data
			structure.
			
			<enum 5 SWITCH_owned> SWITCH currently owns this data
			structure.
			
			
			
			<legal 0-5> 

buffer_type
			
			Consumer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO
			
			Producer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO 
			
			
			
			Field describing what contents format is of this
			descriptor
			
			
			
			<enum 0 Transmit_MSDU_Link_descriptor > 
			
			<enum 1 Transmit_MPDU_Link_descriptor > 
			
			<enum 2 Transmit_MPDU_Queue_head_descriptor>
			
			<enum 3 Transmit_MPDU_Queue_ext_descriptor>
			
			<enum 4 Transmit_flow_descriptor>
			
			<enum 5 Transmit_buffer > NOT TO BE USED: 
			
			
			
			<enum 6 Receive_MSDU_Link_descriptor >
			
			<enum 7 Receive_MPDU_Link_descriptor >
			
			<enum 8 Receive_REO_queue_descriptor >
			
			<enum 9 Receive_REO_queue_ext_descriptor >
			
			
			
			<enum 10 Receive_buffer >
			
			
			
			<enum 11 Idle_link_list_entry>
			
			
			
			<legal 0-11> 

reserved_0a
			
			<legal 0>
*/


/* Description		UNIFORM_DESCRIPTOR_HEADER_0_OWNER
			
			Consumer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO
			
			Producer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO 
			
			
			
			The owner of this data structure:
			
			<enum 0 WBM_owned> Buffer Manager currently owns this
			data structure.
			
			<enum 1 SW_OR_FW_owned> Software of FW currently owns
			this data structure.
			
			<enum 2 TQM_owned> Transmit Queue Manager currently owns
			this data structure.
			
			<enum 3 RXDMA_owned> Receive DMA currently owns this
			data structure.
			
			<enum 4 REO_owned> Reorder currently owns this data
			structure.
			
			<enum 5 SWITCH_owned> SWITCH currently owns this data
			structure.
			
			
			
			<legal 0-5> 
*/
#define UNIFORM_DESCRIPTOR_HEADER_0_OWNER_OFFSET                     0x00000000
#define UNIFORM_DESCRIPTOR_HEADER_0_OWNER_LSB                        0
#define UNIFORM_DESCRIPTOR_HEADER_0_OWNER_MASK                       0x0000000f

/* Description		UNIFORM_DESCRIPTOR_HEADER_0_BUFFER_TYPE
			
			Consumer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO
			
			Producer: In DEBUG mode: WBM, TQM, TXDMA, RXDMA, REO 
			
			
			
			Field describing what contents format is of this
			descriptor
			
			
			
			<enum 0 Transmit_MSDU_Link_descriptor > 
			
			<enum 1 Transmit_MPDU_Link_descriptor > 
			
			<enum 2 Transmit_MPDU_Queue_head_descriptor>
			
			<enum 3 Transmit_MPDU_Queue_ext_descriptor>
			
			<enum 4 Transmit_flow_descriptor>
			
			<enum 5 Transmit_buffer > NOT TO BE USED: 
			
			
			
			<enum 6 Receive_MSDU_Link_descriptor >
			
			<enum 7 Receive_MPDU_Link_descriptor >
			
			<enum 8 Receive_REO_queue_descriptor >
			
			<enum 9 Receive_REO_queue_ext_descriptor >
			
			
			
			<enum 10 Receive_buffer >
			
			
			
			<enum 11 Idle_link_list_entry>
			
			
			
			<legal 0-11> 
*/
#define UNIFORM_DESCRIPTOR_HEADER_0_BUFFER_TYPE_OFFSET               0x00000000
#define UNIFORM_DESCRIPTOR_HEADER_0_BUFFER_TYPE_LSB                  4
#define UNIFORM_DESCRIPTOR_HEADER_0_BUFFER_TYPE_MASK                 0x000000f0

/* Description		UNIFORM_DESCRIPTOR_HEADER_0_RESERVED_0A
			
			<legal 0>
*/
#define UNIFORM_DESCRIPTOR_HEADER_0_RESERVED_0A_OFFSET               0x00000000
#define UNIFORM_DESCRIPTOR_HEADER_0_RESERVED_0A_LSB                  8
#define UNIFORM_DESCRIPTOR_HEADER_0_RESERVED_0A_MASK                 0xffffff00


#endif // _UNIFORM_DESCRIPTOR_HEADER_H_

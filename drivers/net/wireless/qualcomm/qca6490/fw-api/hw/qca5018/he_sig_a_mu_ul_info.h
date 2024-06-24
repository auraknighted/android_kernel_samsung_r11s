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

#ifndef _HE_SIG_A_MU_UL_INFO_H_
#define _HE_SIG_A_MU_UL_INFO_H_
#if !defined(__ASSEMBLER__)
#endif


// ################ START SUMMARY #################
//
//	Dword	Fields
//	0	format_indication[0], bss_color_id[6:1], spatial_reuse[22:7], reserved_0a[23], transmit_bw[25:24], reserved_0b[31:26]
//	1	txop_duration[6:0], reserved_1a[15:7], crc[19:16], tail[25:20], reserved_1b[31:26]
//
// ################ END SUMMARY #################

#define NUM_OF_DWORDS_HE_SIG_A_MU_UL_INFO 2

struct he_sig_a_mu_ul_info {
             uint32_t format_indication               :  1, //[0]
                      bss_color_id                    :  6, //[6:1]
                      spatial_reuse                   : 16, //[22:7]
                      reserved_0a                     :  1, //[23]
                      transmit_bw                     :  2, //[25:24]
                      reserved_0b                     :  6; //[31:26]
             uint32_t txop_duration                   :  7, //[6:0]
                      reserved_1a                     :  9, //[15:7]
                      crc                             :  4, //[19:16]
                      tail                            :  6, //[25:20]
                      reserved_1b                     :  6; //[31:26]
};

/*

format_indication
			
			Indicates whether the transmission is SU PPDU or a
			trigger based UL MU PDDU
			
			<enum 0 HE_SIGA_FORMAT_HE_TRIG>
			
			<enum 1 HE_SIGA_FORMAT_SU_OR_EXT_SU>
			
			<legal all>

bss_color_id
			
			BSS color ID 
			
			<legal all>

spatial_reuse
			
			Spatial reuse
			
			
			
			<legal all>

reserved_0a
			
			Note: spec indicates this shall be set to 1
			
			<legal 1>

transmit_bw
			
			Bandwidth of the PPDU.
			
			
			
			<enum 0 HE_SIG_A_MU_UL_BW20> 20 Mhz 
			
			<enum 1 HE_SIG_A_MU_UL_BW40> 40 Mhz 
			
			<enum 2 HE_SIG_A_MU_UL_BW80> 80 Mhz 
			
			<enum 3 HE_SIG_A_MU_UL_BW160> 160 MHz or 80+80 MHz
			
			
			
			On RX side, Field Used by MAC HW
			
			<legal 0-3>

reserved_0b
			
			<legal 0>

txop_duration
			
			Indicates the remaining time in the current TXOP <legal
			all>

reserved_1a
			
			Set to value indicated in the trigger frame
			
			<legal 255>

crc
			
			CRC for HE-SIG-A contents.
			
			This CRC may also cover some fields of L-SIG (TBD)
			
			<legal all>

tail
			
			BCC encoding (similar to VHT-SIG-A) with 6 tail bits is
			used
			
			<legal 0>

reserved_1b
			
			<legal 0>
*/


/* Description		HE_SIG_A_MU_UL_INFO_0_FORMAT_INDICATION
			
			Indicates whether the transmission is SU PPDU or a
			trigger based UL MU PDDU
			
			<enum 0 HE_SIGA_FORMAT_HE_TRIG>
			
			<enum 1 HE_SIGA_FORMAT_SU_OR_EXT_SU>
			
			<legal all>
*/
#define HE_SIG_A_MU_UL_INFO_0_FORMAT_INDICATION_OFFSET               0x00000000
#define HE_SIG_A_MU_UL_INFO_0_FORMAT_INDICATION_LSB                  0
#define HE_SIG_A_MU_UL_INFO_0_FORMAT_INDICATION_MASK                 0x00000001

/* Description		HE_SIG_A_MU_UL_INFO_0_BSS_COLOR_ID
			
			BSS color ID 
			
			<legal all>
*/
#define HE_SIG_A_MU_UL_INFO_0_BSS_COLOR_ID_OFFSET                    0x00000000
#define HE_SIG_A_MU_UL_INFO_0_BSS_COLOR_ID_LSB                       1
#define HE_SIG_A_MU_UL_INFO_0_BSS_COLOR_ID_MASK                      0x0000007e

/* Description		HE_SIG_A_MU_UL_INFO_0_SPATIAL_REUSE
			
			Spatial reuse
			
			
			
			<legal all>
*/
#define HE_SIG_A_MU_UL_INFO_0_SPATIAL_REUSE_OFFSET                   0x00000000
#define HE_SIG_A_MU_UL_INFO_0_SPATIAL_REUSE_LSB                      7
#define HE_SIG_A_MU_UL_INFO_0_SPATIAL_REUSE_MASK                     0x007fff80

/* Description		HE_SIG_A_MU_UL_INFO_0_RESERVED_0A
			
			Note: spec indicates this shall be set to 1
			
			<legal 1>
*/
#define HE_SIG_A_MU_UL_INFO_0_RESERVED_0A_OFFSET                     0x00000000
#define HE_SIG_A_MU_UL_INFO_0_RESERVED_0A_LSB                        23
#define HE_SIG_A_MU_UL_INFO_0_RESERVED_0A_MASK                       0x00800000

/* Description		HE_SIG_A_MU_UL_INFO_0_TRANSMIT_BW
			
			Bandwidth of the PPDU.
			
			
			
			<enum 0 HE_SIG_A_MU_UL_BW20> 20 Mhz 
			
			<enum 1 HE_SIG_A_MU_UL_BW40> 40 Mhz 
			
			<enum 2 HE_SIG_A_MU_UL_BW80> 80 Mhz 
			
			<enum 3 HE_SIG_A_MU_UL_BW160> 160 MHz or 80+80 MHz
			
			
			
			On RX side, Field Used by MAC HW
			
			<legal 0-3>
*/
#define HE_SIG_A_MU_UL_INFO_0_TRANSMIT_BW_OFFSET                     0x00000000
#define HE_SIG_A_MU_UL_INFO_0_TRANSMIT_BW_LSB                        24
#define HE_SIG_A_MU_UL_INFO_0_TRANSMIT_BW_MASK                       0x03000000

/* Description		HE_SIG_A_MU_UL_INFO_0_RESERVED_0B
			
			<legal 0>
*/
#define HE_SIG_A_MU_UL_INFO_0_RESERVED_0B_OFFSET                     0x00000000
#define HE_SIG_A_MU_UL_INFO_0_RESERVED_0B_LSB                        26
#define HE_SIG_A_MU_UL_INFO_0_RESERVED_0B_MASK                       0xfc000000

/* Description		HE_SIG_A_MU_UL_INFO_1_TXOP_DURATION
			
			Indicates the remaining time in the current TXOP <legal
			all>
*/
#define HE_SIG_A_MU_UL_INFO_1_TXOP_DURATION_OFFSET                   0x00000004
#define HE_SIG_A_MU_UL_INFO_1_TXOP_DURATION_LSB                      0
#define HE_SIG_A_MU_UL_INFO_1_TXOP_DURATION_MASK                     0x0000007f

/* Description		HE_SIG_A_MU_UL_INFO_1_RESERVED_1A
			
			Set to value indicated in the trigger frame
			
			<legal 255>
*/
#define HE_SIG_A_MU_UL_INFO_1_RESERVED_1A_OFFSET                     0x00000004
#define HE_SIG_A_MU_UL_INFO_1_RESERVED_1A_LSB                        7
#define HE_SIG_A_MU_UL_INFO_1_RESERVED_1A_MASK                       0x0000ff80

/* Description		HE_SIG_A_MU_UL_INFO_1_CRC
			
			CRC for HE-SIG-A contents.
			
			This CRC may also cover some fields of L-SIG (TBD)
			
			<legal all>
*/
#define HE_SIG_A_MU_UL_INFO_1_CRC_OFFSET                             0x00000004
#define HE_SIG_A_MU_UL_INFO_1_CRC_LSB                                16
#define HE_SIG_A_MU_UL_INFO_1_CRC_MASK                               0x000f0000

/* Description		HE_SIG_A_MU_UL_INFO_1_TAIL
			
			BCC encoding (similar to VHT-SIG-A) with 6 tail bits is
			used
			
			<legal 0>
*/
#define HE_SIG_A_MU_UL_INFO_1_TAIL_OFFSET                            0x00000004
#define HE_SIG_A_MU_UL_INFO_1_TAIL_LSB                               20
#define HE_SIG_A_MU_UL_INFO_1_TAIL_MASK                              0x03f00000

/* Description		HE_SIG_A_MU_UL_INFO_1_RESERVED_1B
			
			<legal 0>
*/
#define HE_SIG_A_MU_UL_INFO_1_RESERVED_1B_OFFSET                     0x00000004
#define HE_SIG_A_MU_UL_INFO_1_RESERVED_1B_LSB                        26
#define HE_SIG_A_MU_UL_INFO_1_RESERVED_1B_MASK                       0xfc000000


#endif // _HE_SIG_A_MU_UL_INFO_H_


/* Copyright (c) 2022, Qualcomm Innovation Center, Inc. All rights reserved.
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

 
 
 
 
 
 
 


#ifndef _U_SIG_EHT_TB_INFO_H_
#define _U_SIG_EHT_TB_INFO_H_
#if !defined(__ASSEMBLER__)
#endif

#define NUM_OF_DWORDS_U_SIG_EHT_TB_INFO 2


struct u_sig_eht_tb_info {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             uint32_t phy_version                                             :  3, // [2:0]
                      transmit_bw                                             :  3, // [5:3]
                      dl_ul_flag                                              :  1, // [6:6]
                      bss_color_id                                            :  6, // [12:7]
                      txop_duration                                           :  7, // [19:13]
                      disregard_0a                                            :  6, // [25:20]
                      reserved_0c                                             :  6; // [31:26]
             uint32_t eht_ppdu_sig_cmn_type                                   :  2, // [1:0]
                      validate_1a                                             :  1, // [2:2]
                      spatial_reuse                                           :  8, // [10:3]
                      disregard_1b                                            :  5, // [15:11]
                      crc                                                     :  4, // [19:16]
                      tail                                                    :  6, // [25:20]
                      reserved_1c                                             :  5, // [30:26]
                      rx_integrity_check_passed                               :  1; // [31:31]
#else
             uint32_t reserved_0c                                             :  6, // [31:26]
                      disregard_0a                                            :  6, // [25:20]
                      txop_duration                                           :  7, // [19:13]
                      bss_color_id                                            :  6, // [12:7]
                      dl_ul_flag                                              :  1, // [6:6]
                      transmit_bw                                             :  3, // [5:3]
                      phy_version                                             :  3; // [2:0]
             uint32_t rx_integrity_check_passed                               :  1, // [31:31]
                      reserved_1c                                             :  5, // [30:26]
                      tail                                                    :  6, // [25:20]
                      crc                                                     :  4, // [19:16]
                      disregard_1b                                            :  5, // [15:11]
                      spatial_reuse                                           :  8, // [10:3]
                      validate_1a                                             :  1, // [2:2]
                      eht_ppdu_sig_cmn_type                                   :  2; // [1:0]
#endif
};


/* Description		PHY_VERSION

			<enum 0 U_SIG_VERSION_EHT>
			Values 1 - 7 are reserved.
			<legal 0>
*/

#define U_SIG_EHT_TB_INFO_PHY_VERSION_OFFSET                                        0x00000000
#define U_SIG_EHT_TB_INFO_PHY_VERSION_LSB                                           0
#define U_SIG_EHT_TB_INFO_PHY_VERSION_MSB                                           2
#define U_SIG_EHT_TB_INFO_PHY_VERSION_MASK                                          0x00000007


/* Description		TRANSMIT_BW

			Bandwidth of the PPDU, as indicated in the trigger frame
			
			
			<enum 0 U_SIG_BW20> 20 MHz
			<enum 1 U_SIG_BW40> 40 MHz
			<enum 2 U_SIG_BW80> 80 MHz
			<enum 3 U_SIG_BW160> 160 MHz
			<enum 4 U_SIG_BW320> 320 MHz channelization scheme 1
			<enum 5 U_SIG_BW320_2> 320 MHz channelization scheme 2
			
			On RX side, field used by MAC HW
			<legal all>
*/

#define U_SIG_EHT_TB_INFO_TRANSMIT_BW_OFFSET                                        0x00000000
#define U_SIG_EHT_TB_INFO_TRANSMIT_BW_LSB                                           3
#define U_SIG_EHT_TB_INFO_TRANSMIT_BW_MSB                                           5
#define U_SIG_EHT_TB_INFO_TRANSMIT_BW_MASK                                          0x00000038


/* Description		DL_UL_FLAG

			Differentiates between DL and UL transmission
			
			<enum 0 DL_UL_FLAG_IS_DL_OR_TDLS>
			<enum 1 DL_UL_FLAG_IS_UL>
			<legal all>
*/

#define U_SIG_EHT_TB_INFO_DL_UL_FLAG_OFFSET                                         0x00000000
#define U_SIG_EHT_TB_INFO_DL_UL_FLAG_LSB                                            6
#define U_SIG_EHT_TB_INFO_DL_UL_FLAG_MSB                                            6
#define U_SIG_EHT_TB_INFO_DL_UL_FLAG_MASK                                           0x00000040


/* Description		BSS_COLOR_ID

			BSS color ID
			
			Field used by MAC HW
			<legal all>
*/

#define U_SIG_EHT_TB_INFO_BSS_COLOR_ID_OFFSET                                       0x00000000
#define U_SIG_EHT_TB_INFO_BSS_COLOR_ID_LSB                                          7
#define U_SIG_EHT_TB_INFO_BSS_COLOR_ID_MSB                                          12
#define U_SIG_EHT_TB_INFO_BSS_COLOR_ID_MASK                                         0x00001f80


/* Description		TXOP_DURATION

			Indicates the remaining time in the current TXOP
			
			Field used by MAC HW
			 <legal all>
*/

#define U_SIG_EHT_TB_INFO_TXOP_DURATION_OFFSET                                      0x00000000
#define U_SIG_EHT_TB_INFO_TXOP_DURATION_LSB                                         13
#define U_SIG_EHT_TB_INFO_TXOP_DURATION_MSB                                         19
#define U_SIG_EHT_TB_INFO_TXOP_DURATION_MASK                                        0x000fe000


/* Description		DISREGARD_0A

			Set to value indicated in the trigger frame
			<legal all>
*/

#define U_SIG_EHT_TB_INFO_DISREGARD_0A_OFFSET                                       0x00000000
#define U_SIG_EHT_TB_INFO_DISREGARD_0A_LSB                                          20
#define U_SIG_EHT_TB_INFO_DISREGARD_0A_MSB                                          25
#define U_SIG_EHT_TB_INFO_DISREGARD_0A_MASK                                         0x03f00000


/* Description		RESERVED_0C

			<legal 0>
*/

#define U_SIG_EHT_TB_INFO_RESERVED_0C_OFFSET                                        0x00000000
#define U_SIG_EHT_TB_INFO_RESERVED_0C_LSB                                           26
#define U_SIG_EHT_TB_INFO_RESERVED_0C_MSB                                           31
#define U_SIG_EHT_TB_INFO_RESERVED_0C_MASK                                          0xfc000000


/* Description		EHT_PPDU_SIG_CMN_TYPE

			<enum 3 EHT_PPDU_SIG_rsvd> DO NOT USE
			<enum 0 EHT_PPDU_SIG_TB_or_DL_OFDMA> Need to look at both
			 EHT-SIG content channels for DL OFDMA (including OFDMA+MU-MIMO)
			
			<enum 2 EHT_PPDU_SIG_DL_MU_MIMO> Need to look at both EHT-SIG
			 content channels
			<enum 1 EHT_PPDU_SIG_SU> Need to look at only one EHT-SIG
			 content channel
			<legal all>
*/

#define U_SIG_EHT_TB_INFO_EHT_PPDU_SIG_CMN_TYPE_OFFSET                              0x00000004
#define U_SIG_EHT_TB_INFO_EHT_PPDU_SIG_CMN_TYPE_LSB                                 0
#define U_SIG_EHT_TB_INFO_EHT_PPDU_SIG_CMN_TYPE_MSB                                 1
#define U_SIG_EHT_TB_INFO_EHT_PPDU_SIG_CMN_TYPE_MASK                                0x00000003


/* Description		VALIDATE_1A

			Set to value indicated in the trigger frame
			<legal 1>
*/

#define U_SIG_EHT_TB_INFO_VALIDATE_1A_OFFSET                                        0x00000004
#define U_SIG_EHT_TB_INFO_VALIDATE_1A_LSB                                           2
#define U_SIG_EHT_TB_INFO_VALIDATE_1A_MSB                                           2
#define U_SIG_EHT_TB_INFO_VALIDATE_1A_MASK                                          0x00000004


/* Description		SPATIAL_REUSE

			TODO: Placeholder
			<legal all>
*/

#define U_SIG_EHT_TB_INFO_SPATIAL_REUSE_OFFSET                                      0x00000004
#define U_SIG_EHT_TB_INFO_SPATIAL_REUSE_LSB                                         3
#define U_SIG_EHT_TB_INFO_SPATIAL_REUSE_MSB                                         10
#define U_SIG_EHT_TB_INFO_SPATIAL_REUSE_MASK                                        0x000007f8


/* Description		DISREGARD_1B

			Set to value indicated in the trigger frame
			<legal all>
*/

#define U_SIG_EHT_TB_INFO_DISREGARD_1B_OFFSET                                       0x00000004
#define U_SIG_EHT_TB_INFO_DISREGARD_1B_LSB                                          11
#define U_SIG_EHT_TB_INFO_DISREGARD_1B_MSB                                          15
#define U_SIG_EHT_TB_INFO_DISREGARD_1B_MASK                                         0x0000f800


/* Description		CRC

			CRC for U-SIG contents
			<legal all>
*/

#define U_SIG_EHT_TB_INFO_CRC_OFFSET                                                0x00000004
#define U_SIG_EHT_TB_INFO_CRC_LSB                                                   16
#define U_SIG_EHT_TB_INFO_CRC_MSB                                                   19
#define U_SIG_EHT_TB_INFO_CRC_MASK                                                  0x000f0000


/* Description		TAIL

			<legal 0>
*/

#define U_SIG_EHT_TB_INFO_TAIL_OFFSET                                               0x00000004
#define U_SIG_EHT_TB_INFO_TAIL_LSB                                                  20
#define U_SIG_EHT_TB_INFO_TAIL_MSB                                                  25
#define U_SIG_EHT_TB_INFO_TAIL_MASK                                                 0x03f00000


/* Description		RESERVED_1C

			<legal 0>
*/

#define U_SIG_EHT_TB_INFO_RESERVED_1C_OFFSET                                        0x00000004
#define U_SIG_EHT_TB_INFO_RESERVED_1C_LSB                                           26
#define U_SIG_EHT_TB_INFO_RESERVED_1C_MSB                                           30
#define U_SIG_EHT_TB_INFO_RESERVED_1C_MASK                                          0x7c000000


/* Description		RX_INTEGRITY_CHECK_PASSED

			TX side: Set to 0
			RX side: Set to 1 if PHY determines the U-SIG CRC check 
			has passed, else set to 0
			
			<legal all>
*/

#define U_SIG_EHT_TB_INFO_RX_INTEGRITY_CHECK_PASSED_OFFSET                          0x00000004
#define U_SIG_EHT_TB_INFO_RX_INTEGRITY_CHECK_PASSED_LSB                             31
#define U_SIG_EHT_TB_INFO_RX_INTEGRITY_CHECK_PASSED_MSB                             31
#define U_SIG_EHT_TB_INFO_RX_INTEGRITY_CHECK_PASSED_MASK                            0x80000000



#endif   // U_SIG_EHT_TB_INFO

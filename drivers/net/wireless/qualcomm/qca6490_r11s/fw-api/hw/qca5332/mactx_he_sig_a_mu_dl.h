
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

 
 
 
 
 
 
 


#ifndef _MACTX_HE_SIG_A_MU_DL_H_
#define _MACTX_HE_SIG_A_MU_DL_H_
#if !defined(__ASSEMBLER__)
#endif

#include "he_sig_a_mu_dl_info.h"
#define NUM_OF_DWORDS_MACTX_HE_SIG_A_MU_DL 2

#define NUM_OF_QWORDS_MACTX_HE_SIG_A_MU_DL 1


struct mactx_he_sig_a_mu_dl {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   he_sig_a_mu_dl_info                                       mactx_he_sig_a_mu_dl_info_details;
#else
             struct   he_sig_a_mu_dl_info                                       mactx_he_sig_a_mu_dl_info_details;
#endif
};


/* Description		MACTX_HE_SIG_A_MU_DL_INFO_DETAILS

			See detailed description of the STRUCT
*/


/* Description		DL_UL_FLAG

			Differentiates between DL and UL transmission 
			
			<enum 0 DL_UL_FLAG_IS_DL_OR_TDLS>
			<enum 1 DL_UL_FLAG_IS_UL>
			NOTE: This is unsupported for "HE MU" format (including "MU_SU") 
			Tx in Napier and Hastings80.
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_DL_UL_FLAG_OFFSET    0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_DL_UL_FLAG_LSB       0
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_DL_UL_FLAG_MSB       0
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_DL_UL_FLAG_MASK      0x0000000000000001


/* Description		MCS_OF_SIG_B

			Indicates the MCS of HE-SIG-B
			<legal 0-5>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_MCS_OF_SIG_B_OFFSET  0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_MCS_OF_SIG_B_LSB     1
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_MCS_OF_SIG_B_MSB     3
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_MCS_OF_SIG_B_MASK    0x000000000000000e


/* Description		DCM_OF_SIG_B

			Indicates whether dual sub-carrier modulation is applied
			 to HE-SIG-B 
			
			0: No DCM for HE_SIG_B
			1: DCM for HE_SIG_B
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_DCM_OF_SIG_B_OFFSET  0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_DCM_OF_SIG_B_LSB     4
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_DCM_OF_SIG_B_MSB     4
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_DCM_OF_SIG_B_MASK    0x0000000000000010


/* Description		BSS_COLOR_ID

			BSS color ID 
			
			Field Used by MAC HW
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_BSS_COLOR_ID_OFFSET  0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_BSS_COLOR_ID_LSB     5
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_BSS_COLOR_ID_MSB     10
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_BSS_COLOR_ID_MASK    0x00000000000007e0


/* Description		SPATIAL_REUSE

			Spatial reuse
			
			For 20MHz one SR field corresponding to entire 20MHz (other
			 3 fields indicate identical values)
			For 40MHz two SR fields for each 20MHz (other 2 fields indicate
			 identical values)
			For 80MHz four SR fields for each 20MHz
			For 160MHz four SR fields for each 40MHz
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_SPATIAL_REUSE_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_SPATIAL_REUSE_LSB    11
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_SPATIAL_REUSE_MSB    14
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_SPATIAL_REUSE_MASK   0x0000000000007800


/* Description		TRANSMIT_BW

			Bandwidth of the PPDU.
			
			<enum 0 HE_SIG_A_MU_DL_BW20> 20 Mhz 
			<enum 1 HE_SIG_A_MU_DL_BW40> 40 Mhz 
			<enum 2 HE_SIG_A_MU_DL_BW80> 80 MHz non-preamble puncturing
			 mode
			<enum 3 HE_SIG_A_MU_DL_BW160> 160 MHz and 80+80 MHz non-preamble
			 puncturing mode
			<enum 4 HE_SIG_A_MU_DL_BW80_SEC_20_PUNC> for preamble puncturing
			 in 80 MHz, where in the preamble only the secondary 20 
			MHz is punctured
			<enum 5 HE_SIG_A_MU_DL_BW80_20_PUNC_IN_SEC_40> for preamble
			 puncturing in 80 MHz, where in the preamble only one of
			 the two 20 MHz sub-channels in secondary 40 MHz is punctured.
			
			<enum 6 HE_SIG_A_MU_DL_BW160_SEC_20_PUNC> for preamble puncturing
			 in 160 MHz or 80+80 MHz, where in the primary 80 MHz of
			 the preamble only the secondary 20 MHz is punctured.
			<enum 7 HE_SIG_A_MU_DL_BW160_SEC_40_80_PUNC> for preamble
			 puncturing in 160 MHz or 80+80 MHz, where in the primary
			 80 MHz of the preamble the primary 40 MHz is present.
			
			On RX side, Field Used by MAC HW
			<legal 0-7>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_TRANSMIT_BW_OFFSET   0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_TRANSMIT_BW_LSB      15
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_TRANSMIT_BW_MSB      17
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_TRANSMIT_BW_MASK     0x0000000000038000


/* Description		NUM_SIG_B_SYMBOLS

			Number of symbols
			
			For OFDMA, the actual number of symbols is 1 larger then
			 indicated in this field.
			
			For MU-MIMO this is equal to the number of users - 1: the
			 following encoding is used:
			1 => 2 users
			2 => 3 users
			Etc.
			
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_SIG_B_SYMBOLS_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_SIG_B_SYMBOLS_LSB 18
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_SIG_B_SYMBOLS_MSB 21
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_SIG_B_SYMBOLS_MASK 0x00000000003c0000


/* Description		COMP_MODE_SIG_B

			Indicates the compression mode of HE-SIG-B
			
			0: Regular [uncomp mode]
			1: compressed mode (full-BW MU-MIMO only) 
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_COMP_MODE_SIG_B_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_COMP_MODE_SIG_B_LSB  22
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_COMP_MODE_SIG_B_MSB  22
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_COMP_MODE_SIG_B_MASK 0x0000000000400000


/* Description		CP_LTF_SIZE

			Indicates the CP and HE-LTF type 
			
			<enum 0 MU_FourX_LTF_0_8CP> 4xLTF + 0.8 us CP
			<enum 1 MU_TwoX_LTF_0_8CP> 2x LTF + 0.8 µs CP
			<enum 2 MU_TwoX_LTF_1_6CP> 2x LTF + 1.6 µs CP
			<enum 3 MU_FourX_LTF_3_2CP> 4x LTF + 3.2 µs CP 
			
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_CP_LTF_SIZE_OFFSET   0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_CP_LTF_SIZE_LSB      23
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_CP_LTF_SIZE_MSB      24
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_CP_LTF_SIZE_MASK     0x0000000001800000


/* Description		DOPPLER_INDICATION

			0: No Doppler support
			1: Doppler support
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_DOPPLER_INDICATION_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_DOPPLER_INDICATION_LSB 25
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_DOPPLER_INDICATION_MSB 25
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_DOPPLER_INDICATION_MASK 0x0000000002000000


/* Description		RESERVED_0A

			<legal 0>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_0A_OFFSET   0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_0A_LSB      26
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_0A_MSB      31
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_0A_MASK     0x00000000fc000000


/* Description		TXOP_DURATION

			Indicates the remaining time in the current TXOP
			
			Field Used by MAC HW
			 <legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_TXOP_DURATION_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_TXOP_DURATION_LSB    32
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_TXOP_DURATION_MSB    38
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_TXOP_DURATION_MASK   0x0000007f00000000


/* Description		RESERVED_1A

			Note: spec indicates this shall be set to 1
			<legal 1>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1A_OFFSET   0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1A_LSB      39
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1A_MSB      39
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1A_MASK     0x0000008000000000


/* Description		NUM_LTF_SYMBOLS

			Indicates the number of HE-LTF symbols
			
			0: 1 LTF
			1: 2 LTFs
			2: 4 LTFs
			3: 6 LTFs
			4: 8 LTFs
			
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_LTF_SYMBOLS_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_LTF_SYMBOLS_LSB  40
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_LTF_SYMBOLS_MSB  42
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_LTF_SYMBOLS_MASK 0x0000070000000000


/* Description		LDPC_EXTRA_SYMBOL

			If LDPC, 
			  0: LDPC extra symbol not present
			  1: LDPC extra symbol present
			Else 
			  Set to 1
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_LDPC_EXTRA_SYMBOL_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_LDPC_EXTRA_SYMBOL_LSB 43
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_LDPC_EXTRA_SYMBOL_MSB 43
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_LDPC_EXTRA_SYMBOL_MASK 0x0000080000000000


/* Description		STBC

			Indicates whether STBC is applied
			0: No STBC
			1: STBC
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_STBC_OFFSET          0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_STBC_LSB             44
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_STBC_MSB             44
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_STBC_MASK            0x0000100000000000


/* Description		PACKET_EXTENSION_A_FACTOR

			the packet extension duration of the trigger-based PPDU 
			response with these two bits indicating the "a-factor" 
			
			<enum 0 a_factor_4>
			<enum 1 a_factor_1>
			<enum 2 a_factor_2>
			<enum 3 a_factor_3>
			
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_A_FACTOR_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_A_FACTOR_LSB 45
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_A_FACTOR_MSB 46
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_A_FACTOR_MASK 0x0000600000000000


/* Description		PACKET_EXTENSION_PE_DISAMBIGUITY

			the packet extension duration of the trigger-based PPDU 
			response with this bit indicating the PE-Disambiguity 
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_PE_DISAMBIGUITY_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_PE_DISAMBIGUITY_LSB 47
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_PE_DISAMBIGUITY_MSB 47
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_PE_DISAMBIGUITY_MASK 0x0000800000000000


/* Description		CRC

			CRC for HE-SIG-A contents.
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_CRC_OFFSET           0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_CRC_LSB              48
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_CRC_MSB              51
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_CRC_MASK             0x000f000000000000


/* Description		TAIL

			<legal 0>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_TAIL_OFFSET          0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_TAIL_LSB             52
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_TAIL_MSB             57
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_TAIL_MASK            0x03f0000000000000


/* Description		RESERVED_1B

			<legal 0>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1B_OFFSET   0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1B_LSB      58
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1B_MSB      62
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1B_MASK     0x7c00000000000000


/* Description		RX_INTEGRITY_CHECK_PASSED

			TX side: Set to 0
			RX side: Set to 1 if PHY determines the HE-SIG-A CRC check
			 has passed, else set to 0
			
			<legal all>
*/

#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_OFFSET 0x0000000000000000
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_LSB 63
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MSB 63
#define MACTX_HE_SIG_A_MU_DL_MACTX_HE_SIG_A_MU_DL_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MASK 0x8000000000000000



#endif   // MACTX_HE_SIG_A_MU_DL

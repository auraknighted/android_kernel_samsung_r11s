
/* Copyright (c) 2021, Qualcomm Innovation Center, Inc. All rights reserved.
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

 
 
 
 
 
 
 


#ifndef _PHYRX_HE_SIG_A_MU_DL_H_
#define _PHYRX_HE_SIG_A_MU_DL_H_
#if !defined(__ASSEMBLER__)
#endif

#include "he_sig_a_mu_dl_info.h"
#define NUM_OF_DWORDS_PHYRX_HE_SIG_A_MU_DL 2

#define NUM_OF_QWORDS_PHYRX_HE_SIG_A_MU_DL 1


struct phyrx_he_sig_a_mu_dl {
#ifndef WIFI_BIT_ORDER_BIG_ENDIAN
             struct   he_sig_a_mu_dl_info                                       phyrx_he_sig_a_mu_dl_info_details;
#else
             struct   he_sig_a_mu_dl_info                                       phyrx_he_sig_a_mu_dl_info_details;
#endif
};


 


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_DL_UL_FLAG_OFFSET    0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_DL_UL_FLAG_LSB       0
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_DL_UL_FLAG_MSB       0
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_DL_UL_FLAG_MASK      0x0000000000000001


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_MCS_OF_SIG_B_OFFSET  0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_MCS_OF_SIG_B_LSB     1
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_MCS_OF_SIG_B_MSB     3
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_MCS_OF_SIG_B_MASK    0x000000000000000e


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_DCM_OF_SIG_B_OFFSET  0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_DCM_OF_SIG_B_LSB     4
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_DCM_OF_SIG_B_MSB     4
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_DCM_OF_SIG_B_MASK    0x0000000000000010


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_BSS_COLOR_ID_OFFSET  0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_BSS_COLOR_ID_LSB     5
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_BSS_COLOR_ID_MSB     10
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_BSS_COLOR_ID_MASK    0x00000000000007e0


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_SPATIAL_REUSE_OFFSET 0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_SPATIAL_REUSE_LSB    11
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_SPATIAL_REUSE_MSB    14
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_SPATIAL_REUSE_MASK   0x0000000000007800


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_TRANSMIT_BW_OFFSET   0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_TRANSMIT_BW_LSB      15
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_TRANSMIT_BW_MSB      17
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_TRANSMIT_BW_MASK     0x0000000000038000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_SIG_B_SYMBOLS_OFFSET 0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_SIG_B_SYMBOLS_LSB 18
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_SIG_B_SYMBOLS_MSB 21
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_SIG_B_SYMBOLS_MASK 0x00000000003c0000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_COMP_MODE_SIG_B_OFFSET 0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_COMP_MODE_SIG_B_LSB  22
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_COMP_MODE_SIG_B_MSB  22
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_COMP_MODE_SIG_B_MASK 0x0000000000400000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_CP_LTF_SIZE_OFFSET   0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_CP_LTF_SIZE_LSB      23
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_CP_LTF_SIZE_MSB      24
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_CP_LTF_SIZE_MASK     0x0000000001800000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_DOPPLER_INDICATION_OFFSET 0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_DOPPLER_INDICATION_LSB 25
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_DOPPLER_INDICATION_MSB 25
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_DOPPLER_INDICATION_MASK 0x0000000002000000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_0A_OFFSET   0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_0A_LSB      26
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_0A_MSB      31
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_0A_MASK     0x00000000fc000000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_TXOP_DURATION_OFFSET 0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_TXOP_DURATION_LSB    32
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_TXOP_DURATION_MSB    38
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_TXOP_DURATION_MASK   0x0000007f00000000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1A_OFFSET   0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1A_LSB      39
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1A_MSB      39
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1A_MASK     0x0000008000000000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_LTF_SYMBOLS_OFFSET 0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_LTF_SYMBOLS_LSB  40
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_LTF_SYMBOLS_MSB  42
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_NUM_LTF_SYMBOLS_MASK 0x0000070000000000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_LDPC_EXTRA_SYMBOL_OFFSET 0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_LDPC_EXTRA_SYMBOL_LSB 43
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_LDPC_EXTRA_SYMBOL_MSB 43
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_LDPC_EXTRA_SYMBOL_MASK 0x0000080000000000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_STBC_OFFSET          0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_STBC_LSB             44
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_STBC_MSB             44
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_STBC_MASK            0x0000100000000000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_A_FACTOR_OFFSET 0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_A_FACTOR_LSB 45
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_A_FACTOR_MSB 46
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_A_FACTOR_MASK 0x0000600000000000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_PE_DISAMBIGUITY_OFFSET 0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_PE_DISAMBIGUITY_LSB 47
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_PE_DISAMBIGUITY_MSB 47
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_PACKET_EXTENSION_PE_DISAMBIGUITY_MASK 0x0000800000000000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_CRC_OFFSET           0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_CRC_LSB              48
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_CRC_MSB              51
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_CRC_MASK             0x000f000000000000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_TAIL_OFFSET          0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_TAIL_LSB             52
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_TAIL_MSB             57
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_TAIL_MASK            0x03f0000000000000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1B_OFFSET   0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1B_LSB      58
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1B_MSB      62
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RESERVED_1B_MASK     0x7c00000000000000


 

#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_OFFSET 0x0000000000000000
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_LSB 63
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MSB 63
#define PHYRX_HE_SIG_A_MU_DL_PHYRX_HE_SIG_A_MU_DL_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MASK 0x8000000000000000



#endif    


/*
 * Copyright (c) 2021 Qualcomm Innovation Center, Inc. All rights reserved.
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











#ifndef _PHYRX_HE_SIG_B2_OFDMA_H_
#define _PHYRX_HE_SIG_B2_OFDMA_H_
#if !defined(__ASSEMBLER__)
#endif

#include "he_sig_b2_ofdma_info.h"
#define NUM_OF_DWORDS_PHYRX_HE_SIG_B2_OFDMA 2

#define NUM_OF_QWORDS_PHYRX_HE_SIG_B2_OFDMA 1


struct phyrx_he_sig_b2_ofdma {
	     struct   he_sig_b2_ofdma_info                                      phyrx_he_sig_b2_ofdma_info_details;
};







#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_ID_OFFSET      0x0000000000000000
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_ID_LSB         0
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_ID_MSB         10
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_ID_MASK        0x00000000000007ff




#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_NSTS_OFFSET        0x0000000000000000
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_NSTS_LSB           11
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_NSTS_MSB           13
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_NSTS_MASK          0x0000000000003800




#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_TXBF_OFFSET        0x0000000000000000
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_TXBF_LSB           14
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_TXBF_MSB           14
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_TXBF_MASK          0x0000000000004000




#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_MCS_OFFSET     0x0000000000000000
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_MCS_LSB        15
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_MCS_MSB        18
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_MCS_MASK       0x0000000000078000




#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_DCM_OFFSET     0x0000000000000000
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_DCM_LSB        19
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_DCM_MSB        19
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_DCM_MASK       0x0000000000080000




#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_CODING_OFFSET  0x0000000000000000
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_CODING_LSB     20
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_CODING_MSB     20
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_STA_CODING_MASK    0x0000000000100000




#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_0_OFFSET  0x0000000000000000
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_0_LSB     21
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_0_MSB     30
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_0_MASK    0x000000007fe00000




#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_OFFSET 0x0000000000000000
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_LSB 31
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MSB 31
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_RX_INTEGRITY_CHECK_PASSED_MASK 0x0000000080000000




#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_USER_ORDER_OFFSET  0x0000000000000000
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_USER_ORDER_LSB     32
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_USER_ORDER_MSB     39
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_USER_ORDER_MASK    0x000000ff00000000




#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_1A_OFFSET 0x0000000000000000
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_1A_LSB    40
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_1A_MSB    63
#define PHYRX_HE_SIG_B2_OFDMA_PHYRX_HE_SIG_B2_OFDMA_INFO_DETAILS_RESERVED_1A_MASK   0xffffff0000000000



#endif

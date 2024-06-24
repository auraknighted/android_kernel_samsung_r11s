/*
 * Indices for 802.11 a/b/g/n/ac 1-3 chain symmetric transmit rates
 *
 * Copyright (C) 2021, Broadcom.
 *
 *      Unless you and Broadcom execute a separate written software license
 * agreement governing use of this software, this software is licensed to you
 * under the terms of the GNU General Public License version 2 (the "GPL"),
 * available at http://www.broadcom.com/licenses/GPLv2.php, with the
 * following added to such license:
 *
 *      As a special exception, the copyright holders of this software give you
 * permission to link this software with independent modules, and to copy and
 * distribute the resulting executable under terms of your choice, provided that
 * you also meet, for each linked independent module, the terms and conditions of
 * the license of that module.  An independent module is a module which is not
 * derived from this software.  The special exception does not apply to any
 * modifications of the software.
 *
 *
 * <<Broadcom-WL-IPTag/Dual:>>
 */

#ifndef _bcmwifi_rates_h_
#define _bcmwifi_rates_h_

#include <typedefs.h>

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#define WL_RATESET_SZ_DSSS		4
#define WL_RATESET_SZ_OFDM		8
#define WL_RATESET_SZ_HT_MCS		8
#define WL_RATESET_SZ_VHT_MCS		10
#define WL_RATESET_SZ_VHT_MCS_P		12	/* 10 VHT rates + 2 proprietary rates */
#define WL_RATESET_SZ_HE_MCS		12	/* 12 HE rates (mcs 0-11) */
#define WL_RATESET_SZ_EHT_MCS		14u	/* 14 EHT rates (mcs 0-13) */

#define WL_RATESET_SZ_HT_IOCTL		8	/* MAC histogram, compatibility with wl utility */

#define WL_TX_CHAINS_MAX		4

#define WL_RATE_DISABLED		(-128) /* Power value corresponding to unsupported rate */

/* Transmit channel bandwidths */
typedef enum wl_tx_bw {
	WL_TX_BW_20,
	WL_TX_BW_40,
	WL_TX_BW_80,
	WL_TX_BW_20IN40,
	WL_TX_BW_20IN80,
	WL_TX_BW_40IN80,
	WL_TX_BW_160,
	WL_TX_BW_20IN160,
	WL_TX_BW_40IN160,
	WL_TX_BW_80IN160,
	WL_TX_BW_240,
	WL_TX_BW_20IN240,
	WL_TX_BW_40IN240,
	WL_TX_BW_80IN240,
	WL_TX_BW_160IN240,
	WL_TX_BW_320,
	WL_TX_BW_20IN320,
	WL_TX_BW_40IN320,
	WL_TX_BW_80IN320,
	WL_TX_BW_160IN320,
	WL_TX_BW_ALL
} wl_tx_bw_t;

/*
 * Transmit modes.
 * Not all modes are listed here, only those required for disambiguation. e.g. SPEXP is not listed
 */
typedef enum wl_tx_mode {
	WL_TX_MODE_NONE,
	WL_TX_MODE_STBC,
	WL_TX_MODE_CDD,
	WL_TX_MODE_TXBF,
	WL_NUM_TX_MODES
} wl_tx_mode_t;

/* Number of transmit chains */
typedef enum wl_tx_chains {
	WL_TX_CHAINS_1 = 1,
	WL_TX_CHAINS_2,
	WL_TX_CHAINS_3,
	WL_TX_CHAINS_4
} wl_tx_chains_t;

/* Number of transmit streams */
typedef enum wl_tx_nss {
	WL_TX_NSS_1 = 1,
	WL_TX_NSS_2,
	WL_TX_NSS_3,
	WL_TX_NSS_4
} wl_tx_nss_t;

/* 802.11ax rate types */
typedef enum wl_he_rate_type {
	WL_HE_RT_SU = 0,
	WL_HE_RT_RU26 = 1,
	WL_HE_RT_RU52 = 2,
	WL_HE_RT_RU106 = 3,
	WL_HE_RT_UB = 4,
	WL_HE_RT_LUB = 5,
	WL_HE_RT_RU242 = 6,
	WL_HE_RT_RU484 = 7,
	WL_HE_RT_RU996 = 8
} wl_he_rate_type_t;

#define WL_NUM_HE_RT 9u

/* This enum maps each rate to a CLM index
 * 802.11ax OFDMA (RU) rates are in separate enum
 */

typedef enum clm_rates {
	/************
	* 1 chain  *
	************
	*/

	/* 1 Stream */
	WL_RATE_1X1_DSSS_1            = 0,
	WL_RATE_1X1_DSSS_2            = 1,
	WL_RATE_1X1_DSSS_5_5          = 2,
	WL_RATE_1X1_DSSS_11           = 3,

	WL_RATE_1X1_OFDM_6            = 4,
	WL_RATE_1X1_OFDM_9            = 5,
	WL_RATE_1X1_OFDM_12           = 6,
	WL_RATE_1X1_OFDM_18           = 7,
	WL_RATE_1X1_OFDM_24           = 8,
	WL_RATE_1X1_OFDM_36           = 9,
	WL_RATE_1X1_OFDM_48           = 10,
	WL_RATE_1X1_OFDM_54           = 11,

	WL_RATE_1X1_MCS0              = 12,
	WL_RATE_1X1_MCS1              = 13,
	WL_RATE_1X1_MCS2              = 14,
	WL_RATE_1X1_MCS3              = 15,
	WL_RATE_1X1_MCS4              = 16,
	WL_RATE_1X1_MCS5              = 17,
	WL_RATE_1X1_MCS6              = 18,
	WL_RATE_1X1_MCS7              = 19,
	WL_RATE_P_1X1_MCS87           = 20,
	WL_RATE_P_1X1_MCS88           = 21,

	WL_RATE_1X1_VHT0SS1           = 12,
	WL_RATE_1X1_VHT1SS1           = 13,
	WL_RATE_1X1_VHT2SS1           = 14,
	WL_RATE_1X1_VHT3SS1           = 15,
	WL_RATE_1X1_VHT4SS1           = 16,
	WL_RATE_1X1_VHT5SS1           = 17,
	WL_RATE_1X1_VHT6SS1           = 18,
	WL_RATE_1X1_VHT7SS1           = 19,
	WL_RATE_1X1_VHT8SS1           = 20,
	WL_RATE_1X1_VHT9SS1           = 21,
	WL_RATE_P_1X1_VHT10SS1        = 22,
	WL_RATE_P_1X1_VHT11SS1        = 23,

	WL_RATE_1X1_HE0SS1            = 24,
	WL_RATE_1X1_HE1SS1            = 25,
	WL_RATE_1X1_HE2SS1            = 26,
	WL_RATE_1X1_HE3SS1            = 27,
	WL_RATE_1X1_HE4SS1            = 28,
	WL_RATE_1X1_HE5SS1            = 29,
	WL_RATE_1X1_HE6SS1            = 30,
	WL_RATE_1X1_HE7SS1            = 31,
	WL_RATE_1X1_HE8SS1            = 32,
	WL_RATE_1X1_HE9SS1            = 33,
	WL_RATE_1X1_HE10SS1           = 34,
	WL_RATE_1X1_HE11SS1           = 35,

	/************
	* 2 chains *
	************
	*/

	/* 1 Stream expanded + 1 */
	WL_RATE_1X2_DSSS_1            = 36,
	WL_RATE_1X2_DSSS_2            = 37,
	WL_RATE_1X2_DSSS_5_5          = 38,
	WL_RATE_1X2_DSSS_11           = 39,

	WL_RATE_1X2_CDD_OFDM_6        = 40,
	WL_RATE_1X2_CDD_OFDM_9        = 41,
	WL_RATE_1X2_CDD_OFDM_12       = 42,
	WL_RATE_1X2_CDD_OFDM_18       = 43,
	WL_RATE_1X2_CDD_OFDM_24       = 44,
	WL_RATE_1X2_CDD_OFDM_36       = 45,
	WL_RATE_1X2_CDD_OFDM_48       = 46,
	WL_RATE_1X2_CDD_OFDM_54       = 47,

	WL_RATE_1X2_CDD_MCS0          = 48,
	WL_RATE_1X2_CDD_MCS1          = 49,
	WL_RATE_1X2_CDD_MCS2          = 50,
	WL_RATE_1X2_CDD_MCS3          = 51,
	WL_RATE_1X2_CDD_MCS4          = 52,
	WL_RATE_1X2_CDD_MCS5          = 53,
	WL_RATE_1X2_CDD_MCS6          = 54,
	WL_RATE_1X2_CDD_MCS7          = 55,
	WL_RATE_P_1X2_CDD_MCS87       = 56,
	WL_RATE_P_1X2_CDD_MCS88       = 57,

	WL_RATE_1X2_VHT0SS1           = 48,
	WL_RATE_1X2_VHT1SS1           = 49,
	WL_RATE_1X2_VHT2SS1           = 50,
	WL_RATE_1X2_VHT3SS1           = 51,
	WL_RATE_1X2_VHT4SS1           = 52,
	WL_RATE_1X2_VHT5SS1           = 53,
	WL_RATE_1X2_VHT6SS1           = 54,
	WL_RATE_1X2_VHT7SS1           = 55,
	WL_RATE_1X2_VHT8SS1           = 56,
	WL_RATE_1X2_VHT9SS1           = 57,
	WL_RATE_P_1X2_VHT10SS1        = 58,
	WL_RATE_P_1X2_VHT11SS1        = 59,

	WL_RATE_1X2_HE0SS1            = 60,
	WL_RATE_1X2_HE1SS1            = 61,
	WL_RATE_1X2_HE2SS1            = 62,
	WL_RATE_1X2_HE3SS1            = 63,
	WL_RATE_1X2_HE4SS1            = 64,
	WL_RATE_1X2_HE5SS1            = 65,
	WL_RATE_1X2_HE6SS1            = 66,
	WL_RATE_1X2_HE7SS1            = 67,
	WL_RATE_1X2_HE8SS1            = 68,
	WL_RATE_1X2_HE9SS1            = 69,
	WL_RATE_1X2_HE10SS1           = 70,
	WL_RATE_1X2_HE11SS1           = 71,

	/* 2 Streams */
	WL_RATE_2X2_STBC_MCS0         = 72,
	WL_RATE_2X2_STBC_MCS1         = 73,
	WL_RATE_2X2_STBC_MCS2         = 74,
	WL_RATE_2X2_STBC_MCS3         = 75,
	WL_RATE_2X2_STBC_MCS4         = 76,
	WL_RATE_2X2_STBC_MCS5         = 77,
	WL_RATE_2X2_STBC_MCS6         = 78,
	WL_RATE_2X2_STBC_MCS7         = 79,
	WL_RATE_P_2X2_STBC_MCS87      = 80,
	WL_RATE_P_2X2_STBC_MCS88      = 81,

	WL_RATE_2X2_STBC_VHT0SS1      = 72,
	WL_RATE_2X2_STBC_VHT1SS1      = 73,
	WL_RATE_2X2_STBC_VHT2SS1      = 74,
	WL_RATE_2X2_STBC_VHT3SS1      = 75,
	WL_RATE_2X2_STBC_VHT4SS1      = 76,
	WL_RATE_2X2_STBC_VHT5SS1      = 77,
	WL_RATE_2X2_STBC_VHT6SS1      = 78,
	WL_RATE_2X2_STBC_VHT7SS1      = 79,
	WL_RATE_2X2_STBC_VHT8SS1      = 80,
	WL_RATE_2X2_STBC_VHT9SS1      = 81,
	WL_RATE_P_2X2_STBC_VHT10SS1   = 82,
	WL_RATE_P_2X2_STBC_VHT11SS1   = 83,

	WL_RATE_2X2_SDM_MCS8          = 84,
	WL_RATE_2X2_SDM_MCS9          = 85,
	WL_RATE_2X2_SDM_MCS10         = 86,
	WL_RATE_2X2_SDM_MCS11         = 87,
	WL_RATE_2X2_SDM_MCS12         = 88,
	WL_RATE_2X2_SDM_MCS13         = 89,
	WL_RATE_2X2_SDM_MCS14         = 90,
	WL_RATE_2X2_SDM_MCS15         = 91,
	WL_RATE_P_2X2_SDM_MCS99       = 92,
	WL_RATE_P_2X2_SDM_MCS100      = 93,

	WL_RATE_2X2_VHT0SS2           = 84,
	WL_RATE_2X2_VHT1SS2           = 85,
	WL_RATE_2X2_VHT2SS2           = 86,
	WL_RATE_2X2_VHT3SS2           = 87,
	WL_RATE_2X2_VHT4SS2           = 88,
	WL_RATE_2X2_VHT5SS2           = 89,
	WL_RATE_2X2_VHT6SS2           = 90,
	WL_RATE_2X2_VHT7SS2           = 91,
	WL_RATE_2X2_VHT8SS2           = 92,
	WL_RATE_2X2_VHT9SS2           = 93,
	WL_RATE_P_2X2_VHT10SS2        = 94,
	WL_RATE_P_2X2_VHT11SS2        = 95,

	WL_RATE_2X2_HE0SS2            = 96,
	WL_RATE_2X2_HE1SS2            = 97,
	WL_RATE_2X2_HE2SS2            = 98,
	WL_RATE_2X2_HE3SS2            = 99,
	WL_RATE_2X2_HE4SS2            = 100,
	WL_RATE_2X2_HE5SS2            = 101,
	WL_RATE_2X2_HE6SS2            = 102,
	WL_RATE_2X2_HE7SS2            = 103,
	WL_RATE_2X2_HE8SS2            = 104,
	WL_RATE_2X2_HE9SS2            = 105,
	WL_RATE_2X2_HE10SS2           = 106,
	WL_RATE_2X2_HE11SS2           = 107,

	/****************************
	 * TX Beamforming, 2 chains *
	 ****************************
	 */

	/* 1 Stream expanded + 1 */
	WL_RATE_1X2_TXBF_OFDM_6       = 108,
	WL_RATE_1X2_TXBF_OFDM_9       = 109,
	WL_RATE_1X2_TXBF_OFDM_12      = 110,
	WL_RATE_1X2_TXBF_OFDM_18      = 111,
	WL_RATE_1X2_TXBF_OFDM_24      = 112,
	WL_RATE_1X2_TXBF_OFDM_36      = 113,
	WL_RATE_1X2_TXBF_OFDM_48      = 114,
	WL_RATE_1X2_TXBF_OFDM_54      = 115,

	WL_RATE_1X2_TXBF_MCS0         = 116,
	WL_RATE_1X2_TXBF_MCS1         = 117,
	WL_RATE_1X2_TXBF_MCS2         = 118,
	WL_RATE_1X2_TXBF_MCS3         = 119,
	WL_RATE_1X2_TXBF_MCS4         = 120,
	WL_RATE_1X2_TXBF_MCS5         = 121,
	WL_RATE_1X2_TXBF_MCS6         = 122,
	WL_RATE_1X2_TXBF_MCS7         = 123,
	WL_RATE_P_1X2_TXBF_MCS87      = 124,
	WL_RATE_P_1X2_TXBF_MCS88      = 125,

	WL_RATE_1X2_TXBF_VHT0SS1      = 116,
	WL_RATE_1X2_TXBF_VHT1SS1      = 117,
	WL_RATE_1X2_TXBF_VHT2SS1      = 118,
	WL_RATE_1X2_TXBF_VHT3SS1      = 119,
	WL_RATE_1X2_TXBF_VHT4SS1      = 120,
	WL_RATE_1X2_TXBF_VHT5SS1      = 121,
	WL_RATE_1X2_TXBF_VHT6SS1      = 122,
	WL_RATE_1X2_TXBF_VHT7SS1      = 123,
	WL_RATE_1X2_TXBF_VHT8SS1      = 124,
	WL_RATE_1X2_TXBF_VHT9SS1      = 125,
	WL_RATE_P_1X2_TXBF_VHT10SS1   = 126,
	WL_RATE_P_1X2_TXBF_VHT11SS1   = 127,

	WL_RATE_1X2_TXBF_HE0SS1       = 128,
	WL_RATE_1X2_TXBF_HE1SS1       = 129,
	WL_RATE_1X2_TXBF_HE2SS1       = 130,
	WL_RATE_1X2_TXBF_HE3SS1       = 131,
	WL_RATE_1X2_TXBF_HE4SS1       = 132,
	WL_RATE_1X2_TXBF_HE5SS1       = 133,
	WL_RATE_1X2_TXBF_HE6SS1       = 134,
	WL_RATE_1X2_TXBF_HE7SS1       = 135,
	WL_RATE_1X2_TXBF_HE8SS1       = 136,
	WL_RATE_1X2_TXBF_HE9SS1       = 137,
	WL_RATE_1X2_TXBF_HE10SS1      = 138,
	WL_RATE_1X2_TXBF_HE11SS1      = 139,

	/* 2 Streams */
	WL_RATE_2X2_TXBF_SDM_MCS8     = 140,
	WL_RATE_2X2_TXBF_SDM_MCS9     = 141,
	WL_RATE_2X2_TXBF_SDM_MCS10    = 142,
	WL_RATE_2X2_TXBF_SDM_MCS11    = 143,
	WL_RATE_2X2_TXBF_SDM_MCS12    = 144,
	WL_RATE_2X2_TXBF_SDM_MCS13    = 145,
	WL_RATE_2X2_TXBF_SDM_MCS14    = 146,
	WL_RATE_2X2_TXBF_SDM_MCS15    = 147,
	WL_RATE_P_2X2_TXBF_SDM_MCS99  = 148,
	WL_RATE_P_2X2_TXBF_SDM_MCS100 = 149,

	WL_RATE_2X2_TXBF_VHT0SS2      = 140,
	WL_RATE_2X2_TXBF_VHT1SS2      = 141,
	WL_RATE_2X2_TXBF_VHT2SS2      = 142,
	WL_RATE_2X2_TXBF_VHT3SS2      = 143,
	WL_RATE_2X2_TXBF_VHT4SS2      = 144,
	WL_RATE_2X2_TXBF_VHT5SS2      = 145,
	WL_RATE_2X2_TXBF_VHT6SS2      = 146,
	WL_RATE_2X2_TXBF_VHT7SS2      = 147,
	WL_RATE_2X2_TXBF_VHT8SS2      = 148,
	WL_RATE_2X2_TXBF_VHT9SS2      = 149,
	WL_RATE_P_2X2_TXBF_VHT10SS2   = 150,
	WL_RATE_P_2X2_TXBF_VHT11SS2   = 151,

	WL_RATE_2X2_TXBF_HE0SS2       = 152,
	WL_RATE_2X2_TXBF_HE1SS2       = 153,
	WL_RATE_2X2_TXBF_HE2SS2       = 154,
	WL_RATE_2X2_TXBF_HE3SS2       = 155,
	WL_RATE_2X2_TXBF_HE4SS2       = 156,
	WL_RATE_2X2_TXBF_HE5SS2       = 157,
	WL_RATE_2X2_TXBF_HE6SS2       = 158,
	WL_RATE_2X2_TXBF_HE7SS2       = 159,
	WL_RATE_2X2_TXBF_HE8SS2       = 160,
	WL_RATE_2X2_TXBF_HE9SS2       = 161,
	WL_RATE_2X2_TXBF_HE10SS2      = 162,
	WL_RATE_2X2_TXBF_HE11SS2      = 163,

	/************
	* 3 chains *
	************
	*/

	/* 1 Stream expanded + 2 */
	WL_RATE_1X3_DSSS_1            = 164,
	WL_RATE_1X3_DSSS_2            = 165,
	WL_RATE_1X3_DSSS_5_5          = 166,
	WL_RATE_1X3_DSSS_11           = 167,

	WL_RATE_1X3_CDD_OFDM_6        = 168,
	WL_RATE_1X3_CDD_OFDM_9        = 169,
	WL_RATE_1X3_CDD_OFDM_12       = 170,
	WL_RATE_1X3_CDD_OFDM_18       = 171,
	WL_RATE_1X3_CDD_OFDM_24       = 172,
	WL_RATE_1X3_CDD_OFDM_36       = 173,
	WL_RATE_1X3_CDD_OFDM_48       = 174,
	WL_RATE_1X3_CDD_OFDM_54       = 175,

	WL_RATE_1X3_CDD_MCS0          = 176,
	WL_RATE_1X3_CDD_MCS1          = 177,
	WL_RATE_1X3_CDD_MCS2          = 178,
	WL_RATE_1X3_CDD_MCS3          = 179,
	WL_RATE_1X3_CDD_MCS4          = 180,
	WL_RATE_1X3_CDD_MCS5          = 181,
	WL_RATE_1X3_CDD_MCS6          = 182,
	WL_RATE_1X3_CDD_MCS7          = 183,
	WL_RATE_P_1X3_CDD_MCS87       = 184,
	WL_RATE_P_1X3_CDD_MCS88       = 185,

	WL_RATE_1X3_VHT0SS1           = 176,
	WL_RATE_1X3_VHT1SS1           = 177,
	WL_RATE_1X3_VHT2SS1           = 178,
	WL_RATE_1X3_VHT3SS1           = 179,
	WL_RATE_1X3_VHT4SS1           = 180,
	WL_RATE_1X3_VHT5SS1           = 181,
	WL_RATE_1X3_VHT6SS1           = 182,
	WL_RATE_1X3_VHT7SS1           = 183,
	WL_RATE_1X3_VHT8SS1           = 184,
	WL_RATE_1X3_VHT9SS1           = 185,
	WL_RATE_P_1X3_VHT10SS1        = 186,
	WL_RATE_P_1X3_VHT11SS1        = 187,

	WL_RATE_1X3_HE0SS1            = 188,
	WL_RATE_1X3_HE1SS1            = 189,
	WL_RATE_1X3_HE2SS1            = 190,
	WL_RATE_1X3_HE3SS1            = 191,
	WL_RATE_1X3_HE4SS1            = 192,
	WL_RATE_1X3_HE5SS1            = 193,
	WL_RATE_1X3_HE6SS1            = 194,
	WL_RATE_1X3_HE7SS1            = 195,
	WL_RATE_1X3_HE8SS1            = 196,
	WL_RATE_1X3_HE9SS1            = 197,
	WL_RATE_1X3_HE10SS1           = 198,
	WL_RATE_1X3_HE11SS1           = 199,

	/* 2 Streams expanded + 1 */
	WL_RATE_2X3_STBC_MCS0         = 200,
	WL_RATE_2X3_STBC_MCS1         = 201,
	WL_RATE_2X3_STBC_MCS2         = 202,
	WL_RATE_2X3_STBC_MCS3         = 203,
	WL_RATE_2X3_STBC_MCS4         = 204,
	WL_RATE_2X3_STBC_MCS5         = 205,
	WL_RATE_2X3_STBC_MCS6         = 206,
	WL_RATE_2X3_STBC_MCS7         = 207,
	WL_RATE_P_2X3_STBC_MCS87      = 208,
	WL_RATE_P_2X3_STBC_MCS88      = 209,

	WL_RATE_2X3_STBC_VHT0SS1      = 200,
	WL_RATE_2X3_STBC_VHT1SS1      = 201,
	WL_RATE_2X3_STBC_VHT2SS1      = 202,
	WL_RATE_2X3_STBC_VHT3SS1      = 203,
	WL_RATE_2X3_STBC_VHT4SS1      = 204,
	WL_RATE_2X3_STBC_VHT5SS1      = 205,
	WL_RATE_2X3_STBC_VHT6SS1      = 206,
	WL_RATE_2X3_STBC_VHT7SS1      = 207,
	WL_RATE_2X3_STBC_VHT8SS1      = 208,
	WL_RATE_2X3_STBC_VHT9SS1      = 209,
	WL_RATE_P_2X3_STBC_VHT10SS1   = 210,
	WL_RATE_P_2X3_STBC_VHT11SS1   = 211,

	WL_RATE_2X3_SDM_MCS8          = 212,
	WL_RATE_2X3_SDM_MCS9          = 213,
	WL_RATE_2X3_SDM_MCS10         = 214,
	WL_RATE_2X3_SDM_MCS11         = 215,
	WL_RATE_2X3_SDM_MCS12         = 216,
	WL_RATE_2X3_SDM_MCS13         = 217,
	WL_RATE_2X3_SDM_MCS14         = 218,
	WL_RATE_2X3_SDM_MCS15         = 219,
	WL_RATE_P_2X3_SDM_MCS99       = 220,
	WL_RATE_P_2X3_SDM_MCS100      = 221,

	WL_RATE_2X3_VHT0SS2           = 212,
	WL_RATE_2X3_VHT1SS2           = 213,
	WL_RATE_2X3_VHT2SS2           = 214,
	WL_RATE_2X3_VHT3SS2           = 215,
	WL_RATE_2X3_VHT4SS2           = 216,
	WL_RATE_2X3_VHT5SS2           = 217,
	WL_RATE_2X3_VHT6SS2           = 218,
	WL_RATE_2X3_VHT7SS2           = 219,
	WL_RATE_2X3_VHT8SS2           = 220,
	WL_RATE_2X3_VHT9SS2           = 221,
	WL_RATE_P_2X3_VHT10SS2        = 222,
	WL_RATE_P_2X3_VHT11SS2        = 223,

	WL_RATE_2X3_HE0SS2            = 224,
	WL_RATE_2X3_HE1SS2            = 225,
	WL_RATE_2X3_HE2SS2            = 226,
	WL_RATE_2X3_HE3SS2            = 227,
	WL_RATE_2X3_HE4SS2            = 228,
	WL_RATE_2X3_HE5SS2            = 229,
	WL_RATE_2X3_HE6SS2            = 230,
	WL_RATE_2X3_HE7SS2            = 231,
	WL_RATE_2X3_HE8SS2            = 232,
	WL_RATE_2X3_HE9SS2            = 233,
	WL_RATE_2X3_HE10SS2           = 234,
	WL_RATE_2X3_HE11SS2           = 235,

	/* 3 Streams */
	WL_RATE_3X3_SDM_MCS16         = 236,
	WL_RATE_3X3_SDM_MCS17         = 237,
	WL_RATE_3X3_SDM_MCS18         = 238,
	WL_RATE_3X3_SDM_MCS19         = 239,
	WL_RATE_3X3_SDM_MCS20         = 240,
	WL_RATE_3X3_SDM_MCS21         = 241,
	WL_RATE_3X3_SDM_MCS22         = 242,
	WL_RATE_3X3_SDM_MCS23         = 243,
	WL_RATE_P_3X3_SDM_MCS101      = 244,
	WL_RATE_P_3X3_SDM_MCS102      = 245,

	WL_RATE_3X3_VHT0SS3           = 236,
	WL_RATE_3X3_VHT1SS3           = 237,
	WL_RATE_3X3_VHT2SS3           = 238,
	WL_RATE_3X3_VHT3SS3           = 239,
	WL_RATE_3X3_VHT4SS3           = 240,
	WL_RATE_3X3_VHT5SS3           = 241,
	WL_RATE_3X3_VHT6SS3           = 242,
	WL_RATE_3X3_VHT7SS3           = 243,
	WL_RATE_3X3_VHT8SS3           = 244,
	WL_RATE_3X3_VHT9SS3           = 245,
	WL_RATE_P_3X3_VHT10SS3        = 246,
	WL_RATE_P_3X3_VHT11SS3        = 247,

	WL_RATE_3X3_HE0SS3            = 248,
	WL_RATE_3X3_HE1SS3            = 249,
	WL_RATE_3X3_HE2SS3            = 250,
	WL_RATE_3X3_HE3SS3            = 251,
	WL_RATE_3X3_HE4SS3            = 252,
	WL_RATE_3X3_HE5SS3            = 253,
	WL_RATE_3X3_HE6SS3            = 254,
	WL_RATE_3X3_HE7SS3            = 255,
	WL_RATE_3X3_HE8SS3            = 256,
	WL_RATE_3X3_HE9SS3            = 257,
	WL_RATE_3X3_HE10SS3           = 258,
	WL_RATE_3X3_HE11SS3           = 259,

	/****************************
	 * TX Beamforming, 3 chains *
	 ****************************
	 */

	/* 1 Stream expanded + 2 */
	WL_RATE_1X3_TXBF_OFDM_6       = 260,
	WL_RATE_1X3_TXBF_OFDM_9       = 261,
	WL_RATE_1X3_TXBF_OFDM_12      = 262,
	WL_RATE_1X3_TXBF_OFDM_18      = 263,
	WL_RATE_1X3_TXBF_OFDM_24      = 264,
	WL_RATE_1X3_TXBF_OFDM_36      = 265,
	WL_RATE_1X3_TXBF_OFDM_48      = 266,
	WL_RATE_1X3_TXBF_OFDM_54      = 267,

	WL_RATE_1X3_TXBF_MCS0         = 268,
	WL_RATE_1X3_TXBF_MCS1         = 269,
	WL_RATE_1X3_TXBF_MCS2         = 270,
	WL_RATE_1X3_TXBF_MCS3         = 271,
	WL_RATE_1X3_TXBF_MCS4         = 272,
	WL_RATE_1X3_TXBF_MCS5         = 273,
	WL_RATE_1X3_TXBF_MCS6         = 274,
	WL_RATE_1X3_TXBF_MCS7         = 275,
	WL_RATE_P_1X3_TXBF_MCS87      = 276,
	WL_RATE_P_1X3_TXBF_MCS88      = 277,

	WL_RATE_1X3_TXBF_VHT0SS1      = 268,
	WL_RATE_1X3_TXBF_VHT1SS1      = 269,
	WL_RATE_1X3_TXBF_VHT2SS1      = 270,
	WL_RATE_1X3_TXBF_VHT3SS1      = 271,
	WL_RATE_1X3_TXBF_VHT4SS1      = 272,
	WL_RATE_1X3_TXBF_VHT5SS1      = 273,
	WL_RATE_1X3_TXBF_VHT6SS1      = 274,
	WL_RATE_1X3_TXBF_VHT7SS1      = 275,
	WL_RATE_1X3_TXBF_VHT8SS1      = 276,
	WL_RATE_1X3_TXBF_VHT9SS1      = 277,
	WL_RATE_P_1X3_TXBF_VHT10SS1   = 278,
	WL_RATE_P_1X3_TXBF_VHT11SS1   = 279,

	WL_RATE_1X3_TXBF_HE0SS1       = 280,
	WL_RATE_1X3_TXBF_HE1SS1       = 281,
	WL_RATE_1X3_TXBF_HE2SS1       = 282,
	WL_RATE_1X3_TXBF_HE3SS1       = 283,
	WL_RATE_1X3_TXBF_HE4SS1       = 284,
	WL_RATE_1X3_TXBF_HE5SS1       = 285,
	WL_RATE_1X3_TXBF_HE6SS1       = 286,
	WL_RATE_1X3_TXBF_HE7SS1       = 287,
	WL_RATE_1X3_TXBF_HE8SS1       = 288,
	WL_RATE_1X3_TXBF_HE9SS1       = 289,
	WL_RATE_1X3_TXBF_HE10SS1      = 290,
	WL_RATE_1X3_TXBF_HE11SS1      = 291,

	/* 2 Streams expanded + 1 */
	WL_RATE_2X3_TXBF_SDM_MCS8     = 292,
	WL_RATE_2X3_TXBF_SDM_MCS9     = 293,
	WL_RATE_2X3_TXBF_SDM_MCS10    = 294,
	WL_RATE_2X3_TXBF_SDM_MCS11    = 295,
	WL_RATE_2X3_TXBF_SDM_MCS12    = 296,
	WL_RATE_2X3_TXBF_SDM_MCS13    = 297,
	WL_RATE_2X3_TXBF_SDM_MCS14    = 298,
	WL_RATE_2X3_TXBF_SDM_MCS15    = 299,
	WL_RATE_P_2X3_TXBF_SDM_MCS99  = 300,
	WL_RATE_P_2X3_TXBF_SDM_MCS100 = 301,

	WL_RATE_2X3_TXBF_VHT0SS2      = 292,
	WL_RATE_2X3_TXBF_VHT1SS2      = 293,
	WL_RATE_2X3_TXBF_VHT2SS2      = 294,
	WL_RATE_2X3_TXBF_VHT3SS2      = 295,
	WL_RATE_2X3_TXBF_VHT4SS2      = 296,
	WL_RATE_2X3_TXBF_VHT5SS2      = 297,
	WL_RATE_2X3_TXBF_VHT6SS2      = 298,
	WL_RATE_2X3_TXBF_VHT7SS2      = 299,
	WL_RATE_2X3_TXBF_VHT8SS2      = 300,
	WL_RATE_2X3_TXBF_VHT9SS2      = 301,
	WL_RATE_P_2X3_TXBF_VHT10SS2   = 302,
	WL_RATE_P_2X3_TXBF_VHT11SS2   = 303,

	WL_RATE_2X3_TXBF_HE0SS2       = 304,
	WL_RATE_2X3_TXBF_HE1SS2       = 305,
	WL_RATE_2X3_TXBF_HE2SS2       = 306,
	WL_RATE_2X3_TXBF_HE3SS2       = 307,
	WL_RATE_2X3_TXBF_HE4SS2       = 308,
	WL_RATE_2X3_TXBF_HE5SS2       = 309,
	WL_RATE_2X3_TXBF_HE6SS2       = 310,
	WL_RATE_2X3_TXBF_HE7SS2       = 311,
	WL_RATE_2X3_TXBF_HE8SS2       = 312,
	WL_RATE_2X3_TXBF_HE9SS2       = 313,
	WL_RATE_2X3_TXBF_HE10SS2      = 314,
	WL_RATE_2X3_TXBF_HE11SS2      = 315,

	/* 3 Streams */
	WL_RATE_3X3_TXBF_SDM_MCS16    = 316,
	WL_RATE_3X3_TXBF_SDM_MCS17    = 317,
	WL_RATE_3X3_TXBF_SDM_MCS18    = 318,
	WL_RATE_3X3_TXBF_SDM_MCS19    = 319,
	WL_RATE_3X3_TXBF_SDM_MCS20    = 320,
	WL_RATE_3X3_TXBF_SDM_MCS21    = 321,
	WL_RATE_3X3_TXBF_SDM_MCS22    = 322,
	WL_RATE_3X3_TXBF_SDM_MCS23    = 323,
	WL_RATE_P_3X3_TXBF_SDM_MCS101 = 324,
	WL_RATE_P_3X3_TXBF_SDM_MCS102 = 325,

	WL_RATE_3X3_TXBF_VHT0SS3      = 316,
	WL_RATE_3X3_TXBF_VHT1SS3      = 317,
	WL_RATE_3X3_TXBF_VHT2SS3      = 318,
	WL_RATE_3X3_TXBF_VHT3SS3      = 319,
	WL_RATE_3X3_TXBF_VHT4SS3      = 320,
	WL_RATE_3X3_TXBF_VHT5SS3      = 321,
	WL_RATE_3X3_TXBF_VHT6SS3      = 322,
	WL_RATE_3X3_TXBF_VHT7SS3      = 323,
	WL_RATE_3X3_TXBF_VHT8SS3      = 324,
	WL_RATE_3X3_TXBF_VHT9SS3      = 325,
	WL_RATE_P_3X3_TXBF_VHT10SS3   = 326,
	WL_RATE_P_3X3_TXBF_VHT11SS3   = 327,

	WL_RATE_3X3_TXBF_HE0SS3       = 328,
	WL_RATE_3X3_TXBF_HE1SS3       = 329,
	WL_RATE_3X3_TXBF_HE2SS3       = 330,
	WL_RATE_3X3_TXBF_HE3SS3       = 331,
	WL_RATE_3X3_TXBF_HE4SS3       = 332,
	WL_RATE_3X3_TXBF_HE5SS3       = 333,
	WL_RATE_3X3_TXBF_HE6SS3       = 334,
	WL_RATE_3X3_TXBF_HE7SS3       = 335,
	WL_RATE_3X3_TXBF_HE8SS3       = 336,
	WL_RATE_3X3_TXBF_HE9SS3       = 337,
	WL_RATE_3X3_TXBF_HE10SS3      = 338,
	WL_RATE_3X3_TXBF_HE11SS3      = 339,

	/************
	* 4 chains *
	************
	*/

	/* 1 Stream expanded + 3 */
	WL_RATE_1X4_DSSS_1            = 340,
	WL_RATE_1X4_DSSS_2            = 341,
	WL_RATE_1X4_DSSS_5_5          = 342,
	WL_RATE_1X4_DSSS_11           = 343,

	WL_RATE_1X4_CDD_OFDM_6        = 344,
	WL_RATE_1X4_CDD_OFDM_9        = 345,
	WL_RATE_1X4_CDD_OFDM_12       = 346,
	WL_RATE_1X4_CDD_OFDM_18       = 347,
	WL_RATE_1X4_CDD_OFDM_24       = 348,
	WL_RATE_1X4_CDD_OFDM_36       = 349,
	WL_RATE_1X4_CDD_OFDM_48       = 350,
	WL_RATE_1X4_CDD_OFDM_54       = 351,

	WL_RATE_1X4_CDD_MCS0          = 352,
	WL_RATE_1X4_CDD_MCS1          = 353,
	WL_RATE_1X4_CDD_MCS2          = 354,
	WL_RATE_1X4_CDD_MCS3          = 355,
	WL_RATE_1X4_CDD_MCS4          = 356,
	WL_RATE_1X4_CDD_MCS5          = 357,
	WL_RATE_1X4_CDD_MCS6          = 358,
	WL_RATE_1X4_CDD_MCS7          = 359,
	WL_RATE_P_1X4_CDD_MCS87       = 360,
	WL_RATE_P_1X4_CDD_MCS88       = 361,

	WL_RATE_1X4_VHT0SS1           = 352,
	WL_RATE_1X4_VHT1SS1           = 353,
	WL_RATE_1X4_VHT2SS1           = 354,
	WL_RATE_1X4_VHT3SS1           = 355,
	WL_RATE_1X4_VHT4SS1           = 356,
	WL_RATE_1X4_VHT5SS1           = 357,
	WL_RATE_1X4_VHT6SS1           = 358,
	WL_RATE_1X4_VHT7SS1           = 359,
	WL_RATE_1X4_VHT8SS1           = 360,
	WL_RATE_1X4_VHT9SS1           = 361,
	WL_RATE_P_1X4_VHT10SS1        = 362,
	WL_RATE_P_1X4_VHT11SS1        = 363,

	WL_RATE_1X4_HE0SS1            = 364,
	WL_RATE_1X4_HE1SS1            = 365,
	WL_RATE_1X4_HE2SS1            = 366,
	WL_RATE_1X4_HE3SS1            = 367,
	WL_RATE_1X4_HE4SS1            = 368,
	WL_RATE_1X4_HE5SS1            = 369,
	WL_RATE_1X4_HE6SS1            = 370,
	WL_RATE_1X4_HE7SS1            = 371,
	WL_RATE_1X4_HE8SS1            = 372,
	WL_RATE_1X4_HE9SS1            = 373,
	WL_RATE_1X4_HE10SS1           = 374,
	WL_RATE_1X4_HE11SS1           = 375,

	/* 2 Streams expanded + 2 */
	WL_RATE_2X4_STBC_MCS0         = 376,
	WL_RATE_2X4_STBC_MCS1         = 377,
	WL_RATE_2X4_STBC_MCS2         = 378,
	WL_RATE_2X4_STBC_MCS3         = 379,
	WL_RATE_2X4_STBC_MCS4         = 380,
	WL_RATE_2X4_STBC_MCS5         = 381,
	WL_RATE_2X4_STBC_MCS6         = 382,
	WL_RATE_2X4_STBC_MCS7         = 383,
	WL_RATE_P_2X4_STBC_MCS87      = 384,
	WL_RATE_P_2X4_STBC_MCS88      = 385,

	WL_RATE_2X4_STBC_VHT0SS1      = 376,
	WL_RATE_2X4_STBC_VHT1SS1      = 377,
	WL_RATE_2X4_STBC_VHT2SS1      = 378,
	WL_RATE_2X4_STBC_VHT3SS1      = 379,
	WL_RATE_2X4_STBC_VHT4SS1      = 380,
	WL_RATE_2X4_STBC_VHT5SS1      = 381,
	WL_RATE_2X4_STBC_VHT6SS1      = 382,
	WL_RATE_2X4_STBC_VHT7SS1      = 383,
	WL_RATE_2X4_STBC_VHT8SS1      = 384,
	WL_RATE_2X4_STBC_VHT9SS1      = 385,
	WL_RATE_P_2X4_STBC_VHT10SS1   = 386,
	WL_RATE_P_2X4_STBC_VHT11SS1   = 387,

	WL_RATE_2X4_SDM_MCS8          = 388,
	WL_RATE_2X4_SDM_MCS9          = 389,
	WL_RATE_2X4_SDM_MCS10         = 390,
	WL_RATE_2X4_SDM_MCS11         = 391,
	WL_RATE_2X4_SDM_MCS12         = 392,
	WL_RATE_2X4_SDM_MCS13         = 393,
	WL_RATE_2X4_SDM_MCS14         = 394,
	WL_RATE_2X4_SDM_MCS15         = 395,
	WL_RATE_P_2X4_SDM_MCS99       = 396,
	WL_RATE_P_2X4_SDM_MCS100      = 397,

	WL_RATE_2X4_VHT0SS2           = 388,
	WL_RATE_2X4_VHT1SS2           = 389,
	WL_RATE_2X4_VHT2SS2           = 390,
	WL_RATE_2X4_VHT3SS2           = 391,
	WL_RATE_2X4_VHT4SS2           = 392,
	WL_RATE_2X4_VHT5SS2           = 393,
	WL_RATE_2X4_VHT6SS2           = 394,
	WL_RATE_2X4_VHT7SS2           = 395,
	WL_RATE_2X4_VHT8SS2           = 396,
	WL_RATE_2X4_VHT9SS2           = 397,
	WL_RATE_P_2X4_VHT10SS2        = 398,
	WL_RATE_P_2X4_VHT11SS2        = 399,

	WL_RATE_2X4_HE0SS2            = 400,
	WL_RATE_2X4_HE1SS2            = 401,
	WL_RATE_2X4_HE2SS2            = 402,
	WL_RATE_2X4_HE3SS2            = 403,
	WL_RATE_2X4_HE4SS2            = 404,
	WL_RATE_2X4_HE5SS2            = 405,
	WL_RATE_2X4_HE6SS2            = 406,
	WL_RATE_2X4_HE7SS2            = 407,
	WL_RATE_2X4_HE8SS2            = 408,
	WL_RATE_2X4_HE9SS2            = 409,
	WL_RATE_2X4_HE10SS2           = 410,
	WL_RATE_2X4_HE11SS2           = 411,

	/* 3 Streams expanded + 1 */
	WL_RATE_3X4_SDM_MCS16         = 412,
	WL_RATE_3X4_SDM_MCS17         = 413,
	WL_RATE_3X4_SDM_MCS18         = 414,
	WL_RATE_3X4_SDM_MCS19         = 415,
	WL_RATE_3X4_SDM_MCS20         = 416,
	WL_RATE_3X4_SDM_MCS21         = 417,
	WL_RATE_3X4_SDM_MCS22         = 418,
	WL_RATE_3X4_SDM_MCS23         = 419,
	WL_RATE_P_3X4_SDM_MCS101      = 420,
	WL_RATE_P_3X4_SDM_MCS102      = 421,

	WL_RATE_3X4_VHT0SS3           = 412,
	WL_RATE_3X4_VHT1SS3           = 413,
	WL_RATE_3X4_VHT2SS3           = 414,
	WL_RATE_3X4_VHT3SS3           = 415,
	WL_RATE_3X4_VHT4SS3           = 416,
	WL_RATE_3X4_VHT5SS3           = 417,
	WL_RATE_3X4_VHT6SS3           = 418,
	WL_RATE_3X4_VHT7SS3           = 419,
	WL_RATE_3X4_VHT8SS3           = 420,
	WL_RATE_3X4_VHT9SS3           = 421,
	WL_RATE_P_3X4_VHT10SS3        = 422,
	WL_RATE_P_3X4_VHT11SS3        = 423,

	WL_RATE_3X4_HE0SS3            = 424,
	WL_RATE_3X4_HE1SS3            = 425,
	WL_RATE_3X4_HE2SS3            = 426,
	WL_RATE_3X4_HE3SS3            = 427,
	WL_RATE_3X4_HE4SS3            = 428,
	WL_RATE_3X4_HE5SS3            = 429,
	WL_RATE_3X4_HE6SS3            = 430,
	WL_RATE_3X4_HE7SS3            = 431,
	WL_RATE_3X4_HE8SS3            = 432,
	WL_RATE_3X4_HE9SS3            = 433,
	WL_RATE_3X4_HE10SS3           = 434,
	WL_RATE_3X4_HE11SS3           = 435,

	/* 4 Streams */
	WL_RATE_4X4_SDM_MCS24         = 436,
	WL_RATE_4X4_SDM_MCS25         = 437,
	WL_RATE_4X4_SDM_MCS26         = 438,
	WL_RATE_4X4_SDM_MCS27         = 439,
	WL_RATE_4X4_SDM_MCS28         = 440,
	WL_RATE_4X4_SDM_MCS29         = 441,
	WL_RATE_4X4_SDM_MCS30         = 442,
	WL_RATE_4X4_SDM_MCS31         = 443,
	WL_RATE_P_4X4_SDM_MCS103      = 444,
	WL_RATE_P_4X4_SDM_MCS104      = 445,

	WL_RATE_4X4_VHT0SS4           = 436,
	WL_RATE_4X4_VHT1SS4           = 437,
	WL_RATE_4X4_VHT2SS4           = 438,
	WL_RATE_4X4_VHT3SS4           = 439,
	WL_RATE_4X4_VHT4SS4           = 440,
	WL_RATE_4X4_VHT5SS4           = 441,
	WL_RATE_4X4_VHT6SS4           = 442,
	WL_RATE_4X4_VHT7SS4           = 443,
	WL_RATE_4X4_VHT8SS4           = 444,
	WL_RATE_4X4_VHT9SS4           = 445,
	WL_RATE_P_4X4_VHT10SS4        = 446,
	WL_RATE_P_4X4_VHT11SS4        = 447,

	WL_RATE_4X4_HE0SS4            = 448,
	WL_RATE_4X4_HE1SS4            = 449,
	WL_RATE_4X4_HE2SS4            = 450,
	WL_RATE_4X4_HE3SS4            = 451,
	WL_RATE_4X4_HE4SS4            = 452,
	WL_RATE_4X4_HE5SS4            = 453,
	WL_RATE_4X4_HE6SS4            = 454,
	WL_RATE_4X4_HE7SS4            = 455,
	WL_RATE_4X4_HE8SS4            = 456,
	WL_RATE_4X4_HE9SS4            = 457,
	WL_RATE_4X4_HE10SS4           = 458,
	WL_RATE_4X4_HE11SS4           = 459,

	/****************************
	 * TX Beamforming, 4 chains *
	 ****************************
	 */

	/* 1 Stream expanded + 3 */
	WL_RATE_1X4_TXBF_OFDM_6       = 460,
	WL_RATE_1X4_TXBF_OFDM_9       = 461,
	WL_RATE_1X4_TXBF_OFDM_12      = 462,
	WL_RATE_1X4_TXBF_OFDM_18      = 463,
	WL_RATE_1X4_TXBF_OFDM_24      = 464,
	WL_RATE_1X4_TXBF_OFDM_36      = 465,
	WL_RATE_1X4_TXBF_OFDM_48      = 466,
	WL_RATE_1X4_TXBF_OFDM_54      = 467,

	WL_RATE_1X4_TXBF_MCS0         = 468,
	WL_RATE_1X4_TXBF_MCS1         = 469,
	WL_RATE_1X4_TXBF_MCS2         = 470,
	WL_RATE_1X4_TXBF_MCS3         = 471,
	WL_RATE_1X4_TXBF_MCS4         = 472,
	WL_RATE_1X4_TXBF_MCS5         = 473,
	WL_RATE_1X4_TXBF_MCS6         = 474,
	WL_RATE_1X4_TXBF_MCS7         = 475,
	WL_RATE_P_1X4_TXBF_MCS87      = 476,
	WL_RATE_P_1X4_TXBF_MCS88      = 477,

	WL_RATE_1X4_TXBF_VHT0SS1      = 468,
	WL_RATE_1X4_TXBF_VHT1SS1      = 469,
	WL_RATE_1X4_TXBF_VHT2SS1      = 470,
	WL_RATE_1X4_TXBF_VHT3SS1      = 471,
	WL_RATE_1X4_TXBF_VHT4SS1      = 472,
	WL_RATE_1X4_TXBF_VHT5SS1      = 473,
	WL_RATE_1X4_TXBF_VHT6SS1      = 474,
	WL_RATE_1X4_TXBF_VHT7SS1      = 475,
	WL_RATE_1X4_TXBF_VHT8SS1      = 476,
	WL_RATE_1X4_TXBF_VHT9SS1      = 477,
	WL_RATE_P_1X4_TXBF_VHT10SS1   = 478,
	WL_RATE_P_1X4_TXBF_VHT11SS1   = 479,

	WL_RATE_1X4_TXBF_HE0SS1       = 480,
	WL_RATE_1X4_TXBF_HE1SS1       = 481,
	WL_RATE_1X4_TXBF_HE2SS1       = 482,
	WL_RATE_1X4_TXBF_HE3SS1       = 483,
	WL_RATE_1X4_TXBF_HE4SS1       = 484,
	WL_RATE_1X4_TXBF_HE5SS1       = 485,
	WL_RATE_1X4_TXBF_HE6SS1       = 486,
	WL_RATE_1X4_TXBF_HE7SS1       = 487,
	WL_RATE_1X4_TXBF_HE8SS1       = 488,
	WL_RATE_1X4_TXBF_HE9SS1       = 489,
	WL_RATE_1X4_TXBF_HE10SS1      = 490,
	WL_RATE_1X4_TXBF_HE11SS1      = 491,

	/* 2 Streams expanded + 2 */
	WL_RATE_2X4_TXBF_SDM_MCS8     = 492,
	WL_RATE_2X4_TXBF_SDM_MCS9     = 493,
	WL_RATE_2X4_TXBF_SDM_MCS10    = 494,
	WL_RATE_2X4_TXBF_SDM_MCS11    = 495,
	WL_RATE_2X4_TXBF_SDM_MCS12    = 496,
	WL_RATE_2X4_TXBF_SDM_MCS13    = 497,
	WL_RATE_2X4_TXBF_SDM_MCS14    = 498,
	WL_RATE_2X4_TXBF_SDM_MCS15    = 499,
	WL_RATE_P_2X4_TXBF_SDM_MCS99  = 500,
	WL_RATE_P_2X4_TXBF_SDM_MCS100 = 501,

	WL_RATE_2X4_TXBF_VHT0SS2      = 492,
	WL_RATE_2X4_TXBF_VHT1SS2      = 493,
	WL_RATE_2X4_TXBF_VHT2SS2      = 494,
	WL_RATE_2X4_TXBF_VHT3SS2      = 495,
	WL_RATE_2X4_TXBF_VHT4SS2      = 496,
	WL_RATE_2X4_TXBF_VHT5SS2      = 497,
	WL_RATE_2X4_TXBF_VHT6SS2      = 498,
	WL_RATE_2X4_TXBF_VHT7SS2      = 499,
	WL_RATE_2X4_TXBF_VHT8SS2      = 500,
	WL_RATE_2X4_TXBF_VHT9SS2      = 501,
	WL_RATE_P_2X4_TXBF_VHT10SS2   = 502,
	WL_RATE_P_2X4_TXBF_VHT11SS2   = 503,

	WL_RATE_2X4_TXBF_HE0SS2       = 504,
	WL_RATE_2X4_TXBF_HE1SS2       = 505,
	WL_RATE_2X4_TXBF_HE2SS2       = 506,
	WL_RATE_2X4_TXBF_HE3SS2       = 507,
	WL_RATE_2X4_TXBF_HE4SS2       = 508,
	WL_RATE_2X4_TXBF_HE5SS2       = 509,
	WL_RATE_2X4_TXBF_HE6SS2       = 510,
	WL_RATE_2X4_TXBF_HE7SS2       = 511,
	WL_RATE_2X4_TXBF_HE8SS2       = 512,
	WL_RATE_2X4_TXBF_HE9SS2       = 513,
	WL_RATE_2X4_TXBF_HE10SS2      = 514,
	WL_RATE_2X4_TXBF_HE11SS2      = 515,

	/* 3 Streams expanded + 1 */
	WL_RATE_3X4_TXBF_SDM_MCS16    = 516,
	WL_RATE_3X4_TXBF_SDM_MCS17    = 517,
	WL_RATE_3X4_TXBF_SDM_MCS18    = 518,
	WL_RATE_3X4_TXBF_SDM_MCS19    = 519,
	WL_RATE_3X4_TXBF_SDM_MCS20    = 520,
	WL_RATE_3X4_TXBF_SDM_MCS21    = 521,
	WL_RATE_3X4_TXBF_SDM_MCS22    = 522,
	WL_RATE_3X4_TXBF_SDM_MCS23    = 523,
	WL_RATE_P_3X4_TXBF_SDM_MCS101 = 524,
	WL_RATE_P_3X4_TXBF_SDM_MCS102 = 525,

	WL_RATE_3X4_TXBF_VHT0SS3      = 516,
	WL_RATE_3X4_TXBF_VHT1SS3      = 517,
	WL_RATE_3X4_TXBF_VHT2SS3      = 518,
	WL_RATE_3X4_TXBF_VHT3SS3      = 519,
	WL_RATE_3X4_TXBF_VHT4SS3      = 520,
	WL_RATE_3X4_TXBF_VHT5SS3      = 521,
	WL_RATE_3X4_TXBF_VHT6SS3      = 522,
	WL_RATE_3X4_TXBF_VHT7SS3      = 523,
	WL_RATE_P_3X4_TXBF_VHT8SS3    = 524,
	WL_RATE_P_3X4_TXBF_VHT9SS3    = 525,
	WL_RATE_P_3X4_TXBF_VHT10SS3   = 526,
	WL_RATE_P_3X4_TXBF_VHT11SS3   = 527,

	WL_RATE_3X4_TXBF_HE0SS3       = 528,
	WL_RATE_3X4_TXBF_HE1SS3       = 529,
	WL_RATE_3X4_TXBF_HE2SS3       = 530,
	WL_RATE_3X4_TXBF_HE3SS3       = 531,
	WL_RATE_3X4_TXBF_HE4SS3       = 532,
	WL_RATE_3X4_TXBF_HE5SS3       = 533,
	WL_RATE_3X4_TXBF_HE6SS3       = 534,
	WL_RATE_3X4_TXBF_HE7SS3       = 535,
	WL_RATE_3X4_TXBF_HE8SS3       = 536,
	WL_RATE_3X4_TXBF_HE9SS3       = 537,
	WL_RATE_3X4_TXBF_HE10SS3      = 538,
	WL_RATE_3X4_TXBF_HE11SS3      = 539,

	/* 4 Streams */
	WL_RATE_4X4_TXBF_SDM_MCS24    = 540,
	WL_RATE_4X4_TXBF_SDM_MCS25    = 541,
	WL_RATE_4X4_TXBF_SDM_MCS26    = 542,
	WL_RATE_4X4_TXBF_SDM_MCS27    = 543,
	WL_RATE_4X4_TXBF_SDM_MCS28    = 544,
	WL_RATE_4X4_TXBF_SDM_MCS29    = 545,
	WL_RATE_4X4_TXBF_SDM_MCS30    = 546,
	WL_RATE_4X4_TXBF_SDM_MCS31    = 547,
	WL_RATE_P_4X4_TXBF_SDM_MCS103 = 548,
	WL_RATE_P_4X4_TXBF_SDM_MCS104 = 549,

	WL_RATE_4X4_TXBF_VHT0SS4      = 540,
	WL_RATE_4X4_TXBF_VHT1SS4      = 541,
	WL_RATE_4X4_TXBF_VHT2SS4      = 542,
	WL_RATE_4X4_TXBF_VHT3SS4      = 543,
	WL_RATE_4X4_TXBF_VHT4SS4      = 544,
	WL_RATE_4X4_TXBF_VHT5SS4      = 545,
	WL_RATE_4X4_TXBF_VHT6SS4      = 546,
	WL_RATE_4X4_TXBF_VHT7SS4      = 547,
	WL_RATE_P_4X4_TXBF_VHT8SS4    = 548,
	WL_RATE_P_4X4_TXBF_VHT9SS4    = 549,
	WL_RATE_P_4X4_TXBF_VHT10SS4   = 550,
	WL_RATE_P_4X4_TXBF_VHT11SS4   = 551,

	WL_RATE_4X4_TXBF_HE0SS4       = 552,
	WL_RATE_4X4_TXBF_HE1SS4       = 553,
	WL_RATE_4X4_TXBF_HE2SS4       = 554,
	WL_RATE_4X4_TXBF_HE3SS4       = 555,
	WL_RATE_4X4_TXBF_HE4SS4       = 556,
	WL_RATE_4X4_TXBF_HE5SS4       = 557,
	WL_RATE_4X4_TXBF_HE6SS4       = 558,
	WL_RATE_4X4_TXBF_HE7SS4       = 559,
	WL_RATE_4X4_TXBF_HE8SS4       = 560,
	WL_RATE_4X4_TXBF_HE9SS4       = 561,
	WL_RATE_4X4_TXBF_HE10SS4      = 562,
	WL_RATE_4X4_TXBF_HE11SS4      = 563
} clm_rates_t;

/* Number of rate codes */
#define WL_NUMRATES 564

/* This enum maps 802.11ax OFDMA (RU) 'rates' to a CLM index */

typedef enum clm_ru_rates {
	/* RU26 OFDMA UL rates */
	WL_RU_RATE_1X1_26SS1             = 0,
	WL_RU_RATE_1X2_26SS1             = 1,
	WL_RU_RATE_2X2_26SS2             = 2,
	WL_RU_RATE_1X2_TXBF_26SS1        = 3,
	WL_RU_RATE_2X2_TXBF_26SS2        = 4,
	WL_RU_RATE_1X3_26SS1             = 5,
	WL_RU_RATE_2X3_26SS2             = 6,
	WL_RU_RATE_3X3_26SS3             = 7,
	WL_RU_RATE_1X3_TXBF_26SS1        = 8,
	WL_RU_RATE_2X3_TXBF_26SS2        = 9,
	WL_RU_RATE_3X3_TXBF_26SS3        = 10,
	WL_RU_RATE_1X4_26SS1             = 11,
	WL_RU_RATE_2X4_26SS2             = 12,
	WL_RU_RATE_3X4_26SS3             = 13,
	WL_RU_RATE_4X4_26SS4             = 14,
	WL_RU_RATE_1X4_TXBF_26SS1        = 15,
	WL_RU_RATE_2X4_TXBF_26SS2        = 16,
	WL_RU_RATE_3X4_TXBF_26SS3        = 17,
	WL_RU_RATE_4X4_TXBF_26SS4        = 18,

	/* RU52 OFDMA UL rates */
	WL_RU_RATE_1X1_52SS1             = 19,
	WL_RU_RATE_1X2_52SS1             = 20,
	WL_RU_RATE_2X2_52SS2             = 21,
	WL_RU_RATE_1X2_TXBF_52SS1        = 22,
	WL_RU_RATE_2X2_TXBF_52SS2        = 23,
	WL_RU_RATE_1X3_52SS1             = 24,
	WL_RU_RATE_2X3_52SS2             = 25,
	WL_RU_RATE_3X3_52SS3             = 26,
	WL_RU_RATE_1X3_TXBF_52SS1        = 27,
	WL_RU_RATE_2X3_TXBF_52SS2        = 28,
	WL_RU_RATE_3X3_TXBF_52SS3        = 29,
	WL_RU_RATE_1X4_52SS1             = 30,
	WL_RU_RATE_2X4_52SS2             = 31,
	WL_RU_RATE_3X4_52SS3             = 32,
	WL_RU_RATE_4X4_52SS4             = 33,
	WL_RU_RATE_1X4_TXBF_52SS1        = 34,
	WL_RU_RATE_2X4_TXBF_52SS2        = 35,
	WL_RU_RATE_3X4_TXBF_52SS3        = 36,
	WL_RU_RATE_4X4_TXBF_52SS4        = 37,

	/* RU106 OFDMA UL rates */
	WL_RU_RATE_1X1_106SS1            = 38,
	WL_RU_RATE_1X2_106SS1            = 39,
	WL_RU_RATE_2X2_106SS2            = 40,
	WL_RU_RATE_1X2_TXBF_106SS1       = 41,
	WL_RU_RATE_2X2_TXBF_106SS2       = 42,
	WL_RU_RATE_1X3_106SS1            = 43,
	WL_RU_RATE_2X3_106SS2            = 44,
	WL_RU_RATE_3X3_106SS3            = 45,
	WL_RU_RATE_1X3_TXBF_106SS1       = 46,
	WL_RU_RATE_2X3_TXBF_106SS2       = 47,
	WL_RU_RATE_3X3_TXBF_106SS3       = 48,
	WL_RU_RATE_1X4_106SS1            = 49,
	WL_RU_RATE_2X4_106SS2            = 50,
	WL_RU_RATE_3X4_106SS3            = 51,
	WL_RU_RATE_4X4_106SS4            = 52,
	WL_RU_RATE_1X4_TXBF_106SS1       = 53,
	WL_RU_RATE_2X4_TXBF_106SS2       = 54,
	WL_RU_RATE_3X4_TXBF_106SS3       = 55,
	WL_RU_RATE_4X4_TXBF_106SS4       = 56,

	/* Upper Bound OFDMA DL 'rates' */
	WL_RU_RATE_1X1_UBSS1             = 57,
	WL_RU_RATE_1X2_UBSS1             = 58,
	WL_RU_RATE_2X2_UBSS2             = 59,
	WL_RU_RATE_1X2_TXBF_UBSS1        = 60,
	WL_RU_RATE_2X2_TXBF_UBSS2        = 61,
	WL_RU_RATE_1X3_UBSS1             = 62,
	WL_RU_RATE_2X3_UBSS2             = 63,
	WL_RU_RATE_3X3_UBSS3             = 64,
	WL_RU_RATE_1X3_TXBF_UBSS1        = 65,
	WL_RU_RATE_2X3_TXBF_UBSS2        = 66,
	WL_RU_RATE_3X3_TXBF_UBSS3        = 67,
	WL_RU_RATE_1X4_UBSS1             = 68,
	WL_RU_RATE_2X4_UBSS2             = 69,
	WL_RU_RATE_3X4_UBSS3             = 70,
	WL_RU_RATE_4X4_UBSS4             = 71,
	WL_RU_RATE_1X4_TXBF_UBSS1        = 72,
	WL_RU_RATE_2X4_TXBF_UBSS2        = 73,
	WL_RU_RATE_3X4_TXBF_UBSS3        = 74,
	WL_RU_RATE_4X4_TXBF_UBSS4        = 75,

	/* Less Upper Bound OFDMA DL 'rates' */
	WL_RU_RATE_1X1_LUBSS1            = 76,
	WL_RU_RATE_1X2_LUBSS1            = 77,
	WL_RU_RATE_2X2_LUBSS2            = 78,
	WL_RU_RATE_1X2_TXBF_LUBSS1       = 79,
	WL_RU_RATE_2X2_TXBF_LUBSS2       = 80,
	WL_RU_RATE_1X3_LUBSS1            = 81,
	WL_RU_RATE_2X3_LUBSS2            = 82,
	WL_RU_RATE_3X3_LUBSS3            = 83,
	WL_RU_RATE_1X3_TXBF_LUBSS1       = 84,
	WL_RU_RATE_2X3_TXBF_LUBSS2       = 85,
	WL_RU_RATE_3X3_TXBF_LUBSS3       = 86,
	WL_RU_RATE_1X4_LUBSS1            = 87,
	WL_RU_RATE_2X4_LUBSS2            = 88,
	WL_RU_RATE_3X4_LUBSS3            = 89,
	WL_RU_RATE_4X4_LUBSS4            = 90,
	WL_RU_RATE_1X4_TXBF_LUBSS1       = 91,
	WL_RU_RATE_2X4_TXBF_LUBSS2       = 92,
	WL_RU_RATE_3X4_TXBF_LUBSS3       = 93,
	WL_RU_RATE_4X4_TXBF_LUBSS4       = 94,

	/* RU242 OFDMA UL rates */
	WL_RU_RATE_1X1_242SS1            = 95,
	WL_RU_RATE_1X2_242SS1            = 96,
	WL_RU_RATE_2X2_242SS2            = 97,
	WL_RU_RATE_1X2_TXBF_242SS1       = 98,
	WL_RU_RATE_2X2_TXBF_242SS2       = 99,
	WL_RU_RATE_1X3_242SS1            = 100,
	WL_RU_RATE_2X3_242SS2            = 101,
	WL_RU_RATE_3X3_242SS3            = 102,
	WL_RU_RATE_1X3_TXBF_242SS1       = 103,
	WL_RU_RATE_2X3_TXBF_242SS2       = 104,
	WL_RU_RATE_3X3_TXBF_242SS3       = 105,
	WL_RU_RATE_1X4_242SS1            = 106,
	WL_RU_RATE_2X4_242SS2            = 107,
	WL_RU_RATE_3X4_242SS3            = 108,
	WL_RU_RATE_4X4_242SS4            = 109,
	WL_RU_RATE_1X4_TXBF_242SS1       = 110,
	WL_RU_RATE_2X4_TXBF_242SS2       = 111,
	WL_RU_RATE_3X4_TXBF_242SS3       = 112,
	WL_RU_RATE_4X4_TXBF_242SS4       = 113,

	/* RU484 OFDMA UL rates */
	WL_RU_RATE_1X1_484SS1            = 114,
	WL_RU_RATE_1X2_484SS1            = 115,
	WL_RU_RATE_2X2_484SS2            = 116,
	WL_RU_RATE_1X2_TXBF_484SS1       = 117,
	WL_RU_RATE_2X2_TXBF_484SS2       = 118,
	WL_RU_RATE_1X3_484SS1            = 119,
	WL_RU_RATE_2X3_484SS2            = 120,
	WL_RU_RATE_3X3_484SS3            = 121,
	WL_RU_RATE_1X3_TXBF_484SS1       = 122,
	WL_RU_RATE_2X3_TXBF_484SS2       = 123,
	WL_RU_RATE_3X3_TXBF_484SS3       = 124,
	WL_RU_RATE_1X4_484SS1            = 125,
	WL_RU_RATE_2X4_484SS2            = 126,
	WL_RU_RATE_3X4_484SS3            = 127,
	WL_RU_RATE_4X4_484SS4            = 128,
	WL_RU_RATE_1X4_TXBF_484SS1       = 129,
	WL_RU_RATE_2X4_TXBF_484SS2       = 130,
	WL_RU_RATE_3X4_TXBF_484SS3       = 131,
	WL_RU_RATE_4X4_TXBF_484SS4       = 132,

	/* RU996 OFDMA UL rates */
	WL_RU_RATE_1X1_996SS1            = 133,
	WL_RU_RATE_1X2_996SS1            = 134,
	WL_RU_RATE_2X2_996SS2            = 135,
	WL_RU_RATE_1X2_TXBF_996SS1       = 136,
	WL_RU_RATE_2X2_TXBF_996SS2       = 137,
	WL_RU_RATE_1X3_996SS1            = 138,
	WL_RU_RATE_2X3_996SS2            = 139,
	WL_RU_RATE_3X3_996SS3            = 140,
	WL_RU_RATE_1X3_TXBF_996SS1       = 141,
	WL_RU_RATE_2X3_TXBF_996SS2       = 142,
	WL_RU_RATE_3X3_TXBF_996SS3       = 143,
	WL_RU_RATE_1X4_996SS1            = 144,
	WL_RU_RATE_2X4_996SS2            = 145,
	WL_RU_RATE_3X4_996SS3            = 146,
	WL_RU_RATE_4X4_996SS4            = 147,
	WL_RU_RATE_1X4_TXBF_996SS1       = 148,
	WL_RU_RATE_2X4_TXBF_996SS2       = 149,
	WL_RU_RATE_3X4_TXBF_996SS3       = 150,
	WL_RU_RATE_4X4_TXBF_996SS4       = 151
} clm_ru_rates_t;

/* Number of OFDMA rate codes */
#define WL_RU_NUMRATES 152

/* MCS rates */
#define WLC_MAX_VHT_MCS	11	/**< Std VHT MCS 0-9 plus prop VHT MCS 10-11 */
#define WLC_MAX_HE_MCS	11	/**< Std HE MCS 0-11 */
#define WLC_MAX_EHT_MCS	13	/**< Std EHT MCS 0-13 */

/* Convert encoded rate value in plcp header to numerical rates in 500 KHz increments */
#define OFDM_PHY2MAC_RATE(rlpt)         plcp_ofdm_rate_tbl[(rlpt) & 0x7]
#define CCK_PHY2MAC_RATE(signal)	((signal)/5)

/* 'proprietary' string should not exist in open source(OEM_ANDROID) */
/* given a proprietary MCS, get number of spatial streams */
#define GET_PROPRIETARY_11N_MCS_NSS(mcs) (1 + ((mcs) - 85) / 8)

#define GET_11N_MCS_NSS(mcs) ((mcs) < 32 ? (1 + ((mcs) / 8)) : \
			      ((mcs) == 32 ? 1 : GET_PROPRIETARY_11N_MCS_NSS(mcs)))

#define IS_PROPRIETARY_11N_MCS(mcs)	FALSE
#define IS_PROPRIETARY_11N_SS_MCS(mcs)	FALSE /**< is proprietary HT single stream MCS */

extern const uint8 plcp_ofdm_rate_tbl[];

uint8 wf_get_single_stream_mcs(uint mcs);

/* extract NSS:MCS portions of the rspec */
#define WF_NON_HT_MCS 0x80
uint8 wf_vht_plcp_to_rate(uint8 *plcp);
uint8 wf_he_plcp_to_rate(uint8 *plcp, bool is_mu);
uint8 wf_eht_plcp_to_rate(uint8 *plcp, bool is_mu);

/* convert rate from mcs to Kbps */
uint wf_mcs_to_rate(uint mcs, uint nss, uint bw, int sgi);
uint wf_he_mcs_to_rate(uint mcs, uint nss, uint bw, uint gi, bool dcm);

uint wf_mcs_to_Ndbps(uint mcs, uint nss, uint bw);
uint wf_he_mcs_to_Ndbps(uint mcs, uint nss, uint bw, bool dcm);
uint32 wf_he_mcs_ru_to_ndbps(uint8 mcs, uint8 nss, bool dcm, uint8 ru_index);

#ifdef __cplusplus
}
#endif /* __cplusplus */
#endif /* _bcmwifi_rates_h_ */

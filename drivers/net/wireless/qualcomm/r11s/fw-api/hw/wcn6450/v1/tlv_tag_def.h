
/*
 * Copyright (c) 2023 Qualcomm Innovation Center, Inc. All rights reserved.
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



#ifndef _TLV_TAG_DEF_
#define _TLV_TAG_DEF_

typedef enum {

  WIFIMACTX_CBF_START_E                    =   0  ,
  WIFIPHYRX_DATA_E                         =   1  ,
  WIFIPHYRX_CBF_DATA_RESP_E                =   2  ,
  WIFIPHYRX_ABORT_REQUEST_E                =   3  ,
  WIFIPHYRX_USER_ABORT_NOTIFICATION_E      =   4  ,
  WIFIMACTX_DATA_RESP_E                    =   5  ,
  WIFIMACTX_CBF_DATA_E                     =   6  ,
  WIFIMACTX_CBF_DONE_E                     =   7  ,
  WIFIMACRX_CBF_READ_REQUEST_E             =   8  ,
  WIFIMACRX_CBF_DATA_REQUEST_E             =   9  ,
  WIFIMACRX_EXPECT_NDP_RECEPTION_E         =  10  ,
  WIFIMACRX_FREEZE_CAPTURE_CHANNEL_E       =  11  ,
  WIFIMACRX_NDP_TIMEOUT_E                  =  12  ,
  WIFIMACRX_ABORT_ACK_E                    =  13  ,
  WIFIMACRX_REQ_IMPLICIT_FB_E              =  14  ,
  WIFIMACRX_CHAIN_MASK_E                   =  15  ,
  WIFIMACRX_NAP_USER_E                     =  16  ,
  WIFIMACRX_ABORT_REQUEST_E                =  17  ,
  WIFIPHYTX_OTHER_TRANSMIT_INFO16_E        =  18  ,
  WIFIPHYTX_ABORT_ACK_E                    =  19  ,
  WIFIPHYTX_ABORT_REQUEST_E                =  20  ,
  WIFIPHYTX_PKT_END_E                      =  21  ,
  WIFIPHYTX_PPDU_HEADER_INFO_REQUEST_E     =  22  ,
  WIFIPHYTX_REQUEST_CTRL_INFO_E            =  23  ,
  WIFIPHYTX_DATA_REQUEST_E                 =  24  ,
  WIFIPHYTX_BF_CV_LOADING_DONE_E           =  25  ,
  WIFIPHYTX_NAP_ACK_E                      =  26  ,
  WIFIPHYTX_NAP_DONE_E                     =  27  ,
  WIFIPHYTX_OFF_ACK_E                      =  28  ,
  WIFIPHYTX_ON_ACK_E                       =  29  ,
  WIFIPHYTX_SYNTH_OFF_ACK_E                =  30  ,
  WIFIPHYTX_DEBUG16_E                      =  31  ,
  WIFIMACTX_ABORT_REQUEST_E                =  32  ,
  WIFIMACTX_ABORT_ACK_E                    =  33  ,
  WIFIMACTX_PKT_END_E                      =  34  ,
  WIFIMACTX_PRE_PHY_DESC_E                 =  35  ,
  WIFIMACTX_BF_PARAMS_COMMON_E             =  36  ,
  WIFIMACTX_BF_PARAMS_PER_USER_E           =  37  ,
  WIFIMACTX_PREFETCH_CV_E                  =  38  ,
  WIFIMACTX_USER_DESC_COMMON_E             =  39  ,
  WIFIMACTX_USER_DESC_PER_USER_E           =  40  ,
  WIFIEXAMPLE_USER_TLV_16_E                =  41  ,
  WIFIEXAMPLE_TLV_16_E                     =  42  ,
  WIFIMACTX_PHY_OFF_E                      =  43  ,
  WIFIMACTX_PHY_ON_E                       =  44  ,
  WIFIMACTX_SYNTH_OFF_E                    =  45  ,
  WIFIMACTX_EXPECT_CBF_COMMON_E            =  46  ,
  WIFIMACTX_EXPECT_CBF_PER_USER_E          =  47  ,
  WIFIMACTX_PHY_DESC_E                     =  48  ,
  WIFIMACTX_L_SIG_A_E                      =  49  ,
  WIFIMACTX_L_SIG_B_E                      =  50  ,
  WIFIMACTX_HT_SIG_E                       =  51  ,
  WIFIMACTX_VHT_SIG_A_E                    =  52  ,
  WIFIMACTX_VHT_SIG_B_SU20_E               =  53  ,
  WIFIMACTX_VHT_SIG_B_SU40_E               =  54  ,
  WIFIMACTX_VHT_SIG_B_SU80_E               =  55  ,
  WIFIMACTX_VHT_SIG_B_SU160_E              =  56  ,
  WIFIMACTX_VHT_SIG_B_MU20_E               =  57  ,
  WIFIMACTX_VHT_SIG_B_MU40_E               =  58  ,
  WIFIMACTX_VHT_SIG_B_MU80_E               =  59  ,
  WIFIMACTX_VHT_SIG_B_MU160_E              =  60  ,
  WIFIMACTX_SERVICE_E                      =  61  ,
  WIFIMACTX_HE_SIG_A_SU_E                  =  62  ,
  WIFIMACTX_HE_SIG_A_MU_DL_E               =  63  ,
  WIFIMACTX_HE_SIG_A_MU_UL_E               =  64  ,
  WIFIMACTX_HE_SIG_B1_MU_E                 =  65  ,
  WIFIMACTX_HE_SIG_B2_MU_E                 =  66  ,
  WIFIMACTX_HE_SIG_B2_OFDMA_E              =  67  ,
  WIFIMACTX_DELETE_CV_E                    =  68  ,
  WIFIMACTX_MU_UPLINK_COMMON_E             =  69  ,
  WIFIMACTX_MU_UPLINK_USER_SETUP_E         =  70  ,
  WIFIMACTX_OTHER_TRANSMIT_INFO_E          =  71  ,
  WIFIMACTX_PHY_NAP_E                      =  72  ,
  WIFIMACTX_DEBUG_E                        =  73  ,
  WIFIPHYRX_ABORT_ACK_E                    =  74  ,
  WIFIPHYRX_GENERATED_CBF_DETAILS_E        =  75  ,
  WIFIPHYRX_RSSI_LEGACY_E                  =  76  ,
  WIFIPHYRX_RSSI_HT_E                      =  77  ,
  WIFIPHYRX_USER_INFO_E                    =  78  ,
  WIFIPHYRX_PKT_END_E                      =  79  ,
  WIFIPHYRX_DEBUG_E                        =  80  ,
  WIFIPHYRX_CBF_TRANSFER_DONE_E            =  81  ,
  WIFIPHYRX_CBF_TRANSFER_ABORT_E           =  82  ,
  WIFIPHYRX_L_SIG_A_E                      =  83  ,
  WIFIPHYRX_L_SIG_B_E                      =  84  ,
  WIFIPHYRX_HT_SIG_E                       =  85  ,
  WIFIPHYRX_VHT_SIG_A_E                    =  86  ,
  WIFIPHYRX_VHT_SIG_B_SU20_E               =  87  ,
  WIFIPHYRX_VHT_SIG_B_SU40_E               =  88  ,
  WIFIPHYRX_VHT_SIG_B_SU80_E               =  89  ,
  WIFIPHYRX_VHT_SIG_B_SU160_E              =  90  ,
  WIFIPHYRX_VHT_SIG_B_MU20_E               =  91  ,
  WIFIPHYRX_VHT_SIG_B_MU40_E               =  92  ,
  WIFIPHYRX_VHT_SIG_B_MU80_E               =  93  ,
  WIFIPHYRX_VHT_SIG_B_MU160_E              =  94  ,
  WIFIPHYRX_HE_SIG_A_SU_E                  =  95  ,
  WIFIPHYRX_HE_SIG_A_MU_DL_E               =  96  ,
  WIFIPHYRX_HE_SIG_A_MU_UL_E               =  97  ,
  WIFIPHYRX_HE_SIG_B1_MU_E                 =  98  ,
  WIFIPHYRX_HE_SIG_B2_MU_E                 =  99  ,
  WIFIPHYRX_HE_SIG_B2_OFDMA_E              = 100  ,
  WIFIPHYRX_OTHER_RECEIVE_INFO_E           = 101  ,
  WIFIPHYRX_COMMON_USER_INFO_E             = 102  ,
  WIFIPHYRX_DATA_DONE_E                    = 103  ,
  WIFIRECEIVE_RSSI_INFO_E                  = 104  ,
  WIFIRECEIVE_USER_INFO_E                  = 105  ,
  WIFIMIMO_CONTROL_INFO_E                  = 106  ,
  WIFIRX_LOCATION_INFO_E                   = 107  ,
  WIFICOEX_TX_REQ_E                        = 108  ,
  WIFIDUMMY_E                              = 109  ,
  WIFIRX_TIMING_OFFSET_INFO_E              = 110  ,
  WIFIEXAMPLE_TLV_32_NAME_E                = 111  ,
  WIFIMPDU_LIMIT_E                         = 112  ,
  WIFINA_LENGTH_END_E                      = 113  ,
  WIFIOLE_BUF_STATUS_E                     = 114  ,
  WIFIPCU_PPDU_SETUP_DONE_E                = 115  ,
  WIFIPCU_PPDU_SETUP_END_E                 = 116  ,
  WIFIPCU_PPDU_SETUP_INIT_E                = 117  ,
  WIFIPCU_PPDU_SETUP_START_E               = 118  ,
  WIFIPDG_FES_SETUP_E                      = 119  ,
  WIFIPDG_RESPONSE_E                       = 120  ,
  WIFIPDG_TX_REQ_E                         = 121  ,
  WIFISCH_WAIT_INSTR_E                     = 122  ,
  WIFISCHEDULER_TLV_E                      = 123  ,
  WIFITQM_FLOW_EMPTY_STATUS_E              = 124  ,
  WIFITQM_FLOW_NOT_EMPTY_STATUS_E          = 125  ,
  WIFITQM_GEN_MPDU_LENGTH_LIST_E           = 126  ,
  WIFITQM_GEN_MPDU_LENGTH_LIST_STATUS_E    = 127  ,
  WIFITQM_GEN_MPDUS_E                      = 128  ,
  WIFITQM_GEN_MPDUS_STATUS_E               = 129  ,
  WIFITQM_REMOVE_MPDU_E                    = 130  ,
  WIFITQM_REMOVE_MPDU_STATUS_E             = 131  ,
  WIFITQM_REMOVE_MSDU_E                    = 132  ,
  WIFITQM_REMOVE_MSDU_STATUS_E             = 133  ,
  WIFITQM_UPDATE_TX_MPDU_COUNT_E           = 134  ,
  WIFITQM_WRITE_CMD_E                      = 135  ,
  WIFIOFDMA_TRIGGER_DETAILS_E              = 136  ,
  WIFITX_DATA_E                            = 137  ,
  WIFITX_FES_SETUP_E                       = 138  ,
  WIFIRX_PACKET_E                          = 139  ,
  WIFIEXPECTED_RESPONSE_E                  = 140  ,
  WIFITX_MPDU_END_E                        = 141  ,
  WIFITX_MPDU_START_E                      = 142  ,
  WIFITX_MSDU_END_E                        = 143  ,
  WIFITX_MSDU_START_E                      = 144  ,
  WIFITX_SW_MODE_SETUP_E                   = 145  ,
  WIFITXPCU_BUFFER_STATUS_E                = 146  ,
  WIFITXPCU_USER_BUFFER_STATUS_E           = 147  ,
  WIFIDATA_TO_TIME_CONFIG_E                = 148  ,
  WIFIEXAMPLE_USER_TLV_32_E                = 149  ,
  WIFIMPDU_INFO_E                          = 150  ,
  WIFIPDG_USER_SETUP_E                     = 151  ,
  WIFITX_11AH_SETUP_E                      = 152  ,
  WIFIREO_UPDATE_RX_REO_QUEUE_STATUS_E     = 153  ,
  WIFITX_PEER_ENTRY_E                      = 154  ,
  WIFITX_RAW_OR_NATIVE_FRAME_SETUP_E       = 155  ,
  WIFIEXAMPLE_STRUCT_NAME_E                = 156  ,
  WIFIPCU_PPDU_SETUP_END_INFO_E            = 157  ,
  WIFIPPDU_RATE_SETTING_E                  = 158  ,
  WIFIPROT_RATE_SETTING_E                  = 159  ,
  WIFIRX_MPDU_DETAILS_E                    = 160  ,
  WIFIEXAMPLE_USER_TLV_42_E                = 161  ,
  WIFIRX_MSDU_LINK_E                       = 162  ,
  WIFIRX_REO_QUEUE_E                       = 163  ,
  WIFIADDR_SEARCH_ENTRY_E                  = 164  ,
  WIFISCHEDULER_CMD_E                      = 165  ,
  WIFITX_FLUSH_E                           = 166  ,
  WIFITQM_ENTRANCE_RING_E                  = 167  ,
  WIFITX_DATA_WORD_E                       = 168  ,
  WIFITX_MPDU_DETAILS_E                    = 169  ,
  WIFITX_MPDU_LINK_E                       = 170  ,
  WIFITX_MPDU_LINK_PTR_E                   = 171  ,
  WIFITX_MPDU_QUEUE_HEAD_E                 = 172  ,
  WIFITX_MPDU_QUEUE_EXT_E                  = 173  ,
  WIFITX_MPDU_QUEUE_EXT_PTR_E              = 174  ,
  WIFITX_MSDU_DETAILS_E                    = 175  ,
  WIFITX_MSDU_EXTENSION_E                  = 176  ,
  WIFITX_MSDU_FLOW_E                       = 177  ,
  WIFITX_MSDU_LINK_E                       = 178  ,
  WIFITX_MSDU_LINK_ENTRY_PTR_E             = 179  ,
  WIFIRESPONSE_RATE_SETTING_E              = 180  ,
  WIFITXPCU_BUFFER_BASICS_E                = 181  ,
  WIFIUNIFORM_DESCRIPTOR_HEADER_E          = 182  ,
  WIFIUNIFORM_TQM_CMD_HEADER_E             = 183  ,
  WIFIUNIFORM_TQM_STATUS_HEADER_E          = 184  ,
  WIFIUSER_RATE_SETTING_E                  = 185  ,
  WIFIWBM_BUFFER_RING_E                    = 186  ,
  WIFIWBM_LINK_DESCRIPTOR_RING_E           = 187  ,
  WIFIWBM_RELEASE_RING_E                   = 188  ,
  WIFITX_FLUSH_REQ_E                       = 189  ,
  WIFIRX_MSDU_DETAILS_E                    = 190  ,
  WIFITQM_WRITE_CMD_STATUS_E               = 191  ,
  WIFITQM_GET_MPDU_QUEUE_STATS_E           = 192  ,
  WIFITQM_GET_MSDU_FLOW_STATS_E            = 193  ,
  WIFIEXAMPLE_USER_CTLV_32_E               = 194  ,
  WIFITX_FES_STATUS_START_E                = 195  ,
  WIFITX_FES_STATUS_USER_PPDU_E            = 196  ,
  WIFITX_FES_STATUS_USER_RESPONSE_E        = 197  ,
  WIFITX_FES_STATUS_END_E                  = 198  ,
  WIFIRX_TRIG_INFO_E                       = 199  ,
  WIFIRXPCU_TX_SETUP_CLEAR_E               = 200  ,
  WIFIRX_FRAME_BITMAP_REQ_E                = 201  ,
  WIFIRX_FRAME_BITMAP_ACK_E                = 202  ,
  WIFICOEX_RX_STATUS_E                     = 203  ,
  WIFIRX_START_PARAM_E                     = 204  ,
  WIFIRX_PPDU_START_E                      = 205  ,
  WIFIRX_PPDU_END_E                        = 206  ,
  WIFIRX_MPDU_START_E                      = 207  ,
  WIFIRX_MPDU_END_E                        = 208  ,
  WIFIRX_MSDU_START_E                      = 209  ,
  WIFIRX_MSDU_END_E                        = 210  ,
  WIFIRX_ATTENTION_E                       = 211  ,
  WIFIRECEIVED_RESPONSE_INFO_E             = 212  ,
  WIFIRX_PHY_SLEEP_E                       = 213  ,
  WIFIRX_HEADER_E                          = 214  ,
  WIFIRX_PEER_ENTRY_E                      = 215  ,
  WIFIRX_FLUSH_E                           = 216  ,
  WIFIRX_RESPONSE_REQUIRED_INFO_E          = 217  ,
  WIFIRX_FRAMELESS_BAR_DETAILS_E           = 218  ,
  WIFITQM_GET_MPDU_QUEUE_STATS_STATUS_E    = 219  ,
  WIFITQM_GET_MSDU_FLOW_STATS_STATUS_E     = 220  ,
  WIFITX_CBF_INFO_E                        = 221  ,
  WIFIPCU_PPDU_SETUP_USER_E                = 222  ,
  WIFIRX_MPDU_PCU_START_E                  = 223  ,
  WIFIRX_PM_INFO_E                         = 224  ,
  WIFIRX_USER_PPDU_END_E                   = 225  ,
  WIFIRX_PRE_PPDU_START_E                  = 226  ,
  WIFIRX_PREAMBLE_E                        = 227  ,
  WIFITX_FES_SETUP_COMPLETE_E              = 228  ,
  WIFITX_LAST_MPDU_FETCHED_E               = 229  ,
  WIFITXDMA_STOP_REQUEST_E                 = 230  ,
  WIFIRXPCU_SETUP_E                        = 231  ,
  WIFIRXPCU_USER_SETUP_E                   = 232  ,
  WIFITX_FES_STATUS_ACK_OR_BA_E            = 233  ,
  WIFITQM_ACKED_MPDU_E                     = 234  ,
  WIFICOEX_TX_RESP_E                       = 235  ,
  WIFICOEX_TX_STATUS_E                     = 236  ,
  WIFIMACTX_COEX_PHY_CTRL_E                = 237  ,
  WIFICOEX_STATUS_BROADCAST_E              = 238  ,
  WIFIRESPONSE_START_STATUS_E              = 239  ,
  WIFIRESPONSE_END_STATUS_E                = 240  ,
  WIFICRYPTO_STATUS_E                      = 241  ,
  WIFIRECEIVED_TRIGGER_INFO_E              = 242  ,
  WIFIREO_ENTRANCE_RING_E                  = 243  ,
  WIFIRX_MPDU_LINK_E                       = 244  ,
  WIFICOEX_TX_STOP_CTRL_E                  = 245  ,
  WIFIRX_PPDU_ACK_REPORT_E                 = 246  ,
  WIFIRX_PPDU_NO_ACK_REPORT_E              = 247  ,
  WIFISCH_COEX_STATUS_E                    = 248  ,
  WIFISCHEDULER_COMMAND_STATUS_E           = 249  ,
  WIFISCHEDULER_RX_PPDU_NO_RESPONSE_STATUS_E = 250  ,
  WIFITX_FES_STATUS_PROT_E                 = 251  ,
  WIFITX_FES_STATUS_START_PPDU_E           = 252  ,
  WIFITX_FES_STATUS_START_PROT_E           = 253  ,
  WIFITXPCU_PHYTX_DEBUG32_E                = 254  ,
  WIFITXPCU_PHYTX_OTHER_TRANSMIT_INFO32_E  = 255  ,
  WIFITX_MPDU_COUNT_TRANSFER_END_E         = 256  ,
  WIFIWHO_ANCHOR_OFFSET_E                  = 257  ,
  WIFIWHO_ANCHOR_VALUE_E                   = 258  ,
  WIFIWHO_CCE_INFO_E                       = 259  ,
  WIFIWHO_COMMIT_E                         = 260  ,
  WIFIWHO_COMMIT_DONE_E                    = 261  ,
  WIFIWHO_FLUSH_E                          = 262  ,
  WIFIWHO_L2_LLC_E                         = 263  ,
  WIFIWHO_L2_PAYLOAD_E                     = 264  ,
  WIFIWHO_L3_CHECKSUM_E                    = 265  ,
  WIFIWHO_L3_INFO_E                        = 266  ,
  WIFIWHO_L4_CHECKSUM_E                    = 267  ,
  WIFIWHO_L4_INFO_E                        = 268  ,
  WIFIWHO_MSDU_E                           = 269  ,
  WIFIWHO_MSDU_MISC_E                      = 270  ,
  WIFIWHO_PACKET_DATA_E                    = 271  ,
  WIFIWHO_PACKET_HDR_E                     = 272  ,
  WIFIWHO_PPDU_END_E                       = 273  ,
  WIFIWHO_PPDU_START_E                     = 274  ,
  WIFIWHO_TSO_E                            = 275  ,
  WIFIWHO_WMAC_HEADER_PV0_E                = 276  ,
  WIFIWHO_WMAC_HEADER_PV1_E                = 277  ,
  WIFIWHO_WMAC_IV_E                        = 278  ,
  WIFIMPDU_INFO_END_E                      = 279  ,
  WIFIMPDU_INFO_BITMAP_E                   = 280  ,
  WIFITX_QUEUE_EXTENSION_E                 = 281  ,
  WIFIRX_PEER_ENTRY_DETAILS_E              = 282  ,
  WIFIRX_REO_QUEUE_REFERENCE_E             = 283  ,
  WIFIRX_REO_QUEUE_EXT_E                   = 284  ,
  WIFISCHEDULER_SELFGEN_RESPONSE_STATUS_E  = 285  ,
  WIFITQM_UPDATE_TX_MPDU_COUNT_STATUS_E    = 286  ,
  WIFITQM_ACKED_MPDU_STATUS_E              = 287  ,
  WIFITQM_ADD_MSDU_STATUS_E                = 288  ,
  WIFIRX_MPDU_LINK_PTR_E                   = 289  ,
  WIFIREO_DESTINATION_RING_E               = 290  ,
  WIFITQM_LIST_GEN_DONE_E                  = 291  ,
  WIFIWHO_TERMINATE_E                      = 292  ,
  WIFITX_LAST_MPDU_END_E                   = 293  ,
  WIFITX_CV_DATA_E                         = 294  ,
  WIFITCL_ENTRANCE_FROM_PPE_RING_E         = 295  ,
  WIFIPPDU_TX_END_E                        = 296  ,
  WIFIPROT_TX_END_E                        = 297  ,
  WIFIPDG_RESPONSE_RATE_SETTING_E          = 298  ,
  WIFIMPDU_INFO_GLOBAL_END_E               = 299  ,
  WIFITQM_SCH_INSTR_GLOBAL_END_E           = 300  ,
  WIFIRX_PPDU_END_USER_STATS_E             = 301  ,
  WIFIRX_PPDU_END_USER_STATS_EXT_E         = 302  ,
  WIFINO_ACK_REPORT_E                      = 303  ,
  WIFIACK_REPORT_E                         = 304  ,
  WIFIUNIFORM_REO_CMD_HEADER_E             = 305  ,
  WIFIREO_GET_QUEUE_STATS_E                = 306  ,
  WIFIREO_FLUSH_QUEUE_E                    = 307  ,
  WIFIREO_FLUSH_CACHE_E                    = 308  ,
  WIFIREO_UNBLOCK_CACHE_E                  = 309  ,
  WIFIUNIFORM_REO_STATUS_HEADER_E          = 310  ,
  WIFIREO_GET_QUEUE_STATS_STATUS_E         = 311  ,
  WIFIREO_FLUSH_QUEUE_STATUS_E             = 312  ,
  WIFIREO_FLUSH_CACHE_STATUS_E             = 313  ,
  WIFIREO_UNBLOCK_CACHE_STATUS_E           = 314  ,
  WIFITQM_FLUSH_CACHE_E                    = 315  ,
  WIFITQM_UNBLOCK_CACHE_E                  = 316  ,
  WIFITQM_FLUSH_CACHE_STATUS_E             = 317  ,
  WIFITQM_UNBLOCK_CACHE_STATUS_E           = 318  ,
  WIFIRX_PPDU_END_STATUS_DONE_E            = 319  ,
  WIFIRX_STATUS_BUFFER_DONE_E              = 320  ,
  WIFIBUFFER_ADDR_INFO_E                   = 321  ,
  WIFIRX_MSDU_DESC_INFO_E                  = 322  ,
  WIFIRX_MPDU_DESC_INFO_E                  = 323  ,
  WIFITCL_DATA_CMD_E                       = 324  ,
  WIFITCL_GSE_CMD_E                        = 325  ,
  WIFITCL_EXIT_BASE_E                      = 326  ,
  WIFITCL_COMPACT_EXIT_RING_E              = 327  ,
  WIFITCL_REGULAR_EXIT_RING_E              = 328  ,
  WIFITCL_EXTENDED_EXIT_RING_E             = 329  ,
  WIFIUPLINK_COMMON_INFO_E                 = 330  ,
  WIFIUPLINK_USER_SETUP_INFO_E             = 331  ,
  WIFITX_DATA_SYNC_E                       = 332  ,
  WIFIPHYRX_CBF_READ_REQUEST_ACK_E         = 333  ,
  WIFITCL_STATUS_RING_E                    = 334  ,
  WIFITQM_GET_MPDU_HEAD_INFO_E             = 335  ,
  WIFITQM_SYNC_CMD_E                       = 336  ,
  WIFITQM_GET_MPDU_HEAD_INFO_STATUS_E      = 337  ,
  WIFITQM_SYNC_CMD_STATUS_E                = 338  ,
  WIFITQM_THRESHOLD_DROP_NOTIFICATION_STATUS_E = 339  ,
  WIFITQM_DESCRIPTOR_THRESHOLD_REACHED_STATUS_E = 340  ,
  WIFIREO_FLUSH_TIMEOUT_LIST_E             = 341  ,
  WIFIREO_FLUSH_TIMEOUT_LIST_STATUS_E      = 342  ,
  WIFIREO_TO_PPE_RING_E                    = 343  ,
  WIFIRX_MPDU_INFO_E                       = 344  ,
  WIFIREO_DESCRIPTOR_THRESHOLD_REACHED_STATUS_E = 345  ,
  WIFISCHEDULER_RX_SIFS_RESPONSE_TRIGGER_STATUS_E = 346  ,
  WIFIEXAMPLE_USER_TLV_32_NAME_E           = 347  ,
  WIFIRX_PPDU_START_USER_INFO_E            = 348  ,
  WIFIRX_RXPCU_CLASSIFICATION_OVERVIEW_E   = 349  ,
  WIFIRX_RING_MASK_E                       = 350  ,
  WIFIWHO_CLASSIFY_INFO_E                  = 351  ,
  WIFITXPT_CLASSIFY_INFO_E                 = 352  ,
  WIFIRXPT_CLASSIFY_INFO_E                 = 353  ,
  WIFITX_FLOW_SEARCH_ENTRY_E               = 354  ,
  WIFIRX_FLOW_SEARCH_ENTRY_E               = 355  ,
  WIFIRECEIVED_TRIGGER_INFO_DETAILS_E      = 356  ,
  WIFICOEX_MAC_NAP_E                       = 357  ,
  WIFIMACRX_ABORT_REQUEST_INFO_E           = 358  ,
  WIFIMACTX_ABORT_REQUEST_INFO_E           = 359  ,
  WIFIPHYRX_ABORT_REQUEST_INFO_E           = 360  ,
  WIFIPHYTX_ABORT_REQUEST_INFO_E           = 361  ,
  WIFIRXPCU_PPDU_END_INFO_E                = 362  ,
  WIFIWHO_MESH_CONTROL_E                   = 363  ,
  WIFIL_SIG_A_INFO_E                       = 364  ,
  WIFIL_SIG_B_INFO_E                       = 365  ,
  WIFIHT_SIG_INFO_E                        = 366  ,
  WIFIVHT_SIG_A_INFO_E                     = 367  ,
  WIFIVHT_SIG_B_SU20_INFO_E                = 368  ,
  WIFIVHT_SIG_B_SU40_INFO_E                = 369  ,
  WIFIVHT_SIG_B_SU80_INFO_E                = 370  ,
  WIFIVHT_SIG_B_SU160_INFO_E               = 371  ,
  WIFIVHT_SIG_B_MU20_INFO_E                = 372  ,
  WIFIVHT_SIG_B_MU40_INFO_E                = 373  ,
  WIFIVHT_SIG_B_MU80_INFO_E                = 374  ,
  WIFIVHT_SIG_B_MU160_INFO_E               = 375  ,
  WIFISERVICE_INFO_E                       = 376  ,
  WIFIHE_SIG_A_SU_INFO_E                   = 377  ,
  WIFIHE_SIG_A_MU_DL_INFO_E                = 378  ,
  WIFIHE_SIG_A_MU_UL_INFO_E                = 379  ,
  WIFIHE_SIG_B1_MU_INFO_E                  = 380  ,
  WIFIHE_SIG_B2_MU_INFO_E                  = 381  ,
  WIFIHE_SIG_B2_OFDMA_INFO_E               = 382  ,
  WIFIPDG_SW_MODE_BW_START_E               = 383  ,
  WIFIPDG_SW_MODE_BW_END_E                 = 384  ,
  WIFIPDG_WAIT_FOR_MAC_REQUEST_E           = 385  ,
  WIFIPDG_WAIT_FOR_PHY_REQUEST_E           = 386  ,
  WIFISCHEDULER_END_E                      = 387  ,
  WIFIPEER_TABLE_ENTRY_E                   = 388  ,
  WIFISW_PEER_INFO_E                       = 389  ,
  WIFIRXOLE_CCE_CLASSIFY_INFO_E            = 390  ,
  WIFITCL_CCE_CLASSIFY_INFO_E              = 391  ,
  WIFIRXOLE_CCE_INFO_E                     = 392  ,
  WIFITCL_CCE_INFO_E                       = 393  ,
  WIFITCL_CCE_SUPERRULE_E                  = 394  ,
  WIFICCE_RULE_E                           = 395  ,
  WIFIRX_PPDU_START_DROPPED_E              = 396  ,
  WIFIRX_PPDU_END_DROPPED_E                = 397  ,
  WIFIRX_PPDU_END_STATUS_DONE_DROPPED_E    = 398  ,
  WIFIRX_MPDU_START_DROPPED_E              = 399  ,
  WIFIRX_MSDU_START_DROPPED_E              = 400  ,
  WIFIRX_MSDU_END_DROPPED_E                = 401  ,
  WIFIRX_MPDU_END_DROPPED_E                = 402  ,
  WIFIRX_ATTENTION_DROPPED_E               = 403  ,
  WIFITXPCU_USER_SETUP_E                   = 404  ,
  WIFIRXPCU_USER_SETUP_EXT_E               = 405  ,
  WIFICE_SRC_DESC_E                        = 406  ,
  WIFICE_STAT_DESC_E                       = 407  ,
  WIFIRXOLE_CCE_SUPERRULE_E                = 408  ,
  WIFITX_RATE_STATS_INFO_E                 = 409  ,
  WIFICMD_PART_0_END_E                     = 410  ,
  WIFIMACTX_SYNTH_ON_E                     = 411  ,
  WIFISCH_CRITICAL_TLV_REFERENCE_E         = 412  ,
  WIFITQM_MPDU_GLOBAL_START_E              = 413  ,
  WIFIEXAMPLE_TLV_32_E                     = 414  ,
  WIFITQM_UPDATE_TX_MSDU_FLOW_E            = 415  ,
  WIFITQM_UPDATE_TX_MPDU_QUEUE_HEAD_E      = 416  ,
  WIFITQM_UPDATE_TX_MSDU_FLOW_STATUS_E     = 417  ,
  WIFITQM_UPDATE_TX_MPDU_QUEUE_HEAD_STATUS_E = 418  ,
  WIFIREO_UPDATE_RX_REO_QUEUE_E            = 419  ,
  WIFICE_DST_DESC_E                        = 420  ,
  WIFITQM_MPDU_QUEUE_EMPTY_STATUS_E        = 421  ,
  WIFITQM_2_SCH_MPDU_AVAILABLE_E           = 422  ,
  WIFIPDG_TRIG_RESPONSE_E                  = 423  ,
  WIFITRIGGER_RESPONSE_TX_DONE_E           = 424  ,
  WIFIABORT_FROM_PHYRX_DETAILS_E           = 425  ,
  WIFISCH_TQM_CMD_WRAPPER_E                = 426  ,
  WIFIMPDUS_AVAILABLE_E                    = 427  ,
  WIFIRECEIVED_RESPONSE_INFO_PART2_E       = 428  ,
  WIFIPHYRX_PKT_END_INFO_E                 = 429  ,
  WIFIPHYRX_TX_START_TIMING_E              = 430  ,
  WIFITXPCU_PREAMBLE_DONE_E                = 431  ,
  WIFINDP_PREAMBLE_DONE_E                  = 432  ,
  WIFISCH_TQM_CMD_WRAPPER_RBO_DROP_E       = 433  ,
  WIFISCH_TQM_CMD_WRAPPER_CONT_DROP_E      = 434  ,
  WIFIMACTX_CLEAR_PREV_TX_INFO_E           = 435  ,
  WIFITX_PUNCTURE_SETUP_E                  = 436  ,
  WIFITX_PUNCTURE_PATTERN_E                = 437  ,
  WIFIR2R_STATUS_END_E                     = 438  ,
  WIFIMACTX_PREFETCH_CV_COMMON_E           = 439  ,
  WIFIEND_OF_FLUSH_MARKER_E                = 440  ,
  WIFIUPLINK_COMMON_INFO_PUNC_E            = 441  ,
  WIFIMACTX_MU_UPLINK_COMMON_PUNC_E        = 442  ,
  WIFIMACTX_MU_UPLINK_USER_SETUP_PUNC_E    = 443  ,
  WIFIRECEIVED_RESPONSE_USER_7_0_E         = 444  ,
  WIFIRECEIVED_RESPONSE_USER_15_8_E        = 445  ,
  WIFIRECEIVED_RESPONSE_USER_23_16_E       = 446  ,
  WIFIRECEIVED_RESPONSE_USER_31_24_E       = 447  ,
  WIFIRECEIVED_RESPONSE_USER_36_32_E       = 448  ,
  WIFIRECEIVED_RESPONSE_USER_INFO_E        = 449  ,
  WIFITX_LOOPBACK_SETUP_E                  = 450  ,
  WIFIPHYRX_OTHER_RECEIVE_INFO_RU_DETAILS_E = 451  ,
  WIFISCH_WAIT_INSTR_TX_PATH_E             = 452  ,
  WIFIMACTX_OTHER_TRANSMIT_INFO_TX2TX_E    = 453  ,
  WIFIMACTX_OTHER_TRANSMIT_INFO_EMUPHY_SETUP_E = 454  ,
  WIFIPHYRX_OTHER_RECEIVE_INFO_EVM_DETAILS_E = 455  ,
  WIFITX_WUR_DATA_E                        = 456  ,
  WIFIRX_PPDU_END_START_E                  = 457  ,
  WIFIRX_PPDU_END_MIDDLE_E                 = 458  ,
  WIFIRX_PPDU_END_LAST_E                   = 459  ,
  WIFIRECEIVE_USER_INFO_L1_E               = 460  ,
  WIFIMIMO_CONTROL_INFO_L1_E               = 461  ,
  WIFIMACTX_BACKOFF_BASED_TRANSMISSION_E   = 462  ,
  WIFIMACTX_OTHER_TRANSMIT_INFO_DL_OFDMA_TX_E = 463  ,
  WIFISRP_INFO_E                           = 464  ,
  WIFIOBSS_SR_INFO_E                       = 465  ,
  WIFISCHEDULER_SW_MSG_STATUS_E            = 466  ,
  WIFIHWSCH_RXPCU_MAC_INFO_ANNOUNCEMENT_E  = 467  ,
  WIFIRXPCU_SETUP_COMPLETE_E               = 468  ,
  WIFISNOOP_PPDU_START_E                   = 469  ,
  WIFISNOOP_MPDU_USR_DBG_INFO_E            = 470  ,
  WIFISNOOP_MSDU_USR_DBG_INFO_E            = 471  ,
  WIFISNOOP_MSDU_USR_DATA_E                = 472  ,
  WIFISNOOP_MPDU_USR_STAT_INFO_E           = 473  ,
  WIFISNOOP_PPDU_END_E                     = 474  ,
  WIFISNOOP_SPARE_E                        = 475  ,
  WIFIMACTX_PREFETCH_CV_BULK_E             = 476  ,
  WIFIMACTX_PREFETCH_CV_BULK_USER_E        = 477  ,
  WIFIPHYRX_OTHER_RECEIVE_INFO_MU_RSSI_COMMON_E = 478  ,
  WIFIPHYRX_OTHER_RECEIVE_INFO_MU_RSSI_USER_E = 479  ,
  WIFIMACTX_OTHER_TRANSMIT_INFO_SCH_DETAILS_E = 480  ,
  WIFISW_MONITOR_RING_E                    = 481  ,
  WIFIPHYRX_OTHER_RECEIVE_INFO_108P_EVM_DETAILS_E = 482  ,
  WIFISCH_TLV_WRAPPER_E                    = 483  ,
  WIFISCHEDULER_STATUS_WRAPPER_E           = 484  ,
  WIFIMACTX_OTHER_TRANSMIT_INFO_EXPECT_RX_E = 485  ,
  WIFITX_HW_MPDU_LINK_E                    = 486  ,
  WIFITX_HW_MPDU_LINK_PTR_E                = 487  ,
  WIFITX_HW_MPDU_QUEUE_EXT_E               = 488  ,
  WIFITX_HW_MPDU_QUEUE_HEAD_E              = 489  ,
  WIFITQM_ADD_MPDUS_E                      = 490  ,
  WIFITQM_WRITE_BACK_MPDU_INFO_E           = 491  ,
  WIFIUNIFORM_TQM_LITE_STATUS_HEADER_E     = 492  ,
  WIFITQM_ADD_MPDUS_STATUS_E               = 493  ,
  WIFITQM_MPDU_RELEASE_STATUS_E            = 494  ,
  WIFITQM_WRITE_BACK_MPDU_INFO_STATUS_E    = 495  ,
  WIFITX_HW_MPDU_DETAILS_E                 = 496  ,
  WIFITLV_BASE_E                           = 511

} tlv_tag_def__e;

#endif

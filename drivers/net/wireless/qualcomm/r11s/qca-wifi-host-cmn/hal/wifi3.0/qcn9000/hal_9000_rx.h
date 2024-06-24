/*
 * Copyright (c) 2016-2021 The Linux Foundation. All rights reserved.
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

#include "sw_monitor_ring.h"
#include "hal_rx.h"
#include "hal_api_mon.h"

#define HAL_RX_MSDU0_BUFFER_ADDR_LSB(link_desc_va)      \
	((uint8_t *)(link_desc_va) +			\
	RX_MSDU_LINK_8_MSDU_0_BUFFER_ADDR_INFO_DETAILS_BUFFER_ADDR_31_0_OFFSET)

#define HAL_RX_MSDU_DESC_INFO_PTR_GET(msdu0)			\
	((uint8_t *)(msdu0) +				\
	RX_MSDU_DETAILS_2_RX_MSDU_DESC_INFO_DETAILS_FIRST_MSDU_IN_MPDU_FLAG_OFFSET)

#define HAL_ENT_MPDU_DESC_INFO(ent_ring_desc)		\
	((uint8_t *)(ent_ring_desc) +			\
	RX_MPDU_DETAILS_2_RX_MPDU_DESC_INFO_DETAILS_MSDU_COUNT_OFFSET)

#define HAL_DST_MPDU_DESC_INFO(dst_ring_desc)		\
	((uint8_t *)(dst_ring_desc) +			\
	REO_DESTINATION_RING_2_RX_MPDU_DESC_INFO_DETAILS_MSDU_COUNT_OFFSET)

#define HAL_RX_GET_FC_VALID(rx_mpdu_start)	\
	HAL_RX_GET(rx_mpdu_start, RX_MPDU_INFO_11, MPDU_FRAME_CONTROL_VALID)

#define HAL_RX_GET_TO_DS_FLAG(rx_mpdu_start)	\
	HAL_RX_GET(rx_mpdu_start, RX_MPDU_INFO_11, TO_DS)

#define HAL_RX_GET_MAC_ADDR1_VALID(rx_mpdu_start) \
	HAL_RX_GET(rx_mpdu_start, RX_MPDU_INFO_11, MAC_ADDR_AD1_VALID)

#define HAL_RX_GET_MAC_ADDR2_VALID(rx_mpdu_start) \
	HAL_RX_GET(rx_mpdu_start, RX_MPDU_INFO_11, MAC_ADDR_AD2_VALID)

#define HAL_RX_GET_FILTER_CATEGORY(rx_mpdu_start) \
	HAL_RX_GET(rx_mpdu_start, RX_MPDU_INFO_9, RXPCU_MPDU_FILTER_IN_CATEGORY)

#define HAL_RX_GET_PPDU_ID(rx_mpdu_start)	\
	HAL_RX_GET(rx_mpdu_start, RX_MPDU_INFO_9, PHY_PPDU_ID)

#define HAL_RX_GET_SW_FRAME_GROUP_ID(rx_mpdu_start)	\
	HAL_RX_GET(rx_mpdu_start, RX_MPDU_INFO_9, SW_FRAME_GROUP_ID)

#define HAL_RX_GET_SW_PEER_ID(rx_mpdu_start)	\
	HAL_RX_GET(rx_mpdu_start, RX_MPDU_INFO_10, SW_PEER_ID)

#define HAL_REO_R0_CONFIG(soc, reg_val, reo_params)		\
	do { \
		reg_val &= \
			~(HWIO_REO_R0_GENERAL_ENABLE_FRAGMENT_DEST_RING_BMSK |\
			HWIO_REO_R0_GENERAL_ENABLE_AGING_LIST_ENABLE_BMSK | \
			HWIO_REO_R0_GENERAL_ENABLE_AGING_FLUSH_ENABLE_BMSK); \
		reg_val |= \
			HAL_SM(HWIO_REO_R0_GENERAL_ENABLE, \
			       FRAGMENT_DEST_RING, \
			       (reo_params)->frag_dst_ring) |	\
			HAL_SM(HWIO_REO_R0_GENERAL_ENABLE, \
			       AGING_LIST_ENABLE, 1) |\
			HAL_SM(HWIO_REO_R0_GENERAL_ENABLE, \
			       AGING_FLUSH_ENABLE, 1);\
		HAL_REG_WRITE((soc), \
			      HWIO_REO_R0_GENERAL_ENABLE_ADDR( \
			      SEQ_WCSS_UMAC_REO_REG_OFFSET), \
			      (reg_val)); \
		(reg_val) = \
		HAL_REG_READ((soc), \
			     HWIO_REO_R0_DESTINATION_RING_ALT_CTRL_IX_0_ADDR(	\
			     SEQ_WCSS_UMAC_REO_REG_OFFSET)); \
		(reg_val) &= \
			~(HWIO_REO_R0_DESTINATION_RING_ALT_CTRL_IX_0_DEST_RING_ALT_MAPPING_0_BMSK); \
		(reg_val) |= \
			HAL_SM(HWIO_REO_R0_DESTINATION_RING_ALT_CTRL_IX_0, \
			       DEST_RING_ALT_MAPPING_0, \
			       (reo_params)->alt_dst_ind_0); \
		HAL_REG_WRITE((soc), \
			      HWIO_REO_R0_DESTINATION_RING_ALT_CTRL_IX_0_ADDR( \
			      SEQ_WCSS_UMAC_REO_REG_OFFSET), \
			      (reg_val)); \
	} while (0)

#define HAL_RX_MSDU_DESC_INFO_GET(msdu_details_ptr) \
	((struct rx_msdu_desc_info *) \
	_OFFSET_TO_BYTE_PTR((msdu_details_ptr), \
	UNIFIED_RX_MSDU_DETAILS_2_RX_MSDU_DESC_INFO_RX_MSDU_DESC_INFO_DETAILS_OFFSET))

#define HAL_RX_LINK_DESC_MSDU0_PTR(link_desc)   \
	((struct rx_msdu_details *) \
	 _OFFSET_TO_BYTE_PTR((link_desc),\
	UNIFIED_RX_MSDU_LINK_8_RX_MSDU_DETAILS_MSDU_0_OFFSET))

#define HAL_RX_TLV_GET_TCP_CHKSUM(buf) \
	(_HAL_MS( \
		 (*_OFFSET_TO_WORD_PTR(&(((struct rx_pkt_tlvs *)(buf))->\
			 msdu_end_tlv.rx_msdu_end), \
			 RX_MSDU_END_10_TCP_UDP_CHKSUM_OFFSET)), \
		RX_MSDU_END_10_TCP_UDP_CHKSUM_MASK, \
		RX_MSDU_END_10_TCP_UDP_CHKSUM_LSB))

#define HAL_RX_MSDU_END_FIRST_MSDU_GET(_rx_msdu_end)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,	\
		RX_MSDU_END_10_FIRST_MSDU_OFFSET)),	\
		RX_MSDU_END_10_FIRST_MSDU_MASK,		\
		RX_MSDU_END_10_FIRST_MSDU_LSB))

#define HAL_RX_MSDU_END_LAST_MSDU_GET(_rx_msdu_end)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,	\
		RX_MSDU_END_10_LAST_MSDU_OFFSET)),	\
		RX_MSDU_END_10_LAST_MSDU_MASK,		\
		RX_MSDU_END_10_LAST_MSDU_LSB))

#define HAL_RX_MSDU_END_SA_IS_VALID_GET(_rx_msdu_end)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,	\
		RX_MSDU_END_10_SA_IS_VALID_OFFSET)),	\
		RX_MSDU_END_10_SA_IS_VALID_MASK,		\
		RX_MSDU_END_10_SA_IS_VALID_LSB))

#define HAL_RX_MSDU_END_DA_IS_VALID_GET(_rx_msdu_end)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,	\
		RX_MSDU_END_10_DA_IS_VALID_OFFSET)),	\
		RX_MSDU_END_10_DA_IS_VALID_MASK,		\
		RX_MSDU_END_10_DA_IS_VALID_LSB))

#define HAL_RX_MSDU_END_DA_IS_MCBC_GET(_rx_msdu_end)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,	\
		RX_MSDU_END_10_DA_IS_MCBC_OFFSET)),	\
		RX_MSDU_END_10_DA_IS_MCBC_MASK,		\
		RX_MSDU_END_10_DA_IS_MCBC_LSB))

#define HAL_RX_MSDU_END_L3_HEADER_PADDING_GET(_rx_msdu_end)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,		\
		RX_MSDU_END_10_L3_HEADER_PADDING_OFFSET)),	\
		RX_MSDU_END_10_L3_HEADER_PADDING_MASK,		\
		RX_MSDU_END_10_L3_HEADER_PADDING_LSB))

#define HAL_RX_MSDU_END_SA_IDX_GET(_rx_msdu_end)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,	\
		RX_MSDU_END_11_SA_IDX_OFFSET)),	\
		RX_MSDU_END_11_SA_IDX_MASK,		\
		RX_MSDU_END_11_SA_IDX_LSB))

#define HAL_RX_MSDU_END_SA_SW_PEER_ID_GET(_rx_msdu_end)		\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,		\
		RX_MSDU_END_14_SA_SW_PEER_ID_OFFSET)),		\
		RX_MSDU_END_14_SA_SW_PEER_ID_MASK,		\
		RX_MSDU_END_14_SA_SW_PEER_ID_LSB))

#define HAL_RX_MSDU_END_CCE_METADATA_GET(_rx_msdu_end)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,	\
		RX_MSDU_END_14_CCE_METADATA_OFFSET)),	\
		RX_MSDU_END_14_CCE_METADATA_MASK,	\
		RX_MSDU_END_14_CCE_METADATA_LSB))

#define HAL_RX_MSDU_END_DA_IDX_GET(_rx_msdu_end)		\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,		\
		RX_MSDU_END_11_DA_IDX_OR_SW_PEER_ID_OFFSET)),	\
		RX_MSDU_END_11_DA_IDX_OR_SW_PEER_ID_MASK,	\
		RX_MSDU_END_11_DA_IDX_OR_SW_PEER_ID_LSB))

#define HAL_RX_MPDU_SW_FRAME_GROUP_ID_GET(_rx_mpdu_info) \
	(_HAL_MS((*_OFFSET_TO_WORD_PTR((_rx_mpdu_info),  \
	RX_MPDU_INFO_9_SW_FRAME_GROUP_ID_OFFSET)),       \
	RX_MPDU_INFO_9_SW_FRAME_GROUP_ID_MASK,           \
	RX_MPDU_INFO_9_SW_FRAME_GROUP_ID_LSB))           \

#define HAL_RX_MPDU_INFO_SW_PEER_ID_GET(_rx_mpdu_info) \
	(_HAL_MS((*_OFFSET_TO_WORD_PTR((_rx_mpdu_info),	\
		RX_MPDU_INFO_10_SW_PEER_ID_OFFSET)),	\
		RX_MPDU_INFO_10_SW_PEER_ID_MASK,		\
		RX_MPDU_INFO_10_SW_PEER_ID_LSB))

#define HAL_RX_MPDU_GET_FRAME_CONTROL_VALID(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info,	\
		RX_MPDU_INFO_11_MPDU_FRAME_CONTROL_VALID_OFFSET)),	\
		RX_MPDU_INFO_11_MPDU_FRAME_CONTROL_VALID_MASK,	\
		RX_MPDU_INFO_11_MPDU_FRAME_CONTROL_VALID_LSB))

#define HAL_RX_MPDU_MAC_ADDR_AD1_VALID_GET(_rx_mpdu_info) \
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info, \
		RX_MPDU_INFO_11_MAC_ADDR_AD1_VALID_OFFSET)), \
		RX_MPDU_INFO_11_MAC_ADDR_AD1_VALID_MASK,	\
		RX_MPDU_INFO_11_MAC_ADDR_AD1_VALID_LSB))

#define HAL_RX_MPDU_AD1_31_0_GET(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info, \
		RX_MPDU_INFO_15_MAC_ADDR_AD1_31_0_OFFSET)), \
		RX_MPDU_INFO_15_MAC_ADDR_AD1_31_0_MASK,	\
		RX_MPDU_INFO_15_MAC_ADDR_AD1_31_0_LSB))

#define HAL_RX_MPDU_AD1_47_32_GET(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info, \
		RX_MPDU_INFO_16_MAC_ADDR_AD1_47_32_OFFSET)), \
		RX_MPDU_INFO_16_MAC_ADDR_AD1_47_32_MASK,	\
		RX_MPDU_INFO_16_MAC_ADDR_AD1_47_32_LSB))

#define HAL_RX_MPDU_MAC_ADDR_AD2_VALID_GET(_rx_mpdu_info) \
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info, \
		RX_MPDU_INFO_11_MAC_ADDR_AD2_VALID_OFFSET)), \
		RX_MPDU_INFO_11_MAC_ADDR_AD2_VALID_MASK,	\
		RX_MPDU_INFO_11_MAC_ADDR_AD2_VALID_LSB))

#define HAL_RX_MPDU_AD2_15_0_GET(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info, \
		RX_MPDU_INFO_16_MAC_ADDR_AD2_15_0_OFFSET)), \
		RX_MPDU_INFO_16_MAC_ADDR_AD2_15_0_MASK,	\
		RX_MPDU_INFO_16_MAC_ADDR_AD2_15_0_LSB))

#define HAL_RX_MPDU_AD2_47_16_GET(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info, \
		RX_MPDU_INFO_17_MAC_ADDR_AD2_47_16_OFFSET)), \
		RX_MPDU_INFO_17_MAC_ADDR_AD2_47_16_MASK,	\
		RX_MPDU_INFO_17_MAC_ADDR_AD2_47_16_LSB))

#define HAL_RX_MPDU_MAC_ADDR_AD3_VALID_GET(_rx_mpdu_info) \
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info, \
		RX_MPDU_INFO_11_MAC_ADDR_AD3_VALID_OFFSET)), \
		RX_MPDU_INFO_11_MAC_ADDR_AD3_VALID_MASK,	\
		RX_MPDU_INFO_11_MAC_ADDR_AD3_VALID_LSB))

#define HAL_RX_MPDU_AD3_31_0_GET(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info, \
		RX_MPDU_INFO_18_MAC_ADDR_AD3_31_0_OFFSET)), \
		RX_MPDU_INFO_18_MAC_ADDR_AD3_31_0_MASK,	\
		RX_MPDU_INFO_18_MAC_ADDR_AD3_31_0_LSB))

#define HAL_RX_MPDU_AD3_47_32_GET(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info, \
		RX_MPDU_INFO_19_MAC_ADDR_AD3_47_32_OFFSET)), \
		RX_MPDU_INFO_19_MAC_ADDR_AD3_47_32_MASK,	\
		RX_MPDU_INFO_19_MAC_ADDR_AD3_47_32_LSB))

#define HAL_RX_MPDU_MAC_ADDR_AD4_VALID_GET(_rx_mpdu_info) \
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info, \
		RX_MPDU_INFO_11_MAC_ADDR_AD4_VALID_OFFSET)), \
		RX_MPDU_INFO_11_MAC_ADDR_AD4_VALID_MASK,	\
		RX_MPDU_INFO_11_MAC_ADDR_AD4_VALID_LSB))

#define HAL_RX_MPDU_AD4_31_0_GET(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info, \
		RX_MPDU_INFO_20_MAC_ADDR_AD4_31_0_OFFSET)), \
		RX_MPDU_INFO_20_MAC_ADDR_AD4_31_0_MASK,	\
		RX_MPDU_INFO_20_MAC_ADDR_AD4_31_0_LSB))

#define HAL_RX_MPDU_AD4_47_32_GET(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info, \
		RX_MPDU_INFO_21_MAC_ADDR_AD4_47_32_OFFSET)), \
		RX_MPDU_INFO_21_MAC_ADDR_AD4_47_32_MASK,	\
		RX_MPDU_INFO_21_MAC_ADDR_AD4_47_32_LSB))

#define HAL_RX_MPDU_GET_SEQUENCE_CONTROL_VALID(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info,	\
		RX_MPDU_INFO_11_MPDU_SEQUENCE_CONTROL_VALID_OFFSET)),	\
		RX_MPDU_INFO_11_MPDU_SEQUENCE_CONTROL_VALID_MASK,	\
		RX_MPDU_INFO_11_MPDU_SEQUENCE_CONTROL_VALID_LSB))

#define HAL_RX_MPDU_INFO_QOS_CONTROL_VALID_GET(_rx_mpdu_info) \
	(_HAL_MS((*_OFFSET_TO_WORD_PTR((_rx_mpdu_info),		\
		RX_MPDU_INFO_11_MPDU_SEQUENCE_CONTROL_VALID_OFFSET)),	\
		RX_MPDU_INFO_11_MPDU_SEQUENCE_CONTROL_VALID_MASK,	\
		RX_MPDU_INFO_11_MPDU_SEQUENCE_CONTROL_VALID_LSB))

#define HAL_RX_MPDU_ENCRYPTION_INFO_VALID(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info,		\
	RX_MPDU_INFO_11_FRAME_ENCRYPTION_INFO_VALID_OFFSET)),	\
	RX_MPDU_INFO_11_FRAME_ENCRYPTION_INFO_VALID_MASK,	\
	RX_MPDU_INFO_11_FRAME_ENCRYPTION_INFO_VALID_LSB))

#define HAL_RX_MPDU_GET_FROMDS(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info,	\
		RX_MPDU_INFO_11_FR_DS_OFFSET)),	\
		RX_MPDU_INFO_11_FR_DS_MASK,	\
		RX_MPDU_INFO_11_FR_DS_LSB))

#define HAL_RX_MPDU_GET_TODS(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info,	\
		RX_MPDU_INFO_11_TO_DS_OFFSET)),	\
		RX_MPDU_INFO_11_TO_DS_MASK,	\
		RX_MPDU_INFO_11_TO_DS_LSB))

#define HAL_RX_MPDU_GET_SEQUENCE_NUMBER(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info,	\
		RX_MPDU_INFO_11_MPDU_SEQUENCE_NUMBER_OFFSET)),	\
		RX_MPDU_INFO_11_MPDU_SEQUENCE_NUMBER_MASK,	\
		RX_MPDU_INFO_11_MPDU_SEQUENCE_NUMBER_LSB))

#define HAL_RX_MPDU_PN_31_0_GET(_rx_mpdu_info)		\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info,	\
	RX_MPDU_INFO_3_PN_31_0_OFFSET)),		\
	RX_MPDU_INFO_3_PN_31_0_MASK,			\
	RX_MPDU_INFO_3_PN_31_0_LSB))

#define HAL_RX_MPDU_PN_63_32_GET(_rx_mpdu_info)		\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info,	\
	RX_MPDU_INFO_4_PN_63_32_OFFSET)),		\
	RX_MPDU_INFO_4_PN_63_32_MASK,			\
	RX_MPDU_INFO_4_PN_63_32_LSB))

#define HAL_RX_MPDU_PN_95_64_GET(_rx_mpdu_info)		\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info,	\
	RX_MPDU_INFO_5_PN_95_64_OFFSET)),		\
	RX_MPDU_INFO_5_PN_95_64_MASK,			\
	RX_MPDU_INFO_5_PN_95_64_LSB))

#define HAL_RX_MPDU_PN_127_96_GET(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_mpdu_info,	\
	RX_MPDU_INFO_6_PN_127_96_OFFSET)),		\
	RX_MPDU_INFO_6_PN_127_96_MASK,			\
	RX_MPDU_INFO_6_PN_127_96_LSB))

#define HAL_RX_MSDU_END_FLOW_IDX_TIMEOUT_GET(_rx_msdu_end)  \
		(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,  \
		RX_MSDU_END_10_FLOW_IDX_TIMEOUT_OFFSET)),  \
		RX_MSDU_END_10_FLOW_IDX_TIMEOUT_MASK,    \
		RX_MSDU_END_10_FLOW_IDX_TIMEOUT_LSB))

#define HAL_RX_MSDU_END_FLOW_IDX_INVALID_GET(_rx_msdu_end)  \
		(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,  \
		RX_MSDU_END_10_FLOW_IDX_INVALID_OFFSET)),  \
		RX_MSDU_END_10_FLOW_IDX_INVALID_MASK,    \
		RX_MSDU_END_10_FLOW_IDX_INVALID_LSB))

#define HAL_RX_MSDU_END_FLOW_IDX_GET(_rx_msdu_end)  \
		(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,  \
		RX_MSDU_END_12_FLOW_IDX_OFFSET)),  \
		RX_MSDU_END_12_FLOW_IDX_MASK,    \
		RX_MSDU_END_12_FLOW_IDX_LSB))

#define HAL_RX_MSDU_END_FSE_METADATA_GET(_rx_msdu_end)  \
		(_HAL_MS((*_OFFSET_TO_WORD_PTR(_rx_msdu_end,  \
		RX_MSDU_END_13_FSE_METADATA_OFFSET)),	\
		RX_MSDU_END_13_FSE_METADATA_MASK,    \
		RX_MSDU_END_13_FSE_METADATA_LSB))

#define HAL_RX_MPDU_GET_PHY_PPDU_ID(_rx_mpdu_info)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR((_rx_mpdu_info),	\
	RX_MPDU_INFO_9_PHY_PPDU_ID_OFFSET)),		\
	RX_MPDU_INFO_9_PHY_PPDU_ID_MASK,		\
	RX_MPDU_INFO_9_PHY_PPDU_ID_LSB))		\

#define HAL_RX_MSDU_START_MIMO_SS_BITMAP(_rx_msdu_start)\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR((_rx_msdu_start),\
	RX_MSDU_START_5_MIMO_SS_BITMAP_OFFSET)),	\
	RX_MSDU_START_5_MIMO_SS_BITMAP_MASK,		\
	RX_MSDU_START_5_MIMO_SS_BITMAP_LSB))

#ifdef GET_MSDU_AGGREGATION
#define HAL_RX_GET_MSDU_AGGREGATION(rx_desc, rs)\
{\
	struct rx_msdu_end *rx_msdu_end;\
	bool first_msdu, last_msdu; \
	rx_msdu_end = &rx_desc->msdu_end_tlv.rx_msdu_end;\
	first_msdu = HAL_RX_GET(rx_msdu_end, RX_MSDU_END_10, FIRST_MSDU);\
	last_msdu = HAL_RX_GET(rx_msdu_end, RX_MSDU_END_10, LAST_MSDU);\
	if (first_msdu && last_msdu)\
		rs->rs_flags &= (~IEEE80211_AMSDU_FLAG);\
	else\
		rs->rs_flags |= (IEEE80211_AMSDU_FLAG); \
} \

#else
#define HAL_RX_GET_MSDU_AGGREGATION(rx_desc, rs)
#endif

#define HAL_RX_MPDU_INFO_TID_GET(_rx_mpdu_info) \
	(_HAL_MS((*_OFFSET_TO_WORD_PTR((_rx_mpdu_info),	\
		RX_MPDU_INFO_7_TID_OFFSET)),		\
		RX_MPDU_INFO_7_TID_MASK,		\
		RX_MPDU_INFO_7_TID_LSB))

#define HAL_RX_MSDU_START_RECEPTION_TYPE_GET(_rx_msdu_start)	\
	(_HAL_MS((*_OFFSET_TO_WORD_PTR((_rx_msdu_start),	\
	RX_MSDU_START_5_RECEPTION_TYPE_OFFSET)),		\
	RX_MSDU_START_5_RECEPTION_TYPE_MASK,			\
	RX_MSDU_START_5_RECEPTION_TYPE_LSB))

#define RX_LOCATION_INFO_DETAILS_RESERVED_8_CHAN_CAPTURE_STATUS_BMASK 0x3

#define GET_RX_LOCATION_INFO_CHAN_CAPTURE_STATUS(rx_tlv) \
	(HAL_RX_GET(rx_tlv, \
		    PHYRX_PKT_END_13_RX_PKT_END_DETAILS_RX_LOCATION_INFO_DETAILS, \
		    RESERVED_8) & \
	 RX_LOCATION_INFO_DETAILS_RESERVED_8_CHAN_CAPTURE_STATUS_BMASK)

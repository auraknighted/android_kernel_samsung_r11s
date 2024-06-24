/* SPDX-License-Identifier: GPL-2.0 */
/* Copyright (C) 2012-2019 ARM Limited or its affiliates. */

#ifndef __CC_HOST_H__
#define __CC_HOST_H__

// --------------------------------------
// BLOCK: HOST_P
// --------------------------------------


/* IRR */
#define CC_HOST_IRR_REG_OFFSET	0xA00UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_0_INT_BIT_SHIFT	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_0_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_DSCRPTR_COMPLETION_LOW_INT_BIT_SHIFT	0x2UL
#define CC_HOST_IRR_DSCRPTR_COMPLETION_LOW_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_1_INT_BIT_SHIFT	0x3UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_1_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_2_INT_BIT_SHIFT	0x4UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_2_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_3_INT_BIT_SHIFT	0x5UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_3_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_4_INT_BIT_SHIFT	0x6UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_4_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_5_INT_BIT_SHIFT	0x7UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_5_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_AXI_ERR_INT_BIT_SHIFT	0x8UL
#define CC_HOST_IRR_AXI_ERR_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_6_INT_BIT_SHIFT	0x9UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_6_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_7_INT_BIT_SHIFT	0xAUL
#define CC_HOST_IRR_REE_OP_ABORTED_AES_7_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_GPR0_BIT_SHIFT	0xBUL
#define CC_HOST_IRR_GPR0_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_0_INT_BIT_SHIFT	0xCUL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_0_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_1_INT_BIT_SHIFT	0xDUL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_1_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_2_INT_BIT_SHIFT	0xEUL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_2_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_3_INT_BIT_SHIFT	0xFUL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_3_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_4_INT_BIT_SHIFT	0x10UL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_4_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_5_INT_BIT_SHIFT	0x11UL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_5_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_6_INT_BIT_SHIFT	0x12UL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_6_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_DSCRPTR_WATERMARK_INT_BIT_SHIFT	0x13UL
#define CC_HOST_IRR_DSCRPTR_WATERMARK_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_7_INT_BIT_SHIFT	0x14UL
#define CC_HOST_IRR_REE_OP_ABORTED_SM_7_INT_BIT_SIZE	0x1UL
#define CC_HOST_IRR_AXIM_COMP_INT_BIT_SHIFT	0x17UL
#define CC_HOST_IRR_AXIM_COMP_INT_BIT_SIZE	0x1UL
#define CC_HOST_SEP_SRAM_THRESHOLD_REG_OFFSET	0xA10UL
#define CC_HOST_SEP_SRAM_THRESHOLD_VALUE_BIT_SHIFT	0x0UL
#define CC_HOST_SEP_SRAM_THRESHOLD_VALUE_BIT_SIZE	0xCUL

/* IMR */
#define CC_HOST_IMR_REG_OFFSET	0x0A04UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_0_MASK_BIT_SHIFT	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_0_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_DSCRPTR_COMPLETION_MASK_BIT_SHIFT	0x2UL
#define CC_HOST_IMR_DSCRPTR_COMPLETION_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_1_MASK_BIT_SHIFT	0x3UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_1_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_2_MASK_BIT_SHIFT	0x4UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_2_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_3_MASK_BIT_SHIFT	0x5UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_3_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_4_MASK_BIT_SHIFT	0x6UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_4_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_5_MASK_BIT_SHIFT	0x7UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_5_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_AXI_ERR_MASK_BIT_SHIFT	0x8UL
#define CC_HOST_IMR_AXI_ERR_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_6_MASK_BIT_SHIFT	0x9UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_6_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_7_MASK_BIT_SHIFT	0xAUL
#define CC_HOST_IMR_REE_OP_ABORTED_AES_7_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_GPR0_BIT_SHIFT	0xBUL
#define CC_HOST_IMR_GPR0_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_0_MASK_BIT_SHIFT	0xCUL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_0_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_1_MASK_BIT_SHIFT	0xDUL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_1_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_2_MASK_BIT_SHIFT	0xEUL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_2_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_3_MASK_BIT_SHIFT	0xFUL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_3_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_4_MASK_BIT_SHIFT	0x10UL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_4_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_5_MASK_BIT_SHIFT	0x11UL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_5_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_6_MASK_BIT_SHIFT	0x12UL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_6_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_DSCRPTR_WATERMARK_MASK0_BIT_SHIFT	0x13UL
#define CC_HOST_IMR_DSCRPTR_WATERMARK_MASK0_BIT_SIZE	0x1UL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_7_MASK_BIT_SHIFT	0x14UL
#define CC_HOST_IMR_REE_OP_ABORTED_SM_7_MASK_BIT_SIZE	0x1UL
#define CC_HOST_IMR_AXIM_COMP_INT_MASK_BIT_SHIFT	0x17UL
#define CC_HOST_IMR_AXIM_COMP_INT_MASK_BIT_SIZE	0x1UL

/* ICR */
#define CC_HOST_ICR_REG_OFFSET	0xA08UL
#define CC_HOST_ICR_DSCRPTR_COMPLETION_BIT_SHIFT	0x2UL
#define CC_HOST_ICR_DSCRPTR_COMPLETION_BIT_SIZE	0x1UL
#define CC_HOST_ICR_AXI_ERR_CLEAR_BIT_SHIFT	0x8UL
#define CC_HOST_ICR_AXI_ERR_CLEAR_BIT_SIZE	0x1UL
#define CC_HOST_ICR_GPR_INT_CLEAR_BIT_SHIFT	0xBUL
#define CC_HOST_ICR_GPR_INT_CLEAR_BIT_SIZE	0x1UL
#define CC_HOST_ICR_DSCRPTR_WATERMARK_QUEUE0_CLEAR_BIT_SHIFT	0x13UL
#define CC_HOST_ICR_DSCRPTR_WATERMARK_QUEUE0_CLEAR_BIT_SIZE	0x1UL
#define CC_HOST_ICR_AXIM_COMP_INT_CLEAR_BIT_SHIFT	0x17UL
#define CC_HOST_ICR_AXIM_COMP_INT_CLEAR_BIT_SIZE	0x1UL
#define CC_NVM_IS_IDLE_REG_OFFSET       0x0A10UL
#define CC_NVM_IS_IDLE_VALUE_BIT_SHIFT  0x0UL
#define CC_NVM_IS_IDLE_VALUE_BIT_SIZE   0x1UL
#define CC_SECURITY_DISABLED_REG_OFFSET		0x0A1CUL
#define CC_SECURITY_DISABLED_VALUE_BIT_SHIFT	0x0UL
#define CC_SECURITY_DISABLED_VALUE_BIT_SIZE	0x1UL
#define CC_HOST_SIGNATURE_712_REG_OFFSET	0xA24UL
#define CC_HOST_SIGNATURE_630_REG_OFFSET	0xAC8UL
#define CC_HOST_SIGNATURE_VALUE_BIT_SHIFT	0x0UL
#define CC_HOST_SIGNATURE_VALUE_BIT_SIZE	0x20UL
#define CC_HOST_BOOT_REG_OFFSET	0xA28UL
#define CC_HOST_BOOT_SYNTHESIS_CONFIG_BIT_SHIFT	0x0UL
#define CC_HOST_BOOT_SYNTHESIS_CONFIG_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_LARGE_RKEK_LOCAL_BIT_SHIFT	0x1UL
#define CC_HOST_BOOT_LARGE_RKEK_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_HASH_IN_FUSES_LOCAL_BIT_SHIFT	0x2UL
#define CC_HOST_BOOT_HASH_IN_FUSES_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_EXT_MEM_SECURED_LOCAL_BIT_SHIFT	0x3UL
#define CC_HOST_BOOT_EXT_MEM_SECURED_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_RKEK_ECC_EXISTS_LOCAL_N_BIT_SHIFT	0x5UL
#define CC_HOST_BOOT_RKEK_ECC_EXISTS_LOCAL_N_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_SRAM_SIZE_LOCAL_BIT_SHIFT	0x6UL
#define CC_HOST_BOOT_SRAM_SIZE_LOCAL_BIT_SIZE	0x3UL
#define CC_HOST_BOOT_DSCRPTR_EXISTS_LOCAL_BIT_SHIFT	0x9UL
#define CC_HOST_BOOT_DSCRPTR_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_PAU_EXISTS_LOCAL_BIT_SHIFT	0xAUL
#define CC_HOST_BOOT_PAU_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_RNG_EXISTS_LOCAL_BIT_SHIFT	0xBUL
#define CC_HOST_BOOT_RNG_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_PKA_EXISTS_LOCAL_BIT_SHIFT	0xCUL
#define CC_HOST_BOOT_PKA_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_RC4_EXISTS_LOCAL_BIT_SHIFT	0xDUL
#define CC_HOST_BOOT_RC4_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_SHA_512_PRSNT_LOCAL_BIT_SHIFT	0xEUL
#define CC_HOST_BOOT_SHA_512_PRSNT_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_SHA_256_PRSNT_LOCAL_BIT_SHIFT	0xFUL
#define CC_HOST_BOOT_SHA_256_PRSNT_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_MD5_PRSNT_LOCAL_BIT_SHIFT	0x10UL
#define CC_HOST_BOOT_MD5_PRSNT_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_HASH_EXISTS_LOCAL_BIT_SHIFT	0x11UL
#define CC_HOST_BOOT_HASH_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_C2_EXISTS_LOCAL_BIT_SHIFT	0x12UL
#define CC_HOST_BOOT_C2_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_DES_EXISTS_LOCAL_BIT_SHIFT	0x13UL
#define CC_HOST_BOOT_DES_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_AES_XCBC_MAC_EXISTS_LOCAL_BIT_SHIFT	0x14UL
#define CC_HOST_BOOT_AES_XCBC_MAC_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_AES_CMAC_EXISTS_LOCAL_BIT_SHIFT	0x15UL
#define CC_HOST_BOOT_AES_CMAC_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_AES_CCM_EXISTS_LOCAL_BIT_SHIFT	0x16UL
#define CC_HOST_BOOT_AES_CCM_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_AES_XEX_HW_T_CALC_LOCAL_BIT_SHIFT	0x17UL
#define CC_HOST_BOOT_AES_XEX_HW_T_CALC_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_AES_XEX_EXISTS_LOCAL_BIT_SHIFT	0x18UL
#define CC_HOST_BOOT_AES_XEX_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_CTR_EXISTS_LOCAL_BIT_SHIFT	0x19UL
#define CC_HOST_BOOT_CTR_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_AES_DIN_BYTE_RESOLUTION_LOCAL_BIT_SHIFT	0x1AUL
#define CC_HOST_BOOT_AES_DIN_BYTE_RESOLUTION_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_TUNNELING_ENB_LOCAL_BIT_SHIFT	0x1BUL
#define CC_HOST_BOOT_TUNNELING_ENB_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_SUPPORT_256_192_KEY_LOCAL_BIT_SHIFT	0x1CUL
#define CC_HOST_BOOT_SUPPORT_256_192_KEY_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_ONLY_ENCRYPT_LOCAL_BIT_SHIFT	0x1DUL
#define CC_HOST_BOOT_ONLY_ENCRYPT_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_BOOT_AES_EXISTS_LOCAL_BIT_SHIFT	0x1EUL
#define CC_HOST_BOOT_AES_EXISTS_LOCAL_BIT_SIZE	0x1UL
#define CC_HOST_VERSION_712_REG_OFFSET	0xA40UL
#define CC_HOST_VERSION_630_REG_OFFSET	0xAD8UL
#define CC_HOST_VERSION_VALUE_BIT_SHIFT	0x0UL
#define CC_HOST_VERSION_VALUE_BIT_SIZE	0x20UL
#define CC_HOST_KFDE0_VALID_REG_OFFSET	0xA60UL
#define CC_HOST_KFDE0_VALID_VALUE_BIT_SHIFT	0x0UL
#define CC_HOST_KFDE0_VALID_VALUE_BIT_SIZE	0x1UL
#define CC_HOST_KFDE1_VALID_REG_OFFSET	0xA64UL
#define CC_HOST_KFDE1_VALID_VALUE_BIT_SHIFT	0x0UL
#define CC_HOST_KFDE1_VALID_VALUE_BIT_SIZE	0x1UL
#define CC_HOST_KFDE2_VALID_REG_OFFSET	0xA68UL
#define CC_HOST_KFDE2_VALID_VALUE_BIT_SHIFT	0x0UL
#define CC_HOST_KFDE2_VALID_VALUE_BIT_SIZE	0x1UL
#define CC_HOST_KFDE3_VALID_REG_OFFSET	0xA6CUL
#define CC_HOST_KFDE3_VALID_VALUE_BIT_SHIFT	0x0UL
#define CC_HOST_KFDE3_VALID_VALUE_BIT_SIZE	0x1UL
#define CC_HOST_GPR0_REG_OFFSET	0xA70UL
#define CC_HOST_GPR0_VALUE_BIT_SHIFT	0x0UL
#define CC_HOST_GPR0_VALUE_BIT_SIZE	0x20UL
#define CC_GPR_HOST_REG_OFFSET	0xA74UL
#define CC_GPR_HOST_VALUE_BIT_SHIFT	0x0UL
#define CC_GPR_HOST_VALUE_BIT_SIZE	0x20UL
#define CC_HOST_POWER_DOWN_EN_REG_OFFSET	0xA78UL
#define CC_HOST_POWER_DOWN_EN_VALUE_BIT_SHIFT	0x0UL
#define CC_HOST_POWER_DOWN_EN_VALUE_BIT_SIZE	0x1UL
#define CC_HOST_REMOVE_INPUT_PINS_REG_OFFSET	0x0A7CUL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_AES_ENGINE_BIT_SHIFT	0x0UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_AES_ENGINE_BIT_SIZE	0x1UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_AES_MAC_ENGINE_BIT_SHIFT	0x1UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_AES_MAC_ENGINE_BIT_SIZE	0x1UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_GHASH_ENGINE_BIT_SHIFT	0x2UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_GHASH_ENGINE_BIT_SIZE	0x1UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_DES_ENGINE_BIT_SHIFT	0x3UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_DES_ENGINE_BIT_SIZE	0x1UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_HASH_ENGINE_BIT_SHIFT	0x4UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_HASH_ENGINE_BIT_SIZE	0x1UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_SM3_ENGINE_BIT_SHIFT	0x5UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_SM3_ENGINE_BIT_SIZE	0x1UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_SM4_ENGINE_BIT_SHIFT	0x6UL
#define CC_HOST_REMOVE_INPUT_PINS_REMOVE_SM4_ENGINE_BIT_SIZE	0x1UL
#define CC_HOST_REMOVE_INPUT_PINS_OTP_DISCONNECTED_BIT_SHIFT	0x7UL
#define CC_HOST_REMOVE_INPUT_PINS_OTP_DISCONNECTED_BIT_SIZE	0x1UL
// --------------------------------------
// BLOCK: ID_REGISTERS
// --------------------------------------
#define CC_PERIPHERAL_ID_4_REG_OFFSET	0x0FD0UL
#define CC_PERIPHERAL_ID_4_VALUE_BIT_SHIFT	0x0UL
#define CC_PERIPHERAL_ID_4_VALUE_BIT_SIZE	0x4UL
#define CC_PIDRESERVED0_REG_OFFSET	0x0FD4UL
#define CC_PIDRESERVED1_REG_OFFSET	0x0FD8UL
#define CC_PIDRESERVED2_REG_OFFSET	0x0FDCUL
#define CC_PERIPHERAL_ID_0_REG_OFFSET	0x0FE0UL
#define CC_PERIPHERAL_ID_0_VALUE_BIT_SHIFT	0x0UL
#define CC_PERIPHERAL_ID_0_VALUE_BIT_SIZE	0x8UL
#define CC_PERIPHERAL_ID_1_REG_OFFSET	0x0FE4UL
#define CC_PERIPHERAL_ID_1_PART_1_BIT_SHIFT	0x0UL
#define CC_PERIPHERAL_ID_1_PART_1_BIT_SIZE	0x4UL
#define CC_PERIPHERAL_ID_1_DES_0_JEP106_BIT_SHIFT	0x4UL
#define CC_PERIPHERAL_ID_1_DES_0_JEP106_BIT_SIZE	0x4UL
#define CC_PERIPHERAL_ID_2_REG_OFFSET	0x0FE8UL
#define CC_PERIPHERAL_ID_2_DES_1_JEP106_BIT_SHIFT	0x0UL
#define CC_PERIPHERAL_ID_2_DES_1_JEP106_BIT_SIZE	0x3UL
#define CC_PERIPHERAL_ID_2_JEDEC_BIT_SHIFT	0x3UL
#define CC_PERIPHERAL_ID_2_JEDEC_BIT_SIZE	0x1UL
#define CC_PERIPHERAL_ID_2_REVISION_BIT_SHIFT	0x4UL
#define CC_PERIPHERAL_ID_2_REVISION_BIT_SIZE	0x4UL
#define CC_PERIPHERAL_ID_3_REG_OFFSET	0x0FECUL
#define CC_PERIPHERAL_ID_3_CMOD_BIT_SHIFT	0x0UL
#define CC_PERIPHERAL_ID_3_CMOD_BIT_SIZE	0x4UL
#define CC_PERIPHERAL_ID_3_REVAND_BIT_SHIFT	0x4UL
#define CC_PERIPHERAL_ID_3_REVAND_BIT_SIZE	0x4UL
#define CC_COMPONENT_ID_0_REG_OFFSET	0x0FF0UL
#define CC_COMPONENT_ID_0_VALUE_BIT_SHIFT	0x0UL
#define CC_COMPONENT_ID_0_VALUE_BIT_SIZE	0x8UL
#define CC_COMPONENT_ID_1_REG_OFFSET	0x0FF4UL
#define CC_COMPONENT_ID_1_PRMBL_1_BIT_SHIFT	0x0UL
#define CC_COMPONENT_ID_1_PRMBL_1_BIT_SIZE	0x4UL
#define CC_COMPONENT_ID_1_CLASS_BIT_SHIFT	0x4UL
#define CC_COMPONENT_ID_1_CLASS_BIT_SIZE	0x4UL
#define CC_COMPONENT_ID_2_REG_OFFSET	0x0FF8UL
#define CC_COMPONENT_ID_2_VALUE_BIT_SHIFT	0x0UL
#define CC_COMPONENT_ID_2_VALUE_BIT_SIZE	0x8UL
#define CC_COMPONENT_ID_3_REG_OFFSET	0x0FFCUL
#define CC_COMPONENT_ID_3_VALUE_BIT_SHIFT	0x0UL
#define CC_COMPONENT_ID_3_VALUE_BIT_SIZE	0x8UL
// --------------------------------------
// BLOCK: HOST_SRAM
// --------------------------------------
#define CC_SRAM_DATA_REG_OFFSET	0xF00UL
#define CC_SRAM_DATA_VALUE_BIT_SHIFT	0x0UL
#define CC_SRAM_DATA_VALUE_BIT_SIZE	0x20UL
#define CC_SRAM_ADDR_REG_OFFSET	0xF04UL
#define CC_SRAM_ADDR_VALUE_BIT_SHIFT	0x0UL
#define CC_SRAM_ADDR_VALUE_BIT_SIZE	0xFUL
#define CC_SRAM_DATA_READY_REG_OFFSET	0xF08UL
#define CC_SRAM_DATA_READY_VALUE_BIT_SHIFT	0x0UL
#define CC_SRAM_DATA_READY_VALUE_BIT_SIZE	0x1UL

#endif //__CC_HOST_H__

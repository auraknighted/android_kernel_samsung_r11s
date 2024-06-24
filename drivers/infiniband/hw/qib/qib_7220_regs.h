/*
 * Copyright (c) 2008, 2009, 2010 QLogic Corporation. All rights reserved.
 *
 *
 * This software is available to you under a choice of one of two
 * licenses.  You may choose to be licensed under the terms of the GNU
 * General Public License (GPL) Version 2, available from the file
 * COPYING in the main directory of this source tree, or the
 * OpenIB.org BSD license below:
 *
 *     Redistribution and use in source and binary forms, with or
 *     without modification, are permitted provided that the following
 *     conditions are met:
 *
 *      - Redistributions of source code must retain the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer.
 *
 *      - Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the following
 *        disclaimer in the documentation and/or other materials
 *        provided with the distribution.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 */

/* This file is mechanically generated from RTL. Any hand-edits will be lost! */

#define QIB_7220_Revision_OFFS 0x0
#define QIB_7220_Revision_R_Simulator_LSB 0x3F
#define QIB_7220_Revision_R_Simulator_RMASK 0x1
#define QIB_7220_Revision_R_Emulation_LSB 0x3E
#define QIB_7220_Revision_R_Emulation_RMASK 0x1
#define QIB_7220_Revision_R_Emulation_Revcode_LSB 0x28
#define QIB_7220_Revision_R_Emulation_Revcode_RMASK 0x3FFFFF
#define QIB_7220_Revision_BoardID_LSB 0x20
#define QIB_7220_Revision_BoardID_RMASK 0xFF
#define QIB_7220_Revision_R_SW_LSB 0x18
#define QIB_7220_Revision_R_SW_RMASK 0xFF
#define QIB_7220_Revision_R_Arch_LSB 0x10
#define QIB_7220_Revision_R_Arch_RMASK 0xFF
#define QIB_7220_Revision_R_ChipRevMajor_LSB 0x8
#define QIB_7220_Revision_R_ChipRevMajor_RMASK 0xFF
#define QIB_7220_Revision_R_ChipRevMinor_LSB 0x0
#define QIB_7220_Revision_R_ChipRevMinor_RMASK 0xFF

#define QIB_7220_Control_OFFS 0x8
#define QIB_7220_Control_SyncResetExceptPcieIRAMRST_LSB 0x7
#define QIB_7220_Control_SyncResetExceptPcieIRAMRST_RMASK 0x1
#define QIB_7220_Control_PCIECplQDiagEn_LSB 0x6
#define QIB_7220_Control_PCIECplQDiagEn_RMASK 0x1
#define QIB_7220_Control_Reserved_LSB 0x5
#define QIB_7220_Control_Reserved_RMASK 0x1
#define QIB_7220_Control_TxLatency_LSB 0x4
#define QIB_7220_Control_TxLatency_RMASK 0x1
#define QIB_7220_Control_PCIERetryBufDiagEn_LSB 0x3
#define QIB_7220_Control_PCIERetryBufDiagEn_RMASK 0x1
#define QIB_7220_Control_LinkEn_LSB 0x2
#define QIB_7220_Control_LinkEn_RMASK 0x1
#define QIB_7220_Control_FreezeMode_LSB 0x1
#define QIB_7220_Control_FreezeMode_RMASK 0x1
#define QIB_7220_Control_SyncReset_LSB 0x0
#define QIB_7220_Control_SyncReset_RMASK 0x1

#define QIB_7220_PageAlign_OFFS 0x10

#define QIB_7220_PortCnt_OFFS 0x18

#define QIB_7220_SendRegBase_OFFS 0x30

#define QIB_7220_UserRegBase_OFFS 0x38

#define QIB_7220_CntrRegBase_OFFS 0x40

#define QIB_7220_Scratch_OFFS 0x48

#define QIB_7220_IntMask_OFFS 0x68
#define QIB_7220_IntMask_SDmaIntMask_LSB 0x3F
#define QIB_7220_IntMask_SDmaIntMask_RMASK 0x1
#define QIB_7220_IntMask_SDmaDisabledMasked_LSB 0x3E
#define QIB_7220_IntMask_SDmaDisabledMasked_RMASK 0x1
#define QIB_7220_IntMask_Reserved_LSB 0x31
#define QIB_7220_IntMask_Reserved_RMASK 0x1FFF
#define QIB_7220_IntMask_RcvUrg16IntMask_LSB 0x30
#define QIB_7220_IntMask_RcvUrg16IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg15IntMask_LSB 0x2F
#define QIB_7220_IntMask_RcvUrg15IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg14IntMask_LSB 0x2E
#define QIB_7220_IntMask_RcvUrg14IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg13IntMask_LSB 0x2D
#define QIB_7220_IntMask_RcvUrg13IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg12IntMask_LSB 0x2C
#define QIB_7220_IntMask_RcvUrg12IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg11IntMask_LSB 0x2B
#define QIB_7220_IntMask_RcvUrg11IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg10IntMask_LSB 0x2A
#define QIB_7220_IntMask_RcvUrg10IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg9IntMask_LSB 0x29
#define QIB_7220_IntMask_RcvUrg9IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg8IntMask_LSB 0x28
#define QIB_7220_IntMask_RcvUrg8IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg7IntMask_LSB 0x27
#define QIB_7220_IntMask_RcvUrg7IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg6IntMask_LSB 0x26
#define QIB_7220_IntMask_RcvUrg6IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg5IntMask_LSB 0x25
#define QIB_7220_IntMask_RcvUrg5IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg4IntMask_LSB 0x24
#define QIB_7220_IntMask_RcvUrg4IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg3IntMask_LSB 0x23
#define QIB_7220_IntMask_RcvUrg3IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg2IntMask_LSB 0x22
#define QIB_7220_IntMask_RcvUrg2IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg1IntMask_LSB 0x21
#define QIB_7220_IntMask_RcvUrg1IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvUrg0IntMask_LSB 0x20
#define QIB_7220_IntMask_RcvUrg0IntMask_RMASK 0x1
#define QIB_7220_IntMask_ErrorIntMask_LSB 0x1F
#define QIB_7220_IntMask_ErrorIntMask_RMASK 0x1
#define QIB_7220_IntMask_PioSetIntMask_LSB 0x1E
#define QIB_7220_IntMask_PioSetIntMask_RMASK 0x1
#define QIB_7220_IntMask_PioBufAvailIntMask_LSB 0x1D
#define QIB_7220_IntMask_PioBufAvailIntMask_RMASK 0x1
#define QIB_7220_IntMask_assertGPIOIntMask_LSB 0x1C
#define QIB_7220_IntMask_assertGPIOIntMask_RMASK 0x1
#define QIB_7220_IntMask_IBSerdesTrimDoneIntMask_LSB 0x1B
#define QIB_7220_IntMask_IBSerdesTrimDoneIntMask_RMASK 0x1
#define QIB_7220_IntMask_JIntMask_LSB 0x1A
#define QIB_7220_IntMask_JIntMask_RMASK 0x1
#define QIB_7220_IntMask_Reserved1_LSB 0x11
#define QIB_7220_IntMask_Reserved1_RMASK 0x1FF
#define QIB_7220_IntMask_RcvAvail16IntMask_LSB 0x10
#define QIB_7220_IntMask_RcvAvail16IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail15IntMask_LSB 0xF
#define QIB_7220_IntMask_RcvAvail15IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail14IntMask_LSB 0xE
#define QIB_7220_IntMask_RcvAvail14IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail13IntMask_LSB 0xD
#define QIB_7220_IntMask_RcvAvail13IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail12IntMask_LSB 0xC
#define QIB_7220_IntMask_RcvAvail12IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail11IntMask_LSB 0xB
#define QIB_7220_IntMask_RcvAvail11IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail10IntMask_LSB 0xA
#define QIB_7220_IntMask_RcvAvail10IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail9IntMask_LSB 0x9
#define QIB_7220_IntMask_RcvAvail9IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail8IntMask_LSB 0x8
#define QIB_7220_IntMask_RcvAvail8IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail7IntMask_LSB 0x7
#define QIB_7220_IntMask_RcvAvail7IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail6IntMask_LSB 0x6
#define QIB_7220_IntMask_RcvAvail6IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail5IntMask_LSB 0x5
#define QIB_7220_IntMask_RcvAvail5IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail4IntMask_LSB 0x4
#define QIB_7220_IntMask_RcvAvail4IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail3IntMask_LSB 0x3
#define QIB_7220_IntMask_RcvAvail3IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail2IntMask_LSB 0x2
#define QIB_7220_IntMask_RcvAvail2IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail1IntMask_LSB 0x1
#define QIB_7220_IntMask_RcvAvail1IntMask_RMASK 0x1
#define QIB_7220_IntMask_RcvAvail0IntMask_LSB 0x0
#define QIB_7220_IntMask_RcvAvail0IntMask_RMASK 0x1

#define QIB_7220_IntStatus_OFFS 0x70
#define QIB_7220_IntStatus_SDmaInt_LSB 0x3F
#define QIB_7220_IntStatus_SDmaInt_RMASK 0x1
#define QIB_7220_IntStatus_SDmaDisabled_LSB 0x3E
#define QIB_7220_IntStatus_SDmaDisabled_RMASK 0x1
#define QIB_7220_IntStatus_Reserved_LSB 0x31
#define QIB_7220_IntStatus_Reserved_RMASK 0x1FFF
#define QIB_7220_IntStatus_RcvUrg16_LSB 0x30
#define QIB_7220_IntStatus_RcvUrg16_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg15_LSB 0x2F
#define QIB_7220_IntStatus_RcvUrg15_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg14_LSB 0x2E
#define QIB_7220_IntStatus_RcvUrg14_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg13_LSB 0x2D
#define QIB_7220_IntStatus_RcvUrg13_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg12_LSB 0x2C
#define QIB_7220_IntStatus_RcvUrg12_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg11_LSB 0x2B
#define QIB_7220_IntStatus_RcvUrg11_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg10_LSB 0x2A
#define QIB_7220_IntStatus_RcvUrg10_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg9_LSB 0x29
#define QIB_7220_IntStatus_RcvUrg9_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg8_LSB 0x28
#define QIB_7220_IntStatus_RcvUrg8_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg7_LSB 0x27
#define QIB_7220_IntStatus_RcvUrg7_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg6_LSB 0x26
#define QIB_7220_IntStatus_RcvUrg6_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg5_LSB 0x25
#define QIB_7220_IntStatus_RcvUrg5_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg4_LSB 0x24
#define QIB_7220_IntStatus_RcvUrg4_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg3_LSB 0x23
#define QIB_7220_IntStatus_RcvUrg3_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg2_LSB 0x22
#define QIB_7220_IntStatus_RcvUrg2_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg1_LSB 0x21
#define QIB_7220_IntStatus_RcvUrg1_RMASK 0x1
#define QIB_7220_IntStatus_RcvUrg0_LSB 0x20
#define QIB_7220_IntStatus_RcvUrg0_RMASK 0x1
#define QIB_7220_IntStatus_Error_LSB 0x1F
#define QIB_7220_IntStatus_Error_RMASK 0x1
#define QIB_7220_IntStatus_PioSent_LSB 0x1E
#define QIB_7220_IntStatus_PioSent_RMASK 0x1
#define QIB_7220_IntStatus_PioBufAvail_LSB 0x1D
#define QIB_7220_IntStatus_PioBufAvail_RMASK 0x1
#define QIB_7220_IntStatus_assertGPIO_LSB 0x1C
#define QIB_7220_IntStatus_assertGPIO_RMASK 0x1
#define QIB_7220_IntStatus_IBSerdesTrimDone_LSB 0x1B
#define QIB_7220_IntStatus_IBSerdesTrimDone_RMASK 0x1
#define QIB_7220_IntStatus_JInt_LSB 0x1A
#define QIB_7220_IntStatus_JInt_RMASK 0x1
#define QIB_7220_IntStatus_Reserved1_LSB 0x11
#define QIB_7220_IntStatus_Reserved1_RMASK 0x1FF
#define QIB_7220_IntStatus_RcvAvail16_LSB 0x10
#define QIB_7220_IntStatus_RcvAvail16_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail15_LSB 0xF
#define QIB_7220_IntStatus_RcvAvail15_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail14_LSB 0xE
#define QIB_7220_IntStatus_RcvAvail14_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail13_LSB 0xD
#define QIB_7220_IntStatus_RcvAvail13_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail12_LSB 0xC
#define QIB_7220_IntStatus_RcvAvail12_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail11_LSB 0xB
#define QIB_7220_IntStatus_RcvAvail11_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail10_LSB 0xA
#define QIB_7220_IntStatus_RcvAvail10_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail9_LSB 0x9
#define QIB_7220_IntStatus_RcvAvail9_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail8_LSB 0x8
#define QIB_7220_IntStatus_RcvAvail8_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail7_LSB 0x7
#define QIB_7220_IntStatus_RcvAvail7_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail6_LSB 0x6
#define QIB_7220_IntStatus_RcvAvail6_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail5_LSB 0x5
#define QIB_7220_IntStatus_RcvAvail5_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail4_LSB 0x4
#define QIB_7220_IntStatus_RcvAvail4_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail3_LSB 0x3
#define QIB_7220_IntStatus_RcvAvail3_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail2_LSB 0x2
#define QIB_7220_IntStatus_RcvAvail2_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail1_LSB 0x1
#define QIB_7220_IntStatus_RcvAvail1_RMASK 0x1
#define QIB_7220_IntStatus_RcvAvail0_LSB 0x0
#define QIB_7220_IntStatus_RcvAvail0_RMASK 0x1

#define QIB_7220_IntClear_OFFS 0x78
#define QIB_7220_IntClear_SDmaIntClear_LSB 0x3F
#define QIB_7220_IntClear_SDmaIntClear_RMASK 0x1
#define QIB_7220_IntClear_SDmaDisabledClear_LSB 0x3E
#define QIB_7220_IntClear_SDmaDisabledClear_RMASK 0x1
#define QIB_7220_IntClear_Reserved_LSB 0x31
#define QIB_7220_IntClear_Reserved_RMASK 0x1FFF
#define QIB_7220_IntClear_RcvUrg16IntClear_LSB 0x30
#define QIB_7220_IntClear_RcvUrg16IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg15IntClear_LSB 0x2F
#define QIB_7220_IntClear_RcvUrg15IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg14IntClear_LSB 0x2E
#define QIB_7220_IntClear_RcvUrg14IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg13IntClear_LSB 0x2D
#define QIB_7220_IntClear_RcvUrg13IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg12IntClear_LSB 0x2C
#define QIB_7220_IntClear_RcvUrg12IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg11IntClear_LSB 0x2B
#define QIB_7220_IntClear_RcvUrg11IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg10IntClear_LSB 0x2A
#define QIB_7220_IntClear_RcvUrg10IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg9IntClear_LSB 0x29
#define QIB_7220_IntClear_RcvUrg9IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg8IntClear_LSB 0x28
#define QIB_7220_IntClear_RcvUrg8IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg7IntClear_LSB 0x27
#define QIB_7220_IntClear_RcvUrg7IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg6IntClear_LSB 0x26
#define QIB_7220_IntClear_RcvUrg6IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg5IntClear_LSB 0x25
#define QIB_7220_IntClear_RcvUrg5IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg4IntClear_LSB 0x24
#define QIB_7220_IntClear_RcvUrg4IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg3IntClear_LSB 0x23
#define QIB_7220_IntClear_RcvUrg3IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg2IntClear_LSB 0x22
#define QIB_7220_IntClear_RcvUrg2IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg1IntClear_LSB 0x21
#define QIB_7220_IntClear_RcvUrg1IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvUrg0IntClear_LSB 0x20
#define QIB_7220_IntClear_RcvUrg0IntClear_RMASK 0x1
#define QIB_7220_IntClear_ErrorIntClear_LSB 0x1F
#define QIB_7220_IntClear_ErrorIntClear_RMASK 0x1
#define QIB_7220_IntClear_PioSetIntClear_LSB 0x1E
#define QIB_7220_IntClear_PioSetIntClear_RMASK 0x1
#define QIB_7220_IntClear_PioBufAvailIntClear_LSB 0x1D
#define QIB_7220_IntClear_PioBufAvailIntClear_RMASK 0x1
#define QIB_7220_IntClear_assertGPIOIntClear_LSB 0x1C
#define QIB_7220_IntClear_assertGPIOIntClear_RMASK 0x1
#define QIB_7220_IntClear_IBSerdesTrimDoneClear_LSB 0x1B
#define QIB_7220_IntClear_IBSerdesTrimDoneClear_RMASK 0x1
#define QIB_7220_IntClear_JIntClear_LSB 0x1A
#define QIB_7220_IntClear_JIntClear_RMASK 0x1
#define QIB_7220_IntClear_Reserved1_LSB 0x11
#define QIB_7220_IntClear_Reserved1_RMASK 0x1FF
#define QIB_7220_IntClear_RcvAvail16IntClear_LSB 0x10
#define QIB_7220_IntClear_RcvAvail16IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail15IntClear_LSB 0xF
#define QIB_7220_IntClear_RcvAvail15IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail14IntClear_LSB 0xE
#define QIB_7220_IntClear_RcvAvail14IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail13IntClear_LSB 0xD
#define QIB_7220_IntClear_RcvAvail13IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail12IntClear_LSB 0xC
#define QIB_7220_IntClear_RcvAvail12IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail11IntClear_LSB 0xB
#define QIB_7220_IntClear_RcvAvail11IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail10IntClear_LSB 0xA
#define QIB_7220_IntClear_RcvAvail10IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail9IntClear_LSB 0x9
#define QIB_7220_IntClear_RcvAvail9IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail8IntClear_LSB 0x8
#define QIB_7220_IntClear_RcvAvail8IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail7IntClear_LSB 0x7
#define QIB_7220_IntClear_RcvAvail7IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail6IntClear_LSB 0x6
#define QIB_7220_IntClear_RcvAvail6IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail5IntClear_LSB 0x5
#define QIB_7220_IntClear_RcvAvail5IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail4IntClear_LSB 0x4
#define QIB_7220_IntClear_RcvAvail4IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail3IntClear_LSB 0x3
#define QIB_7220_IntClear_RcvAvail3IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail2IntClear_LSB 0x2
#define QIB_7220_IntClear_RcvAvail2IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail1IntClear_LSB 0x1
#define QIB_7220_IntClear_RcvAvail1IntClear_RMASK 0x1
#define QIB_7220_IntClear_RcvAvail0IntClear_LSB 0x0
#define QIB_7220_IntClear_RcvAvail0IntClear_RMASK 0x1

#define QIB_7220_ErrMask_OFFS 0x80
#define QIB_7220_ErrMask_Reserved_LSB 0x36
#define QIB_7220_ErrMask_Reserved_RMASK 0x3FF
#define QIB_7220_ErrMask_InvalidEEPCmdMask_LSB 0x35
#define QIB_7220_ErrMask_InvalidEEPCmdMask_RMASK 0x1
#define QIB_7220_ErrMask_SDmaDescAddrMisalignErrMask_LSB 0x34
#define QIB_7220_ErrMask_SDmaDescAddrMisalignErrMask_RMASK 0x1
#define QIB_7220_ErrMask_HardwareErrMask_LSB 0x33
#define QIB_7220_ErrMask_HardwareErrMask_RMASK 0x1
#define QIB_7220_ErrMask_ResetNegatedMask_LSB 0x32
#define QIB_7220_ErrMask_ResetNegatedMask_RMASK 0x1
#define QIB_7220_ErrMask_InvalidAddrErrMask_LSB 0x31
#define QIB_7220_ErrMask_InvalidAddrErrMask_RMASK 0x1
#define QIB_7220_ErrMask_IBStatusChangedMask_LSB 0x30
#define QIB_7220_ErrMask_IBStatusChangedMask_RMASK 0x1
#define QIB_7220_ErrMask_SDmaUnexpDataErrMask_LSB 0x2F
#define QIB_7220_ErrMask_SDmaUnexpDataErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SDmaMissingDwErrMask_LSB 0x2E
#define QIB_7220_ErrMask_SDmaMissingDwErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SDmaDwEnErrMask_LSB 0x2D
#define QIB_7220_ErrMask_SDmaDwEnErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SDmaRpyTagErrMask_LSB 0x2C
#define QIB_7220_ErrMask_SDmaRpyTagErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SDma1stDescErrMask_LSB 0x2B
#define QIB_7220_ErrMask_SDma1stDescErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SDmaBaseErrMask_LSB 0x2A
#define QIB_7220_ErrMask_SDmaBaseErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SDmaTailOutOfBoundErrMask_LSB 0x29
#define QIB_7220_ErrMask_SDmaTailOutOfBoundErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SDmaOutOfBoundErrMask_LSB 0x28
#define QIB_7220_ErrMask_SDmaOutOfBoundErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SDmaGenMismatchErrMask_LSB 0x27
#define QIB_7220_ErrMask_SDmaGenMismatchErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SendBufMisuseErrMask_LSB 0x26
#define QIB_7220_ErrMask_SendBufMisuseErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SendUnsupportedVLErrMask_LSB 0x25
#define QIB_7220_ErrMask_SendUnsupportedVLErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SendUnexpectedPktNumErrMask_LSB 0x24
#define QIB_7220_ErrMask_SendUnexpectedPktNumErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SendPioArmLaunchErrMask_LSB 0x23
#define QIB_7220_ErrMask_SendPioArmLaunchErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SendDroppedDataPktErrMask_LSB 0x22
#define QIB_7220_ErrMask_SendDroppedDataPktErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SendDroppedSmpPktErrMask_LSB 0x21
#define QIB_7220_ErrMask_SendDroppedSmpPktErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SendPktLenErrMask_LSB 0x20
#define QIB_7220_ErrMask_SendPktLenErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SendUnderRunErrMask_LSB 0x1F
#define QIB_7220_ErrMask_SendUnderRunErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SendMaxPktLenErrMask_LSB 0x1E
#define QIB_7220_ErrMask_SendMaxPktLenErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SendMinPktLenErrMask_LSB 0x1D
#define QIB_7220_ErrMask_SendMinPktLenErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SDmaDisabledErrMask_LSB 0x1C
#define QIB_7220_ErrMask_SDmaDisabledErrMask_RMASK 0x1
#define QIB_7220_ErrMask_SendSpecialTriggerErrMask_LSB 0x1B
#define QIB_7220_ErrMask_SendSpecialTriggerErrMask_RMASK 0x1
#define QIB_7220_ErrMask_Reserved1_LSB 0x12
#define QIB_7220_ErrMask_Reserved1_RMASK 0x1FF
#define QIB_7220_ErrMask_RcvIBLostLinkErrMask_LSB 0x11
#define QIB_7220_ErrMask_RcvIBLostLinkErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvHdrErrMask_LSB 0x10
#define QIB_7220_ErrMask_RcvHdrErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvHdrLenErrMask_LSB 0xF
#define QIB_7220_ErrMask_RcvHdrLenErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvBadTidErrMask_LSB 0xE
#define QIB_7220_ErrMask_RcvBadTidErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvHdrFullErrMask_LSB 0xD
#define QIB_7220_ErrMask_RcvHdrFullErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvEgrFullErrMask_LSB 0xC
#define QIB_7220_ErrMask_RcvEgrFullErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvBadVersionErrMask_LSB 0xB
#define QIB_7220_ErrMask_RcvBadVersionErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvIBFlowErrMask_LSB 0xA
#define QIB_7220_ErrMask_RcvIBFlowErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvEBPErrMask_LSB 0x9
#define QIB_7220_ErrMask_RcvEBPErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvUnsupportedVLErrMask_LSB 0x8
#define QIB_7220_ErrMask_RcvUnsupportedVLErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvUnexpectedCharErrMask_LSB 0x7
#define QIB_7220_ErrMask_RcvUnexpectedCharErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvShortPktLenErrMask_LSB 0x6
#define QIB_7220_ErrMask_RcvShortPktLenErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvLongPktLenErrMask_LSB 0x5
#define QIB_7220_ErrMask_RcvLongPktLenErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvMaxPktLenErrMask_LSB 0x4
#define QIB_7220_ErrMask_RcvMaxPktLenErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvMinPktLenErrMask_LSB 0x3
#define QIB_7220_ErrMask_RcvMinPktLenErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvICRCErrMask_LSB 0x2
#define QIB_7220_ErrMask_RcvICRCErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvVCRCErrMask_LSB 0x1
#define QIB_7220_ErrMask_RcvVCRCErrMask_RMASK 0x1
#define QIB_7220_ErrMask_RcvFormatErrMask_LSB 0x0
#define QIB_7220_ErrMask_RcvFormatErrMask_RMASK 0x1

#define QIB_7220_ErrStatus_OFFS 0x88
#define QIB_7220_ErrStatus_Reserved_LSB 0x36
#define QIB_7220_ErrStatus_Reserved_RMASK 0x3FF
#define QIB_7220_ErrStatus_InvalidEEPCmdErr_LSB 0x35
#define QIB_7220_ErrStatus_InvalidEEPCmdErr_RMASK 0x1
#define QIB_7220_ErrStatus_SDmaDescAddrMisalignErr_LSB 0x34
#define QIB_7220_ErrStatus_SDmaDescAddrMisalignErr_RMASK 0x1
#define QIB_7220_ErrStatus_HardwareErr_LSB 0x33
#define QIB_7220_ErrStatus_HardwareErr_RMASK 0x1
#define QIB_7220_ErrStatus_ResetNegated_LSB 0x32
#define QIB_7220_ErrStatus_ResetNegated_RMASK 0x1
#define QIB_7220_ErrStatus_InvalidAddrErr_LSB 0x31
#define QIB_7220_ErrStatus_InvalidAddrErr_RMASK 0x1
#define QIB_7220_ErrStatus_IBStatusChanged_LSB 0x30
#define QIB_7220_ErrStatus_IBStatusChanged_RMASK 0x1
#define QIB_7220_ErrStatus_SDmaUnexpDataErr_LSB 0x2F
#define QIB_7220_ErrStatus_SDmaUnexpDataErr_RMASK 0x1
#define QIB_7220_ErrStatus_SDmaMissingDwErr_LSB 0x2E
#define QIB_7220_ErrStatus_SDmaMissingDwErr_RMASK 0x1
#define QIB_7220_ErrStatus_SDmaDwEnErr_LSB 0x2D
#define QIB_7220_ErrStatus_SDmaDwEnErr_RMASK 0x1
#define QIB_7220_ErrStatus_SDmaRpyTagErr_LSB 0x2C
#define QIB_7220_ErrStatus_SDmaRpyTagErr_RMASK 0x1
#define QIB_7220_ErrStatus_SDma1stDescErr_LSB 0x2B
#define QIB_7220_ErrStatus_SDma1stDescErr_RMASK 0x1
#define QIB_7220_ErrStatus_SDmaBaseErr_LSB 0x2A
#define QIB_7220_ErrStatus_SDmaBaseErr_RMASK 0x1
#define QIB_7220_ErrStatus_SDmaTailOutOfBoundErr_LSB 0x29
#define QIB_7220_ErrStatus_SDmaTailOutOfBoundErr_RMASK 0x1
#define QIB_7220_ErrStatus_SDmaOutOfBoundErr_LSB 0x28
#define QIB_7220_ErrStatus_SDmaOutOfBoundErr_RMASK 0x1
#define QIB_7220_ErrStatus_SDmaGenMismatchErr_LSB 0x27
#define QIB_7220_ErrStatus_SDmaGenMismatchErr_RMASK 0x1
#define QIB_7220_ErrStatus_SendBufMisuseErr_LSB 0x26
#define QIB_7220_ErrStatus_SendBufMisuseErr_RMASK 0x1
#define QIB_7220_ErrStatus_SendUnsupportedVLErr_LSB 0x25
#define QIB_7220_ErrStatus_SendUnsupportedVLErr_RMASK 0x1
#define QIB_7220_ErrStatus_SendUnexpectedPktNumErr_LSB 0x24
#define QIB_7220_ErrStatus_SendUnexpectedPktNumErr_RMASK 0x1
#define QIB_7220_ErrStatus_SendPioArmLaunchErr_LSB 0x23
#define QIB_7220_ErrStatus_SendPioArmLaunchErr_RMASK 0x1
#define QIB_7220_ErrStatus_SendDroppedDataPktErr_LSB 0x22
#define QIB_7220_ErrStatus_SendDroppedDataPktErr_RMASK 0x1
#define QIB_7220_ErrStatus_SendDroppedSmpPktErr_LSB 0x21
#define QIB_7220_ErrStatus_SendDroppedSmpPktErr_RMASK 0x1
#define QIB_7220_ErrStatus_SendPktLenErr_LSB 0x20
#define QIB_7220_ErrStatus_SendPktLenErr_RMASK 0x1
#define QIB_7220_ErrStatus_SendUnderRunErr_LSB 0x1F
#define QIB_7220_ErrStatus_SendUnderRunErr_RMASK 0x1
#define QIB_7220_ErrStatus_SendMaxPktLenErr_LSB 0x1E
#define QIB_7220_ErrStatus_SendMaxPktLenErr_RMASK 0x1
#define QIB_7220_ErrStatus_SendMinPktLenErr_LSB 0x1D
#define QIB_7220_ErrStatus_SendMinPktLenErr_RMASK 0x1
#define QIB_7220_ErrStatus_SDmaDisabledErr_LSB 0x1C
#define QIB_7220_ErrStatus_SDmaDisabledErr_RMASK 0x1
#define QIB_7220_ErrStatus_SendSpecialTriggerErr_LSB 0x1B
#define QIB_7220_ErrStatus_SendSpecialTriggerErr_RMASK 0x1
#define QIB_7220_ErrStatus_Reserved1_LSB 0x12
#define QIB_7220_ErrStatus_Reserved1_RMASK 0x1FF
#define QIB_7220_ErrStatus_RcvIBLostLinkErr_LSB 0x11
#define QIB_7220_ErrStatus_RcvIBLostLinkErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvHdrErr_LSB 0x10
#define QIB_7220_ErrStatus_RcvHdrErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvHdrLenErr_LSB 0xF
#define QIB_7220_ErrStatus_RcvHdrLenErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvBadTidErr_LSB 0xE
#define QIB_7220_ErrStatus_RcvBadTidErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvHdrFullErr_LSB 0xD
#define QIB_7220_ErrStatus_RcvHdrFullErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvEgrFullErr_LSB 0xC
#define QIB_7220_ErrStatus_RcvEgrFullErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvBadVersionErr_LSB 0xB
#define QIB_7220_ErrStatus_RcvBadVersionErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvIBFlowErr_LSB 0xA
#define QIB_7220_ErrStatus_RcvIBFlowErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvEBPErr_LSB 0x9
#define QIB_7220_ErrStatus_RcvEBPErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvUnsupportedVLErr_LSB 0x8
#define QIB_7220_ErrStatus_RcvUnsupportedVLErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvUnexpectedCharErr_LSB 0x7
#define QIB_7220_ErrStatus_RcvUnexpectedCharErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvShortPktLenErr_LSB 0x6
#define QIB_7220_ErrStatus_RcvShortPktLenErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvLongPktLenErr_LSB 0x5
#define QIB_7220_ErrStatus_RcvLongPktLenErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvMaxPktLenErr_LSB 0x4
#define QIB_7220_ErrStatus_RcvMaxPktLenErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvMinPktLenErr_LSB 0x3
#define QIB_7220_ErrStatus_RcvMinPktLenErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvICRCErr_LSB 0x2
#define QIB_7220_ErrStatus_RcvICRCErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvVCRCErr_LSB 0x1
#define QIB_7220_ErrStatus_RcvVCRCErr_RMASK 0x1
#define QIB_7220_ErrStatus_RcvFormatErr_LSB 0x0
#define QIB_7220_ErrStatus_RcvFormatErr_RMASK 0x1

#define QIB_7220_ErrClear_OFFS 0x90
#define QIB_7220_ErrClear_Reserved_LSB 0x36
#define QIB_7220_ErrClear_Reserved_RMASK 0x3FF
#define QIB_7220_ErrClear_InvalidEEPCmdErrClear_LSB 0x35
#define QIB_7220_ErrClear_InvalidEEPCmdErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SDmaDescAddrMisalignErrClear_LSB 0x34
#define QIB_7220_ErrClear_SDmaDescAddrMisalignErrClear_RMASK 0x1
#define QIB_7220_ErrClear_HardwareErrClear_LSB 0x33
#define QIB_7220_ErrClear_HardwareErrClear_RMASK 0x1
#define QIB_7220_ErrClear_ResetNegatedClear_LSB 0x32
#define QIB_7220_ErrClear_ResetNegatedClear_RMASK 0x1
#define QIB_7220_ErrClear_InvalidAddrErrClear_LSB 0x31
#define QIB_7220_ErrClear_InvalidAddrErrClear_RMASK 0x1
#define QIB_7220_ErrClear_IBStatusChangedClear_LSB 0x30
#define QIB_7220_ErrClear_IBStatusChangedClear_RMASK 0x1
#define QIB_7220_ErrClear_SDmaUnexpDataErrClear_LSB 0x2F
#define QIB_7220_ErrClear_SDmaUnexpDataErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SDmaMissingDwErrClear_LSB 0x2E
#define QIB_7220_ErrClear_SDmaMissingDwErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SDmaDwEnErrClear_LSB 0x2D
#define QIB_7220_ErrClear_SDmaDwEnErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SDmaRpyTagErrClear_LSB 0x2C
#define QIB_7220_ErrClear_SDmaRpyTagErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SDma1stDescErrClear_LSB 0x2B
#define QIB_7220_ErrClear_SDma1stDescErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SDmaBaseErrClear_LSB 0x2A
#define QIB_7220_ErrClear_SDmaBaseErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SDmaTailOutOfBoundErrClear_LSB 0x29
#define QIB_7220_ErrClear_SDmaTailOutOfBoundErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SDmaOutOfBoundErrClear_LSB 0x28
#define QIB_7220_ErrClear_SDmaOutOfBoundErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SDmaGenMismatchErrClear_LSB 0x27
#define QIB_7220_ErrClear_SDmaGenMismatchErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SendBufMisuseErrClear_LSB 0x26
#define QIB_7220_ErrClear_SendBufMisuseErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SendUnsupportedVLErrClear_LSB 0x25
#define QIB_7220_ErrClear_SendUnsupportedVLErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SendUnexpectedPktNumErrClear_LSB 0x24
#define QIB_7220_ErrClear_SendUnexpectedPktNumErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SendPioArmLaunchErrClear_LSB 0x23
#define QIB_7220_ErrClear_SendPioArmLaunchErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SendDroppedDataPktErrClear_LSB 0x22
#define QIB_7220_ErrClear_SendDroppedDataPktErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SendDroppedSmpPktErrClear_LSB 0x21
#define QIB_7220_ErrClear_SendDroppedSmpPktErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SendPktLenErrClear_LSB 0x20
#define QIB_7220_ErrClear_SendPktLenErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SendUnderRunErrClear_LSB 0x1F
#define QIB_7220_ErrClear_SendUnderRunErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SendMaxPktLenErrClear_LSB 0x1E
#define QIB_7220_ErrClear_SendMaxPktLenErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SendMinPktLenErrClear_LSB 0x1D
#define QIB_7220_ErrClear_SendMinPktLenErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SDmaDisabledErrClear_LSB 0x1C
#define QIB_7220_ErrClear_SDmaDisabledErrClear_RMASK 0x1
#define QIB_7220_ErrClear_SendSpecialTriggerErrClear_LSB 0x1B
#define QIB_7220_ErrClear_SendSpecialTriggerErrClear_RMASK 0x1
#define QIB_7220_ErrClear_Reserved1_LSB 0x12
#define QIB_7220_ErrClear_Reserved1_RMASK 0x1FF
#define QIB_7220_ErrClear_RcvIBLostLinkErrClear_LSB 0x11
#define QIB_7220_ErrClear_RcvIBLostLinkErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvHdrErrClear_LSB 0x10
#define QIB_7220_ErrClear_RcvHdrErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvHdrLenErrClear_LSB 0xF
#define QIB_7220_ErrClear_RcvHdrLenErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvBadTidErrClear_LSB 0xE
#define QIB_7220_ErrClear_RcvBadTidErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvHdrFullErrClear_LSB 0xD
#define QIB_7220_ErrClear_RcvHdrFullErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvEgrFullErrClear_LSB 0xC
#define QIB_7220_ErrClear_RcvEgrFullErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvBadVersionErrClear_LSB 0xB
#define QIB_7220_ErrClear_RcvBadVersionErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvIBFlowErrClear_LSB 0xA
#define QIB_7220_ErrClear_RcvIBFlowErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvEBPErrClear_LSB 0x9
#define QIB_7220_ErrClear_RcvEBPErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvUnsupportedVLErrClear_LSB 0x8
#define QIB_7220_ErrClear_RcvUnsupportedVLErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvUnexpectedCharErrClear_LSB 0x7
#define QIB_7220_ErrClear_RcvUnexpectedCharErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvShortPktLenErrClear_LSB 0x6
#define QIB_7220_ErrClear_RcvShortPktLenErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvLongPktLenErrClear_LSB 0x5
#define QIB_7220_ErrClear_RcvLongPktLenErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvMaxPktLenErrClear_LSB 0x4
#define QIB_7220_ErrClear_RcvMaxPktLenErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvMinPktLenErrClear_LSB 0x3
#define QIB_7220_ErrClear_RcvMinPktLenErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvICRCErrClear_LSB 0x2
#define QIB_7220_ErrClear_RcvICRCErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvVCRCErrClear_LSB 0x1
#define QIB_7220_ErrClear_RcvVCRCErrClear_RMASK 0x1
#define QIB_7220_ErrClear_RcvFormatErrClear_LSB 0x0
#define QIB_7220_ErrClear_RcvFormatErrClear_RMASK 0x1

#define QIB_7220_HwErrMask_OFFS 0x98
#define QIB_7220_HwErrMask_IBCBusFromSPCParityErrMask_LSB 0x3F
#define QIB_7220_HwErrMask_IBCBusFromSPCParityErrMask_RMASK 0x1
#define QIB_7220_HwErrMask_IBCBusToSPCParityErrMask_LSB 0x3E
#define QIB_7220_HwErrMask_IBCBusToSPCParityErrMask_RMASK 0x1
#define QIB_7220_HwErrMask_Clk_uC_PLLNotLockedMask_LSB 0x3D
#define QIB_7220_HwErrMask_Clk_uC_PLLNotLockedMask_RMASK 0x1
#define QIB_7220_HwErrMask_IBSerdesPClkNotDetectMask_LSB 0x3C
#define QIB_7220_HwErrMask_IBSerdesPClkNotDetectMask_RMASK 0x1
#define QIB_7220_HwErrMask_PCIESerdesQ3PClkNotDetectMask_LSB 0x3B
#define QIB_7220_HwErrMask_PCIESerdesQ3PClkNotDetectMask_RMASK 0x1
#define QIB_7220_HwErrMask_PCIESerdesQ2PClkNotDetectMask_LSB 0x3A
#define QIB_7220_HwErrMask_PCIESerdesQ2PClkNotDetectMask_RMASK 0x1
#define QIB_7220_HwErrMask_PCIESerdesQ1PClkNotDetectMask_LSB 0x39
#define QIB_7220_HwErrMask_PCIESerdesQ1PClkNotDetectMask_RMASK 0x1
#define QIB_7220_HwErrMask_PCIESerdesQ0PClkNotDetectMask_LSB 0x38
#define QIB_7220_HwErrMask_PCIESerdesQ0PClkNotDetectMask_RMASK 0x1
#define QIB_7220_HwErrMask_Reserved_LSB 0x37
#define QIB_7220_HwErrMask_Reserved_RMASK 0x1
#define QIB_7220_HwErrMask_PowerOnBISTFailedMask_LSB 0x36
#define QIB_7220_HwErrMask_PowerOnBISTFailedMask_RMASK 0x1
#define QIB_7220_HwErrMask_Reserved1_LSB 0x33
#define QIB_7220_HwErrMask_Reserved1_RMASK 0x7
#define QIB_7220_HwErrMask_RXEMemParityErrMask_LSB 0x2C
#define QIB_7220_HwErrMask_RXEMemParityErrMask_RMASK 0x7F
#define QIB_7220_HwErrMask_TXEMemParityErrMask_LSB 0x28
#define QIB_7220_HwErrMask_TXEMemParityErrMask_RMASK 0xF
#define QIB_7220_HwErrMask_DDSRXEQMemoryParityErrMask_LSB 0x27
#define QIB_7220_HwErrMask_DDSRXEQMemoryParityErrMask_RMASK 0x1
#define QIB_7220_HwErrMask_IB_uC_MemoryParityErrMask_LSB 0x26
#define QIB_7220_HwErrMask_IB_uC_MemoryParityErrMask_RMASK 0x1
#define QIB_7220_HwErrMask_PCIEOct1_uC_MemoryParityErrMask_LSB 0x25
#define QIB_7220_HwErrMask_PCIEOct1_uC_MemoryParityErrMask_RMASK 0x1
#define QIB_7220_HwErrMask_PCIEOct0_uC_MemoryParityErrMask_LSB 0x24
#define QIB_7220_HwErrMask_PCIEOct0_uC_MemoryParityErrMask_RMASK 0x1
#define QIB_7220_HwErrMask_Reserved2_LSB 0x22
#define QIB_7220_HwErrMask_Reserved2_RMASK 0x3
#define QIB_7220_HwErrMask_PCIeBusParityErrMask_LSB 0x1F
#define QIB_7220_HwErrMask_PCIeBusParityErrMask_RMASK 0x7
#define QIB_7220_HwErrMask_PcieCplTimeoutMask_LSB 0x1E
#define QIB_7220_HwErrMask_PcieCplTimeoutMask_RMASK 0x1
#define QIB_7220_HwErrMask_PoisonedTLPMask_LSB 0x1D
#define QIB_7220_HwErrMask_PoisonedTLPMask_RMASK 0x1
#define QIB_7220_HwErrMask_SDmaMemReadErrMask_LSB 0x1C
#define QIB_7220_HwErrMask_SDmaMemReadErrMask_RMASK 0x1
#define QIB_7220_HwErrMask_Reserved3_LSB 0x8
#define QIB_7220_HwErrMask_Reserved3_RMASK 0xFFFFF
#define QIB_7220_HwErrMask_PCIeMemParityErrMask_LSB 0x0
#define QIB_7220_HwErrMask_PCIeMemParityErrMask_RMASK 0xFF

#define QIB_7220_HwErrStatus_OFFS 0xA0
#define QIB_7220_HwErrStatus_IBCBusFromSPCParityErr_LSB 0x3F
#define QIB_7220_HwErrStatus_IBCBusFromSPCParityErr_RMASK 0x1
#define QIB_7220_HwErrStatus_IBCBusToSPCParityErr_LSB 0x3E
#define QIB_7220_HwErrStatus_IBCBusToSPCParityErr_RMASK 0x1
#define QIB_7220_HwErrStatus_Clk_uC_PLLNotLocked_LSB 0x3D
#define QIB_7220_HwErrStatus_Clk_uC_PLLNotLocked_RMASK 0x1
#define QIB_7220_HwErrStatus_IBSerdesPClkNotDetect_LSB 0x3C
#define QIB_7220_HwErrStatus_IBSerdesPClkNotDetect_RMASK 0x1
#define QIB_7220_HwErrStatus_PCIESerdesQ3PClkNotDetect_LSB 0x3B
#define QIB_7220_HwErrStatus_PCIESerdesQ3PClkNotDetect_RMASK 0x1
#define QIB_7220_HwErrStatus_PCIESerdesQ2PClkNotDetect_LSB 0x3A
#define QIB_7220_HwErrStatus_PCIESerdesQ2PClkNotDetect_RMASK 0x1
#define QIB_7220_HwErrStatus_PCIESerdesQ1PClkNotDetect_LSB 0x39
#define QIB_7220_HwErrStatus_PCIESerdesQ1PClkNotDetect_RMASK 0x1
#define QIB_7220_HwErrStatus_PCIESerdesQ0PClkNotDetect_LSB 0x38
#define QIB_7220_HwErrStatus_PCIESerdesQ0PClkNotDetect_RMASK 0x1
#define QIB_7220_HwErrStatus_Reserved_LSB 0x37
#define QIB_7220_HwErrStatus_Reserved_RMASK 0x1
#define QIB_7220_HwErrStatus_PowerOnBISTFailed_LSB 0x36
#define QIB_7220_HwErrStatus_PowerOnBISTFailed_RMASK 0x1
#define QIB_7220_HwErrStatus_Reserved1_LSB 0x33
#define QIB_7220_HwErrStatus_Reserved1_RMASK 0x7
#define QIB_7220_HwErrStatus_RXEMemParity_LSB 0x2C
#define QIB_7220_HwErrStatus_RXEMemParity_RMASK 0x7F
#define QIB_7220_HwErrStatus_TXEMemParity_LSB 0x28
#define QIB_7220_HwErrStatus_TXEMemParity_RMASK 0xF
#define QIB_7220_HwErrStatus_DDSRXEQMemoryParityErr_LSB 0x27
#define QIB_7220_HwErrStatus_DDSRXEQMemoryParityErr_RMASK 0x1
#define QIB_7220_HwErrStatus_IB_uC_MemoryParityErr_LSB 0x26
#define QIB_7220_HwErrStatus_IB_uC_MemoryParityErr_RMASK 0x1
#define QIB_7220_HwErrStatus_PCIE_uC_Oct1MemoryParityErr_LSB 0x25
#define QIB_7220_HwErrStatus_PCIE_uC_Oct1MemoryParityErr_RMASK 0x1
#define QIB_7220_HwErrStatus_PCIE_uC_Oct0MemoryParityErr_LSB 0x24
#define QIB_7220_HwErrStatus_PCIE_uC_Oct0MemoryParityErr_RMASK 0x1
#define QIB_7220_HwErrStatus_Reserved2_LSB 0x22
#define QIB_7220_HwErrStatus_Reserved2_RMASK 0x3
#define QIB_7220_HwErrStatus_PCIeBusParity_LSB 0x1F
#define QIB_7220_HwErrStatus_PCIeBusParity_RMASK 0x7
#define QIB_7220_HwErrStatus_PcieCplTimeout_LSB 0x1E
#define QIB_7220_HwErrStatus_PcieCplTimeout_RMASK 0x1
#define QIB_7220_HwErrStatus_PoisenedTLP_LSB 0x1D
#define QIB_7220_HwErrStatus_PoisenedTLP_RMASK 0x1
#define QIB_7220_HwErrStatus_SDmaMemReadErr_LSB 0x1C
#define QIB_7220_HwErrStatus_SDmaMemReadErr_RMASK 0x1
#define QIB_7220_HwErrStatus_Reserved3_LSB 0x8
#define QIB_7220_HwErrStatus_Reserved3_RMASK 0xFFFFF
#define QIB_7220_HwErrStatus_PCIeMemParity_LSB 0x0
#define QIB_7220_HwErrStatus_PCIeMemParity_RMASK 0xFF

#define QIB_7220_HwErrClear_OFFS 0xA8
#define QIB_7220_HwErrClear_IBCBusFromSPCParityErrClear_LSB 0x3F
#define QIB_7220_HwErrClear_IBCBusFromSPCParityErrClear_RMASK 0x1
#define QIB_7220_HwErrClear_IBCBusToSPCparityErrClear_LSB 0x3E
#define QIB_7220_HwErrClear_IBCBusToSPCparityErrClear_RMASK 0x1
#define QIB_7220_HwErrClear_Clk_uC_PLLNotLockedClear_LSB 0x3D
#define QIB_7220_HwErrClear_Clk_uC_PLLNotLockedClear_RMASK 0x1
#define QIB_7220_HwErrClear_IBSerdesPClkNotDetectClear_LSB 0x3C
#define QIB_7220_HwErrClear_IBSerdesPClkNotDetectClear_RMASK 0x1
#define QIB_7220_HwErrClear_PCIESerdesQ3PClkNotDetectClear_LSB 0x3B
#define QIB_7220_HwErrClear_PCIESerdesQ3PClkNotDetectClear_RMASK 0x1
#define QIB_7220_HwErrClear_PCIESerdesQ2PClkNotDetectClear_LSB 0x3A
#define QIB_7220_HwErrClear_PCIESerdesQ2PClkNotDetectClear_RMASK 0x1
#define QIB_7220_HwErrClear_PCIESerdesQ1PClkNotDetectClear_LSB 0x39
#define QIB_7220_HwErrClear_PCIESerdesQ1PClkNotDetectClear_RMASK 0x1
#define QIB_7220_HwErrClear_PCIESerdesQ0PClkNotDetectClear_LSB 0x38
#define QIB_7220_HwErrClear_PCIESerdesQ0PClkNotDetectClear_RMASK 0x1
#define QIB_7220_HwErrClear_Reserved_LSB 0x37
#define QIB_7220_HwErrClear_Reserved_RMASK 0x1
#define QIB_7220_HwErrClear_PowerOnBISTFailedClear_LSB 0x36
#define QIB_7220_HwErrClear_PowerOnBISTFailedClear_RMASK 0x1
#define QIB_7220_HwErrClear_Reserved1_LSB 0x33
#define QIB_7220_HwErrClear_Reserved1_RMASK 0x7
#define QIB_7220_HwErrClear_RXEMemParityClear_LSB 0x2C
#define QIB_7220_HwErrClear_RXEMemParityClear_RMASK 0x7F
#define QIB_7220_HwErrClear_TXEMemParityClear_LSB 0x28
#define QIB_7220_HwErrClear_TXEMemParityClear_RMASK 0xF
#define QIB_7220_HwErrClear_DDSRXEQMemoryParityErrClear_LSB 0x27
#define QIB_7220_HwErrClear_DDSRXEQMemoryParityErrClear_RMASK 0x1
#define QIB_7220_HwErrClear_IB_uC_MemoryParityErrClear_LSB 0x26
#define QIB_7220_HwErrClear_IB_uC_MemoryParityErrClear_RMASK 0x1
#define QIB_7220_HwErrClear_PCIE_uC_Oct1MemoryParityErrClear_LSB 0x25
#define QIB_7220_HwErrClear_PCIE_uC_Oct1MemoryParityErrClear_RMASK 0x1
#define QIB_7220_HwErrClear_PCIE_uC_Oct0MemoryParityErrClear_LSB 0x24
#define QIB_7220_HwErrClear_PCIE_uC_Oct0MemoryParityErrClear_RMASK 0x1
#define QIB_7220_HwErrClear_Reserved2_LSB 0x22
#define QIB_7220_HwErrClear_Reserved2_RMASK 0x3
#define QIB_7220_HwErrClear_PCIeBusParityClr_LSB 0x1F
#define QIB_7220_HwErrClear_PCIeBusParityClr_RMASK 0x7
#define QIB_7220_HwErrClear_PcieCplTimeoutClear_LSB 0x1E
#define QIB_7220_HwErrClear_PcieCplTimeoutClear_RMASK 0x1
#define QIB_7220_HwErrClear_PoisonedTLPClear_LSB 0x1D
#define QIB_7220_HwErrClear_PoisonedTLPClear_RMASK 0x1
#define QIB_7220_HwErrClear_SDmaMemReadErrClear_LSB 0x1C
#define QIB_7220_HwErrClear_SDmaMemReadErrClear_RMASK 0x1
#define QIB_7220_HwErrClear_Reserved3_LSB 0x8
#define QIB_7220_HwErrClear_Reserved3_RMASK 0xFFFFF
#define QIB_7220_HwErrClear_PCIeMemParityClr_LSB 0x0
#define QIB_7220_HwErrClear_PCIeMemParityClr_RMASK 0xFF

#define QIB_7220_HwDiagCtrl_OFFS 0xB0
#define QIB_7220_HwDiagCtrl_ForceIBCBusFromSPCParityErr_LSB 0x3F
#define QIB_7220_HwDiagCtrl_ForceIBCBusFromSPCParityErr_RMASK 0x1
#define QIB_7220_HwDiagCtrl_ForceIBCBusToSPCParityErr_LSB 0x3E
#define QIB_7220_HwDiagCtrl_ForceIBCBusToSPCParityErr_RMASK 0x1
#define QIB_7220_HwDiagCtrl_CounterWrEnable_LSB 0x3D
#define QIB_7220_HwDiagCtrl_CounterWrEnable_RMASK 0x1
#define QIB_7220_HwDiagCtrl_CounterDisable_LSB 0x3C
#define QIB_7220_HwDiagCtrl_CounterDisable_RMASK 0x1
#define QIB_7220_HwDiagCtrl_Reserved_LSB 0x33
#define QIB_7220_HwDiagCtrl_Reserved_RMASK 0x1FF
#define QIB_7220_HwDiagCtrl_ForceRxMemParityErr_LSB 0x2C
#define QIB_7220_HwDiagCtrl_ForceRxMemParityErr_RMASK 0x7F
#define QIB_7220_HwDiagCtrl_ForceTxMemparityErr_LSB 0x28
#define QIB_7220_HwDiagCtrl_ForceTxMemparityErr_RMASK 0xF
#define QIB_7220_HwDiagCtrl_ForceDDSRXEQMemoryParityErr_LSB 0x27
#define QIB_7220_HwDiagCtrl_ForceDDSRXEQMemoryParityErr_RMASK 0x1
#define QIB_7220_HwDiagCtrl_ForceIB_uC_MemoryParityErr_LSB 0x26
#define QIB_7220_HwDiagCtrl_ForceIB_uC_MemoryParityErr_RMASK 0x1
#define QIB_7220_HwDiagCtrl_ForcePCIE_uC_Oct1MemoryParityErr_LSB 0x25
#define QIB_7220_HwDiagCtrl_ForcePCIE_uC_Oct1MemoryParityErr_RMASK 0x1
#define QIB_7220_HwDiagCtrl_ForcePCIE_uC_Oct0MemoryParityErr_LSB 0x24
#define QIB_7220_HwDiagCtrl_ForcePCIE_uC_Oct0MemoryParityErr_RMASK 0x1
#define QIB_7220_HwDiagCtrl_Reserved1_LSB 0x23
#define QIB_7220_HwDiagCtrl_Reserved1_RMASK 0x1
#define QIB_7220_HwDiagCtrl_forcePCIeBusParity_LSB 0x1F
#define QIB_7220_HwDiagCtrl_forcePCIeBusParity_RMASK 0xF
#define QIB_7220_HwDiagCtrl_Reserved2_LSB 0x8
#define QIB_7220_HwDiagCtrl_Reserved2_RMASK 0x7FFFFF
#define QIB_7220_HwDiagCtrl_forcePCIeMemParity_LSB 0x0
#define QIB_7220_HwDiagCtrl_forcePCIeMemParity_RMASK 0xFF

#define QIB_7220_REG_0000B8_OFFS 0xB8

#define QIB_7220_IBCStatus_OFFS 0xC0
#define QIB_7220_IBCStatus_TxCreditOk_LSB 0x1F
#define QIB_7220_IBCStatus_TxCreditOk_RMASK 0x1
#define QIB_7220_IBCStatus_TxReady_LSB 0x1E
#define QIB_7220_IBCStatus_TxReady_RMASK 0x1
#define QIB_7220_IBCStatus_Reserved_LSB 0xE
#define QIB_7220_IBCStatus_Reserved_RMASK 0xFFFF
#define QIB_7220_IBCStatus_IBTxLaneReversed_LSB 0xD
#define QIB_7220_IBCStatus_IBTxLaneReversed_RMASK 0x1
#define QIB_7220_IBCStatus_IBRxLaneReversed_LSB 0xC
#define QIB_7220_IBCStatus_IBRxLaneReversed_RMASK 0x1
#define QIB_7220_IBCStatus_IB_SERDES_TRIM_DONE_LSB 0xB
#define QIB_7220_IBCStatus_IB_SERDES_TRIM_DONE_RMASK 0x1
#define QIB_7220_IBCStatus_DDS_RXEQ_FAIL_LSB 0xA
#define QIB_7220_IBCStatus_DDS_RXEQ_FAIL_RMASK 0x1
#define QIB_7220_IBCStatus_LinkWidthActive_LSB 0x9
#define QIB_7220_IBCStatus_LinkWidthActive_RMASK 0x1
#define QIB_7220_IBCStatus_LinkSpeedActive_LSB 0x8
#define QIB_7220_IBCStatus_LinkSpeedActive_RMASK 0x1
#define QIB_7220_IBCStatus_LinkState_LSB 0x5
#define QIB_7220_IBCStatus_LinkState_RMASK 0x7
#define QIB_7220_IBCStatus_LinkTrainingState_LSB 0x0
#define QIB_7220_IBCStatus_LinkTrainingState_RMASK 0x1F

#define QIB_7220_IBCCtrl_OFFS 0xC8
#define QIB_7220_IBCCtrl_Loopback_LSB 0x3F
#define QIB_7220_IBCCtrl_Loopback_RMASK 0x1
#define QIB_7220_IBCCtrl_LinkDownDefaultState_LSB 0x3E
#define QIB_7220_IBCCtrl_LinkDownDefaultState_RMASK 0x1
#define QIB_7220_IBCCtrl_Reserved_LSB 0x2B
#define QIB_7220_IBCCtrl_Reserved_RMASK 0x7FFFF
#define QIB_7220_IBCCtrl_CreditScale_LSB 0x28
#define QIB_7220_IBCCtrl_CreditScale_RMASK 0x7
#define QIB_7220_IBCCtrl_OverrunThreshold_LSB 0x24
#define QIB_7220_IBCCtrl_OverrunThreshold_RMASK 0xF
#define QIB_7220_IBCCtrl_PhyerrThreshold_LSB 0x20
#define QIB_7220_IBCCtrl_PhyerrThreshold_RMASK 0xF
#define QIB_7220_IBCCtrl_MaxPktLen_LSB 0x15
#define QIB_7220_IBCCtrl_MaxPktLen_RMASK 0x7FF
#define QIB_7220_IBCCtrl_LinkCmd_LSB 0x13
#define QIB_7220_IBCCtrl_LinkCmd_RMASK 0x3
#define QIB_7220_IBCCtrl_LinkInitCmd_LSB 0x10
#define QIB_7220_IBCCtrl_LinkInitCmd_RMASK 0x7
#define QIB_7220_IBCCtrl_FlowCtrlWaterMark_LSB 0x8
#define QIB_7220_IBCCtrl_FlowCtrlWaterMark_RMASK 0xFF
#define QIB_7220_IBCCtrl_FlowCtrlPeriod_LSB 0x0
#define QIB_7220_IBCCtrl_FlowCtrlPeriod_RMASK 0xFF

#define QIB_7220_EXTStatus_OFFS 0xD0
#define QIB_7220_EXTStatus_GPIOIn_LSB 0x30
#define QIB_7220_EXTStatus_GPIOIn_RMASK 0xFFFF
#define QIB_7220_EXTStatus_Reserved_LSB 0x20
#define QIB_7220_EXTStatus_Reserved_RMASK 0xFFFF
#define QIB_7220_EXTStatus_Reserved1_LSB 0x10
#define QIB_7220_EXTStatus_Reserved1_RMASK 0xFFFF
#define QIB_7220_EXTStatus_MemBISTDisabled_LSB 0xF
#define QIB_7220_EXTStatus_MemBISTDisabled_RMASK 0x1
#define QIB_7220_EXTStatus_MemBISTEndTest_LSB 0xE
#define QIB_7220_EXTStatus_MemBISTEndTest_RMASK 0x1
#define QIB_7220_EXTStatus_Reserved2_LSB 0x0
#define QIB_7220_EXTStatus_Reserved2_RMASK 0x3FFF

#define QIB_7220_EXTCtrl_OFFS 0xD8
#define QIB_7220_EXTCtrl_GPIOOe_LSB 0x30
#define QIB_7220_EXTCtrl_GPIOOe_RMASK 0xFFFF
#define QIB_7220_EXTCtrl_GPIOInvert_LSB 0x20
#define QIB_7220_EXTCtrl_GPIOInvert_RMASK 0xFFFF
#define QIB_7220_EXTCtrl_Reserved_LSB 0x4
#define QIB_7220_EXTCtrl_Reserved_RMASK 0xFFFFFFF
#define QIB_7220_EXTCtrl_LEDPriPortGreenOn_LSB 0x3
#define QIB_7220_EXTCtrl_LEDPriPortGreenOn_RMASK 0x1
#define QIB_7220_EXTCtrl_LEDPriPortYellowOn_LSB 0x2
#define QIB_7220_EXTCtrl_LEDPriPortYellowOn_RMASK 0x1
#define QIB_7220_EXTCtrl_LEDGblOkGreenOn_LSB 0x1
#define QIB_7220_EXTCtrl_LEDGblOkGreenOn_RMASK 0x1
#define QIB_7220_EXTCtrl_LEDGblErrRedOff_LSB 0x0
#define QIB_7220_EXTCtrl_LEDGblErrRedOff_RMASK 0x1

#define QIB_7220_GPIOOut_OFFS 0xE0

#define QIB_7220_GPIOMask_OFFS 0xE8

#define QIB_7220_GPIOStatus_OFFS 0xF0

#define QIB_7220_GPIOClear_OFFS 0xF8

#define QIB_7220_RcvCtrl_OFFS 0x100
#define QIB_7220_RcvCtrl_Reserved_LSB 0x27
#define QIB_7220_RcvCtrl_Reserved_RMASK 0x1FFFFFF
#define QIB_7220_RcvCtrl_RcvQPMapEnable_LSB 0x26
#define QIB_7220_RcvCtrl_RcvQPMapEnable_RMASK 0x1
#define QIB_7220_RcvCtrl_PortCfg_LSB 0x24
#define QIB_7220_RcvCtrl_PortCfg_RMASK 0x3
#define QIB_7220_RcvCtrl_TailUpd_LSB 0x23
#define QIB_7220_RcvCtrl_TailUpd_RMASK 0x1
#define QIB_7220_RcvCtrl_RcvPartitionKeyDisable_LSB 0x22
#define QIB_7220_RcvCtrl_RcvPartitionKeyDisable_RMASK 0x1
#define QIB_7220_RcvCtrl_IntrAvail_LSB 0x11
#define QIB_7220_RcvCtrl_IntrAvail_RMASK 0x1FFFF
#define QIB_7220_RcvCtrl_PortEnable_LSB 0x0
#define QIB_7220_RcvCtrl_PortEnable_RMASK 0x1FFFF

#define QIB_7220_RcvBTHQP_OFFS 0x108
#define QIB_7220_RcvBTHQP_Reserved_LSB 0x18
#define QIB_7220_RcvBTHQP_Reserved_RMASK 0xFF
#define QIB_7220_RcvBTHQP_RcvBTHQP_LSB 0x0
#define QIB_7220_RcvBTHQP_RcvBTHQP_RMASK 0xFFFFFF

#define QIB_7220_RcvHdrSize_OFFS 0x110

#define QIB_7220_RcvHdrCnt_OFFS 0x118

#define QIB_7220_RcvHdrEntSize_OFFS 0x120

#define QIB_7220_RcvTIDBase_OFFS 0x128

#define QIB_7220_RcvTIDCnt_OFFS 0x130

#define QIB_7220_RcvEgrBase_OFFS 0x138

#define QIB_7220_RcvEgrCnt_OFFS 0x140

#define QIB_7220_RcvBufBase_OFFS 0x148

#define QIB_7220_RcvBufSize_OFFS 0x150

#define QIB_7220_RxIntMemBase_OFFS 0x158

#define QIB_7220_RxIntMemSize_OFFS 0x160

#define QIB_7220_RcvPartitionKey_OFFS 0x168

#define QIB_7220_RcvQPMulticastPort_OFFS 0x170
#define QIB_7220_RcvQPMulticastPort_Reserved_LSB 0x5
#define QIB_7220_RcvQPMulticastPort_Reserved_RMASK 0x7FFFFFFFFFFFFFF
#define QIB_7220_RcvQPMulticastPort_RcvQpMcPort_LSB 0x0
#define QIB_7220_RcvQPMulticastPort_RcvQpMcPort_RMASK 0x1F

#define QIB_7220_RcvPktLEDCnt_OFFS 0x178
#define QIB_7220_RcvPktLEDCnt_ONperiod_LSB 0x20
#define QIB_7220_RcvPktLEDCnt_ONperiod_RMASK 0xFFFFFFFF
#define QIB_7220_RcvPktLEDCnt_OFFperiod_LSB 0x0
#define QIB_7220_RcvPktLEDCnt_OFFperiod_RMASK 0xFFFFFFFF

#define QIB_7220_IBCDDRCtrl_OFFS 0x180
#define QIB_7220_IBCDDRCtrl_IB_DLID_MASK_LSB 0x30
#define QIB_7220_IBCDDRCtrl_IB_DLID_MASK_RMASK 0xFFFF
#define QIB_7220_IBCDDRCtrl_IB_DLID_LSB 0x20
#define QIB_7220_IBCDDRCtrl_IB_DLID_RMASK 0xFFFF
#define QIB_7220_IBCDDRCtrl_Reserved_LSB 0x1B
#define QIB_7220_IBCDDRCtrl_Reserved_RMASK 0x1F
#define QIB_7220_IBCDDRCtrl_HRTBT_REQ_LSB 0x1A
#define QIB_7220_IBCDDRCtrl_HRTBT_REQ_RMASK 0x1
#define QIB_7220_IBCDDRCtrl_HRTBT_PORT_LSB 0x12
#define QIB_7220_IBCDDRCtrl_HRTBT_PORT_RMASK 0xFF
#define QIB_7220_IBCDDRCtrl_HRTBT_AUTO_LSB 0x11
#define QIB_7220_IBCDDRCtrl_HRTBT_AUTO_RMASK 0x1
#define QIB_7220_IBCDDRCtrl_HRTBT_ENB_LSB 0x10
#define QIB_7220_IBCDDRCtrl_HRTBT_ENB_RMASK 0x1
#define QIB_7220_IBCDDRCtrl_SD_DDS_LSB 0xC
#define QIB_7220_IBCDDRCtrl_SD_DDS_RMASK 0xF
#define QIB_7220_IBCDDRCtrl_SD_DDSV_LSB 0xB
#define QIB_7220_IBCDDRCtrl_SD_DDSV_RMASK 0x1
#define QIB_7220_IBCDDRCtrl_SD_ADD_ENB_LSB 0xA
#define QIB_7220_IBCDDRCtrl_SD_ADD_ENB_RMASK 0x1
#define QIB_7220_IBCDDRCtrl_SD_RX_EQUAL_ENABLE_LSB 0x9
#define QIB_7220_IBCDDRCtrl_SD_RX_EQUAL_ENABLE_RMASK 0x1
#define QIB_7220_IBCDDRCtrl_IB_LANE_REV_SUPPORTED_LSB 0x8
#define QIB_7220_IBCDDRCtrl_IB_LANE_REV_SUPPORTED_RMASK 0x1
#define QIB_7220_IBCDDRCtrl_IB_POLARITY_REV_SUPP_LSB 0x7
#define QIB_7220_IBCDDRCtrl_IB_POLARITY_REV_SUPP_RMASK 0x1
#define QIB_7220_IBCDDRCtrl_IB_NUM_CHANNELS_LSB 0x5
#define QIB_7220_IBCDDRCtrl_IB_NUM_CHANNELS_RMASK 0x3
#define QIB_7220_IBCDDRCtrl_SD_SPEED_QDR_LSB 0x4
#define QIB_7220_IBCDDRCtrl_SD_SPEED_QDR_RMASK 0x1
#define QIB_7220_IBCDDRCtrl_SD_SPEED_DDR_LSB 0x3
#define QIB_7220_IBCDDRCtrl_SD_SPEED_DDR_RMASK 0x1
#define QIB_7220_IBCDDRCtrl_SD_SPEED_SDR_LSB 0x2
#define QIB_7220_IBCDDRCtrl_SD_SPEED_SDR_RMASK 0x1
#define QIB_7220_IBCDDRCtrl_SD_SPEED_LSB 0x1
#define QIB_7220_IBCDDRCtrl_SD_SPEED_RMASK 0x1
#define QIB_7220_IBCDDRCtrl_IB_ENHANCED_MODE_LSB 0x0
#define QIB_7220_IBCDDRCtrl_IB_ENHANCED_MODE_RMASK 0x1

#define QIB_7220_HRTBT_GUID_OFFS 0x188

#define QIB_7220_IBCDDRCtrl2_OFFS 0x1A0
#define QIB_7220_IBCDDRCtrl2_IB_BACK_PORCH_LSB 0x5
#define QIB_7220_IBCDDRCtrl2_IB_BACK_PORCH_RMASK 0x1F
#define QIB_7220_IBCDDRCtrl2_IB_FRONT_PORCH_LSB 0x0
#define QIB_7220_IBCDDRCtrl2_IB_FRONT_PORCH_RMASK 0x1F

#define QIB_7220_IBCDDRStatus_OFFS 0x1A8
#define QIB_7220_IBCDDRStatus_heartbeat_timed_out_LSB 0x24
#define QIB_7220_IBCDDRStatus_heartbeat_timed_out_RMASK 0x1
#define QIB_7220_IBCDDRStatus_heartbeat_crosstalk_LSB 0x20
#define QIB_7220_IBCDDRStatus_heartbeat_crosstalk_RMASK 0xF
#define QIB_7220_IBCDDRStatus_RxEqLocalDevice_LSB 0x1E
#define QIB_7220_IBCDDRStatus_RxEqLocalDevice_RMASK 0x3
#define QIB_7220_IBCDDRStatus_ReqDDSLocalFromRmt_LSB 0x1A
#define QIB_7220_IBCDDRStatus_ReqDDSLocalFromRmt_RMASK 0xF
#define QIB_7220_IBCDDRStatus_LinkRoundTripLatency_LSB 0x0
#define QIB_7220_IBCDDRStatus_LinkRoundTripLatency_RMASK 0x3FFFFFF

#define QIB_7220_JIntReload_OFFS 0x1B0
#define QIB_7220_JIntReload_J_limit_reload_LSB 0x10
#define QIB_7220_JIntReload_J_limit_reload_RMASK 0xFFFF
#define QIB_7220_JIntReload_J_reload_LSB 0x0
#define QIB_7220_JIntReload_J_reload_RMASK 0xFFFF

#define QIB_7220_IBNCModeCtrl_OFFS 0x1B8
#define QIB_7220_IBNCModeCtrl_Reserved_LSB 0x1A
#define QIB_7220_IBNCModeCtrl_Reserved_RMASK 0x3FFFFFFFFF
#define QIB_7220_IBNCModeCtrl_TSMCode_TS2_LSB 0x11
#define QIB_7220_IBNCModeCtrl_TSMCode_TS2_RMASK 0x1FF
#define QIB_7220_IBNCModeCtrl_TSMCode_TS1_LSB 0x8
#define QIB_7220_IBNCModeCtrl_TSMCode_TS1_RMASK 0x1FF
#define QIB_7220_IBNCModeCtrl_Reserved1_LSB 0x3
#define QIB_7220_IBNCModeCtrl_Reserved1_RMASK 0x1F
#define QIB_7220_IBNCModeCtrl_TSMEnable_ignore_TSM_on_rx_LSB 0x2
#define QIB_7220_IBNCModeCtrl_TSMEnable_ignore_TSM_on_rx_RMASK 0x1
#define QIB_7220_IBNCModeCtrl_TSMEnable_send_TS2_LSB 0x1
#define QIB_7220_IBNCModeCtrl_TSMEnable_send_TS2_RMASK 0x1
#define QIB_7220_IBNCModeCtrl_TSMEnable_send_TS1_LSB 0x0
#define QIB_7220_IBNCModeCtrl_TSMEnable_send_TS1_RMASK 0x1

#define QIB_7220_SendCtrl_OFFS 0x1C0
#define QIB_7220_SendCtrl_Disarm_LSB 0x1F
#define QIB_7220_SendCtrl_Disarm_RMASK 0x1
#define QIB_7220_SendCtrl_Reserved_LSB 0x1D
#define QIB_7220_SendCtrl_Reserved_RMASK 0x3
#define QIB_7220_SendCtrl_AvailUpdThld_LSB 0x18
#define QIB_7220_SendCtrl_AvailUpdThld_RMASK 0x1F
#define QIB_7220_SendCtrl_DisarmPIOBuf_LSB 0x10
#define QIB_7220_SendCtrl_DisarmPIOBuf_RMASK 0xFF
#define QIB_7220_SendCtrl_Reserved1_LSB 0xD
#define QIB_7220_SendCtrl_Reserved1_RMASK 0x7
#define QIB_7220_SendCtrl_SDmaHalt_LSB 0xC
#define QIB_7220_SendCtrl_SDmaHalt_RMASK 0x1
#define QIB_7220_SendCtrl_SDmaEnable_LSB 0xB
#define QIB_7220_SendCtrl_SDmaEnable_RMASK 0x1
#define QIB_7220_SendCtrl_SDmaSingleDescriptor_LSB 0xA
#define QIB_7220_SendCtrl_SDmaSingleDescriptor_RMASK 0x1
#define QIB_7220_SendCtrl_SDmaIntEnable_LSB 0x9
#define QIB_7220_SendCtrl_SDmaIntEnable_RMASK 0x1
#define QIB_7220_SendCtrl_Reserved2_LSB 0x5
#define QIB_7220_SendCtrl_Reserved2_RMASK 0xF
#define QIB_7220_SendCtrl_SSpecialTriggerEn_LSB 0x4
#define QIB_7220_SendCtrl_SSpecialTriggerEn_RMASK 0x1
#define QIB_7220_SendCtrl_SPioEnable_LSB 0x3
#define QIB_7220_SendCtrl_SPioEnable_RMASK 0x1
#define QIB_7220_SendCtrl_SendBufAvailUpd_LSB 0x2
#define QIB_7220_SendCtrl_SendBufAvailUpd_RMASK 0x1
#define QIB_7220_SendCtrl_SendIntBufAvail_LSB 0x1
#define QIB_7220_SendCtrl_SendIntBufAvail_RMASK 0x1
#define QIB_7220_SendCtrl_Abort_LSB 0x0
#define QIB_7220_SendCtrl_Abort_RMASK 0x1

#define QIB_7220_SendBufBase_OFFS 0x1C8
#define QIB_7220_SendBufBase_Reserved_LSB 0x35
#define QIB_7220_SendBufBase_Reserved_RMASK 0x7FF
#define QIB_7220_SendBufBase_BaseAddr_LargePIO_LSB 0x20
#define QIB_7220_SendBufBase_BaseAddr_LargePIO_RMASK 0x1FFFFF
#define QIB_7220_SendBufBase_Reserved1_LSB 0x15
#define QIB_7220_SendBufBase_Reserved1_RMASK 0x7FF
#define QIB_7220_SendBufBase_BaseAddr_SmallPIO_LSB 0x0
#define QIB_7220_SendBufBase_BaseAddr_SmallPIO_RMASK 0x1FFFFF

#define QIB_7220_SendBufSize_OFFS 0x1D0
#define QIB_7220_SendBufSize_Reserved_LSB 0x2D
#define QIB_7220_SendBufSize_Reserved_RMASK 0xFFFFF
#define QIB_7220_SendBufSize_Size_LargePIO_LSB 0x20
#define QIB_7220_SendBufSize_Size_LargePIO_RMASK 0x1FFF
#define QIB_7220_SendBufSize_Reserved1_LSB 0xC
#define QIB_7220_SendBufSize_Reserved1_RMASK 0xFFFFF
#define QIB_7220_SendBufSize_Size_SmallPIO_LSB 0x0
#define QIB_7220_SendBufSize_Size_SmallPIO_RMASK 0xFFF

#define QIB_7220_SendBufCnt_OFFS 0x1D8
#define QIB_7220_SendBufCnt_Reserved_LSB 0x24
#define QIB_7220_SendBufCnt_Reserved_RMASK 0xFFFFFFF
#define QIB_7220_SendBufCnt_Num_LargeBuffers_LSB 0x20
#define QIB_7220_SendBufCnt_Num_LargeBuffers_RMASK 0xF
#define QIB_7220_SendBufCnt_Reserved1_LSB 0x9
#define QIB_7220_SendBufCnt_Reserved1_RMASK 0x7FFFFF
#define QIB_7220_SendBufCnt_Num_SmallBuffers_LSB 0x0
#define QIB_7220_SendBufCnt_Num_SmallBuffers_RMASK 0x1FF

#define QIB_7220_SendBufAvailAddr_OFFS 0x1E0
#define QIB_7220_SendBufAvailAddr_SendBufAvailAddr_LSB 0x6
#define QIB_7220_SendBufAvailAddr_SendBufAvailAddr_RMASK 0x3FFFFFFFF
#define QIB_7220_SendBufAvailAddr_Reserved_LSB 0x0
#define QIB_7220_SendBufAvailAddr_Reserved_RMASK 0x3F

#define QIB_7220_TxIntMemBase_OFFS 0x1E8

#define QIB_7220_TxIntMemSize_OFFS 0x1F0

#define QIB_7220_SendDmaBase_OFFS 0x1F8
#define QIB_7220_SendDmaBase_Reserved_LSB 0x30
#define QIB_7220_SendDmaBase_Reserved_RMASK 0xFFFF
#define QIB_7220_SendDmaBase_SendDmaBase_LSB 0x0
#define QIB_7220_SendDmaBase_SendDmaBase_RMASK 0xFFFFFFFFFFFF

#define QIB_7220_SendDmaLenGen_OFFS 0x200
#define QIB_7220_SendDmaLenGen_Reserved_LSB 0x13
#define QIB_7220_SendDmaLenGen_Reserved_RMASK 0x1FFFFFFFFFFF
#define QIB_7220_SendDmaLenGen_Generation_LSB 0x10
#define QIB_7220_SendDmaLenGen_Generation_MSB 0x12
#define QIB_7220_SendDmaLenGen_Generation_RMASK 0x7
#define QIB_7220_SendDmaLenGen_Length_LSB 0x0
#define QIB_7220_SendDmaLenGen_Length_RMASK 0xFFFF

#define QIB_7220_SendDmaTail_OFFS 0x208
#define QIB_7220_SendDmaTail_Reserved_LSB 0x10
#define QIB_7220_SendDmaTail_Reserved_RMASK 0xFFFFFFFFFFFF
#define QIB_7220_SendDmaTail_SendDmaTail_LSB 0x0
#define QIB_7220_SendDmaTail_SendDmaTail_RMASK 0xFFFF

#define QIB_7220_SendDmaHead_OFFS 0x210
#define QIB_7220_SendDmaHead_Reserved_LSB 0x30
#define QIB_7220_SendDmaHead_Reserved_RMASK 0xFFFF
#define QIB_7220_SendDmaHead_InternalSendDmaHead_LSB 0x20
#define QIB_7220_SendDmaHead_InternalSendDmaHead_RMASK 0xFFFF
#define QIB_7220_SendDmaHead_Reserved1_LSB 0x10
#define QIB_7220_SendDmaHead_Reserved1_RMASK 0xFFFF
#define QIB_7220_SendDmaHead_SendDmaHead_LSB 0x0
#define QIB_7220_SendDmaHead_SendDmaHead_RMASK 0xFFFF

#define QIB_7220_SendDmaHeadAddr_OFFS 0x218
#define QIB_7220_SendDmaHeadAddr_Reserved_LSB 0x30
#define QIB_7220_SendDmaHeadAddr_Reserved_RMASK 0xFFFF
#define QIB_7220_SendDmaHeadAddr_SendDmaHeadAddr_LSB 0x0
#define QIB_7220_SendDmaHeadAddr_SendDmaHeadAddr_RMASK 0xFFFFFFFFFFFF

#define QIB_7220_SendDmaBufMask0_OFFS 0x220
#define QIB_7220_SendDmaBufMask0_BufMask_63_0_LSB 0x0
#define QIB_7220_SendDmaBufMask0_BufMask_63_0_RMASK 0x0

#define QIB_7220_SendDmaStatus_OFFS 0x238
#define QIB_7220_SendDmaStatus_ScoreBoardDrainInProg_LSB 0x3F
#define QIB_7220_SendDmaStatus_ScoreBoardDrainInProg_RMASK 0x1
#define QIB_7220_SendDmaStatus_AbortInProg_LSB 0x3E
#define QIB_7220_SendDmaStatus_AbortInProg_RMASK 0x1
#define QIB_7220_SendDmaStatus_InternalSDmaEnable_LSB 0x3D
#define QIB_7220_SendDmaStatus_InternalSDmaEnable_RMASK 0x1
#define QIB_7220_SendDmaStatus_ScbDescIndex_13_0_LSB 0x2F
#define QIB_7220_SendDmaStatus_ScbDescIndex_13_0_RMASK 0x3FFF
#define QIB_7220_SendDmaStatus_RpyLowAddr_6_0_LSB 0x28
#define QIB_7220_SendDmaStatus_RpyLowAddr_6_0_RMASK 0x7F
#define QIB_7220_SendDmaStatus_RpyTag_7_0_LSB 0x20
#define QIB_7220_SendDmaStatus_RpyTag_7_0_RMASK 0xFF
#define QIB_7220_SendDmaStatus_ScbFull_LSB 0x1F
#define QIB_7220_SendDmaStatus_ScbFull_RMASK 0x1
#define QIB_7220_SendDmaStatus_ScbEmpty_LSB 0x1E
#define QIB_7220_SendDmaStatus_ScbEmpty_RMASK 0x1
#define QIB_7220_SendDmaStatus_ScbEntryValid_LSB 0x1D
#define QIB_7220_SendDmaStatus_ScbEntryValid_RMASK 0x1
#define QIB_7220_SendDmaStatus_ScbFetchDescFlag_LSB 0x1C
#define QIB_7220_SendDmaStatus_ScbFetchDescFlag_RMASK 0x1
#define QIB_7220_SendDmaStatus_SplFifoReadyToGo_LSB 0x1B
#define QIB_7220_SendDmaStatus_SplFifoReadyToGo_RMASK 0x1
#define QIB_7220_SendDmaStatus_SplFifoDisarmed_LSB 0x1A
#define QIB_7220_SendDmaStatus_SplFifoDisarmed_RMASK 0x1
#define QIB_7220_SendDmaStatus_SplFifoEmpty_LSB 0x19
#define QIB_7220_SendDmaStatus_SplFifoEmpty_RMASK 0x1
#define QIB_7220_SendDmaStatus_SplFifoFull_LSB 0x18
#define QIB_7220_SendDmaStatus_SplFifoFull_RMASK 0x1
#define QIB_7220_SendDmaStatus_SplFifoBufNum_LSB 0x10
#define QIB_7220_SendDmaStatus_SplFifoBufNum_RMASK 0xFF
#define QIB_7220_SendDmaStatus_SplFifoDescIndex_LSB 0x0
#define QIB_7220_SendDmaStatus_SplFifoDescIndex_RMASK 0xFFFF

#define QIB_7220_SendBufErr0_OFFS 0x240
#define QIB_7220_SendBufErr0_SendBufErr_63_0_LSB 0x0
#define QIB_7220_SendBufErr0_SendBufErr_63_0_RMASK 0x0

#define QIB_7220_RcvHdrAddr0_OFFS 0x270
#define QIB_7220_RcvHdrAddr0_RcvHdrAddr0_LSB 0x2
#define QIB_7220_RcvHdrAddr0_RcvHdrAddr0_RMASK 0x3FFFFFFFFF
#define QIB_7220_RcvHdrAddr0_Reserved_LSB 0x0
#define QIB_7220_RcvHdrAddr0_Reserved_RMASK 0x3

#define QIB_7220_RcvHdrTailAddr0_OFFS 0x300
#define QIB_7220_RcvHdrTailAddr0_RcvHdrTailAddr0_LSB 0x2
#define QIB_7220_RcvHdrTailAddr0_RcvHdrTailAddr0_RMASK 0x3FFFFFFFFF
#define QIB_7220_RcvHdrTailAddr0_Reserved_LSB 0x0
#define QIB_7220_RcvHdrTailAddr0_Reserved_RMASK 0x3

#define QIB_7220_ibsd_epb_access_ctrl_OFFS 0x3C0
#define QIB_7220_ibsd_epb_access_ctrl_sw_ib_epb_req_granted_LSB 0x8
#define QIB_7220_ibsd_epb_access_ctrl_sw_ib_epb_req_granted_RMASK 0x1
#define QIB_7220_ibsd_epb_access_ctrl_Reserved_LSB 0x1
#define QIB_7220_ibsd_epb_access_ctrl_Reserved_RMASK 0x7F
#define QIB_7220_ibsd_epb_access_ctrl_sw_ib_epb_req_LSB 0x0
#define QIB_7220_ibsd_epb_access_ctrl_sw_ib_epb_req_RMASK 0x1

#define QIB_7220_ibsd_epb_transaction_reg_OFFS 0x3C8
#define QIB_7220_ibsd_epb_transaction_reg_ib_epb_rdy_LSB 0x1F
#define QIB_7220_ibsd_epb_transaction_reg_ib_epb_rdy_RMASK 0x1
#define QIB_7220_ibsd_epb_transaction_reg_ib_epb_req_error_LSB 0x1E
#define QIB_7220_ibsd_epb_transaction_reg_ib_epb_req_error_RMASK 0x1
#define QIB_7220_ibsd_epb_transaction_reg_Reserved_LSB 0x1D
#define QIB_7220_ibsd_epb_transaction_reg_Reserved_RMASK 0x1
#define QIB_7220_ibsd_epb_transaction_reg_mem_data_parity_LSB 0x1C
#define QIB_7220_ibsd_epb_transaction_reg_mem_data_parity_RMASK 0x1
#define QIB_7220_ibsd_epb_transaction_reg_Reserved1_LSB 0x1B
#define QIB_7220_ibsd_epb_transaction_reg_Reserved1_RMASK 0x1
#define QIB_7220_ibsd_epb_transaction_reg_ib_epb_cs_LSB 0x19
#define QIB_7220_ibsd_epb_transaction_reg_ib_epb_cs_RMASK 0x3
#define QIB_7220_ibsd_epb_transaction_reg_ib_epb_read_write_LSB 0x18
#define QIB_7220_ibsd_epb_transaction_reg_ib_epb_read_write_RMASK 0x1
#define QIB_7220_ibsd_epb_transaction_reg_Reserved2_LSB 0x17
#define QIB_7220_ibsd_epb_transaction_reg_Reserved2_RMASK 0x1
#define QIB_7220_ibsd_epb_transaction_reg_ib_epb_address_LSB 0x8
#define QIB_7220_ibsd_epb_transaction_reg_ib_epb_address_RMASK 0x7FFF
#define QIB_7220_ibsd_epb_transaction_reg_ib_epb_data_LSB 0x0
#define QIB_7220_ibsd_epb_transaction_reg_ib_epb_data_RMASK 0xFF

#define QIB_7220_XGXSCfg_OFFS 0x3D8
#define QIB_7220_XGXSCfg_sel_link_down_for_fctrl_lane_sync_reset_LSB 0x3F
#define QIB_7220_XGXSCfg_sel_link_down_for_fctrl_lane_sync_reset_RMASK 0x1
#define QIB_7220_XGXSCfg_Reserved_LSB 0x13
#define QIB_7220_XGXSCfg_Reserved_RMASK 0xFFFFFFFFFFF
#define QIB_7220_XGXSCfg_link_sync_mask_LSB 0x9
#define QIB_7220_XGXSCfg_link_sync_mask_RMASK 0x3FF
#define QIB_7220_XGXSCfg_Reserved1_LSB 0x3
#define QIB_7220_XGXSCfg_Reserved1_RMASK 0x3F
#define QIB_7220_XGXSCfg_xcv_reset_LSB 0x2
#define QIB_7220_XGXSCfg_xcv_reset_RMASK 0x1
#define QIB_7220_XGXSCfg_Reserved2_LSB 0x1
#define QIB_7220_XGXSCfg_Reserved2_RMASK 0x1
#define QIB_7220_XGXSCfg_tx_rx_reset_LSB 0x0
#define QIB_7220_XGXSCfg_tx_rx_reset_RMASK 0x1

#define QIB_7220_IBSerDesCtrl_OFFS 0x3E0
#define QIB_7220_IBSerDesCtrl_Reserved_LSB 0x2D
#define QIB_7220_IBSerDesCtrl_Reserved_RMASK 0x7FFFF
#define QIB_7220_IBSerDesCtrl_INT_uC_LSB 0x2C
#define QIB_7220_IBSerDesCtrl_INT_uC_RMASK 0x1
#define QIB_7220_IBSerDesCtrl_CKSEL_uC_LSB 0x2A
#define QIB_7220_IBSerDesCtrl_CKSEL_uC_RMASK 0x3
#define QIB_7220_IBSerDesCtrl_PLLN_LSB 0x28
#define QIB_7220_IBSerDesCtrl_PLLN_RMASK 0x3
#define QIB_7220_IBSerDesCtrl_PLLM_LSB 0x25
#define QIB_7220_IBSerDesCtrl_PLLM_RMASK 0x7
#define QIB_7220_IBSerDesCtrl_TXOBPD_LSB 0x24
#define QIB_7220_IBSerDesCtrl_TXOBPD_RMASK 0x1
#define QIB_7220_IBSerDesCtrl_TWC_LSB 0x23
#define QIB_7220_IBSerDesCtrl_TWC_RMASK 0x1
#define QIB_7220_IBSerDesCtrl_RXIDLE_LSB 0x22
#define QIB_7220_IBSerDesCtrl_RXIDLE_RMASK 0x1
#define QIB_7220_IBSerDesCtrl_RXINV_LSB 0x21
#define QIB_7220_IBSerDesCtrl_RXINV_RMASK 0x1
#define QIB_7220_IBSerDesCtrl_TXINV_LSB 0x20
#define QIB_7220_IBSerDesCtrl_TXINV_RMASK 0x1
#define QIB_7220_IBSerDesCtrl_Reserved1_LSB 0x12
#define QIB_7220_IBSerDesCtrl_Reserved1_RMASK 0x3FFF
#define QIB_7220_IBSerDesCtrl_NumSerDesRegsToWrForRXEQ_LSB 0xD
#define QIB_7220_IBSerDesCtrl_NumSerDesRegsToWrForRXEQ_RMASK 0x1F
#define QIB_7220_IBSerDesCtrl_NumSerDesRegsToWrForDDS_LSB 0x8
#define QIB_7220_IBSerDesCtrl_NumSerDesRegsToWrForDDS_RMASK 0x1F
#define QIB_7220_IBSerDesCtrl_Reserved2_LSB 0x1
#define QIB_7220_IBSerDesCtrl_Reserved2_RMASK 0x7F
#define QIB_7220_IBSerDesCtrl_ResetIB_uC_Core_LSB 0x0
#define QIB_7220_IBSerDesCtrl_ResetIB_uC_Core_RMASK 0x1

#define QIB_7220_pciesd_epb_access_ctrl_OFFS 0x400
#define QIB_7220_pciesd_epb_access_ctrl_sw_pcie_epb_req_granted_LSB 0x8
#define QIB_7220_pciesd_epb_access_ctrl_sw_pcie_epb_req_granted_RMASK 0x1
#define QIB_7220_pciesd_epb_access_ctrl_Reserved_LSB 0x3
#define QIB_7220_pciesd_epb_access_ctrl_Reserved_RMASK 0x1F
#define QIB_7220_pciesd_epb_access_ctrl_sw_pcieepb_star_en_LSB 0x1
#define QIB_7220_pciesd_epb_access_ctrl_sw_pcieepb_star_en_RMASK 0x3
#define QIB_7220_pciesd_epb_access_ctrl_sw_pcie_epb_req_LSB 0x0
#define QIB_7220_pciesd_epb_access_ctrl_sw_pcie_epb_req_RMASK 0x1

#define QIB_7220_pciesd_epb_transaction_reg_OFFS 0x408
#define QIB_7220_pciesd_epb_transaction_reg_pcie_epb_rdy_LSB 0x1F
#define QIB_7220_pciesd_epb_transaction_reg_pcie_epb_rdy_RMASK 0x1
#define QIB_7220_pciesd_epb_transaction_reg_pcie_epb_req_error_LSB 0x1E
#define QIB_7220_pciesd_epb_transaction_reg_pcie_epb_req_error_RMASK 0x1
#define QIB_7220_pciesd_epb_transaction_reg_Reserved_LSB 0x1D
#define QIB_7220_pciesd_epb_transaction_reg_Reserved_RMASK 0x1
#define QIB_7220_pciesd_epb_transaction_reg_mem_data_parity_LSB 0x1C
#define QIB_7220_pciesd_epb_transaction_reg_mem_data_parity_RMASK 0x1
#define QIB_7220_pciesd_epb_transaction_reg_pcie_epb_cs_LSB 0x19
#define QIB_7220_pciesd_epb_transaction_reg_pcie_epb_cs_RMASK 0x7
#define QIB_7220_pciesd_epb_transaction_reg_pcie_epb_read_write_LSB 0x18
#define QIB_7220_pciesd_epb_transaction_reg_pcie_epb_read_write_RMASK 0x1
#define QIB_7220_pciesd_epb_transaction_reg_Reserved1_LSB 0x17
#define QIB_7220_pciesd_epb_transaction_reg_Reserved1_RMASK 0x1
#define QIB_7220_pciesd_epb_transaction_reg_pcie_epb_address_LSB 0x8
#define QIB_7220_pciesd_epb_transaction_reg_pcie_epb_address_RMASK 0x7FFF
#define QIB_7220_pciesd_epb_transaction_reg_pcie_epb_data_LSB 0x0
#define QIB_7220_pciesd_epb_transaction_reg_pcie_epb_data_RMASK 0xFF

#define QIB_7220_SerDes_DDSRXEQ0_OFFS 0x500
#define QIB_7220_SerDes_DDSRXEQ0_reg_addr_LSB 0x4
#define QIB_7220_SerDes_DDSRXEQ0_reg_addr_RMASK 0x3F
#define QIB_7220_SerDes_DDSRXEQ0_element_num_LSB 0x0
#define QIB_7220_SerDes_DDSRXEQ0_element_num_RMASK 0xF

#define QIB_7220_LBIntCnt_OFFS 0x13000

#define QIB_7220_LBFlowStallCnt_OFFS 0x13008

#define QIB_7220_TxSDmaDescCnt_OFFS 0x13010

#define QIB_7220_TxUnsupVLErrCnt_OFFS 0x13018

#define QIB_7220_TxDataPktCnt_OFFS 0x13020

#define QIB_7220_TxFlowPktCnt_OFFS 0x13028

#define QIB_7220_TxDwordCnt_OFFS 0x13030

#define QIB_7220_TxLenErrCnt_OFFS 0x13038

#define QIB_7220_TxMaxMinLenErrCnt_OFFS 0x13040

#define QIB_7220_TxUnderrunCnt_OFFS 0x13048

#define QIB_7220_TxFlowStallCnt_OFFS 0x13050

#define QIB_7220_TxDroppedPktCnt_OFFS 0x13058

#define QIB_7220_RxDroppedPktCnt_OFFS 0x13060

#define QIB_7220_RxDataPktCnt_OFFS 0x13068

#define QIB_7220_RxFlowPktCnt_OFFS 0x13070

#define QIB_7220_RxDwordCnt_OFFS 0x13078

#define QIB_7220_RxLenErrCnt_OFFS 0x13080

#define QIB_7220_RxMaxMinLenErrCnt_OFFS 0x13088

#define QIB_7220_RxICRCErrCnt_OFFS 0x13090

#define QIB_7220_RxVCRCErrCnt_OFFS 0x13098

#define QIB_7220_RxFlowCtrlViolCnt_OFFS 0x130A0

#define QIB_7220_RxVersionErrCnt_OFFS 0x130A8

#define QIB_7220_RxLinkMalformCnt_OFFS 0x130B0

#define QIB_7220_RxEBPCnt_OFFS 0x130B8

#define QIB_7220_RxLPCRCErrCnt_OFFS 0x130C0

#define QIB_7220_RxBufOvflCnt_OFFS 0x130C8

#define QIB_7220_RxTIDFullErrCnt_OFFS 0x130D0

#define QIB_7220_RxTIDValidErrCnt_OFFS 0x130D8

#define QIB_7220_RxPKeyMismatchCnt_OFFS 0x130E0

#define QIB_7220_RxP0HdrEgrOvflCnt_OFFS 0x130E8

#define QIB_7220_IBStatusChangeCnt_OFFS 0x13170

#define QIB_7220_IBLinkErrRecoveryCnt_OFFS 0x13178

#define QIB_7220_IBLinkDownedCnt_OFFS 0x13180

#define QIB_7220_IBSymbolErrCnt_OFFS 0x13188

#define QIB_7220_RxVL15DroppedPktCnt_OFFS 0x13190

#define QIB_7220_RxOtherLocalPhyErrCnt_OFFS 0x13198

#define QIB_7220_PcieRetryBufDiagQwordCnt_OFFS 0x131A0

#define QIB_7220_ExcessBufferOvflCnt_OFFS 0x131A8

#define QIB_7220_LocalLinkIntegrityErrCnt_OFFS 0x131B0

#define QIB_7220_RxVlErrCnt_OFFS 0x131B8

#define QIB_7220_RxDlidFltrCnt_OFFS 0x131C0

#define QIB_7220_CNT_0131C8_OFFS 0x131C8

#define QIB_7220_PSStat_OFFS 0x13200

#define QIB_7220_PSStart_OFFS 0x13208

#define QIB_7220_PSInterval_OFFS 0x13210

#define QIB_7220_PSRcvDataCount_OFFS 0x13218

#define QIB_7220_PSRcvPktsCount_OFFS 0x13220

#define QIB_7220_PSXmitDataCount_OFFS 0x13228

#define QIB_7220_PSXmitPktsCount_OFFS 0x13230

#define QIB_7220_PSXmitWaitCount_OFFS 0x13238

#define QIB_7220_CNT_013240_OFFS 0x13240

#define QIB_7220_RcvEgrArray_OFFS 0x14000

#define QIB_7220_MEM_038000_OFFS 0x38000

#define QIB_7220_RcvTIDArray0_OFFS 0x53000

#define QIB_7220_PIOLaunchFIFO_OFFS 0x64000

#define QIB_7220_MEM_064480_OFFS 0x64480

#define QIB_7220_SendPIOpbcCache_OFFS 0x64800

#define QIB_7220_MEM_064C80_OFFS 0x64C80

#define QIB_7220_PreLaunchFIFO_OFFS 0x65000

#define QIB_7220_MEM_065080_OFFS 0x65080

#define QIB_7220_ScoreBoard_OFFS 0x65400

#define QIB_7220_MEM_065440_OFFS 0x65440

#define QIB_7220_DescriptorFIFO_OFFS 0x65800

#define QIB_7220_MEM_065880_OFFS 0x65880

#define QIB_7220_RcvBuf1_OFFS 0x72000

#define QIB_7220_MEM_074800_OFFS 0x74800

#define QIB_7220_RcvBuf2_OFFS 0x75000

#define QIB_7220_MEM_076400_OFFS 0x76400

#define QIB_7220_RcvFlags_OFFS 0x77000

#define QIB_7220_MEM_078400_OFFS 0x78400

#define QIB_7220_RcvLookupBuf1_OFFS 0x79000

#define QIB_7220_MEM_07A400_OFFS 0x7A400

#define QIB_7220_RcvDMADatBuf_OFFS 0x7B000

#define QIB_7220_RcvDMAHdrBuf_OFFS 0x7B800

#define QIB_7220_MiscRXEIntMem_OFFS 0x7C000

#define QIB_7220_MEM_07D400_OFFS 0x7D400

#define QIB_7220_PCIERcvBuf_OFFS 0x80000

#define QIB_7220_PCIERetryBuf_OFFS 0x84000

#define QIB_7220_PCIERcvBufRdToWrAddr_OFFS 0x88000

#define QIB_7220_PCIECplBuf_OFFS 0x90000

#define QIB_7220_IBSerDesMappTable_OFFS 0x94000

#define QIB_7220_MEM_095000_OFFS 0x95000

#define QIB_7220_SendBuf0_MA_OFFS 0x100000

#define QIB_7220_MEM_1A0000_OFFS 0x1A0000

/* SPDX-License-Identifier: GPL-2.0 */
/* $XFree86: xc/programs/Xserver/hw/xfree86/drivers/nv/nv_type.h,v 1.35 2002/08/05 20:47:06 mvojkovi Exp $ */

#ifndef __NV_STRUCT_H__
#define __NV_STRUCT_H__

#define NV_CHIP_RIVA_128            ((PCI_VENDOR_ID_NVIDIA_SGS << 16)| PCI_DEVICE_ID_NVIDIA_RIVA128)
#define NV_CHIP_TNT                 ((PCI_VENDOR_ID_NVIDIA << 16)| PCI_DEVICE_ID_NVIDIA_TNT)
#define NV_CHIP_TNT2                ((PCI_VENDOR_ID_NVIDIA << 16)| PCI_DEVICE_ID_NVIDIA_TNT2)
#define NV_CHIP_UTNT2               ((PCI_VENDOR_ID_NVIDIA << 16)| PCI_DEVICE_ID_NVIDIA_UTNT2)
#define NV_CHIP_VTNT2               ((PCI_VENDOR_ID_NVIDIA << 16)| PCI_DEVICE_ID_NVIDIA_VTNT2)
#define NV_CHIP_UVTNT2              ((PCI_VENDOR_ID_NVIDIA << 16)| PCI_DEVICE_ID_NVIDIA_UVTNT2)
#define NV_CHIP_ITNT2               ((PCI_VENDOR_ID_NVIDIA << 16)| PCI_DEVICE_ID_NVIDIA_ITNT2)
#define NV_CHIP_GEFORCE_256         ((PCI_VENDOR_ID_NVIDIA << 16)| PCI_DEVICE_ID_NVIDIA_GEFORCE_256)
#define NV_CHIP_GEFORCE_DDR         ((PCI_VENDOR_ID_NVIDIA << 16)| PCI_DEVICE_ID_NVIDIA_GEFORCE_DDR)
#define NV_CHIP_QUADRO              ((PCI_VENDOR_ID_NVIDIA << 16)| PCI_DEVICE_ID_NVIDIA_QUADRO)
#define NV_CHIP_GEFORCE2_MX         ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE2_MX)
#define NV_CHIP_GEFORCE2_MX_100     ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE2_MX_100)
#define NV_CHIP_QUADRO2_MXR         ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_QUADRO2_MXR)
#define NV_CHIP_GEFORCE2_GO         ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE2_GO)
#define NV_CHIP_GEFORCE2_GTS        ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE2_GTS)
#define NV_CHIP_GEFORCE2_TI         ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE2_TI)
#define NV_CHIP_GEFORCE2_ULTRA      ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE2_ULTRA)
#define NV_CHIP_QUADRO2_PRO         ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_QUADRO2_PRO)
#define NV_CHIP_GEFORCE4_MX_460     ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE4_MX_460)
#define NV_CHIP_GEFORCE4_MX_440     ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE4_MX_440)
#define NV_CHIP_GEFORCE4_MX_420     ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE4_MX_420)
#define NV_CHIP_GEFORCE4_440_GO     ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE4_440_GO)
#define NV_CHIP_GEFORCE4_420_GO     ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE4_420_GO)
#define NV_CHIP_GEFORCE4_420_GO_M32 ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE4_420_GO_M32)
#define NV_CHIP_QUADRO4_500XGL      ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_QUADRO4_500XGL)
#define NV_CHIP_GEFORCE4_440_GO_M64 ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE4_440_GO_M64)
#define NV_CHIP_QUADRO4_200         ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_QUADRO4_200)
#define NV_CHIP_QUADRO4_550XGL      ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_QUADRO4_550XGL)
#define NV_CHIP_QUADRO4_500_GOGL    ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_QUADRO4_500_GOGL)
#define NV_CHIP_0x0180              ((PCI_VENDOR_ID_NVIDIA << 16) | 0x0180)
#define NV_CHIP_0x0181              ((PCI_VENDOR_ID_NVIDIA << 16) | 0x0181)
#define NV_CHIP_0x0182              ((PCI_VENDOR_ID_NVIDIA << 16) | 0x0182)
#define NV_CHIP_0x0188              ((PCI_VENDOR_ID_NVIDIA << 16) | 0x0188)
#define NV_CHIP_0x018A              ((PCI_VENDOR_ID_NVIDIA << 16) | 0x018A)
#define NV_CHIP_0x018B              ((PCI_VENDOR_ID_NVIDIA << 16) | 0x018B)
#define NV_CHIP_IGEFORCE2           ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_IGEFORCE2)
#define NV_CHIP_0x01F0              ((PCI_VENDOR_ID_NVIDIA << 16) | 0x01F0)
#define NV_CHIP_GEFORCE3            ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE3)
#define NV_CHIP_GEFORCE3_TI_200     ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE3_TI_200)
#define NV_CHIP_GEFORCE3_TI_500     ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE3_TI_500)
#define NV_CHIP_QUADRO_DCC          ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_QUADRO_DCC)
#define NV_CHIP_GEFORCE4_TI_4600    ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE4_TI_4600)
#define NV_CHIP_GEFORCE4_TI_4400    ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE4_TI_4400)
#define NV_CHIP_GEFORCE4_TI_4200    ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_GEFORCE4_TI_4200)
#define NV_CHIP_QUADRO4_900XGL      ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_QUADRO4_900XGL)
#define NV_CHIP_QUADRO4_750XGL      ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_QUADRO4_750XGL)
#define NV_CHIP_QUADRO4_700XGL      ((PCI_VENDOR_ID_NVIDIA << 16) | PCI_DEVICE_ID_NVIDIA_QUADRO4_700XGL)
#define NV_CHIP_0x0280              ((PCI_VENDOR_ID_NVIDIA << 16) | 0x0280)
#define NV_CHIP_0x0281              ((PCI_VENDOR_ID_NVIDIA << 16) | 0x0281)
#define NV_CHIP_0x0288              ((PCI_VENDOR_ID_NVIDIA << 16) | 0x0288)
#define NV_CHIP_0x0289              ((PCI_VENDOR_ID_NVIDIA << 16) | 0x0289)

#endif /* __NV_STRUCT_H__ */

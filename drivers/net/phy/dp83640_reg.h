/* SPDX-License-Identifier: GPL-2.0 */
/* dp83640_reg.h
 * Generated by regen.tcl on Thu Feb 17 10:02:48 AM CET 2011
 */
#ifndef HAVE_DP83640_REGISTERS
#define HAVE_DP83640_REGISTERS

/* #define PAGE0                  0x0000 */
#define PHYCR2                    0x001c /* PHY Control Register 2 */

#define PAGE4                     0x0004
#define PTP_CTL                   0x0014 /* PTP Control Register */
#define PTP_TDR                   0x0015 /* PTP Time Data Register */
#define PTP_STS                   0x0016 /* PTP Status Register */
#define PTP_TSTS                  0x0017 /* PTP Trigger Status Register */
#define PTP_RATEL                 0x0018 /* PTP Rate Low Register */
#define PTP_RATEH                 0x0019 /* PTP Rate High Register */
#define PTP_RDCKSUM               0x001a /* PTP Read Checksum */
#define PTP_WRCKSUM               0x001b /* PTP Write Checksum */
#define PTP_TXTS                  0x001c /* PTP Transmit Timestamp Register, in four 16-bit reads */
#define PTP_RXTS                  0x001d /* PTP Receive Timestamp Register, in six? 16-bit reads */
#define PTP_ESTS                  0x001e /* PTP Event Status Register */
#define PTP_EDATA                 0x001f /* PTP Event Data Register */

#define PAGE5                     0x0005
#define PTP_TRIG                  0x0014 /* PTP Trigger Configuration Register */
#define PTP_EVNT                  0x0015 /* PTP Event Configuration Register */
#define PTP_TXCFG0                0x0016 /* PTP Transmit Configuration Register 0 */
#define PTP_TXCFG1                0x0017 /* PTP Transmit Configuration Register 1 */
#define PSF_CFG0                  0x0018 /* PHY Status Frame Configuration Register 0 */
#define PTP_RXCFG0                0x0019 /* PTP Receive Configuration Register 0 */
#define PTP_RXCFG1                0x001a /* PTP Receive Configuration Register 1 */
#define PTP_RXCFG2                0x001b /* PTP Receive Configuration Register 2 */
#define PTP_RXCFG3                0x001c /* PTP Receive Configuration Register 3 */
#define PTP_RXCFG4                0x001d /* PTP Receive Configuration Register 4 */
#define PTP_TRDL                  0x001e /* PTP Temporary Rate Duration Low Register */
#define PTP_TRDH                  0x001f /* PTP Temporary Rate Duration High Register */

#define PAGE6                     0x0006
#define PTP_COC                   0x0014 /* PTP Clock Output Control Register */
#define PSF_CFG1                  0x0015 /* PHY Status Frame Configuration Register 1 */
#define PSF_CFG2                  0x0016 /* PHY Status Frame Configuration Register 2 */
#define PSF_CFG3                  0x0017 /* PHY Status Frame Configuration Register 3 */
#define PSF_CFG4                  0x0018 /* PHY Status Frame Configuration Register 4 */
#define PTP_SFDCFG                0x0019 /* PTP SFD Configuration Register */
#define PTP_INTCTL                0x001a /* PTP Interrupt Control Register */
#define PTP_CLKSRC                0x001b /* PTP Clock Source Register */
#define PTP_ETR                   0x001c /* PTP Ethernet Type Register */
#define PTP_OFF                   0x001d /* PTP Offset Register */
#define PTP_GPIOMON               0x001e /* PTP GPIO Monitor Register */
#define PTP_RXHASH                0x001f /* PTP Receive Hash Register */

/* Bit definitions for the PHYCR2 register */
#define BC_WRITE                  (1<<11) /* Broadcast Write Enable */

/* Bit definitions for the PTP_CTL register */
#define TRIG_SEL_SHIFT            (10)    /* PTP Trigger Select */
#define TRIG_SEL_MASK             (0x7)
#define TRIG_DIS                  (1<<9)  /* Disable PTP Trigger */
#define TRIG_EN                   (1<<8)  /* Enable PTP Trigger */
#define TRIG_READ                 (1<<7)  /* Read PTP Trigger */
#define TRIG_LOAD                 (1<<6)  /* Load PTP Trigger */
#define PTP_RD_CLK                (1<<5)  /* Read PTP Clock */
#define PTP_LOAD_CLK              (1<<4)  /* Load PTP Clock */
#define PTP_STEP_CLK              (1<<3)  /* Step PTP Clock */
#define PTP_ENABLE                (1<<2)  /* Enable PTP Clock */
#define PTP_DISABLE               (1<<1)  /* Disable PTP Clock */
#define PTP_RESET                 (1<<0)  /* Reset PTP Clock */

/* Bit definitions for the PTP_STS register */
#define TXTS_RDY                  (1<<11) /* Transmit Timestamp Ready */
#define RXTS_RDY                  (1<<10) /* Receive Timestamp Ready */
#define TRIG_DONE                 (1<<9)  /* PTP Trigger Done */
#define EVENT_RDY                 (1<<8)  /* PTP Event Timestamp Ready */
#define TXTS_IE                   (1<<3)  /* Transmit Timestamp Interrupt Enable */
#define RXTS_IE                   (1<<2)  /* Receive Timestamp Interrupt Enable */
#define TRIG_IE                   (1<<1)  /* Trigger Interrupt Enable */
#define EVENT_IE                  (1<<0)  /* Event Interrupt Enable */

/* Bit definitions for the PTP_TSTS register */
#define TRIG7_ERROR               (1<<15) /* Trigger 7 Error */
#define TRIG7_ACTIVE              (1<<14) /* Trigger 7 Active */
#define TRIG6_ERROR               (1<<13) /* Trigger 6 Error */
#define TRIG6_ACTIVE              (1<<12) /* Trigger 6 Active */
#define TRIG5_ERROR               (1<<11) /* Trigger 5 Error */
#define TRIG5_ACTIVE              (1<<10) /* Trigger 5 Active */
#define TRIG4_ERROR               (1<<9)  /* Trigger 4 Error */
#define TRIG4_ACTIVE              (1<<8)  /* Trigger 4 Active */
#define TRIG3_ERROR               (1<<7)  /* Trigger 3 Error */
#define TRIG3_ACTIVE              (1<<6)  /* Trigger 3 Active */
#define TRIG2_ERROR               (1<<5)  /* Trigger 2 Error */
#define TRIG2_ACTIVE              (1<<4)  /* Trigger 2 Active */
#define TRIG1_ERROR               (1<<3)  /* Trigger 1 Error */
#define TRIG1_ACTIVE              (1<<2)  /* Trigger 1 Active */
#define TRIG0_ERROR               (1<<1)  /* Trigger 0 Error */
#define TRIG0_ACTIVE              (1<<0)  /* Trigger 0 Active */

/* Bit definitions for the PTP_RATEH register */
#define PTP_RATE_DIR              (1<<15) /* PTP Rate Direction */
#define PTP_TMP_RATE              (1<<14) /* PTP Temporary Rate */
#define PTP_RATE_HI_SHIFT         (0)     /* PTP Rate High 10-bits */
#define PTP_RATE_HI_MASK          (0x3ff)

/* Bit definitions for the PTP_ESTS register */
#define EVNTS_MISSED_SHIFT        (8)     /* Indicates number of events missed */
#define EVNTS_MISSED_MASK         (0x7)
#define EVNT_TS_LEN_SHIFT         (6)     /* Indicates length of the Timestamp field in 16-bit words minus 1 */
#define EVNT_TS_LEN_MASK          (0x3)
#define EVNT_RF                   (1<<5)  /* Indicates whether the event is a rise or falling event */
#define EVNT_NUM_SHIFT            (2)     /* Indicates Event Timestamp Unit which detected an event */
#define EVNT_NUM_MASK             (0x7)
#define MULT_EVNT                 (1<<1)  /* Indicates multiple events were detected at the same time */
#define EVENT_DET                 (1<<0)  /* PTP Event Detected */

/* Bit definitions for the PTP_EDATA register */
#define E7_RISE                   (1<<15) /* Indicates direction of Event 7 */
#define E7_DET                    (1<<14) /* Indicates Event 7 detected */
#define E6_RISE                   (1<<13) /* Indicates direction of Event 6 */
#define E6_DET                    (1<<12) /* Indicates Event 6 detected */
#define E5_RISE                   (1<<11) /* Indicates direction of Event 5 */
#define E5_DET                    (1<<10) /* Indicates Event 5 detected */
#define E4_RISE                   (1<<9)  /* Indicates direction of Event 4 */
#define E4_DET                    (1<<8)  /* Indicates Event 4 detected */
#define E3_RISE                   (1<<7)  /* Indicates direction of Event 3 */
#define E3_DET                    (1<<6)  /* Indicates Event 3 detected */
#define E2_RISE                   (1<<5)  /* Indicates direction of Event 2 */
#define E2_DET                    (1<<4)  /* Indicates Event 2 detected */
#define E1_RISE                   (1<<3)  /* Indicates direction of Event 1 */
#define E1_DET                    (1<<2)  /* Indicates Event 1 detected */
#define E0_RISE                   (1<<1)  /* Indicates direction of Event 0 */
#define E0_DET                    (1<<0)  /* Indicates Event 0 detected */

/* Bit definitions for the PTP_TRIG register */
#define TRIG_PULSE                (1<<15) /* generate a Pulse rather than a single edge */
#define TRIG_PER                  (1<<14) /* generate a periodic signal */
#define TRIG_IF_LATE              (1<<13) /* trigger immediately if already past */
#define TRIG_NOTIFY               (1<<12) /* Trigger Notification Enable */
#define TRIG_GPIO_SHIFT           (8)     /* Trigger GPIO Connection, value 1-12 */
#define TRIG_GPIO_MASK            (0xf)
#define TRIG_TOGGLE               (1<<7)  /* Trigger Toggle Mode Enable */
#define TRIG_CSEL_SHIFT           (1)     /* Trigger Configuration Select */
#define TRIG_CSEL_MASK            (0x7)
#define TRIG_WR                   (1<<0)  /* Trigger Configuration Write */

/* Bit definitions for the PTP_EVNT register */
#define EVNT_RISE                 (1<<14) /* Event Rise Detect Enable */
#define EVNT_FALL                 (1<<13) /* Event Fall Detect Enable */
#define EVNT_SINGLE               (1<<12) /* enable single event capture operation */
#define EVNT_GPIO_SHIFT           (8)     /* Event GPIO Connection, value 1-12 */
#define EVNT_GPIO_MASK            (0xf)
#define EVNT_SEL_SHIFT            (1)     /* Event Select */
#define EVNT_SEL_MASK             (0x7)
#define EVNT_WR                   (1<<0)  /* Event Configuration Write */

/* Bit definitions for the PTP_TXCFG0 register */
#define SYNC_1STEP                (1<<15) /* insert timestamp into transmit Sync Messages */
#define DR_INSERT                 (1<<13) /* Insert Delay_Req Timestamp in Delay_Resp (dangerous) */
#define NTP_TS_EN                 (1<<12) /* Enable Timestamping of NTP Packets */
#define IGNORE_2STEP              (1<<11) /* Ignore Two_Step flag for One-Step operation */
#define CRC_1STEP                 (1<<10) /* Disable checking of CRC for One-Step operation */
#define CHK_1STEP                 (1<<9)  /* Enable UDP Checksum correction for One-Step Operation */
#define IP1588_EN                 (1<<8)  /* Enable IEEE 1588 defined IP address filter */
#define TX_L2_EN                  (1<<7)  /* Layer2 Timestamp Enable */
#define TX_IPV6_EN                (1<<6)  /* IPv6 Timestamp Enable */
#define TX_IPV4_EN                (1<<5)  /* IPv4 Timestamp Enable */
#define TX_PTP_VER_SHIFT          (1)     /* Enable Timestamp capture for IEEE 1588 version X */
#define TX_PTP_VER_MASK           (0xf)
#define TX_TS_EN                  (1<<0)  /* Transmit Timestamp Enable */

/* Bit definitions for the PTP_TXCFG1 register */
#define BYTE0_MASK_SHIFT          (8)     /* Bit mask to be used for matching Byte0 of the PTP Message */
#define BYTE0_MASK_MASK           (0xff)
#define BYTE0_DATA_SHIFT          (0)     /* Data to be used for matching Byte0 of the PTP Message */
#define BYTE0_DATA_MASK           (0xff)

/* Bit definitions for the PSF_CFG0 register */
#define MAC_SRC_ADD_SHIFT         (11)    /* Status Frame Mac Source Address */
#define MAC_SRC_ADD_MASK          (0x3)
#define MIN_PRE_SHIFT             (8)     /* Status Frame Minimum Preamble */
#define MIN_PRE_MASK              (0x7)
#define PSF_ENDIAN                (1<<7)  /* Status Frame Endian Control */
#define PSF_IPV4                  (1<<6)  /* Status Frame IPv4 Enable */
#define PSF_PCF_RD                (1<<5)  /* Control Frame Read PHY Status Frame Enable */
#define PSF_ERR_EN                (1<<4)  /* Error PHY Status Frame Enable */
#define PSF_TXTS_EN               (1<<3)  /* Transmit Timestamp PHY Status Frame Enable */
#define PSF_RXTS_EN               (1<<2)  /* Receive Timestamp PHY Status Frame Enable */
#define PSF_TRIG_EN               (1<<1)  /* Trigger PHY Status Frame Enable */
#define PSF_EVNT_EN               (1<<0)  /* Event PHY Status Frame Enable */

/* Bit definitions for the PTP_RXCFG0 register */
#define DOMAIN_EN                 (1<<15) /* Domain Match Enable */
#define ALT_MAST_DIS              (1<<14) /* Alternate Master Timestamp Disable */
#define USER_IP_SEL               (1<<13) /* Selects portion of IP address accessible thru PTP_RXCFG2 */
#define USER_IP_EN                (1<<12) /* Enable User-programmed IP address filter */
#define RX_SLAVE                  (1<<11) /* Receive Slave Only */
#define IP1588_EN_SHIFT           (8)     /* Enable IEEE 1588 defined IP address filters */
#define IP1588_EN_MASK            (0xf)
#define RX_L2_EN                  (1<<7)  /* Layer2 Timestamp Enable */
#define RX_IPV6_EN                (1<<6)  /* IPv6 Timestamp Enable */
#define RX_IPV4_EN                (1<<5)  /* IPv4 Timestamp Enable */
#define RX_PTP_VER_SHIFT          (1)     /* Enable Timestamp capture for IEEE 1588 version X */
#define RX_PTP_VER_MASK           (0xf)
#define RX_TS_EN                  (1<<0)  /* Receive Timestamp Enable */

/* Bit definitions for the PTP_RXCFG1 register */
#define BYTE0_MASK_SHIFT          (8)     /* Bit mask to be used for matching Byte0 of the PTP Message */
#define BYTE0_MASK_MASK           (0xff)
#define BYTE0_DATA_SHIFT          (0)     /* Data to be used for matching Byte0 of the PTP Message */
#define BYTE0_DATA_MASK           (0xff)

/* Bit definitions for the PTP_RXCFG3 register */
#define TS_MIN_IFG_SHIFT          (12)    /* Minimum Inter-frame Gap */
#define TS_MIN_IFG_MASK           (0xf)
#define ACC_UDP                   (1<<11) /* Record Timestamp if UDP Checksum Error */
#define ACC_CRC                   (1<<10) /* Record Timestamp if CRC Error */
#define TS_APPEND                 (1<<9)  /* Append Timestamp for L2 */
#define TS_INSERT                 (1<<8)  /* Enable Timestamp Insertion */
#define PTP_DOMAIN_SHIFT          (0)     /* PTP Message domainNumber field */
#define PTP_DOMAIN_MASK           (0xff)

/* Bit definitions for the PTP_RXCFG4 register */
#define IPV4_UDP_MOD              (1<<15) /* Enable IPV4 UDP Modification */
#define TS_SEC_EN                 (1<<14) /* Enable Timestamp Seconds */
#define TS_SEC_LEN_SHIFT          (12)    /* Inserted Timestamp Seconds Length */
#define TS_SEC_LEN_MASK           (0x3)
#define RXTS_NS_OFF_SHIFT         (6)     /* Receive Timestamp Nanoseconds offset */
#define RXTS_NS_OFF_MASK          (0x3f)
#define RXTS_SEC_OFF_SHIFT        (0)     /* Receive Timestamp Seconds offset */
#define RXTS_SEC_OFF_MASK         (0x3f)

/* Bit definitions for the PTP_COC register */
#define PTP_CLKOUT_EN             (1<<15) /* PTP Clock Output Enable */
#define PTP_CLKOUT_SEL            (1<<14) /* PTP Clock Output Source Select */
#define PTP_CLKOUT_SPEEDSEL       (1<<13) /* PTP Clock Output I/O Speed Select */
#define PTP_CLKDIV_SHIFT          (0)     /* PTP Clock Divide-by Value */
#define PTP_CLKDIV_MASK           (0xff)

/* Bit definitions for the PSF_CFG1 register */
#define PTPRESERVED_SHIFT         (12)    /* PTP v2 reserved field */
#define PTPRESERVED_MASK          (0xf)
#define VERSIONPTP_SHIFT          (8)     /* PTP v2 versionPTP field */
#define VERSIONPTP_MASK           (0xf)
#define TRANSPORT_SPECIFIC_SHIFT  (4)     /* PTP v2 Header transportSpecific field */
#define TRANSPORT_SPECIFIC_MASK   (0xf)
#define MESSAGETYPE_SHIFT         (0)     /* PTP v2 messageType field */
#define MESSAGETYPE_MASK          (0xf)

/* Bit definitions for the PTP_SFDCFG register */
#define TX_SFD_GPIO_SHIFT         (4)     /* TX SFD GPIO Select, value 1-12 */
#define TX_SFD_GPIO_MASK          (0xf)
#define RX_SFD_GPIO_SHIFT         (0)     /* RX SFD GPIO Select, value 1-12 */
#define RX_SFD_GPIO_MASK          (0xf)

/* Bit definitions for the PTP_INTCTL register */
#define PTP_INT_GPIO_SHIFT        (0)     /* PTP Interrupt GPIO Select */
#define PTP_INT_GPIO_MASK         (0xf)

/* Bit definitions for the PTP_CLKSRC register */
#define CLK_SRC_SHIFT             (14)    /* PTP Clock Source Select */
#define CLK_SRC_MASK              (0x3)
#define CLK_SRC_PER_SHIFT         (0)     /* PTP Clock Source Period */
#define CLK_SRC_PER_MASK          (0x7f)

/* Bit definitions for the PTP_OFF register */
#define PTP_OFFSET_SHIFT          (0)     /* PTP Message offset from preceding header */
#define PTP_OFFSET_MASK           (0xff)

#endif

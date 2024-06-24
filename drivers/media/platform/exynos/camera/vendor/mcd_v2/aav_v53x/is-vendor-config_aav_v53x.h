#ifndef IS_VENDOR_CONFIG_AAV_V53X_H
#define IS_VENDOR_CONFIG_AAV_V53X_H

//#define USE_AP_PDAF						/* Support sensor PDAF SW Solution */

/***** HW DEFENDANT DEFINE *****/
#define CONFIG_LEDS_SM5714

#define VENDER_PATH

#define USE_HI1336C_SETFILE
#define CAMERA_UWIDE_DUALIZED SENSOR_NAME_HI1336
#define USE_GW1P_SETFILE

#define CONFIG_SEC_CAL_ENABLE
#define IS_REAR_MAX_CAL_SIZE (0x4970)
#define IS_FRONT_MAX_CAL_SIZE (0x3310)
#define IS_REAR3_MAX_CAL_SIZE (0x1AE0)
#define IS_REAR4_MAX_CAL_SIZE (0x1A50)

#define CAMERA_REAR2
#define CAMERA_REAR3
#define CAMERA_REAR4

#define CAMERA_REAR_DUAL_CAL

#define CAMERA_REAR2_MODULEID
#define CAMERA_REAR3_MODULEID
#define CAMERA_REAR4_MODULEID
#define CAMERA_FRONT_FIXED_FOCUS
#define WIDE_OIS_ROM_ID ROM_ID_REAR

#define CONFIG_SECURE_CAMERA_USE 1

/* To handle CSI error issue, disable the dual sync setting */
#define DISABLE_DUAL_SYNC

#define CAMERA_EEPROM_SUPPORT_FRONT
#define CONFIG_CAMERA_EEPROM_DUALIZED
#define CAMERA_CAL_VERSION_GC5035B 'Q'
#define CAMERA_STANDARD_CAL_ISP_VERSION 'E'
#endif /* IS_VENDOR_CONFIG_AAV_V53X_H */

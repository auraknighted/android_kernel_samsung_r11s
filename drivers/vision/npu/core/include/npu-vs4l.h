#ifndef _VS4L_NPU_H_
#define _VS4L_NPU_H_

#include <linux/types.h>

/* target value used for S_PARAM of NPU */
enum {
	NPU_S_PARAM_FW_UTC_LOAD = 0x780000,
	NPU_S_PARAM_FW_UTC_EXECUTE,
	NPU_S_PARAM_FW_PARAM_END,
	NPU_S_PARAM_QOS_NPU = 0x880000,
	NPU_S_PARAM_QOS_DSP,
	NPU_S_PARAM_QOS_MIF,
	NPU_S_PARAM_QOS_INT,
	NPU_S_PARAM_QOS_DNC,
	NPU_S_PARAM_QOS_NPU_MAX,
	NPU_S_PARAM_QOS_DSP_MAX,
	NPU_S_PARAM_QOS_MIF_MAX,
	NPU_S_PARAM_QOS_INT_MAX,
	NPU_S_PARAM_QOS_DNC_MAX,
	NPU_S_PARAM_QOS_CL0 = 0x890000,
	NPU_S_PARAM_QOS_CL1,
	NPU_S_PARAM_QOS_CL2,
	NPU_S_PARAM_QOS_CL0_MAX,
	NPU_S_PARAM_QOS_CL1_MAX,
	NPU_S_PARAM_QOS_CL2_MAX,
	NPU_S_PARAM_CPU_AFF,
	NPU_S_PARAM_IS_PRESET = 0x891000,
	NPU_S_PARAM_QOS_NPU_MIN_PRESET,
	NPU_S_PARAM_QOS_DSP_MIN_PRESET,
	NPU_S_PARAM_QOS_MIF_MIN_PRESET,
	NPU_S_PARAM_QOS_INT_MIN_PRESET,
	NPU_S_PARAM_QOS_CL0_MIN_PRESET,
	NPU_S_PARAM_QOS_CL1_MIN_PRESET,
	NPU_S_PARAM_QOS_CL2_MIN_PRESET,
	NPU_S_PARAM_QOS_MO_SCEN_ID_PRESET,
	NPU_S_PARAM_QOS_CPU_AFF_PRESET,
	NPU_S_PARAM_QOS_DNC_MIN_PRESET,
	NPU_S_PARAM_QOS_GPU_MIN,
	NPU_S_PARAM_QOS_NPU_MAX_PRESET,
	NPU_S_PARAM_QOS_DSP_MAX_PRESET,
	NPU_S_PARAM_QOS_MIF_MAX_PRESET,
	NPU_S_PARAM_QOS_INT_MAX_PRESET,
	NPU_S_PARAM_QOS_CL0_MAX_PRESET,
	NPU_S_PARAM_QOS_CL1_MAX_PRESET,
	NPU_S_PARAM_QOS_CL2_MAX_PRESET,
	NPU_S_PARAM_QOS_DNC_MAX_PRESET,
	NPU_S_PARAM_QOS_GPU_MAX,
	NPU_S_PARAM_QOS_CPU_DISABLE_IDLE_PRESET,
	NPU_S_PARAM_QOS_PARAM_END,
	/* User API version 4 */
	NPU_S_PARAM_PERF_MODE = 0x900000,
	NPU_S_PARAM_PRIORITY,
	NPU_S_PARAM_TPF,
	NPU_S_PARAM_LLC_SIZE,
	NPU_S_PARAM_LLC_SIZE_PRESET,
	NPU_S_PARAM_MO_SCEN_PRESET,
	NPU_S_PARAM_CPU_DISABLE_IDLE_PRESET,
	NPU_S_PARAM_DD_LOG_OFF_PRESET,
	NPU_S_PARAM_HWACG_NPU_DISABLE_PRESET,
	NPU_S_PARAM_HWACG_DSP_DISABLE_PRESET,
	NPU_S_PARAM_HWACG_DNC_DISABLE_PRESET,
	NPU_S_PARAM_DD_DIRECT_PATH_PRESET,
	NPU_S_PARAM_FW_KPI_MODE,
	NPU_S_PARAM_DTM_PID_EN,
	NPU_S_PARAM_DTM_TARGET_THERMAL,
	NPU_S_PARAM_DTM_MAX_CLK,
	NPU_S_PARAM_DVFS_DISABLE,
	NPU_S_PARAM_SCH_PARAM_END,
#ifdef CONFIG_DSP_USE_VS4L
	/* DSP PARAM */
	NPU_S_PARAM_DSP_KERNEL = 0xA00000,
	NPU_S_PARAM_DSP_USER_KERNEL,
	NPU_S_PARAM_DSP_PARAM_END,
#endif
};

#endif	/* _VS4L_NPU_H_ */

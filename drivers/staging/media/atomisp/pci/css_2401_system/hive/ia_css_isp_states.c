// SPDX-License-Identifier: GPL-2.0
/*
 * Support for Intel Camera Imaging ISP subsystem.
 * Copyright (c) 2015, Intel Corporation.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 */

/* Generated code: do not edit or commmit. */

#include "ia_css_pipeline.h"
#include "ia_css_isp_states.h"
#include "ia_css_debug.h"
#include "assert_support.h"

/* Code generated by genparam/genstate.c:gen_init_function() */

static void
ia_css_initialize_aa_state(
    const struct ia_css_binary *binary)
{
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_aa_state() enter:\n");

	{
		unsigned int size   = binary->info->mem_offsets.offsets.state->vmem.aa.size;
		unsigned int offset = binary->info->mem_offsets.offsets.state->vmem.aa.offset;

		if (size)
			memset(&binary->mem_params.params[IA_CSS_PARAM_CLASS_STATE][IA_CSS_ISP_VMEM].address[offset],
			       0, size);
	}
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_aa_state() leave:\n");
}

/* Code generated by genparam/genstate.c:gen_init_function() */

static void
ia_css_initialize_cnr_state(
    const struct ia_css_binary *binary)
{
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_cnr_state() enter:\n");

	{
		unsigned int size   = binary->info->mem_offsets.offsets.state->vmem.cnr.size;

		unsigned int offset = binary->info->mem_offsets.offsets.state->vmem.cnr.offset;

		if (size) {
			ia_css_init_cnr_state(
			    &binary->mem_params.params[IA_CSS_PARAM_CLASS_STATE][IA_CSS_ISP_VMEM].address[offset],
			    size);
		}
	}
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_cnr_state() leave:\n");
}

/* Code generated by genparam/genstate.c:gen_init_function() */

static void
ia_css_initialize_cnr2_state(
    const struct ia_css_binary *binary)
{
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_cnr2_state() enter:\n");

	{
		unsigned int size   = binary->info->mem_offsets.offsets.state->vmem.cnr2.size;

		unsigned int offset = binary->info->mem_offsets.offsets.state->vmem.cnr2.offset;

		if (size) {
			ia_css_init_cnr2_state(
			    &binary->mem_params.params[IA_CSS_PARAM_CLASS_STATE][IA_CSS_ISP_VMEM].address[offset],
			    size);
		}
	}
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_cnr2_state() leave:\n");
}

/* Code generated by genparam/genstate.c:gen_init_function() */

static void
ia_css_initialize_dp_state(
    const struct ia_css_binary *binary)
{
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_dp_state() enter:\n");

	{
		unsigned int size   = binary->info->mem_offsets.offsets.state->vmem.dp.size;

		unsigned int offset = binary->info->mem_offsets.offsets.state->vmem.dp.offset;

		if (size) {
			ia_css_init_dp_state(
			    &binary->mem_params.params[IA_CSS_PARAM_CLASS_STATE][IA_CSS_ISP_VMEM].address[offset],
			    size);
		}
	}
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_dp_state() leave:\n");
}

/* Code generated by genparam/genstate.c:gen_init_function() */

static void
ia_css_initialize_de_state(
    const struct ia_css_binary *binary)
{
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_de_state() enter:\n");

	{
		unsigned int size   = binary->info->mem_offsets.offsets.state->vmem.de.size;

		unsigned int offset = binary->info->mem_offsets.offsets.state->vmem.de.offset;

		if (size) {
			ia_css_init_de_state(
			    &binary->mem_params.params[IA_CSS_PARAM_CLASS_STATE][IA_CSS_ISP_VMEM].address[offset],
			    size);
		}
	}
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_de_state() leave:\n");
}

/* Code generated by genparam/genstate.c:gen_init_function() */

static void
ia_css_initialize_tnr_state(
    const struct ia_css_binary *binary)
{
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_tnr_state() enter:\n");

	{
		unsigned int size   = binary->info->mem_offsets.offsets.state->dmem.tnr.size;

		unsigned int offset = binary->info->mem_offsets.offsets.state->dmem.tnr.offset;

		if (size) {
			ia_css_init_tnr_state((struct sh_css_isp_tnr_dmem_state *)
					      &binary->mem_params.params[IA_CSS_PARAM_CLASS_STATE][IA_CSS_ISP_DMEM].address[offset],
					      size);
		}
	}
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_tnr_state() leave:\n");
}

/* Code generated by genparam/genstate.c:gen_init_function() */

static void
ia_css_initialize_ref_state(
    const struct ia_css_binary *binary)
{
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_ref_state() enter:\n");

	{
		unsigned int size   = binary->info->mem_offsets.offsets.state->dmem.ref.size;

		unsigned int offset = binary->info->mem_offsets.offsets.state->dmem.ref.offset;

		if (size) {
			ia_css_init_ref_state((struct sh_css_isp_ref_dmem_state *)
					      &binary->mem_params.params[IA_CSS_PARAM_CLASS_STATE][IA_CSS_ISP_DMEM].address[offset],
					      size);
		}
	}
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_ref_state() leave:\n");
}

/* Code generated by genparam/genstate.c:gen_init_function() */

static void
ia_css_initialize_ynr_state(
    const struct ia_css_binary *binary)
{
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_ynr_state() enter:\n");

	{
		unsigned int size   = binary->info->mem_offsets.offsets.state->vmem.ynr.size;

		unsigned int offset = binary->info->mem_offsets.offsets.state->vmem.ynr.offset;

		if (size) {
			ia_css_init_ynr_state(
			    &binary->mem_params.params[IA_CSS_PARAM_CLASS_STATE][IA_CSS_ISP_VMEM].address[offset],
			    size);
		}
	}
	ia_css_debug_dtrace(IA_CSS_DEBUG_TRACE_PRIVATE,
			    "ia_css_initialize_ynr_state() leave:\n");
}

/* Code generated by genparam/genstate.c:gen_state_init_table() */

void (*ia_css_kernel_init_state[IA_CSS_NUM_STATE_IDS])(
    const struct ia_css_binary *binary) = {
	ia_css_initialize_aa_state,
	ia_css_initialize_cnr_state,
	ia_css_initialize_cnr2_state,
	ia_css_initialize_dp_state,
	ia_css_initialize_de_state,
	ia_css_initialize_tnr_state,
	ia_css_initialize_ref_state,
	ia_css_initialize_ynr_state,
};

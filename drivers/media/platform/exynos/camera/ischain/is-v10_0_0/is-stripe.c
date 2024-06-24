// SPDX-License-Identifier: GPL-2.0
/*
 * Samsung Exynos SoC series Pablo driver
 *
 * Exynos pablo group manager configurations
 *
 * Copyright (c) 2020 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include "is-stripe.h"
#include "is-debug.h"
#include "is-config.h"
#include "is-hw-chain.h"

int is_calc_region_num(struct is_crop *incrop, struct is_crop *outcrop, struct is_subdev *subdev)
{
	int region_num = 0;
	u32 h_pix_num[MAX_STRIPE_REGION_NUM];
	struct is_crop in_crop;
	u32 max_width, crop_region_width;

	INIT_CROP(&in_crop);

	/* For downscaling in 8k recordings, the outcrop widths of MCFP, YUVP and MCSC should be used. */
	crop_region_width = outcrop ? outcrop->w : incrop->w;

	if (crop_region_width > subdev->constraints_width) {
		region_num = DIV_ROUND_UP(crop_region_width - STRIPE_MARGIN_WIDTH * 2,
			rounddown(subdev->constraints_width - STRIPE_MARGIN_WIDTH * 2,
			STRIPE_MARGIN_WIDTH));
		/* incrop->x value needs for align crop width by 512 */
		in_crop.x = incrop->x;
		in_crop.w = crop_region_width;
		max_width = __is_ischain_g_stripe_start_pos(&in_crop, &in_crop, region_num,
								h_pix_num);
		if (subdev->constraints_width < max_width)
			++region_num;
	}

	dbg_stripe(3, "[%s] in_crop[%d %d %d %d] constraints_width:%d region_num:%d\n",
		subdev->name, in_crop.x, in_crop.y, in_crop.w, in_crop.h,
		subdev->constraints_width, region_num);

	return region_num;
}

static void __is_ischain_g_stripe_start_pos(const struct is_crop *in, const struct is_crop *incrop,
	u32 region_num, u32 h_pix_num[])
{
	u32 region_id;
	u32 stripe_w, cur_h_pix_num = 0;
	int dma_crop_x, dma_crop_w;

	dma_crop_x = round_down(incrop->x, 512);
	dma_crop_w = ALIGN(incrop->w + incrop->x - dma_crop_x, 512);

	for (region_id = 0; region_id < region_num; ++region_id) {
		/* Left region */
		if (!region_id) {
			/* Stripe width should be 4 align because of 4 ppc */
			stripe_w = ALIGN((dma_crop_w / region_num) + dma_crop_x, 4);
			/* For SBWC Lossless, width should be 512 align with margin */
			stripe_w = ALIGN(stripe_w, STRIPE_WIDTH_ALIGN) - (STRIPE_WIDTH_ALIGN / 2);
		/* Middle region */
		} else if (region_id < region_num - 1) {
			stripe_w = ALIGN((dma_crop_w + dma_crop_x - cur_h_pix_num) /
						(region_num - region_id), 4);
			stripe_w = ALIGN_UPDOWN_STRIPE_WIDTH(stripe_w, STRIPE_WIDTH_ALIGN);
		/* Right region */
		} else {
			stripe_w = in->w - cur_h_pix_num;
		}

		cur_h_pix_num += stripe_w;
		h_pix_num[region_id] = cur_h_pix_num;
	}
}

int is_ischain_g_stripe_cfg(struct is_frame *frame,
		struct camera2_node *node,
		const struct is_crop *in,
		const struct is_crop *incrop,
		const struct is_crop *otcrop)
{
	u32 start_pos_x;
	u32 crop_x;
	u32 offset_x;
	u32 left_margin, right_margin;
	u32 dma_width, crop_width;
	u32 region_id = frame->stripe_info.region_id;

	/* Input crop configuration */
	/* Left region */
	if (!region_id) {
		__is_ischain_g_stripe_start_pos(in, incrop, frame->stripe_info.region_num,
						frame->stripe_info.h_pix_num);
		left_margin = 0;
		right_margin = STRIPE_MARGIN_WIDTH;
		crop_x = incrop->x;
		dma_width = frame->stripe_info.h_pix_num[region_id] + left_margin + right_margin;
		crop_width = dma_width - crop_x;
		start_pos_x = 0;
		offset_x = 0;
	/* Middle region */
	} else if (region_id < frame->stripe_info.region_num - 1) {
		left_margin = STRIPE_MARGIN_WIDTH;
		right_margin = STRIPE_MARGIN_WIDTH;
		crop_x = 0;
		dma_width = frame->stripe_info.h_pix_num[region_id] -
				frame->stripe_info.h_pix_num[region_id - 1] +
				left_margin + right_margin;
		crop_width = dma_width;
		start_pos_x = frame->stripe_info.h_pix_num[region_id - 1] - left_margin;
		offset_x = start_pos_x - incrop->x;
	/* Right region */
	} else {
		left_margin = STRIPE_MARGIN_WIDTH;
		right_margin = 0;
		crop_x = 0;
		dma_width = frame->stripe_info.h_pix_num[region_id] -
				frame->stripe_info.h_pix_num[region_id - 1] +
				left_margin + right_margin;
		crop_width = incrop->w + incrop->x - frame->stripe_info.h_pix_num[region_id - 1] +
				left_margin + right_margin;
		start_pos_x = frame->stripe_info.h_pix_num[region_id - 1] - left_margin;
		offset_x = start_pos_x - incrop->x;
	}

	frame->stripe_info.start_pos_x = start_pos_x;
	frame->stripe_info.stripe_width = dma_width;
	frame->stripe_info.in.offset_x = offset_x;
	frame->stripe_info.in.crop_x = crop_x;
	frame->stripe_info.in.crop_width = crop_width;
	frame->stripe_info.in.left_margin = left_margin;
	frame->stripe_info.in.right_margin = right_margin;
	frame->stripe_info.out = frame->stripe_info.in;

	dbg_stripe(3, "[F%d] stripe_in_crop[%d][%d, %d, %d, %d, %d]\n",
			frame->fcount, region_id,
			frame->stripe_info.start_pos_x,
			frame->stripe_info.in.crop_x, incrop->y,
			frame->stripe_info.in.crop_width, incrop->h);

	dbg_stripe(3, "[F%d] stripe_ot_crop[%d][%d, %d, %d, %d, %d]\n",
			frame->fcount, region_id,
			frame->stripe_info.start_pos_x,
			frame->stripe_info.out.crop_x, otcrop->y,
			frame->stripe_info.out.crop_width, otcrop->h);

	return 0;
}

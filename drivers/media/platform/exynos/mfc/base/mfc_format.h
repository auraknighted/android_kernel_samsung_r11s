/*
 * drivers/media/platform/exynos/mfc/mfc_format.h
 *
 * Copyright (c) 2021 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 */

#ifndef __MFC_FORMAT_H
#define __MFC_FORMAT_H __FILE__

#define MFC_NUM_FORMATS ARRAY_SIZE(mfc_formats)

static struct mfc_fmt mfc_formats[] = {
	{
		.name = "4:2:0 3 Planes Y/Cb/Cr",
		.fourcc = V4L2_PIX_FMT_YUV420M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME,
		.num_planes = 3,
		.mem_planes = 3,
	},
	{
		.name = "4:2:0 3 Planes Y/Cb/Cr single",
		.fourcc = V4L2_PIX_FMT_YUV420N,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME,
		.num_planes = 3,
		.mem_planes = 1,
	},
	{
		.name = "4:2:0 3 Planes Y/Cr/Cb",
		.fourcc = V4L2_PIX_FMT_YVU420M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME,
		.num_planes = 3,
		.mem_planes = 3,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr",
		.fourcc = V4L2_PIX_FMT_NV12M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr single",
		.fourcc = V4L2_PIX_FMT_NV12N,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME,
		.num_planes = 2,
		.mem_planes = 1,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr 8+2 10bit",
		.fourcc = V4L2_PIX_FMT_NV12M_S10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr 10bit single",
		.fourcc = V4L2_PIX_FMT_NV12N_10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT,
		.num_planes = 2,
		.mem_planes = 1,
	},
	{
		.name = "4:2:0 2 Planes Y/CbCr P010 10bit",
		.fourcc = V4L2_PIX_FMT_NV12M_P010,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes Y/CrCb",
		.fourcc = V4L2_PIX_FMT_NV21M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes Y/CrCb 8+2 10bit",
		.fourcc = V4L2_PIX_FMT_NV21M_S10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes Y/CrCb P010 10bit",
		.fourcc = V4L2_PIX_FMT_NV21M_P010,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes 8bit Compress (SBWC)",
		.fourcc = V4L2_PIX_FMT_NV12M_SBWC_8B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_SBWC,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes 10bit Compress (SBWC)",
		.fourcc = V4L2_PIX_FMT_NV12M_SBWC_10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_SBWC,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes 8bit Compress (SBWC)",
		.fourcc = V4L2_PIX_FMT_NV21M_SBWC_8B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_SBWC,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes 10bit Compress (SBWC)",
		.fourcc = V4L2_PIX_FMT_NV21M_SBWC_10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_SBWC,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes 8bit Compress single (SBWC)",
		.fourcc = V4L2_PIX_FMT_NV12N_SBWC_8B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_SBWC,
		.num_planes = 2,
		.mem_planes = 1,
	},
	{
		.name = "4:2:0 2 Planes 10bit Compress single (SBWC)",
		.fourcc = V4L2_PIX_FMT_NV12N_SBWC_10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_SBWC,
		.num_planes = 2,
		.mem_planes = 1,
	},
	{
		.name = "4:2:0 2 Planes 8bit Compress Lossy (SBWCL)",
		.fourcc = V4L2_PIX_FMT_NV12M_SBWCL_8B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_SBWCL,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes 10bit Compress Lossy (SBWCL)",
		.fourcc = V4L2_PIX_FMT_NV12M_SBWCL_10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_SBWCL,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:0 2 Planes 8bit Compress Lossy single (SBWCL)",
		.fourcc = V4L2_PIX_FMT_NV12N_SBWCL_8B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_SBWCL,
		.num_planes = 2,
		.mem_planes = 1,
	},
	{
		.name = "4:2:0 2 Planes 10bit Compress Lossy single (SBWCL)",
		.fourcc = V4L2_PIX_FMT_NV12N_SBWCL_10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_SBWCL,
		.num_planes = 2,
		.mem_planes = 1,
	},
	{
		.name = "4:2:2 2 Planes Y/CbCr",
		.fourcc = V4L2_PIX_FMT_NV16M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_422,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:2 2 Planes Y/CrCb",
		.fourcc = V4L2_PIX_FMT_NV61M,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_422,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:2 2 Planes Y/CbCr 8+2 10bit",
		.fourcc = V4L2_PIX_FMT_NV16M_S10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT | MFC_FMT_422,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:2 2 Planes Y/CrCb 8+2 10bit",
		.fourcc = V4L2_PIX_FMT_NV61M_S10B,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT | MFC_FMT_422,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:2 2 Planes Y/CbCr P210 10bit",
		.fourcc = V4L2_PIX_FMT_NV16M_P210,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT | MFC_FMT_422,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "4:2:2 2 Planes Y/CrCb P210 10bit",
		.fourcc = V4L2_PIX_FMT_NV61M_P210,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_10BIT | MFC_FMT_422,
		.num_planes = 2,
		.mem_planes = 2,
	},
	{
		.name = "RGB888 1 Plane 24bpp",
		.fourcc = V4L2_PIX_FMT_RGB24,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_RGB,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "RGB565 1 Plane 16bpp",
		.fourcc = V4L2_PIX_FMT_RGB565,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_RGB,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "RGBX8888 1 Plane 32bpp",
		.fourcc = V4L2_PIX_FMT_RGB32X,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_RGB,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "BGRA8888 1 Plane 32bpp",
		.fourcc = V4L2_PIX_FMT_BGR32,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_RGB,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "ARGB8888 1 Plane 32bpp",
		.fourcc = V4L2_PIX_FMT_ARGB32,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_RGB,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "RGB8888 1 Plane 32bpp",
		.fourcc = V4L2_PIX_FMT_RGB32,
		.codec_mode = MFC_FORMATS_NO_CODEC,
		.type = MFC_FMT_FRAME | MFC_FMT_RGB,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "H264 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_H264,
		.codec_mode = MFC_REG_CODEC_H264_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "H264/MVC Encoded Stream",
		.fourcc = V4L2_PIX_FMT_H264_MVC,
		.codec_mode = MFC_REG_CODEC_H264_MVC_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "H263 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_H263,
		.codec_mode = MFC_REG_CODEC_H263_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "MPEG1 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_MPEG1,
		.codec_mode = MFC_REG_CODEC_MPEG2_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "MPEG2 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_MPEG2,
		.codec_mode = MFC_REG_CODEC_MPEG2_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "MPEG4 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_MPEG4,
		.codec_mode = MFC_REG_CODEC_MPEG4_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV,
		.codec_mode = MFC_REG_CODEC_MPEG4_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV1 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV1,
		.codec_mode = MFC_REG_CODEC_FIMV1_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV2 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV2,
		.codec_mode = MFC_REG_CODEC_FIMV2_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV3 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV3,
		.codec_mode = MFC_REG_CODEC_FIMV3_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "FIMV4 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_FIMV4,
		.codec_mode = MFC_REG_CODEC_FIMV4_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "XviD Encoded Stream",
		.fourcc = V4L2_PIX_FMT_XVID,
		.codec_mode = MFC_REG_CODEC_MPEG4_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VC1 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VC1_ANNEX_G,
		.codec_mode = MFC_REG_CODEC_VC1_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VC1 RCV Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VC1_ANNEX_L,
		.codec_mode = MFC_REG_CODEC_VC1_RCV_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VP8 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VP8,
		.codec_mode = MFC_REG_CODEC_VP8_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VP9 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VP9,
		.codec_mode = MFC_REG_CODEC_VP9_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "AV1 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_AV1,
		.codec_mode = MFC_REG_CODEC_AV1_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "HEVC Encoded Stream",
		.fourcc = V4L2_PIX_FMT_HEVC,
		.codec_mode = MFC_REG_CODEC_HEVC_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "BPG Encoded Stream",
		.fourcc = V4L2_PIX_FMT_BPG,
		.codec_mode = MFC_REG_CODEC_BPG_DEC,
		.type = MFC_FMT_STREAM | MFC_FMT_DEC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "H264 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_H264,
		.codec_mode = MFC_REG_CODEC_H264_ENC,
		.type = MFC_FMT_STREAM | MFC_FMT_ENC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "MPEG4 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_MPEG4,
		.codec_mode = MFC_REG_CODEC_MPEG4_ENC,
		.type = MFC_FMT_STREAM | MFC_FMT_ENC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "H263 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_H263,
		.codec_mode = MFC_REG_CODEC_H263_ENC,
		.type = MFC_FMT_STREAM | MFC_FMT_ENC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VP8 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VP8,
		.codec_mode = MFC_REG_CODEC_VP8_ENC,
		.type = MFC_FMT_STREAM | MFC_FMT_ENC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "VP9 Encoded Stream",
		.fourcc = V4L2_PIX_FMT_VP9,
		.codec_mode = MFC_REG_CODEC_VP9_ENC,
		.type = MFC_FMT_STREAM | MFC_FMT_ENC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "HEVC Encoded Stream",
		.fourcc = V4L2_PIX_FMT_HEVC,
		.codec_mode = MFC_REG_CODEC_HEVC_ENC,
		.type = MFC_FMT_STREAM | MFC_FMT_ENC,
		.num_planes = 1,
		.mem_planes = 1,
	},
	{
		.name = "BPG Encoded Stream",
		.fourcc = V4L2_PIX_FMT_BPG,
		.codec_mode = MFC_REG_CODEC_BPG_ENC,
		.type = MFC_FMT_STREAM | MFC_FMT_ENC,
		.num_planes = 1,
		.mem_planes = 1,
	},
};

#endif /* __MFC_FORMAT_H */

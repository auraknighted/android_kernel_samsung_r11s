/*
 * Copyright 2013 Red Hat Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 * Authors: Ben Skeggs <bskeggs@redhat.com>
 */
#include "ctxgf100.h"

/*******************************************************************************
 * PGRAPH context register lists
 ******************************************************************************/

static const struct gf100_gr_init
gk110_grctx_init_icmd_0[] = {
	{ 0x001000,   1, 0x01, 0x00000004 },
	{ 0x000039,   3, 0x01, 0x00000000 },
	{ 0x0000a9,   1, 0x01, 0x0000ffff },
	{ 0x000038,   1, 0x01, 0x0fac6881 },
	{ 0x00003d,   1, 0x01, 0x00000001 },
	{ 0x0000e8,   8, 0x01, 0x00000400 },
	{ 0x000078,   8, 0x01, 0x00000300 },
	{ 0x000050,   1, 0x01, 0x00000011 },
	{ 0x000058,   8, 0x01, 0x00000008 },
	{ 0x000208,   8, 0x01, 0x00000001 },
	{ 0x000081,   1, 0x01, 0x00000001 },
	{ 0x000085,   1, 0x01, 0x00000004 },
	{ 0x000088,   1, 0x01, 0x00000400 },
	{ 0x000090,   1, 0x01, 0x00000300 },
	{ 0x000098,   1, 0x01, 0x00001001 },
	{ 0x0000e3,   1, 0x01, 0x00000001 },
	{ 0x0000da,   1, 0x01, 0x00000001 },
	{ 0x0000f8,   1, 0x01, 0x00000003 },
	{ 0x0000fa,   1, 0x01, 0x00000001 },
	{ 0x00009f,   4, 0x01, 0x0000ffff },
	{ 0x0000b1,   1, 0x01, 0x00000001 },
	{ 0x0000ad,   1, 0x01, 0x0000013e },
	{ 0x0000e1,   1, 0x01, 0x00000010 },
	{ 0x000290,  16, 0x01, 0x00000000 },
	{ 0x0003b0,  16, 0x01, 0x00000000 },
	{ 0x0002a0,  16, 0x01, 0x00000000 },
	{ 0x000420,  16, 0x01, 0x00000000 },
	{ 0x0002b0,  16, 0x01, 0x00000000 },
	{ 0x000430,  16, 0x01, 0x00000000 },
	{ 0x0002c0,  16, 0x01, 0x00000000 },
	{ 0x0004d0,  16, 0x01, 0x00000000 },
	{ 0x000720,  16, 0x01, 0x00000000 },
	{ 0x0008c0,  16, 0x01, 0x00000000 },
	{ 0x000890,  16, 0x01, 0x00000000 },
	{ 0x0008e0,  16, 0x01, 0x00000000 },
	{ 0x0008a0,  16, 0x01, 0x00000000 },
	{ 0x0008f0,  16, 0x01, 0x00000000 },
	{ 0x00094c,   1, 0x01, 0x000000ff },
	{ 0x00094d,   1, 0x01, 0xffffffff },
	{ 0x00094e,   1, 0x01, 0x00000002 },
	{ 0x0002ec,   1, 0x01, 0x00000001 },
	{ 0x0002f2,   2, 0x01, 0x00000001 },
	{ 0x0002f5,   1, 0x01, 0x00000001 },
	{ 0x0002f7,   1, 0x01, 0x00000001 },
	{ 0x000303,   1, 0x01, 0x00000001 },
	{ 0x0002e6,   1, 0x01, 0x00000001 },
	{ 0x000466,   1, 0x01, 0x00000052 },
	{ 0x000301,   1, 0x01, 0x3f800000 },
	{ 0x000304,   1, 0x01, 0x30201000 },
	{ 0x000305,   1, 0x01, 0x70605040 },
	{ 0x000306,   1, 0x01, 0xb8a89888 },
	{ 0x000307,   1, 0x01, 0xf8e8d8c8 },
	{ 0x00030a,   1, 0x01, 0x00ffff00 },
	{ 0x00030b,   1, 0x01, 0x0000001a },
	{ 0x00030c,   1, 0x01, 0x00000001 },
	{ 0x000318,   1, 0x01, 0x00000001 },
	{ 0x000340,   1, 0x01, 0x00000000 },
	{ 0x000375,   1, 0x01, 0x00000001 },
	{ 0x00037d,   1, 0x01, 0x00000006 },
	{ 0x0003a0,   1, 0x01, 0x00000002 },
	{ 0x0003aa,   1, 0x01, 0x00000001 },
	{ 0x0003a9,   1, 0x01, 0x00000001 },
	{ 0x000380,   1, 0x01, 0x00000001 },
	{ 0x000383,   1, 0x01, 0x00000011 },
	{ 0x000360,   1, 0x01, 0x00000040 },
	{ 0x000366,   2, 0x01, 0x00000000 },
	{ 0x000368,   1, 0x01, 0x00000fff },
	{ 0x000370,   2, 0x01, 0x00000000 },
	{ 0x000372,   1, 0x01, 0x000fffff },
	{ 0x00037a,   1, 0x01, 0x00000012 },
	{ 0x000619,   1, 0x01, 0x00000003 },
	{ 0x000811,   1, 0x01, 0x00000003 },
	{ 0x000812,   1, 0x01, 0x00000004 },
	{ 0x000813,   1, 0x01, 0x00000006 },
	{ 0x000814,   1, 0x01, 0x00000008 },
	{ 0x000815,   1, 0x01, 0x0000000b },
	{ 0x000800,   6, 0x01, 0x00000001 },
	{ 0x000632,   1, 0x01, 0x00000001 },
	{ 0x000633,   1, 0x01, 0x00000002 },
	{ 0x000634,   1, 0x01, 0x00000003 },
	{ 0x000635,   1, 0x01, 0x00000004 },
	{ 0x000654,   1, 0x01, 0x3f800000 },
	{ 0x000657,   1, 0x01, 0x3f800000 },
	{ 0x000655,   2, 0x01, 0x3f800000 },
	{ 0x0006cd,   1, 0x01, 0x3f800000 },
	{ 0x0007f5,   1, 0x01, 0x3f800000 },
	{ 0x0007dc,   1, 0x01, 0x39291909 },
	{ 0x0007dd,   1, 0x01, 0x79695949 },
	{ 0x0007de,   1, 0x01, 0xb9a99989 },
	{ 0x0007df,   1, 0x01, 0xf9e9d9c9 },
	{ 0x0007e8,   1, 0x01, 0x00003210 },
	{ 0x0007e9,   1, 0x01, 0x00007654 },
	{ 0x0007ea,   1, 0x01, 0x00000098 },
	{ 0x0007ec,   1, 0x01, 0x39291909 },
	{ 0x0007ed,   1, 0x01, 0x79695949 },
	{ 0x0007ee,   1, 0x01, 0xb9a99989 },
	{ 0x0007ef,   1, 0x01, 0xf9e9d9c9 },
	{ 0x0007f0,   1, 0x01, 0x00003210 },
	{ 0x0007f1,   1, 0x01, 0x00007654 },
	{ 0x0007f2,   1, 0x01, 0x00000098 },
	{ 0x0005a5,   1, 0x01, 0x00000001 },
	{ 0x000980, 128, 0x01, 0x00000000 },
	{ 0x000468,   1, 0x01, 0x00000004 },
	{ 0x00046c,   1, 0x01, 0x00000001 },
	{ 0x000470,  96, 0x01, 0x00000000 },
	{ 0x000510,  16, 0x01, 0x3f800000 },
	{ 0x000520,   1, 0x01, 0x000002b6 },
	{ 0x000529,   1, 0x01, 0x00000001 },
	{ 0x000530,  16, 0x01, 0xffff0000 },
	{ 0x000585,   1, 0x01, 0x0000003f },
	{ 0x000576,   1, 0x01, 0x00000003 },
	{ 0x00057b,   1, 0x01, 0x00000059 },
	{ 0x000586,   1, 0x01, 0x00000040 },
	{ 0x000582,   2, 0x01, 0x00000080 },
	{ 0x0005c2,   1, 0x01, 0x00000001 },
	{ 0x000638,   2, 0x01, 0x00000001 },
	{ 0x00063a,   1, 0x01, 0x00000002 },
	{ 0x00063b,   2, 0x01, 0x00000001 },
	{ 0x00063d,   1, 0x01, 0x00000002 },
	{ 0x00063e,   1, 0x01, 0x00000001 },
	{ 0x0008b8,   8, 0x01, 0x00000001 },
	{ 0x000900,   8, 0x01, 0x00000001 },
	{ 0x000908,   8, 0x01, 0x00000002 },
	{ 0x000910,  16, 0x01, 0x00000001 },
	{ 0x000920,   8, 0x01, 0x00000002 },
	{ 0x000928,   8, 0x01, 0x00000001 },
	{ 0x000662,   1, 0x01, 0x00000001 },
	{ 0x000648,   9, 0x01, 0x00000001 },
	{ 0x000658,   1, 0x01, 0x0000000f },
	{ 0x0007ff,   1, 0x01, 0x0000000a },
	{ 0x00066a,   1, 0x01, 0x40000000 },
	{ 0x00066b,   1, 0x01, 0x10000000 },
	{ 0x00066c,   2, 0x01, 0xffff0000 },
	{ 0x0007af,   2, 0x01, 0x00000008 },
	{ 0x0007f6,   1, 0x01, 0x00000001 },
	{ 0x00080b,   1, 0x01, 0x00000002 },
	{ 0x0006b2,   1, 0x01, 0x00000055 },
	{ 0x0007ad,   1, 0x01, 0x00000003 },
	{ 0x000937,   1, 0x01, 0x00000001 },
	{ 0x000971,   1, 0x01, 0x00000008 },
	{ 0x000972,   1, 0x01, 0x00000040 },
	{ 0x000973,   1, 0x01, 0x0000012c },
	{ 0x00097c,   1, 0x01, 0x00000040 },
	{ 0x000979,   1, 0x01, 0x00000003 },
	{ 0x000975,   1, 0x01, 0x00000020 },
	{ 0x000976,   1, 0x01, 0x00000001 },
	{ 0x000977,   1, 0x01, 0x00000020 },
	{ 0x000978,   1, 0x01, 0x00000001 },
	{ 0x000957,   1, 0x01, 0x00000003 },
	{ 0x00095e,   1, 0x01, 0x20164010 },
	{ 0x00095f,   1, 0x01, 0x00000020 },
	{ 0x000a0d,   1, 0x01, 0x00000006 },
	{ 0x00097d,   1, 0x01, 0x00000020 },
	{ 0x000683,   1, 0x01, 0x00000006 },
	{ 0x000685,   1, 0x01, 0x003fffff },
	{ 0x000687,   1, 0x01, 0x003fffff },
	{ 0x0006a0,   1, 0x01, 0x00000005 },
	{ 0x000840,   1, 0x01, 0x00400008 },
	{ 0x000841,   1, 0x01, 0x08000080 },
	{ 0x000842,   1, 0x01, 0x00400008 },
	{ 0x000843,   1, 0x01, 0x08000080 },
	{ 0x0006aa,   1, 0x01, 0x00000001 },
	{ 0x0006ab,   1, 0x01, 0x00000002 },
	{ 0x0006ac,   1, 0x01, 0x00000080 },
	{ 0x0006ad,   2, 0x01, 0x00000100 },
	{ 0x0006b1,   1, 0x01, 0x00000011 },
	{ 0x0006bb,   1, 0x01, 0x000000cf },
	{ 0x0006ce,   1, 0x01, 0x2a712488 },
	{ 0x000739,   1, 0x01, 0x4085c000 },
	{ 0x00073a,   1, 0x01, 0x00000080 },
	{ 0x000786,   1, 0x01, 0x80000100 },
	{ 0x00073c,   1, 0x01, 0x00010100 },
	{ 0x00073d,   1, 0x01, 0x02800000 },
	{ 0x000787,   1, 0x01, 0x000000cf },
	{ 0x00078c,   1, 0x01, 0x00000008 },
	{ 0x000792,   1, 0x01, 0x00000001 },
	{ 0x000794,   3, 0x01, 0x00000001 },
	{ 0x000797,   1, 0x01, 0x000000cf },
	{ 0x000836,   1, 0x01, 0x00000001 },
	{ 0x00079a,   1, 0x01, 0x00000002 },
	{ 0x000833,   1, 0x01, 0x04444480 },
	{ 0x0007a1,   1, 0x01, 0x00000001 },
	{ 0x0007a3,   3, 0x01, 0x00000001 },
	{ 0x000831,   1, 0x01, 0x00000004 },
	{ 0x000b07,   1, 0x01, 0x00000002 },
	{ 0x000b08,   2, 0x01, 0x00000100 },
	{ 0x000b0a,   1, 0x01, 0x00000001 },
	{ 0x000a04,   1, 0x01, 0x000000ff },
	{ 0x000a0b,   1, 0x01, 0x00000040 },
	{ 0x00097f,   1, 0x01, 0x00000100 },
	{ 0x000a02,   1, 0x01, 0x00000001 },
	{ 0x000809,   1, 0x01, 0x00000007 },
	{ 0x00c221,   1, 0x01, 0x00000040 },
	{ 0x00c1b0,   8, 0x01, 0x0000000f },
	{ 0x00c1b8,   1, 0x01, 0x0fac6881 },
	{ 0x00c1b9,   1, 0x01, 0x00fac688 },
	{ 0x00c401,   1, 0x01, 0x00000001 },
	{ 0x00c402,   1, 0x01, 0x00010001 },
	{ 0x00c403,   2, 0x01, 0x00000001 },
	{ 0x00c40e,   1, 0x01, 0x00000020 },
	{ 0x00c500,   1, 0x01, 0x00000003 },
	{ 0x01e100,   1, 0x01, 0x00000001 },
	{ 0x001000,   1, 0x01, 0x00000002 },
	{ 0x0006aa,   1, 0x01, 0x00000001 },
	{ 0x0006ad,   2, 0x01, 0x00000100 },
	{ 0x0006b1,   1, 0x01, 0x00000011 },
	{ 0x00078c,   1, 0x01, 0x00000008 },
	{ 0x000792,   1, 0x01, 0x00000001 },
	{ 0x000794,   3, 0x01, 0x00000001 },
	{ 0x000797,   1, 0x01, 0x000000cf },
	{ 0x00079a,   1, 0x01, 0x00000002 },
	{ 0x000833,   1, 0x01, 0x04444480 },
	{ 0x0007a1,   1, 0x01, 0x00000001 },
	{ 0x0007a3,   3, 0x01, 0x00000001 },
	{ 0x000831,   1, 0x01, 0x00000004 },
	{ 0x01e100,   1, 0x01, 0x00000001 },
	{ 0x001000,   1, 0x01, 0x00000008 },
	{ 0x000039,   3, 0x01, 0x00000000 },
	{ 0x000380,   1, 0x01, 0x00000001 },
	{ 0x000366,   2, 0x01, 0x00000000 },
	{ 0x000368,   1, 0x01, 0x00000fff },
	{ 0x000370,   2, 0x01, 0x00000000 },
	{ 0x000372,   1, 0x01, 0x000fffff },
	{ 0x000813,   1, 0x01, 0x00000006 },
	{ 0x000814,   1, 0x01, 0x00000008 },
	{ 0x000957,   1, 0x01, 0x00000003 },
	{ 0x000b07,   1, 0x01, 0x00000002 },
	{ 0x000b08,   2, 0x01, 0x00000100 },
	{ 0x000b0a,   1, 0x01, 0x00000001 },
	{ 0x000a04,   1, 0x01, 0x000000ff },
	{ 0x000a0b,   1, 0x01, 0x00000040 },
	{ 0x00097f,   1, 0x01, 0x00000100 },
	{ 0x000a02,   1, 0x01, 0x00000001 },
	{ 0x000809,   1, 0x01, 0x00000007 },
	{ 0x00c221,   1, 0x01, 0x00000040 },
	{ 0x00c401,   1, 0x01, 0x00000001 },
	{ 0x00c402,   1, 0x01, 0x00010001 },
	{ 0x00c403,   2, 0x01, 0x00000001 },
	{ 0x00c40e,   1, 0x01, 0x00000020 },
	{ 0x00c500,   1, 0x01, 0x00000003 },
	{ 0x01e100,   1, 0x01, 0x00000001 },
	{ 0x001000,   1, 0x01, 0x00000001 },
	{ 0x000b07,   1, 0x01, 0x00000002 },
	{ 0x000b08,   2, 0x01, 0x00000100 },
	{ 0x000b0a,   1, 0x01, 0x00000001 },
	{ 0x01e100,   1, 0x01, 0x00000001 },
	{}
};

const struct gf100_gr_pack
gk110_grctx_pack_icmd[] = {
	{ gk110_grctx_init_icmd_0 },
	{}
};

static const struct gf100_gr_init
gk110_grctx_init_a197_0[] = {
	{ 0x000800,   8, 0x40, 0x00000000 },
	{ 0x000804,   8, 0x40, 0x00000000 },
	{ 0x000808,   8, 0x40, 0x00000400 },
	{ 0x00080c,   8, 0x40, 0x00000300 },
	{ 0x000810,   1, 0x04, 0x000000cf },
	{ 0x000850,   7, 0x40, 0x00000000 },
	{ 0x000814,   8, 0x40, 0x00000040 },
	{ 0x000818,   8, 0x40, 0x00000001 },
	{ 0x00081c,   8, 0x40, 0x00000000 },
	{ 0x000820,   8, 0x40, 0x00000000 },
	{ 0x001c00,  16, 0x10, 0x00000000 },
	{ 0x001c04,  16, 0x10, 0x00000000 },
	{ 0x001c08,  16, 0x10, 0x00000000 },
	{ 0x001c0c,  16, 0x10, 0x00000000 },
	{ 0x001d00,  16, 0x10, 0x00000000 },
	{ 0x001d04,  16, 0x10, 0x00000000 },
	{ 0x001d08,  16, 0x10, 0x00000000 },
	{ 0x001d0c,  16, 0x10, 0x00000000 },
	{ 0x001f00,  16, 0x08, 0x00000000 },
	{ 0x001f04,  16, 0x08, 0x00000000 },
	{ 0x001f80,  16, 0x08, 0x00000000 },
	{ 0x001f84,  16, 0x08, 0x00000000 },
	{ 0x002000,   1, 0x04, 0x00000000 },
	{ 0x002040,   1, 0x04, 0x00000011 },
	{ 0x002080,   1, 0x04, 0x00000020 },
	{ 0x0020c0,   1, 0x04, 0x00000030 },
	{ 0x002100,   1, 0x04, 0x00000040 },
	{ 0x002140,   1, 0x04, 0x00000051 },
	{ 0x00200c,   6, 0x40, 0x00000001 },
	{ 0x002010,   1, 0x04, 0x00000000 },
	{ 0x002050,   1, 0x04, 0x00000000 },
	{ 0x002090,   1, 0x04, 0x00000001 },
	{ 0x0020d0,   1, 0x04, 0x00000002 },
	{ 0x002110,   1, 0x04, 0x00000003 },
	{ 0x002150,   1, 0x04, 0x00000004 },
	{ 0x000380,   4, 0x20, 0x00000000 },
	{ 0x000384,   4, 0x20, 0x00000000 },
	{ 0x000388,   4, 0x20, 0x00000000 },
	{ 0x00038c,   4, 0x20, 0x00000000 },
	{ 0x000700,   4, 0x10, 0x00000000 },
	{ 0x000704,   4, 0x10, 0x00000000 },
	{ 0x000708,   4, 0x10, 0x00000000 },
	{ 0x002800, 128, 0x04, 0x00000000 },
	{ 0x000a00,  16, 0x20, 0x00000000 },
	{ 0x000a04,  16, 0x20, 0x00000000 },
	{ 0x000a08,  16, 0x20, 0x00000000 },
	{ 0x000a0c,  16, 0x20, 0x00000000 },
	{ 0x000a10,  16, 0x20, 0x00000000 },
	{ 0x000a14,  16, 0x20, 0x00000000 },
	{ 0x000c00,  16, 0x10, 0x00000000 },
	{ 0x000c04,  16, 0x10, 0x00000000 },
	{ 0x000c08,  16, 0x10, 0x00000000 },
	{ 0x000c0c,  16, 0x10, 0x3f800000 },
	{ 0x000d00,   8, 0x08, 0xffff0000 },
	{ 0x000d04,   8, 0x08, 0xffff0000 },
	{ 0x000e00,  16, 0x10, 0x00000000 },
	{ 0x000e04,  16, 0x10, 0xffff0000 },
	{ 0x000e08,  16, 0x10, 0xffff0000 },
	{ 0x000d40,   4, 0x08, 0x00000000 },
	{ 0x000d44,   4, 0x08, 0x00000000 },
	{ 0x001e00,   8, 0x20, 0x00000001 },
	{ 0x001e04,   8, 0x20, 0x00000001 },
	{ 0x001e08,   8, 0x20, 0x00000002 },
	{ 0x001e0c,   8, 0x20, 0x00000001 },
	{ 0x001e10,   8, 0x20, 0x00000001 },
	{ 0x001e14,   8, 0x20, 0x00000002 },
	{ 0x001e18,   8, 0x20, 0x00000001 },
	{ 0x003400, 128, 0x04, 0x00000000 },
	{ 0x00030c,   1, 0x04, 0x00000001 },
	{ 0x001944,   1, 0x04, 0x00000000 },
	{ 0x001514,   1, 0x04, 0x00000000 },
	{ 0x000d68,   1, 0x04, 0x0000ffff },
	{ 0x00121c,   1, 0x04, 0x0fac6881 },
	{ 0x000fac,   1, 0x04, 0x00000001 },
	{ 0x001538,   1, 0x04, 0x00000001 },
	{ 0x000fe0,   2, 0x04, 0x00000000 },
	{ 0x000fe8,   1, 0x04, 0x00000014 },
	{ 0x000fec,   1, 0x04, 0x00000040 },
	{ 0x000ff0,   1, 0x04, 0x00000000 },
	{ 0x00179c,   1, 0x04, 0x00000000 },
	{ 0x001228,   1, 0x04, 0x00000400 },
	{ 0x00122c,   1, 0x04, 0x00000300 },
	{ 0x001230,   1, 0x04, 0x00010001 },
	{ 0x0007f8,   1, 0x04, 0x00000000 },
	{ 0x0015b4,   1, 0x04, 0x00000001 },
	{ 0x0015cc,   1, 0x04, 0x00000000 },
	{ 0x001534,   1, 0x04, 0x00000000 },
	{ 0x000fb0,   1, 0x04, 0x00000000 },
	{ 0x0015d0,   1, 0x04, 0x00000000 },
	{ 0x00153c,   1, 0x04, 0x00000000 },
	{ 0x0016b4,   1, 0x04, 0x00000003 },
	{ 0x000fbc,   4, 0x04, 0x0000ffff },
	{ 0x000df8,   2, 0x04, 0x00000000 },
	{ 0x001948,   1, 0x04, 0x00000000 },
	{ 0x001970,   1, 0x04, 0x00000001 },
	{ 0x00161c,   1, 0x04, 0x000009f0 },
	{ 0x000dcc,   1, 0x04, 0x00000010 },
	{ 0x00163c,   1, 0x04, 0x00000000 },
	{ 0x0015e4,   1, 0x04, 0x00000000 },
	{ 0x001160,  32, 0x04, 0x25e00040 },
	{ 0x001880,  32, 0x04, 0x00000000 },
	{ 0x000f84,   2, 0x04, 0x00000000 },
	{ 0x0017c8,   2, 0x04, 0x00000000 },
	{ 0x0017d0,   1, 0x04, 0x000000ff },
	{ 0x0017d4,   1, 0x04, 0xffffffff },
	{ 0x0017d8,   1, 0x04, 0x00000002 },
	{ 0x0017dc,   1, 0x04, 0x00000000 },
	{ 0x0015f4,   2, 0x04, 0x00000000 },
	{ 0x001434,   2, 0x04, 0x00000000 },
	{ 0x000d74,   1, 0x04, 0x00000000 },
	{ 0x000dec,   1, 0x04, 0x00000001 },
	{ 0x0013a4,   1, 0x04, 0x00000000 },
	{ 0x001318,   1, 0x04, 0x00000001 },
	{ 0x001644,   1, 0x04, 0x00000000 },
	{ 0x000748,   1, 0x04, 0x00000000 },
	{ 0x000de8,   1, 0x04, 0x00000000 },
	{ 0x001648,   1, 0x04, 0x00000000 },
	{ 0x0012a4,   1, 0x04, 0x00000000 },
	{ 0x001120,   4, 0x04, 0x00000000 },
	{ 0x001118,   1, 0x04, 0x00000000 },
	{ 0x00164c,   1, 0x04, 0x00000000 },
	{ 0x001658,   1, 0x04, 0x00000000 },
	{ 0x001910,   1, 0x04, 0x00000290 },
	{ 0x001518,   1, 0x04, 0x00000000 },
	{ 0x00165c,   1, 0x04, 0x00000001 },
	{ 0x001520,   1, 0x04, 0x00000000 },
	{ 0x001604,   1, 0x04, 0x00000000 },
	{ 0x001570,   1, 0x04, 0x00000000 },
	{ 0x0013b0,   2, 0x04, 0x3f800000 },
	{ 0x00020c,   1, 0x04, 0x00000000 },
	{ 0x001670,   1, 0x04, 0x30201000 },
	{ 0x001674,   1, 0x04, 0x70605040 },
	{ 0x001678,   1, 0x04, 0xb8a89888 },
	{ 0x00167c,   1, 0x04, 0xf8e8d8c8 },
	{ 0x00166c,   1, 0x04, 0x00000000 },
	{ 0x001680,   1, 0x04, 0x00ffff00 },
	{ 0x0012d0,   1, 0x04, 0x00000003 },
	{ 0x0012d4,   1, 0x04, 0x00000002 },
	{ 0x001684,   2, 0x04, 0x00000000 },
	{ 0x000dac,   2, 0x04, 0x00001b02 },
	{ 0x000db4,   1, 0x04, 0x00000000 },
	{ 0x00168c,   1, 0x04, 0x00000000 },
	{ 0x0015bc,   1, 0x04, 0x00000000 },
	{ 0x00156c,   1, 0x04, 0x00000000 },
	{ 0x00187c,   1, 0x04, 0x00000000 },
	{ 0x001110,   1, 0x04, 0x00000001 },
	{ 0x000dc0,   3, 0x04, 0x00000000 },
	{ 0x001234,   1, 0x04, 0x00000000 },
	{ 0x001690,   1, 0x04, 0x00000000 },
	{ 0x0012ac,   1, 0x04, 0x00000001 },
	{ 0x0002c4,   1, 0x04, 0x00000000 },
	{ 0x000790,   5, 0x04, 0x00000000 },
	{ 0x00077c,   1, 0x04, 0x00000000 },
	{ 0x001000,   1, 0x04, 0x00000010 },
	{ 0x0010fc,   1, 0x04, 0x00000000 },
	{ 0x001290,   1, 0x04, 0x00000000 },
	{ 0x000218,   1, 0x04, 0x00000010 },
	{ 0x0012d8,   1, 0x04, 0x00000000 },
	{ 0x0012dc,   1, 0x04, 0x00000010 },
	{ 0x000d94,   1, 0x04, 0x00000001 },
	{ 0x00155c,   2, 0x04, 0x00000000 },
	{ 0x001564,   1, 0x04, 0x00000fff },
	{ 0x001574,   2, 0x04, 0x00000000 },
	{ 0x00157c,   1, 0x04, 0x000fffff },
	{ 0x001354,   1, 0x04, 0x00000000 },
	{ 0x001610,   1, 0x04, 0x00000012 },
	{ 0x001608,   2, 0x04, 0x00000000 },
	{ 0x00260c,   1, 0x04, 0x00000000 },
	{ 0x0007ac,   1, 0x04, 0x00000000 },
	{ 0x00162c,   1, 0x04, 0x00000003 },
	{ 0x000210,   1, 0x04, 0x00000000 },
	{ 0x000320,   1, 0x04, 0x00000000 },
	{ 0x000324,   6, 0x04, 0x3f800000 },
	{ 0x000750,   1, 0x04, 0x00000000 },
	{ 0x000760,   1, 0x04, 0x39291909 },
	{ 0x000764,   1, 0x04, 0x79695949 },
	{ 0x000768,   1, 0x04, 0xb9a99989 },
	{ 0x00076c,   1, 0x04, 0xf9e9d9c9 },
	{ 0x000770,   1, 0x04, 0x30201000 },
	{ 0x000774,   1, 0x04, 0x70605040 },
	{ 0x000778,   1, 0x04, 0x00009080 },
	{ 0x000780,   1, 0x04, 0x39291909 },
	{ 0x000784,   1, 0x04, 0x79695949 },
	{ 0x000788,   1, 0x04, 0xb9a99989 },
	{ 0x00078c,   1, 0x04, 0xf9e9d9c9 },
	{ 0x0007d0,   1, 0x04, 0x30201000 },
	{ 0x0007d4,   1, 0x04, 0x70605040 },
	{ 0x0007d8,   1, 0x04, 0x00009080 },
	{ 0x00037c,   1, 0x04, 0x00000001 },
	{ 0x000740,   2, 0x04, 0x00000000 },
	{ 0x002600,   1, 0x04, 0x00000000 },
	{ 0x001918,   1, 0x04, 0x00000000 },
	{ 0x00191c,   1, 0x04, 0x00000900 },
	{ 0x001920,   1, 0x04, 0x00000405 },
	{ 0x001308,   1, 0x04, 0x00000001 },
	{ 0x001924,   1, 0x04, 0x00000000 },
	{ 0x0013ac,   1, 0x04, 0x00000000 },
	{ 0x00192c,   1, 0x04, 0x00000001 },
	{ 0x00193c,   1, 0x04, 0x00002c1c },
	{ 0x000d7c,   1, 0x04, 0x00000000 },
	{ 0x000f8c,   1, 0x04, 0x00000000 },
	{ 0x0002c0,   1, 0x04, 0x00000001 },
	{ 0x001510,   1, 0x04, 0x00000000 },
	{ 0x001940,   1, 0x04, 0x00000000 },
	{ 0x000ff4,   2, 0x04, 0x00000000 },
	{ 0x00194c,   2, 0x04, 0x00000000 },
	{ 0x001968,   1, 0x04, 0x00000000 },
	{ 0x001590,   1, 0x04, 0x0000003f },
	{ 0x0007e8,   4, 0x04, 0x00000000 },
	{ 0x00196c,   1, 0x04, 0x00000011 },
	{ 0x0002e4,   1, 0x04, 0x0000b001 },
	{ 0x00036c,   2, 0x04, 0x00000000 },
	{ 0x00197c,   1, 0x04, 0x00000000 },
	{ 0x000fcc,   2, 0x04, 0x00000000 },
	{ 0x0002d8,   1, 0x04, 0x00000040 },
	{ 0x001980,   1, 0x04, 0x00000080 },
	{ 0x001504,   1, 0x04, 0x00000080 },
	{ 0x001984,   1, 0x04, 0x00000000 },
	{ 0x000300,   1, 0x04, 0x00000001 },
	{ 0x0013a8,   1, 0x04, 0x00000000 },
	{ 0x0012ec,   1, 0x04, 0x00000000 },
	{ 0x001310,   1, 0x04, 0x00000000 },
	{ 0x001314,   1, 0x04, 0x00000001 },
	{ 0x001380,   1, 0x04, 0x00000000 },
	{ 0x001384,   4, 0x04, 0x00000001 },
	{ 0x001394,   1, 0x04, 0x00000000 },
	{ 0x00139c,   1, 0x04, 0x00000000 },
	{ 0x001398,   1, 0x04, 0x00000000 },
	{ 0x001594,   1, 0x04, 0x00000000 },
	{ 0x001598,   4, 0x04, 0x00000001 },
	{ 0x000f54,   3, 0x04, 0x00000000 },
	{ 0x0019bc,   1, 0x04, 0x00000000 },
	{ 0x000f9c,   2, 0x04, 0x00000000 },
	{ 0x0012cc,   1, 0x04, 0x00000000 },
	{ 0x0012e8,   1, 0x04, 0x00000000 },
	{ 0x00130c,   1, 0x04, 0x00000001 },
	{ 0x001360,   8, 0x04, 0x00000000 },
	{ 0x00133c,   2, 0x04, 0x00000001 },
	{ 0x001344,   1, 0x04, 0x00000002 },
	{ 0x001348,   2, 0x04, 0x00000001 },
	{ 0x001350,   1, 0x04, 0x00000002 },
	{ 0x001358,   1, 0x04, 0x00000001 },
	{ 0x0012e4,   1, 0x04, 0x00000000 },
	{ 0x00131c,   4, 0x04, 0x00000000 },
	{ 0x0019c0,   1, 0x04, 0x00000000 },
	{ 0x001140,   1, 0x04, 0x00000000 },
	{ 0x0019c4,   1, 0x04, 0x00000000 },
	{ 0x0019c8,   1, 0x04, 0x00001500 },
	{ 0x00135c,   1, 0x04, 0x00000000 },
	{ 0x000f90,   1, 0x04, 0x00000000 },
	{ 0x0019e0,   8, 0x04, 0x00000001 },
	{ 0x0019cc,   1, 0x04, 0x00000001 },
	{ 0x0015b8,   1, 0x04, 0x00000000 },
	{ 0x001a00,   1, 0x04, 0x00001111 },
	{ 0x001a04,   7, 0x04, 0x00000000 },
	{ 0x000d6c,   2, 0x04, 0xffff0000 },
	{ 0x0010f8,   1, 0x04, 0x00001010 },
	{ 0x000d80,   5, 0x04, 0x00000000 },
	{ 0x000da0,   1, 0x04, 0x00000000 },
	{ 0x0007a4,   2, 0x04, 0x00000000 },
	{ 0x001508,   1, 0x04, 0x80000000 },
	{ 0x00150c,   1, 0x04, 0x40000000 },
	{ 0x001668,   1, 0x04, 0x00000000 },
	{ 0x000318,   2, 0x04, 0x00000008 },
	{ 0x000d9c,   1, 0x04, 0x00000001 },
	{ 0x000ddc,   1, 0x04, 0x00000002 },
	{ 0x000374,   1, 0x04, 0x00000000 },
	{ 0x000378,   1, 0x04, 0x00000020 },
	{ 0x0007dc,   1, 0x04, 0x00000000 },
	{ 0x00074c,   1, 0x04, 0x00000055 },
	{ 0x001420,   1, 0x04, 0x00000003 },
	{ 0x0017bc,   2, 0x04, 0x00000000 },
	{ 0x0017c4,   1, 0x04, 0x00000001 },
	{ 0x001008,   1, 0x04, 0x00000008 },
	{ 0x00100c,   1, 0x04, 0x00000040 },
	{ 0x001010,   1, 0x04, 0x0000012c },
	{ 0x000d60,   1, 0x04, 0x00000040 },
	{ 0x00075c,   1, 0x04, 0x00000003 },
	{ 0x001018,   1, 0x04, 0x00000020 },
	{ 0x00101c,   1, 0x04, 0x00000001 },
	{ 0x001020,   1, 0x04, 0x00000020 },
	{ 0x001024,   1, 0x04, 0x00000001 },
	{ 0x001444,   3, 0x04, 0x00000000 },
	{ 0x000360,   1, 0x04, 0x20164010 },
	{ 0x000364,   1, 0x04, 0x00000020 },
	{ 0x000368,   1, 0x04, 0x00000000 },
	{ 0x000de4,   1, 0x04, 0x00000000 },
	{ 0x000204,   1, 0x04, 0x00000006 },
	{ 0x000208,   1, 0x04, 0x00000000 },
	{ 0x0002cc,   2, 0x04, 0x003fffff },
	{ 0x001220,   1, 0x04, 0x00000005 },
	{ 0x000fdc,   1, 0x04, 0x00000000 },
	{ 0x000f98,   1, 0x04, 0x00400008 },
	{ 0x001284,   1, 0x04, 0x08000080 },
	{ 0x001450,   1, 0x04, 0x00400008 },
	{ 0x001454,   1, 0x04, 0x08000080 },
	{ 0x000214,   1, 0x04, 0x00000000 },
	{}
};

const struct gf100_gr_pack
gk110_grctx_pack_mthd[] = {
	{ gk110_grctx_init_a197_0, 0xa197 },
	{ gf100_grctx_init_902d_0, 0x902d },
	{}
};

static const struct gf100_gr_init
gk110_grctx_init_fe_0[] = {
	{ 0x404004,   8, 0x04, 0x00000000 },
	{ 0x404024,   1, 0x04, 0x0000e000 },
	{ 0x404028,   8, 0x04, 0x00000000 },
	{ 0x4040a8,   8, 0x04, 0x00000000 },
	{ 0x4040c8,   1, 0x04, 0xf800008f },
	{ 0x4040d0,   6, 0x04, 0x00000000 },
	{ 0x4040e8,   1, 0x04, 0x00001000 },
	{ 0x4040f8,   1, 0x04, 0x00000000 },
	{ 0x404100,  10, 0x04, 0x00000000 },
	{ 0x404130,   2, 0x04, 0x00000000 },
	{ 0x404138,   1, 0x04, 0x20000040 },
	{ 0x404150,   1, 0x04, 0x0000002e },
	{ 0x404154,   1, 0x04, 0x00000400 },
	{ 0x404158,   1, 0x04, 0x00000200 },
	{ 0x404164,   1, 0x04, 0x00000055 },
	{ 0x40417c,   2, 0x04, 0x00000000 },
	{ 0x4041a0,   4, 0x04, 0x00000000 },
	{ 0x404200,   1, 0x04, 0x0000a197 },
	{ 0x404204,   1, 0x04, 0x0000a1c0 },
	{ 0x404208,   1, 0x04, 0x0000a140 },
	{ 0x40420c,   1, 0x04, 0x0000902d },
	{}
};

const struct gf100_gr_init
gk110_grctx_init_pri_0[] = {
	{ 0x404404,  12, 0x04, 0x00000000 },
	{ 0x404438,   1, 0x04, 0x00000000 },
	{ 0x404460,   2, 0x04, 0x00000000 },
	{ 0x404468,   1, 0x04, 0x00ffffff },
	{ 0x40446c,   1, 0x04, 0x00000000 },
	{ 0x404480,   1, 0x04, 0x00000001 },
	{ 0x404498,   1, 0x04, 0x00000001 },
	{}
};

const struct gf100_gr_init
gk110_grctx_init_cwd_0[] = {
	{ 0x405b00,   1, 0x04, 0x00000000 },
	{ 0x405b10,   1, 0x04, 0x00001000 },
	{ 0x405b20,   1, 0x04, 0x04000000 },
	{}
};

static const struct gf100_gr_init
gk110_grctx_init_pd_0[] = {
	{ 0x406020,   1, 0x04, 0x034103c1 },
	{ 0x406028,   4, 0x04, 0x00000001 },
	{ 0x4064a8,   1, 0x04, 0x00000000 },
	{ 0x4064ac,   1, 0x04, 0x00003fff },
	{ 0x4064b0,   3, 0x04, 0x00000000 },
	{ 0x4064c0,   1, 0x04, 0x802000f0 },
	{ 0x4064c4,   1, 0x04, 0x0192ffff },
	{ 0x4064c8,   1, 0x04, 0x018007c0 },
	{ 0x4064cc,   9, 0x04, 0x00000000 },
	{ 0x4064fc,   1, 0x04, 0x0000022a },
	{}
};

static const struct gf100_gr_init
gk110_grctx_init_be_0[] = {
	{ 0x408800,   1, 0x04, 0x12802a3c },
	{ 0x408804,   1, 0x04, 0x00000040 },
	{ 0x408808,   1, 0x04, 0x1003e005 },
	{ 0x408840,   1, 0x04, 0x0000000b },
	{ 0x408900,   1, 0x04, 0x3080b801 },
	{ 0x408904,   1, 0x04, 0x62000001 },
	{ 0x408908,   1, 0x04, 0x00c8102f },
	{ 0x408980,   1, 0x04, 0x0000011d },
	{}
};

const struct gf100_gr_pack
gk110_grctx_pack_hub[] = {
	{ gf100_grctx_init_main_0 },
	{ gk110_grctx_init_fe_0 },
	{ gk110_grctx_init_pri_0 },
	{ gk104_grctx_init_memfmt_0 },
	{ gk104_grctx_init_ds_0 },
	{ gk110_grctx_init_cwd_0 },
	{ gk110_grctx_init_pd_0 },
	{ gf100_grctx_init_rstr2d_0 },
	{ gk104_grctx_init_scc_0 },
	{ gk110_grctx_init_be_0 },
	{}
};

static const struct gf100_gr_init
gk110_grctx_init_setup_0[] = {
	{ 0x418800,   1, 0x04, 0x7006860a },
	{ 0x418808,   1, 0x04, 0x00000000 },
	{ 0x41880c,   1, 0x04, 0x00000030 },
	{ 0x418810,   1, 0x04, 0x00000000 },
	{ 0x418828,   1, 0x04, 0x00000044 },
	{ 0x418830,   1, 0x04, 0x10000001 },
	{ 0x4188d8,   1, 0x04, 0x00000008 },
	{ 0x4188e0,   1, 0x04, 0x01000000 },
	{ 0x4188e8,   5, 0x04, 0x00000000 },
	{ 0x4188fc,   1, 0x04, 0x20100018 },
	{}
};

const struct gf100_gr_init
gk110_grctx_init_gpc_unk_2[] = {
	{ 0x418d24,   1, 0x04, 0x00000000 },
	{}
};

const struct gf100_gr_pack
gk110_grctx_pack_gpc_0[] = {
	{ gf100_grctx_init_gpc_unk_0 },
	{ gf119_grctx_init_prop_0 },
	{ gf119_grctx_init_gpc_unk_1 },
	{ gk110_grctx_init_setup_0 },
	{ gf100_grctx_init_zcull_0 },
	{}
};

const struct gf100_gr_pack
gk110_grctx_pack_gpc_1[] = {
	{ gf119_grctx_init_crstr_0 },
	{ gk104_grctx_init_gpm_0 },
	{ gk110_grctx_init_gpc_unk_2 },
	{ gf100_grctx_init_gcc_0 },
	{}
};

const struct gf100_gr_init
gk110_grctx_init_tex_0[] = {
	{ 0x419a00,   1, 0x04, 0x000000f0 },
	{ 0x419a04,   1, 0x04, 0x00000001 },
	{ 0x419a08,   1, 0x04, 0x00000021 },
	{ 0x419a0c,   1, 0x04, 0x00020000 },
	{ 0x419a10,   1, 0x04, 0x00000000 },
	{ 0x419a14,   1, 0x04, 0x00000200 },
	{ 0x419a1c,   1, 0x04, 0x0000c000 },
	{ 0x419a20,   1, 0x04, 0x00020800 },
	{ 0x419a30,   1, 0x04, 0x00000001 },
	{ 0x419ac4,   1, 0x04, 0x0037f440 },
	{}
};

const struct gf100_gr_init
gk110_grctx_init_mpc_0[] = {
	{ 0x419c00,   1, 0x04, 0x0000001a },
	{ 0x419c04,   1, 0x04, 0x80000006 },
	{ 0x419c08,   1, 0x04, 0x00000002 },
	{ 0x419c20,   1, 0x04, 0x00000000 },
	{ 0x419c24,   1, 0x04, 0x00084210 },
	{ 0x419c28,   1, 0x04, 0x3efbefbe },
	{}
};

const struct gf100_gr_init
gk110_grctx_init_l1c_0[] = {
	{ 0x419ce8,   1, 0x04, 0x00000000 },
	{ 0x419cf4,   1, 0x04, 0x00000203 },
	{}
};

static const struct gf100_gr_init
gk110_grctx_init_sm_0[] = {
	{ 0x419e04,   1, 0x04, 0x00000000 },
	{ 0x419e08,   1, 0x04, 0x0000001d },
	{ 0x419e0c,   1, 0x04, 0x00000000 },
	{ 0x419e10,   1, 0x04, 0x00001c02 },
	{ 0x419e44,   1, 0x04, 0x0013eff2 },
	{ 0x419e48,   1, 0x04, 0x00000000 },
	{ 0x419e4c,   1, 0x04, 0x0000007f },
	{ 0x419e50,   2, 0x04, 0x00000000 },
	{ 0x419e58,   1, 0x04, 0x00000001 },
	{ 0x419e5c,   3, 0x04, 0x00000000 },
	{ 0x419e68,   1, 0x04, 0x00000002 },
	{ 0x419e6c,  12, 0x04, 0x00000000 },
	{ 0x419eac,   1, 0x04, 0x00001f8f },
	{ 0x419eb0,   1, 0x04, 0x0db00d2f },
	{ 0x419eb8,   1, 0x04, 0x00000000 },
	{ 0x419ec8,   1, 0x04, 0x0001304f },
	{ 0x419f30,   4, 0x04, 0x00000000 },
	{ 0x419f40,   1, 0x04, 0x00000018 },
	{ 0x419f44,   3, 0x04, 0x00000000 },
	{ 0x419f58,   1, 0x04, 0x00000000 },
	{ 0x419f70,   1, 0x04, 0x00007300 },
	{ 0x419f78,   1, 0x04, 0x000000eb },
	{ 0x419f7c,   1, 0x04, 0x00000404 },
	{}
};

static const struct gf100_gr_pack
gk110_grctx_pack_tpc[] = {
	{ gf117_grctx_init_pe_0 },
	{ gk110_grctx_init_tex_0 },
	{ gk110_grctx_init_mpc_0 },
	{ gk110_grctx_init_l1c_0 },
	{ gk110_grctx_init_sm_0 },
	{}
};

static const struct gf100_gr_init
gk110_grctx_init_cbm_0[] = {
	{ 0x41bec0,   1, 0x04, 0x10000000 },
	{ 0x41bec4,   1, 0x04, 0x00037f7f },
	{ 0x41bee4,   1, 0x04, 0x00000000 },
	{}
};

const struct gf100_gr_pack
gk110_grctx_pack_ppc[] = {
	{ gk104_grctx_init_pes_0 },
	{ gk110_grctx_init_cbm_0 },
	{ gf117_grctx_init_wwdx_0 },
	{}
};

/*******************************************************************************
 * PGRAPH context implementation
 ******************************************************************************/

void
gk110_grctx_generate_r419eb0(struct gf100_gr *gr)
{
	struct nvkm_device *device = gr->base.engine.subdev.device;
	nvkm_mask(device, 0x419eb0, 0x00001000, 0x00001000);
}

void
gk110_grctx_generate_r419f78(struct gf100_gr *gr)
{
	struct nvkm_device *device = gr->base.engine.subdev.device;

	/* bit 3 set disables loads in fp helper invocations, we need it enabled */
	nvkm_mask(device, 0x419f78, 0x00000008, 0x00000000);
}

const struct gf100_grctx_func
gk110_grctx = {
	.main  = gf100_grctx_generate_main,
	.unkn  = gk104_grctx_generate_unkn,
	.hub   = gk110_grctx_pack_hub,
	.gpc_0 = gk110_grctx_pack_gpc_0,
	.gpc_1 = gk110_grctx_pack_gpc_1,
	.zcull = gf100_grctx_pack_zcull,
	.tpc   = gk110_grctx_pack_tpc,
	.ppc   = gk110_grctx_pack_ppc,
	.icmd  = gk110_grctx_pack_icmd,
	.mthd  = gk110_grctx_pack_mthd,
	.bundle = gk104_grctx_generate_bundle,
	.bundle_size = 0x3000,
	.bundle_min_gpm_fifo_depth = 0x180,
	.bundle_token_limit = 0x7c0,
	.pagepool = gk104_grctx_generate_pagepool,
	.pagepool_size = 0x8000,
	.attrib = gf117_grctx_generate_attrib,
	.attrib_nr_max = 0x324,
	.attrib_nr = 0x218,
	.alpha_nr_max = 0x7ff,
	.alpha_nr = 0x648,
	.patch_ltc = gk104_grctx_generate_patch_ltc,
	.sm_id = gf100_grctx_generate_sm_id,
	.tpc_nr = gf100_grctx_generate_tpc_nr,
	.rop_mapping = gf117_grctx_generate_rop_mapping,
	.alpha_beta_tables = gk104_grctx_generate_alpha_beta_tables,
	.dist_skip_table = gf117_grctx_generate_dist_skip_table,
	.gpc_tpc_nr = gk104_grctx_generate_gpc_tpc_nr,
	.r418800 = gk104_grctx_generate_r418800,
	.r419eb0 = gk110_grctx_generate_r419eb0,
	.r419f78 = gk110_grctx_generate_r419f78,
};

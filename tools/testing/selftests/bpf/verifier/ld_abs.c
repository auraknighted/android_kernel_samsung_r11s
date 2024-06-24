{
	"ld_abs: check calling conv, r1",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_1, 0),
	BPF_LD_ABS(BPF_W, -0x200000),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_1),
	BPF_EXIT_INSN(),
	},
	.errstr = "R1 !read_ok",
	.result = REJECT,
},
{
	"ld_abs: check calling conv, r2",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_2, 0),
	BPF_LD_ABS(BPF_W, -0x200000),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_2),
	BPF_EXIT_INSN(),
	},
	.errstr = "R2 !read_ok",
	.result = REJECT,
},
{
	"ld_abs: check calling conv, r3",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_3, 0),
	BPF_LD_ABS(BPF_W, -0x200000),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_3),
	BPF_EXIT_INSN(),
	},
	.errstr = "R3 !read_ok",
	.result = REJECT,
},
{
	"ld_abs: check calling conv, r4",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_4, 0),
	BPF_LD_ABS(BPF_W, -0x200000),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_4),
	BPF_EXIT_INSN(),
	},
	.errstr = "R4 !read_ok",
	.result = REJECT,
},
{
	"ld_abs: check calling conv, r5",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_5, 0),
	BPF_LD_ABS(BPF_W, -0x200000),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_5),
	BPF_EXIT_INSN(),
	},
	.errstr = "R5 !read_ok",
	.result = REJECT,
},
{
	"ld_abs: check calling conv, r7",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_7, 0),
	BPF_LD_ABS(BPF_W, -0x200000),
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_7),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
},
{
	"ld_abs: tests on r6 and skb data reload helper",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_LD_ABS(BPF_B, 0),
	BPF_LD_ABS(BPF_H, 0),
	BPF_LD_ABS(BPF_W, 0),
	BPF_MOV64_REG(BPF_REG_7, BPF_REG_6),
	BPF_MOV64_IMM(BPF_REG_6, 0),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_7),
	BPF_MOV64_IMM(BPF_REG_2, 1),
	BPF_MOV64_IMM(BPF_REG_3, 2),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_skb_vlan_push),
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_7),
	BPF_LD_ABS(BPF_B, 0),
	BPF_LD_ABS(BPF_H, 0),
	BPF_LD_ABS(BPF_W, 0),
	BPF_MOV64_IMM(BPF_REG_0, 42),
	BPF_EXIT_INSN(),
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 42 /* ultimate return value */,
},
{
	"ld_abs: invalid op 1",
	.insns = {
		BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
		BPF_LD_ABS(BPF_DW, 0),
		BPF_EXIT_INSN(),
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = REJECT,
	.errstr = "unknown opcode",
},
{
	"ld_abs: invalid op 2",
	.insns = {
		BPF_MOV32_IMM(BPF_REG_0, 256),
		BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
		BPF_LD_IND(BPF_DW, BPF_REG_0, 0),
		BPF_EXIT_INSN(),
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = REJECT,
	.errstr = "unknown opcode",
},
{
	"ld_abs: nmap reduced",
	.insns = {
		BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
		BPF_LD_ABS(BPF_H, 12),
		BPF_JMP_IMM(BPF_JNE, BPF_REG_0, 0x806, 28),
		BPF_LD_ABS(BPF_H, 12),
		BPF_JMP_IMM(BPF_JNE, BPF_REG_0, 0x806, 26),
		BPF_MOV32_IMM(BPF_REG_0, 18),
		BPF_STX_MEM(BPF_W, BPF_REG_10, BPF_REG_0, -64),
		BPF_LDX_MEM(BPF_W, BPF_REG_7, BPF_REG_10, -64),
		BPF_LD_IND(BPF_W, BPF_REG_7, 14),
		BPF_STX_MEM(BPF_W, BPF_REG_10, BPF_REG_0, -60),
		BPF_MOV32_IMM(BPF_REG_0, 280971478),
		BPF_STX_MEM(BPF_W, BPF_REG_10, BPF_REG_0, -56),
		BPF_LDX_MEM(BPF_W, BPF_REG_7, BPF_REG_10, -56),
		BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_10, -60),
		BPF_ALU32_REG(BPF_SUB, BPF_REG_0, BPF_REG_7),
		BPF_JMP_IMM(BPF_JNE, BPF_REG_0, 0, 15),
		BPF_LD_ABS(BPF_H, 12),
		BPF_JMP_IMM(BPF_JNE, BPF_REG_0, 0x806, 13),
		BPF_MOV32_IMM(BPF_REG_0, 22),
		BPF_STX_MEM(BPF_W, BPF_REG_10, BPF_REG_0, -56),
		BPF_LDX_MEM(BPF_W, BPF_REG_7, BPF_REG_10, -56),
		BPF_LD_IND(BPF_H, BPF_REG_7, 14),
		BPF_STX_MEM(BPF_W, BPF_REG_10, BPF_REG_0, -52),
		BPF_MOV32_IMM(BPF_REG_0, 17366),
		BPF_STX_MEM(BPF_W, BPF_REG_10, BPF_REG_0, -48),
		BPF_LDX_MEM(BPF_W, BPF_REG_7, BPF_REG_10, -48),
		BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_10, -52),
		BPF_ALU32_REG(BPF_SUB, BPF_REG_0, BPF_REG_7),
		BPF_JMP_IMM(BPF_JNE, BPF_REG_0, 0, 2),
		BPF_MOV32_IMM(BPF_REG_0, 256),
		BPF_EXIT_INSN(),
		BPF_MOV32_IMM(BPF_REG_0, 0),
		BPF_EXIT_INSN(),
	},
	.data = {
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0x08, 0x06, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0x10, 0xbf, 0x48, 0xd6, 0x43, 0xd6,
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 256,
},
{
	"ld_abs: div + abs, test 1",
	.insns = {
		BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_1),
		BPF_LD_ABS(BPF_B, 3),
		BPF_ALU64_IMM(BPF_MOV, BPF_REG_2, 2),
		BPF_ALU32_REG(BPF_DIV, BPF_REG_0, BPF_REG_2),
		BPF_ALU64_REG(BPF_MOV, BPF_REG_8, BPF_REG_0),
		BPF_LD_ABS(BPF_B, 4),
		BPF_ALU64_REG(BPF_ADD, BPF_REG_8, BPF_REG_0),
		BPF_LD_IND(BPF_B, BPF_REG_8, -70),
		BPF_EXIT_INSN(),
	},
	.data = {
		10, 20, 30, 40, 50,
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 10,
},
{
	"ld_abs: div + abs, test 2",
	.insns = {
		BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_1),
		BPF_LD_ABS(BPF_B, 3),
		BPF_ALU64_IMM(BPF_MOV, BPF_REG_2, 2),
		BPF_ALU32_REG(BPF_DIV, BPF_REG_0, BPF_REG_2),
		BPF_ALU64_REG(BPF_MOV, BPF_REG_8, BPF_REG_0),
		BPF_LD_ABS(BPF_B, 128),
		BPF_ALU64_REG(BPF_ADD, BPF_REG_8, BPF_REG_0),
		BPF_LD_IND(BPF_B, BPF_REG_8, -70),
		BPF_EXIT_INSN(),
	},
	.data = {
		10, 20, 30, 40, 50,
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 0,
},
{
	"ld_abs: div + abs, test 3",
	.insns = {
		BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_1),
		BPF_ALU64_IMM(BPF_MOV, BPF_REG_7, 0),
		BPF_LD_ABS(BPF_B, 3),
		BPF_ALU32_REG(BPF_DIV, BPF_REG_0, BPF_REG_7),
		BPF_EXIT_INSN(),
	},
	.data = {
		10, 20, 30, 40, 50,
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 0,
},
{
	"ld_abs: div + abs, test 4",
	.insns = {
		BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_1),
		BPF_ALU64_IMM(BPF_MOV, BPF_REG_7, 0),
		BPF_LD_ABS(BPF_B, 256),
		BPF_ALU32_REG(BPF_DIV, BPF_REG_0, BPF_REG_7),
		BPF_EXIT_INSN(),
	},
	.data = {
		10, 20, 30, 40, 50,
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 0,
},
{
	"ld_abs: vlan + abs, test 1",
	.insns = { },
	.data = {
		0x34,
	},
	.fill_helper = bpf_fill_ld_abs_vlan_push_pop,
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 0xbef,
},
{
	"ld_abs: vlan + abs, test 2",
	.insns = {
		BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
		BPF_LD_ABS(BPF_B, 0),
		BPF_LD_ABS(BPF_H, 0),
		BPF_LD_ABS(BPF_W, 0),
		BPF_MOV64_REG(BPF_REG_7, BPF_REG_6),
		BPF_MOV64_IMM(BPF_REG_6, 0),
		BPF_MOV64_REG(BPF_REG_1, BPF_REG_7),
		BPF_MOV64_IMM(BPF_REG_2, 1),
		BPF_MOV64_IMM(BPF_REG_3, 2),
		BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0,
			     BPF_FUNC_skb_vlan_push),
		BPF_MOV64_REG(BPF_REG_6, BPF_REG_7),
		BPF_LD_ABS(BPF_B, 0),
		BPF_LD_ABS(BPF_H, 0),
		BPF_LD_ABS(BPF_W, 0),
		BPF_MOV64_IMM(BPF_REG_0, 42),
		BPF_EXIT_INSN(),
	},
	.data = {
		0x34,
	},
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 42,
},
{
	"ld_abs: jump around ld_abs",
	.insns = { },
	.data = {
		10, 11,
	},
	.fill_helper = bpf_fill_jump_around_ld_abs,
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
	.result = ACCEPT,
	.retval = 10,
},

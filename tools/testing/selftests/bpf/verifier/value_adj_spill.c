{
	"map element value is preserved across register spilling",
	.insns = {
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_ST_MEM(BPF_DW, BPF_REG_2, 0, 0),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_EMIT_CALL(BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 6),
	BPF_ST_MEM(BPF_DW, BPF_REG_0, 0, 42),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, -184),
	BPF_STX_MEM(BPF_DW, BPF_REG_1, BPF_REG_0, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_3, BPF_REG_1, 0),
	BPF_ST_MEM(BPF_DW, BPF_REG_3, 0, 42),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 3 },
	.errstr_unpriv = "R0 leaks addr",
	.result = ACCEPT,
	.result_unpriv = REJECT,
},
{
	"map element value or null is marked on register spilling",
	.insns = {
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_ST_MEM(BPF_DW, BPF_REG_2, 0, 0),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_EMIT_CALL(BPF_FUNC_map_lookup_elem),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, -152),
	BPF_STX_MEM(BPF_DW, BPF_REG_1, BPF_REG_0, 0),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 2),
	BPF_LDX_MEM(BPF_DW, BPF_REG_3, BPF_REG_1, 0),
	BPF_ST_MEM(BPF_DW, BPF_REG_3, 0, 42),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 3 },
	.errstr_unpriv = "R0 leaks addr",
	.result = ACCEPT,
	.result_unpriv = REJECT,
},

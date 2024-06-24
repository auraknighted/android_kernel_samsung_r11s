{
	"regalloc basic",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_EMIT_CALL(BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 8),
	BPF_MOV64_REG(BPF_REG_7, BPF_REG_0),
	BPF_EMIT_CALL(BPF_FUNC_get_prandom_u32),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	BPF_JMP_IMM(BPF_JSGT, BPF_REG_0, 20, 4),
	BPF_JMP_IMM(BPF_JSLT, BPF_REG_2, 0, 3),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_0),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_2),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_7, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 4 },
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_TRACEPOINT,
},
{
	"regalloc negative",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_EMIT_CALL(BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 8),
	BPF_MOV64_REG(BPF_REG_7, BPF_REG_0),
	BPF_EMIT_CALL(BPF_FUNC_get_prandom_u32),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	BPF_JMP_IMM(BPF_JSGT, BPF_REG_0, 24, 4),
	BPF_JMP_IMM(BPF_JSLT, BPF_REG_2, 0, 3),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_0),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_2),
	BPF_LDX_MEM(BPF_B, BPF_REG_0, BPF_REG_7, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 4 },
	.result = REJECT,
	.errstr = "invalid access to map value, value_size=48 off=48 size=1",
	.prog_type = BPF_PROG_TYPE_TRACEPOINT,
},
{
	"regalloc src_reg mark",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_EMIT_CALL(BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 9),
	BPF_MOV64_REG(BPF_REG_7, BPF_REG_0),
	BPF_EMIT_CALL(BPF_FUNC_get_prandom_u32),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	BPF_JMP_IMM(BPF_JSGT, BPF_REG_0, 20, 5),
	BPF_MOV64_IMM(BPF_REG_3, 0),
	BPF_JMP_REG(BPF_JSGE, BPF_REG_3, BPF_REG_2, 3),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_0),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_2),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_7, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 4 },
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_TRACEPOINT,
},
{
	"regalloc src_reg negative",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_EMIT_CALL(BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 9),
	BPF_MOV64_REG(BPF_REG_7, BPF_REG_0),
	BPF_EMIT_CALL(BPF_FUNC_get_prandom_u32),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	BPF_JMP_IMM(BPF_JSGT, BPF_REG_0, 22, 5),
	BPF_MOV64_IMM(BPF_REG_3, 0),
	BPF_JMP_REG(BPF_JSGE, BPF_REG_3, BPF_REG_2, 3),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_0),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_2),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_7, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 4 },
	.result = REJECT,
	.errstr = "invalid access to map value, value_size=48 off=44 size=8",
	.prog_type = BPF_PROG_TYPE_TRACEPOINT,
},
{
	"regalloc and spill",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_EMIT_CALL(BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 11),
	BPF_MOV64_REG(BPF_REG_7, BPF_REG_0),
	BPF_EMIT_CALL(BPF_FUNC_get_prandom_u32),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	BPF_JMP_IMM(BPF_JSGT, BPF_REG_0, 20, 7),
	/* r0 has upper bound that should propagate into r2 */
	BPF_STX_MEM(BPF_DW, BPF_REG_10, BPF_REG_2, -8), /* spill r2 */
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_MOV64_IMM(BPF_REG_2, 0), /* clear r0 and r2 */
	BPF_LDX_MEM(BPF_DW, BPF_REG_3, BPF_REG_10, -8), /* fill r3 */
	BPF_JMP_REG(BPF_JSGE, BPF_REG_0, BPF_REG_3, 2),
	/* r3 has lower and upper bounds */
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_3),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_7, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 4 },
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_TRACEPOINT,
},
{
	"regalloc and spill negative",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_EMIT_CALL(BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 11),
	BPF_MOV64_REG(BPF_REG_7, BPF_REG_0),
	BPF_EMIT_CALL(BPF_FUNC_get_prandom_u32),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	BPF_JMP_IMM(BPF_JSGT, BPF_REG_0, 48, 7),
	/* r0 has upper bound that should propagate into r2 */
	BPF_STX_MEM(BPF_DW, BPF_REG_10, BPF_REG_2, -8), /* spill r2 */
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_MOV64_IMM(BPF_REG_2, 0), /* clear r0 and r2 */
	BPF_LDX_MEM(BPF_DW, BPF_REG_3, BPF_REG_10, -8), /* fill r3 */
	BPF_JMP_REG(BPF_JSGE, BPF_REG_0, BPF_REG_3, 2),
	/* r3 has lower and upper bounds */
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_3),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_7, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 4 },
	.result = REJECT,
	.errstr = "invalid access to map value, value_size=48 off=48 size=8",
	.prog_type = BPF_PROG_TYPE_TRACEPOINT,
},
{
	"regalloc three regs",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_EMIT_CALL(BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 10),
	BPF_MOV64_REG(BPF_REG_7, BPF_REG_0),
	BPF_EMIT_CALL(BPF_FUNC_get_prandom_u32),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	BPF_MOV64_REG(BPF_REG_4, BPF_REG_2),
	BPF_JMP_IMM(BPF_JSGT, BPF_REG_0, 12, 5),
	BPF_JMP_IMM(BPF_JSLT, BPF_REG_2, 0, 4),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_0),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_2),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_4),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_7, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 4 },
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_TRACEPOINT,
},
{
	"regalloc after call",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_EMIT_CALL(BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 10),
	BPF_MOV64_REG(BPF_REG_7, BPF_REG_0),
	BPF_EMIT_CALL(BPF_FUNC_get_prandom_u32),
	BPF_MOV64_REG(BPF_REG_8, BPF_REG_0),
	BPF_MOV64_REG(BPF_REG_9, BPF_REG_0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 1, 0, 6),
	BPF_JMP_IMM(BPF_JSGT, BPF_REG_8, 20, 4),
	BPF_JMP_IMM(BPF_JSLT, BPF_REG_9, 0, 3),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_8),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_7, BPF_REG_9),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_7, 0),
	BPF_EXIT_INSN(),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 4 },
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_TRACEPOINT,
},
{
	"regalloc in callee",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_EMIT_CALL(BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 6),
	BPF_MOV64_REG(BPF_REG_7, BPF_REG_0),
	BPF_EMIT_CALL(BPF_FUNC_get_prandom_u32),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	BPF_MOV64_REG(BPF_REG_3, BPF_REG_7),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 1, 0, 1),
	BPF_EXIT_INSN(),
	BPF_JMP_IMM(BPF_JSGT, BPF_REG_1, 20, 5),
	BPF_JMP_IMM(BPF_JSLT, BPF_REG_2, 0, 4),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_3, BPF_REG_1),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_3, BPF_REG_2),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_3, 0),
	BPF_EXIT_INSN(),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 4 },
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_TRACEPOINT,
},
{
	"regalloc, spill, JEQ",
	.insns = {
	BPF_MOV64_REG(BPF_REG_6, BPF_REG_1),
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_EMIT_CALL(BPF_FUNC_map_lookup_elem),
	BPF_STX_MEM(BPF_DW, BPF_REG_10, BPF_REG_0, -8), /* spill r0 */
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 0),
	/* The verifier will walk the rest twice with r0 == 0 and r0 == map_value */
	BPF_EMIT_CALL(BPF_FUNC_get_prandom_u32),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_2, 20, 0),
	/* The verifier will walk the rest two more times with r0 == 20 and r0 == unknown */
	BPF_LDX_MEM(BPF_DW, BPF_REG_3, BPF_REG_10, -8), /* fill r3 with map_value */
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_3, 0, 1), /* skip ldx if map_value == NULL */
	/* Buggy verifier will think that r3 == 20 here */
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_3, 0), /* read from map_value */
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_48b = { 4 },
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_TRACEPOINT,
},

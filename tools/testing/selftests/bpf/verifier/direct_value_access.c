{
	"direct map access, write test 1",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 0),
	BPF_ST_MEM(BPF_DW, BPF_REG_1, 0, 4242),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = ACCEPT,
	.retval = 1,
},
{
	"direct map access, write test 2",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 8),
	BPF_ST_MEM(BPF_DW, BPF_REG_1, 0, 4242),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = ACCEPT,
	.retval = 1,
},
{
	"direct map access, write test 3",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 8),
	BPF_ST_MEM(BPF_DW, BPF_REG_1, 8, 4242),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = ACCEPT,
	.retval = 1,
},
{
	"direct map access, write test 4",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 40),
	BPF_ST_MEM(BPF_DW, BPF_REG_1, 0, 4242),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = ACCEPT,
	.retval = 1,
},
{
	"direct map access, write test 5",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 32),
	BPF_ST_MEM(BPF_DW, BPF_REG_1, 8, 4242),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = ACCEPT,
	.retval = 1,
},
{
	"direct map access, write test 6",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 40),
	BPF_ST_MEM(BPF_DW, BPF_REG_1, 4, 4242),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "R1 min value is outside of the allowed memory range",
},
{
	"direct map access, write test 7",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, -1),
	BPF_ST_MEM(BPF_DW, BPF_REG_1, 4, 4242),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "direct value offset of 4294967295 is not allowed",
},
{
	"direct map access, write test 8",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 1),
	BPF_ST_MEM(BPF_DW, BPF_REG_1, -1, 4242),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = ACCEPT,
	.retval = 1,
},
{
	"direct map access, write test 9",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 48),
	BPF_ST_MEM(BPF_DW, BPF_REG_1, 0, 4242),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "invalid access to map value pointer",
},
{
	"direct map access, write test 10",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 47),
	BPF_ST_MEM(BPF_B, BPF_REG_1, 0, 4),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = ACCEPT,
	.retval = 1,
},
{
	"direct map access, write test 11",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 48),
	BPF_ST_MEM(BPF_B, BPF_REG_1, 0, 4),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "invalid access to map value pointer",
},
{
	"direct map access, write test 12",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, (1<<29)),
	BPF_ST_MEM(BPF_B, BPF_REG_1, 0, 4),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "direct value offset of 536870912 is not allowed",
},
{
	"direct map access, write test 13",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, (1<<29)-1),
	BPF_ST_MEM(BPF_B, BPF_REG_1, 0, 4),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "invalid access to map value pointer, value_size=48 off=536870911",
},
{
	"direct map access, write test 14",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 47),
	BPF_LD_MAP_VALUE(BPF_REG_2, 0, 46),
	BPF_ST_MEM(BPF_H, BPF_REG_2, 0, 0xffff),
	BPF_LDX_MEM(BPF_B, BPF_REG_0, BPF_REG_1, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1, 3 },
	.result = ACCEPT,
	.retval = 0xff,
},
{
	"direct map access, write test 15",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 46),
	BPF_LD_MAP_VALUE(BPF_REG_2, 0, 46),
	BPF_ST_MEM(BPF_H, BPF_REG_2, 0, 0xffff),
	BPF_LDX_MEM(BPF_H, BPF_REG_0, BPF_REG_1, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1, 3 },
	.result = ACCEPT,
	.retval = 0xffff,
},
{
	"direct map access, write test 16",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 46),
	BPF_LD_MAP_VALUE(BPF_REG_2, 0, 47),
	BPF_ST_MEM(BPF_H, BPF_REG_2, 0, 0xffff),
	BPF_LDX_MEM(BPF_H, BPF_REG_0, BPF_REG_1, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1, 3 },
	.result = REJECT,
	.errstr = "invalid access to map value, value_size=48 off=47 size=2",
},
{
	"direct map access, write test 17",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 46),
	BPF_LD_MAP_VALUE(BPF_REG_2, 0, 46),
	BPF_ST_MEM(BPF_H, BPF_REG_2, 1, 0xffff),
	BPF_LDX_MEM(BPF_H, BPF_REG_0, BPF_REG_1, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1, 3 },
	.result = REJECT,
	.errstr = "invalid access to map value, value_size=48 off=47 size=2",
},
{
	"direct map access, write test 18",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 0),
	BPF_ST_MEM(BPF_H, BPF_REG_1, 0, 42),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_small = { 1 },
	.result = REJECT,
	.errstr = "R1 min value is outside of the allowed memory range",
},
{
	"direct map access, write test 19",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 0),
	BPF_ST_MEM(BPF_B, BPF_REG_1, 0, 42),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_small = { 1 },
	.result = ACCEPT,
	.retval = 1,
},
{
	"direct map access, write test 20",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_MAP_VALUE(BPF_REG_1, 0, 1),
	BPF_ST_MEM(BPF_B, BPF_REG_1, 0, 42),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_small = { 1 },
	.result = REJECT,
	.errstr = "invalid access to map value pointer",
},
{
	"direct map access, invalid insn test 1",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_IMM64_RAW_FULL(BPF_REG_1, BPF_PSEUDO_MAP_VALUE, 0, 1, 0, 47),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "invalid bpf_ld_imm64 insn",
},
{
	"direct map access, invalid insn test 2",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_IMM64_RAW_FULL(BPF_REG_1, BPF_PSEUDO_MAP_VALUE, 1, 0, 0, 47),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "BPF_LD_IMM64 uses reserved fields",
},
{
	"direct map access, invalid insn test 3",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_IMM64_RAW_FULL(BPF_REG_1, BPF_PSEUDO_MAP_VALUE, ~0, 0, 0, 47),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "BPF_LD_IMM64 uses reserved fields",
},
{
	"direct map access, invalid insn test 4",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_IMM64_RAW_FULL(BPF_REG_1, BPF_PSEUDO_MAP_VALUE, 0, ~0, 0, 47),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "invalid bpf_ld_imm64 insn",
},
{
	"direct map access, invalid insn test 5",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_IMM64_RAW_FULL(BPF_REG_1, BPF_PSEUDO_MAP_VALUE, ~0, ~0, 0, 47),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "invalid bpf_ld_imm64 insn",
},
{
	"direct map access, invalid insn test 6",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_IMM64_RAW_FULL(BPF_REG_1, BPF_PSEUDO_MAP_FD, ~0, 0, 0, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "BPF_LD_IMM64 uses reserved fields",
},
{
	"direct map access, invalid insn test 7",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_IMM64_RAW_FULL(BPF_REG_1, BPF_PSEUDO_MAP_FD, 0, ~0, 0, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "invalid bpf_ld_imm64 insn",
},
{
	"direct map access, invalid insn test 8",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_IMM64_RAW_FULL(BPF_REG_1, BPF_PSEUDO_MAP_FD, ~0, ~0, 0, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "invalid bpf_ld_imm64 insn",
},
{
	"direct map access, invalid insn test 9",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_LD_IMM64_RAW_FULL(BPF_REG_1, BPF_PSEUDO_MAP_FD, 0, 0, 0, 47),
	BPF_EXIT_INSN(),
	},
	.fixup_map_array_48b = { 1 },
	.result = REJECT,
	.errstr = "unrecognized bpf_ld_imm64 insn",
},

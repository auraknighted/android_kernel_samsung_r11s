{
	"unpriv: return pointer",
	.insns = {
	BPF_MOV64_REG(BPF_REG_0, BPF_REG_10),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.result_unpriv = REJECT,
	.errstr_unpriv = "R0 leaks addr",
	.retval = POINTER_VALUE,
},
{
	"unpriv: add const to pointer",
	.insns = {
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
},
{
	"unpriv: add pointer to pointer",
	.insns = {
	BPF_ALU64_REG(BPF_ADD, BPF_REG_1, BPF_REG_10),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = REJECT,
	.errstr = "R1 pointer += pointer",
},
{
	"unpriv: neg pointer",
	.insns = {
	BPF_ALU64_IMM(BPF_NEG, BPF_REG_1, 0),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.result_unpriv = REJECT,
	.errstr_unpriv = "R1 pointer arithmetic",
},
{
	"unpriv: cmp pointer with const",
	.insns = {
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_1, 0, 0),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.result_unpriv = REJECT,
	.errstr_unpriv = "R1 pointer comparison",
},
{
	"unpriv: cmp pointer with pointer",
	.insns = {
	BPF_JMP_REG(BPF_JEQ, BPF_REG_1, BPF_REG_10, 0),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.result_unpriv = REJECT,
	.errstr_unpriv = "R10 pointer comparison",
},
{
	"unpriv: check that printk is disallowed",
	.insns = {
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, -8),
	BPF_MOV64_IMM(BPF_REG_2, 8),
	BPF_MOV64_REG(BPF_REG_3, BPF_REG_1),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_trace_printk),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr_unpriv = "unknown func bpf_trace_printk#6",
	.result_unpriv = REJECT,
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_TRACEPOINT,
},
{
	"unpriv: pass pointer to helper function",
	.insns = {
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_MOV64_REG(BPF_REG_3, BPF_REG_2),
	BPF_MOV64_REG(BPF_REG_4, BPF_REG_2),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_map_update_elem),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_8b = { 3 },
	.errstr_unpriv = "R4 leaks addr",
	.result_unpriv = REJECT,
	.result = ACCEPT,
},
{
	"unpriv: indirectly pass pointer on stack to helper function",
	.insns = {
	BPF_STX_MEM(BPF_DW, BPF_REG_10, BPF_REG_10, -8),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_map_lookup_elem),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_8b = { 3 },
	.errstr_unpriv = "invalid indirect read from stack R2 off -8+0 size 8",
	.result_unpriv = REJECT,
	.result = ACCEPT,
},
{
	"unpriv: mangle pointer on stack 1",
	.insns = {
	BPF_STX_MEM(BPF_DW, BPF_REG_10, BPF_REG_10, -8),
	BPF_ST_MEM(BPF_W, BPF_REG_10, -8, 0),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr_unpriv = "attempt to corrupt spilled",
	.result_unpriv = REJECT,
	.result = ACCEPT,
},
{
	"unpriv: mangle pointer on stack 2",
	.insns = {
	BPF_STX_MEM(BPF_DW, BPF_REG_10, BPF_REG_10, -8),
	BPF_ST_MEM(BPF_B, BPF_REG_10, -1, 0),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr_unpriv = "attempt to corrupt spilled",
	.result_unpriv = REJECT,
	.result = ACCEPT,
},
{
	"unpriv: read pointer from stack in small chunks",
	.insns = {
	BPF_STX_MEM(BPF_DW, BPF_REG_10, BPF_REG_10, -8),
	BPF_LDX_MEM(BPF_W, BPF_REG_0, BPF_REG_10, -8),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "invalid size",
	.result = REJECT,
},
{
	"unpriv: write pointer into ctx",
	.insns = {
	BPF_STX_MEM(BPF_DW, BPF_REG_1, BPF_REG_1, 0),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr_unpriv = "R1 leaks addr",
	.result_unpriv = REJECT,
	.errstr = "invalid bpf_context access",
	.result = REJECT,
},
{
	"unpriv: spill/fill of ctx",
	.insns = {
	BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_6, -8),
	BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_1, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_1, BPF_REG_6, 0),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
},
{
	"unpriv: spill/fill of ctx 2",
	.insns = {
	BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_6, -8),
	BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_1, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_1, BPF_REG_6, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_get_hash_recalc),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = ACCEPT,
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
},
{
	"unpriv: spill/fill of ctx 3",
	.insns = {
	BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_6, -8),
	BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_1, 0),
	BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_10, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_1, BPF_REG_6, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_get_hash_recalc),
	BPF_EXIT_INSN(),
	},
	.result = REJECT,
	.errstr = "R1 type=fp expected=ctx",
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
},
{
	"unpriv: spill/fill of ctx 4",
	.insns = {
	BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_6, -8),
	BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_1, 0),
	BPF_MOV64_IMM(BPF_REG_0, 1),
	BPF_RAW_INSN(BPF_STX | BPF_XADD | BPF_DW, BPF_REG_10, BPF_REG_0, -8, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_1, BPF_REG_6, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_get_hash_recalc),
	BPF_EXIT_INSN(),
	},
	.result = REJECT,
	.errstr = "R1 type=inv expected=ctx",
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
},
{
	"unpriv: spill/fill of different pointers stx",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_3, 42),
	BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_6, -8),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_1, 0, 3),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -16),
	BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_2, 0),
	BPF_JMP_IMM(BPF_JNE, BPF_REG_1, 0, 1),
	BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_1, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_1, BPF_REG_6, 0),
	BPF_STX_MEM(BPF_W, BPF_REG_1, BPF_REG_3,
		    offsetof(struct __sk_buff, mark)),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = REJECT,
	.errstr = "same insn cannot be used with different pointers",
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
},
{
	"unpriv: spill/fill of different pointers stx - ctx and sock",
	.insns = {
	BPF_MOV64_REG(BPF_REG_8, BPF_REG_1),
	/* struct bpf_sock *sock = bpf_sock_lookup(...); */
	BPF_SK_LOOKUP(sk_lookup_tcp),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	/* u64 foo; */
	/* void *target = &foo; */
	BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_6, -8),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_8),
	/* if (skb == NULL) *target = sock; */
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_1, 0, 1),
		BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_2, 0),
	/* else *target = skb; */
	BPF_JMP_IMM(BPF_JNE, BPF_REG_1, 0, 1),
		BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_1, 0),
	/* struct __sk_buff *skb = *target; */
	BPF_LDX_MEM(BPF_DW, BPF_REG_1, BPF_REG_6, 0),
	/* skb->mark = 42; */
	BPF_MOV64_IMM(BPF_REG_3, 42),
	BPF_STX_MEM(BPF_W, BPF_REG_1, BPF_REG_3,
		    offsetof(struct __sk_buff, mark)),
	/* if (sk) bpf_sk_release(sk) */
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_1, 0, 1),
		BPF_EMIT_CALL(BPF_FUNC_sk_release),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = REJECT,
	.errstr = "type=ctx expected=sock",
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
},
{
	"unpriv: spill/fill of different pointers stx - leak sock",
	.insns = {
	BPF_MOV64_REG(BPF_REG_8, BPF_REG_1),
	/* struct bpf_sock *sock = bpf_sock_lookup(...); */
	BPF_SK_LOOKUP(sk_lookup_tcp),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	/* u64 foo; */
	/* void *target = &foo; */
	BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_6, -8),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_8),
	/* if (skb == NULL) *target = sock; */
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_1, 0, 1),
		BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_2, 0),
	/* else *target = skb; */
	BPF_JMP_IMM(BPF_JNE, BPF_REG_1, 0, 1),
		BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_1, 0),
	/* struct __sk_buff *skb = *target; */
	BPF_LDX_MEM(BPF_DW, BPF_REG_1, BPF_REG_6, 0),
	/* skb->mark = 42; */
	BPF_MOV64_IMM(BPF_REG_3, 42),
	BPF_STX_MEM(BPF_W, BPF_REG_1, BPF_REG_3,
		    offsetof(struct __sk_buff, mark)),
	BPF_EXIT_INSN(),
	},
	.result = REJECT,
	//.errstr = "same insn cannot be used with different pointers",
	.errstr = "Unreleased reference",
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
},
{
	"unpriv: spill/fill of different pointers stx - sock and ctx (read)",
	.insns = {
	BPF_MOV64_REG(BPF_REG_8, BPF_REG_1),
	/* struct bpf_sock *sock = bpf_sock_lookup(...); */
	BPF_SK_LOOKUP(sk_lookup_tcp),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	/* u64 foo; */
	/* void *target = &foo; */
	BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_6, -8),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_8),
	/* if (skb) *target = skb */
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_1, 0, 1),
		BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_1, 0),
	/* else *target = sock */
	BPF_JMP_IMM(BPF_JNE, BPF_REG_1, 0, 1),
		BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_2, 0),
	/* struct bpf_sock *sk = *target; */
	BPF_LDX_MEM(BPF_DW, BPF_REG_1, BPF_REG_6, 0),
	/* if (sk) u32 foo = sk->mark; bpf_sk_release(sk); */
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_1, 0, 2),
		BPF_LDX_MEM(BPF_W, BPF_REG_3, BPF_REG_1,
			    offsetof(struct bpf_sock, mark)),
		BPF_EMIT_CALL(BPF_FUNC_sk_release),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = REJECT,
	.errstr = "same insn cannot be used with different pointers",
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
},
{
	"unpriv: spill/fill of different pointers stx - sock and ctx (write)",
	.insns = {
	BPF_MOV64_REG(BPF_REG_8, BPF_REG_1),
	/* struct bpf_sock *sock = bpf_sock_lookup(...); */
	BPF_SK_LOOKUP(sk_lookup_tcp),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_0),
	/* u64 foo; */
	/* void *target = &foo; */
	BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_6, -8),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_8),
	/* if (skb) *target = skb */
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_1, 0, 1),
		BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_1, 0),
	/* else *target = sock */
	BPF_JMP_IMM(BPF_JNE, BPF_REG_1, 0, 1),
		BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_2, 0),
	/* struct bpf_sock *sk = *target; */
	BPF_LDX_MEM(BPF_DW, BPF_REG_1, BPF_REG_6, 0),
	/* if (sk) sk->mark = 42; bpf_sk_release(sk); */
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_1, 0, 3),
		BPF_MOV64_IMM(BPF_REG_3, 42),
		BPF_STX_MEM(BPF_W, BPF_REG_1, BPF_REG_3,
			    offsetof(struct bpf_sock, mark)),
		BPF_EMIT_CALL(BPF_FUNC_sk_release),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = REJECT,
	//.errstr = "same insn cannot be used with different pointers",
	.errstr = "cannot write into sock",
	.prog_type = BPF_PROG_TYPE_SCHED_CLS,
},
{
	"unpriv: spill/fill of different pointers ldx",
	.insns = {
	BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_6, -8),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_1, 0, 3),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2,
		      -(__s32)offsetof(struct bpf_perf_event_data,
				       sample_period) - 8),
	BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_2, 0),
	BPF_JMP_IMM(BPF_JNE, BPF_REG_1, 0, 1),
	BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_1, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_1, BPF_REG_6, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_1, BPF_REG_1,
		    offsetof(struct bpf_perf_event_data, sample_period)),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.result = REJECT,
	.errstr = "same insn cannot be used with different pointers",
	.prog_type = BPF_PROG_TYPE_PERF_EVENT,
},
{
	"unpriv: write pointer into map elem value",
	.insns = {
	BPF_ST_MEM(BPF_DW, BPF_REG_10, -8, 0),
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_map_lookup_elem),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 1),
	BPF_STX_MEM(BPF_DW, BPF_REG_0, BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_8b = { 3 },
	.errstr_unpriv = "R0 leaks addr",
	.result_unpriv = REJECT,
	.result = ACCEPT,
},
{
	"alu32: mov u32 const",
	.insns = {
	BPF_MOV32_IMM(BPF_REG_7, 0),
	BPF_ALU32_IMM(BPF_AND, BPF_REG_7, 1),
	BPF_MOV32_REG(BPF_REG_0, BPF_REG_7),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_0, 0, 1),
	BPF_LDX_MEM(BPF_DW, BPF_REG_0, BPF_REG_7, 0),
	BPF_EXIT_INSN(),
	},
	.errstr_unpriv = "R7 invalid mem access 'inv'",
	.result_unpriv = REJECT,
	.result = ACCEPT,
	.retval = 0,
},
{
	"unpriv: partial copy of pointer",
	.insns = {
	BPF_MOV32_REG(BPF_REG_1, BPF_REG_10),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr_unpriv = "R10 partial copy",
	.result_unpriv = REJECT,
	.result = ACCEPT,
},
{
	"unpriv: pass pointer to tail_call",
	.insns = {
	BPF_MOV64_REG(BPF_REG_3, BPF_REG_1),
	BPF_LD_MAP_FD(BPF_REG_2, 0),
	BPF_RAW_INSN(BPF_JMP | BPF_CALL, 0, 0, 0, BPF_FUNC_tail_call),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_prog1 = { 1 },
	.errstr_unpriv = "R3 leaks addr into helper",
	.result_unpriv = REJECT,
	.result = ACCEPT,
},
{
	"unpriv: cmp map pointer with zero",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_1, 0),
	BPF_LD_MAP_FD(BPF_REG_1, 0),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_1, 0, 0),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.fixup_map_hash_8b = { 1 },
	.errstr_unpriv = "R1 pointer comparison",
	.result_unpriv = REJECT,
	.result = ACCEPT,
},
{
	"unpriv: write into frame pointer",
	.insns = {
	BPF_MOV64_REG(BPF_REG_10, BPF_REG_1),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "frame pointer is read only",
	.result = REJECT,
},
{
	"unpriv: spill/fill frame pointer",
	.insns = {
	BPF_ALU64_REG(BPF_MOV, BPF_REG_6, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_6, -8),
	BPF_STX_MEM(BPF_DW, BPF_REG_6, BPF_REG_10, 0),
	BPF_LDX_MEM(BPF_DW, BPF_REG_10, BPF_REG_6, 0),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr = "frame pointer is read only",
	.result = REJECT,
},
{
	"unpriv: cmp of frame pointer",
	.insns = {
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_10, 0, 0),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr_unpriv = "R10 pointer comparison",
	.result_unpriv = REJECT,
	.result = ACCEPT,
},
{
	"unpriv: adding of fp, reg",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_MOV64_IMM(BPF_REG_1, 0),
	BPF_ALU64_REG(BPF_ADD, BPF_REG_1, BPF_REG_10),
	BPF_STX_MEM(BPF_DW, BPF_REG_1, BPF_REG_0, -8),
	BPF_EXIT_INSN(),
	},
	.errstr_unpriv = "R1 stack pointer arithmetic goes out of range",
	.result_unpriv = REJECT,
	.result = ACCEPT,
},
{
	"unpriv: adding of fp, imm",
	.insns = {
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_MOV64_REG(BPF_REG_1, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_1, 0),
	BPF_STX_MEM(BPF_DW, BPF_REG_1, BPF_REG_0, -8),
	BPF_EXIT_INSN(),
	},
	.errstr_unpriv = "R1 stack pointer arithmetic goes out of range",
	.result_unpriv = REJECT,
	.result = ACCEPT,
},
{
	"unpriv: cmp of stack pointer",
	.insns = {
	BPF_MOV64_REG(BPF_REG_2, BPF_REG_10),
	BPF_ALU64_IMM(BPF_ADD, BPF_REG_2, -8),
	BPF_JMP_IMM(BPF_JEQ, BPF_REG_2, 0, 0),
	BPF_MOV64_IMM(BPF_REG_0, 0),
	BPF_EXIT_INSN(),
	},
	.errstr_unpriv = "R2 pointer comparison",
	.result_unpriv = REJECT,
	.result = ACCEPT,
},

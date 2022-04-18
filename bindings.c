#include "bindings.h"

//
// Wrap the inline functions in libbpf with C functions so Rust bindings can be generated
//

struct bpf_insn _BPF_MOV64_IMM(__u8 dst, __s32 imm) {
    return BPF_MOV64_IMM(dst, imm);
}

struct bpf_insn _BPF_ALU64_IMM(__u8 op, __u8 dst, __s32 imm) {
    return BPF_ALU64_IMM(op, dst, imm);
}

struct bpf_insn _BPF_JMP_IMM(__u8 op, __u8 dst, __s32 imm, __s16 off) {
    return BPF_JMP_IMM(op, dst, imm, off);
}

struct bpf_insn _BPF_JMP32_IMM(__u8 op, __u8 dst, __s32 imm, __s16 off) {
    return BPF_JMP32_IMM(op, dst, imm, off);
}

struct bpf_insn _BPF_EXIT_INSN() {
    return BPF_EXIT_INSN();
}
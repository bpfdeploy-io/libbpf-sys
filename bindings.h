#ifdef __LIBBPF_SYS_NOVENDOR
#include <linux/if_link.h>
#include <linux/perf_event.h>
#include <bpf/bpf.h>
#include <bpf/btf.h>
#include <bpf/libbpf.h>
#else
#include "libbpf/include/uapi/linux/if_link.h"
#include "libbpf/include/uapi/linux/perf_event.h"
#include "libbpf/src/bpf.h"
#include "libbpf/src/btf.h"
#include "libbpf/src/libbpf.h"
#include "libbpf/include/linux/filter.h"
#endif /* __LIBBPF_SYS_NOVENDOR */

extern struct bpf_insn _BPF_MOV64_IMM(__u8 dst, __s32 imm);

extern struct bpf_insn _BPF_ALU64_IMM(__u8 op, __u8 dst, __s32 imm);

extern struct bpf_insn _BPF_JMP_IMM(__u8 op, __u8 dst, __s32 imm, __s16 off);

extern struct bpf_insn _BPF_JMP32_IMM(__u8 op, __u8 dst, __s32 imm, __s16 off);

extern struct bpf_insn _BPF_EXIT_INSN();

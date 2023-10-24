// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_fmul_h(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FMUL_H));
  #include "insns/fmul_h.h"
  trace_opcode(p,  MATCH_FMUL_H, insn);
  return npc;
}

reg_t rv64_fmul_h(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_FMUL_H));
  #include "insns/fmul_h.h"
  trace_opcode(p,  MATCH_FMUL_H, insn);
  return npc;
}

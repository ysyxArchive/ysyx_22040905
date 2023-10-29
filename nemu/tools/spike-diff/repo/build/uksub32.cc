// See LICENSE for license details.

#include "insn_template.h"

reg_t rv32_uksub32(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 32;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_UKSUB32));
  #include "insns/uksub32.h"
  trace_opcode(p,  MATCH_UKSUB32, insn);
  return npc;
}

reg_t rv64_uksub32(processor_t* p, insn_t insn, reg_t pc)
{
  int xlen = 64;
  reg_t npc = sext_xlen(pc + insn_length( MATCH_UKSUB32));
  #include "insns/uksub32.h"
  trace_opcode(p,  MATCH_UKSUB32, insn);
  return npc;
}

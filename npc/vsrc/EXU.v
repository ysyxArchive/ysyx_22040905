module EXU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_pc,
  input  [31:0] io_in_bits_inst,
  input  [4:0]  io_in_bits_rs1,
  input  [4:0]  io_in_bits_rs2,
  input  [4:0]  io_in_bits_rd,
  input  [63:0] io_in_bits_imm,
  input  [79:0] io_in_bits_op,
  input  [5:0]  io_in_bits_typ,
  input         io_in_bits_isJump,
  input  [4:0]  io_in_bits_clearidx,
  output        io_out_valid,
  output [31:0] io_out_bits_pc,
  output [63:0] io_out_bits_pc_dnpc,
  output [4:0]  io_out_bits_gpr_idx_w,
  output        io_out_bits_gpr_en_w,
  output [63:0] io_out_bits_gpr_val_w,
  output        io_out_bits_csr_en_w,
  output [11:0] io_out_bits_csr_idx_w,
  output [63:0] io_out_bits_csr_val_w,
  output [63:0] io_out_bits_csr_no,
  output [63:0] io_out_bits_csr_epc,
  output        io_out_bits_isJump,
  output [4:0]  io_out_bits_clearidx,
  output [4:0]  io_gpr_idx_r1,
  output [4:0]  io_gpr_idx_r2,
  output        io_gpr_en_r1,
  output        io_gpr_en_r2,
  input  [63:0] io_gpr_val_r1,
  input  [63:0] io_gpr_val_r2,
  output [11:0] io_csr_idx_r,
  output        io_csr_en_r,
  input  [63:0] io_csr_val_r,
  input         io_lm_ar_ready,
  output        io_lm_ar_valid,
  output [31:0] io_lm_ar_bits_addr,
  input         io_lm_r_valid,
  input  [63:0] io_lm_r_bits_data,
  input         io_lm_aw_ready,
  output        io_lm_aw_valid,
  output [31:0] io_lm_aw_bits_addr,
  input         io_lm_w_ready,
  output        io_lm_w_valid,
  output [63:0] io_lm_w_bits_data,
  output [7:0]  io_lm_w_bits_strb,
  input         io_lm_b_valid,
  input         io_flush
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [95:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [63:0] _RAND_15;
`endif // RANDOMIZE_REG_INIT
  wire  lsu_clock; // @[EXU.scala 49:25]
  wire  lsu_reset; // @[EXU.scala 49:25]
  wire  lsu_io_ls_in_valid; // @[EXU.scala 49:25]
  wire [31:0] lsu_io_ls_in_bits_raddr; // @[EXU.scala 49:25]
  wire [31:0] lsu_io_ls_in_bits_waddr; // @[EXU.scala 49:25]
  wire [63:0] lsu_io_ls_in_bits_wdata; // @[EXU.scala 49:25]
  wire [7:0] lsu_io_ls_in_bits_wmask; // @[EXU.scala 49:25]
  wire  lsu_io_ls_out_ready; // @[EXU.scala 49:25]
  wire  lsu_io_ls_out_valid; // @[EXU.scala 49:25]
  wire [63:0] lsu_io_ls_out_bits_rdata; // @[EXU.scala 49:25]
  wire  lsu_io_en_r; // @[EXU.scala 49:25]
  wire  lsu_io_en_w; // @[EXU.scala 49:25]
  wire  lsu_io_lm_ar_ready; // @[EXU.scala 49:25]
  wire  lsu_io_lm_ar_valid; // @[EXU.scala 49:25]
  wire [31:0] lsu_io_lm_ar_bits_addr; // @[EXU.scala 49:25]
  wire  lsu_io_lm_r_ready; // @[EXU.scala 49:25]
  wire  lsu_io_lm_r_valid; // @[EXU.scala 49:25]
  wire [63:0] lsu_io_lm_r_bits_data; // @[EXU.scala 49:25]
  wire  lsu_io_lm_aw_ready; // @[EXU.scala 49:25]
  wire  lsu_io_lm_aw_valid; // @[EXU.scala 49:25]
  wire [31:0] lsu_io_lm_aw_bits_addr; // @[EXU.scala 49:25]
  wire  lsu_io_lm_w_ready; // @[EXU.scala 49:25]
  wire  lsu_io_lm_w_valid; // @[EXU.scala 49:25]
  wire [63:0] lsu_io_lm_w_bits_data; // @[EXU.scala 49:25]
  wire [7:0] lsu_io_lm_w_bits_strb; // @[EXU.scala 49:25]
  wire  lsu_io_lm_b_ready; // @[EXU.scala 49:25]
  wire  lsu_io_lm_b_valid; // @[EXU.scala 49:25]
  wire  lsu_io_flush; // @[EXU.scala 49:25]
  wire  alu_clock; // @[EXU.scala 80:23]
  wire  alu_reset; // @[EXU.scala 80:23]
  wire [63:0] alu_io_src1; // @[EXU.scala 80:23]
  wire [63:0] alu_io_src2; // @[EXU.scala 80:23]
  wire [18:0] alu_io_op; // @[EXU.scala 80:23]
  wire [63:0] alu_io_result; // @[EXU.scala 80:23]
  wire  alu_io_validin; // @[EXU.scala 80:23]
  wire  alu_io_validout; // @[EXU.scala 80:23]
  wire  alu_io_busy; // @[EXU.scala 80:23]
  wire  alu_io_flush; // @[EXU.scala 80:23]
  wire  ebreak1_en_break; // @[EXU.scala 133:27]
  wire  ebreak1_clk; // @[EXU.scala 133:27]
  reg  EXE_reg_flush; // @[EXU.scala 27:34]
  wire  flush = EXE_reg_flush | io_flush; // @[EXU.scala 30:32]
  wire  _EXE_reg_pc_T = io_in_ready & io_in_valid; // @[Decoupled.scala 52:35]
  reg [31:0] EXE_reg_pc; // @[Reg.scala 35:20]
  reg [31:0] EXE_reg_inst; // @[Reg.scala 35:20]
  reg [4:0] EXE_reg_rs1; // @[Reg.scala 35:20]
  reg [4:0] EXE_reg_rs2; // @[Reg.scala 35:20]
  reg [4:0] EXE_reg_rd; // @[Reg.scala 35:20]
  reg [63:0] EXE_reg_imm; // @[Reg.scala 35:20]
  reg [79:0] EXE_reg_op; // @[Reg.scala 35:20]
  reg [5:0] EXE_reg_typ; // @[Reg.scala 35:20]
  reg  EXE_reg_isJump; // @[Reg.scala 35:20]
  reg [4:0] EXE_reg_clearidx; // @[Reg.scala 35:20]
  wire  op_r = EXE_reg_op[38] | EXE_reg_op[39] | EXE_reg_op[40] | EXE_reg_op[41] | EXE_reg_op[46] | EXE_reg_op[47] |
    EXE_reg_op[48]; // @[EXU.scala 58:110]
  wire  op_w = EXE_reg_op[42] | EXE_reg_op[43] | EXE_reg_op[44] | EXE_reg_op[45]; // @[EXU.scala 59:62]
  wire  _op_mul_T_2 = EXE_reg_op[50] | EXE_reg_op[51]; // @[EXU.scala 60:31]
  wire  op_mul = EXE_reg_op[50] | EXE_reg_op[51] | EXE_reg_op[52] | EXE_reg_op[53] | EXE_reg_op[54]; // @[EXU.scala 60:76]
  wire  _op_div_T_2 = EXE_reg_op[55] | EXE_reg_op[56]; // @[EXU.scala 61:31]
  wire  op_div = EXE_reg_op[55] | EXE_reg_op[56] | EXE_reg_op[57] | EXE_reg_op[58] | EXE_reg_op[59] | EXE_reg_op[60] |
    EXE_reg_op[61] | EXE_reg_op[62]; // @[EXU.scala 61:121]
  wire  op_wait = op_r | op_w | op_mul | op_div; // @[EXU.scala 62:34]
  wire  op_rw = io_in_bits_op[38] | io_in_bits_op[39] | io_in_bits_op[40] | io_in_bits_op[41] | io_in_bits_op[46] |
    io_in_bits_op[47] | io_in_bits_op[48] | io_in_bits_op[42] | io_in_bits_op[43] | io_in_bits_op[44] | io_in_bits_op[45
    ]; // @[EXU.scala 63:204]
  wire  op_alu = io_in_bits_op[50] | io_in_bits_op[51] | io_in_bits_op[52] | io_in_bits_op[53] | io_in_bits_op[54] |
    io_in_bits_op[55] | io_in_bits_op[56] | io_in_bits_op[57] | io_in_bits_op[58] | io_in_bits_op[59] | io_in_bits_op[60
    ] | io_in_bits_op[61] | io_in_bits_op[62]; // @[EXU.scala 64:232]
  wire  _src1_T_4 = EXE_reg_typ[0] | EXE_reg_typ[2] | EXE_reg_typ[4]; // @[EXU.scala 69:49]
  wire [63:0] _src1_T_10 = EXE_reg_typ[1] | EXE_reg_typ[3] ? EXE_reg_imm : 64'h0; // @[EXU.scala 70:16]
  wire [63:0] src1 = EXE_reg_typ[0] | EXE_reg_typ[2] | EXE_reg_typ[4] | EXE_reg_typ[5] ? io_gpr_val_r1 : _src1_T_10; // @[EXU.scala 69:18]
  wire  _src2_T_2 = EXE_reg_typ[2] | EXE_reg_typ[4]; // @[EXU.scala 73:34]
  wire [63:0] _src2_T_6 = EXE_reg_typ[0] ? EXE_reg_imm : 64'h0; // @[EXU.scala 74:16]
  wire [63:0] src2 = EXE_reg_typ[2] | EXE_reg_typ[4] | EXE_reg_typ[5] ? io_gpr_val_r2 : _src2_T_6; // @[EXU.scala 73:18]
  wire [63:0] dest = _src2_T_2 ? EXE_reg_imm : {{59'd0}, EXE_reg_rd}; // @[EXU.scala 77:18]
  reg  lsu_finish; // @[EXU.scala 82:31]
  reg  alu_finish; // @[EXU.scala 83:31]
  reg  alu_valid; // @[EXU.scala 84:31]
  reg [1:0] state; // @[EXU.scala 86:28]
  wire  _lsu_finish_T_4 = lsu_io_ls_out_ready & lsu_io_ls_out_valid; // @[Decoupled.scala 52:35]
  wire  _lsu_finish_T_10 = _lsu_finish_T_4 | ~op_r & ~op_w | lsu_finish; // @[EXU.scala 91:26]
  wire  _lsu_finish_T_11 = _EXE_reg_pc_T & op_rw ? 1'h0 : _lsu_finish_T_10; // @[EXU.scala 90:26]
  wire  _alu_finish_T_3 = _EXE_reg_pc_T & op_alu; // @[EXU.scala 93:38]
  wire  _alu_finish_T_9 = alu_io_validout | ~op_mul & ~op_div | alu_finish; // @[EXU.scala 94:26]
  wire  _alu_finish_T_10 = _EXE_reg_pc_T & op_alu ? 1'h0 : _alu_finish_T_9; // @[EXU.scala 93:26]
  wire  _alu_valid_T_5 = ~alu_io_busy ? 1'h0 : alu_valid; // @[EXU.scala 97:26]
  wire  _alu_valid_T_6 = _alu_finish_T_3 | _alu_valid_T_5; // @[EXU.scala 96:26]
  wire [1:0] _state_T_2 = _EXE_reg_pc_T ? 2'h2 : 2'h0; // @[EXU.scala 102:55]
  wire  _state_T_13 = alu_io_validout; // @[EXU.scala 103:137]
  reg [63:0] alu_res; // @[Reg.scala 35:20]
  wire [63:0] alu_result = io_out_valid ? alu_io_result : alu_res; // @[EXU.scala 109:24]
  wire  _io_in_ready_T_1 = lsu_finish | _lsu_finish_T_4; // @[EXU.scala 111:49]
  wire  _io_in_ready_T_3 = alu_finish | alu_io_validout; // @[EXU.scala 111:83]
  wire  _io_out_valid_T = state == 2'h2; // @[EXU.scala 112:30]
  wire [63:0] _lsu_io_ls_in_bits_raddr_T_13 = op_r ? alu_io_result : 64'h0; // @[EXU.scala 120:37]
  wire [63:0] _lsu_io_ls_in_bits_waddr_T_7 = op_w ? alu_io_result : 64'h0; // @[EXU.scala 121:37]
  wire [7:0] _lsu_io_ls_in_bits_wmask_T_13 = EXE_reg_op[45] ? 8'hff : 8'h0; // @[EXU.scala 126:35]
  wire [7:0] _lsu_io_ls_in_bits_wmask_T_14 = EXE_reg_op[44] ? 8'hf : _lsu_io_ls_in_bits_wmask_T_13; // @[EXU.scala 125:35]
  wire [7:0] _lsu_io_ls_in_bits_wmask_T_15 = EXE_reg_op[43] ? 8'h3 : _lsu_io_ls_in_bits_wmask_T_14; // @[EXU.scala 124:35]
  wire  _io_csr_en_r_T_2 = EXE_reg_op[63] | EXE_reg_op[64]; // @[EXU.scala 145:43]
  wire [9:0] _io_csr_idx_r_T_5 = EXE_reg_op[66] ? 10'h341 : 10'h0; // @[EXU.scala 148:28]
  wire [9:0] _io_csr_idx_r_T_6 = EXE_reg_op[65] ? 10'h305 : _io_csr_idx_r_T_5; // @[EXU.scala 147:28]
  wire [63:0] _io_csr_idx_r_T_7 = _io_csr_en_r_T_2 ? src2 : {{54'd0}, _io_csr_idx_r_T_6}; // @[EXU.scala 146:28]
  wire [63:0] _alu_io_src1_T_15 = {32'h0,src1[31:0]}; // @[Cat.scala 33:92]
  wire [31:0] _alu_io_src1_T_21 = src1[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _alu_io_src1_T_23 = {_alu_io_src1_T_21,src1[31:0]}; // @[Cat.scala 33:92]
  wire  _alu_io_src1_T_26 = EXE_reg_op[36] | EXE_reg_op[37]; // @[EXU.scala 159:43]
  wire [63:0] _alu_io_src1_T_27 = EXE_reg_op[36] | EXE_reg_op[37] ? {{32'd0}, EXE_reg_pc} : src1; // @[EXU.scala 159:28]
  wire [63:0] _alu_io_src1_T_28 = EXE_reg_op[17] | EXE_reg_op[19] ? _alu_io_src1_T_23 : _alu_io_src1_T_27; // @[EXU.scala 158:28]
  wire [63:0] _alu_io_src2_T_7 = {59'h0,src2[4:0]}; // @[Cat.scala 33:92]
  wire [63:0] _alu_io_src2_T_28 = {32'h0,src2[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _alu_io_src2_T_30 = EXE_reg_op[64] ? io_csr_val_r : src2; // @[EXU.scala 166:28]
  wire [63:0] _alu_io_src2_T_31 = EXE_reg_op[56] | EXE_reg_op[58] | EXE_reg_op[60] | EXE_reg_op[62] ? _alu_io_src2_T_28
     : _alu_io_src2_T_30; // @[EXU.scala 165:28]
  wire [63:0] _alu_io_src2_T_32 = op_w ? dest : _alu_io_src2_T_31; // @[EXU.scala 164:28]
  wire [63:0] _alu_io_src2_T_33 = _alu_io_src1_T_26 ? 64'h4 : _alu_io_src2_T_32; // @[EXU.scala 163:28]
  wire [63:0] _alu_io_src2_T_34 = EXE_reg_op[25] ? {{32'd0}, EXE_reg_pc} : _alu_io_src2_T_33; // @[EXU.scala 162:28]
  wire [18:0] _alu_io_op_T_108 = EXE_reg_op[61] | EXE_reg_op[62] ? 19'h40000 : 19'h0; // @[EXU.scala 185:28]
  wire [18:0] _alu_io_op_T_109 = EXE_reg_op[59] | EXE_reg_op[60] ? 19'h20000 : _alu_io_op_T_108; // @[EXU.scala 184:28]
  wire [18:0] _alu_io_op_T_110 = EXE_reg_op[57] | EXE_reg_op[58] ? 19'h10000 : _alu_io_op_T_109; // @[EXU.scala 183:28]
  wire [18:0] _alu_io_op_T_111 = _op_div_T_2 ? 19'h8000 : _alu_io_op_T_110; // @[EXU.scala 182:28]
  wire [18:0] _alu_io_op_T_112 = EXE_reg_op[54] ? 19'h4000 : _alu_io_op_T_111; // @[EXU.scala 181:28]
  wire [18:0] _alu_io_op_T_113 = EXE_reg_op[52] ? 19'h2000 : _alu_io_op_T_112; // @[EXU.scala 180:28]
  wire [18:0] _alu_io_op_T_114 = _op_mul_T_2 | EXE_reg_op[53] ? 19'h1000 : _alu_io_op_T_113; // @[EXU.scala 179:28]
  wire [18:0] _alu_io_op_T_115 = EXE_reg_op[30] | EXE_reg_op[31] ? 19'h800 : _alu_io_op_T_114; // @[EXU.scala 178:28]
  wire [18:0] _alu_io_op_T_116 = EXE_reg_op[27] | EXE_reg_op[29] | EXE_reg_op[33] | EXE_reg_op[35] ? 19'h200 :
    _alu_io_op_T_115; // @[EXU.scala 177:28]
  wire [18:0] _alu_io_op_T_117 = EXE_reg_op[26] | EXE_reg_op[28] | EXE_reg_op[32] | EXE_reg_op[34] ? 19'h100 :
    _alu_io_op_T_116; // @[EXU.scala 176:28]
  wire [18:0] _alu_io_op_T_118 = EXE_reg_op[16] | EXE_reg_op[17] | EXE_reg_op[18] | EXE_reg_op[19] ? 19'h80 :
    _alu_io_op_T_117; // @[EXU.scala 175:28]
  wire [18:0] _alu_io_op_T_119 = EXE_reg_op[20] | EXE_reg_op[21] | EXE_reg_op[22] | EXE_reg_op[23] ? 19'h40 :
    _alu_io_op_T_118; // @[EXU.scala 174:28]
  wire [18:0] _alu_io_op_T_120 = EXE_reg_op[12] | EXE_reg_op[13] | EXE_reg_op[14] | EXE_reg_op[15] ? 19'h20 :
    _alu_io_op_T_119; // @[EXU.scala 173:28]
  wire [18:0] _alu_io_op_T_121 = EXE_reg_op[10] | EXE_reg_op[11] ? 19'h10 : _alu_io_op_T_120; // @[EXU.scala 172:28]
  wire [18:0] _alu_io_op_T_122 = EXE_reg_op[8] | EXE_reg_op[9] | EXE_reg_op[64] ? 19'h8 : _alu_io_op_T_121; // @[EXU.scala 171:28]
  wire [18:0] _alu_io_op_T_123 = EXE_reg_op[6] | EXE_reg_op[7] ? 19'h4 : _alu_io_op_T_122; // @[EXU.scala 170:28]
  wire [18:0] _alu_io_op_T_124 = EXE_reg_op[4] | EXE_reg_op[5] ? 19'h2 : _alu_io_op_T_123; // @[EXU.scala 169:28]
  wire [63:0] next_pc_src1 = EXE_reg_op[37] ? src1 : {{32'd0}, EXE_reg_pc}; // @[EXU.scala 193:26]
  wire  _next_pc_src2_T_5 = ~alu_io_result[0]; // @[EXU.scala 195:43]
  wire [63:0] _next_pc_src2_T_23 = EXE_reg_op[37] ? src2 : 64'h4; // @[EXU.scala 201:26]
  wire [63:0] _next_pc_src2_T_24 = EXE_reg_op[36] ? src1 : _next_pc_src2_T_23; // @[EXU.scala 200:26]
  wire [63:0] _next_pc_src2_T_25 = EXE_reg_op[35] & alu_io_result[0] ? dest : _next_pc_src2_T_24; // @[EXU.scala 199:26]
  wire [63:0] _next_pc_src2_T_26 = EXE_reg_op[34] & alu_io_result[0] ? dest : _next_pc_src2_T_25; // @[EXU.scala 198:26]
  wire [63:0] _next_pc_src2_T_27 = EXE_reg_op[33] & _next_pc_src2_T_5 ? dest : _next_pc_src2_T_26; // @[EXU.scala 197:26]
  wire [63:0] _next_pc_src2_T_28 = EXE_reg_op[32] & _next_pc_src2_T_5 ? dest : _next_pc_src2_T_27; // @[EXU.scala 196:26]
  wire [63:0] _next_pc_src2_T_29 = EXE_reg_op[31] & ~alu_io_result[0] ? dest : _next_pc_src2_T_28; // @[EXU.scala 195:26]
  wire [63:0] next_pc_src2 = EXE_reg_op[30] & alu_io_result[0] ? dest : _next_pc_src2_T_29; // @[EXU.scala 194:26]
  wire [63:0] next_pc_sum = next_pc_src1 + next_pc_src2; // @[EXU.scala 203:34]
  wire [63:0] _io_out_bits_csr_idx_w_T_3 = _io_csr_en_r_T_2 ? src2 : 64'h0; // @[EXU.scala 210:35]
  wire [1:0] _io_out_bits_csr_no_T_3 = EXE_reg_op[66] ? 2'h2 : 2'h0; // @[EXU.scala 213:32]
  wire [1:0] _io_out_bits_csr_no_T_4 = EXE_reg_op[65] ? 2'h1 : _io_out_bits_csr_no_T_3; // @[EXU.scala 212:32]
  wire [1:0] _io_out_bits_csr_no_T_5 = flush ? 2'h3 : _io_out_bits_csr_no_T_4; // @[EXU.scala 211:32]
  wire [31:0] _io_out_bits_gpr_val_w_T_17 = alu_io_result[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_gpr_val_w_T_19 = {_io_out_bits_gpr_val_w_T_17,alu_io_result[31:0]}; // @[Cat.scala 33:92]
  wire [31:0] _io_out_bits_gpr_val_w_T_29 = alu_result[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_gpr_val_w_T_31 = {_io_out_bits_gpr_val_w_T_29,alu_result[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_gpr_val_w_T_39 = {32'h0,alu_result[63:32]}; // @[Cat.scala 33:92]
  wire [55:0] _io_out_bits_gpr_val_w_T_46 = lsu_io_ls_out_bits_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_gpr_val_w_T_48 = {_io_out_bits_gpr_val_w_T_46,lsu_io_ls_out_bits_rdata[7:0]}; // @[Cat.scala 33:92]
  wire [47:0] _io_out_bits_gpr_val_w_T_52 = lsu_io_ls_out_bits_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_gpr_val_w_T_54 = {_io_out_bits_gpr_val_w_T_52,lsu_io_ls_out_bits_rdata[15:0]}; // @[Cat.scala 33:92]
  wire [31:0] _io_out_bits_gpr_val_w_T_58 = lsu_io_ls_out_bits_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_gpr_val_w_T_60 = {_io_out_bits_gpr_val_w_T_58,lsu_io_ls_out_bits_rdata[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_gpr_val_w_T_65 = {56'h0,lsu_io_ls_out_bits_rdata[7:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_gpr_val_w_T_69 = {48'h0,lsu_io_ls_out_bits_rdata[15:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_gpr_val_w_T_73 = {32'h0,lsu_io_ls_out_bits_rdata[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_gpr_val_w_T_85 = EXE_reg_op[50] | EXE_reg_op[55] | EXE_reg_op[57] | EXE_reg_op[58] |
    EXE_reg_op[59] | EXE_reg_op[61] ? alu_result : alu_io_result; // @[EXU.scala 228:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_86 = EXE_reg_op[48] ? _io_out_bits_gpr_val_w_T_73 : _io_out_bits_gpr_val_w_T_85; // @[EXU.scala 227:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_87 = EXE_reg_op[47] ? _io_out_bits_gpr_val_w_T_69 : _io_out_bits_gpr_val_w_T_86; // @[EXU.scala 226:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_88 = EXE_reg_op[46] ? _io_out_bits_gpr_val_w_T_65 : _io_out_bits_gpr_val_w_T_87; // @[EXU.scala 225:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_89 = EXE_reg_op[41] ? lsu_io_ls_out_bits_rdata : _io_out_bits_gpr_val_w_T_88; // @[EXU.scala 224:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_90 = EXE_reg_op[40] ? _io_out_bits_gpr_val_w_T_60 : _io_out_bits_gpr_val_w_T_89; // @[EXU.scala 223:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_91 = EXE_reg_op[39] ? _io_out_bits_gpr_val_w_T_54 : _io_out_bits_gpr_val_w_T_90; // @[EXU.scala 222:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_92 = EXE_reg_op[38] ? _io_out_bits_gpr_val_w_T_48 : _io_out_bits_gpr_val_w_T_91; // @[EXU.scala 221:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_93 = _io_csr_en_r_T_2 ? io_csr_val_r : _io_out_bits_gpr_val_w_T_92; // @[EXU.scala 220:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_94 = EXE_reg_op[52] | EXE_reg_op[53] | EXE_reg_op[54] ?
    _io_out_bits_gpr_val_w_T_39 : _io_out_bits_gpr_val_w_T_93; // @[EXU.scala 219:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_95 = EXE_reg_op[51] | EXE_reg_op[56] | EXE_reg_op[60] | EXE_reg_op[62] ?
    _io_out_bits_gpr_val_w_T_31 : _io_out_bits_gpr_val_w_T_94; // @[EXU.scala 218:26]
  wire [63:0] _io_out_bits_csr_val_w_T_2 = EXE_reg_op[64] ? alu_io_result : 64'h0; // @[EXU.scala 234:26]
  wire [63:0] _io_out_bits_pc_dnpc_T_5 = next_pc_sum & 64'hfffffffffffffffe; // @[EXU.scala 237:60]
  wire [63:0] _io_out_bits_pc_dnpc_T_6 = EXE_reg_op[37] ? _io_out_bits_pc_dnpc_T_5 : next_pc_sum; // @[EXU.scala 237:33]
  LSU lsu ( // @[EXU.scala 49:25]
    .clock(lsu_clock),
    .reset(lsu_reset),
    .io_ls_in_valid(lsu_io_ls_in_valid),
    .io_ls_in_bits_raddr(lsu_io_ls_in_bits_raddr),
    .io_ls_in_bits_waddr(lsu_io_ls_in_bits_waddr),
    .io_ls_in_bits_wdata(lsu_io_ls_in_bits_wdata),
    .io_ls_in_bits_wmask(lsu_io_ls_in_bits_wmask),
    .io_ls_out_ready(lsu_io_ls_out_ready),
    .io_ls_out_valid(lsu_io_ls_out_valid),
    .io_ls_out_bits_rdata(lsu_io_ls_out_bits_rdata),
    .io_en_r(lsu_io_en_r),
    .io_en_w(lsu_io_en_w),
    .io_lm_ar_ready(lsu_io_lm_ar_ready),
    .io_lm_ar_valid(lsu_io_lm_ar_valid),
    .io_lm_ar_bits_addr(lsu_io_lm_ar_bits_addr),
    .io_lm_r_ready(lsu_io_lm_r_ready),
    .io_lm_r_valid(lsu_io_lm_r_valid),
    .io_lm_r_bits_data(lsu_io_lm_r_bits_data),
    .io_lm_aw_ready(lsu_io_lm_aw_ready),
    .io_lm_aw_valid(lsu_io_lm_aw_valid),
    .io_lm_aw_bits_addr(lsu_io_lm_aw_bits_addr),
    .io_lm_w_ready(lsu_io_lm_w_ready),
    .io_lm_w_valid(lsu_io_lm_w_valid),
    .io_lm_w_bits_data(lsu_io_lm_w_bits_data),
    .io_lm_w_bits_strb(lsu_io_lm_w_bits_strb),
    .io_lm_b_ready(lsu_io_lm_b_ready),
    .io_lm_b_valid(lsu_io_lm_b_valid),
    .io_flush(lsu_io_flush)
  );
  ALU alu ( // @[EXU.scala 80:23]
    .clock(alu_clock),
    .reset(alu_reset),
    .io_src1(alu_io_src1),
    .io_src2(alu_io_src2),
    .io_op(alu_io_op),
    .io_result(alu_io_result),
    .io_validin(alu_io_validin),
    .io_validout(alu_io_validout),
    .io_busy(alu_io_busy),
    .io_flush(alu_io_flush)
  );
  ebreak ebreak1 ( // @[EXU.scala 133:27]
    .en_break(ebreak1_en_break),
    .clk(ebreak1_clk)
  );
  assign io_in_ready = (lsu_finish | _lsu_finish_T_4) & (alu_finish | alu_io_validout); // @[EXU.scala 111:70]
  assign io_out_valid = state == 2'h2 & _io_in_ready_T_1 & _io_in_ready_T_3 & ~flush; // @[EXU.scala 112:112]
  assign io_out_bits_pc = EXE_reg_pc; // @[EXU.scala 240:23]
  assign io_out_bits_pc_dnpc = EXE_reg_op[65] | EXE_reg_op[66] ? io_csr_val_r : _io_out_bits_pc_dnpc_T_6; // @[EXU.scala 236:33]
  assign io_out_bits_gpr_idx_w = dest[4:0]; // @[EXU.scala 207:30]
  assign io_out_bits_gpr_en_w = flush ? 1'h0 : EXE_reg_typ[0] | EXE_reg_typ[1] | EXE_reg_typ[3] | EXE_reg_typ[5]; // @[EXU.scala 206:34]
  assign io_out_bits_gpr_val_w = EXE_reg_op[1] | EXE_reg_op[3] | EXE_reg_op[5] | EXE_reg_op[13] | EXE_reg_op[15] |
    EXE_reg_op[17] | EXE_reg_op[21] | EXE_reg_op[23] ? _io_out_bits_gpr_val_w_T_19 : _io_out_bits_gpr_val_w_T_95; // @[EXU.scala 217:26]
  assign io_out_bits_csr_en_w = EXE_reg_op[63]; // @[EXU.scala 209:46]
  assign io_out_bits_csr_idx_w = _io_out_bits_csr_idx_w_T_3[11:0]; // @[EXU.scala 210:30]
  assign io_out_bits_csr_val_w = EXE_reg_op[63] ? src1 : _io_out_bits_csr_val_w_T_2; // @[EXU.scala 233:35]
  assign io_out_bits_csr_no = {{62'd0}, _io_out_bits_csr_no_T_5}; // @[EXU.scala 211:27]
  assign io_out_bits_csr_epc = {{32'd0}, EXE_reg_pc}; // @[EXU.scala 215:28]
  assign io_out_bits_isJump = EXE_reg_isJump; // @[EXU.scala 46:27]
  assign io_out_bits_clearidx = EXE_reg_clearidx; // @[EXU.scala 47:29]
  assign io_gpr_idx_r1 = EXE_reg_rs1; // @[EXU.scala 141:22]
  assign io_gpr_idx_r2 = EXE_reg_rs2; // @[EXU.scala 142:22]
  assign io_gpr_en_r1 = _src1_T_4 | EXE_reg_typ[5]; // @[EXU.scala 139:72]
  assign io_gpr_en_r2 = _src2_T_2 | EXE_reg_typ[5]; // @[EXU.scala 140:57]
  assign io_csr_idx_r = _io_csr_idx_r_T_7[11:0]; // @[EXU.scala 146:21]
  assign io_csr_en_r = EXE_reg_op[63] | EXE_reg_op[64] | EXE_reg_op[65] | EXE_reg_op[66]; // @[EXU.scala 145:73]
  assign io_lm_ar_valid = lsu_io_lm_ar_valid; // @[EXU.scala 130:14]
  assign io_lm_ar_bits_addr = lsu_io_lm_ar_bits_addr; // @[EXU.scala 130:14]
  assign io_lm_aw_valid = lsu_io_lm_aw_valid; // @[EXU.scala 130:14]
  assign io_lm_aw_bits_addr = lsu_io_lm_aw_bits_addr; // @[EXU.scala 130:14]
  assign io_lm_w_valid = lsu_io_lm_w_valid; // @[EXU.scala 130:14]
  assign io_lm_w_bits_data = lsu_io_lm_w_bits_data; // @[EXU.scala 130:14]
  assign io_lm_w_bits_strb = lsu_io_lm_w_bits_strb; // @[EXU.scala 130:14]
  assign lsu_clock = clock;
  assign lsu_reset = reset;
  assign lsu_io_ls_in_valid = _io_out_valid_T & ~lsu_finish; // @[EXU.scala 119:53]
  assign lsu_io_ls_in_bits_raddr = _lsu_io_ls_in_bits_raddr_T_13[31:0]; // @[EXU.scala 120:32]
  assign lsu_io_ls_in_bits_waddr = _lsu_io_ls_in_bits_waddr_T_7[31:0]; // @[EXU.scala 121:32]
  assign lsu_io_ls_in_bits_wdata = op_w ? io_gpr_val_r2 : 64'h0; // @[EXU.scala 122:37]
  assign lsu_io_ls_in_bits_wmask = EXE_reg_op[42] ? 8'h1 : _lsu_io_ls_in_bits_wmask_T_15; // @[EXU.scala 123:37]
  assign lsu_io_ls_out_ready = 1'h1; // @[EXU.scala 118:28]
  assign lsu_io_en_r = EXE_reg_op[38] | EXE_reg_op[39] | EXE_reg_op[40] | EXE_reg_op[41] | EXE_reg_op[46] | EXE_reg_op[
    47] | EXE_reg_op[48]; // @[EXU.scala 58:110]
  assign lsu_io_en_w = EXE_reg_op[42] | EXE_reg_op[43] | EXE_reg_op[44] | EXE_reg_op[45]; // @[EXU.scala 59:62]
  assign lsu_io_lm_ar_ready = io_lm_ar_ready; // @[EXU.scala 130:14]
  assign lsu_io_lm_r_valid = io_lm_r_valid; // @[EXU.scala 130:14]
  assign lsu_io_lm_r_bits_data = io_lm_r_bits_data; // @[EXU.scala 130:14]
  assign lsu_io_lm_aw_ready = io_lm_aw_ready; // @[EXU.scala 130:14]
  assign lsu_io_lm_w_ready = io_lm_w_ready; // @[EXU.scala 130:14]
  assign lsu_io_lm_b_valid = io_lm_b_valid; // @[EXU.scala 130:14]
  assign lsu_io_flush = EXE_reg_flush | io_flush; // @[EXU.scala 30:32]
  assign alu_clock = clock;
  assign alu_reset = reset;
  assign alu_io_src1 = EXE_reg_op[13] | EXE_reg_op[21] | EXE_reg_op[23] | EXE_reg_op[56] | EXE_reg_op[58] | EXE_reg_op[
    60] | EXE_reg_op[62] ? _alu_io_src1_T_15 : _alu_io_src1_T_28; // @[EXU.scala 157:28]
  assign alu_io_src2 = EXE_reg_op[13] | EXE_reg_op[17] | EXE_reg_op[21] ? _alu_io_src2_T_7 : _alu_io_src2_T_34; // @[EXU.scala 161:28]
  assign alu_io_op = EXE_reg_op[0] | EXE_reg_op[1] | EXE_reg_op[2] | EXE_reg_op[3] | EXE_reg_op[24] | EXE_reg_op[25] |
    EXE_reg_op[36] | EXE_reg_op[37] | EXE_reg_op[38] | EXE_reg_op[39] | EXE_reg_op[40] | EXE_reg_op[41] | EXE_reg_op[42]
     | EXE_reg_op[43] | EXE_reg_op[44] | EXE_reg_op[45] | EXE_reg_op[46] | EXE_reg_op[47] | EXE_reg_op[48] ? 19'h1 :
    _alu_io_op_T_124; // @[EXU.scala 168:28]
  assign alu_io_validin = _io_out_valid_T & (op_mul | op_div) & ~alu_finish & alu_valid; // @[EXU.scala 155:83]
  assign alu_io_flush = EXE_reg_flush | io_flush; // @[EXU.scala 30:32]
  assign ebreak1_en_break = EXE_reg_op[49] & _EXE_reg_pc_T; // @[EXU.scala 134:44]
  assign ebreak1_clk = clock; // @[EXU.scala 135:23]
  always @(posedge clock) begin
    if (reset) begin // @[EXU.scala 27:34]
      EXE_reg_flush <= 1'h0; // @[EXU.scala 27:34]
    end else begin
      EXE_reg_flush <= io_flush; // @[EXU.scala 28:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_pc <= 32'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_pc <= io_in_bits_pc; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_inst <= 32'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_inst <= io_in_bits_inst; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_rs1 <= 5'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_rs1 <= io_in_bits_rs1; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_rs2 <= 5'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_rs2 <= io_in_bits_rs2; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_rd <= 5'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_rd <= io_in_bits_rd; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_imm <= 64'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_imm <= io_in_bits_imm; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_op <= 80'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_op <= io_in_bits_op; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_typ <= 6'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_typ <= io_in_bits_typ; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_isJump <= 1'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_isJump <= io_in_bits_isJump; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_clearidx <= 5'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_clearidx <= io_in_bits_clearidx; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[EXU.scala 82:31]
      lsu_finish <= 1'h0; // @[EXU.scala 82:31]
    end else begin
      lsu_finish <= flush | _lsu_finish_T_11; // @[EXU.scala 89:20]
    end
    if (reset) begin // @[EXU.scala 83:31]
      alu_finish <= 1'h0; // @[EXU.scala 83:31]
    end else begin
      alu_finish <= flush | _alu_finish_T_10; // @[EXU.scala 92:20]
    end
    if (reset) begin // @[EXU.scala 84:31]
      alu_valid <= 1'h0; // @[EXU.scala 84:31]
    end else if (flush) begin // @[EXU.scala 95:26]
      alu_valid <= 1'h0;
    end else begin
      alu_valid <= _alu_valid_T_6;
    end
    if (reset) begin // @[EXU.scala 86:28]
      state <= 2'h0; // @[EXU.scala 86:28]
    end else if (2'h2 == state) begin // @[Mux.scala 81:58]
      if (flush) begin // @[EXU.scala 103:31]
        state <= 2'h0;
      end else if ((~io_out_valid | ~_EXE_reg_pc_T) & (~op_wait | _lsu_finish_T_4 | alu_io_validout)) begin // @[EXU.scala 103:55]
        state <= 2'h0;
      end else begin
        state <= 2'h2;
      end
    end else if (2'h0 == state) begin // @[Mux.scala 81:58]
      if (flush) begin // @[EXU.scala 102:31]
        state <= 2'h0;
      end else begin
        state <= _state_T_2;
      end
    end else begin
      state <= 2'h0;
    end
    if (reset) begin // @[Reg.scala 35:20]
      alu_res <= 64'h0; // @[Reg.scala 35:20]
    end else if (_state_T_13) begin // @[Reg.scala 36:18]
      alu_res <= alu_io_result; // @[Reg.scala 36:22]
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  EXE_reg_flush = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  EXE_reg_pc = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  EXE_reg_inst = _RAND_2[31:0];
  _RAND_3 = {1{`RANDOM}};
  EXE_reg_rs1 = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  EXE_reg_rs2 = _RAND_4[4:0];
  _RAND_5 = {1{`RANDOM}};
  EXE_reg_rd = _RAND_5[4:0];
  _RAND_6 = {2{`RANDOM}};
  EXE_reg_imm = _RAND_6[63:0];
  _RAND_7 = {3{`RANDOM}};
  EXE_reg_op = _RAND_7[79:0];
  _RAND_8 = {1{`RANDOM}};
  EXE_reg_typ = _RAND_8[5:0];
  _RAND_9 = {1{`RANDOM}};
  EXE_reg_isJump = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  EXE_reg_clearidx = _RAND_10[4:0];
  _RAND_11 = {1{`RANDOM}};
  lsu_finish = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  alu_finish = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  alu_valid = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  state = _RAND_14[1:0];
  _RAND_15 = {2{`RANDOM}};
  alu_res = _RAND_15[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

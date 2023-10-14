module IDU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_pc,
  input  [31:0] io_in_bits_inst,
  input         io_in_bits_isJump,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  output [4:0]  io_out_bits_rs1,
  output [4:0]  io_out_bits_rs2,
  output [4:0]  io_out_bits_rd,
  output [63:0] io_out_bits_imm,
  output [79:0] io_out_bits_op,
  output [5:0]  io_out_bits_typ,
  output        io_out_bits_isJump,
  output [4:0]  io_out_bits_clearidx,
  output [4:0]  io_sb_lookidx1,
  output [4:0]  io_sb_lookidx2,
  output [4:0]  io_sb_setidx,
  input         io_sb_isBusy,
  input         io_flush
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] ID_reg_inst; // @[IDU.scala 29:23]
  reg [31:0] ID_reg_pc; // @[IDU.scala 30:21]
  reg  ID_reg_isJump; // @[IDU.scala 32:25]
  wire  _T_3 = io_in_ready & io_in_valid; // @[Decoupled.scala 52:35]
  wire  _io_out_bits_isJump_T_1 = ~io_sb_isBusy; // @[IDU.scala 47:28]
  reg  state; // @[IDU.scala 51:23]
  wire  _op_t_0_T_1 = ID_reg_inst[6:0] == 7'h33; // @[IDU.scala 68:31]
  wire  _op_t_0_T_3 = ID_reg_inst[14:12] == 3'h0; // @[IDU.scala 68:67]
  wire  _op_t_0_T_4 = ID_reg_inst[6:0] == 7'h33 & ID_reg_inst[14:12] == 3'h0; // @[IDU.scala 68:47]
  wire  _op_t_0_T_6 = ID_reg_inst[31:25] == 7'h0; // @[IDU.scala 68:99]
  wire  op_t_0 = ID_reg_inst[6:0] == 7'h33 & ID_reg_inst[14:12] == 3'h0 & ID_reg_inst[31:25] == 7'h0; // @[IDU.scala 68:79]
  wire  _op_t_1_T_1 = ID_reg_inst[6:0] == 7'h3b; // @[IDU.scala 69:31]
  wire  _op_t_1_T_4 = ID_reg_inst[6:0] == 7'h3b & _op_t_0_T_3; // @[IDU.scala 69:47]
  wire  op_t_1 = ID_reg_inst[6:0] == 7'h3b & _op_t_0_T_3 & _op_t_0_T_6; // @[IDU.scala 69:79]
  wire  _op_t_2_T_1 = ID_reg_inst[6:0] == 7'h13; // @[IDU.scala 70:31]
  wire  op_t_2 = ID_reg_inst[6:0] == 7'h13 & _op_t_0_T_3; // @[IDU.scala 70:47]
  wire  _op_t_3_T_1 = ID_reg_inst[6:0] == 7'h1b; // @[IDU.scala 71:31]
  wire  op_t_3 = ID_reg_inst[6:0] == 7'h1b & _op_t_0_T_3; // @[IDU.scala 71:47]
  wire  _op_t_4_T_6 = ID_reg_inst[31:25] == 7'h20; // @[IDU.scala 72:99]
  wire  op_t_4 = _op_t_0_T_4 & ID_reg_inst[31:25] == 7'h20; // @[IDU.scala 72:79]
  wire  op_t_5 = _op_t_1_T_4 & _op_t_4_T_6; // @[IDU.scala 73:79]
  wire  _op_t_6_T_3 = ID_reg_inst[14:12] == 3'h7; // @[IDU.scala 74:67]
  wire  _op_t_6_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h7; // @[IDU.scala 74:47]
  wire  op_t_6 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h7 & _op_t_0_T_6; // @[IDU.scala 74:79]
  wire  op_t_7 = _op_t_2_T_1 & _op_t_6_T_3; // @[IDU.scala 75:47]
  wire  _op_t_8_T_3 = ID_reg_inst[14:12] == 3'h6; // @[IDU.scala 76:67]
  wire  _op_t_8_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h6; // @[IDU.scala 76:47]
  wire  op_t_8 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h6 & _op_t_0_T_6; // @[IDU.scala 76:79]
  wire  op_t_9 = _op_t_2_T_1 & _op_t_8_T_3; // @[IDU.scala 77:47]
  wire  _op_t_10_T_3 = ID_reg_inst[14:12] == 3'h4; // @[IDU.scala 78:67]
  wire  _op_t_10_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h4; // @[IDU.scala 78:47]
  wire  op_t_10 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h4 & _op_t_0_T_6; // @[IDU.scala 78:79]
  wire  op_t_11 = _op_t_2_T_1 & _op_t_10_T_3; // @[IDU.scala 79:47]
  wire  _op_t_12_T_3 = ID_reg_inst[14:12] == 3'h1; // @[IDU.scala 80:67]
  wire  _op_t_12_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h1; // @[IDU.scala 80:47]
  wire  op_t_12 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h1 & _op_t_0_T_6; // @[IDU.scala 80:79]
  wire  op_t_13 = _op_t_1_T_1 & _op_t_12_T_3 & _op_t_0_T_6; // @[IDU.scala 81:79]
  wire  _op_t_14_T_6 = ID_reg_inst[31:26] == 6'h0; // @[IDU.scala 82:99]
  wire  op_t_14 = _op_t_2_T_1 & _op_t_12_T_3 & ID_reg_inst[31:26] == 6'h0; // @[IDU.scala 82:79]
  wire  op_t_15 = _op_t_3_T_1 & _op_t_12_T_3 & _op_t_14_T_6; // @[IDU.scala 83:79]
  wire  _op_t_16_T_3 = ID_reg_inst[14:12] == 3'h5; // @[IDU.scala 84:67]
  wire  _op_t_16_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h5; // @[IDU.scala 84:47]
  wire  op_t_16 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h5 & _op_t_4_T_6; // @[IDU.scala 84:79]
  wire  _op_t_17_T_4 = _op_t_1_T_1 & _op_t_16_T_3; // @[IDU.scala 85:47]
  wire  op_t_17 = _op_t_1_T_1 & _op_t_16_T_3 & _op_t_4_T_6; // @[IDU.scala 85:79]
  wire  _op_t_18_T_4 = _op_t_2_T_1 & _op_t_16_T_3; // @[IDU.scala 86:47]
  wire  _op_t_18_T_6 = ID_reg_inst[31:26] == 6'h10; // @[IDU.scala 86:99]
  wire  op_t_18 = _op_t_2_T_1 & _op_t_16_T_3 & ID_reg_inst[31:26] == 6'h10; // @[IDU.scala 86:79]
  wire  _op_t_19_T_4 = _op_t_3_T_1 & _op_t_16_T_3; // @[IDU.scala 87:47]
  wire  op_t_19 = _op_t_3_T_1 & _op_t_16_T_3 & _op_t_18_T_6; // @[IDU.scala 87:79]
  wire  op_t_20 = _op_t_16_T_4 & _op_t_0_T_6; // @[IDU.scala 88:79]
  wire  op_t_21 = _op_t_17_T_4 & _op_t_0_T_6; // @[IDU.scala 89:79]
  wire  op_t_22 = _op_t_18_T_4 & _op_t_14_T_6; // @[IDU.scala 90:79]
  wire  op_t_23 = _op_t_19_T_4 & _op_t_14_T_6; // @[IDU.scala 91:79]
  wire  op_t_24 = ID_reg_inst[6:0] == 7'h37; // @[IDU.scala 92:31]
  wire  op_t_25 = ID_reg_inst[6:0] == 7'h17; // @[IDU.scala 93:31]
  wire  _op_t_26_T_3 = ID_reg_inst[14:12] == 3'h2; // @[IDU.scala 94:67]
  wire  _op_t_26_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h2; // @[IDU.scala 94:47]
  wire  op_t_26 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h2 & _op_t_0_T_6; // @[IDU.scala 94:79]
  wire  _op_t_27_T_3 = ID_reg_inst[14:12] == 3'h3; // @[IDU.scala 95:67]
  wire  _op_t_27_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h3; // @[IDU.scala 95:47]
  wire  op_t_27 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h3 & _op_t_0_T_6; // @[IDU.scala 95:79]
  wire  op_t_28 = _op_t_2_T_1 & _op_t_26_T_3; // @[IDU.scala 96:47]
  wire  op_t_29 = _op_t_2_T_1 & _op_t_27_T_3; // @[IDU.scala 97:47]
  wire  _op_t_30_T_1 = ID_reg_inst[6:0] == 7'h63; // @[IDU.scala 98:31]
  wire  op_t_30 = ID_reg_inst[6:0] == 7'h63 & _op_t_0_T_3; // @[IDU.scala 98:47]
  wire  op_t_31 = _op_t_30_T_1 & _op_t_12_T_3; // @[IDU.scala 99:47]
  wire  op_t_32 = _op_t_30_T_1 & _op_t_16_T_3; // @[IDU.scala 100:47]
  wire  op_t_33 = _op_t_30_T_1 & _op_t_6_T_3; // @[IDU.scala 101:47]
  wire  op_t_34 = _op_t_30_T_1 & _op_t_10_T_3; // @[IDU.scala 102:47]
  wire  op_t_35 = _op_t_30_T_1 & _op_t_8_T_3; // @[IDU.scala 103:47]
  wire  op_t_36 = ID_reg_inst[6:0] == 7'h6f; // @[IDU.scala 104:31]
  wire  op_t_37 = ID_reg_inst[6:0] == 7'h67 & _op_t_0_T_3; // @[IDU.scala 105:47]
  wire  _op_t_38_T_1 = ID_reg_inst[6:0] == 7'h3; // @[IDU.scala 106:31]
  wire  op_t_38 = ID_reg_inst[6:0] == 7'h3 & _op_t_0_T_3; // @[IDU.scala 106:47]
  wire  op_t_39 = _op_t_38_T_1 & _op_t_12_T_3; // @[IDU.scala 107:47]
  wire  op_t_40 = _op_t_38_T_1 & _op_t_26_T_3; // @[IDU.scala 108:47]
  wire  op_t_41 = _op_t_38_T_1 & _op_t_27_T_3; // @[IDU.scala 109:47]
  wire  _op_t_42_T_1 = ID_reg_inst[6:0] == 7'h23; // @[IDU.scala 110:31]
  wire  op_t_42 = ID_reg_inst[6:0] == 7'h23 & _op_t_0_T_3; // @[IDU.scala 110:47]
  wire  op_t_43 = _op_t_42_T_1 & _op_t_12_T_3; // @[IDU.scala 111:47]
  wire  op_t_44 = _op_t_42_T_1 & _op_t_26_T_3; // @[IDU.scala 112:47]
  wire  op_t_45 = _op_t_42_T_1 & _op_t_27_T_3; // @[IDU.scala 113:47]
  wire  op_t_46 = _op_t_38_T_1 & _op_t_10_T_3; // @[IDU.scala 114:47]
  wire  op_t_47 = _op_t_38_T_1 & _op_t_16_T_3; // @[IDU.scala 115:47]
  wire  op_t_48 = _op_t_38_T_1 & _op_t_8_T_3; // @[IDU.scala 116:47]
  wire  op_t_49 = ID_reg_inst == 32'h100073; // @[IDU.scala 117:26]
  wire  _op_t_50_T_6 = ID_reg_inst[31:25] == 7'h1; // @[IDU.scala 120:99]
  wire  op_t_50 = _op_t_0_T_4 & ID_reg_inst[31:25] == 7'h1; // @[IDU.scala 120:79]
  wire  op_t_51 = _op_t_1_T_4 & _op_t_50_T_6; // @[IDU.scala 121:79]
  wire  op_t_52 = _op_t_12_T_4 & _op_t_50_T_6; // @[IDU.scala 122:79]
  wire  op_t_53 = _op_t_27_T_4 & _op_t_50_T_6; // @[IDU.scala 123:79]
  wire  op_t_54 = _op_t_26_T_4 & _op_t_50_T_6; // @[IDU.scala 124:79]
  wire  op_t_55 = _op_t_10_T_4 & _op_t_50_T_6; // @[IDU.scala 125:79]
  wire  op_t_56 = _op_t_1_T_1 & _op_t_10_T_3 & _op_t_50_T_6; // @[IDU.scala 126:79]
  wire  op_t_57 = _op_t_16_T_4 & _op_t_50_T_6; // @[IDU.scala 127:79]
  wire  op_t_58 = _op_t_17_T_4 & _op_t_50_T_6; // @[IDU.scala 128:79]
  wire  op_t_59 = _op_t_8_T_4 & _op_t_50_T_6; // @[IDU.scala 129:79]
  wire  op_t_60 = _op_t_1_T_1 & _op_t_8_T_3 & _op_t_50_T_6; // @[IDU.scala 130:79]
  wire  op_t_61 = _op_t_6_T_4 & _op_t_50_T_6; // @[IDU.scala 131:79]
  wire  op_t_62 = _op_t_1_T_1 & _op_t_6_T_3 & _op_t_50_T_6; // @[IDU.scala 132:79]
  wire  _op_t_63_T_1 = ID_reg_inst[6:0] == 7'h73; // @[IDU.scala 135:31]
  wire  op_t_63 = ID_reg_inst[6:0] == 7'h73 & _op_t_12_T_3; // @[IDU.scala 135:47]
  wire  op_t_64 = _op_t_63_T_1 & _op_t_26_T_3; // @[IDU.scala 136:47]
  wire  op_t_65 = ID_reg_inst == 32'h73; // @[IDU.scala 137:26]
  wire  op_t_66 = ID_reg_inst == 32'h30200073; // @[IDU.scala 138:26]
  wire [9:0] op_lo_lo_lo = {op_t_9,op_t_8,op_t_7,op_t_6,op_t_5,op_t_4,op_t_3,op_t_2,op_t_1,op_t_0}; // @[IDU.scala 141:13]
  wire [9:0] op_lo_lo_hi = {op_t_19,op_t_18,op_t_17,op_t_16,op_t_15,op_t_14,op_t_13,op_t_12,op_t_11,op_t_10}; // @[IDU.scala 141:13]
  wire [9:0] op_lo_hi_lo = {op_t_29,op_t_28,op_t_27,op_t_26,op_t_25,op_t_24,op_t_23,op_t_22,op_t_21,op_t_20}; // @[IDU.scala 141:13]
  wire [9:0] op_lo_hi_hi = {op_t_39,op_t_38,op_t_37,op_t_36,op_t_35,op_t_34,op_t_33,op_t_32,op_t_31,op_t_30}; // @[IDU.scala 141:13]
  wire [9:0] op_hi_lo_lo = {op_t_49,op_t_48,op_t_47,op_t_46,op_t_45,op_t_44,op_t_43,op_t_42,op_t_41,op_t_40}; // @[IDU.scala 141:13]
  wire [9:0] op_hi_lo_hi = {op_t_59,op_t_58,op_t_57,op_t_56,op_t_55,op_t_54,op_t_53,op_t_52,op_t_51,op_t_50}; // @[IDU.scala 141:13]
  wire [19:0] op_hi_lo = {op_hi_lo_hi,op_hi_lo_lo}; // @[IDU.scala 141:13]
  wire [39:0] op_hi = {10'h0,3'h0,op_t_66,op_t_65,op_t_64,op_t_63,op_t_62,op_t_61,op_t_60,op_hi_lo}; // @[IDU.scala 141:13]
  wire [79:0] op = {op_hi,op_lo_hi_hi,op_lo_hi_lo,op_lo_lo_hi,op_lo_lo_lo}; // @[IDU.scala 141:13]
  wire  _typ_t_0_T_30 = op[2] | op[3] | op[7] | op[9] | op[11] | op[14] | op[15] | op[18] | op[19] | op[22] | op[23] |
    op[28] | op[29] | op[37] | op[38] | op[39]; // @[IDU.scala 156:116]
  wire  typ_t_0 = _typ_t_0_T_30 | op[40] | op[41] | op[46] | op[47] | op[48] | op[63] | op[64]; // @[IDU.scala 156:165]
  wire  typ_t_1 = op[24] | op[25]; // @[IDU.scala 157:22]
  wire  typ_t_2 = op[42] | op[43] | op[44] | op[45]; // @[IDU.scala 158:36]
  wire  typ_t_3 = op[36]; // @[IDU.scala 159:18]
  wire  typ_t_4 = op[30] | op[31] | op[32] | op[33] | op[34] | op[35]; // @[IDU.scala 160:50]
  wire  _typ_t_5_T_30 = op[0] | op[1] | op[4] | op[5] | op[6] | op[8] | op[10] | op[12] | op[13] | op[16] | op[17] | op[
    20] | op[21] | op[26] | op[27] | op[50]; // @[IDU.scala 161:114]
  wire  typ_t_5 = _typ_t_5_T_30 | op[51] | op[52] | op[53] | op[54] | op[55] | op[56] | op[57] | op[58] | op[59] | op[60
    ] | op[61] | op[62]; // @[IDU.scala 161:198]
  wire [5:0] typ = {typ_t_5,typ_t_4,typ_t_3,typ_t_2,typ_t_1,typ_t_0}; // @[IDU.scala 163:15]
  wire [51:0] _io_out_bits_imm_T_3 = ID_reg_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_imm_T_5 = {_io_out_bits_imm_T_3,ID_reg_inst[31:20]}; // @[Cat.scala 33:92]
  wire [31:0] _io_out_bits_imm_T_9 = ID_reg_inst[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_imm_T_13 = {_io_out_bits_imm_T_9,ID_reg_inst[31:12],12'h0}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_imm_T_21 = {_io_out_bits_imm_T_3,ID_reg_inst[31:25],ID_reg_inst[11:7]}; // @[Cat.scala 33:92]
  wire [42:0] _io_out_bits_imm_T_25 = ID_reg_inst[31] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_imm_T_34 = {_io_out_bits_imm_T_25,ID_reg_inst[31],ID_reg_inst[19:12],ID_reg_inst[20],
    ID_reg_inst[30:21],1'h0}; // @[Cat.scala 33:92]
  wire [50:0] _io_out_bits_imm_T_38 = ID_reg_inst[31] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_imm_T_47 = {_io_out_bits_imm_T_38,ID_reg_inst[31],ID_reg_inst[7],ID_reg_inst[30:25],
    ID_reg_inst[11:8],1'h0}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_imm_T_48 = typ[4] ? _io_out_bits_imm_T_47 : 64'h0; // @[IDU.scala 172:25]
  wire [63:0] _io_out_bits_imm_T_49 = typ[3] ? _io_out_bits_imm_T_34 : _io_out_bits_imm_T_48; // @[IDU.scala 171:25]
  wire [63:0] _io_out_bits_imm_T_50 = typ[2] ? _io_out_bits_imm_T_21 : _io_out_bits_imm_T_49; // @[IDU.scala 170:25]
  wire [63:0] _io_out_bits_imm_T_51 = typ[1] ? _io_out_bits_imm_T_13 : _io_out_bits_imm_T_50; // @[IDU.scala 169:25]
  wire  _io_sb_setidx_T_7 = io_out_ready & io_out_valid; // @[Decoupled.scala 52:35]
  assign io_in_ready = _io_out_bits_isJump_T_1 & io_out_ready; // @[IDU.scala 59:25]
  assign io_out_valid = state & io_in_valid; // @[IDU.scala 60:43]
  assign io_out_bits_pc = _io_out_bits_isJump_T_1 ? ID_reg_pc : 32'h0; // @[IDU.scala 61:23]
  assign io_out_bits_inst = _io_out_bits_isJump_T_1 ? ID_reg_inst : 32'h13; // @[IDU.scala 62:25]
  assign io_out_bits_rs1 = _io_out_bits_isJump_T_1 ? ID_reg_inst[19:15] : 5'h0; // @[IDU.scala 145:24]
  assign io_out_bits_rs2 = _io_out_bits_isJump_T_1 ? ID_reg_inst[24:20] : 5'h0; // @[IDU.scala 146:24]
  assign io_out_bits_rd = _io_out_bits_isJump_T_1 ? ID_reg_inst[11:7] : 5'h0; // @[IDU.scala 144:23]
  assign io_out_bits_imm = typ[0] ? _io_out_bits_imm_T_5 : _io_out_bits_imm_T_51; // @[IDU.scala 168:25]
  assign io_out_bits_op = _io_out_bits_isJump_T_1 ? op : 80'h0; // @[IDU.scala 143:23]
  assign io_out_bits_typ = _io_out_bits_isJump_T_1 ? typ : 6'h0; // @[IDU.scala 165:24]
  assign io_out_bits_isJump = ~io_sb_isBusy & ID_reg_isJump; // @[IDU.scala 47:27]
  assign io_out_bits_clearidx = _io_out_bits_isJump_T_1 ? io_sb_setidx : 5'h0; // @[IDU.scala 179:29]
  assign io_sb_lookidx1 = typ[0] | typ[2] | typ[4] | typ[5] ? ID_reg_inst[19:15] : 5'h0; // @[IDU.scala 176:23]
  assign io_sb_lookidx2 = typ[2] | typ[4] | typ[5] ? ID_reg_inst[24:20] : 5'h0; // @[IDU.scala 177:23]
  assign io_sb_setidx = (typ[0] | typ[1] | typ[3] | typ[5]) & (_io_sb_setidx_T_7 & _T_3) & _io_out_bits_isJump_T_1 ?
    ID_reg_inst[11:7] : 5'h0; // @[IDU.scala 178:21]
  always @(posedge clock) begin
    if (io_flush | reset) begin // @[IDU.scala 34:38]
      ID_reg_inst <= 32'h0; // @[IDU.scala 35:18]
    end else if (_T_3) begin // @[IDU.scala 39:26]
      ID_reg_inst <= io_in_bits_inst; // @[IDU.scala 40:18]
    end
    if (io_flush | reset) begin // @[IDU.scala 34:38]
      ID_reg_pc <= 32'h0; // @[IDU.scala 36:16]
    end else if (_T_3) begin // @[IDU.scala 39:26]
      ID_reg_pc <= io_in_bits_pc; // @[IDU.scala 41:16]
    end
    if (io_flush | reset) begin // @[IDU.scala 34:38]
      ID_reg_isJump <= 1'h0; // @[IDU.scala 38:20]
    end else if (_T_3) begin // @[IDU.scala 39:26]
      ID_reg_isJump <= io_in_bits_isJump; // @[IDU.scala 43:20]
    end
    if (reset) begin // @[IDU.scala 51:23]
      state <= 1'h0; // @[IDU.scala 51:23]
    end else if (state) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[IDU.scala 56:25]
        state <= 1'h0;
      end else begin
        state <= 1'h1;
      end
    end else if (io_flush) begin // @[IDU.scala 55:25]
      state <= 1'h0;
    end else begin
      state <= _T_3;
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
  ID_reg_inst = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  ID_reg_pc = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  ID_reg_isJump = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  state = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

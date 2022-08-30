module IDU(
  input  [31:0] io_inst,
  output [4:0]  io_rs1,
  output [4:0]  io_rs2,
  output [4:0]  io_rd,
  output [63:0] io_imm,
  output [63:0] io_op,
  output [5:0]  io_typ
);
  wire  _op_T_18 = io_inst[14:12] == 3'h0; // @[IDU.scala 20:61]
  wire [63:0] _op_T_29 = io_inst == 32'h100073 ? 64'h8000000000000000 : 64'h0; // @[IDU.scala 22:15]
  wire [63:0] _op_T_30 = io_inst[6:0] == 7'h13 & _op_T_18 ? 64'h20 : _op_T_29; // @[IDU.scala 21:15]
  wire [63:0] _op_T_31 = io_inst[6:0] == 7'h67 & io_inst[14:12] == 3'h0 ? 64'h10 : _op_T_30; // @[IDU.scala 20:15]
  wire [63:0] _op_T_32 = io_inst[6:0] == 7'h6f ? 64'h8 : _op_T_31; // @[IDU.scala 19:15]
  wire [63:0] _op_T_33 = io_inst[6:0] == 7'h23 & io_inst[14:12] == 3'h3 ? 64'h4 : _op_T_32; // @[IDU.scala 18:15]
  wire [63:0] _op_T_34 = io_inst[6:0] == 7'h37 ? 64'h2 : _op_T_33; // @[IDU.scala 17:15]
  wire [63:0] op = io_inst[6:0] == 7'h17 ? 64'h1 : _op_T_34; // @[IDU.scala 16:15]
  wire [5:0] _typ_T_10 = op[13] ? 6'h20 : 6'h0; // @[IDU.scala 35:14]
  wire [5:0] _typ_T_11 = op[12] ? 6'h10 : _typ_T_10; // @[IDU.scala 34:14]
  wire [5:0] _typ_T_12 = op[3] ? 6'h8 : _typ_T_11; // @[IDU.scala 33:14]
  wire [5:0] _typ_T_13 = op[2] ? 6'h4 : _typ_T_12; // @[IDU.scala 32:14]
  wire [5:0] _typ_T_14 = op[0] | op[1] ? 6'h2 : _typ_T_13; // @[IDU.scala 31:14]
  wire [5:0] typ = op[4] | op[5] ? 6'h1 : _typ_T_14; // @[IDU.scala 30:13]
  wire [51:0] io_imm_hi = io_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [11:0] io_imm_lo = io_inst[31:20]; // @[IDU.scala 38:56]
  wire [63:0] _io_imm_T_3 = {io_imm_hi,io_imm_lo}; // @[Cat.scala 30:58]
  wire [31:0] io_imm_hi_1 = io_inst[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [19:0] io_imm_hi_2 = io_inst[31:12]; // @[IDU.scala 39:60]
  wire [63:0] _io_imm_T_7 = {io_imm_hi_1,io_imm_hi_2,12'h0}; // @[Cat.scala 30:58]
  wire [6:0] io_imm_hi_4 = io_inst[31:25]; // @[IDU.scala 40:60]
  wire [63:0] _io_imm_T_11 = {io_imm_hi,io_imm_hi_4,io_inst[11:7]}; // @[Cat.scala 30:58]
  wire [42:0] io_imm_hi_5 = io_inst[31] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 72:12]
  wire [7:0] io_imm_hi_7 = io_inst[19:12]; // @[IDU.scala 41:76]
  wire  io_imm_hi_8 = io_inst[20]; // @[IDU.scala 41:95]
  wire [9:0] io_imm_hi_9 = io_inst[30:21]; // @[IDU.scala 41:111]
  wire [63:0] _io_imm_T_15 = {io_imm_hi_5,io_inst[31],io_imm_hi_7,io_imm_hi_8,io_imm_hi_9,1'h0}; // @[Cat.scala 30:58]
  wire [50:0] io_imm_hi_10 = io_inst[31] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 72:12]
  wire  io_imm_hi_12 = io_inst[7]; // @[IDU.scala 42:76]
  wire [5:0] io_imm_hi_13 = io_inst[30:25]; // @[IDU.scala 42:91]
  wire [3:0] io_imm_hi_14 = io_inst[11:8]; // @[IDU.scala 42:110]
  wire [63:0] _io_imm_T_19 = {io_imm_hi_10,io_inst[31],io_imm_hi_12,io_imm_hi_13,io_imm_hi_14,1'h0}; // @[Cat.scala 30:58]
  wire [63:0] _io_imm_T_20 = typ[4] ? _io_imm_T_19 : 64'h0; // @[IDU.scala 42:16]
  wire [63:0] _io_imm_T_21 = typ[3] ? _io_imm_T_15 : _io_imm_T_20; // @[IDU.scala 41:16]
  wire [63:0] _io_imm_T_22 = typ[2] ? _io_imm_T_11 : _io_imm_T_21; // @[IDU.scala 40:16]
  wire [63:0] _io_imm_T_23 = typ[1] ? _io_imm_T_7 : _io_imm_T_22; // @[IDU.scala 39:16]
  assign io_rs1 = io_inst[19:15]; // @[IDU.scala 26:20]
  assign io_rs2 = io_inst[24:20]; // @[IDU.scala 27:20]
  assign io_rd = io_inst[11:7]; // @[IDU.scala 25:19]
  assign io_imm = typ[0] ? _io_imm_T_3 : _io_imm_T_23; // @[IDU.scala 38:16]
  assign io_op = io_inst[6:0] == 7'h17 ? 64'h1 : _op_T_34; // @[IDU.scala 16:15]
  assign io_typ = op[4] | op[5] ? 6'h1 : _typ_T_14; // @[IDU.scala 30:13]
endmodule
module GPR(
  input         clock,
  input         reset,
  input  [4:0]  io_idx_r1,
  input  [4:0]  io_idx_r2,
  input  [4:0]  io_idx_w,
  input         io_en_w,
  input         io_en_r1,
  input         io_en_r2,
  input  [63:0] io_val_w,
  output [63:0] io_val_r1,
  output [63:0] io_val_r2
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] p_rf_0; // @[GPR.scala 23:17]
  wire [63:0] p_rf_1; // @[GPR.scala 23:17]
  wire [63:0] p_rf_2; // @[GPR.scala 23:17]
  wire [63:0] p_rf_3; // @[GPR.scala 23:17]
  wire [63:0] p_rf_4; // @[GPR.scala 23:17]
  wire [63:0] p_rf_5; // @[GPR.scala 23:17]
  wire [63:0] p_rf_6; // @[GPR.scala 23:17]
  wire [63:0] p_rf_7; // @[GPR.scala 23:17]
  wire [63:0] p_rf_8; // @[GPR.scala 23:17]
  wire [63:0] p_rf_9; // @[GPR.scala 23:17]
  wire [63:0] p_rf_10; // @[GPR.scala 23:17]
  wire [63:0] p_rf_11; // @[GPR.scala 23:17]
  wire [63:0] p_rf_12; // @[GPR.scala 23:17]
  wire [63:0] p_rf_13; // @[GPR.scala 23:17]
  wire [63:0] p_rf_14; // @[GPR.scala 23:17]
  wire [63:0] p_rf_15; // @[GPR.scala 23:17]
  wire [63:0] p_rf_16; // @[GPR.scala 23:17]
  wire [63:0] p_rf_17; // @[GPR.scala 23:17]
  wire [63:0] p_rf_18; // @[GPR.scala 23:17]
  wire [63:0] p_rf_19; // @[GPR.scala 23:17]
  wire [63:0] p_rf_20; // @[GPR.scala 23:17]
  wire [63:0] p_rf_21; // @[GPR.scala 23:17]
  wire [63:0] p_rf_22; // @[GPR.scala 23:17]
  wire [63:0] p_rf_23; // @[GPR.scala 23:17]
  wire [63:0] p_rf_24; // @[GPR.scala 23:17]
  wire [63:0] p_rf_25; // @[GPR.scala 23:17]
  wire [63:0] p_rf_26; // @[GPR.scala 23:17]
  wire [63:0] p_rf_27; // @[GPR.scala 23:17]
  wire [63:0] p_rf_28; // @[GPR.scala 23:17]
  wire [63:0] p_rf_29; // @[GPR.scala 23:17]
  wire [63:0] p_rf_30; // @[GPR.scala 23:17]
  wire [63:0] p_rf_31; // @[GPR.scala 23:17]
  reg [63:0] gpr_1; // @[GPR.scala 17:20]
  reg [63:0] gpr_2; // @[GPR.scala 17:20]
  reg [63:0] gpr_3; // @[GPR.scala 17:20]
  reg [63:0] gpr_4; // @[GPR.scala 17:20]
  reg [63:0] gpr_5; // @[GPR.scala 17:20]
  reg [63:0] gpr_6; // @[GPR.scala 17:20]
  reg [63:0] gpr_7; // @[GPR.scala 17:20]
  reg [63:0] gpr_8; // @[GPR.scala 17:20]
  reg [63:0] gpr_9; // @[GPR.scala 17:20]
  reg [63:0] gpr_10; // @[GPR.scala 17:20]
  reg [63:0] gpr_11; // @[GPR.scala 17:20]
  reg [63:0] gpr_12; // @[GPR.scala 17:20]
  reg [63:0] gpr_13; // @[GPR.scala 17:20]
  reg [63:0] gpr_14; // @[GPR.scala 17:20]
  reg [63:0] gpr_15; // @[GPR.scala 17:20]
  reg [63:0] gpr_16; // @[GPR.scala 17:20]
  reg [63:0] gpr_17; // @[GPR.scala 17:20]
  reg [63:0] gpr_18; // @[GPR.scala 17:20]
  reg [63:0] gpr_19; // @[GPR.scala 17:20]
  reg [63:0] gpr_20; // @[GPR.scala 17:20]
  reg [63:0] gpr_21; // @[GPR.scala 17:20]
  reg [63:0] gpr_22; // @[GPR.scala 17:20]
  reg [63:0] gpr_23; // @[GPR.scala 17:20]
  reg [63:0] gpr_24; // @[GPR.scala 17:20]
  reg [63:0] gpr_25; // @[GPR.scala 17:20]
  reg [63:0] gpr_26; // @[GPR.scala 17:20]
  reg [63:0] gpr_27; // @[GPR.scala 17:20]
  reg [63:0] gpr_28; // @[GPR.scala 17:20]
  reg [63:0] gpr_29; // @[GPR.scala 17:20]
  reg [63:0] gpr_30; // @[GPR.scala 17:20]
  reg [63:0] gpr_31; // @[GPR.scala 17:20]
  wire [63:0] _GEN_1 = 5'h1 == io_idx_r1 ? gpr_1 : 64'h0; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_2 = 5'h2 == io_idx_r1 ? gpr_2 : _GEN_1; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_3 = 5'h3 == io_idx_r1 ? gpr_3 : _GEN_2; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_4 = 5'h4 == io_idx_r1 ? gpr_4 : _GEN_3; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_5 = 5'h5 == io_idx_r1 ? gpr_5 : _GEN_4; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_6 = 5'h6 == io_idx_r1 ? gpr_6 : _GEN_5; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_7 = 5'h7 == io_idx_r1 ? gpr_7 : _GEN_6; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_8 = 5'h8 == io_idx_r1 ? gpr_8 : _GEN_7; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_9 = 5'h9 == io_idx_r1 ? gpr_9 : _GEN_8; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_10 = 5'ha == io_idx_r1 ? gpr_10 : _GEN_9; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_11 = 5'hb == io_idx_r1 ? gpr_11 : _GEN_10; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_12 = 5'hc == io_idx_r1 ? gpr_12 : _GEN_11; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_13 = 5'hd == io_idx_r1 ? gpr_13 : _GEN_12; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_14 = 5'he == io_idx_r1 ? gpr_14 : _GEN_13; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_15 = 5'hf == io_idx_r1 ? gpr_15 : _GEN_14; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_16 = 5'h10 == io_idx_r1 ? gpr_16 : _GEN_15; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_17 = 5'h11 == io_idx_r1 ? gpr_17 : _GEN_16; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_18 = 5'h12 == io_idx_r1 ? gpr_18 : _GEN_17; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_19 = 5'h13 == io_idx_r1 ? gpr_19 : _GEN_18; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_20 = 5'h14 == io_idx_r1 ? gpr_20 : _GEN_19; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_21 = 5'h15 == io_idx_r1 ? gpr_21 : _GEN_20; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_22 = 5'h16 == io_idx_r1 ? gpr_22 : _GEN_21; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_23 = 5'h17 == io_idx_r1 ? gpr_23 : _GEN_22; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_24 = 5'h18 == io_idx_r1 ? gpr_24 : _GEN_23; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_25 = 5'h19 == io_idx_r1 ? gpr_25 : _GEN_24; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_26 = 5'h1a == io_idx_r1 ? gpr_26 : _GEN_25; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_27 = 5'h1b == io_idx_r1 ? gpr_27 : _GEN_26; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_28 = 5'h1c == io_idx_r1 ? gpr_28 : _GEN_27; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_29 = 5'h1d == io_idx_r1 ? gpr_29 : _GEN_28; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_30 = 5'h1e == io_idx_r1 ? gpr_30 : _GEN_29; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_31 = 5'h1f == io_idx_r1 ? gpr_31 : _GEN_30; // @[GPR.scala 18:19 GPR.scala 18:19]
  wire [63:0] _GEN_33 = 5'h1 == io_idx_r2 ? gpr_1 : 64'h0; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_34 = 5'h2 == io_idx_r2 ? gpr_2 : _GEN_33; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_35 = 5'h3 == io_idx_r2 ? gpr_3 : _GEN_34; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_36 = 5'h4 == io_idx_r2 ? gpr_4 : _GEN_35; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_37 = 5'h5 == io_idx_r2 ? gpr_5 : _GEN_36; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_38 = 5'h6 == io_idx_r2 ? gpr_6 : _GEN_37; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_39 = 5'h7 == io_idx_r2 ? gpr_7 : _GEN_38; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_40 = 5'h8 == io_idx_r2 ? gpr_8 : _GEN_39; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_41 = 5'h9 == io_idx_r2 ? gpr_9 : _GEN_40; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_42 = 5'ha == io_idx_r2 ? gpr_10 : _GEN_41; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_43 = 5'hb == io_idx_r2 ? gpr_11 : _GEN_42; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_44 = 5'hc == io_idx_r2 ? gpr_12 : _GEN_43; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_45 = 5'hd == io_idx_r2 ? gpr_13 : _GEN_44; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_46 = 5'he == io_idx_r2 ? gpr_14 : _GEN_45; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_47 = 5'hf == io_idx_r2 ? gpr_15 : _GEN_46; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_48 = 5'h10 == io_idx_r2 ? gpr_16 : _GEN_47; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_49 = 5'h11 == io_idx_r2 ? gpr_17 : _GEN_48; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_50 = 5'h12 == io_idx_r2 ? gpr_18 : _GEN_49; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_51 = 5'h13 == io_idx_r2 ? gpr_19 : _GEN_50; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_52 = 5'h14 == io_idx_r2 ? gpr_20 : _GEN_51; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_53 = 5'h15 == io_idx_r2 ? gpr_21 : _GEN_52; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_54 = 5'h16 == io_idx_r2 ? gpr_22 : _GEN_53; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_55 = 5'h17 == io_idx_r2 ? gpr_23 : _GEN_54; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_56 = 5'h18 == io_idx_r2 ? gpr_24 : _GEN_55; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_57 = 5'h19 == io_idx_r2 ? gpr_25 : _GEN_56; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_58 = 5'h1a == io_idx_r2 ? gpr_26 : _GEN_57; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_59 = 5'h1b == io_idx_r2 ? gpr_27 : _GEN_58; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_60 = 5'h1c == io_idx_r2 ? gpr_28 : _GEN_59; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_61 = 5'h1d == io_idx_r2 ? gpr_29 : _GEN_60; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_62 = 5'h1e == io_idx_r2 ? gpr_30 : _GEN_61; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_63 = 5'h1f == io_idx_r2 ? gpr_31 : _GEN_62; // @[GPR.scala 19:19 GPR.scala 19:19]
  wire [63:0] _GEN_65 = 5'h1 == io_idx_w ? gpr_1 : 64'h0; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_66 = 5'h2 == io_idx_w ? gpr_2 : _GEN_65; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_67 = 5'h3 == io_idx_w ? gpr_3 : _GEN_66; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_68 = 5'h4 == io_idx_w ? gpr_4 : _GEN_67; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_69 = 5'h5 == io_idx_w ? gpr_5 : _GEN_68; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_70 = 5'h6 == io_idx_w ? gpr_6 : _GEN_69; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_71 = 5'h7 == io_idx_w ? gpr_7 : _GEN_70; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_72 = 5'h8 == io_idx_w ? gpr_8 : _GEN_71; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_73 = 5'h9 == io_idx_w ? gpr_9 : _GEN_72; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_74 = 5'ha == io_idx_w ? gpr_10 : _GEN_73; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_75 = 5'hb == io_idx_w ? gpr_11 : _GEN_74; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_76 = 5'hc == io_idx_w ? gpr_12 : _GEN_75; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_77 = 5'hd == io_idx_w ? gpr_13 : _GEN_76; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_78 = 5'he == io_idx_w ? gpr_14 : _GEN_77; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_79 = 5'hf == io_idx_w ? gpr_15 : _GEN_78; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_80 = 5'h10 == io_idx_w ? gpr_16 : _GEN_79; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_81 = 5'h11 == io_idx_w ? gpr_17 : _GEN_80; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_82 = 5'h12 == io_idx_w ? gpr_18 : _GEN_81; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_83 = 5'h13 == io_idx_w ? gpr_19 : _GEN_82; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_84 = 5'h14 == io_idx_w ? gpr_20 : _GEN_83; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_85 = 5'h15 == io_idx_w ? gpr_21 : _GEN_84; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_86 = 5'h16 == io_idx_w ? gpr_22 : _GEN_85; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_87 = 5'h17 == io_idx_w ? gpr_23 : _GEN_86; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_88 = 5'h18 == io_idx_w ? gpr_24 : _GEN_87; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_89 = 5'h19 == io_idx_w ? gpr_25 : _GEN_88; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_90 = 5'h1a == io_idx_w ? gpr_26 : _GEN_89; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_91 = 5'h1b == io_idx_w ? gpr_27 : _GEN_90; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_92 = 5'h1c == io_idx_w ? gpr_28 : _GEN_91; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_93 = 5'h1d == io_idx_w ? gpr_29 : _GEN_92; // @[GPR.scala 20:23 GPR.scala 20:23]
  wire [63:0] _GEN_94 = 5'h1e == io_idx_w ? gpr_30 : _GEN_93; // @[GPR.scala 20:23 GPR.scala 20:23]
  print_gpr p ( // @[GPR.scala 23:17]
    .rf_0(p_rf_0),
    .rf_1(p_rf_1),
    .rf_2(p_rf_2),
    .rf_3(p_rf_3),
    .rf_4(p_rf_4),
    .rf_5(p_rf_5),
    .rf_6(p_rf_6),
    .rf_7(p_rf_7),
    .rf_8(p_rf_8),
    .rf_9(p_rf_9),
    .rf_10(p_rf_10),
    .rf_11(p_rf_11),
    .rf_12(p_rf_12),
    .rf_13(p_rf_13),
    .rf_14(p_rf_14),
    .rf_15(p_rf_15),
    .rf_16(p_rf_16),
    .rf_17(p_rf_17),
    .rf_18(p_rf_18),
    .rf_19(p_rf_19),
    .rf_20(p_rf_20),
    .rf_21(p_rf_21),
    .rf_22(p_rf_22),
    .rf_23(p_rf_23),
    .rf_24(p_rf_24),
    .rf_25(p_rf_25),
    .rf_26(p_rf_26),
    .rf_27(p_rf_27),
    .rf_28(p_rf_28),
    .rf_29(p_rf_29),
    .rf_30(p_rf_30),
    .rf_31(p_rf_31)
  );
  assign io_val_r1 = io_en_r1 ? _GEN_31 : 64'h0; // @[GPR.scala 18:19]
  assign io_val_r2 = io_en_r2 ? _GEN_63 : 64'h0; // @[GPR.scala 19:19]
  assign p_rf_0 = 64'h0; // @[GPR.scala 24:12]
  assign p_rf_1 = gpr_1; // @[GPR.scala 24:12]
  assign p_rf_2 = gpr_2; // @[GPR.scala 24:12]
  assign p_rf_3 = gpr_3; // @[GPR.scala 24:12]
  assign p_rf_4 = gpr_4; // @[GPR.scala 24:12]
  assign p_rf_5 = gpr_5; // @[GPR.scala 24:12]
  assign p_rf_6 = gpr_6; // @[GPR.scala 24:12]
  assign p_rf_7 = gpr_7; // @[GPR.scala 24:12]
  assign p_rf_8 = gpr_8; // @[GPR.scala 24:12]
  assign p_rf_9 = gpr_9; // @[GPR.scala 24:12]
  assign p_rf_10 = gpr_10; // @[GPR.scala 24:12]
  assign p_rf_11 = gpr_11; // @[GPR.scala 24:12]
  assign p_rf_12 = gpr_12; // @[GPR.scala 24:12]
  assign p_rf_13 = gpr_13; // @[GPR.scala 24:12]
  assign p_rf_14 = gpr_14; // @[GPR.scala 24:12]
  assign p_rf_15 = gpr_15; // @[GPR.scala 24:12]
  assign p_rf_16 = gpr_16; // @[GPR.scala 24:12]
  assign p_rf_17 = gpr_17; // @[GPR.scala 24:12]
  assign p_rf_18 = gpr_18; // @[GPR.scala 24:12]
  assign p_rf_19 = gpr_19; // @[GPR.scala 24:12]
  assign p_rf_20 = gpr_20; // @[GPR.scala 24:12]
  assign p_rf_21 = gpr_21; // @[GPR.scala 24:12]
  assign p_rf_22 = gpr_22; // @[GPR.scala 24:12]
  assign p_rf_23 = gpr_23; // @[GPR.scala 24:12]
  assign p_rf_24 = gpr_24; // @[GPR.scala 24:12]
  assign p_rf_25 = gpr_25; // @[GPR.scala 24:12]
  assign p_rf_26 = gpr_26; // @[GPR.scala 24:12]
  assign p_rf_27 = gpr_27; // @[GPR.scala 24:12]
  assign p_rf_28 = gpr_28; // @[GPR.scala 24:12]
  assign p_rf_29 = gpr_29; // @[GPR.scala 24:12]
  assign p_rf_30 = gpr_30; // @[GPR.scala 24:12]
  assign p_rf_31 = gpr_31; // @[GPR.scala 24:12]
  always @(posedge clock) begin
    if (reset) begin // @[GPR.scala 17:20]
      gpr_1 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h1 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_1 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_1 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_1 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_2 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h2 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_2 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_2 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_2 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_3 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h3 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_3 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_3 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_3 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_4 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h4 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_4 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_4 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_4 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_5 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h5 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_5 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_5 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_5 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_6 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h6 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_6 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_6 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_6 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_7 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h7 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_7 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_7 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_7 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_8 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h8 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_8 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_8 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_8 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_9 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h9 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_9 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_9 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_9 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_10 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'ha == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_10 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_10 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_10 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_11 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'hb == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_11 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_11 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_11 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_12 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'hc == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_12 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_12 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_12 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_13 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'hd == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_13 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_13 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_13 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_14 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'he == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_14 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_14 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_14 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_15 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'hf == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_15 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_15 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_15 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_16 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h10 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_16 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_16 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_16 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_17 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h11 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_17 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_17 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_17 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_18 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h12 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_18 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_18 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_18 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_19 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h13 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_19 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_19 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_19 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_20 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h14 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_20 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_20 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_20 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_21 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h15 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_21 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_21 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_21 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_22 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h16 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_22 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_22 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_22 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_23 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h17 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_23 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_23 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_23 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_24 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h18 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_24 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_24 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_24 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_25 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h19 == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_25 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_25 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_25 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_26 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h1a == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_26 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_26 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_26 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_27 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h1b == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_27 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_27 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_27 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_28 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h1c == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_28 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_28 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_28 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_29 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h1d == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_29 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_29 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_29 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_30 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h1e == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_30 <= io_val_w;
      end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:23]
        gpr_30 <= gpr_31; // @[GPR.scala 20:23]
      end else begin
        gpr_30 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 17:20]
      gpr_31 <= 64'h0; // @[GPR.scala 17:20]
    end else if (5'h1f == io_idx_w) begin // @[GPR.scala 20:18]
      if (io_en_w) begin // @[GPR.scala 20:23]
        gpr_31 <= io_val_w;
      end else if (!(5'h1f == io_idx_w)) begin // @[GPR.scala 20:23]
        gpr_31 <= _GEN_94;
      end
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
  _RAND_0 = {2{`RANDOM}};
  gpr_1 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  gpr_2 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  gpr_3 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  gpr_4 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  gpr_5 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  gpr_6 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  gpr_7 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  gpr_8 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  gpr_9 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  gpr_10 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  gpr_11 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  gpr_12 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  gpr_13 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  gpr_14 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  gpr_15 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  gpr_16 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  gpr_17 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  gpr_18 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  gpr_19 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  gpr_20 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  gpr_21 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  gpr_22 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  gpr_23 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  gpr_24 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  gpr_25 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  gpr_26 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  gpr_27 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  gpr_28 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  gpr_29 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  gpr_30 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  gpr_31 = _RAND_30[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ALU(
  input  [63:0] io_src1,
  input  [63:0] io_src2,
  input  [11:0] io_op,
  output [63:0] io_result
);
  wire  _adder_b_T_4 = io_op[1] | io_op[8] | io_op[9]; // @[ALU.scala 21:35]
  wire [63:0] _adder_b_T_5 = ~io_src2; // @[ALU.scala 21:45]
  wire [63:0] adder_b = io_op[1] | io_op[8] | io_op[9] ? _adder_b_T_5 : io_src2; // @[ALU.scala 21:17]
  wire [64:0] _sum_T = io_src1 + adder_b; // @[ALU.scala 23:17]
  wire [64:0] _GEN_0 = {{64'd0}, _adder_b_T_4}; // @[ALU.scala 23:26]
  wire [65:0] _sum_T_1 = _sum_T + _GEN_0; // @[ALU.scala 23:26]
  wire [64:0] sum = _sum_T_1[64:0]; // @[ALU.scala 17:17 ALU.scala 23:8]
  wire  adder_cout = sum[64]; // @[ALU.scala 24:20]
  wire [63:0] adder_result = sum[63:0]; // @[ALU.scala 25:22]
  wire  slt_result_lo = io_src1[63] & ~io_src2[63] | ~(io_src1[63] ^ io_src2[63]) & adder_result[63]; // @[ALU.scala 27:61]
  wire [63:0] slt_result = {63'h0,slt_result_lo}; // @[Cat.scala 30:58]
  wire  sltu_result_lo = ~adder_cout; // @[ALU.scala 28:35]
  wire [63:0] sltu_result = {63'h0,sltu_result_lo}; // @[Cat.scala 30:58]
  wire [63:0] _io_result_T_4 = io_src1 & io_src2; // @[ALU.scala 33:36]
  wire [63:0] _io_result_T_6 = io_src1 | io_src2; // @[ALU.scala 34:36]
  wire [63:0] _io_result_T_8 = io_src1 ^ io_src2; // @[ALU.scala 35:36]
  wire [94:0] _GEN_1 = {{31'd0}, io_src1}; // @[ALU.scala 36:37]
  wire [94:0] _io_result_T_11 = _GEN_1 << io_src2[4:0]; // @[ALU.scala 36:37]
  wire [63:0] _io_result_T_15 = io_src1 >> io_src2[4:0]; // @[ALU.scala 37:36]
  wire [63:0] _io_result_T_20 = $signed(io_src1) >>> io_src2[4:0]; // @[ALU.scala 38:64]
  wire [63:0] _io_result_T_25 = adder_result & 64'hfffffffffffffffe; // @[ALU.scala 41:42]
  wire [63:0] _io_result_T_26 = io_op[10] ? _io_result_T_25 : 64'hffffffffffffffff; // @[ALU.scala 41:19]
  wire [63:0] _io_result_T_27 = io_op[9] ? sltu_result : _io_result_T_26; // @[ALU.scala 40:19]
  wire [63:0] _io_result_T_28 = io_op[8] ? slt_result : _io_result_T_27; // @[ALU.scala 39:19]
  wire [63:0] _io_result_T_29 = io_op[7] ? _io_result_T_20 : _io_result_T_28; // @[ALU.scala 38:19]
  wire [63:0] _io_result_T_30 = io_op[6] ? _io_result_T_15 : _io_result_T_29; // @[ALU.scala 37:19]
  wire [63:0] _io_result_T_31 = io_op[5] ? _io_result_T_11[63:0] : _io_result_T_30; // @[ALU.scala 36:19]
  wire [63:0] _io_result_T_32 = io_op[4] ? _io_result_T_8 : _io_result_T_31; // @[ALU.scala 35:19]
  wire [63:0] _io_result_T_33 = io_op[3] ? _io_result_T_6 : _io_result_T_32; // @[ALU.scala 34:19]
  wire [63:0] _io_result_T_34 = io_op[2] ? _io_result_T_4 : _io_result_T_33; // @[ALU.scala 33:19]
  assign io_result = io_op[0] | io_op[1] ? adder_result : _io_result_T_34; // @[ALU.scala 32:19]
endmodule
module EXU(
  input         clock,
  input         reset,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rs2,
  input  [4:0]  io_rd,
  input  [63:0] io_imm,
  input  [63:0] io_op,
  input  [5:0]  io_typ,
  input  [63:0] io_pc,
  output [63:0] io_pc_dnpc,
  output [63:0] io_result
);
  wire  ebreak1_en_break; // @[EXU.scala 18:25]
  wire  ebreak1_clk; // @[EXU.scala 18:25]
  wire  gpr_clock; // @[EXU.scala 27:21]
  wire  gpr_reset; // @[EXU.scala 27:21]
  wire [4:0] gpr_io_idx_r1; // @[EXU.scala 27:21]
  wire [4:0] gpr_io_idx_r2; // @[EXU.scala 27:21]
  wire [4:0] gpr_io_idx_w; // @[EXU.scala 27:21]
  wire  gpr_io_en_w; // @[EXU.scala 27:21]
  wire  gpr_io_en_r1; // @[EXU.scala 27:21]
  wire  gpr_io_en_r2; // @[EXU.scala 27:21]
  wire [63:0] gpr_io_val_w; // @[EXU.scala 27:21]
  wire [63:0] gpr_io_val_r1; // @[EXU.scala 27:21]
  wire [63:0] gpr_io_val_r2; // @[EXU.scala 27:21]
  wire [63:0] alu_dest_io_src1; // @[EXU.scala 28:26]
  wire [63:0] alu_dest_io_src2; // @[EXU.scala 28:26]
  wire [11:0] alu_dest_io_op; // @[EXU.scala 28:26]
  wire [63:0] alu_dest_io_result; // @[EXU.scala 28:26]
  wire [63:0] alu_pc_io_src1; // @[EXU.scala 29:24]
  wire [63:0] alu_pc_io_src2; // @[EXU.scala 29:24]
  wire [11:0] alu_pc_io_op; // @[EXU.scala 29:24]
  wire [63:0] alu_pc_io_result; // @[EXU.scala 29:24]
  wire [63:0] pmem_raddr; // @[EXU.scala 49:22]
  wire [63:0] pmem_rdata; // @[EXU.scala 49:22]
  wire [63:0] pmem_waddr; // @[EXU.scala 49:22]
  wire [63:0] pmem_wdata; // @[EXU.scala 49:22]
  wire [7:0] pmem_wmask; // @[EXU.scala 49:22]
  wire  _gpr_io_en_r1_T_6 = io_typ[0] | io_typ[2] | io_typ[4] | io_typ[5]; // @[EXU.scala 30:55]
  wire  _gpr_io_en_r2_T_2 = io_typ[2] | io_typ[4]; // @[EXU.scala 31:35]
  wire  _gpr_io_en_r2_T_4 = io_typ[2] | io_typ[4] | io_typ[5]; // @[EXU.scala 31:45]
  wire [63:0] _src1_T_10 = io_typ[1] | io_typ[3] ? io_imm : 64'h0; // @[EXU.scala 38:14]
  wire [63:0] src1 = _gpr_io_en_r1_T_6 ? gpr_io_val_r1 : _src1_T_10; // @[EXU.scala 37:16]
  wire [63:0] _src2_T_6 = io_typ[0] ? io_imm : 64'h0; // @[EXU.scala 42:14]
  wire [63:0] src2 = _gpr_io_en_r2_T_4 ? gpr_io_val_r2 : _src2_T_6; // @[EXU.scala 41:16]
  wire [63:0] dest = _gpr_io_en_r2_T_2 ? io_imm : {{59'd0}, io_rd}; // @[EXU.scala 45:16]
  wire [63:0] _pmem_io_waddr_T_2 = src1 + dest; // @[EXU.scala 52:39]
  wire [63:0] _alu_dest_io_src1_T_8 = io_op[1] | io_op[5] ? src1 : 64'h0; // @[EXU.scala 57:28]
  wire [63:0] _alu_dest_io_src2_T_5 = io_op[5] ? src2 : 64'h0; // @[EXU.scala 61:28]
  wire [63:0] _alu_dest_io_src2_T_6 = io_op[3] | io_op[4] ? 64'h4 : _alu_dest_io_src2_T_5; // @[EXU.scala 60:28]
  wire [63:0] _alu_pc_io_src2_T_2 = io_op[4] ? src2 : 64'h4; // @[EXU.scala 70:26]
  wire [63:0] _alu_pc_io_op_T_1 = io_op[4] ? 64'h400 : 64'h1; // @[EXU.scala 72:26]
  ebreak ebreak1 ( // @[EXU.scala 18:25]
    .en_break(ebreak1_en_break),
    .clk(ebreak1_clk)
  );
  GPR gpr ( // @[EXU.scala 27:21]
    .clock(gpr_clock),
    .reset(gpr_reset),
    .io_idx_r1(gpr_io_idx_r1),
    .io_idx_r2(gpr_io_idx_r2),
    .io_idx_w(gpr_io_idx_w),
    .io_en_w(gpr_io_en_w),
    .io_en_r1(gpr_io_en_r1),
    .io_en_r2(gpr_io_en_r2),
    .io_val_w(gpr_io_val_w),
    .io_val_r1(gpr_io_val_r1),
    .io_val_r2(gpr_io_val_r2)
  );
  ALU alu_dest ( // @[EXU.scala 28:26]
    .io_src1(alu_dest_io_src1),
    .io_src2(alu_dest_io_src2),
    .io_op(alu_dest_io_op),
    .io_result(alu_dest_io_result)
  );
  ALU alu_pc ( // @[EXU.scala 29:24]
    .io_src1(alu_pc_io_src1),
    .io_src2(alu_pc_io_src2),
    .io_op(alu_pc_io_op),
    .io_result(alu_pc_io_result)
  );
  memory pmem ( // @[EXU.scala 49:22]
    .raddr(pmem_raddr),
    .rdata(pmem_rdata),
    .waddr(pmem_waddr),
    .wdata(pmem_wdata),
    .wmask(pmem_wmask)
  );
  assign io_pc_dnpc = alu_pc_io_result; // @[EXU.scala 74:17]
  assign io_result = io_op; // @[EXU.scala 66:16]
  assign ebreak1_en_break = io_op[63]; // @[EXU.scala 19:33]
  assign ebreak1_clk = clock; // @[EXU.scala 20:21]
  assign gpr_clock = clock;
  assign gpr_reset = reset;
  assign gpr_io_idx_r1 = io_rs1; // @[EXU.scala 33:20]
  assign gpr_io_idx_r2 = io_rs2; // @[EXU.scala 34:20]
  assign gpr_io_idx_w = dest[4:0]; // @[EXU.scala 35:19]
  assign gpr_io_en_w = io_typ[0] | io_typ[1] | io_typ[3] | io_typ[5]; // @[EXU.scala 32:54]
  assign gpr_io_en_r1 = io_typ[0] | io_typ[2] | io_typ[4] | io_typ[5]; // @[EXU.scala 30:55]
  assign gpr_io_en_r2 = io_typ[2] | io_typ[4] | io_typ[5]; // @[EXU.scala 31:45]
  assign gpr_io_val_w = alu_dest_io_result; // @[EXU.scala 65:19]
  assign alu_dest_io_src1 = io_op[0] | io_op[3] | io_op[4] ? io_pc : _alu_dest_io_src1_T_8; // @[EXU.scala 56:28]
  assign alu_dest_io_src2 = io_op[0] ? src1 : _alu_dest_io_src2_T_6; // @[EXU.scala 59:28]
  assign alu_dest_io_op = 12'h1; // @[EXU.scala 63:23]
  assign alu_pc_io_src1 = io_op[4] ? src1 : io_pc; // @[EXU.scala 68:26]
  assign alu_pc_io_src2 = io_op[3] ? src1 : _alu_pc_io_src2_T_2; // @[EXU.scala 69:26]
  assign alu_pc_io_op = _alu_pc_io_op_T_1[11:0]; // @[EXU.scala 72:19]
  assign pmem_raddr = 64'h0; // @[EXU.scala 50:20]
  assign pmem_waddr = io_op[2] ? _pmem_io_waddr_T_2 : 64'h0; // @[EXU.scala 52:25]
  assign pmem_wdata = io_op[2] ? src2 : 64'h0; // @[EXU.scala 53:25]
  assign pmem_wmask = io_op[2] ? 8'hff : 8'h0; // @[EXU.scala 54:25]
endmodule
module top(
  input         clock,
  input         reset,
  output [63:0] io_pc,
  output [63:0] io_result
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] ifu_pc; // @[top.scala 11:19]
  wire [31:0] ifu_inst; // @[top.scala 11:19]
  wire [31:0] idu_io_inst; // @[top.scala 12:19]
  wire [4:0] idu_io_rs1; // @[top.scala 12:19]
  wire [4:0] idu_io_rs2; // @[top.scala 12:19]
  wire [4:0] idu_io_rd; // @[top.scala 12:19]
  wire [63:0] idu_io_imm; // @[top.scala 12:19]
  wire [63:0] idu_io_op; // @[top.scala 12:19]
  wire [5:0] idu_io_typ; // @[top.scala 12:19]
  wire  exu_clock; // @[top.scala 13:19]
  wire  exu_reset; // @[top.scala 13:19]
  wire [4:0] exu_io_rs1; // @[top.scala 13:19]
  wire [4:0] exu_io_rs2; // @[top.scala 13:19]
  wire [4:0] exu_io_rd; // @[top.scala 13:19]
  wire [63:0] exu_io_imm; // @[top.scala 13:19]
  wire [63:0] exu_io_op; // @[top.scala 13:19]
  wire [5:0] exu_io_typ; // @[top.scala 13:19]
  wire [63:0] exu_io_pc; // @[top.scala 13:19]
  wire [63:0] exu_io_pc_dnpc; // @[top.scala 13:19]
  wire [63:0] exu_io_result; // @[top.scala 13:19]
  wire [63:0] it_pc; // @[top.scala 14:18]
  wire [31:0] it_inst; // @[top.scala 14:18]
  reg [63:0] pc; // @[top.scala 10:19]
  IFU ifu ( // @[top.scala 11:19]
    .pc(ifu_pc),
    .inst(ifu_inst)
  );
  IDU idu ( // @[top.scala 12:19]
    .io_inst(idu_io_inst),
    .io_rs1(idu_io_rs1),
    .io_rs2(idu_io_rs2),
    .io_rd(idu_io_rd),
    .io_imm(idu_io_imm),
    .io_op(idu_io_op),
    .io_typ(idu_io_typ)
  );
  EXU exu ( // @[top.scala 13:19]
    .clock(exu_clock),
    .reset(exu_reset),
    .io_rs1(exu_io_rs1),
    .io_rs2(exu_io_rs2),
    .io_rd(exu_io_rd),
    .io_imm(exu_io_imm),
    .io_op(exu_io_op),
    .io_typ(exu_io_typ),
    .io_pc(exu_io_pc),
    .io_pc_dnpc(exu_io_pc_dnpc),
    .io_result(exu_io_result)
  );
  itrace it ( // @[top.scala 14:18]
    .pc(it_pc),
    .inst(it_inst)
  );
  assign io_pc = pc; // @[top.scala 30:10]
  assign io_result = exu_io_result; // @[top.scala 29:14]
  assign ifu_pc = pc; // @[top.scala 16:14]
  assign idu_io_inst = ifu_inst; // @[top.scala 15:18 top.scala 17:9]
  assign exu_clock = clock;
  assign exu_reset = reset;
  assign exu_io_rs1 = idu_io_rs1; // @[top.scala 21:15]
  assign exu_io_rs2 = idu_io_rs2; // @[top.scala 22:15]
  assign exu_io_rd = idu_io_rd; // @[top.scala 23:14]
  assign exu_io_imm = idu_io_imm; // @[top.scala 24:15]
  assign exu_io_op = idu_io_op; // @[top.scala 25:14]
  assign exu_io_typ = idu_io_typ; // @[top.scala 26:15]
  assign exu_io_pc = pc; // @[top.scala 27:14]
  assign it_pc = pc; // @[top.scala 18:13]
  assign it_inst = ifu_inst; // @[top.scala 15:18 top.scala 17:9]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 10:19]
      pc <= 64'h80000000; // @[top.scala 10:19]
    end else begin
      pc <= exu_io_pc_dnpc; // @[top.scala 28:7]
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
  _RAND_0 = {2{`RANDOM}};
  pc = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

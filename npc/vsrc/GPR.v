module GPR(
  input         clock,
  input         reset,
  input  [4:0]  io_r_idx_r1,
  input  [4:0]  io_r_idx_r2,
  input         io_r_en_r1,
  input         io_r_en_r2,
  output [63:0] io_r_val_r1,
  output [63:0] io_r_val_r2,
  input  [4:0]  io_w_idx_w,
  input         io_w_en_w,
  input  [63:0] io_w_val_w
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
  wire [63:0] p_rf_0; // @[GPR.scala 31:17]
  wire [63:0] p_rf_1; // @[GPR.scala 31:17]
  wire [63:0] p_rf_2; // @[GPR.scala 31:17]
  wire [63:0] p_rf_3; // @[GPR.scala 31:17]
  wire [63:0] p_rf_4; // @[GPR.scala 31:17]
  wire [63:0] p_rf_5; // @[GPR.scala 31:17]
  wire [63:0] p_rf_6; // @[GPR.scala 31:17]
  wire [63:0] p_rf_7; // @[GPR.scala 31:17]
  wire [63:0] p_rf_8; // @[GPR.scala 31:17]
  wire [63:0] p_rf_9; // @[GPR.scala 31:17]
  wire [63:0] p_rf_10; // @[GPR.scala 31:17]
  wire [63:0] p_rf_11; // @[GPR.scala 31:17]
  wire [63:0] p_rf_12; // @[GPR.scala 31:17]
  wire [63:0] p_rf_13; // @[GPR.scala 31:17]
  wire [63:0] p_rf_14; // @[GPR.scala 31:17]
  wire [63:0] p_rf_15; // @[GPR.scala 31:17]
  wire [63:0] p_rf_16; // @[GPR.scala 31:17]
  wire [63:0] p_rf_17; // @[GPR.scala 31:17]
  wire [63:0] p_rf_18; // @[GPR.scala 31:17]
  wire [63:0] p_rf_19; // @[GPR.scala 31:17]
  wire [63:0] p_rf_20; // @[GPR.scala 31:17]
  wire [63:0] p_rf_21; // @[GPR.scala 31:17]
  wire [63:0] p_rf_22; // @[GPR.scala 31:17]
  wire [63:0] p_rf_23; // @[GPR.scala 31:17]
  wire [63:0] p_rf_24; // @[GPR.scala 31:17]
  wire [63:0] p_rf_25; // @[GPR.scala 31:17]
  wire [63:0] p_rf_26; // @[GPR.scala 31:17]
  wire [63:0] p_rf_27; // @[GPR.scala 31:17]
  wire [63:0] p_rf_28; // @[GPR.scala 31:17]
  wire [63:0] p_rf_29; // @[GPR.scala 31:17]
  wire [63:0] p_rf_30; // @[GPR.scala 31:17]
  wire [63:0] p_rf_31; // @[GPR.scala 31:17]
  reg [63:0] gpr_1; // @[GPR.scala 25:20]
  reg [63:0] gpr_2; // @[GPR.scala 25:20]
  reg [63:0] gpr_3; // @[GPR.scala 25:20]
  reg [63:0] gpr_4; // @[GPR.scala 25:20]
  reg [63:0] gpr_5; // @[GPR.scala 25:20]
  reg [63:0] gpr_6; // @[GPR.scala 25:20]
  reg [63:0] gpr_7; // @[GPR.scala 25:20]
  reg [63:0] gpr_8; // @[GPR.scala 25:20]
  reg [63:0] gpr_9; // @[GPR.scala 25:20]
  reg [63:0] gpr_10; // @[GPR.scala 25:20]
  reg [63:0] gpr_11; // @[GPR.scala 25:20]
  reg [63:0] gpr_12; // @[GPR.scala 25:20]
  reg [63:0] gpr_13; // @[GPR.scala 25:20]
  reg [63:0] gpr_14; // @[GPR.scala 25:20]
  reg [63:0] gpr_15; // @[GPR.scala 25:20]
  reg [63:0] gpr_16; // @[GPR.scala 25:20]
  reg [63:0] gpr_17; // @[GPR.scala 25:20]
  reg [63:0] gpr_18; // @[GPR.scala 25:20]
  reg [63:0] gpr_19; // @[GPR.scala 25:20]
  reg [63:0] gpr_20; // @[GPR.scala 25:20]
  reg [63:0] gpr_21; // @[GPR.scala 25:20]
  reg [63:0] gpr_22; // @[GPR.scala 25:20]
  reg [63:0] gpr_23; // @[GPR.scala 25:20]
  reg [63:0] gpr_24; // @[GPR.scala 25:20]
  reg [63:0] gpr_25; // @[GPR.scala 25:20]
  reg [63:0] gpr_26; // @[GPR.scala 25:20]
  reg [63:0] gpr_27; // @[GPR.scala 25:20]
  reg [63:0] gpr_28; // @[GPR.scala 25:20]
  reg [63:0] gpr_29; // @[GPR.scala 25:20]
  reg [63:0] gpr_30; // @[GPR.scala 25:20]
  reg [63:0] gpr_31; // @[GPR.scala 25:20]
  wire [63:0] _GEN_1 = 5'h1 == io_r_idx_r1 ? gpr_1 : 64'h0; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_2 = 5'h2 == io_r_idx_r1 ? gpr_2 : _GEN_1; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_3 = 5'h3 == io_r_idx_r1 ? gpr_3 : _GEN_2; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_4 = 5'h4 == io_r_idx_r1 ? gpr_4 : _GEN_3; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_5 = 5'h5 == io_r_idx_r1 ? gpr_5 : _GEN_4; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_6 = 5'h6 == io_r_idx_r1 ? gpr_6 : _GEN_5; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_7 = 5'h7 == io_r_idx_r1 ? gpr_7 : _GEN_6; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_8 = 5'h8 == io_r_idx_r1 ? gpr_8 : _GEN_7; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_9 = 5'h9 == io_r_idx_r1 ? gpr_9 : _GEN_8; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_10 = 5'ha == io_r_idx_r1 ? gpr_10 : _GEN_9; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_11 = 5'hb == io_r_idx_r1 ? gpr_11 : _GEN_10; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_12 = 5'hc == io_r_idx_r1 ? gpr_12 : _GEN_11; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_13 = 5'hd == io_r_idx_r1 ? gpr_13 : _GEN_12; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_14 = 5'he == io_r_idx_r1 ? gpr_14 : _GEN_13; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_15 = 5'hf == io_r_idx_r1 ? gpr_15 : _GEN_14; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_16 = 5'h10 == io_r_idx_r1 ? gpr_16 : _GEN_15; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_17 = 5'h11 == io_r_idx_r1 ? gpr_17 : _GEN_16; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_18 = 5'h12 == io_r_idx_r1 ? gpr_18 : _GEN_17; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_19 = 5'h13 == io_r_idx_r1 ? gpr_19 : _GEN_18; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_20 = 5'h14 == io_r_idx_r1 ? gpr_20 : _GEN_19; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_21 = 5'h15 == io_r_idx_r1 ? gpr_21 : _GEN_20; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_22 = 5'h16 == io_r_idx_r1 ? gpr_22 : _GEN_21; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_23 = 5'h17 == io_r_idx_r1 ? gpr_23 : _GEN_22; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_24 = 5'h18 == io_r_idx_r1 ? gpr_24 : _GEN_23; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_25 = 5'h19 == io_r_idx_r1 ? gpr_25 : _GEN_24; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_26 = 5'h1a == io_r_idx_r1 ? gpr_26 : _GEN_25; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_27 = 5'h1b == io_r_idx_r1 ? gpr_27 : _GEN_26; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_28 = 5'h1c == io_r_idx_r1 ? gpr_28 : _GEN_27; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_29 = 5'h1d == io_r_idx_r1 ? gpr_29 : _GEN_28; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_30 = 5'h1e == io_r_idx_r1 ? gpr_30 : _GEN_29; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_31 = 5'h1f == io_r_idx_r1 ? gpr_31 : _GEN_30; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_33 = 5'h1 == io_r_idx_r2 ? gpr_1 : 64'h0; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_34 = 5'h2 == io_r_idx_r2 ? gpr_2 : _GEN_33; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_35 = 5'h3 == io_r_idx_r2 ? gpr_3 : _GEN_34; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_36 = 5'h4 == io_r_idx_r2 ? gpr_4 : _GEN_35; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_37 = 5'h5 == io_r_idx_r2 ? gpr_5 : _GEN_36; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_38 = 5'h6 == io_r_idx_r2 ? gpr_6 : _GEN_37; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_39 = 5'h7 == io_r_idx_r2 ? gpr_7 : _GEN_38; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_40 = 5'h8 == io_r_idx_r2 ? gpr_8 : _GEN_39; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_41 = 5'h9 == io_r_idx_r2 ? gpr_9 : _GEN_40; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_42 = 5'ha == io_r_idx_r2 ? gpr_10 : _GEN_41; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_43 = 5'hb == io_r_idx_r2 ? gpr_11 : _GEN_42; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_44 = 5'hc == io_r_idx_r2 ? gpr_12 : _GEN_43; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_45 = 5'hd == io_r_idx_r2 ? gpr_13 : _GEN_44; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_46 = 5'he == io_r_idx_r2 ? gpr_14 : _GEN_45; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_47 = 5'hf == io_r_idx_r2 ? gpr_15 : _GEN_46; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_48 = 5'h10 == io_r_idx_r2 ? gpr_16 : _GEN_47; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_49 = 5'h11 == io_r_idx_r2 ? gpr_17 : _GEN_48; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_50 = 5'h12 == io_r_idx_r2 ? gpr_18 : _GEN_49; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_51 = 5'h13 == io_r_idx_r2 ? gpr_19 : _GEN_50; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_52 = 5'h14 == io_r_idx_r2 ? gpr_20 : _GEN_51; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_53 = 5'h15 == io_r_idx_r2 ? gpr_21 : _GEN_52; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_54 = 5'h16 == io_r_idx_r2 ? gpr_22 : _GEN_53; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_55 = 5'h17 == io_r_idx_r2 ? gpr_23 : _GEN_54; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_56 = 5'h18 == io_r_idx_r2 ? gpr_24 : _GEN_55; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_57 = 5'h19 == io_r_idx_r2 ? gpr_25 : _GEN_56; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_58 = 5'h1a == io_r_idx_r2 ? gpr_26 : _GEN_57; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_59 = 5'h1b == io_r_idx_r2 ? gpr_27 : _GEN_58; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_60 = 5'h1c == io_r_idx_r2 ? gpr_28 : _GEN_59; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_61 = 5'h1d == io_r_idx_r2 ? gpr_29 : _GEN_60; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_62 = 5'h1e == io_r_idx_r2 ? gpr_30 : _GEN_61; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_63 = 5'h1f == io_r_idx_r2 ? gpr_31 : _GEN_62; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_65 = 5'h1 == io_w_idx_w ? gpr_1 : 64'h0; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_66 = 5'h2 == io_w_idx_w ? gpr_2 : _GEN_65; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_67 = 5'h3 == io_w_idx_w ? gpr_3 : _GEN_66; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_68 = 5'h4 == io_w_idx_w ? gpr_4 : _GEN_67; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_69 = 5'h5 == io_w_idx_w ? gpr_5 : _GEN_68; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_70 = 5'h6 == io_w_idx_w ? gpr_6 : _GEN_69; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_71 = 5'h7 == io_w_idx_w ? gpr_7 : _GEN_70; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_72 = 5'h8 == io_w_idx_w ? gpr_8 : _GEN_71; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_73 = 5'h9 == io_w_idx_w ? gpr_9 : _GEN_72; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_74 = 5'ha == io_w_idx_w ? gpr_10 : _GEN_73; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_75 = 5'hb == io_w_idx_w ? gpr_11 : _GEN_74; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_76 = 5'hc == io_w_idx_w ? gpr_12 : _GEN_75; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_77 = 5'hd == io_w_idx_w ? gpr_13 : _GEN_76; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_78 = 5'he == io_w_idx_w ? gpr_14 : _GEN_77; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_79 = 5'hf == io_w_idx_w ? gpr_15 : _GEN_78; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_80 = 5'h10 == io_w_idx_w ? gpr_16 : _GEN_79; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_81 = 5'h11 == io_w_idx_w ? gpr_17 : _GEN_80; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_82 = 5'h12 == io_w_idx_w ? gpr_18 : _GEN_81; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_83 = 5'h13 == io_w_idx_w ? gpr_19 : _GEN_82; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_84 = 5'h14 == io_w_idx_w ? gpr_20 : _GEN_83; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_85 = 5'h15 == io_w_idx_w ? gpr_21 : _GEN_84; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_86 = 5'h16 == io_w_idx_w ? gpr_22 : _GEN_85; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_87 = 5'h17 == io_w_idx_w ? gpr_23 : _GEN_86; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_88 = 5'h18 == io_w_idx_w ? gpr_24 : _GEN_87; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_89 = 5'h19 == io_w_idx_w ? gpr_25 : _GEN_88; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_90 = 5'h1a == io_w_idx_w ? gpr_26 : _GEN_89; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_91 = 5'h1b == io_w_idx_w ? gpr_27 : _GEN_90; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_92 = 5'h1c == io_w_idx_w ? gpr_28 : _GEN_91; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_93 = 5'h1d == io_w_idx_w ? gpr_29 : _GEN_92; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_94 = 5'h1e == io_w_idx_w ? gpr_30 : _GEN_93; // @[GPR.scala 28:{25,25}]
  print_gpr p ( // @[GPR.scala 31:17]
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
  assign io_r_val_r1 = io_r_en_r1 ? _GEN_31 : 64'h0; // @[GPR.scala 26:21]
  assign io_r_val_r2 = io_r_en_r2 ? _GEN_63 : 64'h0; // @[GPR.scala 27:21]
  assign p_rf_0 = 64'h0; // @[GPR.scala 32:12]
  assign p_rf_1 = gpr_1; // @[GPR.scala 32:12]
  assign p_rf_2 = gpr_2; // @[GPR.scala 32:12]
  assign p_rf_3 = gpr_3; // @[GPR.scala 32:12]
  assign p_rf_4 = gpr_4; // @[GPR.scala 32:12]
  assign p_rf_5 = gpr_5; // @[GPR.scala 32:12]
  assign p_rf_6 = gpr_6; // @[GPR.scala 32:12]
  assign p_rf_7 = gpr_7; // @[GPR.scala 32:12]
  assign p_rf_8 = gpr_8; // @[GPR.scala 32:12]
  assign p_rf_9 = gpr_9; // @[GPR.scala 32:12]
  assign p_rf_10 = gpr_10; // @[GPR.scala 32:12]
  assign p_rf_11 = gpr_11; // @[GPR.scala 32:12]
  assign p_rf_12 = gpr_12; // @[GPR.scala 32:12]
  assign p_rf_13 = gpr_13; // @[GPR.scala 32:12]
  assign p_rf_14 = gpr_14; // @[GPR.scala 32:12]
  assign p_rf_15 = gpr_15; // @[GPR.scala 32:12]
  assign p_rf_16 = gpr_16; // @[GPR.scala 32:12]
  assign p_rf_17 = gpr_17; // @[GPR.scala 32:12]
  assign p_rf_18 = gpr_18; // @[GPR.scala 32:12]
  assign p_rf_19 = gpr_19; // @[GPR.scala 32:12]
  assign p_rf_20 = gpr_20; // @[GPR.scala 32:12]
  assign p_rf_21 = gpr_21; // @[GPR.scala 32:12]
  assign p_rf_22 = gpr_22; // @[GPR.scala 32:12]
  assign p_rf_23 = gpr_23; // @[GPR.scala 32:12]
  assign p_rf_24 = gpr_24; // @[GPR.scala 32:12]
  assign p_rf_25 = gpr_25; // @[GPR.scala 32:12]
  assign p_rf_26 = gpr_26; // @[GPR.scala 32:12]
  assign p_rf_27 = gpr_27; // @[GPR.scala 32:12]
  assign p_rf_28 = gpr_28; // @[GPR.scala 32:12]
  assign p_rf_29 = gpr_29; // @[GPR.scala 32:12]
  assign p_rf_30 = gpr_30; // @[GPR.scala 32:12]
  assign p_rf_31 = gpr_31; // @[GPR.scala 32:12]
  always @(posedge clock) begin
    if (reset) begin // @[GPR.scala 25:20]
      gpr_1 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_1 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_1 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_1 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_2 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h2 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_2 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_2 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_2 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_3 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h3 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_3 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_3 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_3 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_4 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h4 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_4 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_4 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_4 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_5 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h5 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_5 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_5 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_5 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_6 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h6 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_6 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_6 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_6 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_7 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h7 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_7 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_7 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_7 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_8 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h8 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_8 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_8 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_8 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_9 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h9 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_9 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_9 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_9 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_10 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'ha == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_10 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_10 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_10 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_11 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'hb == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_11 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_11 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_11 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_12 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'hc == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_12 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_12 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_12 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_13 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'hd == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_13 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_13 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_13 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_14 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'he == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_14 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_14 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_14 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_15 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'hf == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_15 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_15 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_15 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_16 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h10 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_16 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_16 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_16 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_17 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h11 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_17 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_17 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_17 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_18 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h12 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_18 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_18 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_18 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_19 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h13 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_19 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_19 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_19 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_20 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h14 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_20 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_20 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_20 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_21 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h15 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_21 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_21 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_21 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_22 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h16 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_22 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_22 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_22 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_23 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h17 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_23 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_23 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_23 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_24 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h18 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_24 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_24 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_24 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_25 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h19 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_25 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_25 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_25 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_26 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1a == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_26 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_26 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_26 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_27 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1b == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_27 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_27 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_27 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_28 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1c == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_28 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_28 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_28 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_29 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1d == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_29 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_29 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_29 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_30 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1e == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_30 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_30 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_30 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_31 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_31 <= io_w_val_w;
      end else if (!(5'h1f == io_w_idx_w)) begin // @[GPR.scala 28:25]
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

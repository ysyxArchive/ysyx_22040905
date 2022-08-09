/* verilator lint_off DECLFILENAME */
module IDU(
  input  [31:0] io_inst,
  output [4:0]  io_src1,
  output [4:0]  io_dest,
  output [63:0] io_imm,
  output [6:0]  io_op,
  output [2:0]  io_funct
);
  wire [51:0] io_imm_hi = io_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [11:0] io_imm_lo = io_inst[31:20]; // @[IDU.scala 16:45]
  assign io_src1 = io_inst[19:15]; // @[IDU.scala 18:21]
  assign io_dest = io_inst[11:7]; // @[IDU.scala 17:21]
  assign io_imm = {io_imm_hi,io_imm_lo}; // @[Cat.scala 30:58]
  assign io_op = io_inst[6:0]; // @[IDU.scala 14:19]
  assign io_funct = io_inst[14:12]; // @[IDU.scala 15:22]
endmodule
module GPR(
  input         clock,
  input         reset,
  input  [4:0]  io_idx_r1,
  input  [4:0]  io_idx_w,
  input         io_en_w,
  input         io_en_r1,
  input  [63:0] io_val_w,
  output [63:0] io_val_r1
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
  assign io_val_r1 = io_en_r1 ? _GEN_31 : 64'h0; // @[GPR.scala 18:19]
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
module EXU(
  input         clock,
  input         reset,
  input  [4:0]  io_src1,
  input  [4:0]  io_dest,
  input  [63:0] io_imm,
  input  [6:0]  io_op,
  input  [2:0]  io_funct,
  input  [63:0] io_pc,
  output [63:0] io_pc_dnpc,
  output [63:0] io_result
);
  wire  ebreak1_en_break; // @[EXU.scala 22:23]
  wire  ebreak1_clk; // @[EXU.scala 22:23]
  wire  gpr_clock; // @[EXU.scala 26:19]
  wire  gpr_reset; // @[EXU.scala 26:19]
  wire [4:0] gpr_io_idx_r1; // @[EXU.scala 26:19]
  wire [4:0] gpr_io_idx_w; // @[EXU.scala 26:19]
  wire  gpr_io_en_w; // @[EXU.scala 26:19]
  wire  gpr_io_en_r1; // @[EXU.scala 26:19]
  wire [63:0] gpr_io_val_w; // @[EXU.scala 26:19]
  wire [63:0] gpr_io_val_r1; // @[EXU.scala 26:19]
  wire  _inst_is_addi_T_1 = io_funct == 3'h0; // @[EXU.scala 19:50]
  wire  inst_is_addi = io_op == 7'h13 & io_funct == 3'h0; // @[EXU.scala 19:40]
  wire  inst_is_ebreak = io_imm[11:0] == 12'h1 & io_src1 == 5'h0 & _inst_is_addi_T_1 & io_dest == 5'h0 & io_op == 7'h73; // @[EXU.scala 20:119]
  wire [63:0] _gpr_io_val_w_T_1 = gpr_io_val_r1 + io_imm; // @[EXU.scala 33:49]
  wire [11:0] _io_result_T_2 = inst_is_ebreak ? 12'hfff : 12'h1f; // @[EXU.scala 36:19]
  ebreak ebreak1 ( // @[EXU.scala 22:23]
    .en_break(ebreak1_en_break),
    .clk(ebreak1_clk)
  );
  GPR gpr ( // @[EXU.scala 26:19]
    .clock(gpr_clock),
    .reset(gpr_reset),
    .io_idx_r1(gpr_io_idx_r1),
    .io_idx_w(gpr_io_idx_w),
    .io_en_w(gpr_io_en_w),
    .io_en_r1(gpr_io_en_r1),
    .io_val_w(gpr_io_val_w),
    .io_val_r1(gpr_io_val_r1)
  );
  assign io_pc_dnpc = io_pc + 64'h4; // @[EXU.scala 38:22]
  assign io_result = inst_is_addi ? _gpr_io_val_w_T_1 : {{52'd0}, _io_result_T_2}; // @[EXU.scala 35:19]
  assign ebreak1_en_break = io_imm[11:0] == 12'h1 & io_src1 == 5'h0 & _inst_is_addi_T_1 & io_dest == 5'h0 & io_op == 7'h73
    ; // @[EXU.scala 20:119]
  assign ebreak1_clk = clock; // @[EXU.scala 24:19]
  assign gpr_clock = clock;
  assign gpr_reset = reset;
  assign gpr_io_idx_r1 = inst_is_addi ? io_src1 : 5'h0; // @[EXU.scala 27:23]
  assign gpr_io_idx_w = inst_is_addi ? io_dest : 5'h0; // @[EXU.scala 29:22]
  assign gpr_io_en_w = io_op == 7'h13 & io_funct == 3'h0; // @[EXU.scala 19:40]
  assign gpr_io_en_r1 = io_op == 7'h13 & io_funct == 3'h0; // @[EXU.scala 19:40]
  assign gpr_io_val_w = inst_is_addi ? _gpr_io_val_w_T_1 : 64'h0; // @[EXU.scala 33:22]
endmodule
module top(
  input         clock,
  input         reset,
  input  [31:0] io_inst,
  output [63:0] io_pc,
  output [63:0] io_result
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] idu_io_inst; // @[top.scala 12:19]
  wire [4:0] idu_io_src1; // @[top.scala 12:19]
  wire [4:0] idu_io_dest; // @[top.scala 12:19]
  wire [63:0] idu_io_imm; // @[top.scala 12:19]
  wire [6:0] idu_io_op; // @[top.scala 12:19]
  wire [2:0] idu_io_funct; // @[top.scala 12:19]
  wire  exu_clock; // @[top.scala 13:19]
  wire  exu_reset; // @[top.scala 13:19]
  wire [4:0] exu_io_src1; // @[top.scala 13:19]
  wire [4:0] exu_io_dest; // @[top.scala 13:19]
  wire [63:0] exu_io_imm; // @[top.scala 13:19]
  wire [6:0] exu_io_op; // @[top.scala 13:19]
  wire [2:0] exu_io_funct; // @[top.scala 13:19]
  wire [63:0] exu_io_pc; // @[top.scala 13:19]
  wire [63:0] exu_io_pc_dnpc; // @[top.scala 13:19]
  wire [63:0] exu_io_result; // @[top.scala 13:19]
  reg [63:0] pc; // @[top.scala 11:19]
  IDU idu ( // @[top.scala 12:19]
    .io_inst(idu_io_inst),
    .io_src1(idu_io_src1),
    .io_dest(idu_io_dest),
    .io_imm(idu_io_imm),
    .io_op(idu_io_op),
    .io_funct(idu_io_funct)
  );
  EXU exu ( // @[top.scala 13:19]
    .clock(exu_clock),
    .reset(exu_reset),
    .io_src1(exu_io_src1),
    .io_dest(exu_io_dest),
    .io_imm(exu_io_imm),
    .io_op(exu_io_op),
    .io_funct(exu_io_funct),
    .io_pc(exu_io_pc),
    .io_pc_dnpc(exu_io_pc_dnpc),
    .io_result(exu_io_result)
  );
  assign io_pc = pc; // @[top.scala 23:10]
  assign io_result = exu_io_result; // @[top.scala 22:14]
  assign idu_io_inst = io_inst; // @[top.scala 14:16]
  assign exu_clock = clock;
  assign exu_reset = reset;
  assign exu_io_src1 = idu_io_src1; // @[top.scala 15:16]
  assign exu_io_dest = idu_io_dest; // @[top.scala 16:16]
  assign exu_io_imm = idu_io_imm; // @[top.scala 17:15]
  assign exu_io_op = idu_io_op; // @[top.scala 18:14]
  assign exu_io_funct = idu_io_funct; // @[top.scala 19:17]
  assign exu_io_pc = pc; // @[top.scala 20:14]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 11:19]
      pc <= 64'h80000000; // @[top.scala 11:19]
    end else begin
      pc <= exu_io_pc_dnpc; // @[top.scala 21:7]
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

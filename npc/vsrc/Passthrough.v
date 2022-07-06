module Passthrough(
  input         clock,
  input         reset,
  input  [3:0]  io_a,
  input  [3:0]  io_b,
  output        io_Overflow,
  output        io_Zero,
  output [3:0]  io_Result,
  output        io_Carry,
  input  [2:0]  io_op,
  output [23:0] io_bcd8seg
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [23:0] a; // @[Passthrough.scala 15:13]
  reg [23:0] b; // @[Passthrough.scala 16:13]
  wire [4:0] _io_Result_T = io_a + io_b; // @[Passthrough.scala 27:24]
  wire [3:0] _io_Result_T_1 = io_a + io_b; // @[Passthrough.scala 27:24]
  wire  _io_Overflow_T_5 = io_Result[3] != io_a[3]; // @[Passthrough.scala 28:56]
  wire [4:0] _GEN_36 = {{1'd0}, io_Result}; // @[Passthrough.scala 29:32]
  wire  _io_Zero_T = io_Result == 4'h0; // @[Passthrough.scala 30:28]
  wire [4:0] _io_Result_T_2 = io_a - io_b; // @[Passthrough.scala 32:24]
  wire [3:0] _io_Result_T_3 = io_a - io_b; // @[Passthrough.scala 32:24]
  wire [3:0] _io_Overflow_T_8 = 4'hf ^ io_b; // @[Passthrough.scala 33:47]
  wire [3:0] _io_Result_T_4 = ~io_a; // @[Passthrough.scala 37:21]
  wire [3:0] _io_Result_T_5 = io_a & io_b; // @[Passthrough.scala 39:24]
  wire [3:0] _io_Result_T_6 = io_a | io_b; // @[Passthrough.scala 41:24]
  wire [3:0] _io_Result_T_7 = io_a ^ io_b; // @[Passthrough.scala 43:24]
  wire [3:0] _T_10 = 4'h0 - 4'h8; // @[Passthrough.scala 45:23]
  wire [4:0] _T_11 = io_a[3] * _T_10; // @[Passthrough.scala 45:21]
  wire [4:0] _T_14 = io_a[2] * 4'h4; // @[Passthrough.scala 45:43]
  wire [4:0] _T_16 = _T_11 + _T_14; // @[Passthrough.scala 45:35]
  wire [2:0] _T_19 = io_a[1] * 2'h2; // @[Passthrough.scala 45:62]
  wire [4:0] _GEN_38 = {{2'd0}, _T_19}; // @[Passthrough.scala 45:54]
  wire [4:0] _T_21 = _T_16 + _GEN_38; // @[Passthrough.scala 45:54]
  wire [2:0] _T_24 = io_a[0] * 2'h1; // @[Passthrough.scala 45:81]
  wire [4:0] _GEN_39 = {{2'd0}, _T_24}; // @[Passthrough.scala 45:73]
  wire [4:0] _T_26 = _T_21 + _GEN_39; // @[Passthrough.scala 45:73]
  wire [4:0] _T_31 = io_b[3] * _T_10; // @[Passthrough.scala 45:100]
  wire [4:0] _T_34 = io_b[2] * 4'h4; // @[Passthrough.scala 45:122]
  wire [4:0] _T_36 = _T_31 + _T_34; // @[Passthrough.scala 45:114]
  wire [2:0] _T_39 = io_b[1] * 2'h2; // @[Passthrough.scala 45:141]
  wire [4:0] _GEN_40 = {{2'd0}, _T_39}; // @[Passthrough.scala 45:133]
  wire [4:0] _T_41 = _T_36 + _GEN_40; // @[Passthrough.scala 45:133]
  wire [2:0] _T_44 = io_b[0] * 2'h1; // @[Passthrough.scala 45:160]
  wire [4:0] _GEN_41 = {{2'd0}, _T_44}; // @[Passthrough.scala 45:152]
  wire [4:0] _T_46 = _T_41 + _GEN_41; // @[Passthrough.scala 45:152]
  wire  _T_47 = _T_26 < _T_46; // @[Passthrough.scala 45:92]
  wire  _T_48 = io_a == io_b; // @[Passthrough.scala 49:18]
  wire  _GEN_2 = io_op == 3'h6 ? _T_47 : _T_48; // @[Passthrough.scala 44:33]
  wire [3:0] _GEN_3 = io_op == 3'h5 ? _io_Result_T_7 : {{3'd0}, _GEN_2}; // @[Passthrough.scala 42:33 Passthrough.scala 43:18]
  wire [3:0] _GEN_4 = io_op == 3'h4 ? _io_Result_T_6 : _GEN_3; // @[Passthrough.scala 40:33 Passthrough.scala 41:18]
  wire [3:0] _GEN_5 = io_op == 3'h3 ? _io_Result_T_5 : _GEN_4; // @[Passthrough.scala 38:33 Passthrough.scala 39:18]
  wire [3:0] _GEN_6 = io_op == 3'h2 ? _io_Result_T_4 : _GEN_5; // @[Passthrough.scala 36:33 Passthrough.scala 37:18]
  wire [3:0] _GEN_7 = io_op == 3'h1 ? _io_Result_T_3 : _GEN_6; // @[Passthrough.scala 31:33 Passthrough.scala 32:18]
  wire  _GEN_8 = io_op == 3'h1 & (io_a[3] == _io_Overflow_T_8[3] & _io_Overflow_T_5); // @[Passthrough.scala 31:33 Passthrough.scala 33:21 Passthrough.scala 22:15]
  wire  _GEN_9 = io_op == 3'h1 & _io_Result_T_2 > _GEN_36; // @[Passthrough.scala 31:33 Passthrough.scala 34:17 Passthrough.scala 25:12]
  wire  _GEN_10 = io_op == 3'h1 ? _io_Zero_T : 1'h1; // @[Passthrough.scala 31:33 Passthrough.scala 35:16 Passthrough.scala 23:11]
  reg [3:0] r; // @[Passthrough.scala 53:14]
  wire [3:0] _r_T = ~io_Result; // @[Passthrough.scala 59:13]
  wire [3:0] _r_T_2 = _r_T + 4'h1; // @[Passthrough.scala 59:24]
  wire [3:0] _GEN_0 = r % 4'ha; // @[Passthrough.scala 62:11]
  wire [3:0] _T_51 = _GEN_0[3:0]; // @[Passthrough.scala 62:11]
  wire [23:0] _b_T = 24'hc0 ^ a; // @[Passthrough.scala 63:41]
  wire [23:0] _b_T_1 = 24'hf9 ^ a; // @[Passthrough.scala 65:41]
  wire [23:0] _b_T_2 = 24'ha4 ^ a; // @[Passthrough.scala 67:41]
  wire [23:0] _b_T_3 = 24'hb0 ^ a; // @[Passthrough.scala 69:41]
  wire [23:0] _b_T_4 = 24'h99 ^ a; // @[Passthrough.scala 71:41]
  wire [23:0] _b_T_5 = 24'h92 ^ a; // @[Passthrough.scala 73:41]
  wire [23:0] _b_T_6 = 24'h82 ^ a; // @[Passthrough.scala 75:41]
  wire [23:0] _b_T_7 = 24'hf8 ^ a; // @[Passthrough.scala 77:41]
  wire [23:0] _b_T_8 = 24'h80 ^ a; // @[Passthrough.scala 79:41]
  wire [23:0] _b_T_9 = 24'h90 ^ a; // @[Passthrough.scala 81:41]
  wire [23:0] _b_T_10 = 24'hff ^ a; // @[Passthrough.scala 83:41]
  wire [23:0] _GEN_17 = _T_51 == 4'h9 ? _b_T_9 : _b_T_10; // @[Passthrough.scala 80:29 Passthrough.scala 81:10 Passthrough.scala 83:10]
  wire [23:0] _GEN_18 = _T_51 == 4'h8 ? _b_T_8 : _GEN_17; // @[Passthrough.scala 78:29 Passthrough.scala 79:10]
  wire [23:0] _GEN_19 = _T_51 == 4'h7 ? _b_T_7 : _GEN_18; // @[Passthrough.scala 76:29 Passthrough.scala 77:10]
  wire [23:0] _GEN_20 = _T_51 == 4'h6 ? _b_T_6 : _GEN_19; // @[Passthrough.scala 74:29 Passthrough.scala 75:10]
  wire [23:0] _GEN_21 = _T_51 == 4'h5 ? _b_T_5 : _GEN_20; // @[Passthrough.scala 72:29 Passthrough.scala 73:10]
  wire [23:0] _GEN_22 = _T_51 == 4'h4 ? _b_T_4 : _GEN_21; // @[Passthrough.scala 70:29 Passthrough.scala 71:10]
  wire [3:0] _T_71 = r / 4'ha; // @[Passthrough.scala 85:11]
  wire [3:0] _GEN_1 = _T_71 % 4'ha; // @[Passthrough.scala 85:16]
  wire [3:0] _T_72 = _GEN_1[3:0]; // @[Passthrough.scala 85:16]
  wire [23:0] _io_bcd8seg_T = 24'hf900 ^ b; // @[Passthrough.scala 86:50]
  wire [23:0] _io_bcd8seg_T_1 = 24'ha400 ^ b; // @[Passthrough.scala 88:50]
  wire [23:0] _io_bcd8seg_T_2 = 24'hb000 ^ b; // @[Passthrough.scala 90:50]
  wire [23:0] _io_bcd8seg_T_3 = 24'h9900 ^ b; // @[Passthrough.scala 92:50]
  wire [23:0] _io_bcd8seg_T_4 = 24'h9280 ^ b; // @[Passthrough.scala 94:50]
  wire [23:0] _io_bcd8seg_T_5 = 24'h8200 ^ b; // @[Passthrough.scala 96:50]
  wire [23:0] _io_bcd8seg_T_6 = 24'hf800 ^ b; // @[Passthrough.scala 98:50]
  wire [23:0] _io_bcd8seg_T_7 = 24'h8000 ^ b; // @[Passthrough.scala 100:50]
  wire [23:0] _io_bcd8seg_T_8 = 24'h9000 ^ b; // @[Passthrough.scala 102:50]
  wire [23:0] _io_bcd8seg_T_9 = 24'hff00 ^ b; // @[Passthrough.scala 104:50]
  wire [23:0] _GEN_27 = _T_72 == 4'h9 ? _io_bcd8seg_T_8 : _io_bcd8seg_T_9; // @[Passthrough.scala 101:34 Passthrough.scala 102:19 Passthrough.scala 104:19]
  wire [23:0] _GEN_28 = _T_72 == 4'h8 ? _io_bcd8seg_T_7 : _GEN_27; // @[Passthrough.scala 99:34 Passthrough.scala 100:19]
  wire [23:0] _GEN_29 = _T_72 == 4'h7 ? _io_bcd8seg_T_6 : _GEN_28; // @[Passthrough.scala 97:34 Passthrough.scala 98:19]
  wire [23:0] _GEN_30 = _T_72 == 4'h6 ? _io_bcd8seg_T_5 : _GEN_29; // @[Passthrough.scala 95:34 Passthrough.scala 96:19]
  wire [23:0] _GEN_31 = _T_72 == 4'h5 ? _io_bcd8seg_T_4 : _GEN_30; // @[Passthrough.scala 93:34 Passthrough.scala 94:19]
  wire [23:0] _GEN_32 = _T_72 == 4'h4 ? _io_bcd8seg_T_3 : _GEN_31; // @[Passthrough.scala 91:34 Passthrough.scala 92:19]
  wire [23:0] _GEN_33 = _T_72 == 4'h3 ? _io_bcd8seg_T_2 : _GEN_32; // @[Passthrough.scala 89:34 Passthrough.scala 90:19]
  wire [23:0] _GEN_34 = _T_72 == 4'h2 ? _io_bcd8seg_T_1 : _GEN_33; // @[Passthrough.scala 87:34 Passthrough.scala 88:19]
  assign io_Overflow = io_op == 3'h0 ? io_a[3] == io_b[3] & io_Result[3] != io_a[3] : _GEN_8; // @[Passthrough.scala 26:27 Passthrough.scala 28:20]
  assign io_Zero = io_op == 3'h0 ? io_Result == 4'h0 : _GEN_10; // @[Passthrough.scala 26:27 Passthrough.scala 30:16]
  assign io_Result = io_op == 3'h0 ? _io_Result_T_1 : _GEN_7; // @[Passthrough.scala 26:27 Passthrough.scala 27:18]
  assign io_Carry = io_op == 3'h0 ? _io_Result_T > _GEN_36 : _GEN_9; // @[Passthrough.scala 26:27 Passthrough.scala 29:17]
  assign io_bcd8seg = _T_72 == 4'h1 ? _io_bcd8seg_T : _GEN_34; // @[Passthrough.scala 85:28 Passthrough.scala 86:19]
  always @(posedge clock) begin
    if (~io_Result[3]) begin // @[Passthrough.scala 55:29]
      a <= 24'hff0000; // @[Passthrough.scala 56:10]
    end else begin
      a <= 24'hbf0000; // @[Passthrough.scala 58:10]
    end
    if (_T_51 == 4'h0) begin // @[Passthrough.scala 62:23]
      b <= _b_T; // @[Passthrough.scala 63:10]
    end else if (_T_51 == 4'h1) begin // @[Passthrough.scala 64:29]
      b <= _b_T_1; // @[Passthrough.scala 65:10]
    end else if (_T_51 == 4'h2) begin // @[Passthrough.scala 66:29]
      b <= _b_T_2; // @[Passthrough.scala 67:10]
    end else if (_T_51 == 4'h3) begin // @[Passthrough.scala 68:29]
      b <= _b_T_3; // @[Passthrough.scala 69:10]
    end else begin
      b <= _GEN_22;
    end
    if (~io_Result[3]) begin // @[Passthrough.scala 55:29]
      r <= io_Result; // @[Passthrough.scala 54:6]
    end else begin
      r <= _r_T_2; // @[Passthrough.scala 59:10]
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
  a = _RAND_0[23:0];
  _RAND_1 = {1{`RANDOM}};
  b = _RAND_1[23:0];
  _RAND_2 = {1{`RANDOM}};
  r = _RAND_2[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

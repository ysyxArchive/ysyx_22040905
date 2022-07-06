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
`endif // RANDOMIZE_REG_INIT
  reg [23:0] b; // @[Passthrough.scala 16:13]
  reg [23:0] c; // @[Passthrough.scala 17:13]
  wire [4:0] _io_Result_T = io_a + io_b; // @[Passthrough.scala 27:24]
  wire [3:0] _io_Result_T_1 = io_a + io_b; // @[Passthrough.scala 27:24]
  wire  _io_Overflow_T_5 = io_Result[3] != io_a[3]; // @[Passthrough.scala 28:56]
  wire [4:0] _GEN_37 = {{1'd0}, io_Result}; // @[Passthrough.scala 29:32]
  wire  _io_Zero_T = io_Result == 4'h0; // @[Passthrough.scala 30:28]
  wire [4:0] _io_Result_T_2 = io_a - io_b; // @[Passthrough.scala 32:24]
  wire [3:0] _io_Result_T_3 = io_a - io_b; // @[Passthrough.scala 32:24]
  wire [3:0] _io_Overflow_T_8 = 4'hf ^ io_b; // @[Passthrough.scala 33:47]
  wire [3:0] _io_Result_T_4 = ~io_a; // @[Passthrough.scala 37:21]
  wire [3:0] _io_Result_T_5 = io_a & io_b; // @[Passthrough.scala 39:24]
  wire [3:0] _io_Result_T_6 = io_a | io_b; // @[Passthrough.scala 41:24]
  wire [3:0] _io_Result_T_7 = io_a ^ io_b; // @[Passthrough.scala 43:24]
  wire  _T_7 = io_a < io_b; // @[Passthrough.scala 45:18]
  wire  _T_8 = io_a == io_b; // @[Passthrough.scala 49:18]
  wire  _GEN_2 = io_op == 3'h6 ? _T_7 : _T_8; // @[Passthrough.scala 44:33]
  wire [3:0] _GEN_3 = io_op == 3'h5 ? _io_Result_T_7 : {{3'd0}, _GEN_2}; // @[Passthrough.scala 42:33 Passthrough.scala 43:18]
  wire [3:0] _GEN_4 = io_op == 3'h4 ? _io_Result_T_6 : _GEN_3; // @[Passthrough.scala 40:33 Passthrough.scala 41:18]
  wire [3:0] _GEN_5 = io_op == 3'h3 ? _io_Result_T_5 : _GEN_4; // @[Passthrough.scala 38:33 Passthrough.scala 39:18]
  wire [3:0] _GEN_6 = io_op == 3'h2 ? _io_Result_T_4 : _GEN_5; // @[Passthrough.scala 36:33 Passthrough.scala 37:18]
  wire [3:0] _GEN_7 = io_op == 3'h1 ? _io_Result_T_3 : _GEN_6; // @[Passthrough.scala 31:33 Passthrough.scala 32:18]
  wire  _GEN_8 = io_op == 3'h1 & (io_a[3] == _io_Overflow_T_8[3] & _io_Overflow_T_5); // @[Passthrough.scala 31:33 Passthrough.scala 33:21 Passthrough.scala 22:15]
  wire  _GEN_9 = io_op == 3'h1 & _io_Result_T_2 > _GEN_37; // @[Passthrough.scala 31:33 Passthrough.scala 34:17 Passthrough.scala 25:12]
  wire  _GEN_10 = io_op == 3'h1 ? _io_Zero_T : 1'h1; // @[Passthrough.scala 31:33 Passthrough.scala 35:16 Passthrough.scala 23:11]
  wire [3:0] _GEN_0 = io_Result % 4'ha; // @[Passthrough.scala 54:19]
  wire [3:0] _T_9 = _GEN_0[3:0]; // @[Passthrough.scala 54:19]
  wire  _T_10 = _T_9 == 4'h0; // @[Passthrough.scala 54:24]
  wire [23:0] _GEN_15 = _T_9 == 4'h9 ? 24'h90 : 24'hff; // @[Passthrough.scala 72:37 Passthrough.scala 73:10 Passthrough.scala 75:10]
  wire [23:0] _GEN_16 = _T_9 == 4'h8 ? 24'h80 : _GEN_15; // @[Passthrough.scala 70:37 Passthrough.scala 71:10]
  wire [23:0] _GEN_17 = _T_9 == 4'h7 ? 24'hf8 : _GEN_16; // @[Passthrough.scala 68:37 Passthrough.scala 69:10]
  wire [23:0] _GEN_18 = _T_9 == 4'h6 ? 24'h82 : _GEN_17; // @[Passthrough.scala 66:37 Passthrough.scala 67:10]
  wire [23:0] _GEN_19 = _T_9 == 4'h5 ? 24'hed : _GEN_18; // @[Passthrough.scala 64:37 Passthrough.scala 65:10]
  wire [23:0] _GEN_20 = _T_9 == 4'h4 ? 24'h99 : _GEN_19; // @[Passthrough.scala 62:37 Passthrough.scala 63:10]
  wire [3:0] _T_31 = io_Result / 4'ha; // @[Passthrough.scala 79:25]
  wire [3:0] _GEN_1 = _T_31 % 4'ha; // @[Passthrough.scala 79:30]
  wire [3:0] _T_32 = _GEN_1[3:0]; // @[Passthrough.scala 79:30]
  wire [23:0] _c_T = 24'hc000 ^ b; // @[Passthrough.scala 80:41]
  wire [23:0] _c_T_1 = 24'hf900 ^ b; // @[Passthrough.scala 82:41]
  wire [23:0] _c_T_2 = 24'ha400 ^ b; // @[Passthrough.scala 84:41]
  wire [23:0] _c_T_3 = 24'hcf00 ^ b; // @[Passthrough.scala 86:41]
  wire [23:0] _c_T_4 = 24'h9900 ^ b; // @[Passthrough.scala 88:41]
  wire [23:0] _c_T_5 = 24'hed00 ^ b; // @[Passthrough.scala 90:41]
  wire [23:0] _c_T_6 = 24'h8200 ^ b; // @[Passthrough.scala 92:41]
  wire [23:0] _c_T_7 = 24'hf800 ^ b; // @[Passthrough.scala 94:41]
  wire [23:0] _c_T_8 = 24'h8000 ^ b; // @[Passthrough.scala 96:41]
  wire [23:0] _c_T_9 = 24'h9000 ^ b; // @[Passthrough.scala 98:41]
  wire [23:0] _c_T_10 = 24'hff00 ^ b; // @[Passthrough.scala 100:41]
  wire [23:0] _GEN_25 = _T_32 == 4'h9 ? _c_T_9 : _c_T_10; // @[Passthrough.scala 97:42 Passthrough.scala 98:10 Passthrough.scala 100:10]
  wire [23:0] _GEN_26 = _T_32 == 4'h8 ? _c_T_8 : _GEN_25; // @[Passthrough.scala 95:42 Passthrough.scala 96:10]
  wire [23:0] _GEN_27 = _T_32 == 4'h7 ? _c_T_7 : _GEN_26; // @[Passthrough.scala 93:42 Passthrough.scala 94:10]
  wire [23:0] _GEN_28 = _T_32 == 4'h6 ? _c_T_6 : _GEN_27; // @[Passthrough.scala 91:42 Passthrough.scala 92:10]
  wire [23:0] _GEN_29 = _T_32 == 4'h5 ? _c_T_5 : _GEN_28; // @[Passthrough.scala 89:42 Passthrough.scala 90:10]
  wire [23:0] _GEN_30 = _T_32 == 4'h4 ? _c_T_4 : _GEN_29; // @[Passthrough.scala 87:42 Passthrough.scala 88:10]
  wire [23:0] _GEN_31 = _T_32 == 4'h3 ? _c_T_3 : _GEN_30; // @[Passthrough.scala 85:42 Passthrough.scala 86:10]
  wire [23:0] _io_bcd8seg_T = 24'hff0000 ^ c; // @[Passthrough.scala 104:50]
  wire [23:0] _io_bcd8seg_T_1 = 24'hbf0000 ^ c; // @[Passthrough.scala 106:50]
  assign io_Overflow = io_op == 3'h0 ? io_a[3] == io_b[3] & io_Result[3] != io_a[3] : _GEN_8; // @[Passthrough.scala 26:27 Passthrough.scala 28:20]
  assign io_Zero = io_op == 3'h0 ? io_Result == 4'h0 : _GEN_10; // @[Passthrough.scala 26:27 Passthrough.scala 30:16]
  assign io_Result = io_op == 3'h0 ? _io_Result_T_1 : _GEN_7; // @[Passthrough.scala 26:27 Passthrough.scala 27:18]
  assign io_Carry = io_op == 3'h0 ? _io_Result_T > _GEN_37 : _GEN_9; // @[Passthrough.scala 26:27 Passthrough.scala 29:17]
  assign io_bcd8seg = ~io_Result[3] ? _io_bcd8seg_T : _io_bcd8seg_T_1; // @[Passthrough.scala 103:29 Passthrough.scala 104:19 Passthrough.scala 106:19]
  always @(posedge clock) begin
    if (_T_9 == 4'h0) begin // @[Passthrough.scala 54:31]
      b <= 24'hc0; // @[Passthrough.scala 55:10]
    end else if (_T_9 == 4'h1) begin // @[Passthrough.scala 56:37]
      b <= 24'hf9; // @[Passthrough.scala 57:10]
    end else if (_T_9 == 4'h2) begin // @[Passthrough.scala 58:37]
      b <= 24'ha4; // @[Passthrough.scala 59:10]
    end else if (_T_9 == 4'h3) begin // @[Passthrough.scala 60:37]
      b <= 24'hcf; // @[Passthrough.scala 61:10]
    end else begin
      b <= _GEN_20;
    end
    if (_T_10) begin // @[Passthrough.scala 77:31]
      c <= 24'hffffc0; // @[Passthrough.scala 78:10]
    end else if (_T_32 == 4'h0) begin // @[Passthrough.scala 79:42]
      c <= _c_T; // @[Passthrough.scala 80:10]
    end else if (_T_32 == 4'h1) begin // @[Passthrough.scala 81:42]
      c <= _c_T_1; // @[Passthrough.scala 82:10]
    end else if (_T_32 == 4'h2) begin // @[Passthrough.scala 83:42]
      c <= _c_T_2; // @[Passthrough.scala 84:10]
    end else begin
      c <= _GEN_31;
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
  b = _RAND_0[23:0];
  _RAND_1 = {1{`RANDOM}};
  c = _RAND_1[23:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

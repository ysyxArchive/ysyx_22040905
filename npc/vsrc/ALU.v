module ALU(
  input         clock,
  input         reset,
  input  [63:0] io_src1,
  input  [63:0] io_src2,
  input  [18:0] io_op,
  output [63:0] io_result,
  input         io_validin,
  output        io_validout,
  output        io_busy,
  input         io_flush
);
  wire  mul_clock; // @[ALU.scala 39:19]
  wire  mul_reset; // @[ALU.scala 39:19]
  wire  mul_io_mul_valid; // @[ALU.scala 39:19]
  wire  mul_io_flush; // @[ALU.scala 39:19]
  wire [1:0] mul_io_mul_signed; // @[ALU.scala 39:19]
  wire [63:0] mul_io_multiplicand; // @[ALU.scala 39:19]
  wire [63:0] mul_io_multiplier; // @[ALU.scala 39:19]
  wire  mul_io_mul_ready; // @[ALU.scala 39:19]
  wire  mul_io_out_valid; // @[ALU.scala 39:19]
  wire [63:0] mul_io_result_lo; // @[ALU.scala 39:19]
  wire  div_clock; // @[ALU.scala 50:19]
  wire  div_reset; // @[ALU.scala 50:19]
  wire [63:0] div_io_dividend; // @[ALU.scala 50:19]
  wire [63:0] div_io_divisor; // @[ALU.scala 50:19]
  wire  div_io_div_valid; // @[ALU.scala 50:19]
  wire  div_io_div_signed; // @[ALU.scala 50:19]
  wire  div_io_flush; // @[ALU.scala 50:19]
  wire  div_io_div_ready; // @[ALU.scala 50:19]
  wire  div_io_out_valid; // @[ALU.scala 50:19]
  wire [63:0] div_io_quotient; // @[ALU.scala 50:19]
  wire [63:0] div_io_remainder; // @[ALU.scala 50:19]
  wire  _adder_b_T_6 = io_op[1] | io_op[8] | io_op[9] | io_op[11]; // @[ALU.scala 28:44]
  wire [63:0] _adder_b_T_7 = ~io_src2; // @[ALU.scala 28:55]
  wire [63:0] adder_b = io_op[1] | io_op[8] | io_op[9] | io_op[11] ? _adder_b_T_7 : io_src2; // @[ALU.scala 28:17]
  wire [64:0] _sum_T = io_src1 + adder_b; // @[ALU.scala 30:17]
  wire [64:0] _GEN_0 = {{64'd0}, _adder_b_T_6}; // @[ALU.scala 30:26]
  wire [65:0] _sum_T_1 = _sum_T + _GEN_0; // @[ALU.scala 30:26]
  wire [64:0] sum = _sum_T_1[64:0]; // @[ALU.scala 23:17 30:8]
  wire  adder_cout = sum[64]; // @[ALU.scala 31:20]
  wire [63:0] adder_result = sum[63:0]; // @[ALU.scala 32:22]
  wire  _slt_result_T_11 = io_src1[63] & ~io_src2[63] | ~(io_src1[63] ^ io_src2[63]) & adder_result[63]; // @[ALU.scala 34:61]
  wire [63:0] slt_result = {63'h0,_slt_result_T_11}; // @[Cat.scala 33:92]
  wire  _sltu_result_T_1 = ~adder_cout; // @[ALU.scala 35:35]
  wire [63:0] sltu_result = {63'h0,_sltu_result_T_1}; // @[Cat.scala 33:92]
  wire  _eql_result_T_1 = adder_result == 64'h0; // @[ALU.scala 36:46]
  wire [63:0] eql_result = {63'h0,_eql_result_T_1}; // @[Cat.scala 33:92]
  wire  _T_4 = io_op[12] | io_op[13] | io_op[14]; // @[ALU.scala 40:42]
  wire  _T_8 = io_op[13] | io_op[14]; // @[ALU.scala 42:35]
  wire  _T_13 = io_op[15] | io_op[16]; // @[ALU.scala 51:32]
  wire [63:0] _io_result_T_4 = io_src1 & io_src2; // @[ALU.scala 64:36]
  wire [63:0] _io_result_T_6 = io_src1 | io_src2; // @[ALU.scala 65:36]
  wire [63:0] _io_result_T_8 = io_src1 ^ io_src2; // @[ALU.scala 66:36]
  wire [126:0] _GEN_1 = {{63'd0}, io_src1}; // @[ALU.scala 67:37]
  wire [126:0] _io_result_T_11 = _GEN_1 << io_src2[5:0]; // @[ALU.scala 67:37]
  wire [63:0] _io_result_T_15 = io_src1 >> io_src2[5:0]; // @[ALU.scala 68:36]
  wire [63:0] _io_result_T_20 = $signed(io_src1) >>> io_src2[5:0]; // @[ALU.scala 69:62]
  wire [63:0] _io_result_T_25 = adder_result & 64'hfffffffffffffffe; // @[ALU.scala 72:42]
  wire [63:0] _io_result_T_38 = io_op[17] | io_op[18] ? div_io_remainder : 64'h0; // @[ALU.scala 76:19]
  wire [63:0] _io_result_T_39 = _T_13 ? div_io_quotient : _io_result_T_38; // @[ALU.scala 75:19]
  wire [63:0] _io_result_T_40 = _T_4 ? mul_io_result_lo : _io_result_T_39; // @[ALU.scala 74:19]
  wire [63:0] _io_result_T_41 = io_op[11] ? eql_result : _io_result_T_40; // @[ALU.scala 73:19]
  wire [63:0] _io_result_T_42 = io_op[10] ? _io_result_T_25 : _io_result_T_41; // @[ALU.scala 72:19]
  wire [63:0] _io_result_T_43 = io_op[9] ? sltu_result : _io_result_T_42; // @[ALU.scala 71:19]
  wire [63:0] _io_result_T_44 = io_op[8] ? slt_result : _io_result_T_43; // @[ALU.scala 70:19]
  wire [63:0] _io_result_T_45 = io_op[7] ? _io_result_T_20 : _io_result_T_44; // @[ALU.scala 69:19]
  wire [63:0] _io_result_T_46 = io_op[6] ? _io_result_T_15 : _io_result_T_45; // @[ALU.scala 68:19]
  wire [63:0] _io_result_T_47 = io_op[5] ? _io_result_T_11[63:0] : _io_result_T_46; // @[ALU.scala 67:19]
  wire [63:0] _io_result_T_48 = io_op[4] ? _io_result_T_8 : _io_result_T_47; // @[ALU.scala 66:19]
  wire [63:0] _io_result_T_49 = io_op[3] ? _io_result_T_6 : _io_result_T_48; // @[ALU.scala 65:19]
  wire [63:0] _io_result_T_50 = io_op[2] ? _io_result_T_4 : _io_result_T_49; // @[ALU.scala 64:19]
  mul mul ( // @[ALU.scala 39:19]
    .clock(mul_clock),
    .reset(mul_reset),
    .io_mul_valid(mul_io_mul_valid),
    .io_flush(mul_io_flush),
    .io_mul_signed(mul_io_mul_signed),
    .io_multiplicand(mul_io_multiplicand),
    .io_multiplier(mul_io_multiplier),
    .io_mul_ready(mul_io_mul_ready),
    .io_out_valid(mul_io_out_valid),
    .io_result_lo(mul_io_result_lo)
  );
  div div ( // @[ALU.scala 50:19]
    .clock(div_clock),
    .reset(div_reset),
    .io_dividend(div_io_dividend),
    .io_divisor(div_io_divisor),
    .io_div_valid(div_io_div_valid),
    .io_div_signed(div_io_div_signed),
    .io_flush(div_io_flush),
    .io_div_ready(div_io_div_ready),
    .io_out_valid(div_io_out_valid),
    .io_quotient(div_io_quotient),
    .io_remainder(div_io_remainder)
  );
  assign io_result = io_op[0] | io_op[1] ? adder_result : _io_result_T_50; // @[ALU.scala 63:19]
  assign io_validout = mul_io_out_valid | div_io_out_valid; // @[ALU.scala 61:33]
  assign io_busy = ~mul_io_mul_ready | ~div_io_div_ready; // @[ALU.scala 58:32]
  assign mul_clock = clock;
  assign mul_reset = reset;
  assign mul_io_mul_valid = (io_op[12] | io_op[13] | io_op[14]) & io_validin; // @[ALU.scala 40:53]
  assign mul_io_flush = io_flush; // @[ALU.scala 41:15]
  assign mul_io_mul_signed = {_T_8,io_op[13]}; // @[Cat.scala 33:92]
  assign mul_io_multiplicand = io_src1; // @[ALU.scala 43:21]
  assign mul_io_multiplier = io_src2; // @[ALU.scala 44:19]
  assign div_clock = clock;
  assign div_reset = reset;
  assign div_io_dividend = io_src1; // @[ALU.scala 54:17]
  assign div_io_divisor = io_src2; // @[ALU.scala 55:16]
  assign div_io_div_valid = (io_op[15] | io_op[16] | io_op[17] | io_op[18]) & io_validin; // @[ALU.scala 51:63]
  assign div_io_div_signed = io_op[15] | io_op[17]; // @[ALU.scala 53:30]
  assign div_io_flush = io_flush; // @[ALU.scala 52:15]
endmodule

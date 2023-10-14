module div(
  input         clock,
  input         reset,
  input  [63:0] io_dividend,
  input  [63:0] io_divisor,
  input         io_div_valid,
  input         io_div_signed,
  input         io_flush,
  output        io_div_ready,
  output        io_out_valid,
  output [63:0] io_quotient,
  output [63:0] io_remainder
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [127:0] _RAND_2;
  reg [95:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] _dividend_abs_T_3 = ~io_dividend; // @[divtest.scala 24:27]
  wire [63:0] _dividend_abs_T_5 = _dividend_abs_T_3 + 64'h1; // @[divtest.scala 24:48]
  wire [63:0] dividend_abs = io_div_signed & io_dividend[63] ? _dividend_abs_T_5 : io_dividend; // @[divtest.scala 23:25]
  wire [63:0] _divisor_abs_T_3 = ~io_divisor; // @[divtest.scala 26:26]
  wire [63:0] _divisor_abs_T_5 = _divisor_abs_T_3 + 64'h1; // @[divtest.scala 26:46]
  wire [63:0] divisor_abs = io_div_signed & io_divisor[63] ? _divisor_abs_T_5 : io_divisor; // @[divtest.scala 25:24]
  reg [63:0] quotient; // @[divtest.scala 28:25]
  reg [63:0] remainder; // @[divtest.scala 29:26]
  reg [127:0] dividend; // @[divtest.scala 30:25]
  reg [64:0] divisor; // @[divtest.scala 31:24]
  reg [6:0] shift_count; // @[divtest.scala 33:28]
  reg  is_dividing; // @[divtest.scala 35:28]
  reg  quotient_sign; // @[divtest.scala 43:30]
  reg  remainder_sign; // @[divtest.scala 44:31]
  reg  out_valid; // @[divtest.scala 45:26]
  wire [64:0] sub = dividend[127:63] - divisor; // @[divtest.scala 47:36]
  wire  _io_div_ready_T = ~is_dividing; // @[divtest.scala 49:19]
  wire [127:0] _dividend_T = {64'h0,dividend_abs}; // @[Cat.scala 33:92]
  wire [64:0] _divisor_T = {1'h0,divisor_abs}; // @[Cat.scala 33:92]
  wire [63:0] _quotient_T = ~quotient; // @[divtest.scala 72:39]
  wire [63:0] _quotient_T_2 = _quotient_T + 64'h1; // @[divtest.scala 72:57]
  wire [63:0] _quotient_T_3 = quotient_sign ? _quotient_T_2 : quotient; // @[divtest.scala 72:22]
  wire [63:0] _remainder_T_1 = ~dividend[127:64]; // @[divtest.scala 73:41]
  wire [63:0] _remainder_T_3 = _remainder_T_1 + 64'h1; // @[divtest.scala 73:75]
  wire [63:0] _remainder_T_5 = remainder_sign ? _remainder_T_3 : dividend[127:64]; // @[divtest.scala 73:23]
  wire [128:0] _dividend_T_1 = {dividend, 1'h0}; // @[divtest.scala 78:28]
  wire [64:0] _quotient_T_4 = {quotient, 1'h0}; // @[divtest.scala 79:28]
  wire [64:0] _quotient_T_6 = _quotient_T_4 | 65'h1; // @[divtest.scala 81:37]
  wire [127:0] _dividend_T_3 = {sub,dividend[62:0]}; // @[Cat.scala 33:92]
  wire [128:0] _dividend_T_4 = {_dividend_T_3, 1'h0}; // @[divtest.scala 82:47]
  wire [128:0] _GEN_0 = sub[64] ? _dividend_T_1 : _dividend_T_4; // @[divtest.scala 77:33 78:16 82:16]
  wire [64:0] _GEN_1 = sub[64] ? _quotient_T_4 : _quotient_T_6; // @[divtest.scala 77:33 79:16 81:16]
  wire  _GEN_2 = shift_count == 7'h0 ? 1'h0 : is_dividing; // @[divtest.scala 68:30 69:19 35:28]
  wire [64:0] _GEN_3 = shift_count == 7'h0 ? {{1'd0}, _quotient_T_3} : _GEN_1; // @[divtest.scala 68:30 72:16]
  wire [63:0] _GEN_4 = shift_count == 7'h0 ? _remainder_T_5 : remainder; // @[divtest.scala 68:30 73:17 29:26]
  wire  _GEN_5 = shift_count == 7'h0 | out_valid; // @[divtest.scala 68:30 75:17 45:26]
  wire [128:0] _GEN_6 = shift_count == 7'h0 ? {{1'd0}, dividend} : _GEN_0; // @[divtest.scala 30:25 68:30]
  wire [6:0] _shift_count_T_1 = shift_count - 7'h1; // @[divtest.scala 85:32]
  wire  _GEN_7 = is_dividing ? _GEN_2 : is_dividing; // @[divtest.scala 67:27 35:28]
  wire [64:0] _GEN_8 = is_dividing ? _GEN_3 : {{1'd0}, quotient}; // @[divtest.scala 28:25 67:27]
  wire  _GEN_10 = is_dividing & _GEN_5; // @[divtest.scala 67:27 88:15]
  wire [128:0] _GEN_11 = is_dividing ? _GEN_6 : {{1'd0}, dividend}; // @[divtest.scala 30:25 67:27]
  wire  _GEN_13 = io_div_valid & _io_div_ready_T | _GEN_7; // @[divtest.scala 55:44 56:17]
  wire [128:0] _GEN_16 = io_div_valid & _io_div_ready_T ? {{1'd0}, _dividend_T} : _GEN_11; // @[divtest.scala 55:44 59:14]
  wire [64:0] _GEN_18 = io_div_valid & _io_div_ready_T ? 65'h0 : _GEN_8; // @[divtest.scala 55:44 61:14]
  wire [128:0] _GEN_29 = io_flush ? {{1'd0}, dividend} : _GEN_16; // @[divtest.scala 51:18 30:25]
  wire [64:0] _GEN_31 = io_flush ? {{1'd0}, quotient} : _GEN_18; // @[divtest.scala 51:18 28:25]
  wire [64:0] _GEN_35 = reset ? 65'h0 : _GEN_31; // @[divtest.scala 28:{25,25}]
  wire [128:0] _GEN_36 = reset ? 129'h0 : _GEN_29; // @[divtest.scala 30:{25,25}]
  assign io_div_ready = ~is_dividing; // @[divtest.scala 49:19]
  assign io_out_valid = out_valid; // @[divtest.scala 93:16]
  assign io_quotient = quotient; // @[divtest.scala 94:15]
  assign io_remainder = remainder; // @[divtest.scala 95:16]
  always @(posedge clock) begin
    quotient <= _GEN_35[63:0]; // @[divtest.scala 28:{25,25}]
    if (reset) begin // @[divtest.scala 29:26]
      remainder <= 64'h0; // @[divtest.scala 29:26]
    end else if (!(io_flush)) begin // @[divtest.scala 51:18]
      if (io_div_valid & _io_div_ready_T) begin // @[divtest.scala 55:44]
        remainder <= 64'h0; // @[divtest.scala 62:15]
      end else if (is_dividing) begin // @[divtest.scala 67:27]
        remainder <= _GEN_4;
      end
    end
    dividend <= _GEN_36[127:0]; // @[divtest.scala 30:{25,25}]
    if (reset) begin // @[divtest.scala 31:24]
      divisor <= 65'h0; // @[divtest.scala 31:24]
    end else if (!(io_flush)) begin // @[divtest.scala 51:18]
      if (io_div_valid & _io_div_ready_T) begin // @[divtest.scala 55:44]
        divisor <= _divisor_T; // @[divtest.scala 60:13]
      end
    end
    if (reset) begin // @[divtest.scala 33:28]
      shift_count <= 7'h40; // @[divtest.scala 33:28]
    end else if (io_flush) begin // @[divtest.scala 51:18]
      shift_count <= 7'h40; // @[divtest.scala 53:17]
    end else if (io_div_valid & _io_div_ready_T) begin // @[divtest.scala 55:44]
      shift_count <= 7'h40; // @[divtest.scala 63:17]
    end else if (is_dividing) begin // @[divtest.scala 67:27]
      shift_count <= _shift_count_T_1; // @[divtest.scala 85:17]
    end
    if (reset) begin // @[divtest.scala 35:28]
      is_dividing <= 1'h0; // @[divtest.scala 35:28]
    end else if (io_flush) begin // @[divtest.scala 51:18]
      is_dividing <= 1'h0; // @[divtest.scala 52:17]
    end else begin
      is_dividing <= _GEN_13;
    end
    if (reset) begin // @[divtest.scala 43:30]
      quotient_sign <= 1'h0; // @[divtest.scala 43:30]
    end else if (!(io_flush)) begin // @[divtest.scala 51:18]
      if (io_div_valid & _io_div_ready_T) begin // @[divtest.scala 55:44]
        quotient_sign <= io_dividend[63] ^ io_divisor[63]; // @[divtest.scala 64:19]
      end
    end
    if (reset) begin // @[divtest.scala 44:31]
      remainder_sign <= 1'h0; // @[divtest.scala 44:31]
    end else if (!(io_flush)) begin // @[divtest.scala 51:18]
      if (io_div_valid & _io_div_ready_T) begin // @[divtest.scala 55:44]
        remainder_sign <= io_dividend[63]; // @[divtest.scala 65:20]
      end
    end
    if (reset) begin // @[divtest.scala 45:26]
      out_valid <= 1'h0; // @[divtest.scala 45:26]
    end else if (io_flush) begin // @[divtest.scala 51:18]
      out_valid <= 1'h0; // @[divtest.scala 54:15]
    end else if (io_div_valid & _io_div_ready_T) begin // @[divtest.scala 55:44]
      out_valid <= 1'h0; // @[divtest.scala 66:15]
    end else begin
      out_valid <= _GEN_10;
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
  quotient = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  remainder = _RAND_1[63:0];
  _RAND_2 = {4{`RANDOM}};
  dividend = _RAND_2[127:0];
  _RAND_3 = {3{`RANDOM}};
  divisor = _RAND_3[64:0];
  _RAND_4 = {1{`RANDOM}};
  shift_count = _RAND_4[6:0];
  _RAND_5 = {1{`RANDOM}};
  is_dividing = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  quotient_sign = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  remainder_sign = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  out_valid = _RAND_8[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

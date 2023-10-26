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
  output [63:0] io_remainder,
  output [63:0] io_div_num
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [127:0] _RAND_3;
  reg [95:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] div_num; // @[div.scala 19:24]
  wire [63:0] _div_num_T_1 = div_num + 64'h1; // @[div.scala 21:24]
  wire [63:0] _dividend_abs_T_3 = ~io_dividend; // @[div.scala 26:27]
  wire [63:0] _dividend_abs_T_5 = _dividend_abs_T_3 + 64'h1; // @[div.scala 26:48]
  wire [63:0] dividend_abs = io_div_signed & io_dividend[63] ? _dividend_abs_T_5 : io_dividend; // @[div.scala 25:25]
  wire [63:0] _divisor_abs_T_3 = ~io_divisor; // @[div.scala 28:26]
  wire [63:0] _divisor_abs_T_5 = _divisor_abs_T_3 + 64'h1; // @[div.scala 28:46]
  wire [63:0] divisor_abs = io_div_signed & io_divisor[63] ? _divisor_abs_T_5 : io_divisor; // @[div.scala 27:24]
  reg [63:0] quotient; // @[div.scala 30:25]
  reg [63:0] remainder; // @[div.scala 31:26]
  reg [127:0] dividend; // @[div.scala 32:25]
  reg [64:0] divisor; // @[div.scala 33:24]
  reg [6:0] shift_count; // @[div.scala 35:28]
  reg  is_dividing; // @[div.scala 37:28]
  reg  is_dividing_signed; // @[div.scala 39:35]
  wire  dividend_sign = io_dividend[63] & is_dividing_signed; // @[div.scala 43:43]
  wire  divisor_sign = io_divisor[63] & is_dividing_signed; // @[div.scala 44:41]
  reg  quotient_sign; // @[div.scala 45:30]
  reg  remainder_sign; // @[div.scala 46:31]
  reg  out_valid; // @[div.scala 47:26]
  wire [64:0] sub = dividend[127:63] - divisor; // @[div.scala 49:36]
  wire  _io_div_ready_T = ~is_dividing; // @[div.scala 51:19]
  wire [127:0] _dividend_T = {64'h0,dividend_abs}; // @[Cat.scala 33:92]
  wire [64:0] _divisor_T = {1'h0,divisor_abs}; // @[Cat.scala 33:92]
  wire [63:0] _quotient_T = ~quotient; // @[div.scala 74:39]
  wire [63:0] _quotient_T_2 = _quotient_T + 64'h1; // @[div.scala 74:57]
  wire [63:0] _quotient_T_3 = quotient_sign ? _quotient_T_2 : quotient; // @[div.scala 74:22]
  wire [63:0] _remainder_T_1 = ~dividend[127:64]; // @[div.scala 75:41]
  wire [63:0] _remainder_T_3 = _remainder_T_1 + 64'h1; // @[div.scala 75:75]
  wire [63:0] _remainder_T_5 = remainder_sign ? _remainder_T_3 : dividend[127:64]; // @[div.scala 75:23]
  wire [128:0] _dividend_T_1 = {dividend, 1'h0}; // @[div.scala 80:28]
  wire [64:0] _quotient_T_4 = {quotient, 1'h0}; // @[div.scala 81:28]
  wire [64:0] _quotient_T_6 = _quotient_T_4 | 65'h1; // @[div.scala 83:37]
  wire [127:0] _dividend_T_3 = {sub,dividend[62:0]}; // @[Cat.scala 33:92]
  wire [128:0] _dividend_T_4 = {_dividend_T_3, 1'h0}; // @[div.scala 84:47]
  wire [128:0] _GEN_1 = sub[64] ? _dividend_T_1 : _dividend_T_4; // @[div.scala 79:33 80:16 84:16]
  wire [64:0] _GEN_2 = sub[64] ? _quotient_T_4 : _quotient_T_6; // @[div.scala 79:33 81:16 83:16]
  wire  _GEN_3 = shift_count == 7'h0 ? 1'h0 : is_dividing; // @[div.scala 70:30 71:19 37:28]
  wire [64:0] _GEN_4 = shift_count == 7'h0 ? {{1'd0}, _quotient_T_3} : _GEN_2; // @[div.scala 70:30 74:16]
  wire [63:0] _GEN_5 = shift_count == 7'h0 ? _remainder_T_5 : remainder; // @[div.scala 70:30 75:17 31:26]
  wire  _GEN_6 = shift_count == 7'h0 | out_valid; // @[div.scala 70:30 77:17 47:26]
  wire [128:0] _GEN_7 = shift_count == 7'h0 ? {{1'd0}, dividend} : _GEN_1; // @[div.scala 32:25 70:30]
  wire [6:0] _shift_count_T_1 = shift_count - 7'h1; // @[div.scala 87:32]
  wire  _GEN_8 = is_dividing ? _GEN_3 : is_dividing; // @[div.scala 69:27 37:28]
  wire [64:0] _GEN_9 = is_dividing ? _GEN_4 : {{1'd0}, quotient}; // @[div.scala 30:25 69:27]
  wire  _GEN_11 = is_dividing & _GEN_6; // @[div.scala 69:27 90:15]
  wire [128:0] _GEN_12 = is_dividing ? _GEN_7 : {{1'd0}, dividend}; // @[div.scala 32:25 69:27]
  wire  _GEN_14 = io_div_valid & _io_div_ready_T | _GEN_8; // @[div.scala 57:44 58:17]
  wire [128:0] _GEN_17 = io_div_valid & _io_div_ready_T ? {{1'd0}, _dividend_T} : _GEN_12; // @[div.scala 57:44 61:14]
  wire [64:0] _GEN_19 = io_div_valid & _io_div_ready_T ? 65'h0 : _GEN_9; // @[div.scala 57:44 63:14]
  wire [128:0] _GEN_30 = io_flush ? {{1'd0}, dividend} : _GEN_17; // @[div.scala 53:18 32:25]
  wire [64:0] _GEN_32 = io_flush ? {{1'd0}, quotient} : _GEN_19; // @[div.scala 53:18 30:25]
  wire [64:0] _GEN_36 = reset ? 65'h0 : _GEN_32; // @[div.scala 30:{25,25}]
  wire [128:0] _GEN_37 = reset ? 129'h0 : _GEN_30; // @[div.scala 32:{25,25}]
  assign io_div_ready = ~is_dividing; // @[div.scala 51:19]
  assign io_out_valid = out_valid; // @[div.scala 98:16]
  assign io_quotient = quotient; // @[div.scala 99:15]
  assign io_remainder = remainder; // @[div.scala 100:16]
  assign io_div_num = div_num; // @[div.scala 23:14]
  always @(posedge clock) begin
    if (reset) begin // @[div.scala 19:24]
      div_num <= 64'h0; // @[div.scala 19:24]
    end else if (io_div_valid) begin // @[div.scala 20:27]
      div_num <= _div_num_T_1; // @[div.scala 21:13]
    end
    quotient <= _GEN_36[63:0]; // @[div.scala 30:{25,25}]
    if (reset) begin // @[div.scala 31:26]
      remainder <= 64'h0; // @[div.scala 31:26]
    end else if (!(io_flush)) begin // @[div.scala 53:18]
      if (io_div_valid & _io_div_ready_T) begin // @[div.scala 57:44]
        remainder <= 64'h0; // @[div.scala 64:15]
      end else if (is_dividing) begin // @[div.scala 69:27]
        remainder <= _GEN_5;
      end
    end
    dividend <= _GEN_37[127:0]; // @[div.scala 32:{25,25}]
    if (reset) begin // @[div.scala 33:24]
      divisor <= 65'h0; // @[div.scala 33:24]
    end else if (!(io_flush)) begin // @[div.scala 53:18]
      if (io_div_valid & _io_div_ready_T) begin // @[div.scala 57:44]
        divisor <= _divisor_T; // @[div.scala 62:13]
      end
    end
    if (reset) begin // @[div.scala 35:28]
      shift_count <= 7'h40; // @[div.scala 35:28]
    end else if (io_flush) begin // @[div.scala 53:18]
      shift_count <= 7'h40; // @[div.scala 55:17]
    end else if (io_div_valid & _io_div_ready_T) begin // @[div.scala 57:44]
      shift_count <= 7'h40; // @[div.scala 65:17]
    end else if (is_dividing) begin // @[div.scala 69:27]
      shift_count <= _shift_count_T_1; // @[div.scala 87:17]
    end
    if (reset) begin // @[div.scala 37:28]
      is_dividing <= 1'h0; // @[div.scala 37:28]
    end else if (io_flush) begin // @[div.scala 53:18]
      is_dividing <= 1'h0; // @[div.scala 54:17]
    end else begin
      is_dividing <= _GEN_14;
    end
    if (reset) begin // @[div.scala 39:35]
      is_dividing_signed <= 1'h0; // @[div.scala 39:35]
    end else if (!(io_flush)) begin // @[div.scala 53:18]
      if (io_div_valid & _io_div_ready_T) begin // @[div.scala 57:44]
        is_dividing_signed <= io_div_signed; // @[div.scala 60:24]
      end
    end
    if (reset) begin // @[div.scala 45:30]
      quotient_sign <= 1'h0; // @[div.scala 45:30]
    end else if (!(io_flush)) begin // @[div.scala 53:18]
      if (io_div_valid & _io_div_ready_T) begin // @[div.scala 57:44]
        quotient_sign <= dividend_sign ^ divisor_sign; // @[div.scala 66:19]
      end
    end
    if (reset) begin // @[div.scala 46:31]
      remainder_sign <= 1'h0; // @[div.scala 46:31]
    end else if (!(io_flush)) begin // @[div.scala 53:18]
      if (io_div_valid & _io_div_ready_T) begin // @[div.scala 57:44]
        remainder_sign <= dividend_sign; // @[div.scala 67:20]
      end
    end
    if (reset) begin // @[div.scala 47:26]
      out_valid <= 1'h0; // @[div.scala 47:26]
    end else if (io_flush) begin // @[div.scala 53:18]
      out_valid <= 1'h0; // @[div.scala 56:15]
    end else if (io_div_valid & _io_div_ready_T) begin // @[div.scala 57:44]
      out_valid <= 1'h0; // @[div.scala 68:15]
    end else begin
      out_valid <= _GEN_11;
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
  div_num = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  quotient = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  remainder = _RAND_2[63:0];
  _RAND_3 = {4{`RANDOM}};
  dividend = _RAND_3[127:0];
  _RAND_4 = {3{`RANDOM}};
  divisor = _RAND_4[64:0];
  _RAND_5 = {1{`RANDOM}};
  shift_count = _RAND_5[6:0];
  _RAND_6 = {1{`RANDOM}};
  is_dividing = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  is_dividing_signed = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  quotient_sign = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  remainder_sign = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  out_valid = _RAND_10[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

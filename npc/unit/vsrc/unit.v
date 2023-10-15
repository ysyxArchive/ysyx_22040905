module unit(
  input         clock,
  input         reset,
  input  [63:0] io_dividend,
  input  [63:0] io_divisor,
  input         io_div_valid,
  input         io_divw,
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
  reg [31:0] _RAND_9;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] _dividend_abs_T_3 = ~io_dividend; // @[div.scala 20:27]
  wire [63:0] _dividend_abs_T_5 = _dividend_abs_T_3 + 64'h1; // @[div.scala 20:48]
  wire [63:0] dividend_abs = io_div_signed & io_dividend[63] ? _dividend_abs_T_5 : io_dividend; // @[div.scala 19:25]
  wire [63:0] _divisor_abs_T_3 = ~io_divisor; // @[div.scala 22:26]
  wire [63:0] _divisor_abs_T_5 = _divisor_abs_T_3 + 64'h1; // @[div.scala 22:46]
  wire [63:0] divisor_abs = io_div_signed & io_divisor[63] ? _divisor_abs_T_5 : io_divisor; // @[div.scala 21:24]
  reg [63:0] quotient; // @[div.scala 24:25]
  reg [63:0] remainder; // @[div.scala 25:26]
  reg [127:0] dividend; // @[div.scala 26:25]
  reg [64:0] divisor; // @[div.scala 27:24]
  reg [6:0] shift_count; // @[div.scala 29:28]
  reg  is_dividing; // @[div.scala 31:28]
  reg  is_dividing_signed; // @[div.scala 33:35]
  wire  dividend_sign = io_dividend[63] & is_dividing_signed; // @[div.scala 37:43]
  wire  divisor_sign = io_divisor[63] & is_dividing_signed; // @[div.scala 38:41]
  reg  quotient_sign; // @[div.scala 39:30]
  reg  remainder_sign; // @[div.scala 40:31]
  reg  out_valid; // @[div.scala 41:26]
  wire [64:0] sub = dividend[127:63] - divisor; // @[div.scala 43:36]
  wire  _io_div_ready_T = ~is_dividing; // @[div.scala 45:19]
  wire [127:0] _dividend_T = {64'h0,dividend_abs}; // @[Cat.scala 33:92]
  wire [64:0] _divisor_T = {1'h0,divisor_abs}; // @[Cat.scala 33:92]
  wire [63:0] _quotient_T = ~quotient; // @[div.scala 68:39]
  wire [63:0] _quotient_T_2 = _quotient_T + 64'h1; // @[div.scala 68:57]
  wire [63:0] _quotient_T_3 = quotient_sign ? _quotient_T_2 : quotient; // @[div.scala 68:22]
  wire [63:0] _remainder_T_1 = ~dividend[127:64]; // @[div.scala 69:41]
  wire [63:0] _remainder_T_3 = _remainder_T_1 + 64'h1; // @[div.scala 69:75]
  wire [63:0] _remainder_T_5 = remainder_sign ? _remainder_T_3 : dividend[127:64]; // @[div.scala 69:23]
  wire [128:0] _dividend_T_1 = {dividend, 1'h0}; // @[div.scala 74:28]
  wire [64:0] _quotient_T_4 = {quotient, 1'h0}; // @[div.scala 75:28]
  wire [64:0] _quotient_T_6 = _quotient_T_4 | 65'h1; // @[div.scala 77:37]
  wire [127:0] _dividend_T_3 = {sub,dividend[62:0]}; // @[Cat.scala 33:92]
  wire [128:0] _dividend_T_4 = {_dividend_T_3, 1'h0}; // @[div.scala 78:47]
  wire [128:0] _GEN_0 = sub[64] ? _dividend_T_1 : _dividend_T_4; // @[div.scala 73:33 74:16 78:16]
  wire [64:0] _GEN_1 = sub[64] ? _quotient_T_4 : _quotient_T_6; // @[div.scala 73:33 75:16 77:16]
  wire  _GEN_2 = shift_count == 7'h0 ? 1'h0 : is_dividing; // @[div.scala 64:30 65:19 31:28]
  wire [64:0] _GEN_3 = shift_count == 7'h0 ? {{1'd0}, _quotient_T_3} : _GEN_1; // @[div.scala 64:30 68:16]
  wire [63:0] _GEN_4 = shift_count == 7'h0 ? _remainder_T_5 : remainder; // @[div.scala 64:30 69:17 25:26]
  wire  _GEN_5 = shift_count == 7'h0 | out_valid; // @[div.scala 64:30 71:17 41:26]
  wire [128:0] _GEN_6 = shift_count == 7'h0 ? {{1'd0}, dividend} : _GEN_0; // @[div.scala 26:25 64:30]
  wire [6:0] _shift_count_T_1 = shift_count - 7'h1; // @[div.scala 81:32]
  wire  _GEN_7 = is_dividing ? _GEN_2 : is_dividing; // @[div.scala 63:27 31:28]
  wire [64:0] _GEN_8 = is_dividing ? _GEN_3 : {{1'd0}, quotient}; // @[div.scala 24:25 63:27]
  wire  _GEN_10 = is_dividing & _GEN_5; // @[div.scala 63:27 84:15]
  wire [128:0] _GEN_11 = is_dividing ? _GEN_6 : {{1'd0}, dividend}; // @[div.scala 26:25 63:27]
  wire  _GEN_13 = io_div_valid & _io_div_ready_T | _GEN_7; // @[div.scala 51:44 52:17]
  wire [128:0] _GEN_16 = io_div_valid & _io_div_ready_T ? {{1'd0}, _dividend_T} : _GEN_11; // @[div.scala 51:44 55:14]
  wire [64:0] _GEN_18 = io_div_valid & _io_div_ready_T ? 65'h0 : _GEN_8; // @[div.scala 51:44 57:14]
  wire [128:0] _GEN_29 = io_flush ? {{1'd0}, dividend} : _GEN_16; // @[div.scala 47:18 26:25]
  wire [64:0] _GEN_31 = io_flush ? {{1'd0}, quotient} : _GEN_18; // @[div.scala 47:18 24:25]
  wire [64:0] _GEN_35 = reset ? 65'h0 : _GEN_31; // @[div.scala 24:{25,25}]
  wire [128:0] _GEN_36 = reset ? 129'h0 : _GEN_29; // @[div.scala 26:{25,25}]
  assign io_div_ready = ~is_dividing; // @[div.scala 45:19]
  assign io_out_valid = out_valid; // @[div.scala 92:16]
  assign io_quotient = quotient; // @[div.scala 93:15]
  assign io_remainder = remainder; // @[div.scala 94:16]
  always @(posedge clock) begin
    quotient <= _GEN_35[63:0]; // @[div.scala 24:{25,25}]
    if (reset) begin // @[div.scala 25:26]
      remainder <= 64'h0; // @[div.scala 25:26]
    end else if (!(io_flush)) begin // @[div.scala 47:18]
      if (io_div_valid & _io_div_ready_T) begin // @[div.scala 51:44]
        remainder <= 64'h0; // @[div.scala 58:15]
      end else if (is_dividing) begin // @[div.scala 63:27]
        remainder <= _GEN_4;
      end
    end
    dividend <= _GEN_36[127:0]; // @[div.scala 26:{25,25}]
    if (reset) begin // @[div.scala 27:24]
      divisor <= 65'h0; // @[div.scala 27:24]
    end else if (!(io_flush)) begin // @[div.scala 47:18]
      if (io_div_valid & _io_div_ready_T) begin // @[div.scala 51:44]
        divisor <= _divisor_T; // @[div.scala 56:13]
      end
    end
    if (reset) begin // @[div.scala 29:28]
      shift_count <= 7'h40; // @[div.scala 29:28]
    end else if (io_flush) begin // @[div.scala 47:18]
      shift_count <= 7'h40; // @[div.scala 49:17]
    end else if (io_div_valid & _io_div_ready_T) begin // @[div.scala 51:44]
      shift_count <= 7'h40; // @[div.scala 59:17]
    end else if (is_dividing) begin // @[div.scala 63:27]
      shift_count <= _shift_count_T_1; // @[div.scala 81:17]
    end
    if (reset) begin // @[div.scala 31:28]
      is_dividing <= 1'h0; // @[div.scala 31:28]
    end else if (io_flush) begin // @[div.scala 47:18]
      is_dividing <= 1'h0; // @[div.scala 48:17]
    end else begin
      is_dividing <= _GEN_13;
    end
    if (reset) begin // @[div.scala 33:35]
      is_dividing_signed <= 1'h0; // @[div.scala 33:35]
    end else if (!(io_flush)) begin // @[div.scala 47:18]
      if (io_div_valid & _io_div_ready_T) begin // @[div.scala 51:44]
        is_dividing_signed <= io_div_signed; // @[div.scala 54:24]
      end
    end
    if (reset) begin // @[div.scala 39:30]
      quotient_sign <= 1'h0; // @[div.scala 39:30]
    end else if (!(io_flush)) begin // @[div.scala 47:18]
      if (io_div_valid & _io_div_ready_T) begin // @[div.scala 51:44]
        quotient_sign <= dividend_sign ^ divisor_sign; // @[div.scala 60:19]
      end
    end
    if (reset) begin // @[div.scala 40:31]
      remainder_sign <= 1'h0; // @[div.scala 40:31]
    end else if (!(io_flush)) begin // @[div.scala 47:18]
      if (io_div_valid & _io_div_ready_T) begin // @[div.scala 51:44]
        remainder_sign <= dividend_sign; // @[div.scala 61:20]
      end
    end
    if (reset) begin // @[div.scala 41:26]
      out_valid <= 1'h0; // @[div.scala 41:26]
    end else if (io_flush) begin // @[div.scala 47:18]
      out_valid <= 1'h0; // @[div.scala 50:15]
    end else if (io_div_valid & _io_div_ready_T) begin // @[div.scala 51:44]
      out_valid <= 1'h0; // @[div.scala 62:15]
    end else begin
      out_valid <= _GEN_10;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (out_valid & ~reset) begin
          $fwrite(32'h80000002,"dividend: %x, divisor: %x, quotient: %x, remainder: %x, divw: %x, div_signed: %x\n",
            io_dividend,io_divisor,io_quotient,io_remainder,io_divw,io_div_signed); // @[div.scala 88:11]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
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
  is_dividing_signed = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  quotient_sign = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  remainder_sign = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  out_valid = _RAND_9[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

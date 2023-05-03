module Mul(
  input         clock,
  input         reset,
  input         io_mul_valid,
  input         io_flush,
  input         io_mulw,
  input  [1:0]  io_mul_signed,
  input  [63:0] io_multiplicand,
  input  [63:0] io_multiplier,
  output        io_mul_ready,
  output        io_out_valid,
  output [63:0] io_result_hi,
  output [63:0] io_result_lo
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [159:0] _RAND_1;
  reg [159:0] _RAND_2;
  reg [159:0] _RAND_3;
  reg [95:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  state; // @[mul.scala 19:24]
  reg [128:0] a; // @[mul.scala 25:20]
  reg [128:0] b; // @[mul.scala 26:20]
  reg [129:0] result; // @[mul.scala 27:25]
  reg [67:0] cnt; // @[mul.scala 28:22]
  reg [5:0] mulBits; // @[mul.scala 30:26]
  wire [5:0] mulbits = io_mulw ? 6'h1f : 6'h3f; // @[mul.scala 31:19]
  wire  _mulBits_T_2 = ~state & io_mul_valid; // @[mul.scala 32:37]
  wire [63:0] _a_T_4 = io_multiplicand >> mulbits; // @[mul.scala 35:53]
  wire  a_hi = _a_T_4[0]; // @[mul.scala 35:53]
  wire [64:0] _a_T_5 = {a_hi,io_multiplicand}; // @[Cat.scala 30:58]
  wire [64:0] _a_T_6 = {1'h0,io_multiplicand}; // @[Cat.scala 30:58]
  wire [64:0] _a_T_7 = io_mul_signed[1] ? _a_T_5 : _a_T_6; // @[mul.scala 35:16]
  wire [129:0] _a_T_8 = {a, 1'h0}; // @[mul.scala 36:11]
  wire [129:0] _a_T_9 = _mulBits_T_2 ? {{65'd0}, _a_T_7} : _a_T_8; // @[mul.scala 34:13]
  wire [64:0] _b_T_7 = io_mul_signed[0] ? _a_T_5 : _a_T_6; // @[mul.scala 39:16]
  wire [128:0] _b_T_8 = {{1'd0}, b[128:1]}; // @[mul.scala 40:11]
  wire [67:0] _cnt_T_2 = cnt + 68'h1; // @[mul.scala 42:35]
  wire [128:0] _s_T = b >> cnt; // @[mul.scala 45:13]
  wire [129:0] _GEN_1 = {{1'd0}, a}; // @[mul.scala 45:25]
  wire [129:0] _s_T_3 = result + _GEN_1; // @[mul.scala 45:25]
  wire [67:0] _GEN_2 = {{62'd0}, mulBits}; // @[mul.scala 48:24]
  wire [257:0] _T_2 = a * b; // @[mul.scala 54:43]
  wire [257:0] _GEN_3 = {{130'd0}, result[127:0]}; // @[mul.scala 54:38]
  assign io_mul_ready = ~state; // @[mul.scala 49:26]
  assign io_out_valid = cnt == _GEN_2; // @[mul.scala 48:24]
  assign io_result_hi = result[127:64]; // @[mul.scala 51:26]
  assign io_result_lo = result[63:0]; // @[mul.scala 50:26]
  always @(posedge clock) begin
    if (reset) begin // @[mul.scala 19:24]
      state <= 1'h0; // @[mul.scala 19:24]
    end else if (state) begin // @[Mux.scala 80:57]
      if (io_flush | io_out_valid) begin // @[mul.scala 22:22]
        state <= 1'h0;
      end else begin
        state <= 1'h1;
      end
    end else begin
      state <= io_mul_valid;
    end
    if (reset) begin // @[mul.scala 25:20]
      a <= 129'h0; // @[mul.scala 25:20]
    end else begin
      a <= _a_T_9[128:0]; // @[mul.scala 34:7]
    end
    if (reset) begin // @[mul.scala 26:20]
      b <= 129'h0; // @[mul.scala 26:20]
    end else if (_mulBits_T_2) begin // @[mul.scala 38:13]
      b <= {{64'd0}, _b_T_7};
    end else begin
      b <= _b_T_8;
    end
    if (reset) begin // @[mul.scala 27:25]
      result <= 130'h0; // @[mul.scala 27:25]
    end else if (state) begin // @[mul.scala 46:16]
      if (_s_T[0]) begin // @[mul.scala 45:11]
        result <= _s_T_3;
      end
    end else begin
      result <= 130'h0;
    end
    if (reset) begin // @[mul.scala 28:22]
      cnt <= 68'h0; // @[mul.scala 28:22]
    end else if (state) begin // @[mul.scala 42:14]
      cnt <= _cnt_T_2;
    end else begin
      cnt <= 68'h0;
    end
    if (reset) begin // @[mul.scala 30:26]
      mulBits <= 6'h0; // @[mul.scala 30:26]
    end else if (~state & io_mul_valid) begin // @[mul.scala 32:19]
      if (io_mulw) begin // @[mul.scala 31:19]
        mulBits <= 6'h1f;
      end else begin
        mulBits <= 6'h3f;
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_out_valid & ~(_GEN_3 == _T_2 | reset)) begin
          $fwrite(32'h80000002,"Assertion failed\n    at mul.scala:54 chisel3.assert(result(127,0) === a*b)\n"); // @[mul.scala 54:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (io_out_valid & ~(_GEN_3 == _T_2 | reset)) begin
          $fatal; // @[mul.scala 54:23]
        end
    `ifdef STOP_COND
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
  _RAND_0 = {1{`RANDOM}};
  state = _RAND_0[0:0];
  _RAND_1 = {5{`RANDOM}};
  a = _RAND_1[128:0];
  _RAND_2 = {5{`RANDOM}};
  b = _RAND_2[128:0];
  _RAND_3 = {5{`RANDOM}};
  result = _RAND_3[129:0];
  _RAND_4 = {3{`RANDOM}};
  cnt = _RAND_4[67:0];
  _RAND_5 = {1{`RANDOM}};
  mulBits = _RAND_5[5:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

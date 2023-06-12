module mul_cell(
  input          clock,
  input          reset,
  input          io_flush,
  input          io_valid,
  input  [128:0] io_a_in,
  input  [128:0] io_b_in,
  input  [128:0] io_sum_in,
  input          io_last,
  output [128:0] io_a_out,
  output [128:0] io_b_out,
  output [128:0] io_sum_out,
  output         io_ready,
  input  [63:0]  io_a,
  input  [63:0]  io_b,
  output [63:0]  io_A,
  output [63:0]  io_B
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [159:0] _RAND_2;
  reg [159:0] _RAND_3;
  reg [159:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] reg_a; // @[mul.scala 25:22]
  reg [63:0] reg_b; // @[mul.scala 26:22]
  reg [128:0] a_in; // @[mul.scala 36:22]
  reg [128:0] b_in; // @[mul.scala 37:22]
  reg [128:0] sum_in; // @[mul.scala 38:24]
  reg  valid; // @[mul.scala 39:22]
  wire [129:0] _io_a_out_T = {a_in, 1'h0}; // @[mul.scala 56:20]
  wire [128:0] _io_sum_out_T_4 = sum_in - a_in; // @[mul.scala 59:43]
  wire [128:0] _io_sum_out_T_6 = sum_in + a_in; // @[mul.scala 60:24]
  wire [128:0] _io_sum_out_T_7 = io_last ? _io_sum_out_T_4 : _io_sum_out_T_6; // @[mul.scala 59:20]
  assign io_a_out = _io_a_out_T[128:0]; // @[mul.scala 56:12]
  assign io_b_out = {{1'd0}, b_in[128:1]}; // @[mul.scala 57:20]
  assign io_sum_out = ~b_in[0] ? sum_in : _io_sum_out_T_7; // @[mul.scala 58:20]
  assign io_ready = valid; // @[mul.scala 61:12]
  assign io_A = reg_a; // @[mul.scala 33:8]
  assign io_B = reg_b; // @[mul.scala 34:8]
  always @(posedge clock) begin
    if (reset) begin // @[mul.scala 25:22]
      reg_a <= 64'h0; // @[mul.scala 25:22]
    end else if (io_flush) begin // @[mul.scala 27:16]
      reg_a <= 64'h0;
    end else if (io_valid) begin // @[mul.scala 28:15]
      reg_a <= io_a;
    end
    if (reset) begin // @[mul.scala 26:22]
      reg_b <= 64'h0; // @[mul.scala 26:22]
    end else if (io_flush) begin // @[mul.scala 30:16]
      reg_b <= 64'h0;
    end else if (io_valid) begin // @[mul.scala 31:15]
      reg_b <= io_b;
    end
    if (reset) begin // @[mul.scala 36:22]
      a_in <= 129'h0; // @[mul.scala 36:22]
    end else if (io_flush) begin // @[mul.scala 42:17]
      a_in <= 129'h0;
    end else if (io_valid) begin // @[mul.scala 43:16]
      a_in <= io_a_in;
    end
    if (reset) begin // @[mul.scala 37:22]
      b_in <= 129'h0; // @[mul.scala 37:22]
    end else if (io_flush) begin // @[mul.scala 46:17]
      b_in <= 129'h0;
    end else if (io_valid) begin // @[mul.scala 47:16]
      b_in <= io_b_in;
    end
    if (reset) begin // @[mul.scala 38:24]
      sum_in <= 129'h0; // @[mul.scala 38:24]
    end else if (io_flush) begin // @[mul.scala 50:17]
      sum_in <= 129'h0;
    end else if (io_valid) begin // @[mul.scala 51:16]
      sum_in <= io_sum_in;
    end
    if (reset) begin // @[mul.scala 39:22]
      valid <= 1'h0; // @[mul.scala 39:22]
    end else if (io_flush) begin // @[mul.scala 54:17]
      valid <= 1'h0;
    end else begin
      valid <= io_valid;
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
  reg_a = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  reg_b = _RAND_1[63:0];
  _RAND_2 = {5{`RANDOM}};
  a_in = _RAND_2[128:0];
  _RAND_3 = {5{`RANDOM}};
  b_in = _RAND_3[128:0];
  _RAND_4 = {5{`RANDOM}};
  sum_in = _RAND_4[128:0];
  _RAND_5 = {1{`RANDOM}};
  valid = _RAND_5[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Mul_pipe(
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
  reg [159:0] _RAND_0;
  reg [159:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  cell_0_clock; // @[mul.scala 95:35]
  wire  cell_0_reset; // @[mul.scala 95:35]
  wire  cell_0_io_flush; // @[mul.scala 95:35]
  wire  cell_0_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_0_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_0_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_0_io_sum_in; // @[mul.scala 95:35]
  wire  cell_0_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_0_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_0_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_0_io_sum_out; // @[mul.scala 95:35]
  wire  cell_0_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_0_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_0_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_0_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_0_io_B; // @[mul.scala 95:35]
  wire  cell_1_clock; // @[mul.scala 95:35]
  wire  cell_1_reset; // @[mul.scala 95:35]
  wire  cell_1_io_flush; // @[mul.scala 95:35]
  wire  cell_1_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_1_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_1_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_1_io_sum_in; // @[mul.scala 95:35]
  wire  cell_1_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_1_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_1_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_1_io_sum_out; // @[mul.scala 95:35]
  wire  cell_1_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_1_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_1_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_1_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_1_io_B; // @[mul.scala 95:35]
  wire  cell_2_clock; // @[mul.scala 95:35]
  wire  cell_2_reset; // @[mul.scala 95:35]
  wire  cell_2_io_flush; // @[mul.scala 95:35]
  wire  cell_2_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_2_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_2_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_2_io_sum_in; // @[mul.scala 95:35]
  wire  cell_2_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_2_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_2_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_2_io_sum_out; // @[mul.scala 95:35]
  wire  cell_2_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_2_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_2_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_2_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_2_io_B; // @[mul.scala 95:35]
  wire  cell_3_clock; // @[mul.scala 95:35]
  wire  cell_3_reset; // @[mul.scala 95:35]
  wire  cell_3_io_flush; // @[mul.scala 95:35]
  wire  cell_3_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_3_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_3_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_3_io_sum_in; // @[mul.scala 95:35]
  wire  cell_3_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_3_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_3_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_3_io_sum_out; // @[mul.scala 95:35]
  wire  cell_3_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_3_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_3_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_3_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_3_io_B; // @[mul.scala 95:35]
  wire  cell_4_clock; // @[mul.scala 95:35]
  wire  cell_4_reset; // @[mul.scala 95:35]
  wire  cell_4_io_flush; // @[mul.scala 95:35]
  wire  cell_4_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_4_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_4_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_4_io_sum_in; // @[mul.scala 95:35]
  wire  cell_4_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_4_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_4_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_4_io_sum_out; // @[mul.scala 95:35]
  wire  cell_4_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_4_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_4_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_4_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_4_io_B; // @[mul.scala 95:35]
  wire  cell_5_clock; // @[mul.scala 95:35]
  wire  cell_5_reset; // @[mul.scala 95:35]
  wire  cell_5_io_flush; // @[mul.scala 95:35]
  wire  cell_5_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_5_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_5_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_5_io_sum_in; // @[mul.scala 95:35]
  wire  cell_5_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_5_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_5_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_5_io_sum_out; // @[mul.scala 95:35]
  wire  cell_5_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_5_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_5_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_5_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_5_io_B; // @[mul.scala 95:35]
  wire  cell_6_clock; // @[mul.scala 95:35]
  wire  cell_6_reset; // @[mul.scala 95:35]
  wire  cell_6_io_flush; // @[mul.scala 95:35]
  wire  cell_6_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_6_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_6_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_6_io_sum_in; // @[mul.scala 95:35]
  wire  cell_6_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_6_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_6_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_6_io_sum_out; // @[mul.scala 95:35]
  wire  cell_6_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_6_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_6_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_6_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_6_io_B; // @[mul.scala 95:35]
  wire  cell_7_clock; // @[mul.scala 95:35]
  wire  cell_7_reset; // @[mul.scala 95:35]
  wire  cell_7_io_flush; // @[mul.scala 95:35]
  wire  cell_7_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_7_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_7_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_7_io_sum_in; // @[mul.scala 95:35]
  wire  cell_7_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_7_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_7_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_7_io_sum_out; // @[mul.scala 95:35]
  wire  cell_7_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_7_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_7_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_7_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_7_io_B; // @[mul.scala 95:35]
  wire  cell_8_clock; // @[mul.scala 95:35]
  wire  cell_8_reset; // @[mul.scala 95:35]
  wire  cell_8_io_flush; // @[mul.scala 95:35]
  wire  cell_8_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_8_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_8_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_8_io_sum_in; // @[mul.scala 95:35]
  wire  cell_8_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_8_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_8_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_8_io_sum_out; // @[mul.scala 95:35]
  wire  cell_8_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_8_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_8_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_8_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_8_io_B; // @[mul.scala 95:35]
  wire  cell_9_clock; // @[mul.scala 95:35]
  wire  cell_9_reset; // @[mul.scala 95:35]
  wire  cell_9_io_flush; // @[mul.scala 95:35]
  wire  cell_9_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_9_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_9_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_9_io_sum_in; // @[mul.scala 95:35]
  wire  cell_9_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_9_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_9_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_9_io_sum_out; // @[mul.scala 95:35]
  wire  cell_9_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_9_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_9_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_9_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_9_io_B; // @[mul.scala 95:35]
  wire  cell_10_clock; // @[mul.scala 95:35]
  wire  cell_10_reset; // @[mul.scala 95:35]
  wire  cell_10_io_flush; // @[mul.scala 95:35]
  wire  cell_10_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_10_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_10_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_10_io_sum_in; // @[mul.scala 95:35]
  wire  cell_10_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_10_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_10_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_10_io_sum_out; // @[mul.scala 95:35]
  wire  cell_10_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_10_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_10_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_10_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_10_io_B; // @[mul.scala 95:35]
  wire  cell_11_clock; // @[mul.scala 95:35]
  wire  cell_11_reset; // @[mul.scala 95:35]
  wire  cell_11_io_flush; // @[mul.scala 95:35]
  wire  cell_11_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_11_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_11_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_11_io_sum_in; // @[mul.scala 95:35]
  wire  cell_11_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_11_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_11_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_11_io_sum_out; // @[mul.scala 95:35]
  wire  cell_11_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_11_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_11_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_11_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_11_io_B; // @[mul.scala 95:35]
  wire  cell_12_clock; // @[mul.scala 95:35]
  wire  cell_12_reset; // @[mul.scala 95:35]
  wire  cell_12_io_flush; // @[mul.scala 95:35]
  wire  cell_12_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_12_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_12_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_12_io_sum_in; // @[mul.scala 95:35]
  wire  cell_12_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_12_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_12_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_12_io_sum_out; // @[mul.scala 95:35]
  wire  cell_12_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_12_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_12_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_12_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_12_io_B; // @[mul.scala 95:35]
  wire  cell_13_clock; // @[mul.scala 95:35]
  wire  cell_13_reset; // @[mul.scala 95:35]
  wire  cell_13_io_flush; // @[mul.scala 95:35]
  wire  cell_13_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_13_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_13_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_13_io_sum_in; // @[mul.scala 95:35]
  wire  cell_13_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_13_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_13_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_13_io_sum_out; // @[mul.scala 95:35]
  wire  cell_13_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_13_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_13_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_13_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_13_io_B; // @[mul.scala 95:35]
  wire  cell_14_clock; // @[mul.scala 95:35]
  wire  cell_14_reset; // @[mul.scala 95:35]
  wire  cell_14_io_flush; // @[mul.scala 95:35]
  wire  cell_14_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_14_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_14_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_14_io_sum_in; // @[mul.scala 95:35]
  wire  cell_14_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_14_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_14_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_14_io_sum_out; // @[mul.scala 95:35]
  wire  cell_14_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_14_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_14_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_14_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_14_io_B; // @[mul.scala 95:35]
  wire  cell_15_clock; // @[mul.scala 95:35]
  wire  cell_15_reset; // @[mul.scala 95:35]
  wire  cell_15_io_flush; // @[mul.scala 95:35]
  wire  cell_15_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_15_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_15_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_15_io_sum_in; // @[mul.scala 95:35]
  wire  cell_15_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_15_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_15_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_15_io_sum_out; // @[mul.scala 95:35]
  wire  cell_15_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_15_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_15_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_15_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_15_io_B; // @[mul.scala 95:35]
  wire  cell_16_clock; // @[mul.scala 95:35]
  wire  cell_16_reset; // @[mul.scala 95:35]
  wire  cell_16_io_flush; // @[mul.scala 95:35]
  wire  cell_16_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_16_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_16_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_16_io_sum_in; // @[mul.scala 95:35]
  wire  cell_16_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_16_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_16_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_16_io_sum_out; // @[mul.scala 95:35]
  wire  cell_16_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_16_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_16_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_16_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_16_io_B; // @[mul.scala 95:35]
  wire  cell_17_clock; // @[mul.scala 95:35]
  wire  cell_17_reset; // @[mul.scala 95:35]
  wire  cell_17_io_flush; // @[mul.scala 95:35]
  wire  cell_17_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_17_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_17_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_17_io_sum_in; // @[mul.scala 95:35]
  wire  cell_17_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_17_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_17_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_17_io_sum_out; // @[mul.scala 95:35]
  wire  cell_17_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_17_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_17_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_17_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_17_io_B; // @[mul.scala 95:35]
  wire  cell_18_clock; // @[mul.scala 95:35]
  wire  cell_18_reset; // @[mul.scala 95:35]
  wire  cell_18_io_flush; // @[mul.scala 95:35]
  wire  cell_18_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_18_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_18_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_18_io_sum_in; // @[mul.scala 95:35]
  wire  cell_18_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_18_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_18_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_18_io_sum_out; // @[mul.scala 95:35]
  wire  cell_18_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_18_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_18_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_18_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_18_io_B; // @[mul.scala 95:35]
  wire  cell_19_clock; // @[mul.scala 95:35]
  wire  cell_19_reset; // @[mul.scala 95:35]
  wire  cell_19_io_flush; // @[mul.scala 95:35]
  wire  cell_19_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_19_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_19_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_19_io_sum_in; // @[mul.scala 95:35]
  wire  cell_19_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_19_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_19_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_19_io_sum_out; // @[mul.scala 95:35]
  wire  cell_19_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_19_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_19_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_19_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_19_io_B; // @[mul.scala 95:35]
  wire  cell_20_clock; // @[mul.scala 95:35]
  wire  cell_20_reset; // @[mul.scala 95:35]
  wire  cell_20_io_flush; // @[mul.scala 95:35]
  wire  cell_20_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_20_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_20_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_20_io_sum_in; // @[mul.scala 95:35]
  wire  cell_20_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_20_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_20_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_20_io_sum_out; // @[mul.scala 95:35]
  wire  cell_20_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_20_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_20_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_20_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_20_io_B; // @[mul.scala 95:35]
  wire  cell_21_clock; // @[mul.scala 95:35]
  wire  cell_21_reset; // @[mul.scala 95:35]
  wire  cell_21_io_flush; // @[mul.scala 95:35]
  wire  cell_21_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_21_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_21_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_21_io_sum_in; // @[mul.scala 95:35]
  wire  cell_21_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_21_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_21_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_21_io_sum_out; // @[mul.scala 95:35]
  wire  cell_21_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_21_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_21_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_21_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_21_io_B; // @[mul.scala 95:35]
  wire  cell_22_clock; // @[mul.scala 95:35]
  wire  cell_22_reset; // @[mul.scala 95:35]
  wire  cell_22_io_flush; // @[mul.scala 95:35]
  wire  cell_22_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_22_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_22_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_22_io_sum_in; // @[mul.scala 95:35]
  wire  cell_22_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_22_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_22_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_22_io_sum_out; // @[mul.scala 95:35]
  wire  cell_22_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_22_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_22_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_22_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_22_io_B; // @[mul.scala 95:35]
  wire  cell_23_clock; // @[mul.scala 95:35]
  wire  cell_23_reset; // @[mul.scala 95:35]
  wire  cell_23_io_flush; // @[mul.scala 95:35]
  wire  cell_23_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_23_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_23_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_23_io_sum_in; // @[mul.scala 95:35]
  wire  cell_23_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_23_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_23_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_23_io_sum_out; // @[mul.scala 95:35]
  wire  cell_23_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_23_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_23_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_23_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_23_io_B; // @[mul.scala 95:35]
  wire  cell_24_clock; // @[mul.scala 95:35]
  wire  cell_24_reset; // @[mul.scala 95:35]
  wire  cell_24_io_flush; // @[mul.scala 95:35]
  wire  cell_24_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_24_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_24_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_24_io_sum_in; // @[mul.scala 95:35]
  wire  cell_24_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_24_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_24_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_24_io_sum_out; // @[mul.scala 95:35]
  wire  cell_24_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_24_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_24_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_24_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_24_io_B; // @[mul.scala 95:35]
  wire  cell_25_clock; // @[mul.scala 95:35]
  wire  cell_25_reset; // @[mul.scala 95:35]
  wire  cell_25_io_flush; // @[mul.scala 95:35]
  wire  cell_25_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_25_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_25_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_25_io_sum_in; // @[mul.scala 95:35]
  wire  cell_25_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_25_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_25_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_25_io_sum_out; // @[mul.scala 95:35]
  wire  cell_25_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_25_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_25_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_25_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_25_io_B; // @[mul.scala 95:35]
  wire  cell_26_clock; // @[mul.scala 95:35]
  wire  cell_26_reset; // @[mul.scala 95:35]
  wire  cell_26_io_flush; // @[mul.scala 95:35]
  wire  cell_26_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_26_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_26_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_26_io_sum_in; // @[mul.scala 95:35]
  wire  cell_26_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_26_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_26_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_26_io_sum_out; // @[mul.scala 95:35]
  wire  cell_26_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_26_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_26_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_26_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_26_io_B; // @[mul.scala 95:35]
  wire  cell_27_clock; // @[mul.scala 95:35]
  wire  cell_27_reset; // @[mul.scala 95:35]
  wire  cell_27_io_flush; // @[mul.scala 95:35]
  wire  cell_27_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_27_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_27_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_27_io_sum_in; // @[mul.scala 95:35]
  wire  cell_27_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_27_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_27_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_27_io_sum_out; // @[mul.scala 95:35]
  wire  cell_27_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_27_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_27_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_27_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_27_io_B; // @[mul.scala 95:35]
  wire  cell_28_clock; // @[mul.scala 95:35]
  wire  cell_28_reset; // @[mul.scala 95:35]
  wire  cell_28_io_flush; // @[mul.scala 95:35]
  wire  cell_28_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_28_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_28_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_28_io_sum_in; // @[mul.scala 95:35]
  wire  cell_28_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_28_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_28_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_28_io_sum_out; // @[mul.scala 95:35]
  wire  cell_28_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_28_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_28_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_28_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_28_io_B; // @[mul.scala 95:35]
  wire  cell_29_clock; // @[mul.scala 95:35]
  wire  cell_29_reset; // @[mul.scala 95:35]
  wire  cell_29_io_flush; // @[mul.scala 95:35]
  wire  cell_29_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_29_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_29_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_29_io_sum_in; // @[mul.scala 95:35]
  wire  cell_29_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_29_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_29_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_29_io_sum_out; // @[mul.scala 95:35]
  wire  cell_29_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_29_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_29_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_29_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_29_io_B; // @[mul.scala 95:35]
  wire  cell_30_clock; // @[mul.scala 95:35]
  wire  cell_30_reset; // @[mul.scala 95:35]
  wire  cell_30_io_flush; // @[mul.scala 95:35]
  wire  cell_30_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_30_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_30_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_30_io_sum_in; // @[mul.scala 95:35]
  wire  cell_30_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_30_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_30_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_30_io_sum_out; // @[mul.scala 95:35]
  wire  cell_30_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_30_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_30_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_30_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_30_io_B; // @[mul.scala 95:35]
  wire  cell_31_clock; // @[mul.scala 95:35]
  wire  cell_31_reset; // @[mul.scala 95:35]
  wire  cell_31_io_flush; // @[mul.scala 95:35]
  wire  cell_31_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_31_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_31_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_31_io_sum_in; // @[mul.scala 95:35]
  wire  cell_31_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_31_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_31_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_31_io_sum_out; // @[mul.scala 95:35]
  wire  cell_31_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_31_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_31_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_31_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_31_io_B; // @[mul.scala 95:35]
  wire  cell_32_clock; // @[mul.scala 95:35]
  wire  cell_32_reset; // @[mul.scala 95:35]
  wire  cell_32_io_flush; // @[mul.scala 95:35]
  wire  cell_32_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_32_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_32_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_32_io_sum_in; // @[mul.scala 95:35]
  wire  cell_32_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_32_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_32_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_32_io_sum_out; // @[mul.scala 95:35]
  wire  cell_32_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_32_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_32_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_32_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_32_io_B; // @[mul.scala 95:35]
  wire  cell_33_clock; // @[mul.scala 95:35]
  wire  cell_33_reset; // @[mul.scala 95:35]
  wire  cell_33_io_flush; // @[mul.scala 95:35]
  wire  cell_33_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_33_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_33_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_33_io_sum_in; // @[mul.scala 95:35]
  wire  cell_33_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_33_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_33_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_33_io_sum_out; // @[mul.scala 95:35]
  wire  cell_33_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_33_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_33_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_33_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_33_io_B; // @[mul.scala 95:35]
  wire  cell_34_clock; // @[mul.scala 95:35]
  wire  cell_34_reset; // @[mul.scala 95:35]
  wire  cell_34_io_flush; // @[mul.scala 95:35]
  wire  cell_34_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_34_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_34_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_34_io_sum_in; // @[mul.scala 95:35]
  wire  cell_34_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_34_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_34_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_34_io_sum_out; // @[mul.scala 95:35]
  wire  cell_34_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_34_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_34_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_34_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_34_io_B; // @[mul.scala 95:35]
  wire  cell_35_clock; // @[mul.scala 95:35]
  wire  cell_35_reset; // @[mul.scala 95:35]
  wire  cell_35_io_flush; // @[mul.scala 95:35]
  wire  cell_35_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_35_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_35_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_35_io_sum_in; // @[mul.scala 95:35]
  wire  cell_35_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_35_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_35_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_35_io_sum_out; // @[mul.scala 95:35]
  wire  cell_35_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_35_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_35_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_35_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_35_io_B; // @[mul.scala 95:35]
  wire  cell_36_clock; // @[mul.scala 95:35]
  wire  cell_36_reset; // @[mul.scala 95:35]
  wire  cell_36_io_flush; // @[mul.scala 95:35]
  wire  cell_36_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_36_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_36_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_36_io_sum_in; // @[mul.scala 95:35]
  wire  cell_36_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_36_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_36_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_36_io_sum_out; // @[mul.scala 95:35]
  wire  cell_36_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_36_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_36_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_36_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_36_io_B; // @[mul.scala 95:35]
  wire  cell_37_clock; // @[mul.scala 95:35]
  wire  cell_37_reset; // @[mul.scala 95:35]
  wire  cell_37_io_flush; // @[mul.scala 95:35]
  wire  cell_37_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_37_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_37_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_37_io_sum_in; // @[mul.scala 95:35]
  wire  cell_37_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_37_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_37_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_37_io_sum_out; // @[mul.scala 95:35]
  wire  cell_37_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_37_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_37_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_37_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_37_io_B; // @[mul.scala 95:35]
  wire  cell_38_clock; // @[mul.scala 95:35]
  wire  cell_38_reset; // @[mul.scala 95:35]
  wire  cell_38_io_flush; // @[mul.scala 95:35]
  wire  cell_38_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_38_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_38_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_38_io_sum_in; // @[mul.scala 95:35]
  wire  cell_38_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_38_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_38_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_38_io_sum_out; // @[mul.scala 95:35]
  wire  cell_38_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_38_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_38_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_38_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_38_io_B; // @[mul.scala 95:35]
  wire  cell_39_clock; // @[mul.scala 95:35]
  wire  cell_39_reset; // @[mul.scala 95:35]
  wire  cell_39_io_flush; // @[mul.scala 95:35]
  wire  cell_39_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_39_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_39_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_39_io_sum_in; // @[mul.scala 95:35]
  wire  cell_39_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_39_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_39_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_39_io_sum_out; // @[mul.scala 95:35]
  wire  cell_39_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_39_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_39_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_39_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_39_io_B; // @[mul.scala 95:35]
  wire  cell_40_clock; // @[mul.scala 95:35]
  wire  cell_40_reset; // @[mul.scala 95:35]
  wire  cell_40_io_flush; // @[mul.scala 95:35]
  wire  cell_40_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_40_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_40_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_40_io_sum_in; // @[mul.scala 95:35]
  wire  cell_40_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_40_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_40_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_40_io_sum_out; // @[mul.scala 95:35]
  wire  cell_40_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_40_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_40_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_40_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_40_io_B; // @[mul.scala 95:35]
  wire  cell_41_clock; // @[mul.scala 95:35]
  wire  cell_41_reset; // @[mul.scala 95:35]
  wire  cell_41_io_flush; // @[mul.scala 95:35]
  wire  cell_41_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_41_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_41_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_41_io_sum_in; // @[mul.scala 95:35]
  wire  cell_41_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_41_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_41_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_41_io_sum_out; // @[mul.scala 95:35]
  wire  cell_41_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_41_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_41_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_41_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_41_io_B; // @[mul.scala 95:35]
  wire  cell_42_clock; // @[mul.scala 95:35]
  wire  cell_42_reset; // @[mul.scala 95:35]
  wire  cell_42_io_flush; // @[mul.scala 95:35]
  wire  cell_42_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_42_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_42_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_42_io_sum_in; // @[mul.scala 95:35]
  wire  cell_42_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_42_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_42_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_42_io_sum_out; // @[mul.scala 95:35]
  wire  cell_42_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_42_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_42_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_42_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_42_io_B; // @[mul.scala 95:35]
  wire  cell_43_clock; // @[mul.scala 95:35]
  wire  cell_43_reset; // @[mul.scala 95:35]
  wire  cell_43_io_flush; // @[mul.scala 95:35]
  wire  cell_43_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_43_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_43_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_43_io_sum_in; // @[mul.scala 95:35]
  wire  cell_43_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_43_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_43_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_43_io_sum_out; // @[mul.scala 95:35]
  wire  cell_43_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_43_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_43_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_43_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_43_io_B; // @[mul.scala 95:35]
  wire  cell_44_clock; // @[mul.scala 95:35]
  wire  cell_44_reset; // @[mul.scala 95:35]
  wire  cell_44_io_flush; // @[mul.scala 95:35]
  wire  cell_44_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_44_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_44_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_44_io_sum_in; // @[mul.scala 95:35]
  wire  cell_44_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_44_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_44_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_44_io_sum_out; // @[mul.scala 95:35]
  wire  cell_44_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_44_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_44_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_44_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_44_io_B; // @[mul.scala 95:35]
  wire  cell_45_clock; // @[mul.scala 95:35]
  wire  cell_45_reset; // @[mul.scala 95:35]
  wire  cell_45_io_flush; // @[mul.scala 95:35]
  wire  cell_45_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_45_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_45_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_45_io_sum_in; // @[mul.scala 95:35]
  wire  cell_45_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_45_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_45_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_45_io_sum_out; // @[mul.scala 95:35]
  wire  cell_45_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_45_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_45_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_45_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_45_io_B; // @[mul.scala 95:35]
  wire  cell_46_clock; // @[mul.scala 95:35]
  wire  cell_46_reset; // @[mul.scala 95:35]
  wire  cell_46_io_flush; // @[mul.scala 95:35]
  wire  cell_46_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_46_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_46_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_46_io_sum_in; // @[mul.scala 95:35]
  wire  cell_46_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_46_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_46_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_46_io_sum_out; // @[mul.scala 95:35]
  wire  cell_46_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_46_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_46_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_46_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_46_io_B; // @[mul.scala 95:35]
  wire  cell_47_clock; // @[mul.scala 95:35]
  wire  cell_47_reset; // @[mul.scala 95:35]
  wire  cell_47_io_flush; // @[mul.scala 95:35]
  wire  cell_47_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_47_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_47_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_47_io_sum_in; // @[mul.scala 95:35]
  wire  cell_47_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_47_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_47_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_47_io_sum_out; // @[mul.scala 95:35]
  wire  cell_47_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_47_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_47_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_47_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_47_io_B; // @[mul.scala 95:35]
  wire  cell_48_clock; // @[mul.scala 95:35]
  wire  cell_48_reset; // @[mul.scala 95:35]
  wire  cell_48_io_flush; // @[mul.scala 95:35]
  wire  cell_48_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_48_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_48_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_48_io_sum_in; // @[mul.scala 95:35]
  wire  cell_48_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_48_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_48_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_48_io_sum_out; // @[mul.scala 95:35]
  wire  cell_48_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_48_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_48_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_48_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_48_io_B; // @[mul.scala 95:35]
  wire  cell_49_clock; // @[mul.scala 95:35]
  wire  cell_49_reset; // @[mul.scala 95:35]
  wire  cell_49_io_flush; // @[mul.scala 95:35]
  wire  cell_49_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_49_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_49_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_49_io_sum_in; // @[mul.scala 95:35]
  wire  cell_49_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_49_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_49_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_49_io_sum_out; // @[mul.scala 95:35]
  wire  cell_49_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_49_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_49_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_49_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_49_io_B; // @[mul.scala 95:35]
  wire  cell_50_clock; // @[mul.scala 95:35]
  wire  cell_50_reset; // @[mul.scala 95:35]
  wire  cell_50_io_flush; // @[mul.scala 95:35]
  wire  cell_50_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_50_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_50_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_50_io_sum_in; // @[mul.scala 95:35]
  wire  cell_50_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_50_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_50_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_50_io_sum_out; // @[mul.scala 95:35]
  wire  cell_50_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_50_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_50_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_50_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_50_io_B; // @[mul.scala 95:35]
  wire  cell_51_clock; // @[mul.scala 95:35]
  wire  cell_51_reset; // @[mul.scala 95:35]
  wire  cell_51_io_flush; // @[mul.scala 95:35]
  wire  cell_51_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_51_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_51_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_51_io_sum_in; // @[mul.scala 95:35]
  wire  cell_51_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_51_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_51_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_51_io_sum_out; // @[mul.scala 95:35]
  wire  cell_51_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_51_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_51_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_51_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_51_io_B; // @[mul.scala 95:35]
  wire  cell_52_clock; // @[mul.scala 95:35]
  wire  cell_52_reset; // @[mul.scala 95:35]
  wire  cell_52_io_flush; // @[mul.scala 95:35]
  wire  cell_52_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_52_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_52_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_52_io_sum_in; // @[mul.scala 95:35]
  wire  cell_52_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_52_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_52_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_52_io_sum_out; // @[mul.scala 95:35]
  wire  cell_52_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_52_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_52_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_52_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_52_io_B; // @[mul.scala 95:35]
  wire  cell_53_clock; // @[mul.scala 95:35]
  wire  cell_53_reset; // @[mul.scala 95:35]
  wire  cell_53_io_flush; // @[mul.scala 95:35]
  wire  cell_53_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_53_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_53_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_53_io_sum_in; // @[mul.scala 95:35]
  wire  cell_53_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_53_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_53_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_53_io_sum_out; // @[mul.scala 95:35]
  wire  cell_53_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_53_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_53_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_53_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_53_io_B; // @[mul.scala 95:35]
  wire  cell_54_clock; // @[mul.scala 95:35]
  wire  cell_54_reset; // @[mul.scala 95:35]
  wire  cell_54_io_flush; // @[mul.scala 95:35]
  wire  cell_54_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_54_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_54_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_54_io_sum_in; // @[mul.scala 95:35]
  wire  cell_54_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_54_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_54_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_54_io_sum_out; // @[mul.scala 95:35]
  wire  cell_54_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_54_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_54_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_54_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_54_io_B; // @[mul.scala 95:35]
  wire  cell_55_clock; // @[mul.scala 95:35]
  wire  cell_55_reset; // @[mul.scala 95:35]
  wire  cell_55_io_flush; // @[mul.scala 95:35]
  wire  cell_55_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_55_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_55_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_55_io_sum_in; // @[mul.scala 95:35]
  wire  cell_55_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_55_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_55_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_55_io_sum_out; // @[mul.scala 95:35]
  wire  cell_55_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_55_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_55_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_55_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_55_io_B; // @[mul.scala 95:35]
  wire  cell_56_clock; // @[mul.scala 95:35]
  wire  cell_56_reset; // @[mul.scala 95:35]
  wire  cell_56_io_flush; // @[mul.scala 95:35]
  wire  cell_56_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_56_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_56_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_56_io_sum_in; // @[mul.scala 95:35]
  wire  cell_56_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_56_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_56_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_56_io_sum_out; // @[mul.scala 95:35]
  wire  cell_56_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_56_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_56_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_56_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_56_io_B; // @[mul.scala 95:35]
  wire  cell_57_clock; // @[mul.scala 95:35]
  wire  cell_57_reset; // @[mul.scala 95:35]
  wire  cell_57_io_flush; // @[mul.scala 95:35]
  wire  cell_57_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_57_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_57_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_57_io_sum_in; // @[mul.scala 95:35]
  wire  cell_57_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_57_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_57_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_57_io_sum_out; // @[mul.scala 95:35]
  wire  cell_57_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_57_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_57_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_57_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_57_io_B; // @[mul.scala 95:35]
  wire  cell_58_clock; // @[mul.scala 95:35]
  wire  cell_58_reset; // @[mul.scala 95:35]
  wire  cell_58_io_flush; // @[mul.scala 95:35]
  wire  cell_58_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_58_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_58_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_58_io_sum_in; // @[mul.scala 95:35]
  wire  cell_58_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_58_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_58_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_58_io_sum_out; // @[mul.scala 95:35]
  wire  cell_58_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_58_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_58_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_58_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_58_io_B; // @[mul.scala 95:35]
  wire  cell_59_clock; // @[mul.scala 95:35]
  wire  cell_59_reset; // @[mul.scala 95:35]
  wire  cell_59_io_flush; // @[mul.scala 95:35]
  wire  cell_59_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_59_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_59_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_59_io_sum_in; // @[mul.scala 95:35]
  wire  cell_59_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_59_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_59_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_59_io_sum_out; // @[mul.scala 95:35]
  wire  cell_59_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_59_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_59_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_59_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_59_io_B; // @[mul.scala 95:35]
  wire  cell_60_clock; // @[mul.scala 95:35]
  wire  cell_60_reset; // @[mul.scala 95:35]
  wire  cell_60_io_flush; // @[mul.scala 95:35]
  wire  cell_60_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_60_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_60_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_60_io_sum_in; // @[mul.scala 95:35]
  wire  cell_60_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_60_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_60_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_60_io_sum_out; // @[mul.scala 95:35]
  wire  cell_60_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_60_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_60_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_60_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_60_io_B; // @[mul.scala 95:35]
  wire  cell_61_clock; // @[mul.scala 95:35]
  wire  cell_61_reset; // @[mul.scala 95:35]
  wire  cell_61_io_flush; // @[mul.scala 95:35]
  wire  cell_61_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_61_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_61_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_61_io_sum_in; // @[mul.scala 95:35]
  wire  cell_61_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_61_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_61_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_61_io_sum_out; // @[mul.scala 95:35]
  wire  cell_61_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_61_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_61_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_61_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_61_io_B; // @[mul.scala 95:35]
  wire  cell_62_clock; // @[mul.scala 95:35]
  wire  cell_62_reset; // @[mul.scala 95:35]
  wire  cell_62_io_flush; // @[mul.scala 95:35]
  wire  cell_62_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_62_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_62_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_62_io_sum_in; // @[mul.scala 95:35]
  wire  cell_62_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_62_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_62_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_62_io_sum_out; // @[mul.scala 95:35]
  wire  cell_62_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_62_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_62_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_62_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_62_io_B; // @[mul.scala 95:35]
  wire  cell_63_clock; // @[mul.scala 95:35]
  wire  cell_63_reset; // @[mul.scala 95:35]
  wire  cell_63_io_flush; // @[mul.scala 95:35]
  wire  cell_63_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_63_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_63_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_63_io_sum_in; // @[mul.scala 95:35]
  wire  cell_63_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_63_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_63_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_63_io_sum_out; // @[mul.scala 95:35]
  wire  cell_63_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_63_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_63_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_63_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_63_io_B; // @[mul.scala 95:35]
  wire  cell_64_clock; // @[mul.scala 95:35]
  wire  cell_64_reset; // @[mul.scala 95:35]
  wire  cell_64_io_flush; // @[mul.scala 95:35]
  wire  cell_64_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_64_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_64_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_64_io_sum_in; // @[mul.scala 95:35]
  wire  cell_64_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_64_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_64_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_64_io_sum_out; // @[mul.scala 95:35]
  wire  cell_64_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_64_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_64_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_64_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_64_io_B; // @[mul.scala 95:35]
  reg [128:0] a; // @[mul.scala 77:20]
  reg [128:0] b; // @[mul.scala 78:20]
  reg  valid; // @[mul.scala 79:24]
  wire  _a_T_2 = io_mul_valid & io_mul_signed[1]; // @[mul.scala 82:26]
  wire [96:0] _a_T_7 = io_multiplicand[31] ? 97'h1ffffffffffffffffffffffff : 97'h0; // @[Bitwise.scala 77:12]
  wire [160:0] _a_T_8 = {_a_T_7,io_multiplicand}; // @[Cat.scala 33:92]
  wire  _a_T_11 = ~io_mulw; // @[mul.scala 83:45]
  wire [64:0] _a_T_16 = io_multiplicand[63] ? 65'h1ffffffffffffffff : 65'h0; // @[Bitwise.scala 77:12]
  wire [128:0] _a_T_17 = {_a_T_16,io_multiplicand}; // @[Cat.scala 33:92]
  wire [128:0] _a_T_19 = io_mul_valid ? {{65'd0}, io_multiplicand} : a; // @[mul.scala 84:12]
  wire [128:0] _a_T_20 = _a_T_2 & ~io_mulw ? _a_T_17 : _a_T_19; // @[mul.scala 83:12]
  wire [160:0] _a_T_21 = io_mul_valid & io_mul_signed[1] & io_mulw ? _a_T_8 : {{32'd0}, _a_T_20}; // @[mul.scala 82:12]
  wire [160:0] _a_T_22 = io_flush ? 161'h0 : _a_T_21; // @[mul.scala 81:12]
  wire  _b_T_2 = io_mul_valid & io_mul_signed[0]; // @[mul.scala 88:26]
  wire [96:0] _b_T_7 = io_multiplier[31] ? 97'h1ffffffffffffffffffffffff : 97'h0; // @[Bitwise.scala 77:12]
  wire [160:0] _b_T_8 = {_b_T_7,io_multiplier}; // @[Cat.scala 33:92]
  wire [64:0] _b_T_16 = io_multiplier[63] ? 65'h1ffffffffffffffff : 65'h0; // @[Bitwise.scala 77:12]
  wire [128:0] _b_T_17 = {_b_T_16,io_multiplier}; // @[Cat.scala 33:92]
  wire [128:0] _b_T_19 = io_mul_valid ? {{65'd0}, io_multiplier} : b; // @[mul.scala 90:12]
  wire [128:0] _b_T_20 = _b_T_2 & _a_T_11 ? _b_T_17 : _b_T_19; // @[mul.scala 89:12]
  wire [160:0] _b_T_21 = io_mul_valid & io_mul_signed[0] & io_mulw ? _b_T_8 : {{32'd0}, _b_T_20}; // @[mul.scala 88:12]
  wire [160:0] _b_T_22 = io_flush ? 161'h0 : _b_T_21; // @[mul.scala 87:12]
  wire [127:0] _T_1 = cell_64_io_A * cell_64_io_B; // @[mul.scala 124:64]
  wire [128:0] _GEN_0 = {{1'd0}, _T_1}; // @[mul.scala 124:45]
  wire [160:0] _GEN_1 = reset ? 161'h0 : _a_T_22; // @[mul.scala 77:{20,20} 81:7]
  wire [160:0] _GEN_2 = reset ? 161'h0 : _b_T_22; // @[mul.scala 78:{20,20} 87:7]
  mul_cell cell_0 ( // @[mul.scala 95:35]
    .clock(cell_0_clock),
    .reset(cell_0_reset),
    .io_flush(cell_0_io_flush),
    .io_valid(cell_0_io_valid),
    .io_a_in(cell_0_io_a_in),
    .io_b_in(cell_0_io_b_in),
    .io_sum_in(cell_0_io_sum_in),
    .io_last(cell_0_io_last),
    .io_a_out(cell_0_io_a_out),
    .io_b_out(cell_0_io_b_out),
    .io_sum_out(cell_0_io_sum_out),
    .io_ready(cell_0_io_ready),
    .io_a(cell_0_io_a),
    .io_b(cell_0_io_b),
    .io_A(cell_0_io_A),
    .io_B(cell_0_io_B)
  );
  mul_cell cell_1 ( // @[mul.scala 95:35]
    .clock(cell_1_clock),
    .reset(cell_1_reset),
    .io_flush(cell_1_io_flush),
    .io_valid(cell_1_io_valid),
    .io_a_in(cell_1_io_a_in),
    .io_b_in(cell_1_io_b_in),
    .io_sum_in(cell_1_io_sum_in),
    .io_last(cell_1_io_last),
    .io_a_out(cell_1_io_a_out),
    .io_b_out(cell_1_io_b_out),
    .io_sum_out(cell_1_io_sum_out),
    .io_ready(cell_1_io_ready),
    .io_a(cell_1_io_a),
    .io_b(cell_1_io_b),
    .io_A(cell_1_io_A),
    .io_B(cell_1_io_B)
  );
  mul_cell cell_2 ( // @[mul.scala 95:35]
    .clock(cell_2_clock),
    .reset(cell_2_reset),
    .io_flush(cell_2_io_flush),
    .io_valid(cell_2_io_valid),
    .io_a_in(cell_2_io_a_in),
    .io_b_in(cell_2_io_b_in),
    .io_sum_in(cell_2_io_sum_in),
    .io_last(cell_2_io_last),
    .io_a_out(cell_2_io_a_out),
    .io_b_out(cell_2_io_b_out),
    .io_sum_out(cell_2_io_sum_out),
    .io_ready(cell_2_io_ready),
    .io_a(cell_2_io_a),
    .io_b(cell_2_io_b),
    .io_A(cell_2_io_A),
    .io_B(cell_2_io_B)
  );
  mul_cell cell_3 ( // @[mul.scala 95:35]
    .clock(cell_3_clock),
    .reset(cell_3_reset),
    .io_flush(cell_3_io_flush),
    .io_valid(cell_3_io_valid),
    .io_a_in(cell_3_io_a_in),
    .io_b_in(cell_3_io_b_in),
    .io_sum_in(cell_3_io_sum_in),
    .io_last(cell_3_io_last),
    .io_a_out(cell_3_io_a_out),
    .io_b_out(cell_3_io_b_out),
    .io_sum_out(cell_3_io_sum_out),
    .io_ready(cell_3_io_ready),
    .io_a(cell_3_io_a),
    .io_b(cell_3_io_b),
    .io_A(cell_3_io_A),
    .io_B(cell_3_io_B)
  );
  mul_cell cell_4 ( // @[mul.scala 95:35]
    .clock(cell_4_clock),
    .reset(cell_4_reset),
    .io_flush(cell_4_io_flush),
    .io_valid(cell_4_io_valid),
    .io_a_in(cell_4_io_a_in),
    .io_b_in(cell_4_io_b_in),
    .io_sum_in(cell_4_io_sum_in),
    .io_last(cell_4_io_last),
    .io_a_out(cell_4_io_a_out),
    .io_b_out(cell_4_io_b_out),
    .io_sum_out(cell_4_io_sum_out),
    .io_ready(cell_4_io_ready),
    .io_a(cell_4_io_a),
    .io_b(cell_4_io_b),
    .io_A(cell_4_io_A),
    .io_B(cell_4_io_B)
  );
  mul_cell cell_5 ( // @[mul.scala 95:35]
    .clock(cell_5_clock),
    .reset(cell_5_reset),
    .io_flush(cell_5_io_flush),
    .io_valid(cell_5_io_valid),
    .io_a_in(cell_5_io_a_in),
    .io_b_in(cell_5_io_b_in),
    .io_sum_in(cell_5_io_sum_in),
    .io_last(cell_5_io_last),
    .io_a_out(cell_5_io_a_out),
    .io_b_out(cell_5_io_b_out),
    .io_sum_out(cell_5_io_sum_out),
    .io_ready(cell_5_io_ready),
    .io_a(cell_5_io_a),
    .io_b(cell_5_io_b),
    .io_A(cell_5_io_A),
    .io_B(cell_5_io_B)
  );
  mul_cell cell_6 ( // @[mul.scala 95:35]
    .clock(cell_6_clock),
    .reset(cell_6_reset),
    .io_flush(cell_6_io_flush),
    .io_valid(cell_6_io_valid),
    .io_a_in(cell_6_io_a_in),
    .io_b_in(cell_6_io_b_in),
    .io_sum_in(cell_6_io_sum_in),
    .io_last(cell_6_io_last),
    .io_a_out(cell_6_io_a_out),
    .io_b_out(cell_6_io_b_out),
    .io_sum_out(cell_6_io_sum_out),
    .io_ready(cell_6_io_ready),
    .io_a(cell_6_io_a),
    .io_b(cell_6_io_b),
    .io_A(cell_6_io_A),
    .io_B(cell_6_io_B)
  );
  mul_cell cell_7 ( // @[mul.scala 95:35]
    .clock(cell_7_clock),
    .reset(cell_7_reset),
    .io_flush(cell_7_io_flush),
    .io_valid(cell_7_io_valid),
    .io_a_in(cell_7_io_a_in),
    .io_b_in(cell_7_io_b_in),
    .io_sum_in(cell_7_io_sum_in),
    .io_last(cell_7_io_last),
    .io_a_out(cell_7_io_a_out),
    .io_b_out(cell_7_io_b_out),
    .io_sum_out(cell_7_io_sum_out),
    .io_ready(cell_7_io_ready),
    .io_a(cell_7_io_a),
    .io_b(cell_7_io_b),
    .io_A(cell_7_io_A),
    .io_B(cell_7_io_B)
  );
  mul_cell cell_8 ( // @[mul.scala 95:35]
    .clock(cell_8_clock),
    .reset(cell_8_reset),
    .io_flush(cell_8_io_flush),
    .io_valid(cell_8_io_valid),
    .io_a_in(cell_8_io_a_in),
    .io_b_in(cell_8_io_b_in),
    .io_sum_in(cell_8_io_sum_in),
    .io_last(cell_8_io_last),
    .io_a_out(cell_8_io_a_out),
    .io_b_out(cell_8_io_b_out),
    .io_sum_out(cell_8_io_sum_out),
    .io_ready(cell_8_io_ready),
    .io_a(cell_8_io_a),
    .io_b(cell_8_io_b),
    .io_A(cell_8_io_A),
    .io_B(cell_8_io_B)
  );
  mul_cell cell_9 ( // @[mul.scala 95:35]
    .clock(cell_9_clock),
    .reset(cell_9_reset),
    .io_flush(cell_9_io_flush),
    .io_valid(cell_9_io_valid),
    .io_a_in(cell_9_io_a_in),
    .io_b_in(cell_9_io_b_in),
    .io_sum_in(cell_9_io_sum_in),
    .io_last(cell_9_io_last),
    .io_a_out(cell_9_io_a_out),
    .io_b_out(cell_9_io_b_out),
    .io_sum_out(cell_9_io_sum_out),
    .io_ready(cell_9_io_ready),
    .io_a(cell_9_io_a),
    .io_b(cell_9_io_b),
    .io_A(cell_9_io_A),
    .io_B(cell_9_io_B)
  );
  mul_cell cell_10 ( // @[mul.scala 95:35]
    .clock(cell_10_clock),
    .reset(cell_10_reset),
    .io_flush(cell_10_io_flush),
    .io_valid(cell_10_io_valid),
    .io_a_in(cell_10_io_a_in),
    .io_b_in(cell_10_io_b_in),
    .io_sum_in(cell_10_io_sum_in),
    .io_last(cell_10_io_last),
    .io_a_out(cell_10_io_a_out),
    .io_b_out(cell_10_io_b_out),
    .io_sum_out(cell_10_io_sum_out),
    .io_ready(cell_10_io_ready),
    .io_a(cell_10_io_a),
    .io_b(cell_10_io_b),
    .io_A(cell_10_io_A),
    .io_B(cell_10_io_B)
  );
  mul_cell cell_11 ( // @[mul.scala 95:35]
    .clock(cell_11_clock),
    .reset(cell_11_reset),
    .io_flush(cell_11_io_flush),
    .io_valid(cell_11_io_valid),
    .io_a_in(cell_11_io_a_in),
    .io_b_in(cell_11_io_b_in),
    .io_sum_in(cell_11_io_sum_in),
    .io_last(cell_11_io_last),
    .io_a_out(cell_11_io_a_out),
    .io_b_out(cell_11_io_b_out),
    .io_sum_out(cell_11_io_sum_out),
    .io_ready(cell_11_io_ready),
    .io_a(cell_11_io_a),
    .io_b(cell_11_io_b),
    .io_A(cell_11_io_A),
    .io_B(cell_11_io_B)
  );
  mul_cell cell_12 ( // @[mul.scala 95:35]
    .clock(cell_12_clock),
    .reset(cell_12_reset),
    .io_flush(cell_12_io_flush),
    .io_valid(cell_12_io_valid),
    .io_a_in(cell_12_io_a_in),
    .io_b_in(cell_12_io_b_in),
    .io_sum_in(cell_12_io_sum_in),
    .io_last(cell_12_io_last),
    .io_a_out(cell_12_io_a_out),
    .io_b_out(cell_12_io_b_out),
    .io_sum_out(cell_12_io_sum_out),
    .io_ready(cell_12_io_ready),
    .io_a(cell_12_io_a),
    .io_b(cell_12_io_b),
    .io_A(cell_12_io_A),
    .io_B(cell_12_io_B)
  );
  mul_cell cell_13 ( // @[mul.scala 95:35]
    .clock(cell_13_clock),
    .reset(cell_13_reset),
    .io_flush(cell_13_io_flush),
    .io_valid(cell_13_io_valid),
    .io_a_in(cell_13_io_a_in),
    .io_b_in(cell_13_io_b_in),
    .io_sum_in(cell_13_io_sum_in),
    .io_last(cell_13_io_last),
    .io_a_out(cell_13_io_a_out),
    .io_b_out(cell_13_io_b_out),
    .io_sum_out(cell_13_io_sum_out),
    .io_ready(cell_13_io_ready),
    .io_a(cell_13_io_a),
    .io_b(cell_13_io_b),
    .io_A(cell_13_io_A),
    .io_B(cell_13_io_B)
  );
  mul_cell cell_14 ( // @[mul.scala 95:35]
    .clock(cell_14_clock),
    .reset(cell_14_reset),
    .io_flush(cell_14_io_flush),
    .io_valid(cell_14_io_valid),
    .io_a_in(cell_14_io_a_in),
    .io_b_in(cell_14_io_b_in),
    .io_sum_in(cell_14_io_sum_in),
    .io_last(cell_14_io_last),
    .io_a_out(cell_14_io_a_out),
    .io_b_out(cell_14_io_b_out),
    .io_sum_out(cell_14_io_sum_out),
    .io_ready(cell_14_io_ready),
    .io_a(cell_14_io_a),
    .io_b(cell_14_io_b),
    .io_A(cell_14_io_A),
    .io_B(cell_14_io_B)
  );
  mul_cell cell_15 ( // @[mul.scala 95:35]
    .clock(cell_15_clock),
    .reset(cell_15_reset),
    .io_flush(cell_15_io_flush),
    .io_valid(cell_15_io_valid),
    .io_a_in(cell_15_io_a_in),
    .io_b_in(cell_15_io_b_in),
    .io_sum_in(cell_15_io_sum_in),
    .io_last(cell_15_io_last),
    .io_a_out(cell_15_io_a_out),
    .io_b_out(cell_15_io_b_out),
    .io_sum_out(cell_15_io_sum_out),
    .io_ready(cell_15_io_ready),
    .io_a(cell_15_io_a),
    .io_b(cell_15_io_b),
    .io_A(cell_15_io_A),
    .io_B(cell_15_io_B)
  );
  mul_cell cell_16 ( // @[mul.scala 95:35]
    .clock(cell_16_clock),
    .reset(cell_16_reset),
    .io_flush(cell_16_io_flush),
    .io_valid(cell_16_io_valid),
    .io_a_in(cell_16_io_a_in),
    .io_b_in(cell_16_io_b_in),
    .io_sum_in(cell_16_io_sum_in),
    .io_last(cell_16_io_last),
    .io_a_out(cell_16_io_a_out),
    .io_b_out(cell_16_io_b_out),
    .io_sum_out(cell_16_io_sum_out),
    .io_ready(cell_16_io_ready),
    .io_a(cell_16_io_a),
    .io_b(cell_16_io_b),
    .io_A(cell_16_io_A),
    .io_B(cell_16_io_B)
  );
  mul_cell cell_17 ( // @[mul.scala 95:35]
    .clock(cell_17_clock),
    .reset(cell_17_reset),
    .io_flush(cell_17_io_flush),
    .io_valid(cell_17_io_valid),
    .io_a_in(cell_17_io_a_in),
    .io_b_in(cell_17_io_b_in),
    .io_sum_in(cell_17_io_sum_in),
    .io_last(cell_17_io_last),
    .io_a_out(cell_17_io_a_out),
    .io_b_out(cell_17_io_b_out),
    .io_sum_out(cell_17_io_sum_out),
    .io_ready(cell_17_io_ready),
    .io_a(cell_17_io_a),
    .io_b(cell_17_io_b),
    .io_A(cell_17_io_A),
    .io_B(cell_17_io_B)
  );
  mul_cell cell_18 ( // @[mul.scala 95:35]
    .clock(cell_18_clock),
    .reset(cell_18_reset),
    .io_flush(cell_18_io_flush),
    .io_valid(cell_18_io_valid),
    .io_a_in(cell_18_io_a_in),
    .io_b_in(cell_18_io_b_in),
    .io_sum_in(cell_18_io_sum_in),
    .io_last(cell_18_io_last),
    .io_a_out(cell_18_io_a_out),
    .io_b_out(cell_18_io_b_out),
    .io_sum_out(cell_18_io_sum_out),
    .io_ready(cell_18_io_ready),
    .io_a(cell_18_io_a),
    .io_b(cell_18_io_b),
    .io_A(cell_18_io_A),
    .io_B(cell_18_io_B)
  );
  mul_cell cell_19 ( // @[mul.scala 95:35]
    .clock(cell_19_clock),
    .reset(cell_19_reset),
    .io_flush(cell_19_io_flush),
    .io_valid(cell_19_io_valid),
    .io_a_in(cell_19_io_a_in),
    .io_b_in(cell_19_io_b_in),
    .io_sum_in(cell_19_io_sum_in),
    .io_last(cell_19_io_last),
    .io_a_out(cell_19_io_a_out),
    .io_b_out(cell_19_io_b_out),
    .io_sum_out(cell_19_io_sum_out),
    .io_ready(cell_19_io_ready),
    .io_a(cell_19_io_a),
    .io_b(cell_19_io_b),
    .io_A(cell_19_io_A),
    .io_B(cell_19_io_B)
  );
  mul_cell cell_20 ( // @[mul.scala 95:35]
    .clock(cell_20_clock),
    .reset(cell_20_reset),
    .io_flush(cell_20_io_flush),
    .io_valid(cell_20_io_valid),
    .io_a_in(cell_20_io_a_in),
    .io_b_in(cell_20_io_b_in),
    .io_sum_in(cell_20_io_sum_in),
    .io_last(cell_20_io_last),
    .io_a_out(cell_20_io_a_out),
    .io_b_out(cell_20_io_b_out),
    .io_sum_out(cell_20_io_sum_out),
    .io_ready(cell_20_io_ready),
    .io_a(cell_20_io_a),
    .io_b(cell_20_io_b),
    .io_A(cell_20_io_A),
    .io_B(cell_20_io_B)
  );
  mul_cell cell_21 ( // @[mul.scala 95:35]
    .clock(cell_21_clock),
    .reset(cell_21_reset),
    .io_flush(cell_21_io_flush),
    .io_valid(cell_21_io_valid),
    .io_a_in(cell_21_io_a_in),
    .io_b_in(cell_21_io_b_in),
    .io_sum_in(cell_21_io_sum_in),
    .io_last(cell_21_io_last),
    .io_a_out(cell_21_io_a_out),
    .io_b_out(cell_21_io_b_out),
    .io_sum_out(cell_21_io_sum_out),
    .io_ready(cell_21_io_ready),
    .io_a(cell_21_io_a),
    .io_b(cell_21_io_b),
    .io_A(cell_21_io_A),
    .io_B(cell_21_io_B)
  );
  mul_cell cell_22 ( // @[mul.scala 95:35]
    .clock(cell_22_clock),
    .reset(cell_22_reset),
    .io_flush(cell_22_io_flush),
    .io_valid(cell_22_io_valid),
    .io_a_in(cell_22_io_a_in),
    .io_b_in(cell_22_io_b_in),
    .io_sum_in(cell_22_io_sum_in),
    .io_last(cell_22_io_last),
    .io_a_out(cell_22_io_a_out),
    .io_b_out(cell_22_io_b_out),
    .io_sum_out(cell_22_io_sum_out),
    .io_ready(cell_22_io_ready),
    .io_a(cell_22_io_a),
    .io_b(cell_22_io_b),
    .io_A(cell_22_io_A),
    .io_B(cell_22_io_B)
  );
  mul_cell cell_23 ( // @[mul.scala 95:35]
    .clock(cell_23_clock),
    .reset(cell_23_reset),
    .io_flush(cell_23_io_flush),
    .io_valid(cell_23_io_valid),
    .io_a_in(cell_23_io_a_in),
    .io_b_in(cell_23_io_b_in),
    .io_sum_in(cell_23_io_sum_in),
    .io_last(cell_23_io_last),
    .io_a_out(cell_23_io_a_out),
    .io_b_out(cell_23_io_b_out),
    .io_sum_out(cell_23_io_sum_out),
    .io_ready(cell_23_io_ready),
    .io_a(cell_23_io_a),
    .io_b(cell_23_io_b),
    .io_A(cell_23_io_A),
    .io_B(cell_23_io_B)
  );
  mul_cell cell_24 ( // @[mul.scala 95:35]
    .clock(cell_24_clock),
    .reset(cell_24_reset),
    .io_flush(cell_24_io_flush),
    .io_valid(cell_24_io_valid),
    .io_a_in(cell_24_io_a_in),
    .io_b_in(cell_24_io_b_in),
    .io_sum_in(cell_24_io_sum_in),
    .io_last(cell_24_io_last),
    .io_a_out(cell_24_io_a_out),
    .io_b_out(cell_24_io_b_out),
    .io_sum_out(cell_24_io_sum_out),
    .io_ready(cell_24_io_ready),
    .io_a(cell_24_io_a),
    .io_b(cell_24_io_b),
    .io_A(cell_24_io_A),
    .io_B(cell_24_io_B)
  );
  mul_cell cell_25 ( // @[mul.scala 95:35]
    .clock(cell_25_clock),
    .reset(cell_25_reset),
    .io_flush(cell_25_io_flush),
    .io_valid(cell_25_io_valid),
    .io_a_in(cell_25_io_a_in),
    .io_b_in(cell_25_io_b_in),
    .io_sum_in(cell_25_io_sum_in),
    .io_last(cell_25_io_last),
    .io_a_out(cell_25_io_a_out),
    .io_b_out(cell_25_io_b_out),
    .io_sum_out(cell_25_io_sum_out),
    .io_ready(cell_25_io_ready),
    .io_a(cell_25_io_a),
    .io_b(cell_25_io_b),
    .io_A(cell_25_io_A),
    .io_B(cell_25_io_B)
  );
  mul_cell cell_26 ( // @[mul.scala 95:35]
    .clock(cell_26_clock),
    .reset(cell_26_reset),
    .io_flush(cell_26_io_flush),
    .io_valid(cell_26_io_valid),
    .io_a_in(cell_26_io_a_in),
    .io_b_in(cell_26_io_b_in),
    .io_sum_in(cell_26_io_sum_in),
    .io_last(cell_26_io_last),
    .io_a_out(cell_26_io_a_out),
    .io_b_out(cell_26_io_b_out),
    .io_sum_out(cell_26_io_sum_out),
    .io_ready(cell_26_io_ready),
    .io_a(cell_26_io_a),
    .io_b(cell_26_io_b),
    .io_A(cell_26_io_A),
    .io_B(cell_26_io_B)
  );
  mul_cell cell_27 ( // @[mul.scala 95:35]
    .clock(cell_27_clock),
    .reset(cell_27_reset),
    .io_flush(cell_27_io_flush),
    .io_valid(cell_27_io_valid),
    .io_a_in(cell_27_io_a_in),
    .io_b_in(cell_27_io_b_in),
    .io_sum_in(cell_27_io_sum_in),
    .io_last(cell_27_io_last),
    .io_a_out(cell_27_io_a_out),
    .io_b_out(cell_27_io_b_out),
    .io_sum_out(cell_27_io_sum_out),
    .io_ready(cell_27_io_ready),
    .io_a(cell_27_io_a),
    .io_b(cell_27_io_b),
    .io_A(cell_27_io_A),
    .io_B(cell_27_io_B)
  );
  mul_cell cell_28 ( // @[mul.scala 95:35]
    .clock(cell_28_clock),
    .reset(cell_28_reset),
    .io_flush(cell_28_io_flush),
    .io_valid(cell_28_io_valid),
    .io_a_in(cell_28_io_a_in),
    .io_b_in(cell_28_io_b_in),
    .io_sum_in(cell_28_io_sum_in),
    .io_last(cell_28_io_last),
    .io_a_out(cell_28_io_a_out),
    .io_b_out(cell_28_io_b_out),
    .io_sum_out(cell_28_io_sum_out),
    .io_ready(cell_28_io_ready),
    .io_a(cell_28_io_a),
    .io_b(cell_28_io_b),
    .io_A(cell_28_io_A),
    .io_B(cell_28_io_B)
  );
  mul_cell cell_29 ( // @[mul.scala 95:35]
    .clock(cell_29_clock),
    .reset(cell_29_reset),
    .io_flush(cell_29_io_flush),
    .io_valid(cell_29_io_valid),
    .io_a_in(cell_29_io_a_in),
    .io_b_in(cell_29_io_b_in),
    .io_sum_in(cell_29_io_sum_in),
    .io_last(cell_29_io_last),
    .io_a_out(cell_29_io_a_out),
    .io_b_out(cell_29_io_b_out),
    .io_sum_out(cell_29_io_sum_out),
    .io_ready(cell_29_io_ready),
    .io_a(cell_29_io_a),
    .io_b(cell_29_io_b),
    .io_A(cell_29_io_A),
    .io_B(cell_29_io_B)
  );
  mul_cell cell_30 ( // @[mul.scala 95:35]
    .clock(cell_30_clock),
    .reset(cell_30_reset),
    .io_flush(cell_30_io_flush),
    .io_valid(cell_30_io_valid),
    .io_a_in(cell_30_io_a_in),
    .io_b_in(cell_30_io_b_in),
    .io_sum_in(cell_30_io_sum_in),
    .io_last(cell_30_io_last),
    .io_a_out(cell_30_io_a_out),
    .io_b_out(cell_30_io_b_out),
    .io_sum_out(cell_30_io_sum_out),
    .io_ready(cell_30_io_ready),
    .io_a(cell_30_io_a),
    .io_b(cell_30_io_b),
    .io_A(cell_30_io_A),
    .io_B(cell_30_io_B)
  );
  mul_cell cell_31 ( // @[mul.scala 95:35]
    .clock(cell_31_clock),
    .reset(cell_31_reset),
    .io_flush(cell_31_io_flush),
    .io_valid(cell_31_io_valid),
    .io_a_in(cell_31_io_a_in),
    .io_b_in(cell_31_io_b_in),
    .io_sum_in(cell_31_io_sum_in),
    .io_last(cell_31_io_last),
    .io_a_out(cell_31_io_a_out),
    .io_b_out(cell_31_io_b_out),
    .io_sum_out(cell_31_io_sum_out),
    .io_ready(cell_31_io_ready),
    .io_a(cell_31_io_a),
    .io_b(cell_31_io_b),
    .io_A(cell_31_io_A),
    .io_B(cell_31_io_B)
  );
  mul_cell cell_32 ( // @[mul.scala 95:35]
    .clock(cell_32_clock),
    .reset(cell_32_reset),
    .io_flush(cell_32_io_flush),
    .io_valid(cell_32_io_valid),
    .io_a_in(cell_32_io_a_in),
    .io_b_in(cell_32_io_b_in),
    .io_sum_in(cell_32_io_sum_in),
    .io_last(cell_32_io_last),
    .io_a_out(cell_32_io_a_out),
    .io_b_out(cell_32_io_b_out),
    .io_sum_out(cell_32_io_sum_out),
    .io_ready(cell_32_io_ready),
    .io_a(cell_32_io_a),
    .io_b(cell_32_io_b),
    .io_A(cell_32_io_A),
    .io_B(cell_32_io_B)
  );
  mul_cell cell_33 ( // @[mul.scala 95:35]
    .clock(cell_33_clock),
    .reset(cell_33_reset),
    .io_flush(cell_33_io_flush),
    .io_valid(cell_33_io_valid),
    .io_a_in(cell_33_io_a_in),
    .io_b_in(cell_33_io_b_in),
    .io_sum_in(cell_33_io_sum_in),
    .io_last(cell_33_io_last),
    .io_a_out(cell_33_io_a_out),
    .io_b_out(cell_33_io_b_out),
    .io_sum_out(cell_33_io_sum_out),
    .io_ready(cell_33_io_ready),
    .io_a(cell_33_io_a),
    .io_b(cell_33_io_b),
    .io_A(cell_33_io_A),
    .io_B(cell_33_io_B)
  );
  mul_cell cell_34 ( // @[mul.scala 95:35]
    .clock(cell_34_clock),
    .reset(cell_34_reset),
    .io_flush(cell_34_io_flush),
    .io_valid(cell_34_io_valid),
    .io_a_in(cell_34_io_a_in),
    .io_b_in(cell_34_io_b_in),
    .io_sum_in(cell_34_io_sum_in),
    .io_last(cell_34_io_last),
    .io_a_out(cell_34_io_a_out),
    .io_b_out(cell_34_io_b_out),
    .io_sum_out(cell_34_io_sum_out),
    .io_ready(cell_34_io_ready),
    .io_a(cell_34_io_a),
    .io_b(cell_34_io_b),
    .io_A(cell_34_io_A),
    .io_B(cell_34_io_B)
  );
  mul_cell cell_35 ( // @[mul.scala 95:35]
    .clock(cell_35_clock),
    .reset(cell_35_reset),
    .io_flush(cell_35_io_flush),
    .io_valid(cell_35_io_valid),
    .io_a_in(cell_35_io_a_in),
    .io_b_in(cell_35_io_b_in),
    .io_sum_in(cell_35_io_sum_in),
    .io_last(cell_35_io_last),
    .io_a_out(cell_35_io_a_out),
    .io_b_out(cell_35_io_b_out),
    .io_sum_out(cell_35_io_sum_out),
    .io_ready(cell_35_io_ready),
    .io_a(cell_35_io_a),
    .io_b(cell_35_io_b),
    .io_A(cell_35_io_A),
    .io_B(cell_35_io_B)
  );
  mul_cell cell_36 ( // @[mul.scala 95:35]
    .clock(cell_36_clock),
    .reset(cell_36_reset),
    .io_flush(cell_36_io_flush),
    .io_valid(cell_36_io_valid),
    .io_a_in(cell_36_io_a_in),
    .io_b_in(cell_36_io_b_in),
    .io_sum_in(cell_36_io_sum_in),
    .io_last(cell_36_io_last),
    .io_a_out(cell_36_io_a_out),
    .io_b_out(cell_36_io_b_out),
    .io_sum_out(cell_36_io_sum_out),
    .io_ready(cell_36_io_ready),
    .io_a(cell_36_io_a),
    .io_b(cell_36_io_b),
    .io_A(cell_36_io_A),
    .io_B(cell_36_io_B)
  );
  mul_cell cell_37 ( // @[mul.scala 95:35]
    .clock(cell_37_clock),
    .reset(cell_37_reset),
    .io_flush(cell_37_io_flush),
    .io_valid(cell_37_io_valid),
    .io_a_in(cell_37_io_a_in),
    .io_b_in(cell_37_io_b_in),
    .io_sum_in(cell_37_io_sum_in),
    .io_last(cell_37_io_last),
    .io_a_out(cell_37_io_a_out),
    .io_b_out(cell_37_io_b_out),
    .io_sum_out(cell_37_io_sum_out),
    .io_ready(cell_37_io_ready),
    .io_a(cell_37_io_a),
    .io_b(cell_37_io_b),
    .io_A(cell_37_io_A),
    .io_B(cell_37_io_B)
  );
  mul_cell cell_38 ( // @[mul.scala 95:35]
    .clock(cell_38_clock),
    .reset(cell_38_reset),
    .io_flush(cell_38_io_flush),
    .io_valid(cell_38_io_valid),
    .io_a_in(cell_38_io_a_in),
    .io_b_in(cell_38_io_b_in),
    .io_sum_in(cell_38_io_sum_in),
    .io_last(cell_38_io_last),
    .io_a_out(cell_38_io_a_out),
    .io_b_out(cell_38_io_b_out),
    .io_sum_out(cell_38_io_sum_out),
    .io_ready(cell_38_io_ready),
    .io_a(cell_38_io_a),
    .io_b(cell_38_io_b),
    .io_A(cell_38_io_A),
    .io_B(cell_38_io_B)
  );
  mul_cell cell_39 ( // @[mul.scala 95:35]
    .clock(cell_39_clock),
    .reset(cell_39_reset),
    .io_flush(cell_39_io_flush),
    .io_valid(cell_39_io_valid),
    .io_a_in(cell_39_io_a_in),
    .io_b_in(cell_39_io_b_in),
    .io_sum_in(cell_39_io_sum_in),
    .io_last(cell_39_io_last),
    .io_a_out(cell_39_io_a_out),
    .io_b_out(cell_39_io_b_out),
    .io_sum_out(cell_39_io_sum_out),
    .io_ready(cell_39_io_ready),
    .io_a(cell_39_io_a),
    .io_b(cell_39_io_b),
    .io_A(cell_39_io_A),
    .io_B(cell_39_io_B)
  );
  mul_cell cell_40 ( // @[mul.scala 95:35]
    .clock(cell_40_clock),
    .reset(cell_40_reset),
    .io_flush(cell_40_io_flush),
    .io_valid(cell_40_io_valid),
    .io_a_in(cell_40_io_a_in),
    .io_b_in(cell_40_io_b_in),
    .io_sum_in(cell_40_io_sum_in),
    .io_last(cell_40_io_last),
    .io_a_out(cell_40_io_a_out),
    .io_b_out(cell_40_io_b_out),
    .io_sum_out(cell_40_io_sum_out),
    .io_ready(cell_40_io_ready),
    .io_a(cell_40_io_a),
    .io_b(cell_40_io_b),
    .io_A(cell_40_io_A),
    .io_B(cell_40_io_B)
  );
  mul_cell cell_41 ( // @[mul.scala 95:35]
    .clock(cell_41_clock),
    .reset(cell_41_reset),
    .io_flush(cell_41_io_flush),
    .io_valid(cell_41_io_valid),
    .io_a_in(cell_41_io_a_in),
    .io_b_in(cell_41_io_b_in),
    .io_sum_in(cell_41_io_sum_in),
    .io_last(cell_41_io_last),
    .io_a_out(cell_41_io_a_out),
    .io_b_out(cell_41_io_b_out),
    .io_sum_out(cell_41_io_sum_out),
    .io_ready(cell_41_io_ready),
    .io_a(cell_41_io_a),
    .io_b(cell_41_io_b),
    .io_A(cell_41_io_A),
    .io_B(cell_41_io_B)
  );
  mul_cell cell_42 ( // @[mul.scala 95:35]
    .clock(cell_42_clock),
    .reset(cell_42_reset),
    .io_flush(cell_42_io_flush),
    .io_valid(cell_42_io_valid),
    .io_a_in(cell_42_io_a_in),
    .io_b_in(cell_42_io_b_in),
    .io_sum_in(cell_42_io_sum_in),
    .io_last(cell_42_io_last),
    .io_a_out(cell_42_io_a_out),
    .io_b_out(cell_42_io_b_out),
    .io_sum_out(cell_42_io_sum_out),
    .io_ready(cell_42_io_ready),
    .io_a(cell_42_io_a),
    .io_b(cell_42_io_b),
    .io_A(cell_42_io_A),
    .io_B(cell_42_io_B)
  );
  mul_cell cell_43 ( // @[mul.scala 95:35]
    .clock(cell_43_clock),
    .reset(cell_43_reset),
    .io_flush(cell_43_io_flush),
    .io_valid(cell_43_io_valid),
    .io_a_in(cell_43_io_a_in),
    .io_b_in(cell_43_io_b_in),
    .io_sum_in(cell_43_io_sum_in),
    .io_last(cell_43_io_last),
    .io_a_out(cell_43_io_a_out),
    .io_b_out(cell_43_io_b_out),
    .io_sum_out(cell_43_io_sum_out),
    .io_ready(cell_43_io_ready),
    .io_a(cell_43_io_a),
    .io_b(cell_43_io_b),
    .io_A(cell_43_io_A),
    .io_B(cell_43_io_B)
  );
  mul_cell cell_44 ( // @[mul.scala 95:35]
    .clock(cell_44_clock),
    .reset(cell_44_reset),
    .io_flush(cell_44_io_flush),
    .io_valid(cell_44_io_valid),
    .io_a_in(cell_44_io_a_in),
    .io_b_in(cell_44_io_b_in),
    .io_sum_in(cell_44_io_sum_in),
    .io_last(cell_44_io_last),
    .io_a_out(cell_44_io_a_out),
    .io_b_out(cell_44_io_b_out),
    .io_sum_out(cell_44_io_sum_out),
    .io_ready(cell_44_io_ready),
    .io_a(cell_44_io_a),
    .io_b(cell_44_io_b),
    .io_A(cell_44_io_A),
    .io_B(cell_44_io_B)
  );
  mul_cell cell_45 ( // @[mul.scala 95:35]
    .clock(cell_45_clock),
    .reset(cell_45_reset),
    .io_flush(cell_45_io_flush),
    .io_valid(cell_45_io_valid),
    .io_a_in(cell_45_io_a_in),
    .io_b_in(cell_45_io_b_in),
    .io_sum_in(cell_45_io_sum_in),
    .io_last(cell_45_io_last),
    .io_a_out(cell_45_io_a_out),
    .io_b_out(cell_45_io_b_out),
    .io_sum_out(cell_45_io_sum_out),
    .io_ready(cell_45_io_ready),
    .io_a(cell_45_io_a),
    .io_b(cell_45_io_b),
    .io_A(cell_45_io_A),
    .io_B(cell_45_io_B)
  );
  mul_cell cell_46 ( // @[mul.scala 95:35]
    .clock(cell_46_clock),
    .reset(cell_46_reset),
    .io_flush(cell_46_io_flush),
    .io_valid(cell_46_io_valid),
    .io_a_in(cell_46_io_a_in),
    .io_b_in(cell_46_io_b_in),
    .io_sum_in(cell_46_io_sum_in),
    .io_last(cell_46_io_last),
    .io_a_out(cell_46_io_a_out),
    .io_b_out(cell_46_io_b_out),
    .io_sum_out(cell_46_io_sum_out),
    .io_ready(cell_46_io_ready),
    .io_a(cell_46_io_a),
    .io_b(cell_46_io_b),
    .io_A(cell_46_io_A),
    .io_B(cell_46_io_B)
  );
  mul_cell cell_47 ( // @[mul.scala 95:35]
    .clock(cell_47_clock),
    .reset(cell_47_reset),
    .io_flush(cell_47_io_flush),
    .io_valid(cell_47_io_valid),
    .io_a_in(cell_47_io_a_in),
    .io_b_in(cell_47_io_b_in),
    .io_sum_in(cell_47_io_sum_in),
    .io_last(cell_47_io_last),
    .io_a_out(cell_47_io_a_out),
    .io_b_out(cell_47_io_b_out),
    .io_sum_out(cell_47_io_sum_out),
    .io_ready(cell_47_io_ready),
    .io_a(cell_47_io_a),
    .io_b(cell_47_io_b),
    .io_A(cell_47_io_A),
    .io_B(cell_47_io_B)
  );
  mul_cell cell_48 ( // @[mul.scala 95:35]
    .clock(cell_48_clock),
    .reset(cell_48_reset),
    .io_flush(cell_48_io_flush),
    .io_valid(cell_48_io_valid),
    .io_a_in(cell_48_io_a_in),
    .io_b_in(cell_48_io_b_in),
    .io_sum_in(cell_48_io_sum_in),
    .io_last(cell_48_io_last),
    .io_a_out(cell_48_io_a_out),
    .io_b_out(cell_48_io_b_out),
    .io_sum_out(cell_48_io_sum_out),
    .io_ready(cell_48_io_ready),
    .io_a(cell_48_io_a),
    .io_b(cell_48_io_b),
    .io_A(cell_48_io_A),
    .io_B(cell_48_io_B)
  );
  mul_cell cell_49 ( // @[mul.scala 95:35]
    .clock(cell_49_clock),
    .reset(cell_49_reset),
    .io_flush(cell_49_io_flush),
    .io_valid(cell_49_io_valid),
    .io_a_in(cell_49_io_a_in),
    .io_b_in(cell_49_io_b_in),
    .io_sum_in(cell_49_io_sum_in),
    .io_last(cell_49_io_last),
    .io_a_out(cell_49_io_a_out),
    .io_b_out(cell_49_io_b_out),
    .io_sum_out(cell_49_io_sum_out),
    .io_ready(cell_49_io_ready),
    .io_a(cell_49_io_a),
    .io_b(cell_49_io_b),
    .io_A(cell_49_io_A),
    .io_B(cell_49_io_B)
  );
  mul_cell cell_50 ( // @[mul.scala 95:35]
    .clock(cell_50_clock),
    .reset(cell_50_reset),
    .io_flush(cell_50_io_flush),
    .io_valid(cell_50_io_valid),
    .io_a_in(cell_50_io_a_in),
    .io_b_in(cell_50_io_b_in),
    .io_sum_in(cell_50_io_sum_in),
    .io_last(cell_50_io_last),
    .io_a_out(cell_50_io_a_out),
    .io_b_out(cell_50_io_b_out),
    .io_sum_out(cell_50_io_sum_out),
    .io_ready(cell_50_io_ready),
    .io_a(cell_50_io_a),
    .io_b(cell_50_io_b),
    .io_A(cell_50_io_A),
    .io_B(cell_50_io_B)
  );
  mul_cell cell_51 ( // @[mul.scala 95:35]
    .clock(cell_51_clock),
    .reset(cell_51_reset),
    .io_flush(cell_51_io_flush),
    .io_valid(cell_51_io_valid),
    .io_a_in(cell_51_io_a_in),
    .io_b_in(cell_51_io_b_in),
    .io_sum_in(cell_51_io_sum_in),
    .io_last(cell_51_io_last),
    .io_a_out(cell_51_io_a_out),
    .io_b_out(cell_51_io_b_out),
    .io_sum_out(cell_51_io_sum_out),
    .io_ready(cell_51_io_ready),
    .io_a(cell_51_io_a),
    .io_b(cell_51_io_b),
    .io_A(cell_51_io_A),
    .io_B(cell_51_io_B)
  );
  mul_cell cell_52 ( // @[mul.scala 95:35]
    .clock(cell_52_clock),
    .reset(cell_52_reset),
    .io_flush(cell_52_io_flush),
    .io_valid(cell_52_io_valid),
    .io_a_in(cell_52_io_a_in),
    .io_b_in(cell_52_io_b_in),
    .io_sum_in(cell_52_io_sum_in),
    .io_last(cell_52_io_last),
    .io_a_out(cell_52_io_a_out),
    .io_b_out(cell_52_io_b_out),
    .io_sum_out(cell_52_io_sum_out),
    .io_ready(cell_52_io_ready),
    .io_a(cell_52_io_a),
    .io_b(cell_52_io_b),
    .io_A(cell_52_io_A),
    .io_B(cell_52_io_B)
  );
  mul_cell cell_53 ( // @[mul.scala 95:35]
    .clock(cell_53_clock),
    .reset(cell_53_reset),
    .io_flush(cell_53_io_flush),
    .io_valid(cell_53_io_valid),
    .io_a_in(cell_53_io_a_in),
    .io_b_in(cell_53_io_b_in),
    .io_sum_in(cell_53_io_sum_in),
    .io_last(cell_53_io_last),
    .io_a_out(cell_53_io_a_out),
    .io_b_out(cell_53_io_b_out),
    .io_sum_out(cell_53_io_sum_out),
    .io_ready(cell_53_io_ready),
    .io_a(cell_53_io_a),
    .io_b(cell_53_io_b),
    .io_A(cell_53_io_A),
    .io_B(cell_53_io_B)
  );
  mul_cell cell_54 ( // @[mul.scala 95:35]
    .clock(cell_54_clock),
    .reset(cell_54_reset),
    .io_flush(cell_54_io_flush),
    .io_valid(cell_54_io_valid),
    .io_a_in(cell_54_io_a_in),
    .io_b_in(cell_54_io_b_in),
    .io_sum_in(cell_54_io_sum_in),
    .io_last(cell_54_io_last),
    .io_a_out(cell_54_io_a_out),
    .io_b_out(cell_54_io_b_out),
    .io_sum_out(cell_54_io_sum_out),
    .io_ready(cell_54_io_ready),
    .io_a(cell_54_io_a),
    .io_b(cell_54_io_b),
    .io_A(cell_54_io_A),
    .io_B(cell_54_io_B)
  );
  mul_cell cell_55 ( // @[mul.scala 95:35]
    .clock(cell_55_clock),
    .reset(cell_55_reset),
    .io_flush(cell_55_io_flush),
    .io_valid(cell_55_io_valid),
    .io_a_in(cell_55_io_a_in),
    .io_b_in(cell_55_io_b_in),
    .io_sum_in(cell_55_io_sum_in),
    .io_last(cell_55_io_last),
    .io_a_out(cell_55_io_a_out),
    .io_b_out(cell_55_io_b_out),
    .io_sum_out(cell_55_io_sum_out),
    .io_ready(cell_55_io_ready),
    .io_a(cell_55_io_a),
    .io_b(cell_55_io_b),
    .io_A(cell_55_io_A),
    .io_B(cell_55_io_B)
  );
  mul_cell cell_56 ( // @[mul.scala 95:35]
    .clock(cell_56_clock),
    .reset(cell_56_reset),
    .io_flush(cell_56_io_flush),
    .io_valid(cell_56_io_valid),
    .io_a_in(cell_56_io_a_in),
    .io_b_in(cell_56_io_b_in),
    .io_sum_in(cell_56_io_sum_in),
    .io_last(cell_56_io_last),
    .io_a_out(cell_56_io_a_out),
    .io_b_out(cell_56_io_b_out),
    .io_sum_out(cell_56_io_sum_out),
    .io_ready(cell_56_io_ready),
    .io_a(cell_56_io_a),
    .io_b(cell_56_io_b),
    .io_A(cell_56_io_A),
    .io_B(cell_56_io_B)
  );
  mul_cell cell_57 ( // @[mul.scala 95:35]
    .clock(cell_57_clock),
    .reset(cell_57_reset),
    .io_flush(cell_57_io_flush),
    .io_valid(cell_57_io_valid),
    .io_a_in(cell_57_io_a_in),
    .io_b_in(cell_57_io_b_in),
    .io_sum_in(cell_57_io_sum_in),
    .io_last(cell_57_io_last),
    .io_a_out(cell_57_io_a_out),
    .io_b_out(cell_57_io_b_out),
    .io_sum_out(cell_57_io_sum_out),
    .io_ready(cell_57_io_ready),
    .io_a(cell_57_io_a),
    .io_b(cell_57_io_b),
    .io_A(cell_57_io_A),
    .io_B(cell_57_io_B)
  );
  mul_cell cell_58 ( // @[mul.scala 95:35]
    .clock(cell_58_clock),
    .reset(cell_58_reset),
    .io_flush(cell_58_io_flush),
    .io_valid(cell_58_io_valid),
    .io_a_in(cell_58_io_a_in),
    .io_b_in(cell_58_io_b_in),
    .io_sum_in(cell_58_io_sum_in),
    .io_last(cell_58_io_last),
    .io_a_out(cell_58_io_a_out),
    .io_b_out(cell_58_io_b_out),
    .io_sum_out(cell_58_io_sum_out),
    .io_ready(cell_58_io_ready),
    .io_a(cell_58_io_a),
    .io_b(cell_58_io_b),
    .io_A(cell_58_io_A),
    .io_B(cell_58_io_B)
  );
  mul_cell cell_59 ( // @[mul.scala 95:35]
    .clock(cell_59_clock),
    .reset(cell_59_reset),
    .io_flush(cell_59_io_flush),
    .io_valid(cell_59_io_valid),
    .io_a_in(cell_59_io_a_in),
    .io_b_in(cell_59_io_b_in),
    .io_sum_in(cell_59_io_sum_in),
    .io_last(cell_59_io_last),
    .io_a_out(cell_59_io_a_out),
    .io_b_out(cell_59_io_b_out),
    .io_sum_out(cell_59_io_sum_out),
    .io_ready(cell_59_io_ready),
    .io_a(cell_59_io_a),
    .io_b(cell_59_io_b),
    .io_A(cell_59_io_A),
    .io_B(cell_59_io_B)
  );
  mul_cell cell_60 ( // @[mul.scala 95:35]
    .clock(cell_60_clock),
    .reset(cell_60_reset),
    .io_flush(cell_60_io_flush),
    .io_valid(cell_60_io_valid),
    .io_a_in(cell_60_io_a_in),
    .io_b_in(cell_60_io_b_in),
    .io_sum_in(cell_60_io_sum_in),
    .io_last(cell_60_io_last),
    .io_a_out(cell_60_io_a_out),
    .io_b_out(cell_60_io_b_out),
    .io_sum_out(cell_60_io_sum_out),
    .io_ready(cell_60_io_ready),
    .io_a(cell_60_io_a),
    .io_b(cell_60_io_b),
    .io_A(cell_60_io_A),
    .io_B(cell_60_io_B)
  );
  mul_cell cell_61 ( // @[mul.scala 95:35]
    .clock(cell_61_clock),
    .reset(cell_61_reset),
    .io_flush(cell_61_io_flush),
    .io_valid(cell_61_io_valid),
    .io_a_in(cell_61_io_a_in),
    .io_b_in(cell_61_io_b_in),
    .io_sum_in(cell_61_io_sum_in),
    .io_last(cell_61_io_last),
    .io_a_out(cell_61_io_a_out),
    .io_b_out(cell_61_io_b_out),
    .io_sum_out(cell_61_io_sum_out),
    .io_ready(cell_61_io_ready),
    .io_a(cell_61_io_a),
    .io_b(cell_61_io_b),
    .io_A(cell_61_io_A),
    .io_B(cell_61_io_B)
  );
  mul_cell cell_62 ( // @[mul.scala 95:35]
    .clock(cell_62_clock),
    .reset(cell_62_reset),
    .io_flush(cell_62_io_flush),
    .io_valid(cell_62_io_valid),
    .io_a_in(cell_62_io_a_in),
    .io_b_in(cell_62_io_b_in),
    .io_sum_in(cell_62_io_sum_in),
    .io_last(cell_62_io_last),
    .io_a_out(cell_62_io_a_out),
    .io_b_out(cell_62_io_b_out),
    .io_sum_out(cell_62_io_sum_out),
    .io_ready(cell_62_io_ready),
    .io_a(cell_62_io_a),
    .io_b(cell_62_io_b),
    .io_A(cell_62_io_A),
    .io_B(cell_62_io_B)
  );
  mul_cell cell_63 ( // @[mul.scala 95:35]
    .clock(cell_63_clock),
    .reset(cell_63_reset),
    .io_flush(cell_63_io_flush),
    .io_valid(cell_63_io_valid),
    .io_a_in(cell_63_io_a_in),
    .io_b_in(cell_63_io_b_in),
    .io_sum_in(cell_63_io_sum_in),
    .io_last(cell_63_io_last),
    .io_a_out(cell_63_io_a_out),
    .io_b_out(cell_63_io_b_out),
    .io_sum_out(cell_63_io_sum_out),
    .io_ready(cell_63_io_ready),
    .io_a(cell_63_io_a),
    .io_b(cell_63_io_b),
    .io_A(cell_63_io_A),
    .io_B(cell_63_io_B)
  );
  mul_cell cell_64 ( // @[mul.scala 95:35]
    .clock(cell_64_clock),
    .reset(cell_64_reset),
    .io_flush(cell_64_io_flush),
    .io_valid(cell_64_io_valid),
    .io_a_in(cell_64_io_a_in),
    .io_b_in(cell_64_io_b_in),
    .io_sum_in(cell_64_io_sum_in),
    .io_last(cell_64_io_last),
    .io_a_out(cell_64_io_a_out),
    .io_b_out(cell_64_io_b_out),
    .io_sum_out(cell_64_io_sum_out),
    .io_ready(cell_64_io_ready),
    .io_a(cell_64_io_a),
    .io_b(cell_64_io_b),
    .io_A(cell_64_io_A),
    .io_B(cell_64_io_B)
  );
  assign io_mul_ready = 1'h1; // @[mul.scala 117:18]
  assign io_out_valid = cell_64_io_ready; // @[mul.scala 118:18]
  assign io_result_hi = cell_64_io_sum_out[127:64]; // @[mul.scala 119:41]
  assign io_result_lo = cell_64_io_sum_out[63:0]; // @[mul.scala 120:41]
  assign cell_0_clock = clock;
  assign cell_0_reset = reset;
  assign cell_0_io_flush = io_flush; // @[mul.scala 97:23]
  assign cell_0_io_valid = valid; // @[mul.scala 98:23]
  assign cell_0_io_a_in = a; // @[mul.scala 99:23]
  assign cell_0_io_b_in = b; // @[mul.scala 100:23]
  assign cell_0_io_sum_in = 129'h0; // @[mul.scala 101:23]
  assign cell_0_io_last = 1'h0; // @[mul.scala 102:23]
  assign cell_0_io_a = io_multiplicand; // @[mul.scala 103:23]
  assign cell_0_io_b = io_multiplier; // @[mul.scala 104:23]
  assign cell_1_clock = clock;
  assign cell_1_reset = reset;
  assign cell_1_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_1_io_valid = cell_0_io_ready; // @[mul.scala 108:25]
  assign cell_1_io_a_in = cell_0_io_a_out; // @[mul.scala 109:25]
  assign cell_1_io_b_in = cell_0_io_b_out; // @[mul.scala 110:25]
  assign cell_1_io_sum_in = cell_0_io_sum_out; // @[mul.scala 111:25]
  assign cell_1_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_1_io_a = cell_0_io_A; // @[mul.scala 113:25]
  assign cell_1_io_b = cell_0_io_B; // @[mul.scala 114:25]
  assign cell_2_clock = clock;
  assign cell_2_reset = reset;
  assign cell_2_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_2_io_valid = cell_1_io_ready; // @[mul.scala 108:25]
  assign cell_2_io_a_in = cell_1_io_a_out; // @[mul.scala 109:25]
  assign cell_2_io_b_in = cell_1_io_b_out; // @[mul.scala 110:25]
  assign cell_2_io_sum_in = cell_1_io_sum_out; // @[mul.scala 111:25]
  assign cell_2_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_2_io_a = cell_1_io_A; // @[mul.scala 113:25]
  assign cell_2_io_b = cell_1_io_B; // @[mul.scala 114:25]
  assign cell_3_clock = clock;
  assign cell_3_reset = reset;
  assign cell_3_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_3_io_valid = cell_2_io_ready; // @[mul.scala 108:25]
  assign cell_3_io_a_in = cell_2_io_a_out; // @[mul.scala 109:25]
  assign cell_3_io_b_in = cell_2_io_b_out; // @[mul.scala 110:25]
  assign cell_3_io_sum_in = cell_2_io_sum_out; // @[mul.scala 111:25]
  assign cell_3_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_3_io_a = cell_2_io_A; // @[mul.scala 113:25]
  assign cell_3_io_b = cell_2_io_B; // @[mul.scala 114:25]
  assign cell_4_clock = clock;
  assign cell_4_reset = reset;
  assign cell_4_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_4_io_valid = cell_3_io_ready; // @[mul.scala 108:25]
  assign cell_4_io_a_in = cell_3_io_a_out; // @[mul.scala 109:25]
  assign cell_4_io_b_in = cell_3_io_b_out; // @[mul.scala 110:25]
  assign cell_4_io_sum_in = cell_3_io_sum_out; // @[mul.scala 111:25]
  assign cell_4_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_4_io_a = cell_3_io_A; // @[mul.scala 113:25]
  assign cell_4_io_b = cell_3_io_B; // @[mul.scala 114:25]
  assign cell_5_clock = clock;
  assign cell_5_reset = reset;
  assign cell_5_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_5_io_valid = cell_4_io_ready; // @[mul.scala 108:25]
  assign cell_5_io_a_in = cell_4_io_a_out; // @[mul.scala 109:25]
  assign cell_5_io_b_in = cell_4_io_b_out; // @[mul.scala 110:25]
  assign cell_5_io_sum_in = cell_4_io_sum_out; // @[mul.scala 111:25]
  assign cell_5_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_5_io_a = cell_4_io_A; // @[mul.scala 113:25]
  assign cell_5_io_b = cell_4_io_B; // @[mul.scala 114:25]
  assign cell_6_clock = clock;
  assign cell_6_reset = reset;
  assign cell_6_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_6_io_valid = cell_5_io_ready; // @[mul.scala 108:25]
  assign cell_6_io_a_in = cell_5_io_a_out; // @[mul.scala 109:25]
  assign cell_6_io_b_in = cell_5_io_b_out; // @[mul.scala 110:25]
  assign cell_6_io_sum_in = cell_5_io_sum_out; // @[mul.scala 111:25]
  assign cell_6_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_6_io_a = cell_5_io_A; // @[mul.scala 113:25]
  assign cell_6_io_b = cell_5_io_B; // @[mul.scala 114:25]
  assign cell_7_clock = clock;
  assign cell_7_reset = reset;
  assign cell_7_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_7_io_valid = cell_6_io_ready; // @[mul.scala 108:25]
  assign cell_7_io_a_in = cell_6_io_a_out; // @[mul.scala 109:25]
  assign cell_7_io_b_in = cell_6_io_b_out; // @[mul.scala 110:25]
  assign cell_7_io_sum_in = cell_6_io_sum_out; // @[mul.scala 111:25]
  assign cell_7_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_7_io_a = cell_6_io_A; // @[mul.scala 113:25]
  assign cell_7_io_b = cell_6_io_B; // @[mul.scala 114:25]
  assign cell_8_clock = clock;
  assign cell_8_reset = reset;
  assign cell_8_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_8_io_valid = cell_7_io_ready; // @[mul.scala 108:25]
  assign cell_8_io_a_in = cell_7_io_a_out; // @[mul.scala 109:25]
  assign cell_8_io_b_in = cell_7_io_b_out; // @[mul.scala 110:25]
  assign cell_8_io_sum_in = cell_7_io_sum_out; // @[mul.scala 111:25]
  assign cell_8_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_8_io_a = cell_7_io_A; // @[mul.scala 113:25]
  assign cell_8_io_b = cell_7_io_B; // @[mul.scala 114:25]
  assign cell_9_clock = clock;
  assign cell_9_reset = reset;
  assign cell_9_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_9_io_valid = cell_8_io_ready; // @[mul.scala 108:25]
  assign cell_9_io_a_in = cell_8_io_a_out; // @[mul.scala 109:25]
  assign cell_9_io_b_in = cell_8_io_b_out; // @[mul.scala 110:25]
  assign cell_9_io_sum_in = cell_8_io_sum_out; // @[mul.scala 111:25]
  assign cell_9_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_9_io_a = cell_8_io_A; // @[mul.scala 113:25]
  assign cell_9_io_b = cell_8_io_B; // @[mul.scala 114:25]
  assign cell_10_clock = clock;
  assign cell_10_reset = reset;
  assign cell_10_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_10_io_valid = cell_9_io_ready; // @[mul.scala 108:25]
  assign cell_10_io_a_in = cell_9_io_a_out; // @[mul.scala 109:25]
  assign cell_10_io_b_in = cell_9_io_b_out; // @[mul.scala 110:25]
  assign cell_10_io_sum_in = cell_9_io_sum_out; // @[mul.scala 111:25]
  assign cell_10_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_10_io_a = cell_9_io_A; // @[mul.scala 113:25]
  assign cell_10_io_b = cell_9_io_B; // @[mul.scala 114:25]
  assign cell_11_clock = clock;
  assign cell_11_reset = reset;
  assign cell_11_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_11_io_valid = cell_10_io_ready; // @[mul.scala 108:25]
  assign cell_11_io_a_in = cell_10_io_a_out; // @[mul.scala 109:25]
  assign cell_11_io_b_in = cell_10_io_b_out; // @[mul.scala 110:25]
  assign cell_11_io_sum_in = cell_10_io_sum_out; // @[mul.scala 111:25]
  assign cell_11_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_11_io_a = cell_10_io_A; // @[mul.scala 113:25]
  assign cell_11_io_b = cell_10_io_B; // @[mul.scala 114:25]
  assign cell_12_clock = clock;
  assign cell_12_reset = reset;
  assign cell_12_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_12_io_valid = cell_11_io_ready; // @[mul.scala 108:25]
  assign cell_12_io_a_in = cell_11_io_a_out; // @[mul.scala 109:25]
  assign cell_12_io_b_in = cell_11_io_b_out; // @[mul.scala 110:25]
  assign cell_12_io_sum_in = cell_11_io_sum_out; // @[mul.scala 111:25]
  assign cell_12_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_12_io_a = cell_11_io_A; // @[mul.scala 113:25]
  assign cell_12_io_b = cell_11_io_B; // @[mul.scala 114:25]
  assign cell_13_clock = clock;
  assign cell_13_reset = reset;
  assign cell_13_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_13_io_valid = cell_12_io_ready; // @[mul.scala 108:25]
  assign cell_13_io_a_in = cell_12_io_a_out; // @[mul.scala 109:25]
  assign cell_13_io_b_in = cell_12_io_b_out; // @[mul.scala 110:25]
  assign cell_13_io_sum_in = cell_12_io_sum_out; // @[mul.scala 111:25]
  assign cell_13_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_13_io_a = cell_12_io_A; // @[mul.scala 113:25]
  assign cell_13_io_b = cell_12_io_B; // @[mul.scala 114:25]
  assign cell_14_clock = clock;
  assign cell_14_reset = reset;
  assign cell_14_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_14_io_valid = cell_13_io_ready; // @[mul.scala 108:25]
  assign cell_14_io_a_in = cell_13_io_a_out; // @[mul.scala 109:25]
  assign cell_14_io_b_in = cell_13_io_b_out; // @[mul.scala 110:25]
  assign cell_14_io_sum_in = cell_13_io_sum_out; // @[mul.scala 111:25]
  assign cell_14_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_14_io_a = cell_13_io_A; // @[mul.scala 113:25]
  assign cell_14_io_b = cell_13_io_B; // @[mul.scala 114:25]
  assign cell_15_clock = clock;
  assign cell_15_reset = reset;
  assign cell_15_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_15_io_valid = cell_14_io_ready; // @[mul.scala 108:25]
  assign cell_15_io_a_in = cell_14_io_a_out; // @[mul.scala 109:25]
  assign cell_15_io_b_in = cell_14_io_b_out; // @[mul.scala 110:25]
  assign cell_15_io_sum_in = cell_14_io_sum_out; // @[mul.scala 111:25]
  assign cell_15_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_15_io_a = cell_14_io_A; // @[mul.scala 113:25]
  assign cell_15_io_b = cell_14_io_B; // @[mul.scala 114:25]
  assign cell_16_clock = clock;
  assign cell_16_reset = reset;
  assign cell_16_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_16_io_valid = cell_15_io_ready; // @[mul.scala 108:25]
  assign cell_16_io_a_in = cell_15_io_a_out; // @[mul.scala 109:25]
  assign cell_16_io_b_in = cell_15_io_b_out; // @[mul.scala 110:25]
  assign cell_16_io_sum_in = cell_15_io_sum_out; // @[mul.scala 111:25]
  assign cell_16_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_16_io_a = cell_15_io_A; // @[mul.scala 113:25]
  assign cell_16_io_b = cell_15_io_B; // @[mul.scala 114:25]
  assign cell_17_clock = clock;
  assign cell_17_reset = reset;
  assign cell_17_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_17_io_valid = cell_16_io_ready; // @[mul.scala 108:25]
  assign cell_17_io_a_in = cell_16_io_a_out; // @[mul.scala 109:25]
  assign cell_17_io_b_in = cell_16_io_b_out; // @[mul.scala 110:25]
  assign cell_17_io_sum_in = cell_16_io_sum_out; // @[mul.scala 111:25]
  assign cell_17_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_17_io_a = cell_16_io_A; // @[mul.scala 113:25]
  assign cell_17_io_b = cell_16_io_B; // @[mul.scala 114:25]
  assign cell_18_clock = clock;
  assign cell_18_reset = reset;
  assign cell_18_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_18_io_valid = cell_17_io_ready; // @[mul.scala 108:25]
  assign cell_18_io_a_in = cell_17_io_a_out; // @[mul.scala 109:25]
  assign cell_18_io_b_in = cell_17_io_b_out; // @[mul.scala 110:25]
  assign cell_18_io_sum_in = cell_17_io_sum_out; // @[mul.scala 111:25]
  assign cell_18_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_18_io_a = cell_17_io_A; // @[mul.scala 113:25]
  assign cell_18_io_b = cell_17_io_B; // @[mul.scala 114:25]
  assign cell_19_clock = clock;
  assign cell_19_reset = reset;
  assign cell_19_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_19_io_valid = cell_18_io_ready; // @[mul.scala 108:25]
  assign cell_19_io_a_in = cell_18_io_a_out; // @[mul.scala 109:25]
  assign cell_19_io_b_in = cell_18_io_b_out; // @[mul.scala 110:25]
  assign cell_19_io_sum_in = cell_18_io_sum_out; // @[mul.scala 111:25]
  assign cell_19_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_19_io_a = cell_18_io_A; // @[mul.scala 113:25]
  assign cell_19_io_b = cell_18_io_B; // @[mul.scala 114:25]
  assign cell_20_clock = clock;
  assign cell_20_reset = reset;
  assign cell_20_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_20_io_valid = cell_19_io_ready; // @[mul.scala 108:25]
  assign cell_20_io_a_in = cell_19_io_a_out; // @[mul.scala 109:25]
  assign cell_20_io_b_in = cell_19_io_b_out; // @[mul.scala 110:25]
  assign cell_20_io_sum_in = cell_19_io_sum_out; // @[mul.scala 111:25]
  assign cell_20_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_20_io_a = cell_19_io_A; // @[mul.scala 113:25]
  assign cell_20_io_b = cell_19_io_B; // @[mul.scala 114:25]
  assign cell_21_clock = clock;
  assign cell_21_reset = reset;
  assign cell_21_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_21_io_valid = cell_20_io_ready; // @[mul.scala 108:25]
  assign cell_21_io_a_in = cell_20_io_a_out; // @[mul.scala 109:25]
  assign cell_21_io_b_in = cell_20_io_b_out; // @[mul.scala 110:25]
  assign cell_21_io_sum_in = cell_20_io_sum_out; // @[mul.scala 111:25]
  assign cell_21_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_21_io_a = cell_20_io_A; // @[mul.scala 113:25]
  assign cell_21_io_b = cell_20_io_B; // @[mul.scala 114:25]
  assign cell_22_clock = clock;
  assign cell_22_reset = reset;
  assign cell_22_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_22_io_valid = cell_21_io_ready; // @[mul.scala 108:25]
  assign cell_22_io_a_in = cell_21_io_a_out; // @[mul.scala 109:25]
  assign cell_22_io_b_in = cell_21_io_b_out; // @[mul.scala 110:25]
  assign cell_22_io_sum_in = cell_21_io_sum_out; // @[mul.scala 111:25]
  assign cell_22_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_22_io_a = cell_21_io_A; // @[mul.scala 113:25]
  assign cell_22_io_b = cell_21_io_B; // @[mul.scala 114:25]
  assign cell_23_clock = clock;
  assign cell_23_reset = reset;
  assign cell_23_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_23_io_valid = cell_22_io_ready; // @[mul.scala 108:25]
  assign cell_23_io_a_in = cell_22_io_a_out; // @[mul.scala 109:25]
  assign cell_23_io_b_in = cell_22_io_b_out; // @[mul.scala 110:25]
  assign cell_23_io_sum_in = cell_22_io_sum_out; // @[mul.scala 111:25]
  assign cell_23_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_23_io_a = cell_22_io_A; // @[mul.scala 113:25]
  assign cell_23_io_b = cell_22_io_B; // @[mul.scala 114:25]
  assign cell_24_clock = clock;
  assign cell_24_reset = reset;
  assign cell_24_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_24_io_valid = cell_23_io_ready; // @[mul.scala 108:25]
  assign cell_24_io_a_in = cell_23_io_a_out; // @[mul.scala 109:25]
  assign cell_24_io_b_in = cell_23_io_b_out; // @[mul.scala 110:25]
  assign cell_24_io_sum_in = cell_23_io_sum_out; // @[mul.scala 111:25]
  assign cell_24_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_24_io_a = cell_23_io_A; // @[mul.scala 113:25]
  assign cell_24_io_b = cell_23_io_B; // @[mul.scala 114:25]
  assign cell_25_clock = clock;
  assign cell_25_reset = reset;
  assign cell_25_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_25_io_valid = cell_24_io_ready; // @[mul.scala 108:25]
  assign cell_25_io_a_in = cell_24_io_a_out; // @[mul.scala 109:25]
  assign cell_25_io_b_in = cell_24_io_b_out; // @[mul.scala 110:25]
  assign cell_25_io_sum_in = cell_24_io_sum_out; // @[mul.scala 111:25]
  assign cell_25_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_25_io_a = cell_24_io_A; // @[mul.scala 113:25]
  assign cell_25_io_b = cell_24_io_B; // @[mul.scala 114:25]
  assign cell_26_clock = clock;
  assign cell_26_reset = reset;
  assign cell_26_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_26_io_valid = cell_25_io_ready; // @[mul.scala 108:25]
  assign cell_26_io_a_in = cell_25_io_a_out; // @[mul.scala 109:25]
  assign cell_26_io_b_in = cell_25_io_b_out; // @[mul.scala 110:25]
  assign cell_26_io_sum_in = cell_25_io_sum_out; // @[mul.scala 111:25]
  assign cell_26_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_26_io_a = cell_25_io_A; // @[mul.scala 113:25]
  assign cell_26_io_b = cell_25_io_B; // @[mul.scala 114:25]
  assign cell_27_clock = clock;
  assign cell_27_reset = reset;
  assign cell_27_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_27_io_valid = cell_26_io_ready; // @[mul.scala 108:25]
  assign cell_27_io_a_in = cell_26_io_a_out; // @[mul.scala 109:25]
  assign cell_27_io_b_in = cell_26_io_b_out; // @[mul.scala 110:25]
  assign cell_27_io_sum_in = cell_26_io_sum_out; // @[mul.scala 111:25]
  assign cell_27_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_27_io_a = cell_26_io_A; // @[mul.scala 113:25]
  assign cell_27_io_b = cell_26_io_B; // @[mul.scala 114:25]
  assign cell_28_clock = clock;
  assign cell_28_reset = reset;
  assign cell_28_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_28_io_valid = cell_27_io_ready; // @[mul.scala 108:25]
  assign cell_28_io_a_in = cell_27_io_a_out; // @[mul.scala 109:25]
  assign cell_28_io_b_in = cell_27_io_b_out; // @[mul.scala 110:25]
  assign cell_28_io_sum_in = cell_27_io_sum_out; // @[mul.scala 111:25]
  assign cell_28_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_28_io_a = cell_27_io_A; // @[mul.scala 113:25]
  assign cell_28_io_b = cell_27_io_B; // @[mul.scala 114:25]
  assign cell_29_clock = clock;
  assign cell_29_reset = reset;
  assign cell_29_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_29_io_valid = cell_28_io_ready; // @[mul.scala 108:25]
  assign cell_29_io_a_in = cell_28_io_a_out; // @[mul.scala 109:25]
  assign cell_29_io_b_in = cell_28_io_b_out; // @[mul.scala 110:25]
  assign cell_29_io_sum_in = cell_28_io_sum_out; // @[mul.scala 111:25]
  assign cell_29_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_29_io_a = cell_28_io_A; // @[mul.scala 113:25]
  assign cell_29_io_b = cell_28_io_B; // @[mul.scala 114:25]
  assign cell_30_clock = clock;
  assign cell_30_reset = reset;
  assign cell_30_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_30_io_valid = cell_29_io_ready; // @[mul.scala 108:25]
  assign cell_30_io_a_in = cell_29_io_a_out; // @[mul.scala 109:25]
  assign cell_30_io_b_in = cell_29_io_b_out; // @[mul.scala 110:25]
  assign cell_30_io_sum_in = cell_29_io_sum_out; // @[mul.scala 111:25]
  assign cell_30_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_30_io_a = cell_29_io_A; // @[mul.scala 113:25]
  assign cell_30_io_b = cell_29_io_B; // @[mul.scala 114:25]
  assign cell_31_clock = clock;
  assign cell_31_reset = reset;
  assign cell_31_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_31_io_valid = cell_30_io_ready; // @[mul.scala 108:25]
  assign cell_31_io_a_in = cell_30_io_a_out; // @[mul.scala 109:25]
  assign cell_31_io_b_in = cell_30_io_b_out; // @[mul.scala 110:25]
  assign cell_31_io_sum_in = cell_30_io_sum_out; // @[mul.scala 111:25]
  assign cell_31_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_31_io_a = cell_30_io_A; // @[mul.scala 113:25]
  assign cell_31_io_b = cell_30_io_B; // @[mul.scala 114:25]
  assign cell_32_clock = clock;
  assign cell_32_reset = reset;
  assign cell_32_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_32_io_valid = cell_31_io_ready; // @[mul.scala 108:25]
  assign cell_32_io_a_in = cell_31_io_a_out; // @[mul.scala 109:25]
  assign cell_32_io_b_in = cell_31_io_b_out; // @[mul.scala 110:25]
  assign cell_32_io_sum_in = cell_31_io_sum_out; // @[mul.scala 111:25]
  assign cell_32_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_32_io_a = cell_31_io_A; // @[mul.scala 113:25]
  assign cell_32_io_b = cell_31_io_B; // @[mul.scala 114:25]
  assign cell_33_clock = clock;
  assign cell_33_reset = reset;
  assign cell_33_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_33_io_valid = cell_32_io_ready; // @[mul.scala 108:25]
  assign cell_33_io_a_in = cell_32_io_a_out; // @[mul.scala 109:25]
  assign cell_33_io_b_in = cell_32_io_b_out; // @[mul.scala 110:25]
  assign cell_33_io_sum_in = cell_32_io_sum_out; // @[mul.scala 111:25]
  assign cell_33_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_33_io_a = cell_32_io_A; // @[mul.scala 113:25]
  assign cell_33_io_b = cell_32_io_B; // @[mul.scala 114:25]
  assign cell_34_clock = clock;
  assign cell_34_reset = reset;
  assign cell_34_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_34_io_valid = cell_33_io_ready; // @[mul.scala 108:25]
  assign cell_34_io_a_in = cell_33_io_a_out; // @[mul.scala 109:25]
  assign cell_34_io_b_in = cell_33_io_b_out; // @[mul.scala 110:25]
  assign cell_34_io_sum_in = cell_33_io_sum_out; // @[mul.scala 111:25]
  assign cell_34_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_34_io_a = cell_33_io_A; // @[mul.scala 113:25]
  assign cell_34_io_b = cell_33_io_B; // @[mul.scala 114:25]
  assign cell_35_clock = clock;
  assign cell_35_reset = reset;
  assign cell_35_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_35_io_valid = cell_34_io_ready; // @[mul.scala 108:25]
  assign cell_35_io_a_in = cell_34_io_a_out; // @[mul.scala 109:25]
  assign cell_35_io_b_in = cell_34_io_b_out; // @[mul.scala 110:25]
  assign cell_35_io_sum_in = cell_34_io_sum_out; // @[mul.scala 111:25]
  assign cell_35_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_35_io_a = cell_34_io_A; // @[mul.scala 113:25]
  assign cell_35_io_b = cell_34_io_B; // @[mul.scala 114:25]
  assign cell_36_clock = clock;
  assign cell_36_reset = reset;
  assign cell_36_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_36_io_valid = cell_35_io_ready; // @[mul.scala 108:25]
  assign cell_36_io_a_in = cell_35_io_a_out; // @[mul.scala 109:25]
  assign cell_36_io_b_in = cell_35_io_b_out; // @[mul.scala 110:25]
  assign cell_36_io_sum_in = cell_35_io_sum_out; // @[mul.scala 111:25]
  assign cell_36_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_36_io_a = cell_35_io_A; // @[mul.scala 113:25]
  assign cell_36_io_b = cell_35_io_B; // @[mul.scala 114:25]
  assign cell_37_clock = clock;
  assign cell_37_reset = reset;
  assign cell_37_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_37_io_valid = cell_36_io_ready; // @[mul.scala 108:25]
  assign cell_37_io_a_in = cell_36_io_a_out; // @[mul.scala 109:25]
  assign cell_37_io_b_in = cell_36_io_b_out; // @[mul.scala 110:25]
  assign cell_37_io_sum_in = cell_36_io_sum_out; // @[mul.scala 111:25]
  assign cell_37_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_37_io_a = cell_36_io_A; // @[mul.scala 113:25]
  assign cell_37_io_b = cell_36_io_B; // @[mul.scala 114:25]
  assign cell_38_clock = clock;
  assign cell_38_reset = reset;
  assign cell_38_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_38_io_valid = cell_37_io_ready; // @[mul.scala 108:25]
  assign cell_38_io_a_in = cell_37_io_a_out; // @[mul.scala 109:25]
  assign cell_38_io_b_in = cell_37_io_b_out; // @[mul.scala 110:25]
  assign cell_38_io_sum_in = cell_37_io_sum_out; // @[mul.scala 111:25]
  assign cell_38_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_38_io_a = cell_37_io_A; // @[mul.scala 113:25]
  assign cell_38_io_b = cell_37_io_B; // @[mul.scala 114:25]
  assign cell_39_clock = clock;
  assign cell_39_reset = reset;
  assign cell_39_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_39_io_valid = cell_38_io_ready; // @[mul.scala 108:25]
  assign cell_39_io_a_in = cell_38_io_a_out; // @[mul.scala 109:25]
  assign cell_39_io_b_in = cell_38_io_b_out; // @[mul.scala 110:25]
  assign cell_39_io_sum_in = cell_38_io_sum_out; // @[mul.scala 111:25]
  assign cell_39_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_39_io_a = cell_38_io_A; // @[mul.scala 113:25]
  assign cell_39_io_b = cell_38_io_B; // @[mul.scala 114:25]
  assign cell_40_clock = clock;
  assign cell_40_reset = reset;
  assign cell_40_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_40_io_valid = cell_39_io_ready; // @[mul.scala 108:25]
  assign cell_40_io_a_in = cell_39_io_a_out; // @[mul.scala 109:25]
  assign cell_40_io_b_in = cell_39_io_b_out; // @[mul.scala 110:25]
  assign cell_40_io_sum_in = cell_39_io_sum_out; // @[mul.scala 111:25]
  assign cell_40_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_40_io_a = cell_39_io_A; // @[mul.scala 113:25]
  assign cell_40_io_b = cell_39_io_B; // @[mul.scala 114:25]
  assign cell_41_clock = clock;
  assign cell_41_reset = reset;
  assign cell_41_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_41_io_valid = cell_40_io_ready; // @[mul.scala 108:25]
  assign cell_41_io_a_in = cell_40_io_a_out; // @[mul.scala 109:25]
  assign cell_41_io_b_in = cell_40_io_b_out; // @[mul.scala 110:25]
  assign cell_41_io_sum_in = cell_40_io_sum_out; // @[mul.scala 111:25]
  assign cell_41_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_41_io_a = cell_40_io_A; // @[mul.scala 113:25]
  assign cell_41_io_b = cell_40_io_B; // @[mul.scala 114:25]
  assign cell_42_clock = clock;
  assign cell_42_reset = reset;
  assign cell_42_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_42_io_valid = cell_41_io_ready; // @[mul.scala 108:25]
  assign cell_42_io_a_in = cell_41_io_a_out; // @[mul.scala 109:25]
  assign cell_42_io_b_in = cell_41_io_b_out; // @[mul.scala 110:25]
  assign cell_42_io_sum_in = cell_41_io_sum_out; // @[mul.scala 111:25]
  assign cell_42_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_42_io_a = cell_41_io_A; // @[mul.scala 113:25]
  assign cell_42_io_b = cell_41_io_B; // @[mul.scala 114:25]
  assign cell_43_clock = clock;
  assign cell_43_reset = reset;
  assign cell_43_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_43_io_valid = cell_42_io_ready; // @[mul.scala 108:25]
  assign cell_43_io_a_in = cell_42_io_a_out; // @[mul.scala 109:25]
  assign cell_43_io_b_in = cell_42_io_b_out; // @[mul.scala 110:25]
  assign cell_43_io_sum_in = cell_42_io_sum_out; // @[mul.scala 111:25]
  assign cell_43_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_43_io_a = cell_42_io_A; // @[mul.scala 113:25]
  assign cell_43_io_b = cell_42_io_B; // @[mul.scala 114:25]
  assign cell_44_clock = clock;
  assign cell_44_reset = reset;
  assign cell_44_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_44_io_valid = cell_43_io_ready; // @[mul.scala 108:25]
  assign cell_44_io_a_in = cell_43_io_a_out; // @[mul.scala 109:25]
  assign cell_44_io_b_in = cell_43_io_b_out; // @[mul.scala 110:25]
  assign cell_44_io_sum_in = cell_43_io_sum_out; // @[mul.scala 111:25]
  assign cell_44_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_44_io_a = cell_43_io_A; // @[mul.scala 113:25]
  assign cell_44_io_b = cell_43_io_B; // @[mul.scala 114:25]
  assign cell_45_clock = clock;
  assign cell_45_reset = reset;
  assign cell_45_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_45_io_valid = cell_44_io_ready; // @[mul.scala 108:25]
  assign cell_45_io_a_in = cell_44_io_a_out; // @[mul.scala 109:25]
  assign cell_45_io_b_in = cell_44_io_b_out; // @[mul.scala 110:25]
  assign cell_45_io_sum_in = cell_44_io_sum_out; // @[mul.scala 111:25]
  assign cell_45_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_45_io_a = cell_44_io_A; // @[mul.scala 113:25]
  assign cell_45_io_b = cell_44_io_B; // @[mul.scala 114:25]
  assign cell_46_clock = clock;
  assign cell_46_reset = reset;
  assign cell_46_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_46_io_valid = cell_45_io_ready; // @[mul.scala 108:25]
  assign cell_46_io_a_in = cell_45_io_a_out; // @[mul.scala 109:25]
  assign cell_46_io_b_in = cell_45_io_b_out; // @[mul.scala 110:25]
  assign cell_46_io_sum_in = cell_45_io_sum_out; // @[mul.scala 111:25]
  assign cell_46_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_46_io_a = cell_45_io_A; // @[mul.scala 113:25]
  assign cell_46_io_b = cell_45_io_B; // @[mul.scala 114:25]
  assign cell_47_clock = clock;
  assign cell_47_reset = reset;
  assign cell_47_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_47_io_valid = cell_46_io_ready; // @[mul.scala 108:25]
  assign cell_47_io_a_in = cell_46_io_a_out; // @[mul.scala 109:25]
  assign cell_47_io_b_in = cell_46_io_b_out; // @[mul.scala 110:25]
  assign cell_47_io_sum_in = cell_46_io_sum_out; // @[mul.scala 111:25]
  assign cell_47_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_47_io_a = cell_46_io_A; // @[mul.scala 113:25]
  assign cell_47_io_b = cell_46_io_B; // @[mul.scala 114:25]
  assign cell_48_clock = clock;
  assign cell_48_reset = reset;
  assign cell_48_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_48_io_valid = cell_47_io_ready; // @[mul.scala 108:25]
  assign cell_48_io_a_in = cell_47_io_a_out; // @[mul.scala 109:25]
  assign cell_48_io_b_in = cell_47_io_b_out; // @[mul.scala 110:25]
  assign cell_48_io_sum_in = cell_47_io_sum_out; // @[mul.scala 111:25]
  assign cell_48_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_48_io_a = cell_47_io_A; // @[mul.scala 113:25]
  assign cell_48_io_b = cell_47_io_B; // @[mul.scala 114:25]
  assign cell_49_clock = clock;
  assign cell_49_reset = reset;
  assign cell_49_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_49_io_valid = cell_48_io_ready; // @[mul.scala 108:25]
  assign cell_49_io_a_in = cell_48_io_a_out; // @[mul.scala 109:25]
  assign cell_49_io_b_in = cell_48_io_b_out; // @[mul.scala 110:25]
  assign cell_49_io_sum_in = cell_48_io_sum_out; // @[mul.scala 111:25]
  assign cell_49_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_49_io_a = cell_48_io_A; // @[mul.scala 113:25]
  assign cell_49_io_b = cell_48_io_B; // @[mul.scala 114:25]
  assign cell_50_clock = clock;
  assign cell_50_reset = reset;
  assign cell_50_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_50_io_valid = cell_49_io_ready; // @[mul.scala 108:25]
  assign cell_50_io_a_in = cell_49_io_a_out; // @[mul.scala 109:25]
  assign cell_50_io_b_in = cell_49_io_b_out; // @[mul.scala 110:25]
  assign cell_50_io_sum_in = cell_49_io_sum_out; // @[mul.scala 111:25]
  assign cell_50_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_50_io_a = cell_49_io_A; // @[mul.scala 113:25]
  assign cell_50_io_b = cell_49_io_B; // @[mul.scala 114:25]
  assign cell_51_clock = clock;
  assign cell_51_reset = reset;
  assign cell_51_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_51_io_valid = cell_50_io_ready; // @[mul.scala 108:25]
  assign cell_51_io_a_in = cell_50_io_a_out; // @[mul.scala 109:25]
  assign cell_51_io_b_in = cell_50_io_b_out; // @[mul.scala 110:25]
  assign cell_51_io_sum_in = cell_50_io_sum_out; // @[mul.scala 111:25]
  assign cell_51_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_51_io_a = cell_50_io_A; // @[mul.scala 113:25]
  assign cell_51_io_b = cell_50_io_B; // @[mul.scala 114:25]
  assign cell_52_clock = clock;
  assign cell_52_reset = reset;
  assign cell_52_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_52_io_valid = cell_51_io_ready; // @[mul.scala 108:25]
  assign cell_52_io_a_in = cell_51_io_a_out; // @[mul.scala 109:25]
  assign cell_52_io_b_in = cell_51_io_b_out; // @[mul.scala 110:25]
  assign cell_52_io_sum_in = cell_51_io_sum_out; // @[mul.scala 111:25]
  assign cell_52_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_52_io_a = cell_51_io_A; // @[mul.scala 113:25]
  assign cell_52_io_b = cell_51_io_B; // @[mul.scala 114:25]
  assign cell_53_clock = clock;
  assign cell_53_reset = reset;
  assign cell_53_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_53_io_valid = cell_52_io_ready; // @[mul.scala 108:25]
  assign cell_53_io_a_in = cell_52_io_a_out; // @[mul.scala 109:25]
  assign cell_53_io_b_in = cell_52_io_b_out; // @[mul.scala 110:25]
  assign cell_53_io_sum_in = cell_52_io_sum_out; // @[mul.scala 111:25]
  assign cell_53_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_53_io_a = cell_52_io_A; // @[mul.scala 113:25]
  assign cell_53_io_b = cell_52_io_B; // @[mul.scala 114:25]
  assign cell_54_clock = clock;
  assign cell_54_reset = reset;
  assign cell_54_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_54_io_valid = cell_53_io_ready; // @[mul.scala 108:25]
  assign cell_54_io_a_in = cell_53_io_a_out; // @[mul.scala 109:25]
  assign cell_54_io_b_in = cell_53_io_b_out; // @[mul.scala 110:25]
  assign cell_54_io_sum_in = cell_53_io_sum_out; // @[mul.scala 111:25]
  assign cell_54_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_54_io_a = cell_53_io_A; // @[mul.scala 113:25]
  assign cell_54_io_b = cell_53_io_B; // @[mul.scala 114:25]
  assign cell_55_clock = clock;
  assign cell_55_reset = reset;
  assign cell_55_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_55_io_valid = cell_54_io_ready; // @[mul.scala 108:25]
  assign cell_55_io_a_in = cell_54_io_a_out; // @[mul.scala 109:25]
  assign cell_55_io_b_in = cell_54_io_b_out; // @[mul.scala 110:25]
  assign cell_55_io_sum_in = cell_54_io_sum_out; // @[mul.scala 111:25]
  assign cell_55_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_55_io_a = cell_54_io_A; // @[mul.scala 113:25]
  assign cell_55_io_b = cell_54_io_B; // @[mul.scala 114:25]
  assign cell_56_clock = clock;
  assign cell_56_reset = reset;
  assign cell_56_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_56_io_valid = cell_55_io_ready; // @[mul.scala 108:25]
  assign cell_56_io_a_in = cell_55_io_a_out; // @[mul.scala 109:25]
  assign cell_56_io_b_in = cell_55_io_b_out; // @[mul.scala 110:25]
  assign cell_56_io_sum_in = cell_55_io_sum_out; // @[mul.scala 111:25]
  assign cell_56_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_56_io_a = cell_55_io_A; // @[mul.scala 113:25]
  assign cell_56_io_b = cell_55_io_B; // @[mul.scala 114:25]
  assign cell_57_clock = clock;
  assign cell_57_reset = reset;
  assign cell_57_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_57_io_valid = cell_56_io_ready; // @[mul.scala 108:25]
  assign cell_57_io_a_in = cell_56_io_a_out; // @[mul.scala 109:25]
  assign cell_57_io_b_in = cell_56_io_b_out; // @[mul.scala 110:25]
  assign cell_57_io_sum_in = cell_56_io_sum_out; // @[mul.scala 111:25]
  assign cell_57_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_57_io_a = cell_56_io_A; // @[mul.scala 113:25]
  assign cell_57_io_b = cell_56_io_B; // @[mul.scala 114:25]
  assign cell_58_clock = clock;
  assign cell_58_reset = reset;
  assign cell_58_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_58_io_valid = cell_57_io_ready; // @[mul.scala 108:25]
  assign cell_58_io_a_in = cell_57_io_a_out; // @[mul.scala 109:25]
  assign cell_58_io_b_in = cell_57_io_b_out; // @[mul.scala 110:25]
  assign cell_58_io_sum_in = cell_57_io_sum_out; // @[mul.scala 111:25]
  assign cell_58_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_58_io_a = cell_57_io_A; // @[mul.scala 113:25]
  assign cell_58_io_b = cell_57_io_B; // @[mul.scala 114:25]
  assign cell_59_clock = clock;
  assign cell_59_reset = reset;
  assign cell_59_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_59_io_valid = cell_58_io_ready; // @[mul.scala 108:25]
  assign cell_59_io_a_in = cell_58_io_a_out; // @[mul.scala 109:25]
  assign cell_59_io_b_in = cell_58_io_b_out; // @[mul.scala 110:25]
  assign cell_59_io_sum_in = cell_58_io_sum_out; // @[mul.scala 111:25]
  assign cell_59_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_59_io_a = cell_58_io_A; // @[mul.scala 113:25]
  assign cell_59_io_b = cell_58_io_B; // @[mul.scala 114:25]
  assign cell_60_clock = clock;
  assign cell_60_reset = reset;
  assign cell_60_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_60_io_valid = cell_59_io_ready; // @[mul.scala 108:25]
  assign cell_60_io_a_in = cell_59_io_a_out; // @[mul.scala 109:25]
  assign cell_60_io_b_in = cell_59_io_b_out; // @[mul.scala 110:25]
  assign cell_60_io_sum_in = cell_59_io_sum_out; // @[mul.scala 111:25]
  assign cell_60_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_60_io_a = cell_59_io_A; // @[mul.scala 113:25]
  assign cell_60_io_b = cell_59_io_B; // @[mul.scala 114:25]
  assign cell_61_clock = clock;
  assign cell_61_reset = reset;
  assign cell_61_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_61_io_valid = cell_60_io_ready; // @[mul.scala 108:25]
  assign cell_61_io_a_in = cell_60_io_a_out; // @[mul.scala 109:25]
  assign cell_61_io_b_in = cell_60_io_b_out; // @[mul.scala 110:25]
  assign cell_61_io_sum_in = cell_60_io_sum_out; // @[mul.scala 111:25]
  assign cell_61_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_61_io_a = cell_60_io_A; // @[mul.scala 113:25]
  assign cell_61_io_b = cell_60_io_B; // @[mul.scala 114:25]
  assign cell_62_clock = clock;
  assign cell_62_reset = reset;
  assign cell_62_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_62_io_valid = cell_61_io_ready; // @[mul.scala 108:25]
  assign cell_62_io_a_in = cell_61_io_a_out; // @[mul.scala 109:25]
  assign cell_62_io_b_in = cell_61_io_b_out; // @[mul.scala 110:25]
  assign cell_62_io_sum_in = cell_61_io_sum_out; // @[mul.scala 111:25]
  assign cell_62_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_62_io_a = cell_61_io_A; // @[mul.scala 113:25]
  assign cell_62_io_b = cell_61_io_B; // @[mul.scala 114:25]
  assign cell_63_clock = clock;
  assign cell_63_reset = reset;
  assign cell_63_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_63_io_valid = cell_62_io_ready; // @[mul.scala 108:25]
  assign cell_63_io_a_in = cell_62_io_a_out; // @[mul.scala 109:25]
  assign cell_63_io_b_in = cell_62_io_b_out; // @[mul.scala 110:25]
  assign cell_63_io_sum_in = cell_62_io_sum_out; // @[mul.scala 111:25]
  assign cell_63_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_63_io_a = cell_62_io_A; // @[mul.scala 113:25]
  assign cell_63_io_b = cell_62_io_B; // @[mul.scala 114:25]
  assign cell_64_clock = clock;
  assign cell_64_reset = reset;
  assign cell_64_io_flush = io_flush; // @[mul.scala 107:25]
  assign cell_64_io_valid = cell_63_io_ready; // @[mul.scala 108:25]
  assign cell_64_io_a_in = cell_63_io_a_out; // @[mul.scala 109:25]
  assign cell_64_io_b_in = cell_63_io_b_out; // @[mul.scala 110:25]
  assign cell_64_io_sum_in = cell_63_io_sum_out; // @[mul.scala 111:25]
  assign cell_64_io_last = 1'h1; // @[mul.scala 112:25]
  assign cell_64_io_a = cell_63_io_A; // @[mul.scala 113:25]
  assign cell_64_io_b = cell_63_io_B; // @[mul.scala 114:25]
  always @(posedge clock) begin
    a <= _GEN_1[128:0]; // @[mul.scala 77:{20,20} 81:7]
    b <= _GEN_2[128:0]; // @[mul.scala 78:{20,20} 87:7]
    if (reset) begin // @[mul.scala 79:24]
      valid <= 1'h0; // @[mul.scala 79:24]
    end else if (io_flush) begin // @[mul.scala 93:15]
      valid <= 1'h0;
    end else begin
      valid <= io_mul_valid;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_out_valid & ~reset & ~(cell_64_io_sum_out == _GEN_0)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at mul.scala:124 chisel3.assert( cell(64).io.sum_out === (cell(64).io.A * cell(64).io.B))\n"
            ); // @[mul.scala 124:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (io_out_valid & ~reset & ~(cell_64_io_sum_out == _GEN_0)) begin
          $fatal; // @[mul.scala 124:23]
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
  _RAND_0 = {5{`RANDOM}};
  a = _RAND_0[128:0];
  _RAND_1 = {5{`RANDOM}};
  b = _RAND_1[128:0];
  _RAND_2 = {1{`RANDOM}};
  valid = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

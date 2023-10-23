module unit(
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
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [159:0] _RAND_3;
  reg [159:0] _RAND_4;
  reg [159:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg  state; // @[base_mul.scala 21:24]
  reg [7:0] cnt; // @[base_mul.scala 44:22]
  reg [5:0] mulBits; // @[base_mul.scala 31:26]
  wire [7:0] _GEN_0 = {{2'd0}, mulBits}; // @[base_mul.scala 60:18]
  wire  last = cnt == _GEN_0; // @[base_mul.scala 60:18]
  wire  _next_valid_T_1 = ~state; // @[base_mul.scala 34:47]
  wire  next_valid = io_mul_valid & ~state; // @[base_mul.scala 34:38]
  wire [5:0] mulbits = io_mulw ? 6'h1f : 6'h3f; // @[base_mul.scala 38:19]
  reg [128:0] a; // @[base_mul.scala 41:20]
  reg [128:0] b; // @[base_mul.scala 42:20]
  reg [129:0] result; // @[base_mul.scala 43:25]
  wire [129:0] _a_T = {a, 1'h0}; // @[base_mul.scala 46:24]
  wire  _a_T_1 = ~next_valid; // @[base_mul.scala 47:13]
  wire [63:0] _a_T_3 = io_multiplicand >> mulbits; // @[base_mul.scala 48:49]
  wire [64:0] _a_T_5 = {_a_T_3[0],io_multiplicand}; // @[Cat.scala 33:92]
  wire [64:0] _a_T_6 = {1'h0,io_multiplicand}; // @[Cat.scala 33:92]
  wire [64:0] _a_T_7 = io_mul_signed[1] ? _a_T_5 : _a_T_6; // @[base_mul.scala 48:12]
  wire [128:0] _a_T_8 = ~next_valid ? a : {{64'd0}, _a_T_7}; // @[base_mul.scala 47:12]
  wire [129:0] _a_T_9 = state ? _a_T : {{1'd0}, _a_T_8}; // @[base_mul.scala 46:12]
  wire [128:0] _b_T = {{1'd0}, b[128:1]}; // @[base_mul.scala 51:24]
  wire [64:0] _b_T_5 = {_a_T_3[0],io_multiplier}; // @[Cat.scala 33:92]
  wire [64:0] _b_T_6 = {1'h0,io_multiplier}; // @[Cat.scala 33:92]
  wire [64:0] _b_T_7 = io_mul_signed[0] ? _b_T_5 : _b_T_6; // @[base_mul.scala 53:12]
  wire [7:0] _cnt_T_5 = cnt + 8'h1; // @[base_mul.scala 58:17]
  wire [129:0] _GEN_3 = {{1'd0}, a}; // @[base_mul.scala 61:32]
  wire [129:0] _s_T_3 = result - _GEN_3; // @[base_mul.scala 61:32]
  wire [129:0] _s_T_6 = result + _GEN_3; // @[base_mul.scala 62:24]
  wire [6:0] _io_out_valid_T = mulBits + 6'h1; // @[base_mul.scala 66:36]
  wire [7:0] _GEN_5 = {{1'd0}, _io_out_valid_T}; // @[base_mul.scala 66:25]
  wire [129:0] _GEN_7 = reset ? 130'h0 : _a_T_9; // @[base_mul.scala 41:{20,20} 46:7]
  assign io_mul_ready = ~state; // @[base_mul.scala 67:27]
  assign io_out_valid = cnt == _GEN_5; // @[base_mul.scala 66:25]
  assign io_result_hi = result[127:64]; // @[base_mul.scala 69:26]
  assign io_result_lo = result[63:0]; // @[base_mul.scala 68:26]
  always @(posedge clock) begin
    if (reset) begin // @[base_mul.scala 21:24]
      state <= 1'h0; // @[base_mul.scala 21:24]
    end else if (state) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[base_mul.scala 28:22]
        state <= 1'h0;
      end else if (last) begin // @[base_mul.scala 28:49]
        state <= 1'h0;
      end else begin
        state <= 1'h1;
      end
    end else if (io_flush) begin // @[base_mul.scala 27:22]
      state <= 1'h0;
    end else begin
      state <= io_mul_valid;
    end
    if (reset) begin // @[base_mul.scala 44:22]
      cnt <= 8'h0; // @[base_mul.scala 44:22]
    end else if (_next_valid_T_1) begin // @[base_mul.scala 56:16]
      cnt <= 8'h0;
    end else if (b == 129'h0 & cnt != _GEN_0) begin // @[base_mul.scala 57:16]
      cnt <= {{2'd0}, mulBits};
    end else begin
      cnt <= _cnt_T_5;
    end
    if (reset) begin // @[base_mul.scala 31:26]
      mulBits <= 6'h0; // @[base_mul.scala 31:26]
    end else if (_next_valid_T_1 & io_mul_valid) begin // @[base_mul.scala 39:19]
      if (io_mulw) begin // @[base_mul.scala 38:19]
        mulBits <= 6'h1f;
      end else begin
        mulBits <= 6'h3f;
      end
    end
    a <= _GEN_7[128:0]; // @[base_mul.scala 41:{20,20} 46:7]
    if (reset) begin // @[base_mul.scala 42:20]
      b <= 129'h0; // @[base_mul.scala 42:20]
    end else if (state) begin // @[base_mul.scala 51:12]
      b <= _b_T;
    end else if (!(_a_T_1)) begin // @[base_mul.scala 52:12]
      b <= {{64'd0}, _b_T_7};
    end
    if (reset) begin // @[base_mul.scala 43:25]
      result <= 130'h0; // @[base_mul.scala 43:25]
    end else if (state) begin // @[base_mul.scala 64:16]
      if (last & b[0]) begin // @[base_mul.scala 61:11]
        result <= _s_T_3;
      end else if (b[0]) begin // @[base_mul.scala 62:12]
        result <= _s_T_6;
      end
    end else begin
      result <= 130'h0;
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
  state = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  cnt = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  mulBits = _RAND_2[5:0];
  _RAND_3 = {5{`RANDOM}};
  a = _RAND_3[128:0];
  _RAND_4 = {5{`RANDOM}};
  b = _RAND_4[128:0];
  _RAND_5 = {5{`RANDOM}};
  result = _RAND_5[129:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

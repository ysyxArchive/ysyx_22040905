module Wallace(
  input         clock,
  input         reset,
  input         io_mul_valid,
  input         io_flush,
  input  [1:0]  io_mul_signed,
  input  [63:0] io_multiplicand,
  input  [63:0] io_multiplier,
  output        io_out_valid,
  output [63:0] io_result_hi,
  output [63:0] io_result_lo
);
`ifdef RANDOMIZE_REG_INIT
  reg [159:0] _RAND_0;
  reg [95:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  walloc_64_mul_clock; // @[wallace_mul.scala 296:20]
  wire  walloc_64_mul_reset; // @[wallace_mul.scala 296:20]
  wire [131:0] walloc_64_mul_io_multiplicand; // @[wallace_mul.scala 296:20]
  wire [65:0] walloc_64_mul_io_multiplier; // @[wallace_mul.scala 296:20]
  wire [63:0] walloc_64_mul_io_result_hi; // @[wallace_mul.scala 296:20]
  wire [63:0] walloc_64_mul_io_result_lo; // @[wallace_mul.scala 296:20]
  reg [131:0] a; // @[wallace_mul.scala 278:18]
  reg [65:0] b; // @[wallace_mul.scala 279:18]
  reg  valid; // @[wallace_mul.scala 280:22]
  wire  _a_T_2 = io_mul_valid & io_mul_signed[1]; // @[wallace_mul.scala 283:24]
  wire [67:0] _a_T_16 = io_multiplicand[63] ? 68'hfffffffffffffffff : 68'h0; // @[Bitwise.scala 77:12]
  wire [131:0] _a_T_17 = {_a_T_16,io_multiplicand}; // @[Cat.scala 33:92]
  wire [63:0] _a_T_19 = io_mul_valid ? io_multiplicand : 64'h0; // @[wallace_mul.scala 285:10]
  wire [131:0] _a_T_20 = _a_T_2 ? _a_T_17 : {{68'd0}, _a_T_19}; // @[wallace_mul.scala 284:10]
  wire [163:0] _a_T_21 = {{32'd0}, _a_T_20}; // @[wallace_mul.scala 283:10]
  wire [163:0] _a_T_22 = io_flush ? 164'h0 : _a_T_21; // @[wallace_mul.scala 282:10]
  wire [67:0] _b_T_16 = io_multiplier[63] ? 68'hfffffffffffffffff : 68'h0; // @[Bitwise.scala 77:12]
  wire [131:0] _b_T_17 = {_b_T_16,io_multiplier}; // @[Cat.scala 33:92]
  wire [63:0] _b_T_19 = io_mul_valid ? io_multiplier : 64'h0; // @[wallace_mul.scala 291:10]
  wire [131:0] _b_T_20 = _a_T_2 ? _b_T_17 : {{68'd0}, _b_T_19}; // @[wallace_mul.scala 290:10]
  wire [163:0] _b_T_21 = {{32'd0}, _b_T_20}; // @[wallace_mul.scala 289:10]
  wire [163:0] _b_T_22 = io_flush ? 164'h0 : _b_T_21; // @[wallace_mul.scala 288:10]
  wire [197:0] _T_1 = a * b; // @[wallace_mul.scala 308:27]
  wire [127:0] _T_2 = {io_result_hi,io_result_lo}; // @[Cat.scala 33:92]
  wire [197:0] _GEN_0 = {{70'd0}, _T_2}; // @[wallace_mul.scala 308:32]
  wire [163:0] _GEN_1 = reset ? 164'h0 : _a_T_22; // @[wallace_mul.scala 278:{18,18} 282:5]
  wire [163:0] _GEN_2 = reset ? 164'h0 : _b_T_22; // @[wallace_mul.scala 279:{18,18} 288:5]
  walloc_64_mul walloc_64_mul ( // @[wallace_mul.scala 296:20]
    .clock(walloc_64_mul_clock),
    .reset(walloc_64_mul_reset),
    .io_multiplicand(walloc_64_mul_io_multiplicand),
    .io_multiplier(walloc_64_mul_io_multiplier),
    .io_result_hi(walloc_64_mul_io_result_hi),
    .io_result_lo(walloc_64_mul_io_result_lo)
  );
  assign io_out_valid = valid; // @[wallace_mul.scala 303:15]
  assign io_result_hi = walloc_64_mul_io_result_hi; // @[wallace_mul.scala 300:15]
  assign io_result_lo = walloc_64_mul_io_result_lo; // @[wallace_mul.scala 301:15]
  assign walloc_64_mul_clock = clock;
  assign walloc_64_mul_reset = reset;
  assign walloc_64_mul_io_multiplicand = a; // @[wallace_mul.scala 298:20]
  assign walloc_64_mul_io_multiplier = b; // @[wallace_mul.scala 299:18]
  always @(posedge clock) begin
    a <= _GEN_1[131:0]; // @[wallace_mul.scala 278:{18,18} 282:5]
    b <= _GEN_2[65:0]; // @[wallace_mul.scala 279:{18,18} 288:5]
    if (reset) begin // @[wallace_mul.scala 280:22]
      valid <= 1'h0; // @[wallace_mul.scala 280:22]
    end else if (io_flush) begin // @[wallace_mul.scala 294:14]
      valid <= 1'h0;
    end else begin
      valid <= io_mul_valid;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_out_valid & ~reset & ~(_T_1 == _GEN_0)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at wallace_mul.scala:308 chisel3.assert( (a* b) === Cat(io.result_hi,io.result_lo))\n"
            ); // @[wallace_mul.scala 308:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (io_out_valid & ~reset & ~(_T_1 == _GEN_0)) begin
          $fatal; // @[wallace_mul.scala 308:23]
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
  a = _RAND_0[131:0];
  _RAND_1 = {3{`RANDOM}};
  b = _RAND_1[65:0];
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

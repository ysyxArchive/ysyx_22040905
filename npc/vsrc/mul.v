module mul(
  input         clock,
  input         reset,
  input         io_mul_valid,
  input         io_flush,
  input  [1:0]  io_mul_signed,
  input  [63:0] io_multiplicand,
  input  [63:0] io_multiplier,
  output        io_mul_ready,
  output        io_out_valid,
  output [63:0] io_result_lo,
  output [63:0] io_mul_num
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  base_mul_clock; // @[mul_switch.scala 21:24]
  wire  base_mul_reset; // @[mul_switch.scala 21:24]
  wire  base_mul_io_mul_valid; // @[mul_switch.scala 21:24]
  wire  base_mul_io_flush; // @[mul_switch.scala 21:24]
  wire [1:0] base_mul_io_mul_signed; // @[mul_switch.scala 21:24]
  wire [63:0] base_mul_io_multiplicand; // @[mul_switch.scala 21:24]
  wire [63:0] base_mul_io_multiplier; // @[mul_switch.scala 21:24]
  wire  base_mul_io_mul_ready; // @[mul_switch.scala 21:24]
  wire  base_mul_io_out_valid; // @[mul_switch.scala 21:24]
  wire [63:0] base_mul_io_result_lo; // @[mul_switch.scala 21:24]
  reg [63:0] mul_num; // @[mul_switch.scala 43:24]
  wire [63:0] _mul_num_T_1 = mul_num + 64'h1; // @[mul_switch.scala 45:24]
  base_mul base_mul ( // @[mul_switch.scala 21:24]
    .clock(base_mul_clock),
    .reset(base_mul_reset),
    .io_mul_valid(base_mul_io_mul_valid),
    .io_flush(base_mul_io_flush),
    .io_mul_signed(base_mul_io_mul_signed),
    .io_multiplicand(base_mul_io_multiplicand),
    .io_multiplier(base_mul_io_multiplier),
    .io_mul_ready(base_mul_io_mul_ready),
    .io_out_valid(base_mul_io_out_valid),
    .io_result_lo(base_mul_io_result_lo)
  );
  assign io_mul_ready = base_mul_io_mul_ready; // @[mul_switch.scala 38:15]
  assign io_out_valid = base_mul_io_out_valid; // @[mul_switch.scala 39:15]
  assign io_result_lo = base_mul_io_result_lo; // @[mul_switch.scala 41:15]
  assign io_mul_num = mul_num; // @[mul_switch.scala 47:14]
  assign base_mul_clock = clock;
  assign base_mul_reset = reset;
  assign base_mul_io_mul_valid = io_mul_valid; // @[mul_switch.scala 24:21]
  assign base_mul_io_flush = io_flush; // @[mul_switch.scala 25:17]
  assign base_mul_io_mul_signed = io_mul_signed; // @[mul_switch.scala 27:22]
  assign base_mul_io_multiplicand = io_multiplicand; // @[mul_switch.scala 28:24]
  assign base_mul_io_multiplier = io_multiplier; // @[mul_switch.scala 29:22]
  always @(posedge clock) begin
    if (reset) begin // @[mul_switch.scala 43:24]
      mul_num <= 64'h0; // @[mul_switch.scala 43:24]
    end else if (io_mul_valid) begin // @[mul_switch.scala 44:27]
      mul_num <= _mul_num_T_1; // @[mul_switch.scala 45:13]
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
  mul_num = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

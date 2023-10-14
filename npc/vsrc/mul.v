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
  output [63:0] io_result_lo
);
  wire  base_mul_clock; // @[mul_switch.scala 20:24]
  wire  base_mul_reset; // @[mul_switch.scala 20:24]
  wire  base_mul_io_mul_valid; // @[mul_switch.scala 20:24]
  wire  base_mul_io_flush; // @[mul_switch.scala 20:24]
  wire [1:0] base_mul_io_mul_signed; // @[mul_switch.scala 20:24]
  wire [63:0] base_mul_io_multiplicand; // @[mul_switch.scala 20:24]
  wire [63:0] base_mul_io_multiplier; // @[mul_switch.scala 20:24]
  wire  base_mul_io_mul_ready; // @[mul_switch.scala 20:24]
  wire  base_mul_io_out_valid; // @[mul_switch.scala 20:24]
  wire [63:0] base_mul_io_result_lo; // @[mul_switch.scala 20:24]
  base_mul base_mul ( // @[mul_switch.scala 20:24]
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
  assign io_mul_ready = base_mul_io_mul_ready; // @[mul_switch.scala 37:15]
  assign io_out_valid = base_mul_io_out_valid; // @[mul_switch.scala 38:15]
  assign io_result_lo = base_mul_io_result_lo; // @[mul_switch.scala 40:15]
  assign base_mul_clock = clock;
  assign base_mul_reset = reset;
  assign base_mul_io_mul_valid = io_mul_valid; // @[mul_switch.scala 23:21]
  assign base_mul_io_flush = io_flush; // @[mul_switch.scala 24:17]
  assign base_mul_io_mul_signed = io_mul_signed; // @[mul_switch.scala 26:22]
  assign base_mul_io_multiplicand = io_multiplicand; // @[mul_switch.scala 27:24]
  assign base_mul_io_multiplier = io_multiplier; // @[mul_switch.scala 28:22]
endmodule

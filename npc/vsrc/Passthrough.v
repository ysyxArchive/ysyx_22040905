module Passthrough(
  //input        clock,
  //input        reset,
  input  [1:0] io_y,
  input  [1:0] io_x0,
  input  [1:0] io_x1,
  input  [1:0] io_x2,
  input  [1:0] io_x3,
  output [1:0] io_f
);
  wire [1:0] _GEN_0 = io_y == 2'h2 ? io_x2 : io_x3; // @[Passthrough.scala 19:31 Passthrough.scala 20:13 Passthrough.scala 22:13]
  wire [1:0] _GEN_1 = io_y == 2'h1 ? io_x1 : _GEN_0; // @[Passthrough.scala 17:27 Passthrough.scala 18:13]
  assign io_f = io_y == 2'h0 ? io_x0 : _GEN_1; // @[Passthrough.scala 15:21 Passthrough.scala 16:13]
endmodule

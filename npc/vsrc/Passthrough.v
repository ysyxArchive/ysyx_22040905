module Passthrough(
  input        clock,
  input        reset,
  input  [1:0] io_x0,
  input  [1:0] io_x1,
  input  [1:0] io_x2,
  input  [1:0] io_x3,
  input  [1:0] io_y,
  output [1:0] io_F
);
  wire  _T = io_y == 2'h0; // @[Passthrough.scala 13:13]
  wire [1:0] _GEN_0 = io_y == 2'h2 ? io_x2 : io_x3; // @[Passthrough.scala 18:26 Passthrough.scala 19:11 Passthrough.scala 21:11]
  wire [1:0] _GEN_1 = io_y == 2'h1 ? io_x1 : _GEN_0; // @[Passthrough.scala 16:26 Passthrough.scala 17:11]
  assign io_F = _T ? io_x0 : _GEN_1; // @[Passthrough.scala 14:4 Passthrough.scala 15:11]
endmodule

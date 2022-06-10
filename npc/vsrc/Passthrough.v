module Passthrough(
//  input        clock,
//  input        reset,
  input  [9:0] io_in,
  output [9:0] io_out
);
  assign io_out = io_in; // @[Passthrough.scala 9:10]
endmodule

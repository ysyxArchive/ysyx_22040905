module seg(
  input  [3:0] io_in,
  output [7:0] io_out
);
  wire [7:0] _GEN_0 = io_in == 4'h9 ? 8'h90 : 8'hff; // @[Passthrough.scala 53:28 Passthrough.scala 54:15 Passthrough.scala 56:15]
  wire [7:0] _GEN_1 = io_in == 4'h8 ? 8'h80 : _GEN_0; // @[Passthrough.scala 51:28 Passthrough.scala 52:15]
  wire [7:0] _GEN_2 = io_in == 4'h7 ? 8'hf8 : _GEN_1; // @[Passthrough.scala 49:28 Passthrough.scala 50:15]
  wire [7:0] _GEN_3 = io_in == 4'h6 ? 8'h82 : _GEN_2; // @[Passthrough.scala 47:28 Passthrough.scala 48:15]
  wire [7:0] _GEN_4 = io_in == 4'h5 ? 8'h92 : _GEN_3; // @[Passthrough.scala 45:28 Passthrough.scala 46:15]
  wire [7:0] _GEN_5 = io_in == 4'h4 ? 8'h99 : _GEN_4; // @[Passthrough.scala 43:28 Passthrough.scala 44:15]
  wire [7:0] _GEN_6 = io_in == 4'h3 ? 8'hb0 : _GEN_5; // @[Passthrough.scala 41:28 Passthrough.scala 42:15]
  wire [7:0] _GEN_7 = io_in == 4'h2 ? 8'ha4 : _GEN_6; // @[Passthrough.scala 39:28 Passthrough.scala 40:15]
  wire [7:0] _GEN_8 = io_in == 4'h1 ? 8'hf9 : _GEN_7; // @[Passthrough.scala 37:28 Passthrough.scala 38:15]
  assign io_out = io_in == 4'h0 ? 8'hc0 : _GEN_8; // @[Passthrough.scala 35:22 Passthrough.scala 36:15]
endmodule
module Passthrough(
  input        clock,
  input        reset,
  input        io_button,
  output [7:0] io_bcd8seg_0,
  output [7:0] io_bcd8seg_1,
  output [7:0] io_Result
);
  wire [3:0] m1_io_in; // @[Passthrough.scala 12:17]
  wire [7:0] m1_io_out; // @[Passthrough.scala 12:17]
  wire [3:0] m2_io_in; // @[Passthrough.scala 13:17]
  wire [7:0] m2_io_out; // @[Passthrough.scala 13:17]
  wire [7:0] _GEN_0 = 8'h1 % 8'ha; // @[Passthrough.scala 21:19]
  wire [7:0] _m1_io_in_T = _GEN_0[7:0]; // @[Passthrough.scala 21:19]
  wire [7:0] _m2_io_in_T = 8'h1 / 8'ha; // @[Passthrough.scala 22:19]
  seg m1 ( // @[Passthrough.scala 12:17]
    .io_in(m1_io_in),
    .io_out(m1_io_out)
  );
  seg m2 ( // @[Passthrough.scala 13:17]
    .io_in(m2_io_in),
    .io_out(m2_io_out)
  );
  assign io_bcd8seg_0 = m1_io_out; // @[Passthrough.scala 24:18]
  assign io_bcd8seg_1 = m2_io_out; // @[Passthrough.scala 25:18]
  assign io_Result = 8'h1; // @[Passthrough.scala 26:14]
  assign m1_io_in = _m1_io_in_T[3:0]; // @[Passthrough.scala 21:30]
  assign m2_io_in = _m2_io_in_T[3:0]; // @[Passthrough.scala 22:30]
endmodule

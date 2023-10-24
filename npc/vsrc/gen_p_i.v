module gen_p_i(
  input        io_x,
  input        io_x_sub,
  input  [3:0] io_sel,
  output       io_p
);
  wire  sel_negative = io_sel[0]; // @[wallace_mul.scala 36:26]
  wire  sel_positive = io_sel[1]; // @[wallace_mul.scala 37:26]
  wire  sel_double_negative = io_sel[2]; // @[wallace_mul.scala 38:33]
  wire  sel_double_positive = io_sel[3]; // @[wallace_mul.scala 39:33]
  wire  _io_p_T_6 = ~(sel_negative & ~io_x) & ~(sel_double_negative & ~io_x_sub); // @[wallace_mul.scala 41:37]
  wire  _io_p_T_12 = _io_p_T_6 & ~(sel_positive & io_x) & ~(sel_double_positive & io_x_sub); // @[wallace_mul.scala 42:37]
  assign io_p = ~_io_p_T_12; // @[wallace_mul.scala 41:11]
endmodule

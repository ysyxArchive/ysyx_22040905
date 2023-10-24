module gen_sel(
  input  [2:0] io_src,
  output [3:0] io_out
);
  wire  y_sub = io_src[0]; // @[wallace_mul.scala 51:21]
  wire  y = io_src[1]; // @[wallace_mul.scala 52:16]
  wire  y_add = io_src[2]; // @[wallace_mul.scala 53:20]
  wire  _sel_negative_T = ~y_sub; // @[wallace_mul.scala 55:36]
  wire  _sel_negative_T_2 = ~y; // @[wallace_mul.scala 55:45]
  wire  _sel_negative_T_4 = y & ~y_sub | ~y & y_sub; // @[wallace_mul.scala 55:43]
  wire  sel_negative = y_add & (y & ~y_sub | ~y & y_sub); // @[wallace_mul.scala 55:29]
  wire  _sel_positive_T = ~y_add; // @[wallace_mul.scala 56:23]
  wire  sel_positive = ~y_add & _sel_negative_T_4; // @[wallace_mul.scala 56:30]
  wire  sel_double_negative = y_add & _sel_negative_T_2 & _sel_negative_T; // @[wallace_mul.scala 57:41]
  wire  sel_double_positive = _sel_positive_T & y & y_sub; // @[wallace_mul.scala 58:41]
  wire [1:0] io_out_lo = {sel_positive,sel_negative}; // @[Cat.scala 33:92]
  wire [1:0] io_out_hi = {sel_double_positive,sel_double_negative}; // @[Cat.scala 33:92]
  assign io_out = {io_out_hi,io_out_lo}; // @[Cat.scala 33:92]
endmodule

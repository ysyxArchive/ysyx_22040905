module CSA(
  input  [2:0] io_in,
  output [1:0] io_out
);
  wire  _out_1_T_6 = io_in[0] ^ io_in[1]; // @[wallace_mul.scala 23:59]
  wire  out_1 = io_in[0] & io_in[1] | io_in[2] & (io_in[0] ^ io_in[1]); // @[wallace_mul.scala 23:35]
  wire  out_0 = _out_1_T_6 ^ io_in[2]; // @[wallace_mul.scala 24:33]
  assign io_out = {out_1,out_0}; // @[Cat.scala 33:92]
endmodule

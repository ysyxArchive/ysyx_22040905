module CacheArbiter(
  output        io_ifu_ar_ready,
  input         io_ifu_ar_valid,
  input  [31:0] io_ifu_ar_bits_addr,
  input  [7:0]  io_ifu_ar_bits_len,
  output        io_ifu_r_valid,
  output [63:0] io_ifu_r_bits_data,
  output        io_ifu_r_bits_last,
  output        io_lsu_ar_ready,
  input         io_lsu_ar_valid,
  input  [31:0] io_lsu_ar_bits_addr,
  input  [7:0]  io_lsu_ar_bits_len,
  output        io_lsu_r_valid,
  output [63:0] io_lsu_r_bits_data,
  output        io_lsu_aw_ready,
  input         io_lsu_aw_valid,
  input  [31:0] io_lsu_aw_bits_addr,
  output        io_lsu_w_ready,
  input         io_lsu_w_valid,
  input  [63:0] io_lsu_w_bits_data,
  input  [7:0]  io_lsu_w_bits_strb,
  input         io_lsu_w_bits_last,
  output        io_lsu_b_valid,
  input         io_out_ar_ready,
  output        io_out_ar_valid,
  output [31:0] io_out_ar_bits_addr,
  output [7:0]  io_out_ar_bits_len,
  output [2:0]  io_out_ar_bits_size,
  output [3:0]  io_out_ar_bits_id,
  output        io_out_r_ready,
  input         io_out_r_valid,
  input  [63:0] io_out_r_bits_data,
  input         io_out_r_bits_last,
  input  [3:0]  io_out_r_bits_id,
  input         io_out_aw_ready,
  output        io_out_aw_valid,
  output [31:0] io_out_aw_bits_addr,
  input         io_out_w_ready,
  output        io_out_w_valid,
  output [63:0] io_out_w_bits_data,
  output [7:0]  io_out_w_bits_strb,
  output        io_out_w_bits_last,
  input         io_out_b_valid
);
  wire [1:0] arstate = io_lsu_ar_valid ? 2'h2 : 2'h1; // @[Arbiter.scala 17:17]
  wire [1:0] rstate = io_out_r_bits_id == 4'h1 ? 2'h2 : 2'h1; // @[Arbiter.scala 18:16]
  wire [3:0] _GEN_0 = arstate == 2'h2 ? 4'h1 : 4'h0; // @[Arbiter.scala 29:33 30:25 39:25]
  wire [31:0] _GEN_1 = arstate == 2'h2 ? io_lsu_ar_bits_addr : 32'h0; // @[Arbiter.scala 29:33 31:25 40:25]
  wire [7:0] _GEN_2 = arstate == 2'h2 ? io_lsu_ar_bits_len : 8'h0; // @[Arbiter.scala 29:33 32:25 41:25]
  wire [2:0] _GEN_3 = arstate == 2'h2 ? 3'h3 : 3'h0; // @[Arbiter.scala 29:33 33:25 42:25]
  wire  _GEN_5 = arstate == 2'h2 & io_lsu_ar_valid; // @[Arbiter.scala 29:33 35:25 44:25]
  wire  _GEN_7 = arstate == 2'h2 & io_out_ar_ready; // @[Arbiter.scala 29:33 37:25 46:25]
  wire  _T_3 = rstate == 2'h2; // @[Arbiter.scala 63:21]
  wire [63:0] _GEN_18 = rstate == 2'h2 ? io_out_r_bits_data : 64'h0; // @[Arbiter.scala 63:32 71:27 85:27]
  wire  _GEN_21 = rstate == 2'h2 & io_out_r_valid; // @[Arbiter.scala 63:32 74:27 88:27]
  assign io_ifu_ar_ready = arstate == 2'h1 & io_out_ar_ready; // @[Arbiter.scala 20:26 27:25]
  assign io_ifu_r_valid = rstate == 2'h1 & io_out_r_valid; // @[Arbiter.scala 49:25 54:27]
  assign io_ifu_r_bits_data = rstate == 2'h1 ? io_out_r_bits_data : 64'h0; // @[Arbiter.scala 49:25 51:27]
  assign io_ifu_r_bits_last = rstate == 2'h1 & io_out_r_bits_last; // @[Arbiter.scala 49:25 53:27]
  assign io_lsu_ar_ready = arstate == 2'h1 ? 1'h0 : _GEN_7; // @[Arbiter.scala 20:26 28:25]
  assign io_lsu_r_valid = rstate == 2'h1 ? 1'h0 : _GEN_21; // @[Arbiter.scala 49:25 60:27]
  assign io_lsu_r_bits_data = rstate == 2'h1 ? 64'h0 : _GEN_18; // @[Arbiter.scala 49:25 57:27]
  assign io_lsu_aw_ready = io_out_aw_ready; // @[Arbiter.scala 102:23]
  assign io_lsu_w_ready = io_out_w_ready; // @[Arbiter.scala 111:23]
  assign io_lsu_b_valid = io_out_b_valid; // @[Arbiter.scala 119:23]
  assign io_out_ar_valid = arstate == 2'h1 ? io_ifu_ar_valid : _GEN_5; // @[Arbiter.scala 20:26 26:25]
  assign io_out_ar_bits_addr = arstate == 2'h1 ? io_ifu_ar_bits_addr : _GEN_1; // @[Arbiter.scala 20:26 22:25]
  assign io_out_ar_bits_len = arstate == 2'h1 ? io_ifu_ar_bits_len : _GEN_2; // @[Arbiter.scala 20:26 23:25]
  assign io_out_ar_bits_size = arstate == 2'h1 ? 3'h3 : _GEN_3; // @[Arbiter.scala 20:26 24:25]
  assign io_out_ar_bits_id = arstate == 2'h1 ? 4'h0 : _GEN_0; // @[Arbiter.scala 20:26 21:25]
  assign io_out_r_ready = rstate == 2'h1 | _T_3; // @[Arbiter.scala 49:25 62:27]
  assign io_out_aw_valid = io_lsu_aw_valid; // @[Arbiter.scala 99:23]
  assign io_out_aw_bits_addr = io_lsu_aw_bits_addr; // @[Arbiter.scala 95:23]
  assign io_out_w_valid = io_lsu_w_valid; // @[Arbiter.scala 108:23]
  assign io_out_w_bits_data = io_lsu_w_bits_data; // @[Arbiter.scala 105:23]
  assign io_out_w_bits_strb = io_lsu_w_bits_strb; // @[Arbiter.scala 106:23]
  assign io_out_w_bits_last = io_lsu_w_bits_last; // @[Arbiter.scala 107:23]
endmodule

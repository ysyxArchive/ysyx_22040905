module DeviceArbiter(
  output        io_in_ar_ready,
  input         io_in_ar_valid,
  input  [31:0] io_in_ar_bits_addr,
  input  [7:0]  io_in_ar_bits_len,
  input  [2:0]  io_in_ar_bits_size,
  input  [3:0]  io_in_ar_bits_id,
  input         io_in_r_ready,
  output        io_in_r_valid,
  output [63:0] io_in_r_bits_data,
  output        io_in_r_bits_last,
  output [3:0]  io_in_r_bits_id,
  output        io_in_aw_ready,
  input         io_in_aw_valid,
  input  [31:0] io_in_aw_bits_addr,
  output        io_in_w_ready,
  input         io_in_w_valid,
  input  [63:0] io_in_w_bits_data,
  input  [7:0]  io_in_w_bits_strb,
  input         io_in_w_bits_last,
  output        io_in_b_valid,
  input         io_out1_ar_ready,
  output        io_out1_ar_valid,
  output [31:0] io_out1_ar_bits_addr,
  output [7:0]  io_out1_ar_bits_len,
  output [2:0]  io_out1_ar_bits_size,
  output [3:0]  io_out1_ar_bits_id,
  output        io_out1_r_ready,
  input         io_out1_r_valid,
  input  [63:0] io_out1_r_bits_data,
  input         io_out1_r_bits_last,
  input  [3:0]  io_out1_r_bits_id,
  input         io_out1_aw_ready,
  output        io_out1_aw_valid,
  output [31:0] io_out1_aw_bits_addr,
  input         io_out1_w_ready,
  output        io_out1_w_valid,
  output [63:0] io_out1_w_bits_data,
  output [7:0]  io_out1_w_bits_strb,
  output        io_out1_w_bits_last,
  output        io_out1_b_ready,
  input         io_out1_b_valid,
  input         io_out2_ar_ready,
  output        io_out2_ar_valid,
  output [31:0] io_out2_ar_bits_addr,
  output [7:0]  io_out2_ar_bits_len,
  output [2:0]  io_out2_ar_bits_size,
  output [3:0]  io_out2_ar_bits_id,
  output        io_out2_r_ready,
  input         io_out2_r_valid,
  input  [63:0] io_out2_r_bits_data,
  input         io_out2_r_bits_last,
  input  [3:0]  io_out2_r_bits_id,
  input         io_out2_aw_ready,
  output        io_out2_aw_valid,
  output [31:0] io_out2_aw_bits_addr,
  output [3:0]  io_out2_aw_bits_id,
  input         io_out2_w_ready,
  output        io_out2_w_valid,
  output [63:0] io_out2_w_bits_data,
  output [7:0]  io_out2_w_bits_strb,
  output        io_out2_w_bits_last,
  output        io_out2_b_ready,
  input         io_out2_b_valid,
  input  [3:0]  io_out2_b_bits_id
);
  wire [1:0] _GEN_2 = io_in_ar_bits_addr >= 32'h20000000 & io_in_ar_bits_addr <= 32'h2000bfff ? 2'h3 : 2'h0; // @[Arbiter.scala 146:77 150:26 158:26]
  wire  _T_6 = io_in_aw_bits_addr >= 32'h20000000 & io_in_aw_bits_addr <= 32'h2000bfff; // @[Arbiter.scala 194:42]
  wire [1:0] _GEN_14 = io_in_aw_bits_addr >= 32'h20000000 & io_in_aw_bits_addr <= 32'h2000bfff ? 2'h3 : 2'h0; // @[Arbiter.scala 194:77 198:26 206:26]
  assign io_in_ar_ready = io_in_ar_bits_addr >= 32'h20000000 & io_in_ar_bits_addr <= 32'h2000bfff ? io_out2_ar_ready :
    io_out1_ar_ready; // @[Arbiter.scala 146:77 153:24 161:24]
  assign io_in_r_valid = io_out2_r_bits_id[1] ? io_out2_r_valid : io_out1_r_valid; // @[Arbiter.scala 164:29 172:26 181:26]
  assign io_in_r_bits_data = io_out2_r_bits_id[1] ? io_out2_r_bits_data : io_out1_r_bits_data; // @[Arbiter.scala 164:29 169:26 178:26]
  assign io_in_r_bits_last = io_out2_r_bits_id[1] ? io_out2_r_bits_last : io_out1_r_bits_last; // @[Arbiter.scala 164:29 171:26 180:26]
  assign io_in_r_bits_id = io_out2_r_bits_id[1] ? {{3'd0}, io_out2_r_bits_id[0]} : io_out1_r_bits_id; // @[Arbiter.scala 164:29 168:26 177:26]
  assign io_in_aw_ready = io_in_aw_bits_addr >= 32'h20000000 & io_in_aw_bits_addr <= 32'h2000bfff ? io_out2_aw_ready :
    io_out1_aw_ready; // @[Arbiter.scala 194:77 201:24 209:24]
  assign io_in_w_ready = _T_6 ? io_out2_w_ready : io_out1_w_ready; // @[Arbiter.scala 220:77 227:23 235:23]
  assign io_in_b_valid = io_out2_b_bits_id[1] ? io_out2_b_valid : io_out1_b_valid; // @[Arbiter.scala 239:29 242:24 249:24]
  assign io_out1_ar_valid = io_in_ar_bits_addr >= 32'h20000000 & io_in_ar_bits_addr <= 32'h2000bfff ? 1'h0 :
    io_in_ar_valid; // @[Arbiter.scala 146:77 148:26 156:26]
  assign io_out1_ar_bits_addr = io_in_ar_bits_addr; // @[Arbiter.scala 136:24]
  assign io_out1_ar_bits_len = io_in_ar_bits_len; // @[Arbiter.scala 137:24]
  assign io_out1_ar_bits_size = io_in_ar_bits_size; // @[Arbiter.scala 138:24]
  assign io_out1_ar_bits_id = io_in_ar_bits_addr >= 32'h20000000 & io_in_ar_bits_addr <= 32'h2000bfff ? 4'h0 :
    io_in_ar_bits_id; // @[Arbiter.scala 146:77 147:26 155:26]
  assign io_out1_r_ready = io_out2_r_bits_id[1] ? 1'h0 : io_in_r_ready; // @[Arbiter.scala 164:29 165:25 174:25]
  assign io_out1_aw_valid = io_in_aw_bits_addr >= 32'h20000000 & io_in_aw_bits_addr <= 32'h2000bfff ? 1'h0 :
    io_in_aw_valid; // @[Arbiter.scala 194:77 196:26 204:26]
  assign io_out1_aw_bits_addr = io_in_aw_bits_addr; // @[Arbiter.scala 184:24]
  assign io_out1_w_valid = _T_6 ? 1'h0 : io_in_w_valid; // @[Arbiter.scala 220:77 222:25 230:25]
  assign io_out1_w_bits_data = io_in_w_bits_data; // @[Arbiter.scala 212:23]
  assign io_out1_w_bits_strb = io_in_w_bits_strb; // @[Arbiter.scala 214:23]
  assign io_out1_w_bits_last = io_in_w_bits_last; // @[Arbiter.scala 213:24]
  assign io_out1_b_ready = io_out2_b_bits_id[1] ? 1'h0 : 1'h1; // @[Arbiter.scala 239:29 244:24 251:24]
  assign io_out2_ar_valid = io_in_ar_bits_addr >= 32'h20000000 & io_in_ar_bits_addr <= 32'h2000bfff & io_in_ar_valid; // @[Arbiter.scala 146:77 151:26 159:26]
  assign io_out2_ar_bits_addr = io_in_ar_bits_addr; // @[Arbiter.scala 141:24]
  assign io_out2_ar_bits_len = io_in_ar_bits_len; // @[Arbiter.scala 142:24]
  assign io_out2_ar_bits_size = io_in_ar_bits_size; // @[Arbiter.scala 143:24]
  assign io_out2_ar_bits_id = {{2'd0}, _GEN_2};
  assign io_out2_r_ready = io_out2_r_bits_id[1] & io_in_r_ready; // @[Arbiter.scala 164:29 166:25 175:25]
  assign io_out2_aw_valid = io_in_aw_bits_addr >= 32'h20000000 & io_in_aw_bits_addr <= 32'h2000bfff & io_in_aw_valid; // @[Arbiter.scala 194:77 199:26 207:26]
  assign io_out2_aw_bits_addr = io_in_aw_bits_addr; // @[Arbiter.scala 189:24]
  assign io_out2_aw_bits_id = {{2'd0}, _GEN_14};
  assign io_out2_w_valid = _T_6 & io_in_w_valid; // @[Arbiter.scala 220:77 225:25 233:25]
  assign io_out2_w_bits_data = io_in_w_bits_data; // @[Arbiter.scala 216:23]
  assign io_out2_w_bits_strb = io_in_w_bits_strb; // @[Arbiter.scala 218:23]
  assign io_out2_w_bits_last = io_in_w_bits_last; // @[Arbiter.scala 217:24]
  assign io_out2_b_ready = io_out2_b_bits_id[1]; // @[Arbiter.scala 239:25]
endmodule

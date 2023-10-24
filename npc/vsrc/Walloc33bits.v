module Walloc33bits(
  input  [32:0] io_src_in,
  input  [29:0] io_cin,
  output        io_cout_group_0,
  output        io_cout_group_1,
  output        io_cout_group_2,
  output        io_cout_group_3,
  output        io_cout_group_4,
  output        io_cout_group_5,
  output        io_cout_group_6,
  output        io_cout_group_7,
  output        io_cout_group_8,
  output        io_cout_group_9,
  output        io_cout_group_10,
  output        io_cout_group_11,
  output        io_cout_group_12,
  output        io_cout_group_13,
  output        io_cout_group_14,
  output        io_cout_group_15,
  output        io_cout_group_16,
  output        io_cout_group_17,
  output        io_cout_group_18,
  output        io_cout_group_19,
  output        io_cout_group_20,
  output        io_cout_group_21,
  output        io_cout_group_22,
  output        io_cout_group_23,
  output        io_cout_group_24,
  output        io_cout_group_25,
  output        io_cout_group_26,
  output        io_cout_group_27,
  output        io_cout_group_28,
  output        io_cout_group_29,
  output        io_cout,
  output        io_s
);
  wire [2:0] csa_0_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_0_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_1_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_1_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_2_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_2_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_3_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_3_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_4_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_4_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_5_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_5_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_6_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_6_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_7_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_7_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_8_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_8_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_9_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_9_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_10_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_10_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_11_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_11_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_12_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_12_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_13_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_13_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_14_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_14_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_15_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_15_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_16_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_16_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_17_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_17_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_18_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_18_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_19_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_19_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_20_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_20_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_21_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_21_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_22_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_22_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_23_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_23_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_24_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_24_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_25_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_25_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_26_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_26_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_27_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_27_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_28_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_28_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_29_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_29_io_out; // @[wallace_mul.scala 125:33]
  wire [2:0] csa_30_io_in; // @[wallace_mul.scala 125:33]
  wire [1:0] csa_30_io_out; // @[wallace_mul.scala 125:33]
  wire  first_s_10 = csa_0_io_out[0]; // @[wallace_mul.scala 132:36]
  wire  first_s_9 = csa_1_io_out[0]; // @[wallace_mul.scala 132:36]
  wire  first_s_8 = csa_2_io_out[0]; // @[wallace_mul.scala 132:36]
  wire  first_s_7 = csa_3_io_out[0]; // @[wallace_mul.scala 132:36]
  wire  first_s_6 = csa_4_io_out[0]; // @[wallace_mul.scala 132:36]
  wire  first_s_5 = csa_5_io_out[0]; // @[wallace_mul.scala 132:36]
  wire  first_s_4 = csa_6_io_out[0]; // @[wallace_mul.scala 132:36]
  wire  first_s_3 = csa_7_io_out[0]; // @[wallace_mul.scala 132:36]
  wire  first_s_2 = csa_8_io_out[0]; // @[wallace_mul.scala 132:36]
  wire  first_s_1 = csa_9_io_out[0]; // @[wallace_mul.scala 132:36]
  wire  first_s_0 = csa_10_io_out[0]; // @[wallace_mul.scala 132:36]
  wire [4:0] csa_11_io_in_lo = {first_s_4,first_s_3,first_s_2,first_s_1,first_s_0}; // @[wallace_mul.scala 137:30]
  wire [10:0] _csa_11_io_in_T = {first_s_10,first_s_9,first_s_8,first_s_7,first_s_6,first_s_5,csa_11_io_in_lo}; // @[wallace_mul.scala 137:30]
  wire  second_s_8 = csa_11_io_out[0]; // @[wallace_mul.scala 149:40]
  wire  second_s_7 = csa_12_io_out[0]; // @[wallace_mul.scala 149:40]
  wire  second_s_6 = csa_13_io_out[0]; // @[wallace_mul.scala 149:40]
  wire  second_s_5 = csa_14_io_out[0]; // @[wallace_mul.scala 149:40]
  wire  second_s_4 = csa_15_io_out[0]; // @[wallace_mul.scala 149:40]
  wire  second_s_3 = csa_16_io_out[0]; // @[wallace_mul.scala 149:40]
  wire  second_s_2 = csa_17_io_out[0]; // @[wallace_mul.scala 149:40]
  wire  second_s_1 = csa_18_io_out[0]; // @[wallace_mul.scala 149:40]
  wire  second_s_0 = csa_19_io_out[0]; // @[wallace_mul.scala 149:40]
  wire [8:0] _csa_20_io_in_T = {second_s_8,second_s_7,second_s_6,second_s_5,second_s_4,second_s_3,second_s_2,second_s_1,
    second_s_0}; // @[wallace_mul.scala 156:30]
  wire  third_s_6 = csa_20_io_out[0]; // @[wallace_mul.scala 166:39]
  wire  third_s_5 = csa_21_io_out[0]; // @[wallace_mul.scala 166:39]
  wire  third_s_4 = csa_22_io_out[0]; // @[wallace_mul.scala 166:39]
  wire  third_s_3 = csa_23_io_out[0]; // @[wallace_mul.scala 166:39]
  wire  third_s_2 = csa_24_io_out[0]; // @[wallace_mul.scala 166:39]
  wire  third_s_1 = csa_25_io_out[0]; // @[wallace_mul.scala 166:39]
  wire  third_s_0 = csa_26_io_out[0]; // @[wallace_mul.scala 166:39]
  wire [6:0] _csa_27_io_in_T = {third_s_6,third_s_5,third_s_4,third_s_3,third_s_2,third_s_1,third_s_0}; // @[wallace_mul.scala 173:28]
  wire  fourth_s_2 = csa_27_io_out[0]; // @[wallace_mul.scala 179:40]
  wire  fourth_s_1 = csa_28_io_out[0]; // @[wallace_mul.scala 179:40]
  wire  fourth_s_0 = csa_29_io_out[0]; // @[wallace_mul.scala 179:40]
  wire [1:0] csa_30_io_in_hi = {fourth_s_2,fourth_s_1}; // @[wallace_mul.scala 183:29]
  CSA csa_0 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_0_io_in),
    .io_out(csa_0_io_out)
  );
  CSA csa_1 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_1_io_in),
    .io_out(csa_1_io_out)
  );
  CSA csa_2 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_2_io_in),
    .io_out(csa_2_io_out)
  );
  CSA csa_3 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_3_io_in),
    .io_out(csa_3_io_out)
  );
  CSA csa_4 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_4_io_in),
    .io_out(csa_4_io_out)
  );
  CSA csa_5 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_5_io_in),
    .io_out(csa_5_io_out)
  );
  CSA csa_6 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_6_io_in),
    .io_out(csa_6_io_out)
  );
  CSA csa_7 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_7_io_in),
    .io_out(csa_7_io_out)
  );
  CSA csa_8 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_8_io_in),
    .io_out(csa_8_io_out)
  );
  CSA csa_9 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_9_io_in),
    .io_out(csa_9_io_out)
  );
  CSA csa_10 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_10_io_in),
    .io_out(csa_10_io_out)
  );
  CSA csa_11 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_11_io_in),
    .io_out(csa_11_io_out)
  );
  CSA csa_12 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_12_io_in),
    .io_out(csa_12_io_out)
  );
  CSA csa_13 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_13_io_in),
    .io_out(csa_13_io_out)
  );
  CSA csa_14 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_14_io_in),
    .io_out(csa_14_io_out)
  );
  CSA csa_15 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_15_io_in),
    .io_out(csa_15_io_out)
  );
  CSA csa_16 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_16_io_in),
    .io_out(csa_16_io_out)
  );
  CSA csa_17 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_17_io_in),
    .io_out(csa_17_io_out)
  );
  CSA csa_18 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_18_io_in),
    .io_out(csa_18_io_out)
  );
  CSA csa_19 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_19_io_in),
    .io_out(csa_19_io_out)
  );
  CSA csa_20 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_20_io_in),
    .io_out(csa_20_io_out)
  );
  CSA csa_21 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_21_io_in),
    .io_out(csa_21_io_out)
  );
  CSA csa_22 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_22_io_in),
    .io_out(csa_22_io_out)
  );
  CSA csa_23 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_23_io_in),
    .io_out(csa_23_io_out)
  );
  CSA csa_24 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_24_io_in),
    .io_out(csa_24_io_out)
  );
  CSA csa_25 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_25_io_in),
    .io_out(csa_25_io_out)
  );
  CSA csa_26 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_26_io_in),
    .io_out(csa_26_io_out)
  );
  CSA csa_27 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_27_io_in),
    .io_out(csa_27_io_out)
  );
  CSA csa_28 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_28_io_in),
    .io_out(csa_28_io_out)
  );
  CSA csa_29 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_29_io_in),
    .io_out(csa_29_io_out)
  );
  CSA csa_30 ( // @[wallace_mul.scala 125:33]
    .io_in(csa_30_io_in),
    .io_out(csa_30_io_out)
  );
  assign io_cout_group_0 = csa_10_io_out[1]; // @[wallace_mul.scala 131:28]
  assign io_cout_group_1 = csa_9_io_out[1]; // @[wallace_mul.scala 131:28]
  assign io_cout_group_2 = csa_8_io_out[1]; // @[wallace_mul.scala 131:28]
  assign io_cout_group_3 = csa_7_io_out[1]; // @[wallace_mul.scala 131:28]
  assign io_cout_group_4 = csa_6_io_out[1]; // @[wallace_mul.scala 131:28]
  assign io_cout_group_5 = csa_5_io_out[1]; // @[wallace_mul.scala 131:28]
  assign io_cout_group_6 = csa_4_io_out[1]; // @[wallace_mul.scala 131:28]
  assign io_cout_group_7 = csa_3_io_out[1]; // @[wallace_mul.scala 131:28]
  assign io_cout_group_8 = csa_2_io_out[1]; // @[wallace_mul.scala 131:28]
  assign io_cout_group_9 = csa_1_io_out[1]; // @[wallace_mul.scala 131:28]
  assign io_cout_group_10 = csa_0_io_out[1]; // @[wallace_mul.scala 131:28]
  assign io_cout_group_11 = csa_19_io_out[1]; // @[wallace_mul.scala 148:32]
  assign io_cout_group_12 = csa_18_io_out[1]; // @[wallace_mul.scala 148:32]
  assign io_cout_group_13 = csa_17_io_out[1]; // @[wallace_mul.scala 148:32]
  assign io_cout_group_14 = csa_16_io_out[1]; // @[wallace_mul.scala 148:32]
  assign io_cout_group_15 = csa_15_io_out[1]; // @[wallace_mul.scala 148:32]
  assign io_cout_group_16 = csa_14_io_out[1]; // @[wallace_mul.scala 148:32]
  assign io_cout_group_17 = csa_13_io_out[1]; // @[wallace_mul.scala 148:32]
  assign io_cout_group_18 = csa_12_io_out[1]; // @[wallace_mul.scala 148:32]
  assign io_cout_group_19 = csa_11_io_out[1]; // @[wallace_mul.scala 148:32]
  assign io_cout_group_20 = csa_26_io_out[1]; // @[wallace_mul.scala 165:32]
  assign io_cout_group_21 = csa_25_io_out[1]; // @[wallace_mul.scala 165:32]
  assign io_cout_group_22 = csa_24_io_out[1]; // @[wallace_mul.scala 165:32]
  assign io_cout_group_23 = csa_23_io_out[1]; // @[wallace_mul.scala 165:32]
  assign io_cout_group_24 = csa_22_io_out[1]; // @[wallace_mul.scala 165:32]
  assign io_cout_group_25 = csa_21_io_out[1]; // @[wallace_mul.scala 165:32]
  assign io_cout_group_26 = csa_20_io_out[1]; // @[wallace_mul.scala 165:32]
  assign io_cout_group_27 = csa_29_io_out[1]; // @[wallace_mul.scala 178:32]
  assign io_cout_group_28 = csa_28_io_out[1]; // @[wallace_mul.scala 178:32]
  assign io_cout_group_29 = csa_27_io_out[1]; // @[wallace_mul.scala 178:32]
  assign io_cout = csa_30_io_out[1]; // @[wallace_mul.scala 184:26]
  assign io_s = csa_30_io_out[0]; // @[wallace_mul.scala 185:25]
  assign csa_0_io_in = io_src_in[32:30]; // @[wallace_mul.scala 130:30]
  assign csa_1_io_in = io_src_in[29:27]; // @[wallace_mul.scala 130:30]
  assign csa_2_io_in = io_src_in[26:24]; // @[wallace_mul.scala 130:30]
  assign csa_3_io_in = io_src_in[23:21]; // @[wallace_mul.scala 130:30]
  assign csa_4_io_in = io_src_in[20:18]; // @[wallace_mul.scala 130:30]
  assign csa_5_io_in = io_src_in[17:15]; // @[wallace_mul.scala 130:30]
  assign csa_6_io_in = io_src_in[14:12]; // @[wallace_mul.scala 130:30]
  assign csa_7_io_in = io_src_in[11:9]; // @[wallace_mul.scala 130:30]
  assign csa_8_io_in = io_src_in[8:6]; // @[wallace_mul.scala 130:30]
  assign csa_9_io_in = io_src_in[5:3]; // @[wallace_mul.scala 130:30]
  assign csa_10_io_in = io_src_in[2:0]; // @[wallace_mul.scala 130:30]
  assign csa_11_io_in = _csa_11_io_in_T[10:8]; // @[wallace_mul.scala 137:36]
  assign csa_12_io_in = _csa_11_io_in_T[7:5]; // @[wallace_mul.scala 138:36]
  assign csa_13_io_in = _csa_11_io_in_T[4:2]; // @[wallace_mul.scala 139:36]
  assign csa_14_io_in = {_csa_11_io_in_T[1:0],io_cin[15]}; // @[Cat.scala 33:92]
  assign csa_15_io_in = io_cin[14:12]; // @[wallace_mul.scala 141:25]
  assign csa_16_io_in = io_cin[11:9]; // @[wallace_mul.scala 142:25]
  assign csa_17_io_in = io_cin[8:6]; // @[wallace_mul.scala 143:25]
  assign csa_18_io_in = io_cin[5:3]; // @[wallace_mul.scala 144:25]
  assign csa_19_io_in = io_cin[2:0]; // @[wallace_mul.scala 145:25]
  assign csa_20_io_in = _csa_20_io_in_T[8:6]; // @[wallace_mul.scala 156:36]
  assign csa_21_io_in = _csa_20_io_in_T[5:3]; // @[wallace_mul.scala 157:36]
  assign csa_22_io_in = _csa_20_io_in_T[2:0]; // @[wallace_mul.scala 158:36]
  assign csa_23_io_in = io_cin[27:25]; // @[wallace_mul.scala 159:24]
  assign csa_24_io_in = io_cin[24:22]; // @[wallace_mul.scala 160:24]
  assign csa_25_io_in = io_cin[21:19]; // @[wallace_mul.scala 161:24]
  assign csa_26_io_in = io_cin[18:16]; // @[wallace_mul.scala 162:24]
  assign csa_27_io_in = _csa_27_io_in_T[6:4]; // @[wallace_mul.scala 173:34]
  assign csa_28_io_in = _csa_27_io_in_T[3:1]; // @[wallace_mul.scala 174:34]
  assign csa_29_io_in = {_csa_27_io_in_T[0],io_cin[29:28]}; // @[Cat.scala 33:92]
  assign csa_30_io_in = {csa_30_io_in_hi,fourth_s_0}; // @[wallace_mul.scala 183:29]
endmodule

module Cache(
  input         clock,
  input         reset,
  output        io_lsu_ar_ready,
  input         io_lsu_ar_valid,
  input  [31:0] io_lsu_ar_bits_addr,
  input         io_lsu_r_ready,
  output        io_lsu_r_valid,
  output [63:0] io_lsu_r_bits_data,
  output [1:0]  io_lsu_r_bits_resp,
  output        io_lsu_aw_ready,
  input         io_lsu_aw_valid,
  input  [31:0] io_lsu_aw_bits_addr,
  output        io_lsu_w_ready,
  input         io_lsu_w_valid,
  input  [63:0] io_lsu_w_bits_data,
  input  [7:0]  io_lsu_w_bits_strb,
  input         io_lsu_b_ready,
  output        io_lsu_b_valid,
  output [1:0]  io_lsu_b_bits_resp,
  input         io_mem_ar_ready,
  output        io_mem_ar_valid,
  output [31:0] io_mem_ar_bits_addr,
  output [7:0]  io_mem_ar_bits_len,
  output [2:0]  io_mem_ar_bits_size,
  output [1:0]  io_mem_ar_bits_burst,
  output        io_mem_r_ready,
  input         io_mem_r_valid,
  input  [63:0] io_mem_r_bits_data,
  input  [1:0]  io_mem_r_bits_resp,
  input         io_mem_r_bits_last,
  input         io_mem_aw_ready,
  output        io_mem_aw_valid,
  output [31:0] io_mem_aw_bits_addr,
  output [7:0]  io_mem_aw_bits_len,
  output [2:0]  io_mem_aw_bits_size,
  output [1:0]  io_mem_aw_bits_burst,
  input         io_mem_w_ready,
  output        io_mem_w_valid,
  output [63:0] io_mem_w_bits_data,
  output [7:0]  io_mem_w_bits_strb,
  output        io_mem_w_bits_last,
  output        io_mem_b_ready,
  input         io_mem_b_valid,
  input  [1:0]  io_mem_b_bits_resp
);
`ifdef RANDOMIZE_MEM_INIT
  reg [127:0] _RAND_0;
  reg [127:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [127:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
  reg [31:0] _RAND_24;
`endif // RANDOMIZE_REG_INIT
  reg [127:0] cache_data_0 [0:15]; // @[cache.scala 23:31]
  wire [127:0] cache_data_0_io_lsu_r_bits_data_MPORT_data; // @[cache.scala 23:31]
  wire [3:0] cache_data_0_io_lsu_r_bits_data_MPORT_addr; // @[cache.scala 23:31]
  wire [127:0] cache_data_0_io_mem_w_bits_data_MPORT_data; // @[cache.scala 23:31]
  wire [3:0] cache_data_0_io_mem_w_bits_data_MPORT_addr; // @[cache.scala 23:31]
  wire [127:0] cache_data_0_io_mem_w_bits_data_MPORT_1_data; // @[cache.scala 23:31]
  wire [3:0] cache_data_0_io_mem_w_bits_data_MPORT_1_addr; // @[cache.scala 23:31]
  wire [127:0] cache_data_0_MPORT_1_data; // @[cache.scala 23:31]
  wire [3:0] cache_data_0_MPORT_1_addr; // @[cache.scala 23:31]
  wire [127:0] cache_data_0_MPORT_data; // @[cache.scala 23:31]
  wire [3:0] cache_data_0_MPORT_addr; // @[cache.scala 23:31]
  wire  cache_data_0_MPORT_mask; // @[cache.scala 23:31]
  wire  cache_data_0_MPORT_en; // @[cache.scala 23:31]
  reg [127:0] cache_data_1 [0:15]; // @[cache.scala 23:31]
  wire [127:0] cache_data_1_io_lsu_r_bits_data_MPORT_data; // @[cache.scala 23:31]
  wire [3:0] cache_data_1_io_lsu_r_bits_data_MPORT_addr; // @[cache.scala 23:31]
  wire [127:0] cache_data_1_io_mem_w_bits_data_MPORT_data; // @[cache.scala 23:31]
  wire [3:0] cache_data_1_io_mem_w_bits_data_MPORT_addr; // @[cache.scala 23:31]
  wire [127:0] cache_data_1_io_mem_w_bits_data_MPORT_1_data; // @[cache.scala 23:31]
  wire [3:0] cache_data_1_io_mem_w_bits_data_MPORT_1_addr; // @[cache.scala 23:31]
  wire [127:0] cache_data_1_MPORT_1_data; // @[cache.scala 23:31]
  wire [3:0] cache_data_1_MPORT_1_addr; // @[cache.scala 23:31]
  wire [127:0] cache_data_1_MPORT_data; // @[cache.scala 23:31]
  wire [3:0] cache_data_1_MPORT_addr; // @[cache.scala 23:31]
  wire  cache_data_1_MPORT_mask; // @[cache.scala 23:31]
  wire  cache_data_1_MPORT_en; // @[cache.scala 23:31]
  reg [20:0] cache_tag_1 [0:15]; // @[cache.scala 24:31]
  wire [20:0] cache_tag_1_x_MPORT_data; // @[cache.scala 24:31]
  wire [3:0] cache_tag_1_x_MPORT_addr; // @[cache.scala 24:31]
  wire [20:0] cache_tag_1_x_MPORT_1_data; // @[cache.scala 24:31]
  wire [3:0] cache_tag_1_x_MPORT_1_addr; // @[cache.scala 24:31]
  wire [20:0] cache_tag_1_io_mem_aw_bits_addr_MPORT_data; // @[cache.scala 24:31]
  wire [3:0] cache_tag_1_io_mem_aw_bits_addr_MPORT_addr; // @[cache.scala 24:31]
  wire [20:0] cache_tag_1_MPORT_3_data; // @[cache.scala 24:31]
  wire [3:0] cache_tag_1_MPORT_3_addr; // @[cache.scala 24:31]
  wire [20:0] cache_tag_1_MPORT_2_data; // @[cache.scala 24:31]
  wire [3:0] cache_tag_1_MPORT_2_addr; // @[cache.scala 24:31]
  wire  cache_tag_1_MPORT_2_mask; // @[cache.scala 24:31]
  wire  cache_tag_1_MPORT_2_en; // @[cache.scala 24:31]
  reg [3:0] cache_tag_1_MPORT_3_addr_pipe_0;
  reg  valid_0_1; // @[cache.scala 25:22]
  reg  valid_1_1; // @[cache.scala 25:22]
  reg  valid_2_1; // @[cache.scala 25:22]
  reg  valid_3_1; // @[cache.scala 25:22]
  reg  valid_4_1; // @[cache.scala 25:22]
  reg  valid_5_1; // @[cache.scala 25:22]
  reg  valid_6_1; // @[cache.scala 25:22]
  reg  valid_7_1; // @[cache.scala 25:22]
  reg  valid_8_1; // @[cache.scala 25:22]
  reg  valid_9_1; // @[cache.scala 25:22]
  reg  valid_10_1; // @[cache.scala 25:22]
  reg  valid_11_1; // @[cache.scala 25:22]
  reg  valid_12_1; // @[cache.scala 25:22]
  reg  valid_13_1; // @[cache.scala 25:22]
  reg  valid_14_1; // @[cache.scala 25:22]
  reg  valid_15_1; // @[cache.scala 25:22]
  reg [127:0] buf_; // @[cache.scala 28:18]
  reg [31:0] addr; // @[cache.scala 30:21]
  wire [6:0] offset = addr[6:0]; // @[cache.scala 31:20]
  wire [3:0] idx = addr[10:7]; // @[cache.scala 32:17]
  wire [20:0] tag = addr[31:11]; // @[cache.scala 33:17]
  wire  _GEN_17 = 4'h1 == idx ? valid_1_1 : valid_0_1; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_18 = 4'h2 == idx ? valid_2_1 : _GEN_17; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_19 = 4'h3 == idx ? valid_3_1 : _GEN_18; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_20 = 4'h4 == idx ? valid_4_1 : _GEN_19; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_21 = 4'h5 == idx ? valid_5_1 : _GEN_20; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_22 = 4'h6 == idx ? valid_6_1 : _GEN_21; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_23 = 4'h7 == idx ? valid_7_1 : _GEN_22; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_24 = 4'h8 == idx ? valid_8_1 : _GEN_23; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_25 = 4'h9 == idx ? valid_9_1 : _GEN_24; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_26 = 4'ha == idx ? valid_10_1 : _GEN_25; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_27 = 4'hb == idx ? valid_11_1 : _GEN_26; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_28 = 4'hc == idx ? valid_12_1 : _GEN_27; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_29 = 4'hd == idx ? valid_13_1 : _GEN_28; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_30 = 4'he == idx ? valid_14_1 : _GEN_29; // @[cache.scala 36:91 cache.scala 36:91]
  wire  _GEN_31 = 4'hf == idx ? valid_15_1 : _GEN_30; // @[cache.scala 36:91 cache.scala 36:91]
  wire  x_1 = cache_tag_1_x_MPORT_1_data == tag & _GEN_31; // @[cache.scala 36:74]
  wire [7:0] hit_way = x_1 ? 8'h1 : 8'hff; // @[Mux.scala 98:16]
  reg [3:0] state; // @[cache.scala 44:22]
  reg [3:0] state_r; // @[cache.scala 45:24]
  reg [3:0] state_w; // @[cache.scala 46:24]
  wire  _state_T = io_lsu_ar_ready & io_lsu_ar_valid; // @[Decoupled.scala 40:37]
  wire [3:0] _state_T_1 = _state_T ? 4'h1 : 4'h0; // @[cache.scala 49:20]
  wire [3:0] _state_T_3 = hit_way == 8'hff ? 4'h3 : 4'h2; // @[cache.scala 50:20]
  wire [3:0] _state_T_13 = 4'h0 == state ? _state_T_1 : 4'h0; // @[Mux.scala 80:57]
  wire [3:0] _state_T_15 = 4'h1 == state ? _state_T_3 : _state_T_13; // @[Mux.scala 80:57]
  wire [127:0] _GEN_48 = cache_data_0_io_lsu_r_bits_data_MPORT_data; // @[cache.scala 57:96 cache.scala 57:96]
  wire [127:0] _GEN_49 = hit_way[0] ? cache_data_1_io_lsu_r_bits_data_MPORT_data : _GEN_48; // @[cache.scala 57:96 cache.scala 57:96]
  wire [127:0] _io_lsu_r_bits_data_T_4 = _GEN_49 >> offset; // @[cache.scala 57:96]
  wire  _io_lsu_r_bits_data_T_6 = state == 4'h4; // @[cache.scala 58:33]
  wire [127:0] _io_lsu_r_bits_data_T_7 = buf_ >> offset; // @[cache.scala 58:51]
  wire [63:0] _io_lsu_r_bits_data_T_9 = state == 4'h4 ? _io_lsu_r_bits_data_T_7[63:0] : 64'h0; // @[cache.scala 58:26]
  wire  _state_r_T = state == 4'h3; // @[cache.scala 71:32]
  wire  _state_r_T_1 = io_mem_ar_ready & io_mem_ar_valid; // @[Decoupled.scala 40:37]
  wire [3:0] _state_r_T_3 = state == 4'h3 & _state_r_T_1 ? 4'h5 : 4'h0; // @[cache.scala 71:25]
  wire  _state_r_T_4 = io_mem_r_ready & io_mem_r_valid; // @[Decoupled.scala 40:37]
  wire [3:0] _state_r_T_5 = _state_r_T_4 ? 4'h6 : 4'h5; // @[cache.scala 72:25]
  wire [3:0] _state_r_T_11 = 4'h0 == state_r ? _state_r_T_3 : 4'h0; // @[Mux.scala 80:57]
  wire  _state_w_T_1 = io_mem_aw_ready & io_mem_aw_valid; // @[Decoupled.scala 40:37]
  wire [3:0] _state_w_T_3 = _state_r_T & _state_w_T_1 ? 4'h5 : 4'h0; // @[cache.scala 77:25]
  wire  _state_w_T_4 = io_mem_w_ready & io_mem_w_valid; // @[Decoupled.scala 40:37]
  wire [3:0] _state_w_T_5 = _state_w_T_4 ? 4'h6 : 4'h5; // @[cache.scala 78:25]
  wire [3:0] _state_w_T_7 = _state_w_T_4 ? 4'h7 : 4'h6; // @[cache.scala 79:25]
  wire  _state_w_T_8 = io_mem_b_ready & io_mem_b_valid; // @[Decoupled.scala 40:37]
  wire [3:0] _state_w_T_13 = 4'h0 == state_w ? _state_w_T_3 : 4'h0; // @[Mux.scala 80:57]
  wire [3:0] _state_w_T_15 = 4'h5 == state_w ? _state_w_T_5 : _state_w_T_13; // @[Mux.scala 80:57]
  wire [24:0] _io_mem_aw_bits_addr_T = {cache_tag_1_io_mem_aw_bits_addr_MPORT_data, 4'h0}; // @[cache.scala 83:51]
  wire [24:0] _GEN_66 = {{21'd0}, idx}; // @[cache.scala 83:63]
  wire [24:0] _io_mem_aw_bits_addr_T_1 = _io_mem_aw_bits_addr_T | _GEN_66; // @[cache.scala 83:63]
  wire  _io_mem_w_bits_data_T = state_w == 4'h7; // @[cache.scala 88:36]
  wire [63:0] buf_hi = buf_[127:64]; // @[cache.scala 101:39]
  wire [127:0] _buf_T_1 = {buf_hi,io_mem_r_bits_data}; // @[Cat.scala 30:58]
  wire [63:0] buf_lo = buf_[63:0]; // @[cache.scala 102:58]
  wire [127:0] _buf_T_3 = {io_mem_r_bits_data,buf_lo}; // @[Cat.scala 30:58]
  assign cache_data_0_io_lsu_r_bits_data_MPORT_addr = 4'h0;
  assign cache_data_0_io_lsu_r_bits_data_MPORT_data = cache_data_0[cache_data_0_io_lsu_r_bits_data_MPORT_addr]; // @[cache.scala 23:31]
  assign cache_data_0_io_mem_w_bits_data_MPORT_addr = 4'h0;
  assign cache_data_0_io_mem_w_bits_data_MPORT_data = cache_data_0[cache_data_0_io_mem_w_bits_data_MPORT_addr]; // @[cache.scala 23:31]
  assign cache_data_0_io_mem_w_bits_data_MPORT_1_addr = 4'h0;
  assign cache_data_0_io_mem_w_bits_data_MPORT_1_data = cache_data_0[cache_data_0_io_mem_w_bits_data_MPORT_1_addr]; // @[cache.scala 23:31]
  assign cache_data_0_MPORT_1_addr = 4'h0;
  assign cache_data_0_MPORT_1_data = cache_data_0[cache_data_0_MPORT_1_addr]; // @[cache.scala 23:31]
  assign cache_data_0_MPORT_data = 128'h0;
  assign cache_data_0_MPORT_addr = addr[10:7];
  assign cache_data_0_MPORT_mask = 1'h0;
  assign cache_data_0_MPORT_en = 1'h1;
  assign cache_data_1_io_lsu_r_bits_data_MPORT_addr = 4'h0;
  assign cache_data_1_io_lsu_r_bits_data_MPORT_data = cache_data_1[cache_data_1_io_lsu_r_bits_data_MPORT_addr]; // @[cache.scala 23:31]
  assign cache_data_1_io_mem_w_bits_data_MPORT_addr = 4'h0;
  assign cache_data_1_io_mem_w_bits_data_MPORT_data = cache_data_1[cache_data_1_io_mem_w_bits_data_MPORT_addr]; // @[cache.scala 23:31]
  assign cache_data_1_io_mem_w_bits_data_MPORT_1_addr = 4'h0;
  assign cache_data_1_io_mem_w_bits_data_MPORT_1_data = cache_data_1[cache_data_1_io_mem_w_bits_data_MPORT_1_addr]; // @[cache.scala 23:31]
  assign cache_data_1_MPORT_1_addr = 4'h0;
  assign cache_data_1_MPORT_1_data = cache_data_1[cache_data_1_MPORT_1_addr]; // @[cache.scala 23:31]
  assign cache_data_1_MPORT_data = _io_lsu_r_bits_data_T_6 ? buf_ : cache_data_1_MPORT_1_data;
  assign cache_data_1_MPORT_addr = addr[10:7];
  assign cache_data_1_MPORT_mask = 1'h1;
  assign cache_data_1_MPORT_en = 1'h1;
  assign cache_tag_1_x_MPORT_addr = 4'h0;
  assign cache_tag_1_x_MPORT_data = cache_tag_1[cache_tag_1_x_MPORT_addr]; // @[cache.scala 24:31]
  assign cache_tag_1_x_MPORT_1_addr = 4'h0;
  assign cache_tag_1_x_MPORT_1_data = cache_tag_1[cache_tag_1_x_MPORT_1_addr]; // @[cache.scala 24:31]
  assign cache_tag_1_io_mem_aw_bits_addr_MPORT_addr = 4'h0;
  assign cache_tag_1_io_mem_aw_bits_addr_MPORT_data = cache_tag_1[cache_tag_1_io_mem_aw_bits_addr_MPORT_addr]; // @[cache.scala 24:31]
  assign cache_tag_1_MPORT_3_addr = cache_tag_1_MPORT_3_addr_pipe_0;
  assign cache_tag_1_MPORT_3_data = cache_tag_1[cache_tag_1_MPORT_3_addr]; // @[cache.scala 24:31]
  assign cache_tag_1_MPORT_2_data = _io_lsu_r_bits_data_T_6 ? tag : cache_tag_1_MPORT_3_data;
  assign cache_tag_1_MPORT_2_addr = addr[10:7];
  assign cache_tag_1_MPORT_2_mask = 1'h1;
  assign cache_tag_1_MPORT_2_en = 1'h1;
  assign io_lsu_ar_ready = state == 4'h0; // @[cache.scala 60:28]
  assign io_lsu_r_valid = state == 4'h2; // @[cache.scala 61:27]
  assign io_lsu_r_bits_data = _state_T & hit_way != 8'hff ? _io_lsu_r_bits_data_T_4[63:0] : _io_lsu_r_bits_data_T_9; // @[cache.scala 57:26]
  assign io_lsu_r_bits_resp = 2'h0; // @[cache.scala 62:21]
  assign io_lsu_aw_ready = 1'h0; // @[cache.scala 65:18]
  assign io_lsu_w_ready = 1'h0; // @[cache.scala 66:17]
  assign io_lsu_b_valid = 1'h0; // @[cache.scala 64:17]
  assign io_lsu_b_bits_resp = 2'h0; // @[cache.scala 63:21]
  assign io_mem_ar_valid = state_r == 4'h0; // @[cache.scala 95:29]
  assign io_mem_ar_bits_addr = addr; // @[cache.scala 94:22]
  assign io_mem_ar_bits_len = 8'h1; // @[cache.scala 96:21]
  assign io_mem_ar_bits_size = 3'h6; // @[cache.scala 97:22]
  assign io_mem_ar_bits_burst = 2'h2; // @[cache.scala 98:23]
  assign io_mem_r_ready = 1'h1; // @[cache.scala 99:17]
  assign io_mem_aw_valid = 1'h0; // @[cache.scala 86:40]
  assign io_mem_aw_bits_addr = {_io_mem_aw_bits_addr_T_1, 7'h0}; // @[cache.scala 83:70]
  assign io_mem_aw_bits_len = 8'h1; // @[cache.scala 84:21]
  assign io_mem_aw_bits_size = 3'h6; // @[cache.scala 85:22]
  assign io_mem_aw_bits_burst = 2'h0; // @[cache.scala 87:23]
  assign io_mem_w_valid = state_w == 4'h6 | _io_mem_w_bits_data_T; // @[cache.scala 91:39]
  assign io_mem_w_bits_data = state_w == 4'h7 ? cache_data_1_io_mem_w_bits_data_MPORT_data[127:64] :
    cache_data_1_io_mem_w_bits_data_MPORT_1_data[63:0]; // @[cache.scala 88:27]
  assign io_mem_w_bits_strb = 8'h1; // @[cache.scala 89:24]
  assign io_mem_w_bits_last = state_w == 4'h7; // @[cache.scala 90:32]
  assign io_mem_b_ready = 1'h1; // @[cache.scala 92:17]
  always @(posedge clock) begin
    if(cache_data_0_MPORT_en & cache_data_0_MPORT_mask) begin
      cache_data_0[cache_data_0_MPORT_addr] <= cache_data_0_MPORT_data; // @[cache.scala 23:31]
    end
    if(cache_data_1_MPORT_en & cache_data_1_MPORT_mask) begin
      cache_data_1[cache_data_1_MPORT_addr] <= cache_data_1_MPORT_data; // @[cache.scala 23:31]
    end
    if(cache_tag_1_MPORT_2_en & cache_tag_1_MPORT_2_mask) begin
      cache_tag_1[cache_tag_1_MPORT_2_addr] <= cache_tag_1_MPORT_2_data; // @[cache.scala 24:31]
    end
    cache_tag_1_MPORT_3_addr_pipe_0 <= addr[10:7];
    if (reset) begin // @[cache.scala 25:22]
      valid_0_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'h0 == idx) begin // @[cache.scala 107:20]
      valid_0_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_1_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'h1 == idx) begin // @[cache.scala 107:20]
      valid_1_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_2_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'h2 == idx) begin // @[cache.scala 107:20]
      valid_2_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_3_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'h3 == idx) begin // @[cache.scala 107:20]
      valid_3_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_4_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'h4 == idx) begin // @[cache.scala 107:20]
      valid_4_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_5_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'h5 == idx) begin // @[cache.scala 107:20]
      valid_5_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_6_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'h6 == idx) begin // @[cache.scala 107:20]
      valid_6_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_7_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'h7 == idx) begin // @[cache.scala 107:20]
      valid_7_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_8_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'h8 == idx) begin // @[cache.scala 107:20]
      valid_8_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_9_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'h9 == idx) begin // @[cache.scala 107:20]
      valid_9_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_10_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'ha == idx) begin // @[cache.scala 107:20]
      valid_10_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_11_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'hb == idx) begin // @[cache.scala 107:20]
      valid_11_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_12_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'hc == idx) begin // @[cache.scala 107:20]
      valid_12_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_13_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'hd == idx) begin // @[cache.scala 107:20]
      valid_13_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_14_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'he == idx) begin // @[cache.scala 107:20]
      valid_14_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 25:22]
      valid_15_1 <= 1'h0; // @[cache.scala 25:22]
    end else if (4'hf == idx) begin // @[cache.scala 107:20]
      valid_15_1 <= _io_lsu_r_bits_data_T_6 | _GEN_31; // @[cache.scala 107:20]
    end
    if (reset) begin // @[cache.scala 28:18]
      buf_ <= 128'h0; // @[cache.scala 28:18]
    end else if (state_r == 4'h6) begin // @[cache.scala 101:12]
      buf_ <= _buf_T_1;
    end else if (state_r == 4'h7) begin // @[cache.scala 102:12]
      buf_ <= _buf_T_3;
    end
    if (reset) begin // @[cache.scala 30:21]
      addr <= 32'h0; // @[cache.scala 30:21]
    end else if (_state_T) begin // @[cache.scala 55:13]
      addr <= io_lsu_ar_bits_addr;
    end
    if (reset) begin // @[cache.scala 44:22]
      state <= 4'h0; // @[cache.scala 44:22]
    end else if (4'h4 == state) begin // @[Mux.scala 80:57]
      state <= 4'h0;
    end else if (4'h3 == state) begin // @[Mux.scala 80:57]
      if (state_r == 4'h8) begin // @[cache.scala 52:20]
        state <= 4'h4;
      end else begin
        state <= 4'h3;
      end
    end else if (4'h2 == state) begin // @[Mux.scala 80:57]
      state <= 4'h0;
    end else begin
      state <= _state_T_15;
    end
    if (reset) begin // @[cache.scala 45:24]
      state_r <= 4'h0; // @[cache.scala 45:24]
    end else if (4'h8 == state_r) begin // @[Mux.scala 80:57]
      if (state != 4'h3) begin // @[cache.scala 74:25]
        state_r <= 4'h0;
      end else begin
        state_r <= 4'h8;
      end
    end else if (4'h6 == state_r) begin // @[Mux.scala 80:57]
      if (_state_r_T_4) begin // @[cache.scala 73:25]
        state_r <= 4'h8;
      end else begin
        state_r <= 4'h6;
      end
    end else if (4'h5 == state_r) begin // @[Mux.scala 80:57]
      state_r <= _state_r_T_5;
    end else begin
      state_r <= _state_r_T_11;
    end
    if (reset) begin // @[cache.scala 46:24]
      state_w <= 4'h0; // @[cache.scala 46:24]
    end else if (4'h8 == state_w) begin // @[Mux.scala 80:57]
      if (state != 4'h3) begin // @[cache.scala 74:25]
        state_w <= 4'h0;
      end else begin
        state_w <= 4'h8;
      end
    end else if (4'h7 == state_w) begin // @[Mux.scala 80:57]
      if (_state_w_T_8) begin // @[cache.scala 80:25]
        state_w <= 4'h8;
      end else begin
        state_w <= 4'h7;
      end
    end else if (4'h6 == state_w) begin // @[Mux.scala 80:57]
      state_w <= _state_w_T_7;
    end else begin
      state_w <= _state_w_T_15;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {4{`RANDOM}};
  for (initvar = 0; initvar < 16; initvar = initvar+1)
    cache_data_0[initvar] = _RAND_0[127:0];
  _RAND_1 = {4{`RANDOM}};
  for (initvar = 0; initvar < 16; initvar = initvar+1)
    cache_data_1[initvar] = _RAND_1[127:0];
  _RAND_2 = {1{`RANDOM}};
  for (initvar = 0; initvar < 16; initvar = initvar+1)
    cache_tag_1[initvar] = _RAND_2[20:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  cache_tag_1_MPORT_3_addr_pipe_0 = _RAND_3[3:0];
  _RAND_4 = {1{`RANDOM}};
  valid_0_1 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  valid_1_1 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  valid_2_1 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  valid_3_1 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  valid_4_1 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  valid_5_1 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  valid_6_1 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  valid_7_1 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  valid_8_1 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  valid_9_1 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  valid_10_1 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  valid_11_1 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  valid_12_1 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  valid_13_1 = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  valid_14_1 = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  valid_15_1 = _RAND_19[0:0];
  _RAND_20 = {4{`RANDOM}};
  buf_ = _RAND_20[127:0];
  _RAND_21 = {1{`RANDOM}};
  addr = _RAND_21[31:0];
  _RAND_22 = {1{`RANDOM}};
  state = _RAND_22[3:0];
  _RAND_23 = {1{`RANDOM}};
  state_r = _RAND_23[3:0];
  _RAND_24 = {1{`RANDOM}};
  state_w = _RAND_24[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

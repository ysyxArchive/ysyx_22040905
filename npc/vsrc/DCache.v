module DCache(
  input          clock,
  input          reset,
  output         io_in_ar_ready,
  input          io_in_ar_valid,
  input  [31:0]  io_in_ar_bits_addr,
  output         io_in_r_valid,
  output [63:0]  io_in_r_bits_data,
  output         io_in_aw_ready,
  input          io_in_aw_valid,
  input  [31:0]  io_in_aw_bits_addr,
  output         io_in_w_ready,
  input          io_in_w_valid,
  input  [63:0]  io_in_w_bits_data,
  input  [7:0]   io_in_w_bits_strb,
  output         io_in_b_valid,
  input          io_mem_ar_ready,
  output         io_mem_ar_valid,
  output [31:0]  io_mem_ar_bits_addr,
  output         io_mem_r_ready,
  input          io_mem_r_valid,
  input  [63:0]  io_mem_r_bits_data,
  input          io_mem_aw_ready,
  output         io_mem_aw_valid,
  output [31:0]  io_mem_aw_bits_addr,
  input          io_mem_w_ready,
  output         io_mem_w_valid,
  output [63:0]  io_mem_w_bits_data,
  output [7:0]   io_mem_w_bits_strb,
  output         io_mem_w_bits_last,
  output         io_mem_b_ready,
  input          io_mem_b_valid,
  input  [127:0] io_ram_bits_Q0,
  input  [127:0] io_ram_bits_Q1,
  output         io_ram_bits_WEN,
  output [127:0] io_ram_bits_BWEN,
  output [6:0]   io_ram_bits_A,
  output [127:0] io_ram_bits_D,
  output         io_ram_bits_WAY,
  input          io_flush,
  output [63:0]  io_hitrate
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
`endif // RANDOMIZE_REG_INIT
  wire  lfsr8_clock; // @[dcache.scala 65:21]
  wire  lfsr8_reset; // @[dcache.scala 65:21]
  wire  lfsr8_io_en; // @[dcache.scala 65:21]
  wire [7:0] lfsr8_io_out; // @[dcache.scala 65:21]
  reg [41:0] cache_tag_0; // @[dcache.scala 29:26]
  reg  valid_0_0; // @[dcache.scala 30:22]
  reg  valid_0_1; // @[dcache.scala 30:22]
  reg  dirty_0_0; // @[dcache.scala 31:22]
  reg  dirty_0_1; // @[dcache.scala 31:22]
  reg [2:0] state; // @[dcache.scala 36:22]
  reg [2:0] rstate; // @[dcache.scala 37:23]
  reg [2:0] wstate; // @[dcache.scala 38:23]
  wire  _req_T = io_in_ar_ready & io_in_ar_valid; // @[Decoupled.scala 52:35]
  wire  _req_T_1 = io_in_aw_ready & io_in_aw_valid; // @[Decoupled.scala 52:35]
  wire  req = _req_T | _req_T_1; // @[dcache.scala 39:28]
  reg [63:0] wdata; // @[dcache.scala 42:22]
  reg [7:0] wstrb; // @[dcache.scala 43:22]
  reg  uncache; // @[dcache.scala 44:24]
  reg  rmode; // @[dcache.scala 55:22]
  reg  wmode; // @[dcache.scala 56:22]
  wire  _rmode_T = state == 3'h0; // @[dcache.scala 57:23]
  wire  _rmode_T_4 = state == 3'h0 ? 1'h0 : rmode; // @[dcache.scala 57:58]
  wire  _wmode_T_2 = _rmode_T & _req_T_1; // @[dcache.scala 58:35]
  wire  _wmode_T_4 = _rmode_T ? 1'h0 : wmode; // @[dcache.scala 58:58]
  wire [1:0] _hit_T_8 = cache_tag_0[41:21] == 21'h0 & valid_0_1 ? 2'h1 : 2'h3; // @[dcache.scala 62:16]
  wire [1:0] hit = cache_tag_0[20:0] == 21'h0 & valid_0_0 ? 2'h0 : _hit_T_8; // @[dcache.scala 61:16]
  wire  _miss_T_2 = state == 3'h1; // @[dcache.scala 64:39]
  wire  miss = hit[1] & state == 3'h1; // @[dcache.scala 64:29]
  reg  way; // @[Reg.scala 35:20]
  wire  hit_way = hit[1] ? way : hit[0]; // @[dcache.scala 68:21]
  wire  _tag_way_T = ~way; // @[dcache.scala 71:22]
  wire [2:0] _state_T_1 = req ? 3'h1 : 3'h0; // @[dcache.scala 76:49]
  wire [2:0] _state_T_2 = io_flush ? 3'h0 : _state_T_1; // @[dcache.scala 76:22]
  wire [2:0] _state_T_4 = miss ? 3'h2 : 3'h0; // @[dcache.scala 77:68]
  wire [2:0] _state_T_5 = uncache ? 3'h0 : _state_T_4; // @[dcache.scala 77:49]
  wire [2:0] _state_T_6 = io_flush ? 3'h0 : _state_T_5; // @[dcache.scala 77:22]
  wire  _GEN_386 = way ? dirty_0_1 : dirty_0_0; // @[dcache.scala 78:{90,90}]
  wire [2:0] _state_T_19 = rstate == 3'h6 & (_GEN_386 & wstate == 3'h6 | ~_GEN_386) ? 3'h3 : 3'h2; // @[dcache.scala 78:49]
  wire [2:0] _state_T_22 = 3'h0 == state ? _state_T_2 : 3'h0; // @[Mux.scala 81:58]
  wire  _rstate_T_1 = state == 3'h2; // @[dcache.scala 83:53]
  wire  _rstate_T_2 = io_mem_ar_ready & io_mem_ar_valid; // @[Decoupled.scala 52:35]
  wire [2:0] _rstate_T_4 = state == 3'h2 & _rstate_T_2 ? 3'h4 : 3'h0; // @[dcache.scala 83:46]
  wire [2:0] _rstate_T_5 = io_flush ? 3'h0 : _rstate_T_4; // @[dcache.scala 83:19]
  wire  _rstate_T_7 = io_mem_r_ready & io_mem_r_valid; // @[Decoupled.scala 52:35]
  wire [2:0] _rstate_T_8 = _rstate_T_7 ? 3'h5 : 3'h4; // @[dcache.scala 84:46]
  wire [2:0] _rstate_T_9 = io_flush ? 3'h0 : _rstate_T_8; // @[dcache.scala 84:19]
  wire [2:0] _rstate_T_12 = _rstate_T_7 ? 3'h6 : 3'h5; // @[dcache.scala 85:46]
  wire [2:0] _rstate_T_19 = 3'h0 == rstate ? _rstate_T_5 : 3'h0; // @[Mux.scala 81:58]
  wire  _wstate_T_2 = io_mem_aw_ready & io_mem_aw_valid; // @[Decoupled.scala 52:35]
  wire  _wstate_T_4 = io_mem_w_ready & io_mem_w_valid; // @[Decoupled.scala 52:35]
  wire [2:0] _wstate_T_6 = _rstate_T_1 & _wstate_T_2 & _wstate_T_4 ? 3'h4 : 3'h0; // @[dcache.scala 90:46]
  wire [2:0] _wstate_T_7 = io_flush ? 3'h0 : _wstate_T_6; // @[dcache.scala 90:19]
  wire [2:0] _wstate_T_10 = _wstate_T_4 ? 3'h5 : 3'h4; // @[dcache.scala 91:46]
  wire [2:0] _wstate_T_11 = io_flush ? 3'h0 : _wstate_T_10; // @[dcache.scala 91:19]
  wire  _wstate_T_13 = io_mem_b_ready & io_mem_b_valid; // @[Decoupled.scala 52:35]
  wire [2:0] _wstate_T_14 = _wstate_T_13 ? 3'h6 : 3'h5; // @[dcache.scala 92:46]
  wire [2:0] _wstate_T_21 = 3'h0 == wstate ? _wstate_T_7 : 3'h0; // @[Mux.scala 81:58]
  wire  _valid_T = state == 3'h3; // @[dcache.scala 98:36]
  wire  _valid_T_1 = ~uncache; // @[dcache.scala 98:53]
  wire  _GEN_898 = hit_way ? valid_0_1 : valid_0_0; // @[dcache.scala 98:{29,29}]
  wire [41:0] _cache_tag_T_5 = {cache_tag_0[41:21],21'h0}; // @[Cat.scala 33:92]
  wire [41:0] _cache_tag_T_7 = {21'h0,cache_tag_0[20:0]}; // @[Cat.scala 33:92]
  wire  _dirty_T_2 = _miss_T_2 & wmode; // @[dcache.scala 102:52]
  wire  _dirty_T_3 = ~miss; // @[dcache.scala 102:73]
  wire  _dirty_T_4 = _miss_T_2 & wmode & ~miss; // @[dcache.scala 102:69]
  wire  _GEN_1538 = hit_way ? dirty_0_1 : dirty_0_0; // @[dcache.scala 103:{26,26}]
  wire  _dirty_T_12 = _valid_T ? 1'h0 : _GEN_1538; // @[dcache.scala 103:26]
  wire  _wdata_T_1 = io_in_w_ready & io_in_w_valid; // @[Decoupled.scala 52:35]
  wire  _wdata_T_2 = _rmode_T & _wdata_T_1; // @[dcache.scala 110:33]
  wire [63:0] _wstrb_map_T_8 = wstrb == 8'hff ? 64'hffffffffffffffff : 64'h0; // @[dcache.scala 123:20]
  wire [63:0] _wstrb_map_T_9 = wstrb == 8'hf ? 64'hffffffff : _wstrb_map_T_8; // @[dcache.scala 122:20]
  wire [63:0] _wstrb_map_T_10 = wstrb == 8'h3 ? 64'hffff : _wstrb_map_T_9; // @[dcache.scala 121:20]
  wire [63:0] _wstrb_map_T_11 = wstrb == 8'h1 ? 64'hff : _wstrb_map_T_10; // @[dcache.scala 120:19]
  wire [190:0] _wstrb_map_T_12 = {{127'd0}, _wstrb_map_T_11}; // @[dcache.scala 123:68]
  wire [190:0] _wdata_map_T = {{127'd0}, wdata}; // @[dcache.scala 126:22]
  wire  en_w = (_valid_T | _dirty_T_4) & _valid_T_1; // @[dcache.scala 128:92]
  wire  _io_ram_bits_BWEN_T_4 = _dirty_T_2 & _valid_T_1; // @[dcache.scala 131:66]
  wire [127:0] wstrb_map = _wstrb_map_T_12[127:0]; // @[dcache.scala 119:23 120:13]
  wire [127:0] _io_ram_bits_BWEN_T_5 = ~wstrb_map; // @[dcache.scala 131:81]
  wire [127:0] wdata_map = _wdata_map_T[127:0]; // @[dcache.scala 125:23 126:13]
  wire [127:0] _io_ram_bits_D_T_8 = wdata_map & wstrb_map; // @[dcache.scala 135:66]
  wire [127:0] _io_ram_bits_D_T_10 = wmode ? _io_ram_bits_D_T_8 : 128'h0; // @[dcache.scala 135:22]
  wire  _rcnt_T = rstate == 3'h0; // @[dcache.scala 140:22]
  wire [34:0] _io_mem_ar_bits_addr_T_5 = _req_T ? {{3'd0}, io_in_ar_bits_addr} : 35'h0; // @[dcache.scala 148:29]
  wire  _io_mem_aw_valid_T_5 = wstate == 3'h0; // @[dcache.scala 161:108]
  wire  _io_mem_w_bits_data_T = wstate == 3'h4; // @[dcache.scala 167:37]
  wire  _io_in_r_bits_data_T_2 = _miss_T_2 & _dirty_T_3; // @[dcache.scala 175:50]
  wire [63:0] _io_in_r_bits_data_T_7 = hit_way ? io_ram_bits_Q1[63:0] : io_ram_bits_Q0[63:0]; // @[dcache.scala 176:30]
  wire [127:0] _io_in_r_bits_data_T_11 = _miss_T_2 & _dirty_T_3 ? {{64'd0}, _io_in_r_bits_data_T_7} : 128'h0; // @[dcache.scala 175:28]
  wire [127:0] _io_in_r_bits_data_T_12 = uncache ? {{64'd0}, io_mem_r_bits_data} : _io_in_r_bits_data_T_11; // @[dcache.scala 174:28]
  wire  _io_in_r_valid_T_4 = _io_in_r_bits_data_T_2 | _valid_T; // @[dcache.scala 179:55]
  reg [31:0] hit_num; // @[dcache.scala 186:22]
  reg [31:0] inst_num; // @[dcache.scala 187:23]
  wire [31:0] _hit_num_T_4 = hit_num + 32'h1; // @[dcache.scala 189:58]
  wire [31:0] _inst_num_T_4 = inst_num + 32'h1; // @[dcache.scala 190:59]
  LFSR_8 lfsr8 ( // @[dcache.scala 65:21]
    .clock(lfsr8_clock),
    .reset(lfsr8_reset),
    .io_en(lfsr8_io_en),
    .io_out(lfsr8_io_out)
  );
  assign io_in_ar_ready = state == 3'h0; // @[dcache.scala 178:28]
  assign io_in_r_valid = (_io_in_r_bits_data_T_2 | _valid_T | _rstate_T_7 & uncache) & rmode; // @[dcache.scala 179:110]
  assign io_in_r_bits_data = _io_in_r_bits_data_T_12[63:0]; // @[dcache.scala 174:21]
  assign io_in_aw_ready = state == 3'h0; // @[dcache.scala 183:28]
  assign io_in_w_ready = state == 3'h0; // @[dcache.scala 184:27]
  assign io_in_b_valid = (_io_in_r_valid_T_4 | _wstate_T_13 & uncache) & wmode; // @[dcache.scala 182:111]
  assign io_mem_ar_valid = _req_T | _rstate_T_1 & _rcnt_T; // @[dcache.scala 149:26]
  assign io_mem_ar_bits_addr = _io_mem_ar_bits_addr_T_5[31:0]; // @[dcache.scala 148:23]
  assign io_mem_r_ready = 1'h1; // @[dcache.scala 155:18]
  assign io_mem_aw_valid = _wmode_T_2 | _rstate_T_1 & wstate == 3'h0 & _GEN_386; // @[dcache.scala 161:25]
  assign io_mem_aw_bits_addr = io_in_aw_bits_addr; // @[dcache.scala 158:30]
  assign io_mem_w_valid = _wdata_T_2 | _rstate_T_1 & (_io_mem_aw_valid_T_5 | _io_mem_w_bits_data_T) & _GEN_386; // @[dcache.scala 171:24]
  assign io_mem_w_bits_data = io_in_w_bits_data; // @[dcache.scala 166:28]
  assign io_mem_w_bits_strb = io_in_w_bits_strb; // @[dcache.scala 169:29]
  assign io_mem_w_bits_last = _wdata_T_1 | _io_mem_w_bits_data_T; // @[dcache.scala 170:29]
  assign io_mem_b_ready = 1'h1; // @[dcache.scala 172:18]
  assign io_ram_bits_WEN = ~en_w; // @[dcache.scala 130:21]
  assign io_ram_bits_BWEN = _dirty_T_2 & _valid_T_1 ? _io_ram_bits_BWEN_T_5 : 128'h0; // @[dcache.scala 131:25]
  assign io_ram_bits_A = _rmode_T ? io_in_ar_bits_addr[10:4] : 7'h0; // @[dcache.scala 133:22]
  assign io_ram_bits_D = _io_ram_bits_BWEN_T_4 ? wdata_map : _io_ram_bits_D_T_10; // @[dcache.scala 134:22]
  assign io_ram_bits_WAY = hit[1] ? way : hit[0]; // @[dcache.scala 68:21]
  assign io_hitrate = {inst_num,hit_num}; // @[Cat.scala 33:92]
  assign lfsr8_clock = clock;
  assign lfsr8_reset = reset;
  assign lfsr8_io_en = hit[1] & state == 3'h1; // @[dcache.scala 64:29]
  always @(posedge clock) begin
    if (reset) begin // @[dcache.scala 29:26]
      cache_tag_0 <= 42'h0; // @[dcache.scala 29:26]
    end else if (_rstate_T_1 & _valid_T_1) begin // @[dcache.scala 99:24]
      if (_tag_way_T) begin // @[dcache.scala 100:26]
        cache_tag_0 <= _cache_tag_T_5;
      end else begin
        cache_tag_0 <= _cache_tag_T_7;
      end
    end
    if (reset) begin // @[dcache.scala 30:22]
      valid_0_0 <= 1'h0; // @[dcache.scala 30:22]
    end else if (~hit_way) begin // @[dcache.scala 98:23]
      valid_0_0 <= state == 3'h3 & ~uncache | _GEN_898; // @[dcache.scala 98:23]
    end
    if (reset) begin // @[dcache.scala 30:22]
      valid_0_1 <= 1'h0; // @[dcache.scala 30:22]
    end else if (hit_way) begin // @[dcache.scala 98:23]
      valid_0_1 <= state == 3'h3 & ~uncache | _GEN_898; // @[dcache.scala 98:23]
    end
    if (reset) begin // @[dcache.scala 31:22]
      dirty_0_0 <= 1'h0; // @[dcache.scala 31:22]
    end else if (~hit_way) begin // @[dcache.scala 102:23]
      dirty_0_0 <= (_miss_T_2 & wmode & ~miss | _valid_T & wmode) & _valid_T_1 | _dirty_T_12; // @[dcache.scala 102:23]
    end
    if (reset) begin // @[dcache.scala 31:22]
      dirty_0_1 <= 1'h0; // @[dcache.scala 31:22]
    end else if (hit_way) begin // @[dcache.scala 102:23]
      dirty_0_1 <= (_miss_T_2 & wmode & ~miss | _valid_T & wmode) & _valid_T_1 | _dirty_T_12; // @[dcache.scala 102:23]
    end
    if (reset) begin // @[dcache.scala 36:22]
      state <= 3'h0; // @[dcache.scala 36:22]
    end else if (3'h3 == state) begin // @[Mux.scala 81:58]
      state <= 3'h0;
    end else if (3'h2 == state) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[dcache.scala 78:22]
        state <= 3'h0;
      end else begin
        state <= _state_T_19;
      end
    end else if (3'h1 == state) begin // @[Mux.scala 81:58]
      state <= _state_T_6;
    end else begin
      state <= _state_T_22;
    end
    if (reset) begin // @[dcache.scala 37:23]
      rstate <= 3'h0; // @[dcache.scala 37:23]
    end else if (3'h6 == rstate) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[dcache.scala 86:19]
        rstate <= 3'h0;
      end else if (state != 3'h2) begin // @[dcache.scala 86:46]
        rstate <= 3'h0;
      end else begin
        rstate <= 3'h6;
      end
    end else if (3'h5 == rstate) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[dcache.scala 85:19]
        rstate <= 3'h0;
      end else begin
        rstate <= _rstate_T_12;
      end
    end else if (3'h4 == rstate) begin // @[Mux.scala 81:58]
      rstate <= _rstate_T_9;
    end else begin
      rstate <= _rstate_T_19;
    end
    if (reset) begin // @[dcache.scala 38:23]
      wstate <= 3'h0; // @[dcache.scala 38:23]
    end else if (3'h6 == wstate) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[dcache.scala 86:19]
        wstate <= 3'h0;
      end else if (state != 3'h2) begin // @[dcache.scala 86:46]
        wstate <= 3'h0;
      end else begin
        wstate <= 3'h6;
      end
    end else if (3'h5 == wstate) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[dcache.scala 92:19]
        wstate <= 3'h0;
      end else begin
        wstate <= _wstate_T_14;
      end
    end else if (3'h4 == wstate) begin // @[Mux.scala 81:58]
      wstate <= _wstate_T_11;
    end else begin
      wstate <= _wstate_T_21;
    end
    if (reset) begin // @[dcache.scala 42:22]
      wdata <= 64'h0; // @[dcache.scala 42:22]
    end else if (_rmode_T & _wdata_T_1) begin // @[dcache.scala 110:15]
      wdata <= io_in_w_bits_data;
    end
    if (reset) begin // @[dcache.scala 43:22]
      wstrb <= 8'h0; // @[dcache.scala 43:22]
    end else if (_wdata_T_2) begin // @[dcache.scala 111:15]
      wstrb <= io_in_w_bits_strb;
    end
    if (reset) begin // @[dcache.scala 44:24]
      uncache <= 1'h0; // @[dcache.scala 44:24]
    end else begin
      uncache <= _rmode_T & req | uncache; // @[dcache.scala 108:10]
    end
    if (reset) begin // @[dcache.scala 55:22]
      rmode <= 1'h0; // @[dcache.scala 55:22]
    end else begin
      rmode <= state == 3'h0 & _req_T | _rmode_T_4; // @[dcache.scala 57:9]
    end
    if (reset) begin // @[dcache.scala 56:22]
      wmode <= 1'h0; // @[dcache.scala 56:22]
    end else begin
      wmode <= _rmode_T & _req_T_1 | _wmode_T_4; // @[dcache.scala 58:9]
    end
    if (reset) begin // @[Reg.scala 35:20]
      way <= 1'h0; // @[Reg.scala 35:20]
    end else if (miss) begin // @[Reg.scala 36:18]
      way <= lfsr8_io_out[0]; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[dcache.scala 186:22]
      hit_num <= 32'h0; // @[dcache.scala 186:22]
    end else if (_io_in_r_bits_data_T_2) begin // @[dcache.scala 189:17]
      hit_num <= _hit_num_T_4;
    end
    if (reset) begin // @[dcache.scala 187:23]
      inst_num <= 32'h0; // @[dcache.scala 187:23]
    end else if (req) begin // @[dcache.scala 190:18]
      inst_num <= _inst_num_T_4;
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {2{`RANDOM}};
  cache_tag_0 = _RAND_0[41:0];
  _RAND_1 = {1{`RANDOM}};
  valid_0_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  valid_0_1 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  dirty_0_0 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  dirty_0_1 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  state = _RAND_5[2:0];
  _RAND_6 = {1{`RANDOM}};
  rstate = _RAND_6[2:0];
  _RAND_7 = {1{`RANDOM}};
  wstate = _RAND_7[2:0];
  _RAND_8 = {2{`RANDOM}};
  wdata = _RAND_8[63:0];
  _RAND_9 = {1{`RANDOM}};
  wstrb = _RAND_9[7:0];
  _RAND_10 = {1{`RANDOM}};
  uncache = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  rmode = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  wmode = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  way = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  hit_num = _RAND_14[31:0];
  _RAND_15 = {1{`RANDOM}};
  inst_num = _RAND_15[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

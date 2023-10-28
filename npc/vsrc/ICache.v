module ICache(
  input          clock,
  input          reset,
  output         io_in_ar_ready,
  input          io_in_ar_valid,
  input  [31:0]  io_in_ar_bits_addr,
  output         io_in_r_valid,
  output [63:0]  io_in_r_bits_data,
  input          io_mem_ar_ready,
  output         io_mem_ar_valid,
  output [31:0]  io_mem_ar_bits_addr,
  output [7:0]   io_mem_ar_bits_len,
  output         io_mem_r_ready,
  input          io_mem_r_valid,
  input  [63:0]  io_mem_r_bits_data,
  input          io_mem_r_bits_last,
  input  [127:0] io_ram_bits_Q0,
  input  [127:0] io_ram_bits_Q1,
  output         io_ram_bits_CEN,
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
  reg [63:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
`endif // RANDOMIZE_REG_INIT
  wire  lfsr8_clock; // @[icache.scala 54:21]
  wire  lfsr8_reset; // @[icache.scala 54:21]
  wire  lfsr8_io_en; // @[icache.scala 54:21]
  wire [7:0] lfsr8_io_out; // @[icache.scala 54:21]
  reg [53:0] cache_tag_0; // @[icache.scala 30:26]
  reg [53:0] cache_tag_1; // @[icache.scala 30:26]
  reg  valid_0_0; // @[icache.scala 31:22]
  reg  valid_0_1; // @[icache.scala 31:22]
  reg  valid_1_0; // @[icache.scala 31:22]
  reg  valid_1_1; // @[icache.scala 31:22]
  reg [1:0] state; // @[icache.scala 36:22]
  wire  req = io_in_ar_ready & io_in_ar_valid; // @[Decoupled.scala 52:35]
  reg [31:0] addr; // @[icache.scala 39:21]
  reg  uncache; // @[icache.scala 40:24]
  wire [26:0] tag = addr[31:5]; // @[icache.scala 41:17]
  wire [6:0] offset = {addr[3:0], 3'h0}; // @[icache.scala 42:42]
  wire  idx = addr[4]; // @[icache.scala 43:17]
  wire [53:0] _GEN_1 = idx ? cache_tag_1 : cache_tag_0; // @[icache.scala 50:{33,33}]
  wire  _GEN_3 = idx ? valid_1_0 : valid_0_0; // @[icache.scala 50:{70,70}]
  wire  _GEN_5 = idx ? valid_1_1 : valid_0_1; // @[icache.scala 51:{70,70}]
  wire [1:0] _hit_T_8 = _GEN_1[53:27] == tag & _GEN_5 ? 2'h1 : 2'h3; // @[icache.scala 51:16]
  wire [1:0] hit = _GEN_1[26:0] == tag & _GEN_3 ? 2'h0 : _hit_T_8; // @[icache.scala 50:16]
  wire  hit_way = hit[0]; // @[icache.scala 52:21]
  wire  miss = hit[1] | uncache; // @[icache.scala 53:29]
  wire  _lfsr8_io_en_T = state == 2'h2; // @[icache.scala 55:25]
  reg  way; // @[Reg.scala 35:20]
  reg  cnt; // @[icache.scala 58:20]
  wire [1:0] _state_T_1 = req ? 2'h1 : 2'h0; // @[icache.scala 61:49]
  wire [1:0] _state_T_2 = io_flush ? 2'h0 : _state_T_1; // @[icache.scala 61:22]
  wire [1:0] _state_T_5 = miss ? 2'h2 : _state_T_1; // @[icache.scala 62:49]
  wire [1:0] _state_T_6 = io_flush ? 2'h0 : _state_T_5; // @[icache.scala 62:22]
  wire  _state_T_8 = io_mem_ar_ready & io_mem_ar_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _state_T_9 = _state_T_8 ? 2'h3 : 2'h2; // @[icache.scala 64:49]
  wire  _state_T_12 = io_mem_r_ready & io_mem_r_valid; // @[Decoupled.scala 52:35]
  wire  _state_T_14 = _state_T_12 & io_mem_r_bits_last; // @[icache.scala 65:64]
  wire  _valid_T_2 = _lfsr8_io_en_T & ~uncache; // @[icache.scala 68:43]
  wire  _GEN_8 = ~idx & way ? valid_0_1 : valid_0_0; // @[icache.scala 68:{25,25}]
  wire  _GEN_18 = ~way; // @[icache.scala 68:{25,25}]
  wire  _GEN_9 = idx & ~way ? valid_1_0 : _GEN_8; // @[icache.scala 68:{25,25}]
  wire  _GEN_10 = idx & way ? valid_1_1 : _GEN_9; // @[icache.scala 68:{25,25}]
  wire [53:0] _cache_tag_T_5 = {_GEN_1[53:27],tag}; // @[Cat.scala 33:92]
  wire [53:0] _cache_tag_T_7 = {tag,_GEN_1[26:0]}; // @[Cat.scala 33:92]
  wire  _addr_T = state == 2'h0; // @[icache.scala 71:26]
  wire  _addr_T_2 = state == 2'h1; // @[icache.scala 71:57]
  wire  _addr_T_3 = state == 2'h1 & req; // @[icache.scala 71:71]
  wire  _addr_T_4 = ~miss; // @[icache.scala 71:82]
  wire  _addr_T_6 = state == 2'h0 & req | state == 2'h1 & req & ~miss; // @[icache.scala 71:46]
  wire  _en_w_T = state == 2'h3; // @[icache.scala 81:20]
  wire  en_w = state == 2'h3 & _state_T_12; // @[icache.scala 81:35]
  wire [6:0] _GEN_23 = {cnt, 6'h0}; // @[icache.scala 84:90]
  wire [7:0] _io_ram_bits_BWEN_T = {{1'd0}, _GEN_23}; // @[icache.scala 84:90]
  wire [382:0] _io_ram_bits_BWEN_T_1 = 383'hffffffffffffffff << _io_ram_bits_BWEN_T; // @[icache.scala 84:82]
  wire [382:0] _io_ram_bits_BWEN_T_2 = ~_io_ram_bits_BWEN_T_1; // @[icache.scala 84:32]
  wire [382:0] _io_ram_bits_BWEN_T_4 = en_w ? _io_ram_bits_BWEN_T_2 : 383'hffffffffffffffffffffffffffffffff; // @[icache.scala 84:25]
  wire  _io_ram_bits_A_T_1 = en_w ? idx : io_in_ar_bits_addr[4]; // @[icache.scala 85:22]
  wire [127:0] _io_ram_bits_D_T = {64'h0,io_mem_r_bits_data}; // @[Cat.scala 33:92]
  wire [382:0] _GEN_0 = {{255'd0}, _io_ram_bits_D_T}; // @[icache.scala 86:62]
  wire [382:0] _io_ram_bits_D_T_2 = _GEN_0 << _io_ram_bits_BWEN_T; // @[icache.scala 86:62]
  wire [382:0] _io_ram_bits_D_T_3 = en_w ? _io_ram_bits_D_T_2 : 383'h0; // @[icache.scala 86:22]
  reg  flag; // @[icache.scala 89:20]
  reg [63:0] rdata; // @[icache.scala 90:21]
  wire  _flag_T_4 = en_w ? 1'h0 : flag; // @[icache.scala 92:14]
  wire [34:0] _GEN_25 = {{3'd0}, addr}; // @[icache.scala 95:31]
  wire [34:0] _io_mem_ar_bits_addr_T_2 = _GEN_25 & 35'h7fffffff8; // @[icache.scala 95:31]
  wire  _io_mem_ar_bits_len_T = uncache ? 1'h0 : 1'h1; // @[icache.scala 97:28]
  wire  _io_in_r_bits_data_T_2 = _addr_T_2 & _addr_T_4; // @[icache.scala 118:50]
  wire [127:0] _io_in_r_bits_data_T_3 = io_ram_bits_Q1 >> offset; // @[icache.scala 120:44]
  wire [127:0] _io_in_r_bits_data_T_5 = io_ram_bits_Q0 >> offset; // @[icache.scala 121:44]
  wire [63:0] _io_in_r_bits_data_T_7 = hit_way ? _io_in_r_bits_data_T_3[63:0] : _io_in_r_bits_data_T_5[63:0]; // @[icache.scala 119:30]
  wire [63:0] _io_in_r_bits_data_T_14 = rdata >> offset[5:0]; // @[icache.scala 125:37]
  wire [63:0] _io_in_r_bits_data_T_15 = uncache ? io_mem_r_bits_data : _io_in_r_bits_data_T_14; // @[icache.scala 123:32]
  wire [63:0] _io_in_r_bits_data_T_16 = en_w & io_mem_r_bits_last ? _io_in_r_bits_data_T_15 : 64'h0; // @[icache.scala 122:30]
  reg [31:0] hit_num; // @[icache.scala 135:22]
  reg [31:0] inst_num; // @[icache.scala 136:23]
  wire [31:0] _hit_num_T_4 = hit_num + 32'h1; // @[icache.scala 138:58]
  wire [31:0] _inst_num_T_4 = inst_num + 32'h1; // @[icache.scala 139:59]
  LFSR_8 lfsr8 ( // @[icache.scala 54:21]
    .clock(lfsr8_clock),
    .reset(lfsr8_reset),
    .io_en(lfsr8_io_en),
    .io_out(lfsr8_io_out)
  );
  assign io_in_ar_ready = _addr_T | _io_in_r_bits_data_T_2; // @[icache.scala 127:40]
  assign io_in_r_valid = _io_in_r_bits_data_T_2 | _state_T_14; // @[icache.scala 128:55]
  assign io_in_r_bits_data = _addr_T_2 & _addr_T_4 ? _io_in_r_bits_data_T_7 : _io_in_r_bits_data_T_16; // @[icache.scala 118:28]
  assign io_mem_ar_valid = state == 2'h2; // @[icache.scala 96:28]
  assign io_mem_ar_bits_addr = _io_mem_ar_bits_addr_T_2[31:0]; // @[icache.scala 95:23]
  assign io_mem_ar_bits_len = {{7'd0}, _io_mem_ar_bits_len_T}; // @[icache.scala 97:22]
  assign io_mem_r_ready = 1'h1; // @[icache.scala 102:18]
  assign io_ram_bits_CEN = ~(_addr_T | _addr_T_3 | _en_w_T); // @[icache.scala 82:21]
  assign io_ram_bits_WEN = ~en_w; // @[icache.scala 83:21]
  assign io_ram_bits_BWEN = _io_ram_bits_BWEN_T_4[127:0]; // @[icache.scala 84:19]
  assign io_ram_bits_A = {{6'd0}, _io_ram_bits_A_T_1}; // @[icache.scala 85:16]
  assign io_ram_bits_D = _io_ram_bits_D_T_3[127:0]; // @[icache.scala 86:16]
  assign io_ram_bits_WAY = way; // @[icache.scala 87:18]
  assign io_hitrate = {inst_num,hit_num}; // @[Cat.scala 33:92]
  assign lfsr8_clock = clock;
  assign lfsr8_reset = reset;
  assign lfsr8_io_en = state == 2'h2; // @[icache.scala 55:25]
  always @(posedge clock) begin
    if (reset) begin // @[icache.scala 30:26]
      cache_tag_0 <= 54'h0; // @[icache.scala 30:26]
    end else if (~idx) begin // @[icache.scala 69:18]
      if (_valid_T_2) begin // @[icache.scala 69:24]
        if (_GEN_18) begin // @[icache.scala 69:58]
          cache_tag_0 <= _cache_tag_T_5;
        end else begin
          cache_tag_0 <= _cache_tag_T_7;
        end
      end else if (idx) begin // @[icache.scala 50:33]
        cache_tag_0 <= cache_tag_1; // @[icache.scala 50:33]
      end
    end
    if (reset) begin // @[icache.scala 30:26]
      cache_tag_1 <= 54'h0; // @[icache.scala 30:26]
    end else if (idx) begin // @[icache.scala 69:18]
      if (_valid_T_2) begin // @[icache.scala 69:24]
        if (_GEN_18) begin // @[icache.scala 69:58]
          cache_tag_1 <= _cache_tag_T_5;
        end else begin
          cache_tag_1 <= _cache_tag_T_7;
        end
      end else if (!(idx)) begin // @[icache.scala 50:33]
        cache_tag_1 <= cache_tag_0;
      end
    end
    if (reset) begin // @[icache.scala 31:22]
      valid_0_0 <= 1'h0; // @[icache.scala 31:22]
    end else if (~idx & ~way) begin // @[icache.scala 68:19]
      valid_0_0 <= _lfsr8_io_en_T & ~uncache | _GEN_10; // @[icache.scala 68:19]
    end
    if (reset) begin // @[icache.scala 31:22]
      valid_0_1 <= 1'h0; // @[icache.scala 31:22]
    end else if (~idx & way) begin // @[icache.scala 68:19]
      valid_0_1 <= _lfsr8_io_en_T & ~uncache | _GEN_10; // @[icache.scala 68:19]
    end
    if (reset) begin // @[icache.scala 31:22]
      valid_1_0 <= 1'h0; // @[icache.scala 31:22]
    end else if (idx & ~way) begin // @[icache.scala 68:19]
      valid_1_0 <= _lfsr8_io_en_T & ~uncache | _GEN_10; // @[icache.scala 68:19]
    end
    if (reset) begin // @[icache.scala 31:22]
      valid_1_1 <= 1'h0; // @[icache.scala 31:22]
    end else if (idx & way) begin // @[icache.scala 68:19]
      valid_1_1 <= _lfsr8_io_en_T & ~uncache | _GEN_10; // @[icache.scala 68:19]
    end
    if (reset) begin // @[icache.scala 36:22]
      state <= 2'h0; // @[icache.scala 36:22]
    end else if (2'h3 == state) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[icache.scala 65:22]
        state <= 2'h0;
      end else if (_state_T_12 & io_mem_r_bits_last) begin // @[icache.scala 65:49]
        state <= 2'h0;
      end else begin
        state <= 2'h3;
      end
    end else if (2'h2 == state) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[icache.scala 64:22]
        state <= 2'h0;
      end else begin
        state <= _state_T_9;
      end
    end else if (2'h1 == state) begin // @[Mux.scala 81:58]
      state <= _state_T_6;
    end else begin
      state <= _state_T_2;
    end
    if (reset) begin // @[icache.scala 39:21]
      addr <= 32'h0; // @[icache.scala 39:21]
    end else if (state == 2'h0 & req | state == 2'h1 & req & ~miss) begin // @[icache.scala 71:17]
      addr <= io_in_ar_bits_addr;
    end
    if (reset) begin // @[icache.scala 40:24]
      uncache <= 1'h0; // @[icache.scala 40:24]
    end else if (_addr_T_6) begin // @[icache.scala 72:17]
      uncache <= io_in_ar_bits_addr >= 32'ha0000000;
    end
    if (reset) begin // @[Reg.scala 35:20]
      way <= 1'h0; // @[Reg.scala 35:20]
    end else if (miss) begin // @[Reg.scala 36:18]
      way <= lfsr8_io_out[0]; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[icache.scala 58:20]
      cnt <= 1'h0; // @[icache.scala 58:20]
    end else if (_lfsr8_io_en_T) begin // @[icache.scala 76:13]
      cnt <= addr[3];
    end else if (_state_T_12) begin // @[icache.scala 77:13]
      cnt <= ~cnt;
    end
    if (reset) begin // @[icache.scala 89:20]
      flag <= 1'h0; // @[icache.scala 89:20]
    end else begin
      flag <= _addr_T | _flag_T_4; // @[icache.scala 91:8]
    end
    if (reset) begin // @[icache.scala 90:21]
      rdata <= 64'h0; // @[icache.scala 90:21]
    end else if (en_w & flag) begin // @[icache.scala 93:14]
      rdata <= io_mem_r_bits_data;
    end
    if (reset) begin // @[icache.scala 135:22]
      hit_num <= 32'h0; // @[icache.scala 135:22]
    end else if (_io_in_r_bits_data_T_2) begin // @[icache.scala 138:17]
      hit_num <= _hit_num_T_4;
    end
    if (reset) begin // @[icache.scala 136:23]
      inst_num <= 32'h0; // @[icache.scala 136:23]
    end else if (req) begin // @[icache.scala 139:18]
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
  cache_tag_0 = _RAND_0[53:0];
  _RAND_1 = {2{`RANDOM}};
  cache_tag_1 = _RAND_1[53:0];
  _RAND_2 = {1{`RANDOM}};
  valid_0_0 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  valid_0_1 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  valid_1_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  valid_1_1 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  state = _RAND_6[1:0];
  _RAND_7 = {1{`RANDOM}};
  addr = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  uncache = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  way = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  cnt = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  flag = _RAND_11[0:0];
  _RAND_12 = {2{`RANDOM}};
  rdata = _RAND_12[63:0];
  _RAND_13 = {1{`RANDOM}};
  hit_num = _RAND_13[31:0];
  _RAND_14 = {1{`RANDOM}};
  inst_num = _RAND_14[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

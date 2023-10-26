module Crossbar(
  input         clock,
  input         reset,
  input         io_in1_ar_valid,
  input  [31:0] io_in1_ar_bits_addr,
  output        io_in1_r_valid,
  output [63:0] io_in1_r_bits_data,
  output        io_in2_ar_ready,
  input         io_in2_ar_valid,
  input  [31:0] io_in2_ar_bits_addr,
  output        io_in2_r_valid,
  output [63:0] io_in2_r_bits_data,
  output        io_in2_aw_ready,
  input         io_in2_aw_valid,
  input  [31:0] io_in2_aw_bits_addr,
  output        io_in2_w_ready,
  input         io_in2_w_valid,
  input  [63:0] io_in2_w_bits_data,
  input  [7:0]  io_in2_w_bits_strb,
  output        io_in2_b_valid,
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
  input  [3:0]  io_out2_b_bits_id,
  output [63:0] io_hitrate_i,
  output [63:0] io_hitrate_d,
  input         io_flush_i,
  input         io_flush_d
);
  wire  ICache_clock; // @[Crossbar.scala 23:22]
  wire  ICache_reset; // @[Crossbar.scala 23:22]
  wire  ICache_io_in_ar_ready; // @[Crossbar.scala 23:22]
  wire  ICache_io_in_ar_valid; // @[Crossbar.scala 23:22]
  wire [31:0] ICache_io_in_ar_bits_addr; // @[Crossbar.scala 23:22]
  wire  ICache_io_in_r_valid; // @[Crossbar.scala 23:22]
  wire [63:0] ICache_io_in_r_bits_data; // @[Crossbar.scala 23:22]
  wire  ICache_io_mem_ar_ready; // @[Crossbar.scala 23:22]
  wire  ICache_io_mem_ar_valid; // @[Crossbar.scala 23:22]
  wire [31:0] ICache_io_mem_ar_bits_addr; // @[Crossbar.scala 23:22]
  wire [7:0] ICache_io_mem_ar_bits_len; // @[Crossbar.scala 23:22]
  wire  ICache_io_mem_r_ready; // @[Crossbar.scala 23:22]
  wire  ICache_io_mem_r_valid; // @[Crossbar.scala 23:22]
  wire [63:0] ICache_io_mem_r_bits_data; // @[Crossbar.scala 23:22]
  wire  ICache_io_mem_r_bits_last; // @[Crossbar.scala 23:22]
  wire [127:0] ICache_io_ram_bits_Q0; // @[Crossbar.scala 23:22]
  wire [127:0] ICache_io_ram_bits_Q1; // @[Crossbar.scala 23:22]
  wire  ICache_io_ram_bits_CEN; // @[Crossbar.scala 23:22]
  wire  ICache_io_ram_bits_WEN; // @[Crossbar.scala 23:22]
  wire [127:0] ICache_io_ram_bits_BWEN; // @[Crossbar.scala 23:22]
  wire [6:0] ICache_io_ram_bits_A; // @[Crossbar.scala 23:22]
  wire [127:0] ICache_io_ram_bits_D; // @[Crossbar.scala 23:22]
  wire  ICache_io_ram_bits_WAY; // @[Crossbar.scala 23:22]
  wire  ICache_io_flush; // @[Crossbar.scala 23:22]
  wire [63:0] ICache_io_hitrate; // @[Crossbar.scala 23:22]
  wire  ICacheRAM_clock; // @[Crossbar.scala 24:25]
  wire  ICacheRAM_reset; // @[Crossbar.scala 24:25]
  wire [127:0] ICacheRAM_io_bits_Q0; // @[Crossbar.scala 24:25]
  wire [127:0] ICacheRAM_io_bits_Q1; // @[Crossbar.scala 24:25]
  wire  ICacheRAM_io_bits_CEN; // @[Crossbar.scala 24:25]
  wire  ICacheRAM_io_bits_WEN; // @[Crossbar.scala 24:25]
  wire [127:0] ICacheRAM_io_bits_BWEN; // @[Crossbar.scala 24:25]
  wire [6:0] ICacheRAM_io_bits_A; // @[Crossbar.scala 24:25]
  wire [127:0] ICacheRAM_io_bits_D; // @[Crossbar.scala 24:25]
  wire  ICacheRAM_io_bits_WAY; // @[Crossbar.scala 24:25]
  wire  DCache_clock; // @[Crossbar.scala 25:22]
  wire  DCache_reset; // @[Crossbar.scala 25:22]
  wire  DCache_io_in_ar_ready; // @[Crossbar.scala 25:22]
  wire  DCache_io_in_ar_valid; // @[Crossbar.scala 25:22]
  wire [31:0] DCache_io_in_ar_bits_addr; // @[Crossbar.scala 25:22]
  wire  DCache_io_in_r_valid; // @[Crossbar.scala 25:22]
  wire [63:0] DCache_io_in_r_bits_data; // @[Crossbar.scala 25:22]
  wire  DCache_io_in_aw_ready; // @[Crossbar.scala 25:22]
  wire  DCache_io_in_aw_valid; // @[Crossbar.scala 25:22]
  wire [31:0] DCache_io_in_aw_bits_addr; // @[Crossbar.scala 25:22]
  wire  DCache_io_in_w_ready; // @[Crossbar.scala 25:22]
  wire  DCache_io_in_w_valid; // @[Crossbar.scala 25:22]
  wire [63:0] DCache_io_in_w_bits_data; // @[Crossbar.scala 25:22]
  wire [7:0] DCache_io_in_w_bits_strb; // @[Crossbar.scala 25:22]
  wire  DCache_io_in_b_valid; // @[Crossbar.scala 25:22]
  wire  DCache_io_mem_ar_ready; // @[Crossbar.scala 25:22]
  wire  DCache_io_mem_ar_valid; // @[Crossbar.scala 25:22]
  wire [31:0] DCache_io_mem_ar_bits_addr; // @[Crossbar.scala 25:22]
  wire [7:0] DCache_io_mem_ar_bits_len; // @[Crossbar.scala 25:22]
  wire  DCache_io_mem_r_ready; // @[Crossbar.scala 25:22]
  wire  DCache_io_mem_r_valid; // @[Crossbar.scala 25:22]
  wire [63:0] DCache_io_mem_r_bits_data; // @[Crossbar.scala 25:22]
  wire  DCache_io_mem_aw_ready; // @[Crossbar.scala 25:22]
  wire  DCache_io_mem_aw_valid; // @[Crossbar.scala 25:22]
  wire [31:0] DCache_io_mem_aw_bits_addr; // @[Crossbar.scala 25:22]
  wire  DCache_io_mem_w_ready; // @[Crossbar.scala 25:22]
  wire  DCache_io_mem_w_valid; // @[Crossbar.scala 25:22]
  wire [63:0] DCache_io_mem_w_bits_data; // @[Crossbar.scala 25:22]
  wire [7:0] DCache_io_mem_w_bits_strb; // @[Crossbar.scala 25:22]
  wire  DCache_io_mem_w_bits_last; // @[Crossbar.scala 25:22]
  wire  DCache_io_mem_b_ready; // @[Crossbar.scala 25:22]
  wire  DCache_io_mem_b_valid; // @[Crossbar.scala 25:22]
  wire [127:0] DCache_io_ram_bits_Q0; // @[Crossbar.scala 25:22]
  wire [127:0] DCache_io_ram_bits_Q1; // @[Crossbar.scala 25:22]
  wire  DCache_io_ram_bits_WEN; // @[Crossbar.scala 25:22]
  wire [127:0] DCache_io_ram_bits_BWEN; // @[Crossbar.scala 25:22]
  wire [6:0] DCache_io_ram_bits_A; // @[Crossbar.scala 25:22]
  wire [127:0] DCache_io_ram_bits_D; // @[Crossbar.scala 25:22]
  wire  DCache_io_ram_bits_WAY; // @[Crossbar.scala 25:22]
  wire  DCache_io_flush; // @[Crossbar.scala 25:22]
  wire [63:0] DCache_io_hitrate; // @[Crossbar.scala 25:22]
  wire  DCache_io_uncache; // @[Crossbar.scala 25:22]
  wire  ICacheRAM_1_clock; // @[Crossbar.scala 26:25]
  wire  ICacheRAM_1_reset; // @[Crossbar.scala 26:25]
  wire [127:0] ICacheRAM_1_io_bits_Q0; // @[Crossbar.scala 26:25]
  wire [127:0] ICacheRAM_1_io_bits_Q1; // @[Crossbar.scala 26:25]
  wire  ICacheRAM_1_io_bits_CEN; // @[Crossbar.scala 26:25]
  wire  ICacheRAM_1_io_bits_WEN; // @[Crossbar.scala 26:25]
  wire [127:0] ICacheRAM_1_io_bits_BWEN; // @[Crossbar.scala 26:25]
  wire [6:0] ICacheRAM_1_io_bits_A; // @[Crossbar.scala 26:25]
  wire [127:0] ICacheRAM_1_io_bits_D; // @[Crossbar.scala 26:25]
  wire  ICacheRAM_1_io_bits_WAY; // @[Crossbar.scala 26:25]
  wire  CacheArbiter_io_ifu_ar_ready; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_ifu_ar_valid; // @[Crossbar.scala 27:23]
  wire [31:0] CacheArbiter_io_ifu_ar_bits_addr; // @[Crossbar.scala 27:23]
  wire [7:0] CacheArbiter_io_ifu_ar_bits_len; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_ifu_r_valid; // @[Crossbar.scala 27:23]
  wire [63:0] CacheArbiter_io_ifu_r_bits_data; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_ifu_r_bits_last; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_lsu_ar_ready; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_lsu_ar_valid; // @[Crossbar.scala 27:23]
  wire [31:0] CacheArbiter_io_lsu_ar_bits_addr; // @[Crossbar.scala 27:23]
  wire [7:0] CacheArbiter_io_lsu_ar_bits_len; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_lsu_r_valid; // @[Crossbar.scala 27:23]
  wire [63:0] CacheArbiter_io_lsu_r_bits_data; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_lsu_aw_ready; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_lsu_aw_valid; // @[Crossbar.scala 27:23]
  wire [31:0] CacheArbiter_io_lsu_aw_bits_addr; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_lsu_w_ready; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_lsu_w_valid; // @[Crossbar.scala 27:23]
  wire [63:0] CacheArbiter_io_lsu_w_bits_data; // @[Crossbar.scala 27:23]
  wire [7:0] CacheArbiter_io_lsu_w_bits_strb; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_lsu_w_bits_last; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_lsu_b_valid; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_out_ar_ready; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_out_ar_valid; // @[Crossbar.scala 27:23]
  wire [31:0] CacheArbiter_io_out_ar_bits_addr; // @[Crossbar.scala 27:23]
  wire [7:0] CacheArbiter_io_out_ar_bits_len; // @[Crossbar.scala 27:23]
  wire [2:0] CacheArbiter_io_out_ar_bits_size; // @[Crossbar.scala 27:23]
  wire [3:0] CacheArbiter_io_out_ar_bits_id; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_out_r_ready; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_out_r_valid; // @[Crossbar.scala 27:23]
  wire [63:0] CacheArbiter_io_out_r_bits_data; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_out_r_bits_last; // @[Crossbar.scala 27:23]
  wire [3:0] CacheArbiter_io_out_r_bits_id; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_out_aw_ready; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_out_aw_valid; // @[Crossbar.scala 27:23]
  wire [31:0] CacheArbiter_io_out_aw_bits_addr; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_out_w_ready; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_out_w_valid; // @[Crossbar.scala 27:23]
  wire [63:0] CacheArbiter_io_out_w_bits_data; // @[Crossbar.scala 27:23]
  wire [7:0] CacheArbiter_io_out_w_bits_strb; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_out_w_bits_last; // @[Crossbar.scala 27:23]
  wire  CacheArbiter_io_out_b_valid; // @[Crossbar.scala 27:23]
  wire  DeviceArbiter_io_in_ar_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_in_ar_valid; // @[Crossbar.scala 28:24]
  wire [31:0] DeviceArbiter_io_in_ar_bits_addr; // @[Crossbar.scala 28:24]
  wire [7:0] DeviceArbiter_io_in_ar_bits_len; // @[Crossbar.scala 28:24]
  wire [2:0] DeviceArbiter_io_in_ar_bits_size; // @[Crossbar.scala 28:24]
  wire [3:0] DeviceArbiter_io_in_ar_bits_id; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_in_r_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_in_r_valid; // @[Crossbar.scala 28:24]
  wire [63:0] DeviceArbiter_io_in_r_bits_data; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_in_r_bits_last; // @[Crossbar.scala 28:24]
  wire [3:0] DeviceArbiter_io_in_r_bits_id; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_in_aw_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_in_aw_valid; // @[Crossbar.scala 28:24]
  wire [31:0] DeviceArbiter_io_in_aw_bits_addr; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_in_w_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_in_w_valid; // @[Crossbar.scala 28:24]
  wire [63:0] DeviceArbiter_io_in_w_bits_data; // @[Crossbar.scala 28:24]
  wire [7:0] DeviceArbiter_io_in_w_bits_strb; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_in_w_bits_last; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_in_b_valid; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out1_ar_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out1_ar_valid; // @[Crossbar.scala 28:24]
  wire [31:0] DeviceArbiter_io_out1_ar_bits_addr; // @[Crossbar.scala 28:24]
  wire [7:0] DeviceArbiter_io_out1_ar_bits_len; // @[Crossbar.scala 28:24]
  wire [2:0] DeviceArbiter_io_out1_ar_bits_size; // @[Crossbar.scala 28:24]
  wire [3:0] DeviceArbiter_io_out1_ar_bits_id; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out1_r_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out1_r_valid; // @[Crossbar.scala 28:24]
  wire [63:0] DeviceArbiter_io_out1_r_bits_data; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out1_r_bits_last; // @[Crossbar.scala 28:24]
  wire [3:0] DeviceArbiter_io_out1_r_bits_id; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out1_aw_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out1_aw_valid; // @[Crossbar.scala 28:24]
  wire [31:0] DeviceArbiter_io_out1_aw_bits_addr; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out1_w_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out1_w_valid; // @[Crossbar.scala 28:24]
  wire [63:0] DeviceArbiter_io_out1_w_bits_data; // @[Crossbar.scala 28:24]
  wire [7:0] DeviceArbiter_io_out1_w_bits_strb; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out1_w_bits_last; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out1_b_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out1_b_valid; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out2_ar_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out2_ar_valid; // @[Crossbar.scala 28:24]
  wire [31:0] DeviceArbiter_io_out2_ar_bits_addr; // @[Crossbar.scala 28:24]
  wire [7:0] DeviceArbiter_io_out2_ar_bits_len; // @[Crossbar.scala 28:24]
  wire [2:0] DeviceArbiter_io_out2_ar_bits_size; // @[Crossbar.scala 28:24]
  wire [3:0] DeviceArbiter_io_out2_ar_bits_id; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out2_r_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out2_r_valid; // @[Crossbar.scala 28:24]
  wire [63:0] DeviceArbiter_io_out2_r_bits_data; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out2_r_bits_last; // @[Crossbar.scala 28:24]
  wire [3:0] DeviceArbiter_io_out2_r_bits_id; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out2_aw_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out2_aw_valid; // @[Crossbar.scala 28:24]
  wire [31:0] DeviceArbiter_io_out2_aw_bits_addr; // @[Crossbar.scala 28:24]
  wire [3:0] DeviceArbiter_io_out2_aw_bits_id; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out2_w_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out2_w_valid; // @[Crossbar.scala 28:24]
  wire [63:0] DeviceArbiter_io_out2_w_bits_data; // @[Crossbar.scala 28:24]
  wire [7:0] DeviceArbiter_io_out2_w_bits_strb; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out2_w_bits_last; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out2_b_ready; // @[Crossbar.scala 28:24]
  wire  DeviceArbiter_io_out2_b_valid; // @[Crossbar.scala 28:24]
  wire [3:0] DeviceArbiter_io_out2_b_bits_id; // @[Crossbar.scala 28:24]
  wire  clint = io_in2_ar_bits_addr >= 32'h20000000 & io_in2_ar_bits_addr <= 32'h2000bfff | io_in2_aw_bits_addr >= 32'h20000000
     & io_in2_aw_bits_addr <= 32'h2000bfff; // @[Crossbar.scala 38:85]
  ICache ICache ( // @[Crossbar.scala 23:22]
    .clock(ICache_clock),
    .reset(ICache_reset),
    .io_in_ar_ready(ICache_io_in_ar_ready),
    .io_in_ar_valid(ICache_io_in_ar_valid),
    .io_in_ar_bits_addr(ICache_io_in_ar_bits_addr),
    .io_in_r_valid(ICache_io_in_r_valid),
    .io_in_r_bits_data(ICache_io_in_r_bits_data),
    .io_mem_ar_ready(ICache_io_mem_ar_ready),
    .io_mem_ar_valid(ICache_io_mem_ar_valid),
    .io_mem_ar_bits_addr(ICache_io_mem_ar_bits_addr),
    .io_mem_ar_bits_len(ICache_io_mem_ar_bits_len),
    .io_mem_r_ready(ICache_io_mem_r_ready),
    .io_mem_r_valid(ICache_io_mem_r_valid),
    .io_mem_r_bits_data(ICache_io_mem_r_bits_data),
    .io_mem_r_bits_last(ICache_io_mem_r_bits_last),
    .io_ram_bits_Q0(ICache_io_ram_bits_Q0),
    .io_ram_bits_Q1(ICache_io_ram_bits_Q1),
    .io_ram_bits_CEN(ICache_io_ram_bits_CEN),
    .io_ram_bits_WEN(ICache_io_ram_bits_WEN),
    .io_ram_bits_BWEN(ICache_io_ram_bits_BWEN),
    .io_ram_bits_A(ICache_io_ram_bits_A),
    .io_ram_bits_D(ICache_io_ram_bits_D),
    .io_ram_bits_WAY(ICache_io_ram_bits_WAY),
    .io_flush(ICache_io_flush),
    .io_hitrate(ICache_io_hitrate)
  );
  ICacheRAM ICacheRAM ( // @[Crossbar.scala 24:25]
    .clock(ICacheRAM_clock),
    .reset(ICacheRAM_reset),
    .io_bits_Q0(ICacheRAM_io_bits_Q0),
    .io_bits_Q1(ICacheRAM_io_bits_Q1),
    .io_bits_CEN(ICacheRAM_io_bits_CEN),
    .io_bits_WEN(ICacheRAM_io_bits_WEN),
    .io_bits_BWEN(ICacheRAM_io_bits_BWEN),
    .io_bits_A(ICacheRAM_io_bits_A),
    .io_bits_D(ICacheRAM_io_bits_D),
    .io_bits_WAY(ICacheRAM_io_bits_WAY)
  );
  DCache DCache ( // @[Crossbar.scala 25:22]
    .clock(DCache_clock),
    .reset(DCache_reset),
    .io_in_ar_ready(DCache_io_in_ar_ready),
    .io_in_ar_valid(DCache_io_in_ar_valid),
    .io_in_ar_bits_addr(DCache_io_in_ar_bits_addr),
    .io_in_r_valid(DCache_io_in_r_valid),
    .io_in_r_bits_data(DCache_io_in_r_bits_data),
    .io_in_aw_ready(DCache_io_in_aw_ready),
    .io_in_aw_valid(DCache_io_in_aw_valid),
    .io_in_aw_bits_addr(DCache_io_in_aw_bits_addr),
    .io_in_w_ready(DCache_io_in_w_ready),
    .io_in_w_valid(DCache_io_in_w_valid),
    .io_in_w_bits_data(DCache_io_in_w_bits_data),
    .io_in_w_bits_strb(DCache_io_in_w_bits_strb),
    .io_in_b_valid(DCache_io_in_b_valid),
    .io_mem_ar_ready(DCache_io_mem_ar_ready),
    .io_mem_ar_valid(DCache_io_mem_ar_valid),
    .io_mem_ar_bits_addr(DCache_io_mem_ar_bits_addr),
    .io_mem_ar_bits_len(DCache_io_mem_ar_bits_len),
    .io_mem_r_ready(DCache_io_mem_r_ready),
    .io_mem_r_valid(DCache_io_mem_r_valid),
    .io_mem_r_bits_data(DCache_io_mem_r_bits_data),
    .io_mem_aw_ready(DCache_io_mem_aw_ready),
    .io_mem_aw_valid(DCache_io_mem_aw_valid),
    .io_mem_aw_bits_addr(DCache_io_mem_aw_bits_addr),
    .io_mem_w_ready(DCache_io_mem_w_ready),
    .io_mem_w_valid(DCache_io_mem_w_valid),
    .io_mem_w_bits_data(DCache_io_mem_w_bits_data),
    .io_mem_w_bits_strb(DCache_io_mem_w_bits_strb),
    .io_mem_w_bits_last(DCache_io_mem_w_bits_last),
    .io_mem_b_ready(DCache_io_mem_b_ready),
    .io_mem_b_valid(DCache_io_mem_b_valid),
    .io_ram_bits_Q0(DCache_io_ram_bits_Q0),
    .io_ram_bits_Q1(DCache_io_ram_bits_Q1),
    .io_ram_bits_WEN(DCache_io_ram_bits_WEN),
    .io_ram_bits_BWEN(DCache_io_ram_bits_BWEN),
    .io_ram_bits_A(DCache_io_ram_bits_A),
    .io_ram_bits_D(DCache_io_ram_bits_D),
    .io_ram_bits_WAY(DCache_io_ram_bits_WAY),
    .io_flush(DCache_io_flush),
    .io_hitrate(DCache_io_hitrate),
    .io_uncache(DCache_io_uncache)
  );
  ICacheRAM ICacheRAM_1 ( // @[Crossbar.scala 26:25]
    .clock(ICacheRAM_1_clock),
    .reset(ICacheRAM_1_reset),
    .io_bits_Q0(ICacheRAM_1_io_bits_Q0),
    .io_bits_Q1(ICacheRAM_1_io_bits_Q1),
    .io_bits_CEN(ICacheRAM_1_io_bits_CEN),
    .io_bits_WEN(ICacheRAM_1_io_bits_WEN),
    .io_bits_BWEN(ICacheRAM_1_io_bits_BWEN),
    .io_bits_A(ICacheRAM_1_io_bits_A),
    .io_bits_D(ICacheRAM_1_io_bits_D),
    .io_bits_WAY(ICacheRAM_1_io_bits_WAY)
  );
  CacheArbiter CacheArbiter ( // @[Crossbar.scala 27:23]
    .io_ifu_ar_ready(CacheArbiter_io_ifu_ar_ready),
    .io_ifu_ar_valid(CacheArbiter_io_ifu_ar_valid),
    .io_ifu_ar_bits_addr(CacheArbiter_io_ifu_ar_bits_addr),
    .io_ifu_ar_bits_len(CacheArbiter_io_ifu_ar_bits_len),
    .io_ifu_r_valid(CacheArbiter_io_ifu_r_valid),
    .io_ifu_r_bits_data(CacheArbiter_io_ifu_r_bits_data),
    .io_ifu_r_bits_last(CacheArbiter_io_ifu_r_bits_last),
    .io_lsu_ar_ready(CacheArbiter_io_lsu_ar_ready),
    .io_lsu_ar_valid(CacheArbiter_io_lsu_ar_valid),
    .io_lsu_ar_bits_addr(CacheArbiter_io_lsu_ar_bits_addr),
    .io_lsu_ar_bits_len(CacheArbiter_io_lsu_ar_bits_len),
    .io_lsu_r_valid(CacheArbiter_io_lsu_r_valid),
    .io_lsu_r_bits_data(CacheArbiter_io_lsu_r_bits_data),
    .io_lsu_aw_ready(CacheArbiter_io_lsu_aw_ready),
    .io_lsu_aw_valid(CacheArbiter_io_lsu_aw_valid),
    .io_lsu_aw_bits_addr(CacheArbiter_io_lsu_aw_bits_addr),
    .io_lsu_w_ready(CacheArbiter_io_lsu_w_ready),
    .io_lsu_w_valid(CacheArbiter_io_lsu_w_valid),
    .io_lsu_w_bits_data(CacheArbiter_io_lsu_w_bits_data),
    .io_lsu_w_bits_strb(CacheArbiter_io_lsu_w_bits_strb),
    .io_lsu_w_bits_last(CacheArbiter_io_lsu_w_bits_last),
    .io_lsu_b_valid(CacheArbiter_io_lsu_b_valid),
    .io_out_ar_ready(CacheArbiter_io_out_ar_ready),
    .io_out_ar_valid(CacheArbiter_io_out_ar_valid),
    .io_out_ar_bits_addr(CacheArbiter_io_out_ar_bits_addr),
    .io_out_ar_bits_len(CacheArbiter_io_out_ar_bits_len),
    .io_out_ar_bits_size(CacheArbiter_io_out_ar_bits_size),
    .io_out_ar_bits_id(CacheArbiter_io_out_ar_bits_id),
    .io_out_r_ready(CacheArbiter_io_out_r_ready),
    .io_out_r_valid(CacheArbiter_io_out_r_valid),
    .io_out_r_bits_data(CacheArbiter_io_out_r_bits_data),
    .io_out_r_bits_last(CacheArbiter_io_out_r_bits_last),
    .io_out_r_bits_id(CacheArbiter_io_out_r_bits_id),
    .io_out_aw_ready(CacheArbiter_io_out_aw_ready),
    .io_out_aw_valid(CacheArbiter_io_out_aw_valid),
    .io_out_aw_bits_addr(CacheArbiter_io_out_aw_bits_addr),
    .io_out_w_ready(CacheArbiter_io_out_w_ready),
    .io_out_w_valid(CacheArbiter_io_out_w_valid),
    .io_out_w_bits_data(CacheArbiter_io_out_w_bits_data),
    .io_out_w_bits_strb(CacheArbiter_io_out_w_bits_strb),
    .io_out_w_bits_last(CacheArbiter_io_out_w_bits_last),
    .io_out_b_valid(CacheArbiter_io_out_b_valid)
  );
  DeviceArbiter DeviceArbiter ( // @[Crossbar.scala 28:24]
    .io_in_ar_ready(DeviceArbiter_io_in_ar_ready),
    .io_in_ar_valid(DeviceArbiter_io_in_ar_valid),
    .io_in_ar_bits_addr(DeviceArbiter_io_in_ar_bits_addr),
    .io_in_ar_bits_len(DeviceArbiter_io_in_ar_bits_len),
    .io_in_ar_bits_size(DeviceArbiter_io_in_ar_bits_size),
    .io_in_ar_bits_id(DeviceArbiter_io_in_ar_bits_id),
    .io_in_r_ready(DeviceArbiter_io_in_r_ready),
    .io_in_r_valid(DeviceArbiter_io_in_r_valid),
    .io_in_r_bits_data(DeviceArbiter_io_in_r_bits_data),
    .io_in_r_bits_last(DeviceArbiter_io_in_r_bits_last),
    .io_in_r_bits_id(DeviceArbiter_io_in_r_bits_id),
    .io_in_aw_ready(DeviceArbiter_io_in_aw_ready),
    .io_in_aw_valid(DeviceArbiter_io_in_aw_valid),
    .io_in_aw_bits_addr(DeviceArbiter_io_in_aw_bits_addr),
    .io_in_w_ready(DeviceArbiter_io_in_w_ready),
    .io_in_w_valid(DeviceArbiter_io_in_w_valid),
    .io_in_w_bits_data(DeviceArbiter_io_in_w_bits_data),
    .io_in_w_bits_strb(DeviceArbiter_io_in_w_bits_strb),
    .io_in_w_bits_last(DeviceArbiter_io_in_w_bits_last),
    .io_in_b_valid(DeviceArbiter_io_in_b_valid),
    .io_out1_ar_ready(DeviceArbiter_io_out1_ar_ready),
    .io_out1_ar_valid(DeviceArbiter_io_out1_ar_valid),
    .io_out1_ar_bits_addr(DeviceArbiter_io_out1_ar_bits_addr),
    .io_out1_ar_bits_len(DeviceArbiter_io_out1_ar_bits_len),
    .io_out1_ar_bits_size(DeviceArbiter_io_out1_ar_bits_size),
    .io_out1_ar_bits_id(DeviceArbiter_io_out1_ar_bits_id),
    .io_out1_r_ready(DeviceArbiter_io_out1_r_ready),
    .io_out1_r_valid(DeviceArbiter_io_out1_r_valid),
    .io_out1_r_bits_data(DeviceArbiter_io_out1_r_bits_data),
    .io_out1_r_bits_last(DeviceArbiter_io_out1_r_bits_last),
    .io_out1_r_bits_id(DeviceArbiter_io_out1_r_bits_id),
    .io_out1_aw_ready(DeviceArbiter_io_out1_aw_ready),
    .io_out1_aw_valid(DeviceArbiter_io_out1_aw_valid),
    .io_out1_aw_bits_addr(DeviceArbiter_io_out1_aw_bits_addr),
    .io_out1_w_ready(DeviceArbiter_io_out1_w_ready),
    .io_out1_w_valid(DeviceArbiter_io_out1_w_valid),
    .io_out1_w_bits_data(DeviceArbiter_io_out1_w_bits_data),
    .io_out1_w_bits_strb(DeviceArbiter_io_out1_w_bits_strb),
    .io_out1_w_bits_last(DeviceArbiter_io_out1_w_bits_last),
    .io_out1_b_ready(DeviceArbiter_io_out1_b_ready),
    .io_out1_b_valid(DeviceArbiter_io_out1_b_valid),
    .io_out2_ar_ready(DeviceArbiter_io_out2_ar_ready),
    .io_out2_ar_valid(DeviceArbiter_io_out2_ar_valid),
    .io_out2_ar_bits_addr(DeviceArbiter_io_out2_ar_bits_addr),
    .io_out2_ar_bits_len(DeviceArbiter_io_out2_ar_bits_len),
    .io_out2_ar_bits_size(DeviceArbiter_io_out2_ar_bits_size),
    .io_out2_ar_bits_id(DeviceArbiter_io_out2_ar_bits_id),
    .io_out2_r_ready(DeviceArbiter_io_out2_r_ready),
    .io_out2_r_valid(DeviceArbiter_io_out2_r_valid),
    .io_out2_r_bits_data(DeviceArbiter_io_out2_r_bits_data),
    .io_out2_r_bits_last(DeviceArbiter_io_out2_r_bits_last),
    .io_out2_r_bits_id(DeviceArbiter_io_out2_r_bits_id),
    .io_out2_aw_ready(DeviceArbiter_io_out2_aw_ready),
    .io_out2_aw_valid(DeviceArbiter_io_out2_aw_valid),
    .io_out2_aw_bits_addr(DeviceArbiter_io_out2_aw_bits_addr),
    .io_out2_aw_bits_id(DeviceArbiter_io_out2_aw_bits_id),
    .io_out2_w_ready(DeviceArbiter_io_out2_w_ready),
    .io_out2_w_valid(DeviceArbiter_io_out2_w_valid),
    .io_out2_w_bits_data(DeviceArbiter_io_out2_w_bits_data),
    .io_out2_w_bits_strb(DeviceArbiter_io_out2_w_bits_strb),
    .io_out2_w_bits_last(DeviceArbiter_io_out2_w_bits_last),
    .io_out2_b_ready(DeviceArbiter_io_out2_b_ready),
    .io_out2_b_valid(DeviceArbiter_io_out2_b_valid),
    .io_out2_b_bits_id(DeviceArbiter_io_out2_b_bits_id)
  );
  assign io_in1_r_valid = ICache_io_in_r_valid; // @[Crossbar.scala 30:18 41:9]
  assign io_in1_r_bits_data = ICache_io_in_r_bits_data; // @[Crossbar.scala 30:18 41:9]
  assign io_in2_ar_ready = DCache_io_in_ar_ready; // @[Crossbar.scala 31:18 48:9]
  assign io_in2_r_valid = DCache_io_in_r_valid; // @[Crossbar.scala 31:18 48:9]
  assign io_in2_r_bits_data = DCache_io_in_r_bits_data; // @[Crossbar.scala 31:18 48:9]
  assign io_in2_aw_ready = DCache_io_in_aw_ready; // @[Crossbar.scala 31:18 48:9]
  assign io_in2_w_ready = DCache_io_in_w_ready; // @[Crossbar.scala 31:18 48:9]
  assign io_in2_b_valid = DCache_io_in_b_valid; // @[Crossbar.scala 31:18 48:9]
  assign io_out1_ar_valid = DeviceArbiter_io_out1_ar_valid; // @[Crossbar.scala 60:12]
  assign io_out1_ar_bits_addr = DeviceArbiter_io_out1_ar_bits_addr; // @[Crossbar.scala 60:12]
  assign io_out1_ar_bits_len = DeviceArbiter_io_out1_ar_bits_len; // @[Crossbar.scala 60:12]
  assign io_out1_ar_bits_size = DeviceArbiter_io_out1_ar_bits_size; // @[Crossbar.scala 60:12]
  assign io_out1_ar_bits_id = DeviceArbiter_io_out1_ar_bits_id; // @[Crossbar.scala 60:12]
  assign io_out1_r_ready = DeviceArbiter_io_out1_r_ready; // @[Crossbar.scala 60:12]
  assign io_out1_aw_valid = DeviceArbiter_io_out1_aw_valid; // @[Crossbar.scala 60:12]
  assign io_out1_aw_bits_addr = DeviceArbiter_io_out1_aw_bits_addr; // @[Crossbar.scala 60:12]
  assign io_out1_w_valid = DeviceArbiter_io_out1_w_valid; // @[Crossbar.scala 60:12]
  assign io_out1_w_bits_data = DeviceArbiter_io_out1_w_bits_data; // @[Crossbar.scala 60:12]
  assign io_out1_w_bits_strb = DeviceArbiter_io_out1_w_bits_strb; // @[Crossbar.scala 60:12]
  assign io_out1_w_bits_last = DeviceArbiter_io_out1_w_bits_last; // @[Crossbar.scala 60:12]
  assign io_out1_b_ready = DeviceArbiter_io_out1_b_ready; // @[Crossbar.scala 60:12]
  assign io_out2_ar_valid = DeviceArbiter_io_out2_ar_valid; // @[Crossbar.scala 61:12]
  assign io_out2_ar_bits_addr = DeviceArbiter_io_out2_ar_bits_addr; // @[Crossbar.scala 61:12]
  assign io_out2_ar_bits_len = DeviceArbiter_io_out2_ar_bits_len; // @[Crossbar.scala 61:12]
  assign io_out2_ar_bits_size = DeviceArbiter_io_out2_ar_bits_size; // @[Crossbar.scala 61:12]
  assign io_out2_ar_bits_id = DeviceArbiter_io_out2_ar_bits_id; // @[Crossbar.scala 61:12]
  assign io_out2_r_ready = DeviceArbiter_io_out2_r_ready; // @[Crossbar.scala 61:12]
  assign io_out2_aw_valid = DeviceArbiter_io_out2_aw_valid; // @[Crossbar.scala 61:12]
  assign io_out2_aw_bits_addr = DeviceArbiter_io_out2_aw_bits_addr; // @[Crossbar.scala 61:12]
  assign io_out2_aw_bits_id = DeviceArbiter_io_out2_aw_bits_id; // @[Crossbar.scala 61:12]
  assign io_out2_w_valid = DeviceArbiter_io_out2_w_valid; // @[Crossbar.scala 61:12]
  assign io_out2_w_bits_data = DeviceArbiter_io_out2_w_bits_data; // @[Crossbar.scala 61:12]
  assign io_out2_w_bits_strb = DeviceArbiter_io_out2_w_bits_strb; // @[Crossbar.scala 61:12]
  assign io_out2_w_bits_last = DeviceArbiter_io_out2_w_bits_last; // @[Crossbar.scala 61:12]
  assign io_out2_b_ready = DeviceArbiter_io_out2_b_ready; // @[Crossbar.scala 61:12]
  assign io_hitrate_i = ICache_io_hitrate; // @[Crossbar.scala 33:17]
  assign io_hitrate_d = DCache_io_hitrate; // @[Crossbar.scala 34:17]
  assign ICache_clock = clock;
  assign ICache_reset = reset;
  assign ICache_io_in_ar_valid = io_in1_ar_valid; // @[Crossbar.scala 30:18 40:11]
  assign ICache_io_in_ar_bits_addr = io_in1_ar_bits_addr; // @[Crossbar.scala 30:18 40:11]
  assign ICache_io_mem_ar_ready = CacheArbiter_io_ifu_ar_ready; // @[Crossbar.scala 55:16]
  assign ICache_io_mem_r_valid = CacheArbiter_io_ifu_r_valid; // @[Crossbar.scala 55:16]
  assign ICache_io_mem_r_bits_data = CacheArbiter_io_ifu_r_bits_data; // @[Crossbar.scala 55:16]
  assign ICache_io_mem_r_bits_last = CacheArbiter_io_ifu_r_bits_last; // @[Crossbar.scala 55:16]
  assign ICache_io_ram_bits_Q0 = ICacheRAM_io_bits_Q0; // @[Crossbar.scala 42:15]
  assign ICache_io_ram_bits_Q1 = ICacheRAM_io_bits_Q1; // @[Crossbar.scala 42:15]
  assign ICache_io_flush = io_flush_i; // @[Crossbar.scala 44:17]
  assign ICacheRAM_clock = clock;
  assign ICacheRAM_reset = reset;
  assign ICacheRAM_io_bits_CEN = ICache_io_ram_bits_CEN; // @[Crossbar.scala 42:15]
  assign ICacheRAM_io_bits_WEN = ICache_io_ram_bits_WEN; // @[Crossbar.scala 42:15]
  assign ICacheRAM_io_bits_BWEN = ICache_io_ram_bits_BWEN; // @[Crossbar.scala 42:15]
  assign ICacheRAM_io_bits_A = ICache_io_ram_bits_A; // @[Crossbar.scala 42:15]
  assign ICacheRAM_io_bits_D = ICache_io_ram_bits_D; // @[Crossbar.scala 42:15]
  assign ICacheRAM_io_bits_WAY = ICache_io_ram_bits_WAY; // @[Crossbar.scala 42:15]
  assign DCache_clock = clock;
  assign DCache_reset = reset;
  assign DCache_io_in_ar_valid = io_in2_ar_valid; // @[Crossbar.scala 31:18 47:11]
  assign DCache_io_in_ar_bits_addr = io_in2_ar_bits_addr; // @[Crossbar.scala 31:18 47:11]
  assign DCache_io_in_aw_valid = io_in2_aw_valid; // @[Crossbar.scala 31:18 47:11]
  assign DCache_io_in_aw_bits_addr = io_in2_aw_bits_addr; // @[Crossbar.scala 31:18 47:11]
  assign DCache_io_in_w_valid = io_in2_w_valid; // @[Crossbar.scala 31:18 47:11]
  assign DCache_io_in_w_bits_data = io_in2_w_bits_data; // @[Crossbar.scala 31:18 47:11]
  assign DCache_io_in_w_bits_strb = io_in2_w_bits_strb; // @[Crossbar.scala 31:18 47:11]
  assign DCache_io_mem_ar_ready = CacheArbiter_io_lsu_ar_ready; // @[Crossbar.scala 56:16]
  assign DCache_io_mem_r_valid = CacheArbiter_io_lsu_r_valid; // @[Crossbar.scala 56:16]
  assign DCache_io_mem_r_bits_data = CacheArbiter_io_lsu_r_bits_data; // @[Crossbar.scala 56:16]
  assign DCache_io_mem_aw_ready = CacheArbiter_io_lsu_aw_ready; // @[Crossbar.scala 56:16]
  assign DCache_io_mem_w_ready = CacheArbiter_io_lsu_w_ready; // @[Crossbar.scala 56:16]
  assign DCache_io_mem_b_valid = CacheArbiter_io_lsu_b_valid; // @[Crossbar.scala 56:16]
  assign DCache_io_ram_bits_Q0 = ICacheRAM_1_io_bits_Q0; // @[Crossbar.scala 49:15]
  assign DCache_io_ram_bits_Q1 = ICacheRAM_1_io_bits_Q1; // @[Crossbar.scala 49:15]
  assign DCache_io_flush = io_flush_d; // @[Crossbar.scala 51:17]
  assign DCache_io_uncache = io_in2_ar_bits_addr >= 32'ha0000000 | io_in2_aw_bits_addr >= 32'ha0000000 | clint; // @[Crossbar.scala 52:95]
  assign ICacheRAM_1_clock = clock;
  assign ICacheRAM_1_reset = reset;
  assign ICacheRAM_1_io_bits_CEN = 1'h0; // @[Crossbar.scala 49:15]
  assign ICacheRAM_1_io_bits_WEN = DCache_io_ram_bits_WEN; // @[Crossbar.scala 49:15]
  assign ICacheRAM_1_io_bits_BWEN = DCache_io_ram_bits_BWEN; // @[Crossbar.scala 49:15]
  assign ICacheRAM_1_io_bits_A = DCache_io_ram_bits_A; // @[Crossbar.scala 49:15]
  assign ICacheRAM_1_io_bits_D = DCache_io_ram_bits_D; // @[Crossbar.scala 49:15]
  assign ICacheRAM_1_io_bits_WAY = DCache_io_ram_bits_WAY; // @[Crossbar.scala 49:15]
  assign CacheArbiter_io_ifu_ar_valid = ICache_io_mem_ar_valid; // @[Crossbar.scala 55:16]
  assign CacheArbiter_io_ifu_ar_bits_addr = ICache_io_mem_ar_bits_addr; // @[Crossbar.scala 55:16]
  assign CacheArbiter_io_ifu_ar_bits_len = ICache_io_mem_ar_bits_len; // @[Crossbar.scala 55:16]
  assign CacheArbiter_io_lsu_ar_valid = DCache_io_mem_ar_valid; // @[Crossbar.scala 56:16]
  assign CacheArbiter_io_lsu_ar_bits_addr = DCache_io_mem_ar_bits_addr; // @[Crossbar.scala 56:16]
  assign CacheArbiter_io_lsu_ar_bits_len = DCache_io_mem_ar_bits_len; // @[Crossbar.scala 56:16]
  assign CacheArbiter_io_lsu_aw_valid = DCache_io_mem_aw_valid; // @[Crossbar.scala 56:16]
  assign CacheArbiter_io_lsu_aw_bits_addr = DCache_io_mem_aw_bits_addr; // @[Crossbar.scala 56:16]
  assign CacheArbiter_io_lsu_w_valid = DCache_io_mem_w_valid; // @[Crossbar.scala 56:16]
  assign CacheArbiter_io_lsu_w_bits_data = DCache_io_mem_w_bits_data; // @[Crossbar.scala 56:16]
  assign CacheArbiter_io_lsu_w_bits_strb = DCache_io_mem_w_bits_strb; // @[Crossbar.scala 56:16]
  assign CacheArbiter_io_lsu_w_bits_last = DCache_io_mem_w_bits_last; // @[Crossbar.scala 56:16]
  assign CacheArbiter_io_out_ar_ready = DeviceArbiter_io_in_ar_ready; // @[Crossbar.scala 59:16]
  assign CacheArbiter_io_out_r_valid = DeviceArbiter_io_in_r_valid; // @[Crossbar.scala 59:16]
  assign CacheArbiter_io_out_r_bits_data = DeviceArbiter_io_in_r_bits_data; // @[Crossbar.scala 59:16]
  assign CacheArbiter_io_out_r_bits_last = DeviceArbiter_io_in_r_bits_last; // @[Crossbar.scala 59:16]
  assign CacheArbiter_io_out_r_bits_id = DeviceArbiter_io_in_r_bits_id; // @[Crossbar.scala 59:16]
  assign CacheArbiter_io_out_aw_ready = DeviceArbiter_io_in_aw_ready; // @[Crossbar.scala 59:16]
  assign CacheArbiter_io_out_w_ready = DeviceArbiter_io_in_w_ready; // @[Crossbar.scala 59:16]
  assign CacheArbiter_io_out_b_valid = DeviceArbiter_io_in_b_valid; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_in_ar_valid = CacheArbiter_io_out_ar_valid; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_in_ar_bits_addr = CacheArbiter_io_out_ar_bits_addr; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_in_ar_bits_len = CacheArbiter_io_out_ar_bits_len; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_in_ar_bits_size = CacheArbiter_io_out_ar_bits_size; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_in_ar_bits_id = CacheArbiter_io_out_ar_bits_id; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_in_r_ready = CacheArbiter_io_out_r_ready; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_in_aw_valid = CacheArbiter_io_out_aw_valid; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_in_aw_bits_addr = CacheArbiter_io_out_aw_bits_addr; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_in_w_valid = CacheArbiter_io_out_w_valid; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_in_w_bits_data = CacheArbiter_io_out_w_bits_data; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_in_w_bits_strb = CacheArbiter_io_out_w_bits_strb; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_in_w_bits_last = CacheArbiter_io_out_w_bits_last; // @[Crossbar.scala 59:16]
  assign DeviceArbiter_io_out1_ar_ready = io_out1_ar_ready; // @[Crossbar.scala 60:12]
  assign DeviceArbiter_io_out1_r_valid = io_out1_r_valid; // @[Crossbar.scala 60:12]
  assign DeviceArbiter_io_out1_r_bits_data = io_out1_r_bits_data; // @[Crossbar.scala 60:12]
  assign DeviceArbiter_io_out1_r_bits_last = io_out1_r_bits_last; // @[Crossbar.scala 60:12]
  assign DeviceArbiter_io_out1_r_bits_id = io_out1_r_bits_id; // @[Crossbar.scala 60:12]
  assign DeviceArbiter_io_out1_aw_ready = io_out1_aw_ready; // @[Crossbar.scala 60:12]
  assign DeviceArbiter_io_out1_w_ready = io_out1_w_ready; // @[Crossbar.scala 60:12]
  assign DeviceArbiter_io_out1_b_valid = io_out1_b_valid; // @[Crossbar.scala 60:12]
  assign DeviceArbiter_io_out2_ar_ready = io_out2_ar_ready; // @[Crossbar.scala 61:12]
  assign DeviceArbiter_io_out2_r_valid = io_out2_r_valid; // @[Crossbar.scala 61:12]
  assign DeviceArbiter_io_out2_r_bits_data = io_out2_r_bits_data; // @[Crossbar.scala 61:12]
  assign DeviceArbiter_io_out2_r_bits_last = io_out2_r_bits_last; // @[Crossbar.scala 61:12]
  assign DeviceArbiter_io_out2_r_bits_id = io_out2_r_bits_id; // @[Crossbar.scala 61:12]
  assign DeviceArbiter_io_out2_aw_ready = io_out2_aw_ready; // @[Crossbar.scala 61:12]
  assign DeviceArbiter_io_out2_w_ready = io_out2_w_ready; // @[Crossbar.scala 61:12]
  assign DeviceArbiter_io_out2_b_valid = io_out2_b_valid; // @[Crossbar.scala 61:12]
  assign DeviceArbiter_io_out2_b_bits_id = io_out2_b_bits_id; // @[Crossbar.scala 61:12]
endmodule

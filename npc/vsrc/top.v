module vga_ctrl(
  input         clock,
  input         reset,
  input  [23:0] io_vga_data,
  output [9:0]  io_h_addr,
  output [9:0]  io_v_addr,
  output        io_hsync,
  output        io_vsync,
  output        io_valid,
  output [7:0]  io_vga_r,
  output [7:0]  io_vga_g,
  output [7:0]  io_vga_b
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [9:0] x_cnt; // @[top.scala 70:22]
  reg [9:0] y_cnt; // @[top.scala 71:22]
  wire  _T = x_cnt == 10'h320; // @[top.scala 73:15]
  wire [9:0] _x_cnt_T_1 = x_cnt + 10'h1; // @[top.scala 76:21]
  wire [9:0] _y_cnt_T_1 = y_cnt + 10'h1; // @[top.scala 81:21]
  wire  h_valid = x_cnt > 10'h90 & x_cnt <= 10'h310; // @[top.scala 85:39]
  wire  v_valid = y_cnt > 10'h23 & y_cnt <= 10'h203; // @[top.scala 86:39]
  wire [9:0] _io_h_addr_T_1 = x_cnt - 10'h91; // @[top.scala 88:33]
  wire [9:0] _io_v_addr_T_1 = y_cnt - 10'h24; // @[top.scala 89:33]
  assign io_h_addr = h_valid ? _io_h_addr_T_1 : 10'h0; // @[top.scala 88:19]
  assign io_v_addr = v_valid ? _io_v_addr_T_1 : 10'h0; // @[top.scala 89:19]
  assign io_hsync = x_cnt > 10'h60; // @[top.scala 83:21]
  assign io_vsync = y_cnt > 10'h2; // @[top.scala 84:21]
  assign io_valid = h_valid & v_valid; // @[top.scala 87:23]
  assign io_vga_r = io_vga_data[23:16]; // @[top.scala 90:26]
  assign io_vga_g = io_vga_data[15:8]; // @[top.scala 91:26]
  assign io_vga_b = io_vga_data[7:0]; // @[top.scala 92:26]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 70:22]
      x_cnt <= 10'h1; // @[top.scala 70:22]
    end else if (x_cnt == 10'h320) begin // @[top.scala 73:26]
      x_cnt <= 10'h1; // @[top.scala 74:14]
    end else begin
      x_cnt <= _x_cnt_T_1; // @[top.scala 76:14]
    end
    if (reset) begin // @[top.scala 71:22]
      y_cnt <= 10'h1; // @[top.scala 71:22]
    end else if (y_cnt == 10'h20d & _T) begin // @[top.scala 78:47]
      y_cnt <= 10'h1; // @[top.scala 79:14]
    end else if (_T) begin // @[top.scala 80:32]
      y_cnt <= _y_cnt_T_1; // @[top.scala 81:14]
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
  _RAND_0 = {1{`RANDOM}};
  x_cnt = _RAND_0[9:0];
  _RAND_1 = {1{`RANDOM}};
  y_cnt = _RAND_1[9:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module vmem(
  input         clock,
  input  [9:0]  io_h_addr,
  input  [8:0]  io_v_addr,
  output [23:0] io_vga_data
);
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [23:0] vga_mem [0:524286]; // @[top.scala 41:30]
  wire [23:0] vga_mem_rdwrPort_data; // @[top.scala 41:30]
  wire [18:0] vga_mem_rdwrPort_addr; // @[top.scala 41:30]
  reg [18:0] vga_mem_rdwrPort_addr_pipe_0;
  assign vga_mem_rdwrPort_addr = vga_mem_rdwrPort_addr_pipe_0;
  `ifndef RANDOMIZE_GARBAGE_ASSIGN
  assign vga_mem_rdwrPort_data = vga_mem[vga_mem_rdwrPort_addr]; // @[top.scala 41:30]
  `else
  assign vga_mem_rdwrPort_data = vga_mem_rdwrPort_addr >= 19'h7ffff ? _RAND_0[23:0] : vga_mem[vga_mem_rdwrPort_addr]; // @[top.scala 41:30]
  `endif // RANDOMIZE_GARBAGE_ASSIGN
  assign io_vga_data = vga_mem_rdwrPort_data; // @[top.scala 46:16]
  always @(posedge clock) begin
    vga_mem_rdwrPort_addr_pipe_0 <= {io_h_addr,io_v_addr};
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
  integer initvar;
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
`ifdef RANDOMIZE_GARBAGE_ASSIGN
  _RAND_0 = {1{`RANDOM}};
`endif // RANDOMIZE_GARBAGE_ASSIGN
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  vga_mem_rdwrPort_addr_pipe_0 = _RAND_1[18:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
  $readmemh("memoryFile", vga_mem);
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module top(
  input        clock,
  input        reset,
  output       io_VGA_HSYNC,
  output       io_VGA_VSYNC,
  output       io_VGA_BLANK_N,
  output [7:0] io_VGA_R,
  output [7:0] io_VGA_G,
  output [7:0] io_VGA_B
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  v1_clock; // @[top.scala 18:18]
  wire  v1_reset; // @[top.scala 18:18]
  wire [23:0] v1_io_vga_data; // @[top.scala 18:18]
  wire [9:0] v1_io_h_addr; // @[top.scala 18:18]
  wire [9:0] v1_io_v_addr; // @[top.scala 18:18]
  wire  v1_io_hsync; // @[top.scala 18:18]
  wire  v1_io_vsync; // @[top.scala 18:18]
  wire  v1_io_valid; // @[top.scala 18:18]
  wire [7:0] v1_io_vga_r; // @[top.scala 18:18]
  wire [7:0] v1_io_vga_g; // @[top.scala 18:18]
  wire [7:0] v1_io_vga_b; // @[top.scala 18:18]
  wire  vm_clock; // @[top.scala 29:18]
  wire [9:0] vm_io_h_addr; // @[top.scala 29:18]
  wire [8:0] vm_io_v_addr; // @[top.scala 29:18]
  wire [23:0] vm_io_vga_data; // @[top.scala 29:18]
  reg [9:0] h_addr; // @[top.scala 14:19]
  reg [9:0] v_addr; // @[top.scala 15:19]
  reg [23:0] vga_data; // @[top.scala 16:21]
  vga_ctrl v1 ( // @[top.scala 18:18]
    .clock(v1_clock),
    .reset(v1_reset),
    .io_vga_data(v1_io_vga_data),
    .io_h_addr(v1_io_h_addr),
    .io_v_addr(v1_io_v_addr),
    .io_hsync(v1_io_hsync),
    .io_vsync(v1_io_vsync),
    .io_valid(v1_io_valid),
    .io_vga_r(v1_io_vga_r),
    .io_vga_g(v1_io_vga_g),
    .io_vga_b(v1_io_vga_b)
  );
  vmem vm ( // @[top.scala 29:18]
    .clock(vm_clock),
    .io_h_addr(vm_io_h_addr),
    .io_v_addr(vm_io_v_addr),
    .io_vga_data(vm_io_vga_data)
  );
  assign io_VGA_HSYNC = v1_io_hsync; // @[top.scala 22:17]
  assign io_VGA_VSYNC = v1_io_vsync; // @[top.scala 23:17]
  assign io_VGA_BLANK_N = v1_io_valid; // @[top.scala 24:19]
  assign io_VGA_R = v1_io_vga_r; // @[top.scala 25:13]
  assign io_VGA_G = v1_io_vga_g; // @[top.scala 26:13]
  assign io_VGA_B = v1_io_vga_b; // @[top.scala 27:13]
  assign v1_clock = clock;
  assign v1_reset = reset;
  assign v1_io_vga_data = vga_data; // @[top.scala 19:19]
  assign vm_clock = clock;
  assign vm_io_h_addr = h_addr; // @[top.scala 30:17]
  assign vm_io_v_addr = v_addr[8:0]; // @[top.scala 31:25]
  always @(posedge clock) begin
    h_addr <= v1_io_h_addr; // @[top.scala 20:11]
    v_addr <= v1_io_v_addr; // @[top.scala 21:11]
    vga_data <= vm_io_vga_data; // @[top.scala 32:13]
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
  _RAND_0 = {1{`RANDOM}};
  h_addr = _RAND_0[9:0];
  _RAND_1 = {1{`RANDOM}};
  v_addr = _RAND_1[9:0];
  _RAND_2 = {1{`RANDOM}};
  vga_data = _RAND_2[23:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

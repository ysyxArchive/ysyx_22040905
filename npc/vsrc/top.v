module vga_ctrl(
  input   clock,
  input   reset,
  output  io_hsync,
  output  io_vsync,
  output  io_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [9:0] x_cnt; // @[vga.scala 100:22]
  reg [9:0] y_cnt; // @[vga.scala 101:22]
  wire  _T = x_cnt == 10'h320; // @[vga.scala 103:15]
  wire [9:0] _x_cnt_T_1 = x_cnt + 10'h1; // @[vga.scala 106:21]
  wire [9:0] _y_cnt_T_1 = y_cnt + 10'h1; // @[vga.scala 111:21]
  wire  h_valid = x_cnt > 10'h90 & x_cnt <= 10'h310; // @[vga.scala 115:39]
  wire  v_valid = y_cnt > 10'h23 & y_cnt <= 10'h203; // @[vga.scala 116:39]
  assign io_hsync = x_cnt > 10'h60; // @[vga.scala 113:21]
  assign io_vsync = y_cnt > 10'h2; // @[vga.scala 114:21]
  assign io_valid = h_valid & v_valid; // @[vga.scala 117:23]
  always @(posedge clock) begin
    if (reset) begin // @[vga.scala 100:22]
      x_cnt <= 10'h1; // @[vga.scala 100:22]
    end else if (x_cnt == 10'h320) begin // @[vga.scala 103:26]
      x_cnt <= 10'h1; // @[vga.scala 104:14]
    end else begin
      x_cnt <= _x_cnt_T_1; // @[vga.scala 106:14]
    end
    if (reset) begin // @[vga.scala 101:22]
      y_cnt <= 10'h1; // @[vga.scala 101:22]
    end else if (y_cnt == 10'h20d & _T) begin // @[vga.scala 108:47]
      y_cnt <= 10'h1; // @[vga.scala 109:14]
    end else if (_T) begin // @[vga.scala 110:32]
      y_cnt <= _y_cnt_T_1; // @[vga.scala 111:14]
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
module vga(
  input   clock,
  input   reset,
  output  io_VGA_HSYNC,
  output  io_VGA_VSYNC,
  output  io_VGA_BLANK_N
);
  wire  v1_clock; // @[vga.scala 20:18]
  wire  v1_reset; // @[vga.scala 20:18]
  wire  v1_io_hsync; // @[vga.scala 20:18]
  wire  v1_io_vsync; // @[vga.scala 20:18]
  wire  v1_io_valid; // @[vga.scala 20:18]
  vga_ctrl v1 ( // @[vga.scala 20:18]
    .clock(v1_clock),
    .reset(v1_reset),
    .io_hsync(v1_io_hsync),
    .io_vsync(v1_io_vsync),
    .io_valid(v1_io_valid)
  );
  assign io_VGA_HSYNC = v1_io_hsync; // @[vga.scala 24:17]
  assign io_VGA_VSYNC = v1_io_vsync; // @[vga.scala 25:17]
  assign io_VGA_BLANK_N = v1_io_valid; // @[vga.scala 26:19]
  assign v1_clock = clock;
  assign v1_reset = reset;
endmodule
module ps2_keyboard(
  input        clock,
  input        io_ps2_clk,
  input        io_ps2_data,
  input        io_nextdata_n,
  output [7:0] io_data,
  output       io_ready
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
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
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [31:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
`endif // RANDOMIZE_REG_INIT
  reg  rea; // @[ps2.scala 124:16]
  reg  buffer_0; // @[ps2.scala 132:19]
  reg  buffer_1; // @[ps2.scala 132:19]
  reg  buffer_2; // @[ps2.scala 132:19]
  reg  buffer_3; // @[ps2.scala 132:19]
  reg  buffer_4; // @[ps2.scala 132:19]
  reg  buffer_5; // @[ps2.scala 132:19]
  reg  buffer_6; // @[ps2.scala 132:19]
  reg  buffer_7; // @[ps2.scala 132:19]
  reg  buffer_8; // @[ps2.scala 132:19]
  reg  buffer_9; // @[ps2.scala 132:19]
  reg [7:0] fifo_0; // @[ps2.scala 133:17]
  reg [7:0] fifo_1; // @[ps2.scala 133:17]
  reg [7:0] fifo_2; // @[ps2.scala 133:17]
  reg [7:0] fifo_3; // @[ps2.scala 133:17]
  reg [7:0] fifo_4; // @[ps2.scala 133:17]
  reg [7:0] fifo_5; // @[ps2.scala 133:17]
  reg [7:0] fifo_6; // @[ps2.scala 133:17]
  reg [7:0] fifo_7; // @[ps2.scala 133:17]
  reg [2:0] w_ptr; // @[ps2.scala 134:18]
  reg [2:0] r_ptr; // @[ps2.scala 135:18]
  reg [3:0] count; // @[ps2.scala 136:18]
  reg [2:0] ps2_clk_sync; // @[ps2.scala 137:25]
  wire [1:0] ps2_clk_sync_hi = ps2_clk_sync[1:0]; // @[ps2.scala 139:35]
  wire  sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1]; // @[ps2.scala 141:30]
  wire [2:0] _r_ptr_T_1 = r_ptr + 3'h1; // @[ps2.scala 151:29]
  wire  _GEN_0 = w_ptr == _r_ptr_T_1 ? 1'h0 : rea; // @[ps2.scala 152:42 ps2.scala 153:24 ps2.scala 124:16]
  wire  _GEN_3 = ~io_nextdata_n ? _GEN_0 : rea; // @[ps2.scala 150:38 ps2.scala 124:16]
  wire  _GEN_6 = rea ? _GEN_3 : rea; // @[ps2.scala 149:24 ps2.scala 124:16]
  wire [7:0] _fifo_T = {buffer_8,buffer_7,buffer_6,buffer_5,buffer_4,buffer_3,buffer_2,buffer_1}; // @[Cat.scala 30:58]
  wire [2:0] _w_ptr_T_1 = w_ptr + 3'h1; // @[ps2.scala 162:33]
  wire  _GEN_25 = ~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3
     ^ buffer_2 ^ buffer_1) | _GEN_6; // @[ps2.scala 160:162 ps2.scala 163:24]
  wire [3:0] _count_T_1 = count + 4'h1; // @[ps2.scala 169:29]
  wire [7:0] _GEN_106 = 3'h1 == r_ptr ? fifo_1 : fifo_0; // @[ps2.scala 173:12 ps2.scala 173:12]
  wire [7:0] _GEN_107 = 3'h2 == r_ptr ? fifo_2 : _GEN_106; // @[ps2.scala 173:12 ps2.scala 173:12]
  wire [7:0] _GEN_108 = 3'h3 == r_ptr ? fifo_3 : _GEN_107; // @[ps2.scala 173:12 ps2.scala 173:12]
  wire [7:0] _GEN_109 = 3'h4 == r_ptr ? fifo_4 : _GEN_108; // @[ps2.scala 173:12 ps2.scala 173:12]
  wire [7:0] _GEN_110 = 3'h5 == r_ptr ? fifo_5 : _GEN_109; // @[ps2.scala 173:12 ps2.scala 173:12]
  wire [7:0] _GEN_111 = 3'h6 == r_ptr ? fifo_6 : _GEN_110; // @[ps2.scala 173:12 ps2.scala 173:12]
  assign io_data = 3'h7 == r_ptr ? fifo_7 : _GEN_111; // @[ps2.scala 173:12 ps2.scala 173:12]
  assign io_ready = rea; // @[ps2.scala 142:24 ps2.scala 130:13]
  always @(posedge clock) begin
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        rea <= _GEN_25;
      end else begin
        rea <= _GEN_6;
      end
    end else begin
      rea <= _GEN_6;
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h0 == count) begin // @[ps2.scala 168:30]
          buffer_0 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h1 == count) begin // @[ps2.scala 168:30]
          buffer_1 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h2 == count) begin // @[ps2.scala 168:30]
          buffer_2 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h3 == count) begin // @[ps2.scala 168:30]
          buffer_3 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h4 == count) begin // @[ps2.scala 168:30]
          buffer_4 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h5 == count) begin // @[ps2.scala 168:30]
          buffer_5 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h6 == count) begin // @[ps2.scala 168:30]
          buffer_6 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h7 == count) begin // @[ps2.scala 168:30]
          buffer_7 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h8 == count) begin // @[ps2.scala 168:30]
          buffer_8 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h9 == count) begin // @[ps2.scala 168:30]
          buffer_9 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h0 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_0 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h1 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_1 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h2 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_2 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h3 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_3 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h4 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_4 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h5 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_5 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h6 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_6 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h7 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_7 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          w_ptr <= _w_ptr_T_1; // @[ps2.scala 162:26]
        end
      end
    end
    if (rea) begin // @[ps2.scala 149:24]
      if (~io_nextdata_n) begin // @[ps2.scala 150:38]
        r_ptr <= _r_ptr_T_1; // @[ps2.scala 151:22]
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        count <= 4'h0; // @[ps2.scala 166:22]
      end else begin
        count <= _count_T_1; // @[ps2.scala 169:22]
      end
    end
    ps2_clk_sync <= {ps2_clk_sync_hi,io_ps2_clk}; // @[Cat.scala 30:58]
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
  rea = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  buffer_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  buffer_1 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  buffer_2 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  buffer_3 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  buffer_4 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  buffer_5 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  buffer_6 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  buffer_7 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  buffer_8 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  buffer_9 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  fifo_0 = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  fifo_1 = _RAND_12[7:0];
  _RAND_13 = {1{`RANDOM}};
  fifo_2 = _RAND_13[7:0];
  _RAND_14 = {1{`RANDOM}};
  fifo_3 = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  fifo_4 = _RAND_15[7:0];
  _RAND_16 = {1{`RANDOM}};
  fifo_5 = _RAND_16[7:0];
  _RAND_17 = {1{`RANDOM}};
  fifo_6 = _RAND_17[7:0];
  _RAND_18 = {1{`RANDOM}};
  fifo_7 = _RAND_18[7:0];
  _RAND_19 = {1{`RANDOM}};
  w_ptr = _RAND_19[2:0];
  _RAND_20 = {1{`RANDOM}};
  r_ptr = _RAND_20[2:0];
  _RAND_21 = {1{`RANDOM}};
  count = _RAND_21[3:0];
  _RAND_22 = {1{`RANDOM}};
  ps2_clk_sync = _RAND_22[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ps2ascii(
  input  [7:0] io_in,
  output [7:0] io_out
);
  wire [255:0] _GEN_21 = 8'h15 == io_in ? 256'h71 : 256'h0; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_22 = 8'h16 == io_in ? 256'h31 : _GEN_21; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_23 = 8'h17 == io_in ? 256'h0 : _GEN_22; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_24 = 8'h18 == io_in ? 256'h0 : _GEN_23; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_25 = 8'h19 == io_in ? 256'h0 : _GEN_24; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_26 = 8'h1a == io_in ? 256'h7a : _GEN_25; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_27 = 8'h1b == io_in ? 256'h73 : _GEN_26; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_28 = 8'h1c == io_in ? 256'h61 : _GEN_27; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_29 = 8'h1d == io_in ? 256'h77 : _GEN_28; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_30 = 8'h1e == io_in ? 256'h32 : _GEN_29; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_31 = 8'h1f == io_in ? 256'h0 : _GEN_30; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_32 = 8'h20 == io_in ? 256'h0 : _GEN_31; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_33 = 8'h21 == io_in ? 256'h63 : _GEN_32; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_34 = 8'h22 == io_in ? 256'h78 : _GEN_33; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_35 = 8'h23 == io_in ? 256'h64 : _GEN_34; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_36 = 8'h24 == io_in ? 256'h65 : _GEN_35; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_37 = 8'h25 == io_in ? 256'h34 : _GEN_36; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_38 = 8'h26 == io_in ? 256'h33 : _GEN_37; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_39 = 8'h27 == io_in ? 256'h0 : _GEN_38; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_40 = 8'h28 == io_in ? 256'h0 : _GEN_39; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_41 = 8'h29 == io_in ? 256'h0 : _GEN_40; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_42 = 8'h2a == io_in ? 256'h76 : _GEN_41; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_43 = 8'h2b == io_in ? 256'h66 : _GEN_42; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_44 = 8'h2c == io_in ? 256'h74 : _GEN_43; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_45 = 8'h2d == io_in ? 256'h72 : _GEN_44; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_46 = 8'h2e == io_in ? 256'h35 : _GEN_45; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_47 = 8'h2f == io_in ? 256'h0 : _GEN_46; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_48 = 8'h30 == io_in ? 256'h0 : _GEN_47; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_49 = 8'h31 == io_in ? 256'h6e : _GEN_48; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_50 = 8'h32 == io_in ? 256'h62 : _GEN_49; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_51 = 8'h33 == io_in ? 256'h68 : _GEN_50; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_52 = 8'h34 == io_in ? 256'h67 : _GEN_51; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_53 = 8'h35 == io_in ? 256'h79 : _GEN_52; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_54 = 8'h36 == io_in ? 256'h36 : _GEN_53; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_55 = 8'h37 == io_in ? 256'h0 : _GEN_54; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_56 = 8'h38 == io_in ? 256'h0 : _GEN_55; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_57 = 8'h39 == io_in ? 256'h0 : _GEN_56; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_58 = 8'h3a == io_in ? 256'h6d : _GEN_57; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_59 = 8'h3b == io_in ? 256'h6a : _GEN_58; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_60 = 8'h3c == io_in ? 256'h75 : _GEN_59; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_61 = 8'h3d == io_in ? 256'h37 : _GEN_60; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_62 = 8'h3e == io_in ? 256'h38 : _GEN_61; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_63 = 8'h3f == io_in ? 256'h0 : _GEN_62; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_64 = 8'h40 == io_in ? 256'h0 : _GEN_63; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_65 = 8'h41 == io_in ? 256'h0 : _GEN_64; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_66 = 8'h42 == io_in ? 256'h6b : _GEN_65; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_67 = 8'h43 == io_in ? 256'h69 : _GEN_66; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_68 = 8'h44 == io_in ? 256'h6f : _GEN_67; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_69 = 8'h45 == io_in ? 256'h30 : _GEN_68; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_70 = 8'h46 == io_in ? 256'h39 : _GEN_69; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_71 = 8'h47 == io_in ? 256'h0 : _GEN_70; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_72 = 8'h48 == io_in ? 256'h0 : _GEN_71; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_73 = 8'h49 == io_in ? 256'h0 : _GEN_72; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_74 = 8'h4a == io_in ? 256'h0 : _GEN_73; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_75 = 8'h4b == io_in ? 256'h6c : _GEN_74; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_76 = 8'h4c == io_in ? 256'h0 : _GEN_75; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_77 = 8'h4d == io_in ? 256'h70 : _GEN_76; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_78 = 8'h4e == io_in ? 256'h0 : _GEN_77; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_79 = 8'h4f == io_in ? 256'h0 : _GEN_78; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_80 = 8'h50 == io_in ? 256'h0 : _GEN_79; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_81 = 8'h51 == io_in ? 256'h0 : _GEN_80; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_82 = 8'h52 == io_in ? 256'h0 : _GEN_81; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_83 = 8'h53 == io_in ? 256'h0 : _GEN_82; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_84 = 8'h54 == io_in ? 256'h0 : _GEN_83; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_85 = 8'h55 == io_in ? 256'h0 : _GEN_84; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_86 = 8'h56 == io_in ? 256'h0 : _GEN_85; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_87 = 8'h57 == io_in ? 256'h0 : _GEN_86; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_88 = 8'h58 == io_in ? 256'h0 : _GEN_87; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_89 = 8'h59 == io_in ? 256'h0 : _GEN_88; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_90 = 8'h5a == io_in ? 256'h0 : _GEN_89; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_91 = 8'h5b == io_in ? 256'h0 : _GEN_90; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_92 = 8'h5c == io_in ? 256'h0 : _GEN_91; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_93 = 8'h5d == io_in ? 256'h0 : _GEN_92; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_94 = 8'h5e == io_in ? 256'h0 : _GEN_93; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_95 = 8'h5f == io_in ? 256'h0 : _GEN_94; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_96 = 8'h60 == io_in ? 256'h0 : _GEN_95; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_97 = 8'h61 == io_in ? 256'h0 : _GEN_96; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_98 = 8'h62 == io_in ? 256'h0 : _GEN_97; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_99 = 8'h63 == io_in ? 256'h0 : _GEN_98; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_100 = 8'h64 == io_in ? 256'h0 : _GEN_99; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_101 = 8'h65 == io_in ? 256'h0 : _GEN_100; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_102 = 8'h66 == io_in ? 256'h0 : _GEN_101; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_103 = 8'h67 == io_in ? 256'h0 : _GEN_102; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_104 = 8'h68 == io_in ? 256'h0 : _GEN_103; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_105 = 8'h69 == io_in ? 256'h0 : _GEN_104; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_106 = 8'h6a == io_in ? 256'h0 : _GEN_105; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_107 = 8'h6b == io_in ? 256'h0 : _GEN_106; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_108 = 8'h6c == io_in ? 256'h0 : _GEN_107; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_109 = 8'h6d == io_in ? 256'h0 : _GEN_108; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_110 = 8'h6e == io_in ? 256'h0 : _GEN_109; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_111 = 8'h6f == io_in ? 256'h0 : _GEN_110; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_112 = 8'h70 == io_in ? 256'h0 : _GEN_111; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_113 = 8'h71 == io_in ? 256'h0 : _GEN_112; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_114 = 8'h72 == io_in ? 256'h0 : _GEN_113; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_115 = 8'h73 == io_in ? 256'h0 : _GEN_114; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_116 = 8'h74 == io_in ? 256'h0 : _GEN_115; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_117 = 8'h75 == io_in ? 256'h0 : _GEN_116; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_118 = 8'h76 == io_in ? 256'h0 : _GEN_117; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_119 = 8'h77 == io_in ? 256'h0 : _GEN_118; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_120 = 8'h78 == io_in ? 256'h0 : _GEN_119; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_121 = 8'h79 == io_in ? 256'h0 : _GEN_120; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_122 = 8'h7a == io_in ? 256'h0 : _GEN_121; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_123 = 8'h7b == io_in ? 256'h0 : _GEN_122; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_124 = 8'h7c == io_in ? 256'h0 : _GEN_123; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_125 = 8'h7d == io_in ? 256'h0 : _GEN_124; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_126 = 8'h7e == io_in ? 256'h0 : _GEN_125; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_127 = 8'h7f == io_in ? 256'h0 : _GEN_126; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_128 = 8'h80 == io_in ? 256'h0 : _GEN_127; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_129 = 8'h81 == io_in ? 256'h0 : _GEN_128; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_130 = 8'h82 == io_in ? 256'h0 : _GEN_129; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_131 = 8'h83 == io_in ? 256'h0 : _GEN_130; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_132 = 8'h84 == io_in ? 256'h0 : _GEN_131; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_133 = 8'h85 == io_in ? 256'h0 : _GEN_132; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_134 = 8'h86 == io_in ? 256'h0 : _GEN_133; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_135 = 8'h87 == io_in ? 256'h0 : _GEN_134; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_136 = 8'h88 == io_in ? 256'h0 : _GEN_135; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_137 = 8'h89 == io_in ? 256'h0 : _GEN_136; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_138 = 8'h8a == io_in ? 256'h0 : _GEN_137; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_139 = 8'h8b == io_in ? 256'h0 : _GEN_138; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_140 = 8'h8c == io_in ? 256'h0 : _GEN_139; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_141 = 8'h8d == io_in ? 256'h0 : _GEN_140; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_142 = 8'h8e == io_in ? 256'h0 : _GEN_141; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_143 = 8'h8f == io_in ? 256'h0 : _GEN_142; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_144 = 8'h90 == io_in ? 256'h0 : _GEN_143; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_145 = 8'h91 == io_in ? 256'h0 : _GEN_144; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_146 = 8'h92 == io_in ? 256'h0 : _GEN_145; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_147 = 8'h93 == io_in ? 256'h0 : _GEN_146; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_148 = 8'h94 == io_in ? 256'h0 : _GEN_147; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_149 = 8'h95 == io_in ? 256'h0 : _GEN_148; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_150 = 8'h96 == io_in ? 256'h0 : _GEN_149; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_151 = 8'h97 == io_in ? 256'h0 : _GEN_150; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_152 = 8'h98 == io_in ? 256'h0 : _GEN_151; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_153 = 8'h99 == io_in ? 256'h0 : _GEN_152; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_154 = 8'h9a == io_in ? 256'h0 : _GEN_153; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_155 = 8'h9b == io_in ? 256'h0 : _GEN_154; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_156 = 8'h9c == io_in ? 256'h0 : _GEN_155; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_157 = 8'h9d == io_in ? 256'h0 : _GEN_156; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_158 = 8'h9e == io_in ? 256'h0 : _GEN_157; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_159 = 8'h9f == io_in ? 256'h0 : _GEN_158; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_160 = 8'ha0 == io_in ? 256'h0 : _GEN_159; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_161 = 8'ha1 == io_in ? 256'h0 : _GEN_160; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_162 = 8'ha2 == io_in ? 256'h0 : _GEN_161; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_163 = 8'ha3 == io_in ? 256'h0 : _GEN_162; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_164 = 8'ha4 == io_in ? 256'h0 : _GEN_163; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_165 = 8'ha5 == io_in ? 256'h0 : _GEN_164; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_166 = 8'ha6 == io_in ? 256'h0 : _GEN_165; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_167 = 8'ha7 == io_in ? 256'h0 : _GEN_166; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_168 = 8'ha8 == io_in ? 256'h0 : _GEN_167; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_169 = 8'ha9 == io_in ? 256'h0 : _GEN_168; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_170 = 8'haa == io_in ? 256'h0 : _GEN_169; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_171 = 8'hab == io_in ? 256'h0 : _GEN_170; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_172 = 8'hac == io_in ? 256'h0 : _GEN_171; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_173 = 8'had == io_in ? 256'h0 : _GEN_172; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_174 = 8'hae == io_in ? 256'h0 : _GEN_173; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_175 = 8'haf == io_in ? 256'h0 : _GEN_174; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_176 = 8'hb0 == io_in ? 256'h0 : _GEN_175; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_177 = 8'hb1 == io_in ? 256'h0 : _GEN_176; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_178 = 8'hb2 == io_in ? 256'h0 : _GEN_177; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_179 = 8'hb3 == io_in ? 256'h0 : _GEN_178; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_180 = 8'hb4 == io_in ? 256'h0 : _GEN_179; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_181 = 8'hb5 == io_in ? 256'h0 : _GEN_180; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_182 = 8'hb6 == io_in ? 256'h0 : _GEN_181; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_183 = 8'hb7 == io_in ? 256'h0 : _GEN_182; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_184 = 8'hb8 == io_in ? 256'h0 : _GEN_183; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_185 = 8'hb9 == io_in ? 256'h0 : _GEN_184; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_186 = 8'hba == io_in ? 256'h0 : _GEN_185; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_187 = 8'hbb == io_in ? 256'h0 : _GEN_186; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_188 = 8'hbc == io_in ? 256'h0 : _GEN_187; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_189 = 8'hbd == io_in ? 256'h0 : _GEN_188; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_190 = 8'hbe == io_in ? 256'h0 : _GEN_189; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_191 = 8'hbf == io_in ? 256'h0 : _GEN_190; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_192 = 8'hc0 == io_in ? 256'h0 : _GEN_191; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_193 = 8'hc1 == io_in ? 256'h0 : _GEN_192; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_194 = 8'hc2 == io_in ? 256'h0 : _GEN_193; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_195 = 8'hc3 == io_in ? 256'h0 : _GEN_194; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_196 = 8'hc4 == io_in ? 256'h0 : _GEN_195; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_197 = 8'hc5 == io_in ? 256'h0 : _GEN_196; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_198 = 8'hc6 == io_in ? 256'h0 : _GEN_197; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_199 = 8'hc7 == io_in ? 256'h0 : _GEN_198; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_200 = 8'hc8 == io_in ? 256'h0 : _GEN_199; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_201 = 8'hc9 == io_in ? 256'h0 : _GEN_200; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_202 = 8'hca == io_in ? 256'h0 : _GEN_201; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_203 = 8'hcb == io_in ? 256'h0 : _GEN_202; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_204 = 8'hcc == io_in ? 256'h0 : _GEN_203; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_205 = 8'hcd == io_in ? 256'h0 : _GEN_204; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_206 = 8'hce == io_in ? 256'h0 : _GEN_205; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_207 = 8'hcf == io_in ? 256'h0 : _GEN_206; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_208 = 8'hd0 == io_in ? 256'h0 : _GEN_207; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_209 = 8'hd1 == io_in ? 256'h0 : _GEN_208; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_210 = 8'hd2 == io_in ? 256'h0 : _GEN_209; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_211 = 8'hd3 == io_in ? 256'h0 : _GEN_210; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_212 = 8'hd4 == io_in ? 256'h0 : _GEN_211; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_213 = 8'hd5 == io_in ? 256'h0 : _GEN_212; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_214 = 8'hd6 == io_in ? 256'h0 : _GEN_213; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_215 = 8'hd7 == io_in ? 256'h0 : _GEN_214; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_216 = 8'hd8 == io_in ? 256'h0 : _GEN_215; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_217 = 8'hd9 == io_in ? 256'h0 : _GEN_216; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_218 = 8'hda == io_in ? 256'h0 : _GEN_217; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_219 = 8'hdb == io_in ? 256'h0 : _GEN_218; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_220 = 8'hdc == io_in ? 256'h0 : _GEN_219; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_221 = 8'hdd == io_in ? 256'h0 : _GEN_220; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_222 = 8'hde == io_in ? 256'h0 : _GEN_221; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_223 = 8'hdf == io_in ? 256'h0 : _GEN_222; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_224 = 8'he0 == io_in ? 256'h0 : _GEN_223; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_225 = 8'he1 == io_in ? 256'h0 : _GEN_224; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_226 = 8'he2 == io_in ? 256'h0 : _GEN_225; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_227 = 8'he3 == io_in ? 256'h0 : _GEN_226; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_228 = 8'he4 == io_in ? 256'h0 : _GEN_227; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_229 = 8'he5 == io_in ? 256'h0 : _GEN_228; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_230 = 8'he6 == io_in ? 256'h0 : _GEN_229; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_231 = 8'he7 == io_in ? 256'h0 : _GEN_230; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_232 = 8'he8 == io_in ? 256'h0 : _GEN_231; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_233 = 8'he9 == io_in ? 256'h0 : _GEN_232; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_234 = 8'hea == io_in ? 256'h0 : _GEN_233; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_235 = 8'heb == io_in ? 256'h0 : _GEN_234; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_236 = 8'hec == io_in ? 256'h0 : _GEN_235; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_237 = 8'hed == io_in ? 256'h0 : _GEN_236; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_238 = 8'hee == io_in ? 256'h0 : _GEN_237; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_239 = 8'hef == io_in ? 256'h0 : _GEN_238; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_240 = 8'hf0 == io_in ? 256'h0 : _GEN_239; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_241 = 8'hf1 == io_in ? 256'h0 : _GEN_240; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_242 = 8'hf2 == io_in ? 256'h0 : _GEN_241; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_243 = 8'hf3 == io_in ? 256'h0 : _GEN_242; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_244 = 8'hf4 == io_in ? 256'h0 : _GEN_243; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_245 = 8'hf5 == io_in ? 256'h0 : _GEN_244; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_246 = 8'hf6 == io_in ? 256'h0 : _GEN_245; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_247 = 8'hf7 == io_in ? 256'h0 : _GEN_246; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_248 = 8'hf8 == io_in ? 256'h0 : _GEN_247; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_249 = 8'hf9 == io_in ? 256'h0 : _GEN_248; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_250 = 8'hfa == io_in ? 256'h0 : _GEN_249; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_251 = 8'hfb == io_in ? 256'h0 : _GEN_250; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_252 = 8'hfc == io_in ? 256'h0 : _GEN_251; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_253 = 8'hfd == io_in ? 256'h0 : _GEN_252; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_254 = 8'hfe == io_in ? 256'h0 : _GEN_253; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_255 = 8'hff == io_in ? 256'h0 : _GEN_254; // @[ps2.scala 221:11 ps2.scala 221:11]
  assign io_out = _GEN_255[7:0]; // @[ps2.scala 221:11]
endmodule
module seg(
  input        io_en,
  input  [3:0] io_in,
  output [7:0] io_out
);
  wire [7:0] _GEN_0 = io_in == 4'hf ? 8'h8e : 8'hff; // @[ps2.scala 265:33 ps2.scala 266:19 ps2.scala 233:11]
  wire [7:0] _GEN_1 = io_in == 4'he ? 8'h86 : _GEN_0; // @[ps2.scala 263:33 ps2.scala 264:19]
  wire [7:0] _GEN_2 = io_in == 4'hd ? 8'ha1 : _GEN_1; // @[ps2.scala 261:33 ps2.scala 262:19]
  wire [7:0] _GEN_3 = io_in == 4'hc ? 8'hc6 : _GEN_2; // @[ps2.scala 259:33 ps2.scala 260:19]
  wire [7:0] _GEN_4 = io_in == 4'hb ? 8'h83 : _GEN_3; // @[ps2.scala 257:33 ps2.scala 258:19]
  wire [7:0] _GEN_5 = io_in == 4'ha ? 8'h88 : _GEN_4; // @[ps2.scala 255:33 ps2.scala 256:19]
  wire [7:0] _GEN_6 = io_in == 4'h9 ? 8'h90 : _GEN_5; // @[ps2.scala 253:32 ps2.scala 254:19]
  wire [7:0] _GEN_7 = io_in == 4'h8 ? 8'h80 : _GEN_6; // @[ps2.scala 251:32 ps2.scala 252:19]
  wire [7:0] _GEN_8 = io_in == 4'h7 ? 8'hf8 : _GEN_7; // @[ps2.scala 249:32 ps2.scala 250:19]
  wire [7:0] _GEN_9 = io_in == 4'h6 ? 8'h82 : _GEN_8; // @[ps2.scala 247:32 ps2.scala 248:19]
  wire [7:0] _GEN_10 = io_in == 4'h5 ? 8'h92 : _GEN_9; // @[ps2.scala 245:32 ps2.scala 246:19]
  wire [7:0] _GEN_11 = io_in == 4'h4 ? 8'h99 : _GEN_10; // @[ps2.scala 243:32 ps2.scala 244:19]
  wire [7:0] _GEN_12 = io_in == 4'h3 ? 8'hb0 : _GEN_11; // @[ps2.scala 241:32 ps2.scala 242:19]
  wire [7:0] _GEN_13 = io_in == 4'h2 ? 8'ha4 : _GEN_12; // @[ps2.scala 239:32 ps2.scala 240:19]
  wire [7:0] _GEN_14 = io_in == 4'h1 ? 8'hf9 : _GEN_13; // @[ps2.scala 237:32 ps2.scala 238:19]
  wire [7:0] _GEN_15 = io_in == 4'h0 ? 8'hc0 : _GEN_14; // @[ps2.scala 235:26 ps2.scala 236:19]
  assign io_out = io_en ? _GEN_15 : 8'hff; // @[ps2.scala 234:22 ps2.scala 269:15]
endmodule
module ps2(
  input        clock,
  input        reset,
  input        io_ps2_clk,
  input        io_ps2_data,
  output [7:0] io_bcd8seg_0,
  output [7:0] io_bcd8seg_1,
  output [7:0] io_bcd8seg_2,
  output [7:0] io_bcd8seg_3,
  output [7:0] io_bcd8seg_4,
  output [7:0] io_bcd8seg_5,
  output [7:0] io_bcd8seg_6,
  output [7:0] io_bcd8seg_7
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
`endif // RANDOMIZE_REG_INIT
  wire  ps2_clock; // @[ps2.scala 18:19]
  wire  ps2_io_ps2_clk; // @[ps2.scala 18:19]
  wire  ps2_io_ps2_data; // @[ps2.scala 18:19]
  wire  ps2_io_nextdata_n; // @[ps2.scala 18:19]
  wire [7:0] ps2_io_data; // @[ps2.scala 18:19]
  wire  ps2_io_ready; // @[ps2.scala 18:19]
  wire [7:0] mm_io_in; // @[ps2.scala 75:18]
  wire [7:0] mm_io_out; // @[ps2.scala 75:18]
  wire  m0_io_en; // @[ps2.scala 80:18]
  wire [3:0] m0_io_in; // @[ps2.scala 80:18]
  wire [7:0] m0_io_out; // @[ps2.scala 80:18]
  wire  m1_io_en; // @[ps2.scala 84:18]
  wire [3:0] m1_io_in; // @[ps2.scala 84:18]
  wire [7:0] m1_io_out; // @[ps2.scala 84:18]
  wire  m2_io_en; // @[ps2.scala 88:18]
  wire [3:0] m2_io_in; // @[ps2.scala 88:18]
  wire [7:0] m2_io_out; // @[ps2.scala 88:18]
  wire  m3_io_en; // @[ps2.scala 92:18]
  wire [3:0] m3_io_in; // @[ps2.scala 92:18]
  wire [7:0] m3_io_out; // @[ps2.scala 92:18]
  wire  m4_io_en; // @[ps2.scala 96:18]
  wire [3:0] m4_io_in; // @[ps2.scala 96:18]
  wire [7:0] m4_io_out; // @[ps2.scala 96:18]
  wire  m5_io_en; // @[ps2.scala 100:18]
  wire [3:0] m5_io_in; // @[ps2.scala 100:18]
  wire [7:0] m5_io_out; // @[ps2.scala 100:18]
  wire  m6_io_en; // @[ps2.scala 104:18]
  wire [3:0] m6_io_in; // @[ps2.scala 104:18]
  wire [7:0] m6_io_out; // @[ps2.scala 104:18]
  wire  m7_io_en; // @[ps2.scala 108:18]
  wire [3:0] m7_io_in; // @[ps2.scala 108:18]
  wire [7:0] m7_io_out; // @[ps2.scala 108:18]
  reg [7:0] data; // @[ps2.scala 14:17]
  reg  ready; // @[ps2.scala 15:18]
  reg  nextdata; // @[ps2.scala 17:21]
  reg [3:0] now; // @[ps2.scala 32:20]
  reg [3:0] next; // @[ps2.scala 33:21]
  wire  _T = now == 4'h1; // @[ps2.scala 37:13]
  wire [1:0] _GEN_0 = ready ? 2'h2 : 2'h1; // @[ps2.scala 38:26 ps2.scala 39:17 ps2.scala 41:17]
  wire  _T_2 = now == 4'h2; // @[ps2.scala 43:19]
  wire  _T_3 = now == 4'h4; // @[ps2.scala 45:19]
  wire  _T_4 = now == 4'h8; // @[ps2.scala 47:19]
  reg [23:0] ps2segdata; // @[ps2.scala 52:27]
  wire [15:0] ps2segdata_hi = ps2segdata[15:0]; // @[ps2.scala 58:35]
  wire [23:0] _ps2segdata_T = {ps2segdata_hi,data}; // @[Cat.scala 30:58]
  wire  _GEN_6 = _T_2 ? nextdata : 1'h1; // @[ps2.scala 57:25 ps2.scala 17:21 ps2.scala 60:17]
  wire  _GEN_7 = _T_3 | _T_4 ? 1'h0 : _GEN_6; // @[ps2.scala 55:35 ps2.scala 56:17]
  reg [6:0] num; // @[ps2.scala 62:20]
  reg  segen; // @[ps2.scala 63:22]
  reg [1:0] ss; // @[ps2.scala 64:19]
  wire  ss_hi = ss[0]; // @[ps2.scala 70:15]
  wire [1:0] _ss_T = {ss_hi,segen}; // @[Cat.scala 30:58]
  wire [6:0] _num_T_1 = num + 7'h1; // @[ps2.scala 72:17]
  reg [7:0] ascii; // @[ps2.scala 74:22]
  wire [6:0] _GEN_1 = num % 7'ha; // @[ps2.scala 106:19]
  wire [6:0] _m6_io_in_T = _GEN_1[6:0]; // @[ps2.scala 106:19]
  wire [6:0] _m7_io_in_T = num / 7'ha; // @[ps2.scala 110:19]
  ps2_keyboard ps2 ( // @[ps2.scala 18:19]
    .clock(ps2_clock),
    .io_ps2_clk(ps2_io_ps2_clk),
    .io_ps2_data(ps2_io_ps2_data),
    .io_nextdata_n(ps2_io_nextdata_n),
    .io_data(ps2_io_data),
    .io_ready(ps2_io_ready)
  );
  ps2ascii mm ( // @[ps2.scala 75:18]
    .io_in(mm_io_in),
    .io_out(mm_io_out)
  );
  seg m0 ( // @[ps2.scala 80:18]
    .io_en(m0_io_en),
    .io_in(m0_io_in),
    .io_out(m0_io_out)
  );
  seg m1 ( // @[ps2.scala 84:18]
    .io_en(m1_io_en),
    .io_in(m1_io_in),
    .io_out(m1_io_out)
  );
  seg m2 ( // @[ps2.scala 88:18]
    .io_en(m2_io_en),
    .io_in(m2_io_in),
    .io_out(m2_io_out)
  );
  seg m3 ( // @[ps2.scala 92:18]
    .io_en(m3_io_en),
    .io_in(m3_io_in),
    .io_out(m3_io_out)
  );
  seg m4 ( // @[ps2.scala 96:18]
    .io_en(m4_io_en),
    .io_in(m4_io_in),
    .io_out(m4_io_out)
  );
  seg m5 ( // @[ps2.scala 100:18]
    .io_en(m5_io_en),
    .io_in(m5_io_in),
    .io_out(m5_io_out)
  );
  seg m6 ( // @[ps2.scala 104:18]
    .io_en(m6_io_en),
    .io_in(m6_io_in),
    .io_out(m6_io_out)
  );
  seg m7 ( // @[ps2.scala 108:18]
    .io_en(m7_io_en),
    .io_in(m7_io_in),
    .io_out(m7_io_out)
  );
  assign io_bcd8seg_0 = m0_io_out; // @[ps2.scala 83:18]
  assign io_bcd8seg_1 = m1_io_out; // @[ps2.scala 87:18]
  assign io_bcd8seg_2 = m2_io_out; // @[ps2.scala 91:18]
  assign io_bcd8seg_3 = m3_io_out; // @[ps2.scala 95:18]
  assign io_bcd8seg_4 = m0_io_out; // @[ps2.scala 99:18]
  assign io_bcd8seg_5 = m0_io_out; // @[ps2.scala 103:18]
  assign io_bcd8seg_6 = m6_io_out; // @[ps2.scala 107:18]
  assign io_bcd8seg_7 = m7_io_out; // @[ps2.scala 111:18]
  assign ps2_clock = clock;
  assign ps2_io_ps2_clk = io_ps2_clk; // @[ps2.scala 20:19]
  assign ps2_io_ps2_data = io_ps2_data; // @[ps2.scala 21:20]
  assign ps2_io_nextdata_n = nextdata; // @[ps2.scala 22:22]
  assign mm_io_in = ps2segdata[7:0]; // @[ps2.scala 76:25]
  assign m0_io_en = segen; // @[ps2.scala 81:13]
  assign m0_io_in = ps2segdata[3:0]; // @[ps2.scala 82:25]
  assign m1_io_en = segen; // @[ps2.scala 85:13]
  assign m1_io_in = ps2segdata[7:4]; // @[ps2.scala 86:25]
  assign m2_io_en = segen; // @[ps2.scala 89:13]
  assign m2_io_in = ascii[3:0]; // @[ps2.scala 90:20]
  assign m3_io_en = segen; // @[ps2.scala 93:13]
  assign m3_io_in = ascii[7:4]; // @[ps2.scala 94:20]
  assign m4_io_en = 1'h0; // @[ps2.scala 97:13]
  assign m4_io_in = ps2segdata[3:0]; // @[ps2.scala 98:25]
  assign m5_io_en = 1'h0; // @[ps2.scala 101:13]
  assign m5_io_in = ps2segdata[7:4]; // @[ps2.scala 102:25]
  assign m6_io_en = 1'h1; // @[ps2.scala 105:13]
  assign m6_io_in = _m6_io_in_T[3:0]; // @[ps2.scala 106:30]
  assign m7_io_en = 1'h1; // @[ps2.scala 109:13]
  assign m7_io_in = _m7_io_in_T[3:0]; // @[ps2.scala 110:30]
  always @(posedge clock) begin
    data <= ps2_io_data; // @[ps2.scala 23:9]
    ready <= ps2_io_ready; // @[ps2.scala 24:10]
    nextdata <= _T | _GEN_7; // @[ps2.scala 53:19 ps2.scala 54:17]
    if (reset) begin // @[ps2.scala 32:20]
      now <= 4'h1; // @[ps2.scala 32:20]
    end else begin
      now <= next; // @[ps2.scala 36:8]
    end
    if (reset) begin // @[ps2.scala 33:21]
      next <= 4'h1; // @[ps2.scala 33:21]
    end else if (now == 4'h1) begin // @[ps2.scala 37:19]
      next <= {{2'd0}, _GEN_0};
    end else if (now == 4'h2) begin // @[ps2.scala 43:25]
      next <= 4'h4; // @[ps2.scala 44:13]
    end else if (now == 4'h4) begin // @[ps2.scala 45:25]
      next <= 4'h8; // @[ps2.scala 46:13]
    end else begin
      next <= 4'h1;
    end
    if (reset) begin // @[ps2.scala 52:27]
      ps2segdata <= 24'h0; // @[ps2.scala 52:27]
    end else if (!(_T)) begin // @[ps2.scala 53:19]
      if (!(_T_3 | _T_4)) begin // @[ps2.scala 55:35]
        if (_T_2) begin // @[ps2.scala 57:25]
          ps2segdata <= _ps2segdata_T; // @[ps2.scala 58:19]
        end
      end
    end
    if (reset) begin // @[ps2.scala 62:20]
      num <= 7'h0; // @[ps2.scala 62:20]
    end else if (ss == 2'h2) begin // @[ps2.scala 71:23]
      num <= _num_T_1; // @[ps2.scala 72:12]
    end
    if (reset) begin // @[ps2.scala 63:22]
      segen <= 1'h0; // @[ps2.scala 63:22]
    end else if (ps2segdata[23:16] == 8'hf0 & ps2segdata[7:0] == ps2segdata[15:8]) begin // @[ps2.scala 65:78]
      segen <= 1'h0; // @[ps2.scala 66:14]
    end else begin
      segen <= 1'h1; // @[ps2.scala 68:14]
    end
    if (reset) begin // @[ps2.scala 64:19]
      ss <= 2'h0; // @[ps2.scala 64:19]
    end else begin
      ss <= _ss_T; // @[ps2.scala 70:7]
    end
    if (reset) begin // @[ps2.scala 74:22]
      ascii <= 8'h0; // @[ps2.scala 74:22]
    end else begin
      ascii <= mm_io_out; // @[ps2.scala 77:10]
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
  data = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  ready = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  nextdata = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  now = _RAND_3[3:0];
  _RAND_4 = {1{`RANDOM}};
  next = _RAND_4[3:0];
  _RAND_5 = {1{`RANDOM}};
  ps2segdata = _RAND_5[23:0];
  _RAND_6 = {1{`RANDOM}};
  num = _RAND_6[6:0];
  _RAND_7 = {1{`RANDOM}};
  segen = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  ss = _RAND_8[1:0];
  _RAND_9 = {1{`RANDOM}};
  ascii = _RAND_9[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module top(
  input        clock,
  input        reset,
  input        io_ps2_clk,
  input        io_ps2_data,
  output       io_VGA_HSYNC,
  output       io_VGA_VSYNC,
  output       io_VGA_BLANK_N,
  output [7:0] io_VGA_R,
  output [7:0] io_VGA_G,
  output [7:0] io_VGA_B,
  output [7:0] io_bcd8seg_0,
  output [7:0] io_bcd8seg_1,
  output [7:0] io_bcd8seg_2,
  output [7:0] io_bcd8seg_3,
  output [7:0] io_bcd8seg_4,
  output [7:0] io_bcd8seg_5,
  output [7:0] io_bcd8seg_6,
  output [7:0] io_bcd8seg_7
);
  wire  VGA_clock; // @[top.scala 19:19]
  wire  VGA_reset; // @[top.scala 19:19]
  wire  VGA_io_VGA_HSYNC; // @[top.scala 19:19]
  wire  VGA_io_VGA_VSYNC; // @[top.scala 19:19]
  wire  VGA_io_VGA_BLANK_N; // @[top.scala 19:19]
  wire  PS2_clock; // @[top.scala 21:19]
  wire  PS2_reset; // @[top.scala 21:19]
  wire  PS2_io_ps2_clk; // @[top.scala 21:19]
  wire  PS2_io_ps2_data; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_0; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_1; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_2; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_3; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_4; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_5; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_6; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_7; // @[top.scala 21:19]
  vga VGA ( // @[top.scala 19:19]
    .clock(VGA_clock),
    .reset(VGA_reset),
    .io_VGA_HSYNC(VGA_io_VGA_HSYNC),
    .io_VGA_VSYNC(VGA_io_VGA_VSYNC),
    .io_VGA_BLANK_N(VGA_io_VGA_BLANK_N)
  );
  ps2 PS2 ( // @[top.scala 21:19]
    .clock(PS2_clock),
    .reset(PS2_reset),
    .io_ps2_clk(PS2_io_ps2_clk),
    .io_ps2_data(PS2_io_ps2_data),
    .io_bcd8seg_0(PS2_io_bcd8seg_0),
    .io_bcd8seg_1(PS2_io_bcd8seg_1),
    .io_bcd8seg_2(PS2_io_bcd8seg_2),
    .io_bcd8seg_3(PS2_io_bcd8seg_3),
    .io_bcd8seg_4(PS2_io_bcd8seg_4),
    .io_bcd8seg_5(PS2_io_bcd8seg_5),
    .io_bcd8seg_6(PS2_io_bcd8seg_6),
    .io_bcd8seg_7(PS2_io_bcd8seg_7)
  );
  assign io_VGA_HSYNC = VGA_io_VGA_HSYNC; // @[top.scala 62:17]
  assign io_VGA_VSYNC = VGA_io_VGA_VSYNC; // @[top.scala 63:17]
  assign io_VGA_BLANK_N = VGA_io_VGA_BLANK_N; // @[top.scala 64:19]
  assign io_VGA_R = 8'hff; // @[top.scala 65:13]
  assign io_VGA_G = 8'hff; // @[top.scala 66:13]
  assign io_VGA_B = 8'hff; // @[top.scala 67:13]
  assign io_bcd8seg_0 = PS2_io_bcd8seg_0; // @[top.scala 60:15]
  assign io_bcd8seg_1 = PS2_io_bcd8seg_1; // @[top.scala 60:15]
  assign io_bcd8seg_2 = PS2_io_bcd8seg_2; // @[top.scala 60:15]
  assign io_bcd8seg_3 = PS2_io_bcd8seg_3; // @[top.scala 60:15]
  assign io_bcd8seg_4 = PS2_io_bcd8seg_4; // @[top.scala 60:15]
  assign io_bcd8seg_5 = PS2_io_bcd8seg_5; // @[top.scala 60:15]
  assign io_bcd8seg_6 = PS2_io_bcd8seg_6; // @[top.scala 60:15]
  assign io_bcd8seg_7 = PS2_io_bcd8seg_7; // @[top.scala 60:15]
  assign VGA_clock = clock;
  assign VGA_reset = reset;
  assign PS2_clock = clock;
  assign PS2_reset = reset;
  assign PS2_io_ps2_clk = io_ps2_clk; // @[top.scala 58:19]
  assign PS2_io_ps2_data = io_ps2_data; // @[top.scala 59:20]
endmodule

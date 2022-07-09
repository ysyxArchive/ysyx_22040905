module ps2_keyboard(
  input        clock,
  input        io_clrn,
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
  reg  rea; // @[Passthrough.scala 118:16]
  reg  buffer_0; // @[Passthrough.scala 126:19]
  reg  buffer_1; // @[Passthrough.scala 126:19]
  reg  buffer_2; // @[Passthrough.scala 126:19]
  reg  buffer_3; // @[Passthrough.scala 126:19]
  reg  buffer_4; // @[Passthrough.scala 126:19]
  reg  buffer_5; // @[Passthrough.scala 126:19]
  reg  buffer_6; // @[Passthrough.scala 126:19]
  reg  buffer_7; // @[Passthrough.scala 126:19]
  reg  buffer_8; // @[Passthrough.scala 126:19]
  reg  buffer_9; // @[Passthrough.scala 126:19]
  reg [7:0] fifo_0; // @[Passthrough.scala 127:17]
  reg [7:0] fifo_1; // @[Passthrough.scala 127:17]
  reg [7:0] fifo_2; // @[Passthrough.scala 127:17]
  reg [7:0] fifo_3; // @[Passthrough.scala 127:17]
  reg [7:0] fifo_4; // @[Passthrough.scala 127:17]
  reg [7:0] fifo_5; // @[Passthrough.scala 127:17]
  reg [7:0] fifo_6; // @[Passthrough.scala 127:17]
  reg [7:0] fifo_7; // @[Passthrough.scala 127:17]
  reg [2:0] w_ptr; // @[Passthrough.scala 128:18]
  reg [2:0] r_ptr; // @[Passthrough.scala 129:18]
  reg [3:0] count; // @[Passthrough.scala 130:18]
  reg [2:0] ps2_clk_sync; // @[Passthrough.scala 131:25]
  wire [1:0] ps2_clk_sync_hi = ps2_clk_sync[1:0]; // @[Passthrough.scala 133:35]
  wire  sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1]; // @[Passthrough.scala 135:30]
  wire [2:0] _r_ptr_T_1 = r_ptr + 3'h1; // @[Passthrough.scala 145:29]
  wire  _GEN_0 = w_ptr == _r_ptr_T_1 ? 1'h0 : rea; // @[Passthrough.scala 146:42 Passthrough.scala 147:24 Passthrough.scala 118:16]
  wire  _GEN_3 = ~io_nextdata_n ? _GEN_0 : rea; // @[Passthrough.scala 144:38 Passthrough.scala 118:16]
  wire  _GEN_6 = rea ? _GEN_3 : rea; // @[Passthrough.scala 143:24 Passthrough.scala 118:16]
  wire [7:0] _fifo_T = {buffer_8,buffer_7,buffer_6,buffer_5,buffer_4,buffer_3,buffer_2,buffer_1}; // @[Cat.scala 30:58]
  wire [7:0] _GEN_8 = 3'h0 == w_ptr ? _fifo_T : fifo_0; // @[Passthrough.scala 155:32 Passthrough.scala 155:32 Passthrough.scala 127:17]
  wire [7:0] _GEN_9 = 3'h1 == w_ptr ? _fifo_T : fifo_1; // @[Passthrough.scala 155:32 Passthrough.scala 155:32 Passthrough.scala 127:17]
  wire [7:0] _GEN_10 = 3'h2 == w_ptr ? _fifo_T : fifo_2; // @[Passthrough.scala 155:32 Passthrough.scala 155:32 Passthrough.scala 127:17]
  wire [7:0] _GEN_11 = 3'h3 == w_ptr ? _fifo_T : fifo_3; // @[Passthrough.scala 155:32 Passthrough.scala 155:32 Passthrough.scala 127:17]
  wire [7:0] _GEN_12 = 3'h4 == w_ptr ? _fifo_T : fifo_4; // @[Passthrough.scala 155:32 Passthrough.scala 155:32 Passthrough.scala 127:17]
  wire [7:0] _GEN_13 = 3'h5 == w_ptr ? _fifo_T : fifo_5; // @[Passthrough.scala 155:32 Passthrough.scala 155:32 Passthrough.scala 127:17]
  wire [7:0] _GEN_14 = 3'h6 == w_ptr ? _fifo_T : fifo_6; // @[Passthrough.scala 155:32 Passthrough.scala 155:32 Passthrough.scala 127:17]
  wire [7:0] _GEN_15 = 3'h7 == w_ptr ? _fifo_T : fifo_7; // @[Passthrough.scala 155:32 Passthrough.scala 155:32 Passthrough.scala 127:17]
  wire [2:0] _w_ptr_T_1 = w_ptr + 3'h1; // @[Passthrough.scala 156:33]
  wire  _GEN_25 = ~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3
     ^ buffer_2 ^ buffer_1) | _GEN_6; // @[Passthrough.scala 154:162 Passthrough.scala 157:24]
  wire [3:0] _count_T_1 = count + 4'h1; // @[Passthrough.scala 163:29]
  wire [7:0] _GEN_106 = 3'h1 == r_ptr ? fifo_1 : fifo_0; // @[Passthrough.scala 167:12 Passthrough.scala 167:12]
  wire [7:0] _GEN_107 = 3'h2 == r_ptr ? fifo_2 : _GEN_106; // @[Passthrough.scala 167:12 Passthrough.scala 167:12]
  wire [7:0] _GEN_108 = 3'h3 == r_ptr ? fifo_3 : _GEN_107; // @[Passthrough.scala 167:12 Passthrough.scala 167:12]
  wire [7:0] _GEN_109 = 3'h4 == r_ptr ? fifo_4 : _GEN_108; // @[Passthrough.scala 167:12 Passthrough.scala 167:12]
  wire [7:0] _GEN_110 = 3'h5 == r_ptr ? fifo_5 : _GEN_109; // @[Passthrough.scala 167:12 Passthrough.scala 167:12]
  wire [7:0] _GEN_111 = 3'h6 == r_ptr ? fifo_6 : _GEN_110; // @[Passthrough.scala 167:12 Passthrough.scala 167:12]
  assign io_data = 3'h7 == r_ptr ? fifo_7 : _GEN_111; // @[Passthrough.scala 167:12 Passthrough.scala 167:12]
  assign io_ready = rea; // @[Passthrough.scala 136:24 Passthrough.scala 124:13]
  always @(posedge clock) begin
    if (~io_clrn) begin // @[Passthrough.scala 136:24]
      rea <= 1'h0; // @[Passthrough.scala 141:12]
    end else if (sampling) begin // @[Passthrough.scala 152:29]
      if (count == 4'ha) begin // @[Passthrough.scala 153:31]
        rea <= _GEN_25;
      end else begin
        rea <= _GEN_6;
      end
    end else begin
      rea <= _GEN_6;
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 153:31]
          if (4'h0 == count) begin // @[Passthrough.scala 162:30]
            buffer_0 <= io_ps2_data; // @[Passthrough.scala 162:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 153:31]
          if (4'h1 == count) begin // @[Passthrough.scala 162:30]
            buffer_1 <= io_ps2_data; // @[Passthrough.scala 162:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 153:31]
          if (4'h2 == count) begin // @[Passthrough.scala 162:30]
            buffer_2 <= io_ps2_data; // @[Passthrough.scala 162:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 153:31]
          if (4'h3 == count) begin // @[Passthrough.scala 162:30]
            buffer_3 <= io_ps2_data; // @[Passthrough.scala 162:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 153:31]
          if (4'h4 == count) begin // @[Passthrough.scala 162:30]
            buffer_4 <= io_ps2_data; // @[Passthrough.scala 162:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 153:31]
          if (4'h5 == count) begin // @[Passthrough.scala 162:30]
            buffer_5 <= io_ps2_data; // @[Passthrough.scala 162:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 153:31]
          if (4'h6 == count) begin // @[Passthrough.scala 162:30]
            buffer_6 <= io_ps2_data; // @[Passthrough.scala 162:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 153:31]
          if (4'h7 == count) begin // @[Passthrough.scala 162:30]
            buffer_7 <= io_ps2_data; // @[Passthrough.scala 162:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 153:31]
          if (4'h8 == count) begin // @[Passthrough.scala 162:30]
            buffer_8 <= io_ps2_data; // @[Passthrough.scala 162:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 153:31]
          if (4'h9 == count) begin // @[Passthrough.scala 162:30]
            buffer_9 <= io_ps2_data; // @[Passthrough.scala 162:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (count == 4'ha) begin // @[Passthrough.scala 153:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 154:162]
            fifo_0 <= _GEN_8;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (count == 4'ha) begin // @[Passthrough.scala 153:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 154:162]
            fifo_1 <= _GEN_9;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (count == 4'ha) begin // @[Passthrough.scala 153:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 154:162]
            fifo_2 <= _GEN_10;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (count == 4'ha) begin // @[Passthrough.scala 153:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 154:162]
            fifo_3 <= _GEN_11;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (count == 4'ha) begin // @[Passthrough.scala 153:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 154:162]
            fifo_4 <= _GEN_12;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (count == 4'ha) begin // @[Passthrough.scala 153:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 154:162]
            fifo_5 <= _GEN_13;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (count == 4'ha) begin // @[Passthrough.scala 153:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 154:162]
            fifo_6 <= _GEN_14;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 136:24]
      if (sampling) begin // @[Passthrough.scala 152:29]
        if (count == 4'ha) begin // @[Passthrough.scala 153:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 154:162]
            fifo_7 <= _GEN_15;
          end
        end
      end
    end
    if (~io_clrn) begin // @[Passthrough.scala 136:24]
      w_ptr <= 3'h0; // @[Passthrough.scala 138:14]
    end else if (sampling) begin // @[Passthrough.scala 152:29]
      if (count == 4'ha) begin // @[Passthrough.scala 153:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 154:162]
          w_ptr <= _w_ptr_T_1; // @[Passthrough.scala 156:26]
        end
      end
    end
    if (~io_clrn) begin // @[Passthrough.scala 136:24]
      r_ptr <= 3'h0; // @[Passthrough.scala 139:14]
    end else if (rea) begin // @[Passthrough.scala 143:24]
      if (~io_nextdata_n) begin // @[Passthrough.scala 144:38]
        r_ptr <= _r_ptr_T_1; // @[Passthrough.scala 145:22]
      end
    end
    if (~io_clrn) begin // @[Passthrough.scala 136:24]
      count <= 4'h0; // @[Passthrough.scala 137:14]
    end else if (sampling) begin // @[Passthrough.scala 152:29]
      if (count == 4'ha) begin // @[Passthrough.scala 153:31]
        count <= 4'h0; // @[Passthrough.scala 160:22]
      end else begin
        count <= _count_T_1; // @[Passthrough.scala 163:22]
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
module seg(
  input        io_en,
  input  [3:0] io_in,
  output [7:0] io_out
);
  wire [7:0] _GEN_0 = io_in == 4'hf ? 8'h8e : 8'hff; // @[Passthrough.scala 259:33 Passthrough.scala 260:19 Passthrough.scala 227:11]
  wire [7:0] _GEN_1 = io_in == 4'he ? 8'h86 : _GEN_0; // @[Passthrough.scala 257:33 Passthrough.scala 258:19]
  wire [7:0] _GEN_2 = io_in == 4'hd ? 8'ha1 : _GEN_1; // @[Passthrough.scala 255:33 Passthrough.scala 256:19]
  wire [7:0] _GEN_3 = io_in == 4'hc ? 8'hc6 : _GEN_2; // @[Passthrough.scala 253:33 Passthrough.scala 254:19]
  wire [7:0] _GEN_4 = io_in == 4'hb ? 8'h83 : _GEN_3; // @[Passthrough.scala 251:33 Passthrough.scala 252:19]
  wire [7:0] _GEN_5 = io_in == 4'ha ? 8'h88 : _GEN_4; // @[Passthrough.scala 249:33 Passthrough.scala 250:19]
  wire [7:0] _GEN_6 = io_in == 4'h9 ? 8'h90 : _GEN_5; // @[Passthrough.scala 247:32 Passthrough.scala 248:19]
  wire [7:0] _GEN_7 = io_in == 4'h8 ? 8'h80 : _GEN_6; // @[Passthrough.scala 245:32 Passthrough.scala 246:19]
  wire [7:0] _GEN_8 = io_in == 4'h7 ? 8'hf8 : _GEN_7; // @[Passthrough.scala 243:32 Passthrough.scala 244:19]
  wire [7:0] _GEN_9 = io_in == 4'h6 ? 8'h82 : _GEN_8; // @[Passthrough.scala 241:32 Passthrough.scala 242:19]
  wire [7:0] _GEN_10 = io_in == 4'h5 ? 8'h92 : _GEN_9; // @[Passthrough.scala 239:32 Passthrough.scala 240:19]
  wire [7:0] _GEN_11 = io_in == 4'h4 ? 8'h99 : _GEN_10; // @[Passthrough.scala 237:32 Passthrough.scala 238:19]
  wire [7:0] _GEN_12 = io_in == 4'h3 ? 8'hb0 : _GEN_11; // @[Passthrough.scala 235:32 Passthrough.scala 236:19]
  wire [7:0] _GEN_13 = io_in == 4'h2 ? 8'ha4 : _GEN_12; // @[Passthrough.scala 233:32 Passthrough.scala 234:19]
  wire [7:0] _GEN_14 = io_in == 4'h1 ? 8'hf9 : _GEN_13; // @[Passthrough.scala 231:32 Passthrough.scala 232:19]
  wire [7:0] _GEN_15 = io_in == 4'h0 ? 8'hc0 : _GEN_14; // @[Passthrough.scala 229:26 Passthrough.scala 230:19]
  assign io_out = io_en ? _GEN_15 : 8'hff; // @[Passthrough.scala 228:22 Passthrough.scala 263:15]
endmodule
module ps2ascii(
  input  [7:0] io_in,
  output [7:0] io_out
);
  wire [255:0] _GEN_21 = 8'h15 == io_in ? 256'h71 : 256'h0; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_22 = 8'h16 == io_in ? 256'h31 : _GEN_21; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_23 = 8'h17 == io_in ? 256'h0 : _GEN_22; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_24 = 8'h18 == io_in ? 256'h0 : _GEN_23; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_25 = 8'h19 == io_in ? 256'h0 : _GEN_24; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_26 = 8'h1a == io_in ? 256'h7a : _GEN_25; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_27 = 8'h1b == io_in ? 256'h73 : _GEN_26; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_28 = 8'h1c == io_in ? 256'h61 : _GEN_27; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_29 = 8'h1d == io_in ? 256'h77 : _GEN_28; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_30 = 8'h1e == io_in ? 256'h32 : _GEN_29; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_31 = 8'h1f == io_in ? 256'h0 : _GEN_30; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_32 = 8'h20 == io_in ? 256'h0 : _GEN_31; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_33 = 8'h21 == io_in ? 256'h63 : _GEN_32; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_34 = 8'h22 == io_in ? 256'h78 : _GEN_33; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_35 = 8'h23 == io_in ? 256'h64 : _GEN_34; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_36 = 8'h24 == io_in ? 256'h65 : _GEN_35; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_37 = 8'h25 == io_in ? 256'h34 : _GEN_36; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_38 = 8'h26 == io_in ? 256'h33 : _GEN_37; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_39 = 8'h27 == io_in ? 256'h0 : _GEN_38; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_40 = 8'h28 == io_in ? 256'h0 : _GEN_39; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_41 = 8'h29 == io_in ? 256'h0 : _GEN_40; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_42 = 8'h2a == io_in ? 256'h76 : _GEN_41; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_43 = 8'h2b == io_in ? 256'h66 : _GEN_42; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_44 = 8'h2c == io_in ? 256'h74 : _GEN_43; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_45 = 8'h2d == io_in ? 256'h72 : _GEN_44; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_46 = 8'h2e == io_in ? 256'h35 : _GEN_45; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_47 = 8'h2f == io_in ? 256'h0 : _GEN_46; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_48 = 8'h30 == io_in ? 256'h0 : _GEN_47; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_49 = 8'h31 == io_in ? 256'h6e : _GEN_48; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_50 = 8'h32 == io_in ? 256'h62 : _GEN_49; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_51 = 8'h33 == io_in ? 256'h68 : _GEN_50; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_52 = 8'h34 == io_in ? 256'h67 : _GEN_51; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_53 = 8'h35 == io_in ? 256'h79 : _GEN_52; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_54 = 8'h36 == io_in ? 256'h36 : _GEN_53; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_55 = 8'h37 == io_in ? 256'h0 : _GEN_54; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_56 = 8'h38 == io_in ? 256'h0 : _GEN_55; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_57 = 8'h39 == io_in ? 256'h0 : _GEN_56; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_58 = 8'h3a == io_in ? 256'h6d : _GEN_57; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_59 = 8'h3b == io_in ? 256'h6a : _GEN_58; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_60 = 8'h3c == io_in ? 256'h75 : _GEN_59; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_61 = 8'h3d == io_in ? 256'h37 : _GEN_60; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_62 = 8'h3e == io_in ? 256'h38 : _GEN_61; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_63 = 8'h3f == io_in ? 256'h0 : _GEN_62; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_64 = 8'h40 == io_in ? 256'h0 : _GEN_63; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_65 = 8'h41 == io_in ? 256'h0 : _GEN_64; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_66 = 8'h42 == io_in ? 256'h6b : _GEN_65; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_67 = 8'h43 == io_in ? 256'h69 : _GEN_66; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_68 = 8'h44 == io_in ? 256'h6f : _GEN_67; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_69 = 8'h45 == io_in ? 256'h30 : _GEN_68; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_70 = 8'h46 == io_in ? 256'h39 : _GEN_69; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_71 = 8'h47 == io_in ? 256'h0 : _GEN_70; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_72 = 8'h48 == io_in ? 256'h0 : _GEN_71; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_73 = 8'h49 == io_in ? 256'h0 : _GEN_72; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_74 = 8'h4a == io_in ? 256'h0 : _GEN_73; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_75 = 8'h4b == io_in ? 256'h6c : _GEN_74; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_76 = 8'h4c == io_in ? 256'h0 : _GEN_75; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_77 = 8'h4d == io_in ? 256'h70 : _GEN_76; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_78 = 8'h4e == io_in ? 256'h0 : _GEN_77; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_79 = 8'h4f == io_in ? 256'h0 : _GEN_78; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_80 = 8'h50 == io_in ? 256'h0 : _GEN_79; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_81 = 8'h51 == io_in ? 256'h0 : _GEN_80; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_82 = 8'h52 == io_in ? 256'h0 : _GEN_81; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_83 = 8'h53 == io_in ? 256'h0 : _GEN_82; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_84 = 8'h54 == io_in ? 256'h0 : _GEN_83; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_85 = 8'h55 == io_in ? 256'h0 : _GEN_84; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_86 = 8'h56 == io_in ? 256'h0 : _GEN_85; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_87 = 8'h57 == io_in ? 256'h0 : _GEN_86; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_88 = 8'h58 == io_in ? 256'h0 : _GEN_87; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_89 = 8'h59 == io_in ? 256'h0 : _GEN_88; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_90 = 8'h5a == io_in ? 256'h0 : _GEN_89; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_91 = 8'h5b == io_in ? 256'h0 : _GEN_90; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_92 = 8'h5c == io_in ? 256'h0 : _GEN_91; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_93 = 8'h5d == io_in ? 256'h0 : _GEN_92; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_94 = 8'h5e == io_in ? 256'h0 : _GEN_93; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_95 = 8'h5f == io_in ? 256'h0 : _GEN_94; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_96 = 8'h60 == io_in ? 256'h0 : _GEN_95; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_97 = 8'h61 == io_in ? 256'h0 : _GEN_96; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_98 = 8'h62 == io_in ? 256'h0 : _GEN_97; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_99 = 8'h63 == io_in ? 256'h0 : _GEN_98; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_100 = 8'h64 == io_in ? 256'h0 : _GEN_99; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_101 = 8'h65 == io_in ? 256'h0 : _GEN_100; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_102 = 8'h66 == io_in ? 256'h0 : _GEN_101; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_103 = 8'h67 == io_in ? 256'h0 : _GEN_102; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_104 = 8'h68 == io_in ? 256'h0 : _GEN_103; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_105 = 8'h69 == io_in ? 256'h0 : _GEN_104; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_106 = 8'h6a == io_in ? 256'h0 : _GEN_105; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_107 = 8'h6b == io_in ? 256'h0 : _GEN_106; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_108 = 8'h6c == io_in ? 256'h0 : _GEN_107; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_109 = 8'h6d == io_in ? 256'h0 : _GEN_108; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_110 = 8'h6e == io_in ? 256'h0 : _GEN_109; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_111 = 8'h6f == io_in ? 256'h0 : _GEN_110; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_112 = 8'h70 == io_in ? 256'h0 : _GEN_111; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_113 = 8'h71 == io_in ? 256'h0 : _GEN_112; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_114 = 8'h72 == io_in ? 256'h0 : _GEN_113; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_115 = 8'h73 == io_in ? 256'h0 : _GEN_114; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_116 = 8'h74 == io_in ? 256'h0 : _GEN_115; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_117 = 8'h75 == io_in ? 256'h0 : _GEN_116; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_118 = 8'h76 == io_in ? 256'h0 : _GEN_117; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_119 = 8'h77 == io_in ? 256'h0 : _GEN_118; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_120 = 8'h78 == io_in ? 256'h0 : _GEN_119; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_121 = 8'h79 == io_in ? 256'h0 : _GEN_120; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_122 = 8'h7a == io_in ? 256'h0 : _GEN_121; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_123 = 8'h7b == io_in ? 256'h0 : _GEN_122; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_124 = 8'h7c == io_in ? 256'h0 : _GEN_123; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_125 = 8'h7d == io_in ? 256'h0 : _GEN_124; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_126 = 8'h7e == io_in ? 256'h0 : _GEN_125; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_127 = 8'h7f == io_in ? 256'h0 : _GEN_126; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_128 = 8'h80 == io_in ? 256'h0 : _GEN_127; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_129 = 8'h81 == io_in ? 256'h0 : _GEN_128; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_130 = 8'h82 == io_in ? 256'h0 : _GEN_129; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_131 = 8'h83 == io_in ? 256'h0 : _GEN_130; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_132 = 8'h84 == io_in ? 256'h0 : _GEN_131; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_133 = 8'h85 == io_in ? 256'h0 : _GEN_132; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_134 = 8'h86 == io_in ? 256'h0 : _GEN_133; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_135 = 8'h87 == io_in ? 256'h0 : _GEN_134; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_136 = 8'h88 == io_in ? 256'h0 : _GEN_135; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_137 = 8'h89 == io_in ? 256'h0 : _GEN_136; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_138 = 8'h8a == io_in ? 256'h0 : _GEN_137; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_139 = 8'h8b == io_in ? 256'h0 : _GEN_138; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_140 = 8'h8c == io_in ? 256'h0 : _GEN_139; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_141 = 8'h8d == io_in ? 256'h0 : _GEN_140; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_142 = 8'h8e == io_in ? 256'h0 : _GEN_141; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_143 = 8'h8f == io_in ? 256'h0 : _GEN_142; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_144 = 8'h90 == io_in ? 256'h0 : _GEN_143; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_145 = 8'h91 == io_in ? 256'h0 : _GEN_144; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_146 = 8'h92 == io_in ? 256'h0 : _GEN_145; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_147 = 8'h93 == io_in ? 256'h0 : _GEN_146; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_148 = 8'h94 == io_in ? 256'h0 : _GEN_147; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_149 = 8'h95 == io_in ? 256'h0 : _GEN_148; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_150 = 8'h96 == io_in ? 256'h0 : _GEN_149; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_151 = 8'h97 == io_in ? 256'h0 : _GEN_150; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_152 = 8'h98 == io_in ? 256'h0 : _GEN_151; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_153 = 8'h99 == io_in ? 256'h0 : _GEN_152; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_154 = 8'h9a == io_in ? 256'h0 : _GEN_153; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_155 = 8'h9b == io_in ? 256'h0 : _GEN_154; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_156 = 8'h9c == io_in ? 256'h0 : _GEN_155; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_157 = 8'h9d == io_in ? 256'h0 : _GEN_156; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_158 = 8'h9e == io_in ? 256'h0 : _GEN_157; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_159 = 8'h9f == io_in ? 256'h0 : _GEN_158; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_160 = 8'ha0 == io_in ? 256'h0 : _GEN_159; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_161 = 8'ha1 == io_in ? 256'h0 : _GEN_160; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_162 = 8'ha2 == io_in ? 256'h0 : _GEN_161; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_163 = 8'ha3 == io_in ? 256'h0 : _GEN_162; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_164 = 8'ha4 == io_in ? 256'h0 : _GEN_163; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_165 = 8'ha5 == io_in ? 256'h0 : _GEN_164; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_166 = 8'ha6 == io_in ? 256'h0 : _GEN_165; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_167 = 8'ha7 == io_in ? 256'h0 : _GEN_166; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_168 = 8'ha8 == io_in ? 256'h0 : _GEN_167; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_169 = 8'ha9 == io_in ? 256'h0 : _GEN_168; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_170 = 8'haa == io_in ? 256'h0 : _GEN_169; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_171 = 8'hab == io_in ? 256'h0 : _GEN_170; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_172 = 8'hac == io_in ? 256'h0 : _GEN_171; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_173 = 8'had == io_in ? 256'h0 : _GEN_172; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_174 = 8'hae == io_in ? 256'h0 : _GEN_173; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_175 = 8'haf == io_in ? 256'h0 : _GEN_174; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_176 = 8'hb0 == io_in ? 256'h0 : _GEN_175; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_177 = 8'hb1 == io_in ? 256'h0 : _GEN_176; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_178 = 8'hb2 == io_in ? 256'h0 : _GEN_177; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_179 = 8'hb3 == io_in ? 256'h0 : _GEN_178; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_180 = 8'hb4 == io_in ? 256'h0 : _GEN_179; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_181 = 8'hb5 == io_in ? 256'h0 : _GEN_180; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_182 = 8'hb6 == io_in ? 256'h0 : _GEN_181; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_183 = 8'hb7 == io_in ? 256'h0 : _GEN_182; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_184 = 8'hb8 == io_in ? 256'h0 : _GEN_183; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_185 = 8'hb9 == io_in ? 256'h0 : _GEN_184; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_186 = 8'hba == io_in ? 256'h0 : _GEN_185; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_187 = 8'hbb == io_in ? 256'h0 : _GEN_186; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_188 = 8'hbc == io_in ? 256'h0 : _GEN_187; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_189 = 8'hbd == io_in ? 256'h0 : _GEN_188; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_190 = 8'hbe == io_in ? 256'h0 : _GEN_189; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_191 = 8'hbf == io_in ? 256'h0 : _GEN_190; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_192 = 8'hc0 == io_in ? 256'h0 : _GEN_191; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_193 = 8'hc1 == io_in ? 256'h0 : _GEN_192; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_194 = 8'hc2 == io_in ? 256'h0 : _GEN_193; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_195 = 8'hc3 == io_in ? 256'h0 : _GEN_194; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_196 = 8'hc4 == io_in ? 256'h0 : _GEN_195; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_197 = 8'hc5 == io_in ? 256'h0 : _GEN_196; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_198 = 8'hc6 == io_in ? 256'h0 : _GEN_197; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_199 = 8'hc7 == io_in ? 256'h0 : _GEN_198; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_200 = 8'hc8 == io_in ? 256'h0 : _GEN_199; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_201 = 8'hc9 == io_in ? 256'h0 : _GEN_200; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_202 = 8'hca == io_in ? 256'h0 : _GEN_201; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_203 = 8'hcb == io_in ? 256'h0 : _GEN_202; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_204 = 8'hcc == io_in ? 256'h0 : _GEN_203; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_205 = 8'hcd == io_in ? 256'h0 : _GEN_204; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_206 = 8'hce == io_in ? 256'h0 : _GEN_205; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_207 = 8'hcf == io_in ? 256'h0 : _GEN_206; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_208 = 8'hd0 == io_in ? 256'h0 : _GEN_207; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_209 = 8'hd1 == io_in ? 256'h0 : _GEN_208; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_210 = 8'hd2 == io_in ? 256'h0 : _GEN_209; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_211 = 8'hd3 == io_in ? 256'h0 : _GEN_210; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_212 = 8'hd4 == io_in ? 256'h0 : _GEN_211; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_213 = 8'hd5 == io_in ? 256'h0 : _GEN_212; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_214 = 8'hd6 == io_in ? 256'h0 : _GEN_213; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_215 = 8'hd7 == io_in ? 256'h0 : _GEN_214; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_216 = 8'hd8 == io_in ? 256'h0 : _GEN_215; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_217 = 8'hd9 == io_in ? 256'h0 : _GEN_216; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_218 = 8'hda == io_in ? 256'h0 : _GEN_217; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_219 = 8'hdb == io_in ? 256'h0 : _GEN_218; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_220 = 8'hdc == io_in ? 256'h0 : _GEN_219; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_221 = 8'hdd == io_in ? 256'h0 : _GEN_220; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_222 = 8'hde == io_in ? 256'h0 : _GEN_221; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_223 = 8'hdf == io_in ? 256'h0 : _GEN_222; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_224 = 8'he0 == io_in ? 256'h0 : _GEN_223; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_225 = 8'he1 == io_in ? 256'h0 : _GEN_224; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_226 = 8'he2 == io_in ? 256'h0 : _GEN_225; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_227 = 8'he3 == io_in ? 256'h0 : _GEN_226; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_228 = 8'he4 == io_in ? 256'h0 : _GEN_227; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_229 = 8'he5 == io_in ? 256'h0 : _GEN_228; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_230 = 8'he6 == io_in ? 256'h0 : _GEN_229; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_231 = 8'he7 == io_in ? 256'h0 : _GEN_230; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_232 = 8'he8 == io_in ? 256'h0 : _GEN_231; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_233 = 8'he9 == io_in ? 256'h0 : _GEN_232; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_234 = 8'hea == io_in ? 256'h0 : _GEN_233; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_235 = 8'heb == io_in ? 256'h0 : _GEN_234; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_236 = 8'hec == io_in ? 256'h0 : _GEN_235; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_237 = 8'hed == io_in ? 256'h0 : _GEN_236; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_238 = 8'hee == io_in ? 256'h0 : _GEN_237; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_239 = 8'hef == io_in ? 256'h0 : _GEN_238; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_240 = 8'hf0 == io_in ? 256'h0 : _GEN_239; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_241 = 8'hf1 == io_in ? 256'h0 : _GEN_240; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_242 = 8'hf2 == io_in ? 256'h0 : _GEN_241; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_243 = 8'hf3 == io_in ? 256'h0 : _GEN_242; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_244 = 8'hf4 == io_in ? 256'h0 : _GEN_243; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_245 = 8'hf5 == io_in ? 256'h0 : _GEN_244; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_246 = 8'hf6 == io_in ? 256'h0 : _GEN_245; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_247 = 8'hf7 == io_in ? 256'h0 : _GEN_246; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_248 = 8'hf8 == io_in ? 256'h0 : _GEN_247; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_249 = 8'hf9 == io_in ? 256'h0 : _GEN_248; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_250 = 8'hfa == io_in ? 256'h0 : _GEN_249; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_251 = 8'hfb == io_in ? 256'h0 : _GEN_250; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_252 = 8'hfc == io_in ? 256'h0 : _GEN_251; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_253 = 8'hfd == io_in ? 256'h0 : _GEN_252; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_254 = 8'hfe == io_in ? 256'h0 : _GEN_253; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  wire [255:0] _GEN_255 = 8'hff == io_in ? 256'h0 : _GEN_254; // @[Passthrough.scala 215:11 Passthrough.scala 215:11]
  assign io_out = _GEN_255[7:0]; // @[Passthrough.scala 215:11]
endmodule
module Passthrough(
  input        clock,
  input        reset,
  input        io_rst,
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
`endif // RANDOMIZE_REG_INIT
  wire  ps2_clock; // @[Passthrough.scala 15:19]
  wire  ps2_io_clrn; // @[Passthrough.scala 15:19]
  wire  ps2_io_ps2_clk; // @[Passthrough.scala 15:19]
  wire  ps2_io_ps2_data; // @[Passthrough.scala 15:19]
  wire  ps2_io_nextdata_n; // @[Passthrough.scala 15:19]
  wire [7:0] ps2_io_data; // @[Passthrough.scala 15:19]
  wire  ps2_io_ready; // @[Passthrough.scala 15:19]
  wire  m0_io_en; // @[Passthrough.scala 66:18]
  wire [3:0] m0_io_in; // @[Passthrough.scala 66:18]
  wire [7:0] m0_io_out; // @[Passthrough.scala 66:18]
  wire  m1_io_en; // @[Passthrough.scala 70:18]
  wire [3:0] m1_io_in; // @[Passthrough.scala 70:18]
  wire [7:0] m1_io_out; // @[Passthrough.scala 70:18]
  wire [7:0] mm_io_in; // @[Passthrough.scala 76:18]
  wire [7:0] mm_io_out; // @[Passthrough.scala 76:18]
  wire  m2_io_en; // @[Passthrough.scala 80:18]
  wire [3:0] m2_io_in; // @[Passthrough.scala 80:18]
  wire [7:0] m2_io_out; // @[Passthrough.scala 80:18]
  wire  m3_io_en; // @[Passthrough.scala 84:18]
  wire [3:0] m3_io_in; // @[Passthrough.scala 84:18]
  wire [7:0] m3_io_out; // @[Passthrough.scala 84:18]
  wire  m4_io_en; // @[Passthrough.scala 89:18]
  wire [3:0] m4_io_in; // @[Passthrough.scala 89:18]
  wire [7:0] m4_io_out; // @[Passthrough.scala 89:18]
  wire  m5_io_en; // @[Passthrough.scala 93:18]
  wire [3:0] m5_io_in; // @[Passthrough.scala 93:18]
  wire [7:0] m5_io_out; // @[Passthrough.scala 93:18]
  wire  m6_io_en; // @[Passthrough.scala 98:18]
  wire [3:0] m6_io_in; // @[Passthrough.scala 98:18]
  wire [7:0] m6_io_out; // @[Passthrough.scala 98:18]
  wire  m7_io_en; // @[Passthrough.scala 102:18]
  wire [3:0] m7_io_in; // @[Passthrough.scala 102:18]
  wire [7:0] m7_io_out; // @[Passthrough.scala 102:18]
  reg [7:0] data; // @[Passthrough.scala 11:17]
  reg  ready; // @[Passthrough.scala 12:18]
  reg  nextdata; // @[Passthrough.scala 14:21]
  reg [3:0] now; // @[Passthrough.scala 29:20]
  reg [3:0] next; // @[Passthrough.scala 30:21]
  wire  _T = now == 4'h1; // @[Passthrough.scala 32:13]
  wire [1:0] _GEN_0 = ready ? 2'h2 : 2'h1; // @[Passthrough.scala 33:26 Passthrough.scala 34:17 Passthrough.scala 36:17]
  wire  _T_2 = now == 4'h2; // @[Passthrough.scala 38:19]
  wire  _T_3 = now == 4'h4; // @[Passthrough.scala 40:19]
  wire  _T_4 = now == 4'h8; // @[Passthrough.scala 42:19]
  reg [23:0] ps2segdata; // @[Passthrough.scala 47:27]
  wire [15:0] ps2segdata_hi = ps2segdata[15:0]; // @[Passthrough.scala 53:35]
  wire [23:0] _ps2segdata_T = {ps2segdata_hi,data}; // @[Cat.scala 30:58]
  wire  _GEN_6 = _T_2 ? nextdata : 1'h1; // @[Passthrough.scala 52:25 Passthrough.scala 14:21 Passthrough.scala 55:17]
  wire  _GEN_7 = _T_3 | _T_4 ? 1'h0 : _GEN_6; // @[Passthrough.scala 50:35 Passthrough.scala 51:17]
  reg [6:0] num; // @[Passthrough.scala 57:20]
  reg  segen; // @[Passthrough.scala 58:22]
  wire [6:0] _num_T_1 = num + 7'h1; // @[Passthrough.scala 62:17]
  reg [7:0] ascii; // @[Passthrough.scala 75:22]
  wire [6:0] _GEN_1 = num % 7'ha; // @[Passthrough.scala 100:19]
  wire [6:0] _m6_io_in_T = _GEN_1[6:0]; // @[Passthrough.scala 100:19]
  wire [6:0] _m7_io_in_T = num / 7'ha; // @[Passthrough.scala 104:19]
  ps2_keyboard ps2 ( // @[Passthrough.scala 15:19]
    .clock(ps2_clock),
    .io_clrn(ps2_io_clrn),
    .io_ps2_clk(ps2_io_ps2_clk),
    .io_ps2_data(ps2_io_ps2_data),
    .io_nextdata_n(ps2_io_nextdata_n),
    .io_data(ps2_io_data),
    .io_ready(ps2_io_ready)
  );
  seg m0 ( // @[Passthrough.scala 66:18]
    .io_en(m0_io_en),
    .io_in(m0_io_in),
    .io_out(m0_io_out)
  );
  seg m1 ( // @[Passthrough.scala 70:18]
    .io_en(m1_io_en),
    .io_in(m1_io_in),
    .io_out(m1_io_out)
  );
  ps2ascii mm ( // @[Passthrough.scala 76:18]
    .io_in(mm_io_in),
    .io_out(mm_io_out)
  );
  seg m2 ( // @[Passthrough.scala 80:18]
    .io_en(m2_io_en),
    .io_in(m2_io_in),
    .io_out(m2_io_out)
  );
  seg m3 ( // @[Passthrough.scala 84:18]
    .io_en(m3_io_en),
    .io_in(m3_io_in),
    .io_out(m3_io_out)
  );
  seg m4 ( // @[Passthrough.scala 89:18]
    .io_en(m4_io_en),
    .io_in(m4_io_in),
    .io_out(m4_io_out)
  );
  seg m5 ( // @[Passthrough.scala 93:18]
    .io_en(m5_io_en),
    .io_in(m5_io_in),
    .io_out(m5_io_out)
  );
  seg m6 ( // @[Passthrough.scala 98:18]
    .io_en(m6_io_en),
    .io_in(m6_io_in),
    .io_out(m6_io_out)
  );
  seg m7 ( // @[Passthrough.scala 102:18]
    .io_en(m7_io_en),
    .io_in(m7_io_in),
    .io_out(m7_io_out)
  );
  assign io_bcd8seg_0 = m0_io_out; // @[Passthrough.scala 69:18]
  assign io_bcd8seg_1 = m1_io_out; // @[Passthrough.scala 73:18]
  assign io_bcd8seg_2 = m2_io_out; // @[Passthrough.scala 83:18]
  assign io_bcd8seg_3 = m3_io_out; // @[Passthrough.scala 87:18]
  assign io_bcd8seg_4 = m4_io_out; // @[Passthrough.scala 92:18]
  assign io_bcd8seg_5 = m5_io_out; // @[Passthrough.scala 96:18]
  assign io_bcd8seg_6 = m6_io_out; // @[Passthrough.scala 101:18]
  assign io_bcd8seg_7 = m7_io_out; // @[Passthrough.scala 105:18]
  assign ps2_clock = clock;
  assign ps2_io_clrn = ~io_rst; // @[Passthrough.scala 16:19]
  assign ps2_io_ps2_clk = io_ps2_clk; // @[Passthrough.scala 17:19]
  assign ps2_io_ps2_data = io_ps2_data; // @[Passthrough.scala 18:20]
  assign ps2_io_nextdata_n = nextdata; // @[Passthrough.scala 19:22]
  assign m0_io_en = segen; // @[Passthrough.scala 67:13]
  assign m0_io_in = ps2segdata[3:0]; // @[Passthrough.scala 68:25]
  assign m1_io_en = segen; // @[Passthrough.scala 71:13]
  assign m1_io_in = ps2segdata[7:4]; // @[Passthrough.scala 72:25]
  assign mm_io_in = ps2segdata[7:0]; // @[Passthrough.scala 77:25]
  assign m2_io_en = segen; // @[Passthrough.scala 81:13]
  assign m2_io_in = ascii[3:0]; // @[Passthrough.scala 82:20]
  assign m3_io_en = segen; // @[Passthrough.scala 85:13]
  assign m3_io_in = ascii[7:4]; // @[Passthrough.scala 86:20]
  assign m4_io_en = 1'h0; // @[Passthrough.scala 90:13]
  assign m4_io_in = ps2segdata[3:0]; // @[Passthrough.scala 91:25]
  assign m5_io_en = 1'h0; // @[Passthrough.scala 94:13]
  assign m5_io_in = ps2segdata[7:4]; // @[Passthrough.scala 95:25]
  assign m6_io_en = 1'h1; // @[Passthrough.scala 99:13]
  assign m6_io_in = _m6_io_in_T[3:0]; // @[Passthrough.scala 100:30]
  assign m7_io_en = 1'h1; // @[Passthrough.scala 103:13]
  assign m7_io_in = _m7_io_in_T[3:0]; // @[Passthrough.scala 104:30]
  always @(posedge clock) begin
    data <= ps2_io_data; // @[Passthrough.scala 20:9]
    ready <= ps2_io_ready; // @[Passthrough.scala 21:10]
    nextdata <= _T | _GEN_7; // @[Passthrough.scala 48:19 Passthrough.scala 49:17]
    if (reset) begin // @[Passthrough.scala 29:20]
      now <= 4'h1; // @[Passthrough.scala 29:20]
    end else begin
      now <= next; // @[Passthrough.scala 31:8]
    end
    if (reset) begin // @[Passthrough.scala 30:21]
      next <= 4'h1; // @[Passthrough.scala 30:21]
    end else if (now == 4'h1) begin // @[Passthrough.scala 32:19]
      next <= {{2'd0}, _GEN_0};
    end else if (now == 4'h2) begin // @[Passthrough.scala 38:25]
      next <= 4'h4; // @[Passthrough.scala 39:13]
    end else if (now == 4'h4) begin // @[Passthrough.scala 40:25]
      next <= 4'h8; // @[Passthrough.scala 41:13]
    end else begin
      next <= 4'h1;
    end
    if (reset) begin // @[Passthrough.scala 47:27]
      ps2segdata <= 24'h0; // @[Passthrough.scala 47:27]
    end else if (!(_T)) begin // @[Passthrough.scala 48:19]
      if (!(_T_3 | _T_4)) begin // @[Passthrough.scala 50:35]
        if (_T_2) begin // @[Passthrough.scala 52:25]
          ps2segdata <= _ps2segdata_T; // @[Passthrough.scala 53:19]
        end
      end
    end
    if (reset) begin // @[Passthrough.scala 57:20]
      num <= 7'h0; // @[Passthrough.scala 57:20]
    end else if (ps2segdata[15:8] == 8'hf0 & ps2segdata[7:0] == ps2segdata[23:16]) begin // @[Passthrough.scala 60:76]
      num <= _num_T_1; // @[Passthrough.scala 62:12]
    end else begin
      num <= 7'ha; // @[Passthrough.scala 59:8]
    end
    if (reset) begin // @[Passthrough.scala 58:22]
      segen <= 1'h0; // @[Passthrough.scala 58:22]
    end else if (ps2segdata[15:8] == 8'hf0 & ps2segdata[7:0] == ps2segdata[23:16]) begin // @[Passthrough.scala 60:76]
      segen <= 1'h0; // @[Passthrough.scala 61:14]
    end else begin
      segen <= 1'h1; // @[Passthrough.scala 64:14]
    end
    if (reset) begin // @[Passthrough.scala 75:22]
      ascii <= 8'h0; // @[Passthrough.scala 75:22]
    end else begin
      ascii <= mm_io_out; // @[Passthrough.scala 78:10]
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
  ascii = _RAND_8[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

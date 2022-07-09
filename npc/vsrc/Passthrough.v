module Passthrough(
  input        clock,
  input        reset,
  input        io_clrn,
  input        io_ps2_clk,
  input        io_ps2_data,
  input        io_nextdata_n,
  output [7:0] io_data,
  output       io_ready,
  output       io_overflow
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
  reg [31:0] _RAND_23;
`endif // RANDOMIZE_REG_INIT
  reg  rea; // @[Passthrough.scala 14:16]
  reg  ov; // @[Passthrough.scala 18:15]
  reg  buffer_0; // @[Passthrough.scala 20:19]
  reg  buffer_1; // @[Passthrough.scala 20:19]
  reg  buffer_2; // @[Passthrough.scala 20:19]
  reg  buffer_3; // @[Passthrough.scala 20:19]
  reg  buffer_4; // @[Passthrough.scala 20:19]
  reg  buffer_5; // @[Passthrough.scala 20:19]
  reg  buffer_6; // @[Passthrough.scala 20:19]
  reg  buffer_7; // @[Passthrough.scala 20:19]
  reg  buffer_8; // @[Passthrough.scala 20:19]
  reg  buffer_9; // @[Passthrough.scala 20:19]
  reg [7:0] fifo_0; // @[Passthrough.scala 21:17]
  reg [7:0] fifo_1; // @[Passthrough.scala 21:17]
  reg [7:0] fifo_2; // @[Passthrough.scala 21:17]
  reg [7:0] fifo_3; // @[Passthrough.scala 21:17]
  reg [7:0] fifo_4; // @[Passthrough.scala 21:17]
  reg [7:0] fifo_5; // @[Passthrough.scala 21:17]
  reg [7:0] fifo_6; // @[Passthrough.scala 21:17]
  reg [7:0] fifo_7; // @[Passthrough.scala 21:17]
  reg [2:0] w_ptr; // @[Passthrough.scala 22:18]
  reg [2:0] r_ptr; // @[Passthrough.scala 23:18]
  reg [3:0] count; // @[Passthrough.scala 24:18]
  reg [2:0] ps2_clk_sync; // @[Passthrough.scala 25:25]
  wire [1:0] ps2_clk_sync_hi = ps2_clk_sync[1:0]; // @[Passthrough.scala 27:35]
  wire  sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1]; // @[Passthrough.scala 29:30]
  wire [2:0] _r_ptr_T_1 = r_ptr + 3'h1; // @[Passthrough.scala 41:29]
  wire  _GEN_0 = w_ptr == _r_ptr_T_1 ? 1'h0 : rea; // @[Passthrough.scala 42:42 Passthrough.scala 43:24 Passthrough.scala 14:16]
  wire  _GEN_1 = w_ptr == _r_ptr_T_1 & rea; // @[Passthrough.scala 42:42 Passthrough.scala 44:29 Passthrough.scala 16:13]
  wire  _GEN_3 = ~io_nextdata_n ? _GEN_0 : rea; // @[Passthrough.scala 40:38 Passthrough.scala 14:16]
  wire  _GEN_4 = ~io_nextdata_n & _GEN_1; // @[Passthrough.scala 40:38 Passthrough.scala 16:13]
  wire  _GEN_6 = rea ? _GEN_3 : rea; // @[Passthrough.scala 39:24 Passthrough.scala 14:16]
  wire  _GEN_7 = rea & _GEN_4; // @[Passthrough.scala 39:24 Passthrough.scala 16:13]
  wire [7:0] _fifo_T = {buffer_8,buffer_7,buffer_6,buffer_5,buffer_4,buffer_3,buffer_2,buffer_1}; // @[Cat.scala 30:58]
  wire [7:0] _GEN_8 = 3'h0 == w_ptr ? _fifo_T : fifo_0; // @[Passthrough.scala 51:32 Passthrough.scala 51:32 Passthrough.scala 21:17]
  wire [7:0] _GEN_9 = 3'h1 == w_ptr ? _fifo_T : fifo_1; // @[Passthrough.scala 51:32 Passthrough.scala 51:32 Passthrough.scala 21:17]
  wire [7:0] _GEN_10 = 3'h2 == w_ptr ? _fifo_T : fifo_2; // @[Passthrough.scala 51:32 Passthrough.scala 51:32 Passthrough.scala 21:17]
  wire [7:0] _GEN_11 = 3'h3 == w_ptr ? _fifo_T : fifo_3; // @[Passthrough.scala 51:32 Passthrough.scala 51:32 Passthrough.scala 21:17]
  wire [7:0] _GEN_12 = 3'h4 == w_ptr ? _fifo_T : fifo_4; // @[Passthrough.scala 51:32 Passthrough.scala 51:32 Passthrough.scala 21:17]
  wire [7:0] _GEN_13 = 3'h5 == w_ptr ? _fifo_T : fifo_5; // @[Passthrough.scala 51:32 Passthrough.scala 51:32 Passthrough.scala 21:17]
  wire [7:0] _GEN_14 = 3'h6 == w_ptr ? _fifo_T : fifo_6; // @[Passthrough.scala 51:32 Passthrough.scala 51:32 Passthrough.scala 21:17]
  wire [7:0] _GEN_15 = 3'h7 == w_ptr ? _fifo_T : fifo_7; // @[Passthrough.scala 51:32 Passthrough.scala 51:32 Passthrough.scala 21:17]
  wire [2:0] _w_ptr_T_1 = w_ptr + 3'h1; // @[Passthrough.scala 52:33]
  wire  _GEN_25 = ~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3
     ^ buffer_2 ^ buffer_1) | _GEN_6; // @[Passthrough.scala 50:162 Passthrough.scala 53:24]
  wire  _GEN_26 = ~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3
     ^ buffer_2 ^ buffer_1) & (ov | r_ptr == _w_ptr_T_1); // @[Passthrough.scala 50:162 Passthrough.scala 54:23 Passthrough.scala 19:7]
  wire  _GEN_27 = ~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3
     ^ buffer_2 ^ buffer_1) & ov; // @[Passthrough.scala 50:162 Passthrough.scala 55:32 Passthrough.scala 17:16]
  wire [3:0] _count_T_1 = count + 4'h1; // @[Passthrough.scala 60:29]
  wire  _GEN_48 = count == 4'ha & _GEN_26; // @[Passthrough.scala 49:31 Passthrough.scala 19:7]
  wire  _GEN_49 = count == 4'ha & _GEN_27; // @[Passthrough.scala 49:31 Passthrough.scala 17:16]
  wire  _GEN_71 = sampling & _GEN_48; // @[Passthrough.scala 48:29 Passthrough.scala 19:7]
  wire  _GEN_72 = sampling & _GEN_49; // @[Passthrough.scala 48:29 Passthrough.scala 17:16]
  wire [7:0] _GEN_110 = 3'h1 == r_ptr ? fifo_1 : fifo_0; // @[Passthrough.scala 64:12 Passthrough.scala 64:12]
  wire [7:0] _GEN_111 = 3'h2 == r_ptr ? fifo_2 : _GEN_110; // @[Passthrough.scala 64:12 Passthrough.scala 64:12]
  wire [7:0] _GEN_112 = 3'h3 == r_ptr ? fifo_3 : _GEN_111; // @[Passthrough.scala 64:12 Passthrough.scala 64:12]
  wire [7:0] _GEN_113 = 3'h4 == r_ptr ? fifo_4 : _GEN_112; // @[Passthrough.scala 64:12 Passthrough.scala 64:12]
  wire [7:0] _GEN_114 = 3'h5 == r_ptr ? fifo_5 : _GEN_113; // @[Passthrough.scala 64:12 Passthrough.scala 64:12]
  wire [7:0] _GEN_115 = 3'h6 == r_ptr ? fifo_6 : _GEN_114; // @[Passthrough.scala 64:12 Passthrough.scala 64:12]
  assign io_data = 3'h7 == r_ptr ? fifo_7 : _GEN_115; // @[Passthrough.scala 64:12 Passthrough.scala 64:12]
  assign io_ready = ~io_clrn ? rea : _GEN_7; // @[Passthrough.scala 30:24 Passthrough.scala 36:17]
  assign io_overflow = ~io_clrn ? ov : _GEN_72; // @[Passthrough.scala 30:24 Passthrough.scala 37:20]
  always @(posedge clock) begin
    if (~io_clrn) begin // @[Passthrough.scala 30:24]
      rea <= 1'h0; // @[Passthrough.scala 35:12]
    end else if (sampling) begin // @[Passthrough.scala 48:29]
      if (count == 4'ha) begin // @[Passthrough.scala 49:31]
        rea <= _GEN_25;
      end else begin
        rea <= _GEN_6;
      end
    end else begin
      rea <= _GEN_6;
    end
    if (~io_clrn) begin // @[Passthrough.scala 30:24]
      ov <= 1'h0; // @[Passthrough.scala 34:11]
    end else begin
      ov <= _GEN_71;
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 49:31]
          if (4'h0 == count) begin // @[Passthrough.scala 59:30]
            buffer_0 <= io_ps2_data; // @[Passthrough.scala 59:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 49:31]
          if (4'h1 == count) begin // @[Passthrough.scala 59:30]
            buffer_1 <= io_ps2_data; // @[Passthrough.scala 59:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 49:31]
          if (4'h2 == count) begin // @[Passthrough.scala 59:30]
            buffer_2 <= io_ps2_data; // @[Passthrough.scala 59:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 49:31]
          if (4'h3 == count) begin // @[Passthrough.scala 59:30]
            buffer_3 <= io_ps2_data; // @[Passthrough.scala 59:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 49:31]
          if (4'h4 == count) begin // @[Passthrough.scala 59:30]
            buffer_4 <= io_ps2_data; // @[Passthrough.scala 59:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 49:31]
          if (4'h5 == count) begin // @[Passthrough.scala 59:30]
            buffer_5 <= io_ps2_data; // @[Passthrough.scala 59:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 49:31]
          if (4'h6 == count) begin // @[Passthrough.scala 59:30]
            buffer_6 <= io_ps2_data; // @[Passthrough.scala 59:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 49:31]
          if (4'h7 == count) begin // @[Passthrough.scala 59:30]
            buffer_7 <= io_ps2_data; // @[Passthrough.scala 59:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 49:31]
          if (4'h8 == count) begin // @[Passthrough.scala 59:30]
            buffer_8 <= io_ps2_data; // @[Passthrough.scala 59:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (!(count == 4'ha)) begin // @[Passthrough.scala 49:31]
          if (4'h9 == count) begin // @[Passthrough.scala 59:30]
            buffer_9 <= io_ps2_data; // @[Passthrough.scala 59:30]
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (count == 4'ha) begin // @[Passthrough.scala 49:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 50:162]
            fifo_0 <= _GEN_8;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (count == 4'ha) begin // @[Passthrough.scala 49:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 50:162]
            fifo_1 <= _GEN_9;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (count == 4'ha) begin // @[Passthrough.scala 49:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 50:162]
            fifo_2 <= _GEN_10;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (count == 4'ha) begin // @[Passthrough.scala 49:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 50:162]
            fifo_3 <= _GEN_11;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (count == 4'ha) begin // @[Passthrough.scala 49:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 50:162]
            fifo_4 <= _GEN_12;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (count == 4'ha) begin // @[Passthrough.scala 49:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 50:162]
            fifo_5 <= _GEN_13;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (count == 4'ha) begin // @[Passthrough.scala 49:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 50:162]
            fifo_6 <= _GEN_14;
          end
        end
      end
    end
    if (!(~io_clrn)) begin // @[Passthrough.scala 30:24]
      if (sampling) begin // @[Passthrough.scala 48:29]
        if (count == 4'ha) begin // @[Passthrough.scala 49:31]
          if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
            buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 50:162]
            fifo_7 <= _GEN_15;
          end
        end
      end
    end
    if (~io_clrn) begin // @[Passthrough.scala 30:24]
      w_ptr <= 3'h0; // @[Passthrough.scala 32:14]
    end else if (sampling) begin // @[Passthrough.scala 48:29]
      if (count == 4'ha) begin // @[Passthrough.scala 49:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[Passthrough.scala 50:162]
          w_ptr <= _w_ptr_T_1; // @[Passthrough.scala 52:26]
        end
      end
    end
    if (~io_clrn) begin // @[Passthrough.scala 30:24]
      r_ptr <= 3'h0; // @[Passthrough.scala 33:14]
    end else if (rea) begin // @[Passthrough.scala 39:24]
      if (~io_nextdata_n) begin // @[Passthrough.scala 40:38]
        r_ptr <= _r_ptr_T_1; // @[Passthrough.scala 41:22]
      end
    end
    if (~io_clrn) begin // @[Passthrough.scala 30:24]
      count <= 4'h0; // @[Passthrough.scala 31:14]
    end else if (sampling) begin // @[Passthrough.scala 48:29]
      if (count == 4'ha) begin // @[Passthrough.scala 49:31]
        count <= 4'h0; // @[Passthrough.scala 57:22]
      end else begin
        count <= _count_T_1; // @[Passthrough.scala 60:22]
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
  ov = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  buffer_0 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  buffer_1 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  buffer_2 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  buffer_3 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  buffer_4 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  buffer_5 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  buffer_6 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  buffer_7 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  buffer_8 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  buffer_9 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  fifo_0 = _RAND_12[7:0];
  _RAND_13 = {1{`RANDOM}};
  fifo_1 = _RAND_13[7:0];
  _RAND_14 = {1{`RANDOM}};
  fifo_2 = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  fifo_3 = _RAND_15[7:0];
  _RAND_16 = {1{`RANDOM}};
  fifo_4 = _RAND_16[7:0];
  _RAND_17 = {1{`RANDOM}};
  fifo_5 = _RAND_17[7:0];
  _RAND_18 = {1{`RANDOM}};
  fifo_6 = _RAND_18[7:0];
  _RAND_19 = {1{`RANDOM}};
  fifo_7 = _RAND_19[7:0];
  _RAND_20 = {1{`RANDOM}};
  w_ptr = _RAND_20[2:0];
  _RAND_21 = {1{`RANDOM}};
  r_ptr = _RAND_21[2:0];
  _RAND_22 = {1{`RANDOM}};
  count = _RAND_22[3:0];
  _RAND_23 = {1{`RANDOM}};
  ps2_clk_sync = _RAND_23[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

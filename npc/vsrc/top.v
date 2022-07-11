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
  reg  rea; // @[ps2.scala 88:16]
  reg  buffer_0; // @[ps2.scala 96:19]
  reg  buffer_1; // @[ps2.scala 96:19]
  reg  buffer_2; // @[ps2.scala 96:19]
  reg  buffer_3; // @[ps2.scala 96:19]
  reg  buffer_4; // @[ps2.scala 96:19]
  reg  buffer_5; // @[ps2.scala 96:19]
  reg  buffer_6; // @[ps2.scala 96:19]
  reg  buffer_7; // @[ps2.scala 96:19]
  reg  buffer_8; // @[ps2.scala 96:19]
  reg  buffer_9; // @[ps2.scala 96:19]
  reg [7:0] fifo_0; // @[ps2.scala 97:17]
  reg [7:0] fifo_1; // @[ps2.scala 97:17]
  reg [7:0] fifo_2; // @[ps2.scala 97:17]
  reg [7:0] fifo_3; // @[ps2.scala 97:17]
  reg [7:0] fifo_4; // @[ps2.scala 97:17]
  reg [7:0] fifo_5; // @[ps2.scala 97:17]
  reg [7:0] fifo_6; // @[ps2.scala 97:17]
  reg [7:0] fifo_7; // @[ps2.scala 97:17]
  reg [2:0] w_ptr; // @[ps2.scala 98:18]
  reg [2:0] r_ptr; // @[ps2.scala 99:18]
  reg [3:0] count; // @[ps2.scala 100:18]
  reg [2:0] ps2_clk_sync; // @[ps2.scala 101:25]
  wire [1:0] ps2_clk_sync_hi = ps2_clk_sync[1:0]; // @[ps2.scala 103:35]
  wire  sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1]; // @[ps2.scala 105:30]
  wire [2:0] _r_ptr_T_1 = r_ptr + 3'h1; // @[ps2.scala 115:29]
  wire  _GEN_0 = w_ptr == _r_ptr_T_1 ? 1'h0 : rea; // @[ps2.scala 116:42 ps2.scala 117:24 ps2.scala 88:16]
  wire  _GEN_3 = ~io_nextdata_n ? _GEN_0 : rea; // @[ps2.scala 114:38 ps2.scala 88:16]
  wire  _GEN_6 = rea ? _GEN_3 : rea; // @[ps2.scala 113:24 ps2.scala 88:16]
  wire [7:0] _fifo_T = {buffer_8,buffer_7,buffer_6,buffer_5,buffer_4,buffer_3,buffer_2,buffer_1}; // @[Cat.scala 30:58]
  wire [2:0] _w_ptr_T_1 = w_ptr + 3'h1; // @[ps2.scala 126:33]
  wire  _GEN_25 = ~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3
     ^ buffer_2 ^ buffer_1) | _GEN_6; // @[ps2.scala 124:162 ps2.scala 127:24]
  wire [3:0] _count_T_1 = count + 4'h1; // @[ps2.scala 133:29]
  wire [7:0] _GEN_106 = 3'h1 == r_ptr ? fifo_1 : fifo_0; // @[ps2.scala 137:12 ps2.scala 137:12]
  wire [7:0] _GEN_107 = 3'h2 == r_ptr ? fifo_2 : _GEN_106; // @[ps2.scala 137:12 ps2.scala 137:12]
  wire [7:0] _GEN_108 = 3'h3 == r_ptr ? fifo_3 : _GEN_107; // @[ps2.scala 137:12 ps2.scala 137:12]
  wire [7:0] _GEN_109 = 3'h4 == r_ptr ? fifo_4 : _GEN_108; // @[ps2.scala 137:12 ps2.scala 137:12]
  wire [7:0] _GEN_110 = 3'h5 == r_ptr ? fifo_5 : _GEN_109; // @[ps2.scala 137:12 ps2.scala 137:12]
  wire [7:0] _GEN_111 = 3'h6 == r_ptr ? fifo_6 : _GEN_110; // @[ps2.scala 137:12 ps2.scala 137:12]
  assign io_data = 3'h7 == r_ptr ? fifo_7 : _GEN_111; // @[ps2.scala 137:12 ps2.scala 137:12]
  assign io_ready = rea; // @[ps2.scala 106:24 ps2.scala 94:13]
  always @(posedge clock) begin
    if (sampling) begin // @[ps2.scala 122:29]
      if (count == 4'ha) begin // @[ps2.scala 123:31]
        rea <= _GEN_25;
      end else begin
        rea <= _GEN_6;
      end
    end else begin
      rea <= _GEN_6;
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 123:31]
        if (4'h0 == count) begin // @[ps2.scala 132:30]
          buffer_0 <= io_ps2_data; // @[ps2.scala 132:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 123:31]
        if (4'h1 == count) begin // @[ps2.scala 132:30]
          buffer_1 <= io_ps2_data; // @[ps2.scala 132:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 123:31]
        if (4'h2 == count) begin // @[ps2.scala 132:30]
          buffer_2 <= io_ps2_data; // @[ps2.scala 132:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 123:31]
        if (4'h3 == count) begin // @[ps2.scala 132:30]
          buffer_3 <= io_ps2_data; // @[ps2.scala 132:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 123:31]
        if (4'h4 == count) begin // @[ps2.scala 132:30]
          buffer_4 <= io_ps2_data; // @[ps2.scala 132:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 123:31]
        if (4'h5 == count) begin // @[ps2.scala 132:30]
          buffer_5 <= io_ps2_data; // @[ps2.scala 132:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 123:31]
        if (4'h6 == count) begin // @[ps2.scala 132:30]
          buffer_6 <= io_ps2_data; // @[ps2.scala 132:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 123:31]
        if (4'h7 == count) begin // @[ps2.scala 132:30]
          buffer_7 <= io_ps2_data; // @[ps2.scala 132:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 123:31]
        if (4'h8 == count) begin // @[ps2.scala 132:30]
          buffer_8 <= io_ps2_data; // @[ps2.scala 132:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 123:31]
        if (4'h9 == count) begin // @[ps2.scala 132:30]
          buffer_9 <= io_ps2_data; // @[ps2.scala 132:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (count == 4'ha) begin // @[ps2.scala 123:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 124:162]
          if (3'h0 == w_ptr) begin // @[ps2.scala 125:32]
            fifo_0 <= _fifo_T; // @[ps2.scala 125:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (count == 4'ha) begin // @[ps2.scala 123:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 124:162]
          if (3'h1 == w_ptr) begin // @[ps2.scala 125:32]
            fifo_1 <= _fifo_T; // @[ps2.scala 125:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (count == 4'ha) begin // @[ps2.scala 123:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 124:162]
          if (3'h2 == w_ptr) begin // @[ps2.scala 125:32]
            fifo_2 <= _fifo_T; // @[ps2.scala 125:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (count == 4'ha) begin // @[ps2.scala 123:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 124:162]
          if (3'h3 == w_ptr) begin // @[ps2.scala 125:32]
            fifo_3 <= _fifo_T; // @[ps2.scala 125:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (count == 4'ha) begin // @[ps2.scala 123:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 124:162]
          if (3'h4 == w_ptr) begin // @[ps2.scala 125:32]
            fifo_4 <= _fifo_T; // @[ps2.scala 125:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (count == 4'ha) begin // @[ps2.scala 123:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 124:162]
          if (3'h5 == w_ptr) begin // @[ps2.scala 125:32]
            fifo_5 <= _fifo_T; // @[ps2.scala 125:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (count == 4'ha) begin // @[ps2.scala 123:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 124:162]
          if (3'h6 == w_ptr) begin // @[ps2.scala 125:32]
            fifo_6 <= _fifo_T; // @[ps2.scala 125:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (count == 4'ha) begin // @[ps2.scala 123:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 124:162]
          if (3'h7 == w_ptr) begin // @[ps2.scala 125:32]
            fifo_7 <= _fifo_T; // @[ps2.scala 125:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (count == 4'ha) begin // @[ps2.scala 123:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 124:162]
          w_ptr <= _w_ptr_T_1; // @[ps2.scala 126:26]
        end
      end
    end
    if (rea) begin // @[ps2.scala 113:24]
      if (~io_nextdata_n) begin // @[ps2.scala 114:38]
        r_ptr <= _r_ptr_T_1; // @[ps2.scala 115:22]
      end
    end
    if (sampling) begin // @[ps2.scala 122:29]
      if (count == 4'ha) begin // @[ps2.scala 123:31]
        count <= 4'h0; // @[ps2.scala 130:22]
      end else begin
        count <= _count_T_1; // @[ps2.scala 133:22]
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
  wire [255:0] _GEN_21 = 8'h15 == io_in ? 256'h71 : 256'h0; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_22 = 8'h16 == io_in ? 256'h31 : _GEN_21; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_23 = 8'h17 == io_in ? 256'h0 : _GEN_22; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_24 = 8'h18 == io_in ? 256'h0 : _GEN_23; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_25 = 8'h19 == io_in ? 256'h0 : _GEN_24; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_26 = 8'h1a == io_in ? 256'h7a : _GEN_25; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_27 = 8'h1b == io_in ? 256'h73 : _GEN_26; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_28 = 8'h1c == io_in ? 256'h61 : _GEN_27; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_29 = 8'h1d == io_in ? 256'h77 : _GEN_28; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_30 = 8'h1e == io_in ? 256'h32 : _GEN_29; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_31 = 8'h1f == io_in ? 256'h0 : _GEN_30; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_32 = 8'h20 == io_in ? 256'h0 : _GEN_31; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_33 = 8'h21 == io_in ? 256'h63 : _GEN_32; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_34 = 8'h22 == io_in ? 256'h78 : _GEN_33; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_35 = 8'h23 == io_in ? 256'h64 : _GEN_34; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_36 = 8'h24 == io_in ? 256'h65 : _GEN_35; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_37 = 8'h25 == io_in ? 256'h34 : _GEN_36; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_38 = 8'h26 == io_in ? 256'h33 : _GEN_37; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_39 = 8'h27 == io_in ? 256'h0 : _GEN_38; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_40 = 8'h28 == io_in ? 256'h0 : _GEN_39; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_41 = 8'h29 == io_in ? 256'h0 : _GEN_40; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_42 = 8'h2a == io_in ? 256'h76 : _GEN_41; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_43 = 8'h2b == io_in ? 256'h66 : _GEN_42; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_44 = 8'h2c == io_in ? 256'h74 : _GEN_43; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_45 = 8'h2d == io_in ? 256'h72 : _GEN_44; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_46 = 8'h2e == io_in ? 256'h35 : _GEN_45; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_47 = 8'h2f == io_in ? 256'h0 : _GEN_46; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_48 = 8'h30 == io_in ? 256'h0 : _GEN_47; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_49 = 8'h31 == io_in ? 256'h6e : _GEN_48; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_50 = 8'h32 == io_in ? 256'h62 : _GEN_49; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_51 = 8'h33 == io_in ? 256'h68 : _GEN_50; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_52 = 8'h34 == io_in ? 256'h67 : _GEN_51; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_53 = 8'h35 == io_in ? 256'h79 : _GEN_52; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_54 = 8'h36 == io_in ? 256'h36 : _GEN_53; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_55 = 8'h37 == io_in ? 256'h0 : _GEN_54; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_56 = 8'h38 == io_in ? 256'h0 : _GEN_55; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_57 = 8'h39 == io_in ? 256'h0 : _GEN_56; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_58 = 8'h3a == io_in ? 256'h6d : _GEN_57; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_59 = 8'h3b == io_in ? 256'h6a : _GEN_58; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_60 = 8'h3c == io_in ? 256'h75 : _GEN_59; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_61 = 8'h3d == io_in ? 256'h37 : _GEN_60; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_62 = 8'h3e == io_in ? 256'h38 : _GEN_61; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_63 = 8'h3f == io_in ? 256'h0 : _GEN_62; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_64 = 8'h40 == io_in ? 256'h0 : _GEN_63; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_65 = 8'h41 == io_in ? 256'h0 : _GEN_64; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_66 = 8'h42 == io_in ? 256'h6b : _GEN_65; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_67 = 8'h43 == io_in ? 256'h69 : _GEN_66; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_68 = 8'h44 == io_in ? 256'h6f : _GEN_67; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_69 = 8'h45 == io_in ? 256'h30 : _GEN_68; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_70 = 8'h46 == io_in ? 256'h39 : _GEN_69; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_71 = 8'h47 == io_in ? 256'h0 : _GEN_70; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_72 = 8'h48 == io_in ? 256'h0 : _GEN_71; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_73 = 8'h49 == io_in ? 256'h0 : _GEN_72; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_74 = 8'h4a == io_in ? 256'h0 : _GEN_73; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_75 = 8'h4b == io_in ? 256'h6c : _GEN_74; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_76 = 8'h4c == io_in ? 256'h0 : _GEN_75; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_77 = 8'h4d == io_in ? 256'h70 : _GEN_76; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_78 = 8'h4e == io_in ? 256'h0 : _GEN_77; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_79 = 8'h4f == io_in ? 256'h0 : _GEN_78; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_80 = 8'h50 == io_in ? 256'h0 : _GEN_79; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_81 = 8'h51 == io_in ? 256'h0 : _GEN_80; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_82 = 8'h52 == io_in ? 256'h0 : _GEN_81; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_83 = 8'h53 == io_in ? 256'h0 : _GEN_82; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_84 = 8'h54 == io_in ? 256'h0 : _GEN_83; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_85 = 8'h55 == io_in ? 256'h0 : _GEN_84; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_86 = 8'h56 == io_in ? 256'h0 : _GEN_85; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_87 = 8'h57 == io_in ? 256'h0 : _GEN_86; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_88 = 8'h58 == io_in ? 256'h0 : _GEN_87; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_89 = 8'h59 == io_in ? 256'h0 : _GEN_88; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_90 = 8'h5a == io_in ? 256'h0 : _GEN_89; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_91 = 8'h5b == io_in ? 256'h0 : _GEN_90; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_92 = 8'h5c == io_in ? 256'h0 : _GEN_91; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_93 = 8'h5d == io_in ? 256'h0 : _GEN_92; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_94 = 8'h5e == io_in ? 256'h0 : _GEN_93; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_95 = 8'h5f == io_in ? 256'h0 : _GEN_94; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_96 = 8'h60 == io_in ? 256'h0 : _GEN_95; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_97 = 8'h61 == io_in ? 256'h0 : _GEN_96; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_98 = 8'h62 == io_in ? 256'h0 : _GEN_97; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_99 = 8'h63 == io_in ? 256'h0 : _GEN_98; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_100 = 8'h64 == io_in ? 256'h0 : _GEN_99; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_101 = 8'h65 == io_in ? 256'h0 : _GEN_100; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_102 = 8'h66 == io_in ? 256'h0 : _GEN_101; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_103 = 8'h67 == io_in ? 256'h0 : _GEN_102; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_104 = 8'h68 == io_in ? 256'h0 : _GEN_103; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_105 = 8'h69 == io_in ? 256'h0 : _GEN_104; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_106 = 8'h6a == io_in ? 256'h0 : _GEN_105; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_107 = 8'h6b == io_in ? 256'h0 : _GEN_106; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_108 = 8'h6c == io_in ? 256'h0 : _GEN_107; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_109 = 8'h6d == io_in ? 256'h0 : _GEN_108; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_110 = 8'h6e == io_in ? 256'h0 : _GEN_109; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_111 = 8'h6f == io_in ? 256'h0 : _GEN_110; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_112 = 8'h70 == io_in ? 256'h0 : _GEN_111; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_113 = 8'h71 == io_in ? 256'h0 : _GEN_112; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_114 = 8'h72 == io_in ? 256'h0 : _GEN_113; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_115 = 8'h73 == io_in ? 256'h0 : _GEN_114; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_116 = 8'h74 == io_in ? 256'h0 : _GEN_115; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_117 = 8'h75 == io_in ? 256'h0 : _GEN_116; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_118 = 8'h76 == io_in ? 256'h0 : _GEN_117; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_119 = 8'h77 == io_in ? 256'h0 : _GEN_118; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_120 = 8'h78 == io_in ? 256'h0 : _GEN_119; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_121 = 8'h79 == io_in ? 256'h0 : _GEN_120; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_122 = 8'h7a == io_in ? 256'h0 : _GEN_121; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_123 = 8'h7b == io_in ? 256'h0 : _GEN_122; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_124 = 8'h7c == io_in ? 256'h0 : _GEN_123; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_125 = 8'h7d == io_in ? 256'h0 : _GEN_124; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_126 = 8'h7e == io_in ? 256'h0 : _GEN_125; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_127 = 8'h7f == io_in ? 256'h0 : _GEN_126; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_128 = 8'h80 == io_in ? 256'h0 : _GEN_127; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_129 = 8'h81 == io_in ? 256'h0 : _GEN_128; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_130 = 8'h82 == io_in ? 256'h0 : _GEN_129; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_131 = 8'h83 == io_in ? 256'h0 : _GEN_130; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_132 = 8'h84 == io_in ? 256'h0 : _GEN_131; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_133 = 8'h85 == io_in ? 256'h0 : _GEN_132; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_134 = 8'h86 == io_in ? 256'h0 : _GEN_133; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_135 = 8'h87 == io_in ? 256'h0 : _GEN_134; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_136 = 8'h88 == io_in ? 256'h0 : _GEN_135; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_137 = 8'h89 == io_in ? 256'h0 : _GEN_136; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_138 = 8'h8a == io_in ? 256'h0 : _GEN_137; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_139 = 8'h8b == io_in ? 256'h0 : _GEN_138; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_140 = 8'h8c == io_in ? 256'h0 : _GEN_139; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_141 = 8'h8d == io_in ? 256'h0 : _GEN_140; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_142 = 8'h8e == io_in ? 256'h0 : _GEN_141; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_143 = 8'h8f == io_in ? 256'h0 : _GEN_142; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_144 = 8'h90 == io_in ? 256'h0 : _GEN_143; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_145 = 8'h91 == io_in ? 256'h0 : _GEN_144; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_146 = 8'h92 == io_in ? 256'h0 : _GEN_145; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_147 = 8'h93 == io_in ? 256'h0 : _GEN_146; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_148 = 8'h94 == io_in ? 256'h0 : _GEN_147; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_149 = 8'h95 == io_in ? 256'h0 : _GEN_148; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_150 = 8'h96 == io_in ? 256'h0 : _GEN_149; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_151 = 8'h97 == io_in ? 256'h0 : _GEN_150; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_152 = 8'h98 == io_in ? 256'h0 : _GEN_151; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_153 = 8'h99 == io_in ? 256'h0 : _GEN_152; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_154 = 8'h9a == io_in ? 256'h0 : _GEN_153; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_155 = 8'h9b == io_in ? 256'h0 : _GEN_154; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_156 = 8'h9c == io_in ? 256'h0 : _GEN_155; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_157 = 8'h9d == io_in ? 256'h0 : _GEN_156; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_158 = 8'h9e == io_in ? 256'h0 : _GEN_157; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_159 = 8'h9f == io_in ? 256'h0 : _GEN_158; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_160 = 8'ha0 == io_in ? 256'h0 : _GEN_159; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_161 = 8'ha1 == io_in ? 256'h0 : _GEN_160; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_162 = 8'ha2 == io_in ? 256'h0 : _GEN_161; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_163 = 8'ha3 == io_in ? 256'h0 : _GEN_162; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_164 = 8'ha4 == io_in ? 256'h0 : _GEN_163; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_165 = 8'ha5 == io_in ? 256'h0 : _GEN_164; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_166 = 8'ha6 == io_in ? 256'h0 : _GEN_165; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_167 = 8'ha7 == io_in ? 256'h0 : _GEN_166; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_168 = 8'ha8 == io_in ? 256'h0 : _GEN_167; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_169 = 8'ha9 == io_in ? 256'h0 : _GEN_168; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_170 = 8'haa == io_in ? 256'h0 : _GEN_169; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_171 = 8'hab == io_in ? 256'h0 : _GEN_170; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_172 = 8'hac == io_in ? 256'h0 : _GEN_171; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_173 = 8'had == io_in ? 256'h0 : _GEN_172; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_174 = 8'hae == io_in ? 256'h0 : _GEN_173; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_175 = 8'haf == io_in ? 256'h0 : _GEN_174; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_176 = 8'hb0 == io_in ? 256'h0 : _GEN_175; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_177 = 8'hb1 == io_in ? 256'h0 : _GEN_176; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_178 = 8'hb2 == io_in ? 256'h0 : _GEN_177; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_179 = 8'hb3 == io_in ? 256'h0 : _GEN_178; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_180 = 8'hb4 == io_in ? 256'h0 : _GEN_179; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_181 = 8'hb5 == io_in ? 256'h0 : _GEN_180; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_182 = 8'hb6 == io_in ? 256'h0 : _GEN_181; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_183 = 8'hb7 == io_in ? 256'h0 : _GEN_182; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_184 = 8'hb8 == io_in ? 256'h0 : _GEN_183; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_185 = 8'hb9 == io_in ? 256'h0 : _GEN_184; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_186 = 8'hba == io_in ? 256'h0 : _GEN_185; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_187 = 8'hbb == io_in ? 256'h0 : _GEN_186; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_188 = 8'hbc == io_in ? 256'h0 : _GEN_187; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_189 = 8'hbd == io_in ? 256'h0 : _GEN_188; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_190 = 8'hbe == io_in ? 256'h0 : _GEN_189; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_191 = 8'hbf == io_in ? 256'h0 : _GEN_190; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_192 = 8'hc0 == io_in ? 256'h0 : _GEN_191; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_193 = 8'hc1 == io_in ? 256'h0 : _GEN_192; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_194 = 8'hc2 == io_in ? 256'h0 : _GEN_193; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_195 = 8'hc3 == io_in ? 256'h0 : _GEN_194; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_196 = 8'hc4 == io_in ? 256'h0 : _GEN_195; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_197 = 8'hc5 == io_in ? 256'h0 : _GEN_196; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_198 = 8'hc6 == io_in ? 256'h0 : _GEN_197; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_199 = 8'hc7 == io_in ? 256'h0 : _GEN_198; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_200 = 8'hc8 == io_in ? 256'h0 : _GEN_199; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_201 = 8'hc9 == io_in ? 256'h0 : _GEN_200; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_202 = 8'hca == io_in ? 256'h0 : _GEN_201; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_203 = 8'hcb == io_in ? 256'h0 : _GEN_202; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_204 = 8'hcc == io_in ? 256'h0 : _GEN_203; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_205 = 8'hcd == io_in ? 256'h0 : _GEN_204; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_206 = 8'hce == io_in ? 256'h0 : _GEN_205; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_207 = 8'hcf == io_in ? 256'h0 : _GEN_206; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_208 = 8'hd0 == io_in ? 256'h0 : _GEN_207; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_209 = 8'hd1 == io_in ? 256'h0 : _GEN_208; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_210 = 8'hd2 == io_in ? 256'h0 : _GEN_209; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_211 = 8'hd3 == io_in ? 256'h0 : _GEN_210; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_212 = 8'hd4 == io_in ? 256'h0 : _GEN_211; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_213 = 8'hd5 == io_in ? 256'h0 : _GEN_212; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_214 = 8'hd6 == io_in ? 256'h0 : _GEN_213; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_215 = 8'hd7 == io_in ? 256'h0 : _GEN_214; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_216 = 8'hd8 == io_in ? 256'h0 : _GEN_215; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_217 = 8'hd9 == io_in ? 256'h0 : _GEN_216; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_218 = 8'hda == io_in ? 256'h0 : _GEN_217; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_219 = 8'hdb == io_in ? 256'h0 : _GEN_218; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_220 = 8'hdc == io_in ? 256'h0 : _GEN_219; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_221 = 8'hdd == io_in ? 256'h0 : _GEN_220; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_222 = 8'hde == io_in ? 256'h0 : _GEN_221; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_223 = 8'hdf == io_in ? 256'h0 : _GEN_222; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_224 = 8'he0 == io_in ? 256'h0 : _GEN_223; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_225 = 8'he1 == io_in ? 256'h0 : _GEN_224; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_226 = 8'he2 == io_in ? 256'h0 : _GEN_225; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_227 = 8'he3 == io_in ? 256'h0 : _GEN_226; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_228 = 8'he4 == io_in ? 256'h0 : _GEN_227; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_229 = 8'he5 == io_in ? 256'h0 : _GEN_228; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_230 = 8'he6 == io_in ? 256'h0 : _GEN_229; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_231 = 8'he7 == io_in ? 256'h0 : _GEN_230; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_232 = 8'he8 == io_in ? 256'h0 : _GEN_231; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_233 = 8'he9 == io_in ? 256'h0 : _GEN_232; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_234 = 8'hea == io_in ? 256'h0 : _GEN_233; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_235 = 8'heb == io_in ? 256'h0 : _GEN_234; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_236 = 8'hec == io_in ? 256'h0 : _GEN_235; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_237 = 8'hed == io_in ? 256'h0 : _GEN_236; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_238 = 8'hee == io_in ? 256'h0 : _GEN_237; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_239 = 8'hef == io_in ? 256'h0 : _GEN_238; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_240 = 8'hf0 == io_in ? 256'h0 : _GEN_239; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_241 = 8'hf1 == io_in ? 256'h0 : _GEN_240; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_242 = 8'hf2 == io_in ? 256'h0 : _GEN_241; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_243 = 8'hf3 == io_in ? 256'h0 : _GEN_242; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_244 = 8'hf4 == io_in ? 256'h0 : _GEN_243; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_245 = 8'hf5 == io_in ? 256'h0 : _GEN_244; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_246 = 8'hf6 == io_in ? 256'h0 : _GEN_245; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_247 = 8'hf7 == io_in ? 256'h0 : _GEN_246; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_248 = 8'hf8 == io_in ? 256'h0 : _GEN_247; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_249 = 8'hf9 == io_in ? 256'h0 : _GEN_248; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_250 = 8'hfa == io_in ? 256'h0 : _GEN_249; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_251 = 8'hfb == io_in ? 256'h0 : _GEN_250; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_252 = 8'hfc == io_in ? 256'h0 : _GEN_251; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_253 = 8'hfd == io_in ? 256'h0 : _GEN_252; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_254 = 8'hfe == io_in ? 256'h0 : _GEN_253; // @[ps2.scala 185:11 ps2.scala 185:11]
  wire [255:0] _GEN_255 = 8'hff == io_in ? 256'h0 : _GEN_254; // @[ps2.scala 185:11 ps2.scala 185:11]
  assign io_out = _GEN_255[7:0]; // @[ps2.scala 185:11]
endmodule
module ps2(
  input        clock,
  input        reset,
  input        io_ps2_clk,
  input        io_ps2_data,
  output [7:0] io_ascii,
  output [1:0] io_now
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  wire  ps2_clock; // @[ps2.scala 16:19]
  wire  ps2_io_ps2_clk; // @[ps2.scala 16:19]
  wire  ps2_io_ps2_data; // @[ps2.scala 16:19]
  wire  ps2_io_nextdata_n; // @[ps2.scala 16:19]
  wire [7:0] ps2_io_data; // @[ps2.scala 16:19]
  wire  ps2_io_ready; // @[ps2.scala 16:19]
  wire [7:0] mm_io_in; // @[ps2.scala 72:18]
  wire [7:0] mm_io_out; // @[ps2.scala 72:18]
  reg [7:0] data; // @[ps2.scala 12:17]
  reg  ready; // @[ps2.scala 13:18]
  reg  nextdata; // @[ps2.scala 15:21]
  reg [3:0] now; // @[ps2.scala 30:20]
  reg [3:0] next; // @[ps2.scala 31:21]
  wire  _T = now == 4'h1; // @[ps2.scala 34:13]
  wire [1:0] _GEN_0 = ready ? 2'h2 : 2'h1; // @[ps2.scala 35:26 ps2.scala 36:17 ps2.scala 38:17]
  wire  _T_2 = now == 4'h2; // @[ps2.scala 40:19]
  wire  _T_3 = now == 4'h4; // @[ps2.scala 42:19]
  wire  _T_4 = now == 4'h8; // @[ps2.scala 44:19]
  reg [23:0] ps2segdata; // @[ps2.scala 49:27]
  wire [15:0] ps2segdata_hi = ps2segdata[15:0]; // @[ps2.scala 55:35]
  wire [23:0] _ps2segdata_T = {ps2segdata_hi,data}; // @[Cat.scala 30:58]
  wire  _GEN_6 = _T_2 ? nextdata : 1'h1; // @[ps2.scala 54:25 ps2.scala 15:21 ps2.scala 57:17]
  wire  _GEN_7 = _T_3 | _T_4 ? 1'h0 : _GEN_6; // @[ps2.scala 52:35 ps2.scala 53:17]
  reg [7:0] ascii; // @[ps2.scala 71:22]
  ps2_keyboard ps2 ( // @[ps2.scala 16:19]
    .clock(ps2_clock),
    .io_ps2_clk(ps2_io_ps2_clk),
    .io_ps2_data(ps2_io_ps2_data),
    .io_nextdata_n(ps2_io_nextdata_n),
    .io_data(ps2_io_data),
    .io_ready(ps2_io_ready)
  );
  ps2ascii mm ( // @[ps2.scala 72:18]
    .io_in(mm_io_in),
    .io_out(mm_io_out)
  );
  assign io_ascii = ascii; // @[ps2.scala 75:13]
  assign io_now = now[1:0]; // @[ps2.scala 32:11]
  assign ps2_clock = clock;
  assign ps2_io_ps2_clk = io_ps2_clk; // @[ps2.scala 18:19]
  assign ps2_io_ps2_data = io_ps2_data; // @[ps2.scala 19:20]
  assign ps2_io_nextdata_n = nextdata; // @[ps2.scala 20:22]
  assign mm_io_in = ps2segdata[7:0]; // @[ps2.scala 73:25]
  always @(posedge clock) begin
    data <= ps2_io_data; // @[ps2.scala 21:9]
    ready <= ps2_io_ready; // @[ps2.scala 22:10]
    nextdata <= _T | _GEN_7; // @[ps2.scala 50:19 ps2.scala 51:17]
    if (reset) begin // @[ps2.scala 30:20]
      now <= 4'h1; // @[ps2.scala 30:20]
    end else begin
      now <= next; // @[ps2.scala 33:8]
    end
    if (reset) begin // @[ps2.scala 31:21]
      next <= 4'h1; // @[ps2.scala 31:21]
    end else if (now == 4'h1) begin // @[ps2.scala 34:19]
      next <= {{2'd0}, _GEN_0};
    end else if (now == 4'h2) begin // @[ps2.scala 40:25]
      next <= 4'h4; // @[ps2.scala 41:13]
    end else if (now == 4'h4) begin // @[ps2.scala 42:25]
      next <= 4'h8; // @[ps2.scala 43:13]
    end else begin
      next <= 4'h1;
    end
    if (reset) begin // @[ps2.scala 49:27]
      ps2segdata <= 24'h0; // @[ps2.scala 49:27]
    end else if (!(_T)) begin // @[ps2.scala 50:19]
      if (!(_T_3 | _T_4)) begin // @[ps2.scala 52:35]
        if (_T_2) begin // @[ps2.scala 54:25]
          ps2segdata <= _ps2segdata_T; // @[ps2.scala 55:19]
        end
      end
    end
    if (reset) begin // @[ps2.scala 71:22]
      ascii <= 8'h0; // @[ps2.scala 71:22]
    end else begin
      ascii <= mm_io_out; // @[ps2.scala 74:10]
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
  ascii = _RAND_6[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
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
  reg [9:0] x_cnt; // @[vga.scala 94:22]
  reg [9:0] y_cnt; // @[vga.scala 95:22]
  wire  _T = x_cnt == 10'h320; // @[vga.scala 97:15]
  wire [9:0] _x_cnt_T_1 = x_cnt + 10'h1; // @[vga.scala 100:21]
  wire [9:0] _y_cnt_T_1 = y_cnt + 10'h1; // @[vga.scala 105:21]
  wire  h_valid = x_cnt > 10'h90 & x_cnt <= 10'h310; // @[vga.scala 109:39]
  wire  v_valid = y_cnt > 10'h23 & y_cnt <= 10'h203; // @[vga.scala 110:39]
  wire [9:0] _io_h_addr_T_1 = x_cnt - 10'h91; // @[vga.scala 112:33]
  wire [9:0] _io_v_addr_T_1 = y_cnt - 10'h24; // @[vga.scala 113:33]
  assign io_h_addr = h_valid ? _io_h_addr_T_1 : 10'h0; // @[vga.scala 112:19]
  assign io_v_addr = v_valid ? _io_v_addr_T_1 : 10'h0; // @[vga.scala 113:19]
  assign io_hsync = x_cnt > 10'h60; // @[vga.scala 107:21]
  assign io_vsync = y_cnt > 10'h2; // @[vga.scala 108:21]
  assign io_valid = h_valid & v_valid; // @[vga.scala 111:23]
  assign io_vga_r = io_vga_data[23:16]; // @[vga.scala 114:26]
  assign io_vga_g = io_vga_data[15:8]; // @[vga.scala 115:26]
  assign io_vga_b = io_vga_data[7:0]; // @[vga.scala 116:26]
  always @(posedge clock) begin
    if (reset) begin // @[vga.scala 94:22]
      x_cnt <= 10'h1; // @[vga.scala 94:22]
    end else if (x_cnt == 10'h320) begin // @[vga.scala 97:26]
      x_cnt <= 10'h1; // @[vga.scala 98:14]
    end else begin
      x_cnt <= _x_cnt_T_1; // @[vga.scala 100:14]
    end
    if (reset) begin // @[vga.scala 95:22]
      y_cnt <= 10'h1; // @[vga.scala 95:22]
    end else if (y_cnt == 10'h20d & _T) begin // @[vga.scala 102:47]
      y_cnt <= 10'h1; // @[vga.scala 103:14]
    end else if (_T) begin // @[vga.scala 104:32]
      y_cnt <= _y_cnt_T_1; // @[vga.scala 105:14]
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
  input         reset,
  input  [1:0]  io_now,
  input  [7:0]  io_ascii,
  input  [9:0]  io_h_addr,
  input  [8:0]  io_v_addr,
  output [23:0] io_vga_data
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
  reg [31:0] _RAND_24;
  reg [31:0] _RAND_25;
  reg [31:0] _RAND_26;
  reg [31:0] _RAND_27;
  reg [31:0] _RAND_28;
  reg [31:0] _RAND_29;
  reg [31:0] _RAND_30;
  reg [31:0] _RAND_31;
  reg [31:0] _RAND_32;
  reg [31:0] _RAND_33;
  reg [31:0] _RAND_34;
  reg [31:0] _RAND_35;
  reg [31:0] _RAND_36;
  reg [31:0] _RAND_37;
  reg [31:0] _RAND_38;
  reg [31:0] _RAND_39;
  reg [31:0] _RAND_40;
  reg [31:0] _RAND_41;
  reg [31:0] _RAND_42;
  reg [31:0] _RAND_43;
  reg [31:0] _RAND_44;
  reg [31:0] _RAND_45;
  reg [31:0] _RAND_46;
  reg [31:0] _RAND_47;
  reg [31:0] _RAND_48;
  reg [31:0] _RAND_49;
  reg [31:0] _RAND_50;
  reg [31:0] _RAND_51;
  reg [31:0] _RAND_52;
  reg [31:0] _RAND_53;
  reg [31:0] _RAND_54;
  reg [31:0] _RAND_55;
  reg [31:0] _RAND_56;
  reg [31:0] _RAND_57;
  reg [31:0] _RAND_58;
  reg [31:0] _RAND_59;
  reg [31:0] _RAND_60;
  reg [31:0] _RAND_61;
  reg [31:0] _RAND_62;
  reg [31:0] _RAND_63;
  reg [31:0] _RAND_64;
  reg [31:0] _RAND_65;
  reg [31:0] _RAND_66;
  reg [31:0] _RAND_67;
  reg [31:0] _RAND_68;
  reg [31:0] _RAND_69;
  reg [31:0] _RAND_70;
  reg [31:0] _RAND_71;
  reg [31:0] _RAND_72;
  reg [31:0] _RAND_73;
  reg [31:0] _RAND_74;
  reg [31:0] _RAND_75;
  reg [31:0] _RAND_76;
  reg [31:0] _RAND_77;
  reg [31:0] _RAND_78;
  reg [31:0] _RAND_79;
  reg [31:0] _RAND_80;
  reg [31:0] _RAND_81;
  reg [31:0] _RAND_82;
  reg [31:0] _RAND_83;
  reg [31:0] _RAND_84;
  reg [31:0] _RAND_85;
  reg [31:0] _RAND_86;
  reg [31:0] _RAND_87;
  reg [31:0] _RAND_88;
  reg [31:0] _RAND_89;
  reg [31:0] _RAND_90;
  reg [31:0] _RAND_91;
  reg [31:0] _RAND_92;
  reg [31:0] _RAND_93;
  reg [31:0] _RAND_94;
  reg [31:0] _RAND_95;
  reg [31:0] _RAND_96;
  reg [31:0] _RAND_97;
  reg [31:0] _RAND_98;
  reg [31:0] _RAND_99;
  reg [31:0] _RAND_100;
  reg [31:0] _RAND_101;
  reg [31:0] _RAND_102;
  reg [31:0] _RAND_103;
  reg [31:0] _RAND_104;
  reg [31:0] _RAND_105;
  reg [31:0] _RAND_106;
  reg [31:0] _RAND_107;
  reg [31:0] _RAND_108;
  reg [31:0] _RAND_109;
  reg [31:0] _RAND_110;
  reg [31:0] _RAND_111;
  reg [31:0] _RAND_112;
  reg [31:0] _RAND_113;
  reg [31:0] _RAND_114;
  reg [31:0] _RAND_115;
  reg [31:0] _RAND_116;
  reg [31:0] _RAND_117;
  reg [31:0] _RAND_118;
  reg [31:0] _RAND_119;
  reg [31:0] _RAND_120;
  reg [31:0] _RAND_121;
  reg [31:0] _RAND_122;
  reg [31:0] _RAND_123;
  reg [31:0] _RAND_124;
  reg [31:0] _RAND_125;
  reg [31:0] _RAND_126;
  reg [31:0] _RAND_127;
  reg [31:0] _RAND_128;
  reg [31:0] _RAND_129;
  reg [31:0] _RAND_130;
  reg [31:0] _RAND_131;
  reg [31:0] _RAND_132;
  reg [31:0] _RAND_133;
  reg [31:0] _RAND_134;
  reg [31:0] _RAND_135;
  reg [31:0] _RAND_136;
  reg [31:0] _RAND_137;
  reg [31:0] _RAND_138;
  reg [31:0] _RAND_139;
  reg [31:0] _RAND_140;
  reg [31:0] _RAND_141;
  reg [31:0] _RAND_142;
  reg [31:0] _RAND_143;
  reg [31:0] _RAND_144;
  reg [31:0] _RAND_145;
  reg [31:0] _RAND_146;
  reg [31:0] _RAND_147;
  reg [31:0] _RAND_148;
  reg [31:0] _RAND_149;
  reg [31:0] _RAND_150;
  reg [31:0] _RAND_151;
  reg [31:0] _RAND_152;
  reg [31:0] _RAND_153;
  reg [31:0] _RAND_154;
  reg [31:0] _RAND_155;
  reg [31:0] _RAND_156;
  reg [31:0] _RAND_157;
  reg [31:0] _RAND_158;
  reg [31:0] _RAND_159;
  reg [31:0] _RAND_160;
  reg [31:0] _RAND_161;
  reg [31:0] _RAND_162;
  reg [31:0] _RAND_163;
  reg [31:0] _RAND_164;
  reg [31:0] _RAND_165;
  reg [31:0] _RAND_166;
  reg [31:0] _RAND_167;
  reg [31:0] _RAND_168;
  reg [31:0] _RAND_169;
  reg [31:0] _RAND_170;
  reg [31:0] _RAND_171;
  reg [31:0] _RAND_172;
  reg [31:0] _RAND_173;
  reg [31:0] _RAND_174;
  reg [31:0] _RAND_175;
  reg [31:0] _RAND_176;
  reg [31:0] _RAND_177;
  reg [31:0] _RAND_178;
  reg [31:0] _RAND_179;
  reg [31:0] _RAND_180;
  reg [31:0] _RAND_181;
  reg [31:0] _RAND_182;
  reg [31:0] _RAND_183;
  reg [31:0] _RAND_184;
  reg [31:0] _RAND_185;
  reg [31:0] _RAND_186;
  reg [31:0] _RAND_187;
  reg [31:0] _RAND_188;
  reg [31:0] _RAND_189;
  reg [31:0] _RAND_190;
  reg [31:0] _RAND_191;
  reg [31:0] _RAND_192;
  reg [31:0] _RAND_193;
  reg [31:0] _RAND_194;
  reg [31:0] _RAND_195;
  reg [31:0] _RAND_196;
  reg [31:0] _RAND_197;
  reg [31:0] _RAND_198;
  reg [31:0] _RAND_199;
  reg [31:0] _RAND_200;
  reg [31:0] _RAND_201;
  reg [31:0] _RAND_202;
  reg [31:0] _RAND_203;
  reg [31:0] _RAND_204;
  reg [31:0] _RAND_205;
  reg [31:0] _RAND_206;
  reg [31:0] _RAND_207;
  reg [31:0] _RAND_208;
  reg [31:0] _RAND_209;
  reg [31:0] _RAND_210;
  reg [31:0] _RAND_211;
  reg [31:0] _RAND_212;
  reg [31:0] _RAND_213;
  reg [31:0] _RAND_214;
  reg [31:0] _RAND_215;
  reg [31:0] _RAND_216;
  reg [31:0] _RAND_217;
  reg [31:0] _RAND_218;
  reg [31:0] _RAND_219;
  reg [31:0] _RAND_220;
  reg [31:0] _RAND_221;
  reg [31:0] _RAND_222;
  reg [31:0] _RAND_223;
  reg [31:0] _RAND_224;
  reg [31:0] _RAND_225;
  reg [31:0] _RAND_226;
  reg [31:0] _RAND_227;
  reg [31:0] _RAND_228;
  reg [31:0] _RAND_229;
  reg [31:0] _RAND_230;
  reg [31:0] _RAND_231;
  reg [31:0] _RAND_232;
  reg [31:0] _RAND_233;
  reg [31:0] _RAND_234;
  reg [31:0] _RAND_235;
  reg [31:0] _RAND_236;
  reg [31:0] _RAND_237;
  reg [31:0] _RAND_238;
  reg [31:0] _RAND_239;
  reg [31:0] _RAND_240;
  reg [31:0] _RAND_241;
  reg [31:0] _RAND_242;
  reg [31:0] _RAND_243;
  reg [31:0] _RAND_244;
  reg [31:0] _RAND_245;
  reg [31:0] _RAND_246;
  reg [31:0] _RAND_247;
  reg [31:0] _RAND_248;
  reg [31:0] _RAND_249;
  reg [31:0] _RAND_250;
  reg [31:0] _RAND_251;
  reg [31:0] _RAND_252;
  reg [31:0] _RAND_253;
  reg [31:0] _RAND_254;
  reg [31:0] _RAND_255;
  reg [31:0] _RAND_256;
  reg [31:0] _RAND_257;
  reg [31:0] _RAND_258;
  reg [31:0] _RAND_259;
  reg [31:0] _RAND_260;
  reg [31:0] _RAND_261;
  reg [31:0] _RAND_262;
  reg [31:0] _RAND_263;
  reg [31:0] _RAND_264;
  reg [31:0] _RAND_265;
  reg [31:0] _RAND_266;
  reg [31:0] _RAND_267;
  reg [31:0] _RAND_268;
  reg [31:0] _RAND_269;
  reg [31:0] _RAND_270;
  reg [31:0] _RAND_271;
  reg [31:0] _RAND_272;
  reg [31:0] _RAND_273;
  reg [31:0] _RAND_274;
  reg [31:0] _RAND_275;
  reg [31:0] _RAND_276;
  reg [31:0] _RAND_277;
  reg [31:0] _RAND_278;
  reg [31:0] _RAND_279;
  reg [31:0] _RAND_280;
  reg [31:0] _RAND_281;
  reg [31:0] _RAND_282;
  reg [31:0] _RAND_283;
  reg [31:0] _RAND_284;
  reg [31:0] _RAND_285;
  reg [31:0] _RAND_286;
  reg [31:0] _RAND_287;
  reg [95:0] _RAND_288;
  reg [95:0] _RAND_289;
  reg [95:0] _RAND_290;
  reg [95:0] _RAND_291;
  reg [95:0] _RAND_292;
  reg [95:0] _RAND_293;
  reg [95:0] _RAND_294;
  reg [95:0] _RAND_295;
  reg [95:0] _RAND_296;
  reg [95:0] _RAND_297;
  reg [95:0] _RAND_298;
  reg [95:0] _RAND_299;
  reg [95:0] _RAND_300;
  reg [95:0] _RAND_301;
  reg [95:0] _RAND_302;
  reg [95:0] _RAND_303;
  reg [31:0] _RAND_304;
  reg [31:0] _RAND_305;
`endif // RANDOMIZE_REG_INIT
  reg [11:0] vga_mem [0:4095]; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_1_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_1_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_2_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_2_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_3_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_3_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_4_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_4_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_5_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_5_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_6_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_6_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_7_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_7_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_8_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_8_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_9_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_9_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_10_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_10_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_11_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_11_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_12_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_12_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_13_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_13_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_14_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_14_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_15_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_15_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_16_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_16_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_17_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_17_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_18_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_18_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_19_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_19_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_20_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_20_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_21_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_21_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_22_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_22_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_23_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_23_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_24_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_24_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_25_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_25_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_26_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_26_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_27_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_27_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_28_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_28_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_29_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_29_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_30_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_30_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_31_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_31_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_32_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_32_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_33_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_33_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_34_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_34_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_35_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_35_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_36_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_36_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_37_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_37_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_38_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_38_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_39_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_39_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_40_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_40_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_41_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_41_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_42_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_42_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_43_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_43_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_44_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_44_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_45_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_45_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_46_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_46_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_47_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_47_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_48_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_48_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_49_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_49_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_50_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_50_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_51_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_51_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_52_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_52_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_53_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_53_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_54_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_54_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_55_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_55_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_56_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_56_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_57_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_57_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_58_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_58_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_59_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_59_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_60_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_60_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_61_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_61_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_62_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_62_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_63_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_63_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_64_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_64_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_65_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_65_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_66_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_66_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_67_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_67_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_68_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_68_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_69_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_69_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_70_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_70_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_71_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_71_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_72_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_72_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_73_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_73_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_74_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_74_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_75_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_75_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_76_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_76_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_77_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_77_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_78_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_78_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_79_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_79_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_80_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_80_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_81_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_81_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_82_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_82_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_83_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_83_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_84_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_84_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_85_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_85_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_86_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_86_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_87_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_87_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_88_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_88_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_89_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_89_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_90_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_90_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_91_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_91_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_92_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_92_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_93_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_93_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_94_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_94_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_95_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_95_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_96_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_96_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_97_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_97_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_98_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_98_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_99_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_99_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_100_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_100_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_101_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_101_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_102_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_102_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_103_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_103_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_104_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_104_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_105_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_105_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_106_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_106_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_107_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_107_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_108_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_108_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_109_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_109_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_110_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_110_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_111_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_111_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_112_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_112_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_113_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_113_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_114_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_114_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_115_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_115_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_116_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_116_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_117_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_117_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_118_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_118_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_119_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_119_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_120_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_120_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_121_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_121_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_122_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_122_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_123_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_123_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_124_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_124_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_125_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_125_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_126_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_126_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_127_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_127_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_128_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_128_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_129_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_129_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_130_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_130_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_131_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_131_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_132_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_132_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_133_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_133_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_134_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_134_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_135_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_135_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_136_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_136_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_137_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_137_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_138_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_138_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_139_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_139_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_140_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_140_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_141_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_141_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_142_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_142_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_143_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_143_addr; // @[vga.scala 51:30]
  reg  vga_mem_ram_MPORT_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_addr_pipe_0;
  reg  vga_mem_ram_MPORT_1_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_1_addr_pipe_0;
  reg  vga_mem_ram_MPORT_2_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_2_addr_pipe_0;
  reg  vga_mem_ram_MPORT_3_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_3_addr_pipe_0;
  reg  vga_mem_ram_MPORT_4_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_4_addr_pipe_0;
  reg  vga_mem_ram_MPORT_5_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_5_addr_pipe_0;
  reg  vga_mem_ram_MPORT_6_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_6_addr_pipe_0;
  reg  vga_mem_ram_MPORT_7_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_7_addr_pipe_0;
  reg  vga_mem_ram_MPORT_8_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_8_addr_pipe_0;
  reg  vga_mem_ram_MPORT_9_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_9_addr_pipe_0;
  reg  vga_mem_ram_MPORT_10_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_10_addr_pipe_0;
  reg  vga_mem_ram_MPORT_11_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_11_addr_pipe_0;
  reg  vga_mem_ram_MPORT_12_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_12_addr_pipe_0;
  reg  vga_mem_ram_MPORT_13_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_13_addr_pipe_0;
  reg  vga_mem_ram_MPORT_14_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_14_addr_pipe_0;
  reg  vga_mem_ram_MPORT_15_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_15_addr_pipe_0;
  reg  vga_mem_ram_MPORT_16_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_16_addr_pipe_0;
  reg  vga_mem_ram_MPORT_17_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_17_addr_pipe_0;
  reg  vga_mem_ram_MPORT_18_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_18_addr_pipe_0;
  reg  vga_mem_ram_MPORT_19_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_19_addr_pipe_0;
  reg  vga_mem_ram_MPORT_20_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_20_addr_pipe_0;
  reg  vga_mem_ram_MPORT_21_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_21_addr_pipe_0;
  reg  vga_mem_ram_MPORT_22_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_22_addr_pipe_0;
  reg  vga_mem_ram_MPORT_23_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_23_addr_pipe_0;
  reg  vga_mem_ram_MPORT_24_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_24_addr_pipe_0;
  reg  vga_mem_ram_MPORT_25_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_25_addr_pipe_0;
  reg  vga_mem_ram_MPORT_26_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_26_addr_pipe_0;
  reg  vga_mem_ram_MPORT_27_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_27_addr_pipe_0;
  reg  vga_mem_ram_MPORT_28_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_28_addr_pipe_0;
  reg  vga_mem_ram_MPORT_29_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_29_addr_pipe_0;
  reg  vga_mem_ram_MPORT_30_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_30_addr_pipe_0;
  reg  vga_mem_ram_MPORT_31_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_31_addr_pipe_0;
  reg  vga_mem_ram_MPORT_32_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_32_addr_pipe_0;
  reg  vga_mem_ram_MPORT_33_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_33_addr_pipe_0;
  reg  vga_mem_ram_MPORT_34_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_34_addr_pipe_0;
  reg  vga_mem_ram_MPORT_35_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_35_addr_pipe_0;
  reg  vga_mem_ram_MPORT_36_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_36_addr_pipe_0;
  reg  vga_mem_ram_MPORT_37_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_37_addr_pipe_0;
  reg  vga_mem_ram_MPORT_38_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_38_addr_pipe_0;
  reg  vga_mem_ram_MPORT_39_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_39_addr_pipe_0;
  reg  vga_mem_ram_MPORT_40_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_40_addr_pipe_0;
  reg  vga_mem_ram_MPORT_41_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_41_addr_pipe_0;
  reg  vga_mem_ram_MPORT_42_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_42_addr_pipe_0;
  reg  vga_mem_ram_MPORT_43_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_43_addr_pipe_0;
  reg  vga_mem_ram_MPORT_44_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_44_addr_pipe_0;
  reg  vga_mem_ram_MPORT_45_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_45_addr_pipe_0;
  reg  vga_mem_ram_MPORT_46_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_46_addr_pipe_0;
  reg  vga_mem_ram_MPORT_47_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_47_addr_pipe_0;
  reg  vga_mem_ram_MPORT_48_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_48_addr_pipe_0;
  reg  vga_mem_ram_MPORT_49_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_49_addr_pipe_0;
  reg  vga_mem_ram_MPORT_50_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_50_addr_pipe_0;
  reg  vga_mem_ram_MPORT_51_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_51_addr_pipe_0;
  reg  vga_mem_ram_MPORT_52_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_52_addr_pipe_0;
  reg  vga_mem_ram_MPORT_53_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_53_addr_pipe_0;
  reg  vga_mem_ram_MPORT_54_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_54_addr_pipe_0;
  reg  vga_mem_ram_MPORT_55_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_55_addr_pipe_0;
  reg  vga_mem_ram_MPORT_56_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_56_addr_pipe_0;
  reg  vga_mem_ram_MPORT_57_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_57_addr_pipe_0;
  reg  vga_mem_ram_MPORT_58_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_58_addr_pipe_0;
  reg  vga_mem_ram_MPORT_59_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_59_addr_pipe_0;
  reg  vga_mem_ram_MPORT_60_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_60_addr_pipe_0;
  reg  vga_mem_ram_MPORT_61_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_61_addr_pipe_0;
  reg  vga_mem_ram_MPORT_62_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_62_addr_pipe_0;
  reg  vga_mem_ram_MPORT_63_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_63_addr_pipe_0;
  reg  vga_mem_ram_MPORT_64_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_64_addr_pipe_0;
  reg  vga_mem_ram_MPORT_65_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_65_addr_pipe_0;
  reg  vga_mem_ram_MPORT_66_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_66_addr_pipe_0;
  reg  vga_mem_ram_MPORT_67_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_67_addr_pipe_0;
  reg  vga_mem_ram_MPORT_68_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_68_addr_pipe_0;
  reg  vga_mem_ram_MPORT_69_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_69_addr_pipe_0;
  reg  vga_mem_ram_MPORT_70_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_70_addr_pipe_0;
  reg  vga_mem_ram_MPORT_71_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_71_addr_pipe_0;
  reg  vga_mem_ram_MPORT_72_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_72_addr_pipe_0;
  reg  vga_mem_ram_MPORT_73_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_73_addr_pipe_0;
  reg  vga_mem_ram_MPORT_74_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_74_addr_pipe_0;
  reg  vga_mem_ram_MPORT_75_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_75_addr_pipe_0;
  reg  vga_mem_ram_MPORT_76_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_76_addr_pipe_0;
  reg  vga_mem_ram_MPORT_77_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_77_addr_pipe_0;
  reg  vga_mem_ram_MPORT_78_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_78_addr_pipe_0;
  reg  vga_mem_ram_MPORT_79_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_79_addr_pipe_0;
  reg  vga_mem_ram_MPORT_80_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_80_addr_pipe_0;
  reg  vga_mem_ram_MPORT_81_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_81_addr_pipe_0;
  reg  vga_mem_ram_MPORT_82_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_82_addr_pipe_0;
  reg  vga_mem_ram_MPORT_83_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_83_addr_pipe_0;
  reg  vga_mem_ram_MPORT_84_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_84_addr_pipe_0;
  reg  vga_mem_ram_MPORT_85_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_85_addr_pipe_0;
  reg  vga_mem_ram_MPORT_86_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_86_addr_pipe_0;
  reg  vga_mem_ram_MPORT_87_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_87_addr_pipe_0;
  reg  vga_mem_ram_MPORT_88_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_88_addr_pipe_0;
  reg  vga_mem_ram_MPORT_89_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_89_addr_pipe_0;
  reg  vga_mem_ram_MPORT_90_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_90_addr_pipe_0;
  reg  vga_mem_ram_MPORT_91_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_91_addr_pipe_0;
  reg  vga_mem_ram_MPORT_92_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_92_addr_pipe_0;
  reg  vga_mem_ram_MPORT_93_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_93_addr_pipe_0;
  reg  vga_mem_ram_MPORT_94_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_94_addr_pipe_0;
  reg  vga_mem_ram_MPORT_95_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_95_addr_pipe_0;
  reg  vga_mem_ram_MPORT_96_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_96_addr_pipe_0;
  reg  vga_mem_ram_MPORT_97_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_97_addr_pipe_0;
  reg  vga_mem_ram_MPORT_98_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_98_addr_pipe_0;
  reg  vga_mem_ram_MPORT_99_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_99_addr_pipe_0;
  reg  vga_mem_ram_MPORT_100_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_100_addr_pipe_0;
  reg  vga_mem_ram_MPORT_101_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_101_addr_pipe_0;
  reg  vga_mem_ram_MPORT_102_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_102_addr_pipe_0;
  reg  vga_mem_ram_MPORT_103_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_103_addr_pipe_0;
  reg  vga_mem_ram_MPORT_104_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_104_addr_pipe_0;
  reg  vga_mem_ram_MPORT_105_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_105_addr_pipe_0;
  reg  vga_mem_ram_MPORT_106_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_106_addr_pipe_0;
  reg  vga_mem_ram_MPORT_107_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_107_addr_pipe_0;
  reg  vga_mem_ram_MPORT_108_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_108_addr_pipe_0;
  reg  vga_mem_ram_MPORT_109_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_109_addr_pipe_0;
  reg  vga_mem_ram_MPORT_110_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_110_addr_pipe_0;
  reg  vga_mem_ram_MPORT_111_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_111_addr_pipe_0;
  reg  vga_mem_ram_MPORT_112_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_112_addr_pipe_0;
  reg  vga_mem_ram_MPORT_113_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_113_addr_pipe_0;
  reg  vga_mem_ram_MPORT_114_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_114_addr_pipe_0;
  reg  vga_mem_ram_MPORT_115_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_115_addr_pipe_0;
  reg  vga_mem_ram_MPORT_116_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_116_addr_pipe_0;
  reg  vga_mem_ram_MPORT_117_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_117_addr_pipe_0;
  reg  vga_mem_ram_MPORT_118_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_118_addr_pipe_0;
  reg  vga_mem_ram_MPORT_119_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_119_addr_pipe_0;
  reg  vga_mem_ram_MPORT_120_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_120_addr_pipe_0;
  reg  vga_mem_ram_MPORT_121_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_121_addr_pipe_0;
  reg  vga_mem_ram_MPORT_122_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_122_addr_pipe_0;
  reg  vga_mem_ram_MPORT_123_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_123_addr_pipe_0;
  reg  vga_mem_ram_MPORT_124_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_124_addr_pipe_0;
  reg  vga_mem_ram_MPORT_125_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_125_addr_pipe_0;
  reg  vga_mem_ram_MPORT_126_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_126_addr_pipe_0;
  reg  vga_mem_ram_MPORT_127_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_127_addr_pipe_0;
  reg  vga_mem_ram_MPORT_128_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_128_addr_pipe_0;
  reg  vga_mem_ram_MPORT_129_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_129_addr_pipe_0;
  reg  vga_mem_ram_MPORT_130_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_130_addr_pipe_0;
  reg  vga_mem_ram_MPORT_131_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_131_addr_pipe_0;
  reg  vga_mem_ram_MPORT_132_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_132_addr_pipe_0;
  reg  vga_mem_ram_MPORT_133_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_133_addr_pipe_0;
  reg  vga_mem_ram_MPORT_134_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_134_addr_pipe_0;
  reg  vga_mem_ram_MPORT_135_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_135_addr_pipe_0;
  reg  vga_mem_ram_MPORT_136_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_136_addr_pipe_0;
  reg  vga_mem_ram_MPORT_137_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_137_addr_pipe_0;
  reg  vga_mem_ram_MPORT_138_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_138_addr_pipe_0;
  reg  vga_mem_ram_MPORT_139_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_139_addr_pipe_0;
  reg  vga_mem_ram_MPORT_140_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_140_addr_pipe_0;
  reg  vga_mem_ram_MPORT_141_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_141_addr_pipe_0;
  reg  vga_mem_ram_MPORT_142_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_142_addr_pipe_0;
  reg  vga_mem_ram_MPORT_143_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_143_addr_pipe_0;
  reg [89:0] ram_0; // @[vga.scala 46:20]
  reg [89:0] ram_1; // @[vga.scala 46:20]
  reg [89:0] ram_2; // @[vga.scala 46:20]
  reg [89:0] ram_3; // @[vga.scala 46:20]
  reg [89:0] ram_4; // @[vga.scala 46:20]
  reg [89:0] ram_5; // @[vga.scala 46:20]
  reg [89:0] ram_6; // @[vga.scala 46:20]
  reg [89:0] ram_7; // @[vga.scala 46:20]
  reg [89:0] ram_8; // @[vga.scala 46:20]
  reg [89:0] ram_9; // @[vga.scala 46:20]
  reg [89:0] ram_10; // @[vga.scala 46:20]
  reg [89:0] ram_11; // @[vga.scala 46:20]
  reg [89:0] ram_12; // @[vga.scala 46:20]
  reg [89:0] ram_13; // @[vga.scala 46:20]
  reg [89:0] ram_14; // @[vga.scala 46:20]
  reg [89:0] ram_15; // @[vga.scala 46:20]
  reg [8:0] v; // @[vga.scala 49:18]
  wire [12:0] _ram_T_3 = 5'h10 * io_ascii; // @[vga.scala 60:72]
  wire  ram_hi_hi_hi_lo = vga_mem_ram_MPORT_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo = vga_mem_ram_MPORT_1_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi = vga_mem_ram_MPORT_2_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo = vga_mem_ram_MPORT_3_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi = vga_mem_ram_MPORT_4_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo = vga_mem_ram_MPORT_5_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo = vga_mem_ram_MPORT_6_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi = vga_mem_ram_MPORT_7_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo = vga_mem_ram_MPORT_8_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_21 = {81'h0,ram_hi_hi_hi_lo,ram_hi_hi_lo,ram_hi_lo_hi,ram_hi_lo_lo,ram_lo_hi_hi_hi,ram_lo_hi_hi_lo,
    ram_lo_hi_lo,ram_lo_lo_hi,ram_lo_lo_lo}; // @[Cat.scala 30:58]
  wire [12:0] _ram_T_22 = v * 4'h9; // @[vga.scala 60:303]
  wire [12:0] _ram_T_24 = 13'h51 - _ram_T_22; // @[vga.scala 60:301]
  wire [8280:0] _GEN_693 = {{8191'd0}, _ram_T_21}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_25 = _GEN_693 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_694 = {{8191'd0}, ram_0}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_26 = _GEN_694 ^ _ram_T_25; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_1 = vga_mem_ram_MPORT_9_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_1 = vga_mem_ram_MPORT_10_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_1 = vga_mem_ram_MPORT_11_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_1 = vga_mem_ram_MPORT_12_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_1 = vga_mem_ram_MPORT_13_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_1 = vga_mem_ram_MPORT_14_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_1 = vga_mem_ram_MPORT_15_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_1 = vga_mem_ram_MPORT_16_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_1 = vga_mem_ram_MPORT_17_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_48 = {81'h0,ram_hi_hi_hi_lo_1,ram_hi_hi_lo_1,ram_hi_lo_hi_1,ram_hi_lo_lo_1,ram_lo_hi_hi_hi_1,
    ram_lo_hi_hi_lo_1,ram_lo_hi_lo_1,ram_lo_lo_hi_1,ram_lo_lo_lo_1}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_695 = {{8191'd0}, _ram_T_48}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_52 = _GEN_695 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_696 = {{8191'd0}, ram_1}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_53 = _GEN_696 ^ _ram_T_52; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_2 = vga_mem_ram_MPORT_18_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_2 = vga_mem_ram_MPORT_19_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_2 = vga_mem_ram_MPORT_20_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_2 = vga_mem_ram_MPORT_21_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_2 = vga_mem_ram_MPORT_22_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_2 = vga_mem_ram_MPORT_23_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_2 = vga_mem_ram_MPORT_24_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_2 = vga_mem_ram_MPORT_25_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_2 = vga_mem_ram_MPORT_26_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_75 = {81'h0,ram_hi_hi_hi_lo_2,ram_hi_hi_lo_2,ram_hi_lo_hi_2,ram_hi_lo_lo_2,ram_lo_hi_hi_hi_2,
    ram_lo_hi_hi_lo_2,ram_lo_hi_lo_2,ram_lo_lo_hi_2,ram_lo_lo_lo_2}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_697 = {{8191'd0}, _ram_T_75}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_79 = _GEN_697 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_698 = {{8191'd0}, ram_2}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_80 = _GEN_698 ^ _ram_T_79; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_3 = vga_mem_ram_MPORT_27_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_3 = vga_mem_ram_MPORT_28_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_3 = vga_mem_ram_MPORT_29_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_3 = vga_mem_ram_MPORT_30_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_3 = vga_mem_ram_MPORT_31_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_3 = vga_mem_ram_MPORT_32_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_3 = vga_mem_ram_MPORT_33_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_3 = vga_mem_ram_MPORT_34_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_3 = vga_mem_ram_MPORT_35_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_102 = {81'h0,ram_hi_hi_hi_lo_3,ram_hi_hi_lo_3,ram_hi_lo_hi_3,ram_hi_lo_lo_3,ram_lo_hi_hi_hi_3,
    ram_lo_hi_hi_lo_3,ram_lo_hi_lo_3,ram_lo_lo_hi_3,ram_lo_lo_lo_3}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_699 = {{8191'd0}, _ram_T_102}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_106 = _GEN_699 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_700 = {{8191'd0}, ram_3}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_107 = _GEN_700 ^ _ram_T_106; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_4 = vga_mem_ram_MPORT_36_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_4 = vga_mem_ram_MPORT_37_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_4 = vga_mem_ram_MPORT_38_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_4 = vga_mem_ram_MPORT_39_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_4 = vga_mem_ram_MPORT_40_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_4 = vga_mem_ram_MPORT_41_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_4 = vga_mem_ram_MPORT_42_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_4 = vga_mem_ram_MPORT_43_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_4 = vga_mem_ram_MPORT_44_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_129 = {81'h0,ram_hi_hi_hi_lo_4,ram_hi_hi_lo_4,ram_hi_lo_hi_4,ram_hi_lo_lo_4,ram_lo_hi_hi_hi_4,
    ram_lo_hi_hi_lo_4,ram_lo_hi_lo_4,ram_lo_lo_hi_4,ram_lo_lo_lo_4}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_701 = {{8191'd0}, _ram_T_129}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_133 = _GEN_701 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_702 = {{8191'd0}, ram_4}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_134 = _GEN_702 ^ _ram_T_133; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_5 = vga_mem_ram_MPORT_45_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_5 = vga_mem_ram_MPORT_46_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_5 = vga_mem_ram_MPORT_47_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_5 = vga_mem_ram_MPORT_48_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_5 = vga_mem_ram_MPORT_49_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_5 = vga_mem_ram_MPORT_50_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_5 = vga_mem_ram_MPORT_51_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_5 = vga_mem_ram_MPORT_52_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_5 = vga_mem_ram_MPORT_53_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_156 = {81'h0,ram_hi_hi_hi_lo_5,ram_hi_hi_lo_5,ram_hi_lo_hi_5,ram_hi_lo_lo_5,ram_lo_hi_hi_hi_5,
    ram_lo_hi_hi_lo_5,ram_lo_hi_lo_5,ram_lo_lo_hi_5,ram_lo_lo_lo_5}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_703 = {{8191'd0}, _ram_T_156}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_160 = _GEN_703 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_704 = {{8191'd0}, ram_5}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_161 = _GEN_704 ^ _ram_T_160; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_6 = vga_mem_ram_MPORT_54_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_6 = vga_mem_ram_MPORT_55_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_6 = vga_mem_ram_MPORT_56_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_6 = vga_mem_ram_MPORT_57_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_6 = vga_mem_ram_MPORT_58_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_6 = vga_mem_ram_MPORT_59_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_6 = vga_mem_ram_MPORT_60_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_6 = vga_mem_ram_MPORT_61_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_6 = vga_mem_ram_MPORT_62_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_183 = {81'h0,ram_hi_hi_hi_lo_6,ram_hi_hi_lo_6,ram_hi_lo_hi_6,ram_hi_lo_lo_6,ram_lo_hi_hi_hi_6,
    ram_lo_hi_hi_lo_6,ram_lo_hi_lo_6,ram_lo_lo_hi_6,ram_lo_lo_lo_6}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_705 = {{8191'd0}, _ram_T_183}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_187 = _GEN_705 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_706 = {{8191'd0}, ram_6}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_188 = _GEN_706 ^ _ram_T_187; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_7 = vga_mem_ram_MPORT_63_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_7 = vga_mem_ram_MPORT_64_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_7 = vga_mem_ram_MPORT_65_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_7 = vga_mem_ram_MPORT_66_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_7 = vga_mem_ram_MPORT_67_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_7 = vga_mem_ram_MPORT_68_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_7 = vga_mem_ram_MPORT_69_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_7 = vga_mem_ram_MPORT_70_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_7 = vga_mem_ram_MPORT_71_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_210 = {81'h0,ram_hi_hi_hi_lo_7,ram_hi_hi_lo_7,ram_hi_lo_hi_7,ram_hi_lo_lo_7,ram_lo_hi_hi_hi_7,
    ram_lo_hi_hi_lo_7,ram_lo_hi_lo_7,ram_lo_lo_hi_7,ram_lo_lo_lo_7}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_707 = {{8191'd0}, _ram_T_210}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_214 = _GEN_707 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_708 = {{8191'd0}, ram_7}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_215 = _GEN_708 ^ _ram_T_214; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_8 = vga_mem_ram_MPORT_72_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_8 = vga_mem_ram_MPORT_73_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_8 = vga_mem_ram_MPORT_74_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_8 = vga_mem_ram_MPORT_75_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_8 = vga_mem_ram_MPORT_76_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_8 = vga_mem_ram_MPORT_77_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_8 = vga_mem_ram_MPORT_78_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_8 = vga_mem_ram_MPORT_79_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_8 = vga_mem_ram_MPORT_80_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_237 = {81'h0,ram_hi_hi_hi_lo_8,ram_hi_hi_lo_8,ram_hi_lo_hi_8,ram_hi_lo_lo_8,ram_lo_hi_hi_hi_8,
    ram_lo_hi_hi_lo_8,ram_lo_hi_lo_8,ram_lo_lo_hi_8,ram_lo_lo_lo_8}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_709 = {{8191'd0}, _ram_T_237}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_241 = _GEN_709 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_710 = {{8191'd0}, ram_8}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_242 = _GEN_710 ^ _ram_T_241; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_9 = vga_mem_ram_MPORT_81_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_9 = vga_mem_ram_MPORT_82_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_9 = vga_mem_ram_MPORT_83_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_9 = vga_mem_ram_MPORT_84_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_9 = vga_mem_ram_MPORT_85_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_9 = vga_mem_ram_MPORT_86_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_9 = vga_mem_ram_MPORT_87_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_9 = vga_mem_ram_MPORT_88_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_9 = vga_mem_ram_MPORT_89_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_264 = {81'h0,ram_hi_hi_hi_lo_9,ram_hi_hi_lo_9,ram_hi_lo_hi_9,ram_hi_lo_lo_9,ram_lo_hi_hi_hi_9,
    ram_lo_hi_hi_lo_9,ram_lo_hi_lo_9,ram_lo_lo_hi_9,ram_lo_lo_lo_9}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_711 = {{8191'd0}, _ram_T_264}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_268 = _GEN_711 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_712 = {{8191'd0}, ram_9}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_269 = _GEN_712 ^ _ram_T_268; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_10 = vga_mem_ram_MPORT_90_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_10 = vga_mem_ram_MPORT_91_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_10 = vga_mem_ram_MPORT_92_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_10 = vga_mem_ram_MPORT_93_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_10 = vga_mem_ram_MPORT_94_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_10 = vga_mem_ram_MPORT_95_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_10 = vga_mem_ram_MPORT_96_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_10 = vga_mem_ram_MPORT_97_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_10 = vga_mem_ram_MPORT_98_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_291 = {81'h0,ram_hi_hi_hi_lo_10,ram_hi_hi_lo_10,ram_hi_lo_hi_10,ram_hi_lo_lo_10,ram_lo_hi_hi_hi_10,
    ram_lo_hi_hi_lo_10,ram_lo_hi_lo_10,ram_lo_lo_hi_10,ram_lo_lo_lo_10}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_713 = {{8191'd0}, _ram_T_291}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_295 = _GEN_713 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_714 = {{8191'd0}, ram_10}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_296 = _GEN_714 ^ _ram_T_295; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_11 = vga_mem_ram_MPORT_99_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_11 = vga_mem_ram_MPORT_100_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_11 = vga_mem_ram_MPORT_101_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_11 = vga_mem_ram_MPORT_102_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_11 = vga_mem_ram_MPORT_103_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_11 = vga_mem_ram_MPORT_104_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_11 = vga_mem_ram_MPORT_105_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_11 = vga_mem_ram_MPORT_106_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_11 = vga_mem_ram_MPORT_107_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_318 = {81'h0,ram_hi_hi_hi_lo_11,ram_hi_hi_lo_11,ram_hi_lo_hi_11,ram_hi_lo_lo_11,ram_lo_hi_hi_hi_11,
    ram_lo_hi_hi_lo_11,ram_lo_hi_lo_11,ram_lo_lo_hi_11,ram_lo_lo_lo_11}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_715 = {{8191'd0}, _ram_T_318}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_322 = _GEN_715 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_716 = {{8191'd0}, ram_11}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_323 = _GEN_716 ^ _ram_T_322; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_12 = vga_mem_ram_MPORT_108_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_12 = vga_mem_ram_MPORT_109_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_12 = vga_mem_ram_MPORT_110_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_12 = vga_mem_ram_MPORT_111_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_12 = vga_mem_ram_MPORT_112_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_12 = vga_mem_ram_MPORT_113_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_12 = vga_mem_ram_MPORT_114_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_12 = vga_mem_ram_MPORT_115_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_12 = vga_mem_ram_MPORT_116_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_345 = {81'h0,ram_hi_hi_hi_lo_12,ram_hi_hi_lo_12,ram_hi_lo_hi_12,ram_hi_lo_lo_12,ram_lo_hi_hi_hi_12,
    ram_lo_hi_hi_lo_12,ram_lo_hi_lo_12,ram_lo_lo_hi_12,ram_lo_lo_lo_12}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_717 = {{8191'd0}, _ram_T_345}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_349 = _GEN_717 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_718 = {{8191'd0}, ram_12}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_350 = _GEN_718 ^ _ram_T_349; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_13 = vga_mem_ram_MPORT_117_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_13 = vga_mem_ram_MPORT_118_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_13 = vga_mem_ram_MPORT_119_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_13 = vga_mem_ram_MPORT_120_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_13 = vga_mem_ram_MPORT_121_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_13 = vga_mem_ram_MPORT_122_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_13 = vga_mem_ram_MPORT_123_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_13 = vga_mem_ram_MPORT_124_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_13 = vga_mem_ram_MPORT_125_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_372 = {81'h0,ram_hi_hi_hi_lo_13,ram_hi_hi_lo_13,ram_hi_lo_hi_13,ram_hi_lo_lo_13,ram_lo_hi_hi_hi_13,
    ram_lo_hi_hi_lo_13,ram_lo_hi_lo_13,ram_lo_lo_hi_13,ram_lo_lo_lo_13}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_719 = {{8191'd0}, _ram_T_372}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_376 = _GEN_719 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_720 = {{8191'd0}, ram_13}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_377 = _GEN_720 ^ _ram_T_376; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_14 = vga_mem_ram_MPORT_126_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_14 = vga_mem_ram_MPORT_127_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_14 = vga_mem_ram_MPORT_128_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_14 = vga_mem_ram_MPORT_129_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_14 = vga_mem_ram_MPORT_130_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_14 = vga_mem_ram_MPORT_131_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_14 = vga_mem_ram_MPORT_132_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_14 = vga_mem_ram_MPORT_133_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_14 = vga_mem_ram_MPORT_134_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_399 = {81'h0,ram_hi_hi_hi_lo_14,ram_hi_hi_lo_14,ram_hi_lo_hi_14,ram_hi_lo_lo_14,ram_lo_hi_hi_hi_14,
    ram_lo_hi_hi_lo_14,ram_lo_hi_lo_14,ram_lo_lo_hi_14,ram_lo_lo_lo_14}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_721 = {{8191'd0}, _ram_T_399}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_403 = _GEN_721 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_722 = {{8191'd0}, ram_14}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_404 = _GEN_722 ^ _ram_T_403; // @[vga.scala 60:41]
  wire  ram_hi_hi_hi_lo_15 = vga_mem_ram_MPORT_135_data[0]; // @[vga.scala 60:82]
  wire  ram_hi_hi_lo_15 = vga_mem_ram_MPORT_136_data[1]; // @[vga.scala 60:108]
  wire  ram_hi_lo_hi_15 = vga_mem_ram_MPORT_137_data[2]; // @[vga.scala 60:134]
  wire  ram_hi_lo_lo_15 = vga_mem_ram_MPORT_138_data[3]; // @[vga.scala 60:160]
  wire  ram_lo_hi_hi_hi_15 = vga_mem_ram_MPORT_139_data[4]; // @[vga.scala 60:186]
  wire  ram_lo_hi_hi_lo_15 = vga_mem_ram_MPORT_140_data[5]; // @[vga.scala 60:212]
  wire  ram_lo_hi_lo_15 = vga_mem_ram_MPORT_141_data[6]; // @[vga.scala 60:238]
  wire  ram_lo_lo_hi_15 = vga_mem_ram_MPORT_142_data[7]; // @[vga.scala 60:264]
  wire  ram_lo_lo_lo_15 = vga_mem_ram_MPORT_143_data[8]; // @[vga.scala 60:290]
  wire [89:0] _ram_T_426 = {81'h0,ram_hi_hi_hi_lo_15,ram_hi_hi_lo_15,ram_hi_lo_hi_15,ram_hi_lo_lo_15,ram_lo_hi_hi_hi_15,
    ram_lo_hi_hi_lo_15,ram_lo_hi_lo_15,ram_lo_lo_hi_15,ram_lo_lo_lo_15}; // @[Cat.scala 30:58]
  wire [8280:0] _GEN_723 = {{8191'd0}, _ram_T_426}; // @[vga.scala 60:294]
  wire [8280:0] _ram_T_430 = _GEN_723 << _ram_T_24; // @[vga.scala 60:294]
  wire [8280:0] _GEN_724 = {{8191'd0}, ram_15}; // @[vga.scala 60:41]
  wire [8280:0] _ram_T_431 = _GEN_724 ^ _ram_T_430; // @[vga.scala 60:41]
  wire [8:0] _v_T_1 = v + 9'h9; // @[vga.scala 62:13]
  reg [23:0] rdwrPort; // @[vga.scala 64:23]
  wire [89:0] _GEN_677 = 4'h1 == io_h_addr[3:0] ? ram_1 : ram_0; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_678 = 4'h2 == io_h_addr[3:0] ? ram_2 : _GEN_677; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_679 = 4'h3 == io_h_addr[3:0] ? ram_3 : _GEN_678; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_680 = 4'h4 == io_h_addr[3:0] ? ram_4 : _GEN_679; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_681 = 4'h5 == io_h_addr[3:0] ? ram_5 : _GEN_680; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_682 = 4'h6 == io_h_addr[3:0] ? ram_6 : _GEN_681; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_683 = 4'h7 == io_h_addr[3:0] ? ram_7 : _GEN_682; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_684 = 4'h8 == io_h_addr[3:0] ? ram_8 : _GEN_683; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_685 = 4'h9 == io_h_addr[3:0] ? ram_9 : _GEN_684; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_686 = 4'ha == io_h_addr[3:0] ? ram_10 : _GEN_685; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_687 = 4'hb == io_h_addr[3:0] ? ram_11 : _GEN_686; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_688 = 4'hc == io_h_addr[3:0] ? ram_12 : _GEN_687; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_689 = 4'hd == io_h_addr[3:0] ? ram_13 : _GEN_688; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_690 = 4'he == io_h_addr[3:0] ? ram_14 : _GEN_689; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _GEN_691 = 4'hf == io_h_addr[3:0] ? ram_15 : _GEN_690; // @[vga.scala 65:24 vga.scala 65:24]
  wire [89:0] _T_51 = _GEN_691 >> io_v_addr; // @[vga.scala 65:24]
  assign vga_mem_ram_MPORT_addr = vga_mem_ram_MPORT_addr_pipe_0;
  assign vga_mem_ram_MPORT_data = vga_mem[vga_mem_ram_MPORT_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_1_addr = vga_mem_ram_MPORT_1_addr_pipe_0;
  assign vga_mem_ram_MPORT_1_data = vga_mem[vga_mem_ram_MPORT_1_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_2_addr = vga_mem_ram_MPORT_2_addr_pipe_0;
  assign vga_mem_ram_MPORT_2_data = vga_mem[vga_mem_ram_MPORT_2_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_3_addr = vga_mem_ram_MPORT_3_addr_pipe_0;
  assign vga_mem_ram_MPORT_3_data = vga_mem[vga_mem_ram_MPORT_3_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_4_addr = vga_mem_ram_MPORT_4_addr_pipe_0;
  assign vga_mem_ram_MPORT_4_data = vga_mem[vga_mem_ram_MPORT_4_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_5_addr = vga_mem_ram_MPORT_5_addr_pipe_0;
  assign vga_mem_ram_MPORT_5_data = vga_mem[vga_mem_ram_MPORT_5_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_6_addr = vga_mem_ram_MPORT_6_addr_pipe_0;
  assign vga_mem_ram_MPORT_6_data = vga_mem[vga_mem_ram_MPORT_6_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_7_addr = vga_mem_ram_MPORT_7_addr_pipe_0;
  assign vga_mem_ram_MPORT_7_data = vga_mem[vga_mem_ram_MPORT_7_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_8_addr = vga_mem_ram_MPORT_8_addr_pipe_0;
  assign vga_mem_ram_MPORT_8_data = vga_mem[vga_mem_ram_MPORT_8_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_9_addr = vga_mem_ram_MPORT_9_addr_pipe_0;
  assign vga_mem_ram_MPORT_9_data = vga_mem[vga_mem_ram_MPORT_9_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_10_addr = vga_mem_ram_MPORT_10_addr_pipe_0;
  assign vga_mem_ram_MPORT_10_data = vga_mem[vga_mem_ram_MPORT_10_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_11_addr = vga_mem_ram_MPORT_11_addr_pipe_0;
  assign vga_mem_ram_MPORT_11_data = vga_mem[vga_mem_ram_MPORT_11_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_12_addr = vga_mem_ram_MPORT_12_addr_pipe_0;
  assign vga_mem_ram_MPORT_12_data = vga_mem[vga_mem_ram_MPORT_12_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_13_addr = vga_mem_ram_MPORT_13_addr_pipe_0;
  assign vga_mem_ram_MPORT_13_data = vga_mem[vga_mem_ram_MPORT_13_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_14_addr = vga_mem_ram_MPORT_14_addr_pipe_0;
  assign vga_mem_ram_MPORT_14_data = vga_mem[vga_mem_ram_MPORT_14_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_15_addr = vga_mem_ram_MPORT_15_addr_pipe_0;
  assign vga_mem_ram_MPORT_15_data = vga_mem[vga_mem_ram_MPORT_15_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_16_addr = vga_mem_ram_MPORT_16_addr_pipe_0;
  assign vga_mem_ram_MPORT_16_data = vga_mem[vga_mem_ram_MPORT_16_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_17_addr = vga_mem_ram_MPORT_17_addr_pipe_0;
  assign vga_mem_ram_MPORT_17_data = vga_mem[vga_mem_ram_MPORT_17_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_18_addr = vga_mem_ram_MPORT_18_addr_pipe_0;
  assign vga_mem_ram_MPORT_18_data = vga_mem[vga_mem_ram_MPORT_18_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_19_addr = vga_mem_ram_MPORT_19_addr_pipe_0;
  assign vga_mem_ram_MPORT_19_data = vga_mem[vga_mem_ram_MPORT_19_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_20_addr = vga_mem_ram_MPORT_20_addr_pipe_0;
  assign vga_mem_ram_MPORT_20_data = vga_mem[vga_mem_ram_MPORT_20_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_21_addr = vga_mem_ram_MPORT_21_addr_pipe_0;
  assign vga_mem_ram_MPORT_21_data = vga_mem[vga_mem_ram_MPORT_21_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_22_addr = vga_mem_ram_MPORT_22_addr_pipe_0;
  assign vga_mem_ram_MPORT_22_data = vga_mem[vga_mem_ram_MPORT_22_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_23_addr = vga_mem_ram_MPORT_23_addr_pipe_0;
  assign vga_mem_ram_MPORT_23_data = vga_mem[vga_mem_ram_MPORT_23_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_24_addr = vga_mem_ram_MPORT_24_addr_pipe_0;
  assign vga_mem_ram_MPORT_24_data = vga_mem[vga_mem_ram_MPORT_24_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_25_addr = vga_mem_ram_MPORT_25_addr_pipe_0;
  assign vga_mem_ram_MPORT_25_data = vga_mem[vga_mem_ram_MPORT_25_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_26_addr = vga_mem_ram_MPORT_26_addr_pipe_0;
  assign vga_mem_ram_MPORT_26_data = vga_mem[vga_mem_ram_MPORT_26_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_27_addr = vga_mem_ram_MPORT_27_addr_pipe_0;
  assign vga_mem_ram_MPORT_27_data = vga_mem[vga_mem_ram_MPORT_27_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_28_addr = vga_mem_ram_MPORT_28_addr_pipe_0;
  assign vga_mem_ram_MPORT_28_data = vga_mem[vga_mem_ram_MPORT_28_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_29_addr = vga_mem_ram_MPORT_29_addr_pipe_0;
  assign vga_mem_ram_MPORT_29_data = vga_mem[vga_mem_ram_MPORT_29_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_30_addr = vga_mem_ram_MPORT_30_addr_pipe_0;
  assign vga_mem_ram_MPORT_30_data = vga_mem[vga_mem_ram_MPORT_30_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_31_addr = vga_mem_ram_MPORT_31_addr_pipe_0;
  assign vga_mem_ram_MPORT_31_data = vga_mem[vga_mem_ram_MPORT_31_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_32_addr = vga_mem_ram_MPORT_32_addr_pipe_0;
  assign vga_mem_ram_MPORT_32_data = vga_mem[vga_mem_ram_MPORT_32_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_33_addr = vga_mem_ram_MPORT_33_addr_pipe_0;
  assign vga_mem_ram_MPORT_33_data = vga_mem[vga_mem_ram_MPORT_33_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_34_addr = vga_mem_ram_MPORT_34_addr_pipe_0;
  assign vga_mem_ram_MPORT_34_data = vga_mem[vga_mem_ram_MPORT_34_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_35_addr = vga_mem_ram_MPORT_35_addr_pipe_0;
  assign vga_mem_ram_MPORT_35_data = vga_mem[vga_mem_ram_MPORT_35_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_36_addr = vga_mem_ram_MPORT_36_addr_pipe_0;
  assign vga_mem_ram_MPORT_36_data = vga_mem[vga_mem_ram_MPORT_36_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_37_addr = vga_mem_ram_MPORT_37_addr_pipe_0;
  assign vga_mem_ram_MPORT_37_data = vga_mem[vga_mem_ram_MPORT_37_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_38_addr = vga_mem_ram_MPORT_38_addr_pipe_0;
  assign vga_mem_ram_MPORT_38_data = vga_mem[vga_mem_ram_MPORT_38_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_39_addr = vga_mem_ram_MPORT_39_addr_pipe_0;
  assign vga_mem_ram_MPORT_39_data = vga_mem[vga_mem_ram_MPORT_39_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_40_addr = vga_mem_ram_MPORT_40_addr_pipe_0;
  assign vga_mem_ram_MPORT_40_data = vga_mem[vga_mem_ram_MPORT_40_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_41_addr = vga_mem_ram_MPORT_41_addr_pipe_0;
  assign vga_mem_ram_MPORT_41_data = vga_mem[vga_mem_ram_MPORT_41_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_42_addr = vga_mem_ram_MPORT_42_addr_pipe_0;
  assign vga_mem_ram_MPORT_42_data = vga_mem[vga_mem_ram_MPORT_42_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_43_addr = vga_mem_ram_MPORT_43_addr_pipe_0;
  assign vga_mem_ram_MPORT_43_data = vga_mem[vga_mem_ram_MPORT_43_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_44_addr = vga_mem_ram_MPORT_44_addr_pipe_0;
  assign vga_mem_ram_MPORT_44_data = vga_mem[vga_mem_ram_MPORT_44_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_45_addr = vga_mem_ram_MPORT_45_addr_pipe_0;
  assign vga_mem_ram_MPORT_45_data = vga_mem[vga_mem_ram_MPORT_45_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_46_addr = vga_mem_ram_MPORT_46_addr_pipe_0;
  assign vga_mem_ram_MPORT_46_data = vga_mem[vga_mem_ram_MPORT_46_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_47_addr = vga_mem_ram_MPORT_47_addr_pipe_0;
  assign vga_mem_ram_MPORT_47_data = vga_mem[vga_mem_ram_MPORT_47_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_48_addr = vga_mem_ram_MPORT_48_addr_pipe_0;
  assign vga_mem_ram_MPORT_48_data = vga_mem[vga_mem_ram_MPORT_48_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_49_addr = vga_mem_ram_MPORT_49_addr_pipe_0;
  assign vga_mem_ram_MPORT_49_data = vga_mem[vga_mem_ram_MPORT_49_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_50_addr = vga_mem_ram_MPORT_50_addr_pipe_0;
  assign vga_mem_ram_MPORT_50_data = vga_mem[vga_mem_ram_MPORT_50_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_51_addr = vga_mem_ram_MPORT_51_addr_pipe_0;
  assign vga_mem_ram_MPORT_51_data = vga_mem[vga_mem_ram_MPORT_51_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_52_addr = vga_mem_ram_MPORT_52_addr_pipe_0;
  assign vga_mem_ram_MPORT_52_data = vga_mem[vga_mem_ram_MPORT_52_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_53_addr = vga_mem_ram_MPORT_53_addr_pipe_0;
  assign vga_mem_ram_MPORT_53_data = vga_mem[vga_mem_ram_MPORT_53_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_54_addr = vga_mem_ram_MPORT_54_addr_pipe_0;
  assign vga_mem_ram_MPORT_54_data = vga_mem[vga_mem_ram_MPORT_54_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_55_addr = vga_mem_ram_MPORT_55_addr_pipe_0;
  assign vga_mem_ram_MPORT_55_data = vga_mem[vga_mem_ram_MPORT_55_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_56_addr = vga_mem_ram_MPORT_56_addr_pipe_0;
  assign vga_mem_ram_MPORT_56_data = vga_mem[vga_mem_ram_MPORT_56_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_57_addr = vga_mem_ram_MPORT_57_addr_pipe_0;
  assign vga_mem_ram_MPORT_57_data = vga_mem[vga_mem_ram_MPORT_57_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_58_addr = vga_mem_ram_MPORT_58_addr_pipe_0;
  assign vga_mem_ram_MPORT_58_data = vga_mem[vga_mem_ram_MPORT_58_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_59_addr = vga_mem_ram_MPORT_59_addr_pipe_0;
  assign vga_mem_ram_MPORT_59_data = vga_mem[vga_mem_ram_MPORT_59_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_60_addr = vga_mem_ram_MPORT_60_addr_pipe_0;
  assign vga_mem_ram_MPORT_60_data = vga_mem[vga_mem_ram_MPORT_60_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_61_addr = vga_mem_ram_MPORT_61_addr_pipe_0;
  assign vga_mem_ram_MPORT_61_data = vga_mem[vga_mem_ram_MPORT_61_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_62_addr = vga_mem_ram_MPORT_62_addr_pipe_0;
  assign vga_mem_ram_MPORT_62_data = vga_mem[vga_mem_ram_MPORT_62_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_63_addr = vga_mem_ram_MPORT_63_addr_pipe_0;
  assign vga_mem_ram_MPORT_63_data = vga_mem[vga_mem_ram_MPORT_63_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_64_addr = vga_mem_ram_MPORT_64_addr_pipe_0;
  assign vga_mem_ram_MPORT_64_data = vga_mem[vga_mem_ram_MPORT_64_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_65_addr = vga_mem_ram_MPORT_65_addr_pipe_0;
  assign vga_mem_ram_MPORT_65_data = vga_mem[vga_mem_ram_MPORT_65_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_66_addr = vga_mem_ram_MPORT_66_addr_pipe_0;
  assign vga_mem_ram_MPORT_66_data = vga_mem[vga_mem_ram_MPORT_66_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_67_addr = vga_mem_ram_MPORT_67_addr_pipe_0;
  assign vga_mem_ram_MPORT_67_data = vga_mem[vga_mem_ram_MPORT_67_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_68_addr = vga_mem_ram_MPORT_68_addr_pipe_0;
  assign vga_mem_ram_MPORT_68_data = vga_mem[vga_mem_ram_MPORT_68_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_69_addr = vga_mem_ram_MPORT_69_addr_pipe_0;
  assign vga_mem_ram_MPORT_69_data = vga_mem[vga_mem_ram_MPORT_69_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_70_addr = vga_mem_ram_MPORT_70_addr_pipe_0;
  assign vga_mem_ram_MPORT_70_data = vga_mem[vga_mem_ram_MPORT_70_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_71_addr = vga_mem_ram_MPORT_71_addr_pipe_0;
  assign vga_mem_ram_MPORT_71_data = vga_mem[vga_mem_ram_MPORT_71_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_72_addr = vga_mem_ram_MPORT_72_addr_pipe_0;
  assign vga_mem_ram_MPORT_72_data = vga_mem[vga_mem_ram_MPORT_72_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_73_addr = vga_mem_ram_MPORT_73_addr_pipe_0;
  assign vga_mem_ram_MPORT_73_data = vga_mem[vga_mem_ram_MPORT_73_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_74_addr = vga_mem_ram_MPORT_74_addr_pipe_0;
  assign vga_mem_ram_MPORT_74_data = vga_mem[vga_mem_ram_MPORT_74_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_75_addr = vga_mem_ram_MPORT_75_addr_pipe_0;
  assign vga_mem_ram_MPORT_75_data = vga_mem[vga_mem_ram_MPORT_75_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_76_addr = vga_mem_ram_MPORT_76_addr_pipe_0;
  assign vga_mem_ram_MPORT_76_data = vga_mem[vga_mem_ram_MPORT_76_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_77_addr = vga_mem_ram_MPORT_77_addr_pipe_0;
  assign vga_mem_ram_MPORT_77_data = vga_mem[vga_mem_ram_MPORT_77_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_78_addr = vga_mem_ram_MPORT_78_addr_pipe_0;
  assign vga_mem_ram_MPORT_78_data = vga_mem[vga_mem_ram_MPORT_78_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_79_addr = vga_mem_ram_MPORT_79_addr_pipe_0;
  assign vga_mem_ram_MPORT_79_data = vga_mem[vga_mem_ram_MPORT_79_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_80_addr = vga_mem_ram_MPORT_80_addr_pipe_0;
  assign vga_mem_ram_MPORT_80_data = vga_mem[vga_mem_ram_MPORT_80_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_81_addr = vga_mem_ram_MPORT_81_addr_pipe_0;
  assign vga_mem_ram_MPORT_81_data = vga_mem[vga_mem_ram_MPORT_81_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_82_addr = vga_mem_ram_MPORT_82_addr_pipe_0;
  assign vga_mem_ram_MPORT_82_data = vga_mem[vga_mem_ram_MPORT_82_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_83_addr = vga_mem_ram_MPORT_83_addr_pipe_0;
  assign vga_mem_ram_MPORT_83_data = vga_mem[vga_mem_ram_MPORT_83_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_84_addr = vga_mem_ram_MPORT_84_addr_pipe_0;
  assign vga_mem_ram_MPORT_84_data = vga_mem[vga_mem_ram_MPORT_84_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_85_addr = vga_mem_ram_MPORT_85_addr_pipe_0;
  assign vga_mem_ram_MPORT_85_data = vga_mem[vga_mem_ram_MPORT_85_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_86_addr = vga_mem_ram_MPORT_86_addr_pipe_0;
  assign vga_mem_ram_MPORT_86_data = vga_mem[vga_mem_ram_MPORT_86_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_87_addr = vga_mem_ram_MPORT_87_addr_pipe_0;
  assign vga_mem_ram_MPORT_87_data = vga_mem[vga_mem_ram_MPORT_87_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_88_addr = vga_mem_ram_MPORT_88_addr_pipe_0;
  assign vga_mem_ram_MPORT_88_data = vga_mem[vga_mem_ram_MPORT_88_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_89_addr = vga_mem_ram_MPORT_89_addr_pipe_0;
  assign vga_mem_ram_MPORT_89_data = vga_mem[vga_mem_ram_MPORT_89_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_90_addr = vga_mem_ram_MPORT_90_addr_pipe_0;
  assign vga_mem_ram_MPORT_90_data = vga_mem[vga_mem_ram_MPORT_90_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_91_addr = vga_mem_ram_MPORT_91_addr_pipe_0;
  assign vga_mem_ram_MPORT_91_data = vga_mem[vga_mem_ram_MPORT_91_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_92_addr = vga_mem_ram_MPORT_92_addr_pipe_0;
  assign vga_mem_ram_MPORT_92_data = vga_mem[vga_mem_ram_MPORT_92_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_93_addr = vga_mem_ram_MPORT_93_addr_pipe_0;
  assign vga_mem_ram_MPORT_93_data = vga_mem[vga_mem_ram_MPORT_93_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_94_addr = vga_mem_ram_MPORT_94_addr_pipe_0;
  assign vga_mem_ram_MPORT_94_data = vga_mem[vga_mem_ram_MPORT_94_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_95_addr = vga_mem_ram_MPORT_95_addr_pipe_0;
  assign vga_mem_ram_MPORT_95_data = vga_mem[vga_mem_ram_MPORT_95_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_96_addr = vga_mem_ram_MPORT_96_addr_pipe_0;
  assign vga_mem_ram_MPORT_96_data = vga_mem[vga_mem_ram_MPORT_96_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_97_addr = vga_mem_ram_MPORT_97_addr_pipe_0;
  assign vga_mem_ram_MPORT_97_data = vga_mem[vga_mem_ram_MPORT_97_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_98_addr = vga_mem_ram_MPORT_98_addr_pipe_0;
  assign vga_mem_ram_MPORT_98_data = vga_mem[vga_mem_ram_MPORT_98_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_99_addr = vga_mem_ram_MPORT_99_addr_pipe_0;
  assign vga_mem_ram_MPORT_99_data = vga_mem[vga_mem_ram_MPORT_99_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_100_addr = vga_mem_ram_MPORT_100_addr_pipe_0;
  assign vga_mem_ram_MPORT_100_data = vga_mem[vga_mem_ram_MPORT_100_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_101_addr = vga_mem_ram_MPORT_101_addr_pipe_0;
  assign vga_mem_ram_MPORT_101_data = vga_mem[vga_mem_ram_MPORT_101_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_102_addr = vga_mem_ram_MPORT_102_addr_pipe_0;
  assign vga_mem_ram_MPORT_102_data = vga_mem[vga_mem_ram_MPORT_102_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_103_addr = vga_mem_ram_MPORT_103_addr_pipe_0;
  assign vga_mem_ram_MPORT_103_data = vga_mem[vga_mem_ram_MPORT_103_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_104_addr = vga_mem_ram_MPORT_104_addr_pipe_0;
  assign vga_mem_ram_MPORT_104_data = vga_mem[vga_mem_ram_MPORT_104_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_105_addr = vga_mem_ram_MPORT_105_addr_pipe_0;
  assign vga_mem_ram_MPORT_105_data = vga_mem[vga_mem_ram_MPORT_105_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_106_addr = vga_mem_ram_MPORT_106_addr_pipe_0;
  assign vga_mem_ram_MPORT_106_data = vga_mem[vga_mem_ram_MPORT_106_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_107_addr = vga_mem_ram_MPORT_107_addr_pipe_0;
  assign vga_mem_ram_MPORT_107_data = vga_mem[vga_mem_ram_MPORT_107_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_108_addr = vga_mem_ram_MPORT_108_addr_pipe_0;
  assign vga_mem_ram_MPORT_108_data = vga_mem[vga_mem_ram_MPORT_108_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_109_addr = vga_mem_ram_MPORT_109_addr_pipe_0;
  assign vga_mem_ram_MPORT_109_data = vga_mem[vga_mem_ram_MPORT_109_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_110_addr = vga_mem_ram_MPORT_110_addr_pipe_0;
  assign vga_mem_ram_MPORT_110_data = vga_mem[vga_mem_ram_MPORT_110_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_111_addr = vga_mem_ram_MPORT_111_addr_pipe_0;
  assign vga_mem_ram_MPORT_111_data = vga_mem[vga_mem_ram_MPORT_111_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_112_addr = vga_mem_ram_MPORT_112_addr_pipe_0;
  assign vga_mem_ram_MPORT_112_data = vga_mem[vga_mem_ram_MPORT_112_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_113_addr = vga_mem_ram_MPORT_113_addr_pipe_0;
  assign vga_mem_ram_MPORT_113_data = vga_mem[vga_mem_ram_MPORT_113_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_114_addr = vga_mem_ram_MPORT_114_addr_pipe_0;
  assign vga_mem_ram_MPORT_114_data = vga_mem[vga_mem_ram_MPORT_114_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_115_addr = vga_mem_ram_MPORT_115_addr_pipe_0;
  assign vga_mem_ram_MPORT_115_data = vga_mem[vga_mem_ram_MPORT_115_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_116_addr = vga_mem_ram_MPORT_116_addr_pipe_0;
  assign vga_mem_ram_MPORT_116_data = vga_mem[vga_mem_ram_MPORT_116_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_117_addr = vga_mem_ram_MPORT_117_addr_pipe_0;
  assign vga_mem_ram_MPORT_117_data = vga_mem[vga_mem_ram_MPORT_117_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_118_addr = vga_mem_ram_MPORT_118_addr_pipe_0;
  assign vga_mem_ram_MPORT_118_data = vga_mem[vga_mem_ram_MPORT_118_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_119_addr = vga_mem_ram_MPORT_119_addr_pipe_0;
  assign vga_mem_ram_MPORT_119_data = vga_mem[vga_mem_ram_MPORT_119_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_120_addr = vga_mem_ram_MPORT_120_addr_pipe_0;
  assign vga_mem_ram_MPORT_120_data = vga_mem[vga_mem_ram_MPORT_120_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_121_addr = vga_mem_ram_MPORT_121_addr_pipe_0;
  assign vga_mem_ram_MPORT_121_data = vga_mem[vga_mem_ram_MPORT_121_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_122_addr = vga_mem_ram_MPORT_122_addr_pipe_0;
  assign vga_mem_ram_MPORT_122_data = vga_mem[vga_mem_ram_MPORT_122_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_123_addr = vga_mem_ram_MPORT_123_addr_pipe_0;
  assign vga_mem_ram_MPORT_123_data = vga_mem[vga_mem_ram_MPORT_123_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_124_addr = vga_mem_ram_MPORT_124_addr_pipe_0;
  assign vga_mem_ram_MPORT_124_data = vga_mem[vga_mem_ram_MPORT_124_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_125_addr = vga_mem_ram_MPORT_125_addr_pipe_0;
  assign vga_mem_ram_MPORT_125_data = vga_mem[vga_mem_ram_MPORT_125_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_126_addr = vga_mem_ram_MPORT_126_addr_pipe_0;
  assign vga_mem_ram_MPORT_126_data = vga_mem[vga_mem_ram_MPORT_126_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_127_addr = vga_mem_ram_MPORT_127_addr_pipe_0;
  assign vga_mem_ram_MPORT_127_data = vga_mem[vga_mem_ram_MPORT_127_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_128_addr = vga_mem_ram_MPORT_128_addr_pipe_0;
  assign vga_mem_ram_MPORT_128_data = vga_mem[vga_mem_ram_MPORT_128_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_129_addr = vga_mem_ram_MPORT_129_addr_pipe_0;
  assign vga_mem_ram_MPORT_129_data = vga_mem[vga_mem_ram_MPORT_129_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_130_addr = vga_mem_ram_MPORT_130_addr_pipe_0;
  assign vga_mem_ram_MPORT_130_data = vga_mem[vga_mem_ram_MPORT_130_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_131_addr = vga_mem_ram_MPORT_131_addr_pipe_0;
  assign vga_mem_ram_MPORT_131_data = vga_mem[vga_mem_ram_MPORT_131_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_132_addr = vga_mem_ram_MPORT_132_addr_pipe_0;
  assign vga_mem_ram_MPORT_132_data = vga_mem[vga_mem_ram_MPORT_132_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_133_addr = vga_mem_ram_MPORT_133_addr_pipe_0;
  assign vga_mem_ram_MPORT_133_data = vga_mem[vga_mem_ram_MPORT_133_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_134_addr = vga_mem_ram_MPORT_134_addr_pipe_0;
  assign vga_mem_ram_MPORT_134_data = vga_mem[vga_mem_ram_MPORT_134_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_135_addr = vga_mem_ram_MPORT_135_addr_pipe_0;
  assign vga_mem_ram_MPORT_135_data = vga_mem[vga_mem_ram_MPORT_135_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_136_addr = vga_mem_ram_MPORT_136_addr_pipe_0;
  assign vga_mem_ram_MPORT_136_data = vga_mem[vga_mem_ram_MPORT_136_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_137_addr = vga_mem_ram_MPORT_137_addr_pipe_0;
  assign vga_mem_ram_MPORT_137_data = vga_mem[vga_mem_ram_MPORT_137_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_138_addr = vga_mem_ram_MPORT_138_addr_pipe_0;
  assign vga_mem_ram_MPORT_138_data = vga_mem[vga_mem_ram_MPORT_138_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_139_addr = vga_mem_ram_MPORT_139_addr_pipe_0;
  assign vga_mem_ram_MPORT_139_data = vga_mem[vga_mem_ram_MPORT_139_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_140_addr = vga_mem_ram_MPORT_140_addr_pipe_0;
  assign vga_mem_ram_MPORT_140_data = vga_mem[vga_mem_ram_MPORT_140_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_141_addr = vga_mem_ram_MPORT_141_addr_pipe_0;
  assign vga_mem_ram_MPORT_141_data = vga_mem[vga_mem_ram_MPORT_141_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_142_addr = vga_mem_ram_MPORT_142_addr_pipe_0;
  assign vga_mem_ram_MPORT_142_data = vga_mem[vga_mem_ram_MPORT_142_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_143_addr = vga_mem_ram_MPORT_143_addr_pipe_0;
  assign vga_mem_ram_MPORT_143_data = vga_mem[vga_mem_ram_MPORT_143_addr]; // @[vga.scala 51:30]
  assign io_vga_data = rdwrPort; // @[vga.scala 70:16]
  always @(posedge clock) begin
    vga_mem_ram_MPORT_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_1_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_1_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_2_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_2_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_3_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_3_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_4_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_4_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_5_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_5_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_6_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_6_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_7_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_7_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_8_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_8_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_9_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_9_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_10_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_10_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_11_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_11_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_12_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_12_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_13_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_13_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_14_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_14_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_15_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_15_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_16_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_16_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_17_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_17_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_18_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_18_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_19_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_19_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_20_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_20_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_21_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_21_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_22_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_22_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_23_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_23_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_24_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_24_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_25_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_25_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_26_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_26_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_27_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_27_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_28_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_28_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_29_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_29_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_30_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_30_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_31_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_31_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_32_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_32_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_33_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_33_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_34_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_34_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_35_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_35_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_36_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_36_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_37_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_37_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_38_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_38_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_39_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_39_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_40_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_40_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_41_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_41_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_42_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_42_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_43_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_43_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_44_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_44_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_45_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_45_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_46_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_46_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_47_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_47_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_48_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_48_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_49_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_49_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_50_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_50_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_51_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_51_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_52_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_52_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_53_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_53_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_54_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_54_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_55_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_55_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_56_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_56_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_57_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_57_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_58_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_58_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_59_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_59_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_60_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_60_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_61_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_61_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_62_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_62_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_63_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_63_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_64_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_64_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_65_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_65_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_66_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_66_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_67_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_67_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_68_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_68_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_69_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_69_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_70_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_70_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_71_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_71_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_72_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_72_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_73_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_73_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_74_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_74_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_75_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_75_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_76_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_76_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_77_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_77_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_78_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_78_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_79_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_79_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_80_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_80_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_81_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_81_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_82_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_82_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_83_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_83_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_84_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_84_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_85_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_85_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_86_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_86_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_87_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_87_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_88_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_88_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_89_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_89_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_90_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_90_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_91_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_91_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_92_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_92_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_93_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_93_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_94_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_94_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_95_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_95_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_96_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_96_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_97_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_97_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_98_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_98_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_99_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_99_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_100_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_100_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_101_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_101_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_102_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_102_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_103_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_103_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_104_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_104_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_105_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_105_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_106_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_106_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_107_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_107_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_108_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_108_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_109_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_109_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_110_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_110_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_111_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_111_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_112_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_112_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_113_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_113_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_114_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_114_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_115_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_115_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_116_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_116_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_117_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_117_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_118_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_118_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_119_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_119_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_120_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_120_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_121_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_121_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_122_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_122_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_123_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_123_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_124_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_124_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_125_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_125_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_126_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_126_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_127_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_127_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_128_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_128_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_129_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_129_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_130_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_130_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_131_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_131_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_132_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_132_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_133_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_133_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_134_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_134_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_135_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_135_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_136_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_136_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_137_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_137_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_138_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_138_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_139_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_139_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_140_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_140_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_141_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_141_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_142_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_142_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_143_en_pipe_0 <= io_now != 2'h0;
    if (io_now != 2'h0) begin
      vga_mem_ram_MPORT_143_addr_pipe_0 <= _ram_T_3[11:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_0 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_0 <= _ram_T_26[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_1 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_1 <= _ram_T_53[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_2 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_2 <= _ram_T_80[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_3 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_3 <= _ram_T_107[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_4 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_4 <= _ram_T_134[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_5 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_5 <= _ram_T_161[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_6 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_6 <= _ram_T_188[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_7 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_7 <= _ram_T_215[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_8 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_8 <= _ram_T_242[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_9 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_9 <= _ram_T_269[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_10 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_10 <= _ram_T_296[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_11 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_11 <= _ram_T_323[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_12 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_12 <= _ram_T_350[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_13 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_13 <= _ram_T_377[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_14 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_14 <= _ram_T_404[89:0];
    end
    if (reset) begin // @[vga.scala 46:20]
      ram_15 <= 90'h0; // @[vga.scala 46:20]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      ram_15 <= _ram_T_431[89:0];
    end
    if (reset) begin // @[vga.scala 49:18]
      v <= 9'h0; // @[vga.scala 49:18]
    end else if (io_now != 2'h0) begin // @[vga.scala 58:23]
      v <= _v_T_1; // @[vga.scala 62:10]
    end else if (v >= 9'h5a) begin // @[vga.scala 55:18]
      v <= 9'h0; // @[vga.scala 56:10]
    end
    if (_T_51[0]) begin // @[vga.scala 65:42]
      rdwrPort <= 24'hffffff; // @[vga.scala 66:17]
    end else begin
      rdwrPort <= 24'h0; // @[vga.scala 68:17]
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
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  vga_mem_ram_MPORT_en_pipe_0 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  vga_mem_ram_MPORT_addr_pipe_0 = _RAND_1[11:0];
  _RAND_2 = {1{`RANDOM}};
  vga_mem_ram_MPORT_1_en_pipe_0 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  vga_mem_ram_MPORT_1_addr_pipe_0 = _RAND_3[11:0];
  _RAND_4 = {1{`RANDOM}};
  vga_mem_ram_MPORT_2_en_pipe_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  vga_mem_ram_MPORT_2_addr_pipe_0 = _RAND_5[11:0];
  _RAND_6 = {1{`RANDOM}};
  vga_mem_ram_MPORT_3_en_pipe_0 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  vga_mem_ram_MPORT_3_addr_pipe_0 = _RAND_7[11:0];
  _RAND_8 = {1{`RANDOM}};
  vga_mem_ram_MPORT_4_en_pipe_0 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  vga_mem_ram_MPORT_4_addr_pipe_0 = _RAND_9[11:0];
  _RAND_10 = {1{`RANDOM}};
  vga_mem_ram_MPORT_5_en_pipe_0 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  vga_mem_ram_MPORT_5_addr_pipe_0 = _RAND_11[11:0];
  _RAND_12 = {1{`RANDOM}};
  vga_mem_ram_MPORT_6_en_pipe_0 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  vga_mem_ram_MPORT_6_addr_pipe_0 = _RAND_13[11:0];
  _RAND_14 = {1{`RANDOM}};
  vga_mem_ram_MPORT_7_en_pipe_0 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  vga_mem_ram_MPORT_7_addr_pipe_0 = _RAND_15[11:0];
  _RAND_16 = {1{`RANDOM}};
  vga_mem_ram_MPORT_8_en_pipe_0 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  vga_mem_ram_MPORT_8_addr_pipe_0 = _RAND_17[11:0];
  _RAND_18 = {1{`RANDOM}};
  vga_mem_ram_MPORT_9_en_pipe_0 = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  vga_mem_ram_MPORT_9_addr_pipe_0 = _RAND_19[11:0];
  _RAND_20 = {1{`RANDOM}};
  vga_mem_ram_MPORT_10_en_pipe_0 = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  vga_mem_ram_MPORT_10_addr_pipe_0 = _RAND_21[11:0];
  _RAND_22 = {1{`RANDOM}};
  vga_mem_ram_MPORT_11_en_pipe_0 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  vga_mem_ram_MPORT_11_addr_pipe_0 = _RAND_23[11:0];
  _RAND_24 = {1{`RANDOM}};
  vga_mem_ram_MPORT_12_en_pipe_0 = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  vga_mem_ram_MPORT_12_addr_pipe_0 = _RAND_25[11:0];
  _RAND_26 = {1{`RANDOM}};
  vga_mem_ram_MPORT_13_en_pipe_0 = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  vga_mem_ram_MPORT_13_addr_pipe_0 = _RAND_27[11:0];
  _RAND_28 = {1{`RANDOM}};
  vga_mem_ram_MPORT_14_en_pipe_0 = _RAND_28[0:0];
  _RAND_29 = {1{`RANDOM}};
  vga_mem_ram_MPORT_14_addr_pipe_0 = _RAND_29[11:0];
  _RAND_30 = {1{`RANDOM}};
  vga_mem_ram_MPORT_15_en_pipe_0 = _RAND_30[0:0];
  _RAND_31 = {1{`RANDOM}};
  vga_mem_ram_MPORT_15_addr_pipe_0 = _RAND_31[11:0];
  _RAND_32 = {1{`RANDOM}};
  vga_mem_ram_MPORT_16_en_pipe_0 = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  vga_mem_ram_MPORT_16_addr_pipe_0 = _RAND_33[11:0];
  _RAND_34 = {1{`RANDOM}};
  vga_mem_ram_MPORT_17_en_pipe_0 = _RAND_34[0:0];
  _RAND_35 = {1{`RANDOM}};
  vga_mem_ram_MPORT_17_addr_pipe_0 = _RAND_35[11:0];
  _RAND_36 = {1{`RANDOM}};
  vga_mem_ram_MPORT_18_en_pipe_0 = _RAND_36[0:0];
  _RAND_37 = {1{`RANDOM}};
  vga_mem_ram_MPORT_18_addr_pipe_0 = _RAND_37[11:0];
  _RAND_38 = {1{`RANDOM}};
  vga_mem_ram_MPORT_19_en_pipe_0 = _RAND_38[0:0];
  _RAND_39 = {1{`RANDOM}};
  vga_mem_ram_MPORT_19_addr_pipe_0 = _RAND_39[11:0];
  _RAND_40 = {1{`RANDOM}};
  vga_mem_ram_MPORT_20_en_pipe_0 = _RAND_40[0:0];
  _RAND_41 = {1{`RANDOM}};
  vga_mem_ram_MPORT_20_addr_pipe_0 = _RAND_41[11:0];
  _RAND_42 = {1{`RANDOM}};
  vga_mem_ram_MPORT_21_en_pipe_0 = _RAND_42[0:0];
  _RAND_43 = {1{`RANDOM}};
  vga_mem_ram_MPORT_21_addr_pipe_0 = _RAND_43[11:0];
  _RAND_44 = {1{`RANDOM}};
  vga_mem_ram_MPORT_22_en_pipe_0 = _RAND_44[0:0];
  _RAND_45 = {1{`RANDOM}};
  vga_mem_ram_MPORT_22_addr_pipe_0 = _RAND_45[11:0];
  _RAND_46 = {1{`RANDOM}};
  vga_mem_ram_MPORT_23_en_pipe_0 = _RAND_46[0:0];
  _RAND_47 = {1{`RANDOM}};
  vga_mem_ram_MPORT_23_addr_pipe_0 = _RAND_47[11:0];
  _RAND_48 = {1{`RANDOM}};
  vga_mem_ram_MPORT_24_en_pipe_0 = _RAND_48[0:0];
  _RAND_49 = {1{`RANDOM}};
  vga_mem_ram_MPORT_24_addr_pipe_0 = _RAND_49[11:0];
  _RAND_50 = {1{`RANDOM}};
  vga_mem_ram_MPORT_25_en_pipe_0 = _RAND_50[0:0];
  _RAND_51 = {1{`RANDOM}};
  vga_mem_ram_MPORT_25_addr_pipe_0 = _RAND_51[11:0];
  _RAND_52 = {1{`RANDOM}};
  vga_mem_ram_MPORT_26_en_pipe_0 = _RAND_52[0:0];
  _RAND_53 = {1{`RANDOM}};
  vga_mem_ram_MPORT_26_addr_pipe_0 = _RAND_53[11:0];
  _RAND_54 = {1{`RANDOM}};
  vga_mem_ram_MPORT_27_en_pipe_0 = _RAND_54[0:0];
  _RAND_55 = {1{`RANDOM}};
  vga_mem_ram_MPORT_27_addr_pipe_0 = _RAND_55[11:0];
  _RAND_56 = {1{`RANDOM}};
  vga_mem_ram_MPORT_28_en_pipe_0 = _RAND_56[0:0];
  _RAND_57 = {1{`RANDOM}};
  vga_mem_ram_MPORT_28_addr_pipe_0 = _RAND_57[11:0];
  _RAND_58 = {1{`RANDOM}};
  vga_mem_ram_MPORT_29_en_pipe_0 = _RAND_58[0:0];
  _RAND_59 = {1{`RANDOM}};
  vga_mem_ram_MPORT_29_addr_pipe_0 = _RAND_59[11:0];
  _RAND_60 = {1{`RANDOM}};
  vga_mem_ram_MPORT_30_en_pipe_0 = _RAND_60[0:0];
  _RAND_61 = {1{`RANDOM}};
  vga_mem_ram_MPORT_30_addr_pipe_0 = _RAND_61[11:0];
  _RAND_62 = {1{`RANDOM}};
  vga_mem_ram_MPORT_31_en_pipe_0 = _RAND_62[0:0];
  _RAND_63 = {1{`RANDOM}};
  vga_mem_ram_MPORT_31_addr_pipe_0 = _RAND_63[11:0];
  _RAND_64 = {1{`RANDOM}};
  vga_mem_ram_MPORT_32_en_pipe_0 = _RAND_64[0:0];
  _RAND_65 = {1{`RANDOM}};
  vga_mem_ram_MPORT_32_addr_pipe_0 = _RAND_65[11:0];
  _RAND_66 = {1{`RANDOM}};
  vga_mem_ram_MPORT_33_en_pipe_0 = _RAND_66[0:0];
  _RAND_67 = {1{`RANDOM}};
  vga_mem_ram_MPORT_33_addr_pipe_0 = _RAND_67[11:0];
  _RAND_68 = {1{`RANDOM}};
  vga_mem_ram_MPORT_34_en_pipe_0 = _RAND_68[0:0];
  _RAND_69 = {1{`RANDOM}};
  vga_mem_ram_MPORT_34_addr_pipe_0 = _RAND_69[11:0];
  _RAND_70 = {1{`RANDOM}};
  vga_mem_ram_MPORT_35_en_pipe_0 = _RAND_70[0:0];
  _RAND_71 = {1{`RANDOM}};
  vga_mem_ram_MPORT_35_addr_pipe_0 = _RAND_71[11:0];
  _RAND_72 = {1{`RANDOM}};
  vga_mem_ram_MPORT_36_en_pipe_0 = _RAND_72[0:0];
  _RAND_73 = {1{`RANDOM}};
  vga_mem_ram_MPORT_36_addr_pipe_0 = _RAND_73[11:0];
  _RAND_74 = {1{`RANDOM}};
  vga_mem_ram_MPORT_37_en_pipe_0 = _RAND_74[0:0];
  _RAND_75 = {1{`RANDOM}};
  vga_mem_ram_MPORT_37_addr_pipe_0 = _RAND_75[11:0];
  _RAND_76 = {1{`RANDOM}};
  vga_mem_ram_MPORT_38_en_pipe_0 = _RAND_76[0:0];
  _RAND_77 = {1{`RANDOM}};
  vga_mem_ram_MPORT_38_addr_pipe_0 = _RAND_77[11:0];
  _RAND_78 = {1{`RANDOM}};
  vga_mem_ram_MPORT_39_en_pipe_0 = _RAND_78[0:0];
  _RAND_79 = {1{`RANDOM}};
  vga_mem_ram_MPORT_39_addr_pipe_0 = _RAND_79[11:0];
  _RAND_80 = {1{`RANDOM}};
  vga_mem_ram_MPORT_40_en_pipe_0 = _RAND_80[0:0];
  _RAND_81 = {1{`RANDOM}};
  vga_mem_ram_MPORT_40_addr_pipe_0 = _RAND_81[11:0];
  _RAND_82 = {1{`RANDOM}};
  vga_mem_ram_MPORT_41_en_pipe_0 = _RAND_82[0:0];
  _RAND_83 = {1{`RANDOM}};
  vga_mem_ram_MPORT_41_addr_pipe_0 = _RAND_83[11:0];
  _RAND_84 = {1{`RANDOM}};
  vga_mem_ram_MPORT_42_en_pipe_0 = _RAND_84[0:0];
  _RAND_85 = {1{`RANDOM}};
  vga_mem_ram_MPORT_42_addr_pipe_0 = _RAND_85[11:0];
  _RAND_86 = {1{`RANDOM}};
  vga_mem_ram_MPORT_43_en_pipe_0 = _RAND_86[0:0];
  _RAND_87 = {1{`RANDOM}};
  vga_mem_ram_MPORT_43_addr_pipe_0 = _RAND_87[11:0];
  _RAND_88 = {1{`RANDOM}};
  vga_mem_ram_MPORT_44_en_pipe_0 = _RAND_88[0:0];
  _RAND_89 = {1{`RANDOM}};
  vga_mem_ram_MPORT_44_addr_pipe_0 = _RAND_89[11:0];
  _RAND_90 = {1{`RANDOM}};
  vga_mem_ram_MPORT_45_en_pipe_0 = _RAND_90[0:0];
  _RAND_91 = {1{`RANDOM}};
  vga_mem_ram_MPORT_45_addr_pipe_0 = _RAND_91[11:0];
  _RAND_92 = {1{`RANDOM}};
  vga_mem_ram_MPORT_46_en_pipe_0 = _RAND_92[0:0];
  _RAND_93 = {1{`RANDOM}};
  vga_mem_ram_MPORT_46_addr_pipe_0 = _RAND_93[11:0];
  _RAND_94 = {1{`RANDOM}};
  vga_mem_ram_MPORT_47_en_pipe_0 = _RAND_94[0:0];
  _RAND_95 = {1{`RANDOM}};
  vga_mem_ram_MPORT_47_addr_pipe_0 = _RAND_95[11:0];
  _RAND_96 = {1{`RANDOM}};
  vga_mem_ram_MPORT_48_en_pipe_0 = _RAND_96[0:0];
  _RAND_97 = {1{`RANDOM}};
  vga_mem_ram_MPORT_48_addr_pipe_0 = _RAND_97[11:0];
  _RAND_98 = {1{`RANDOM}};
  vga_mem_ram_MPORT_49_en_pipe_0 = _RAND_98[0:0];
  _RAND_99 = {1{`RANDOM}};
  vga_mem_ram_MPORT_49_addr_pipe_0 = _RAND_99[11:0];
  _RAND_100 = {1{`RANDOM}};
  vga_mem_ram_MPORT_50_en_pipe_0 = _RAND_100[0:0];
  _RAND_101 = {1{`RANDOM}};
  vga_mem_ram_MPORT_50_addr_pipe_0 = _RAND_101[11:0];
  _RAND_102 = {1{`RANDOM}};
  vga_mem_ram_MPORT_51_en_pipe_0 = _RAND_102[0:0];
  _RAND_103 = {1{`RANDOM}};
  vga_mem_ram_MPORT_51_addr_pipe_0 = _RAND_103[11:0];
  _RAND_104 = {1{`RANDOM}};
  vga_mem_ram_MPORT_52_en_pipe_0 = _RAND_104[0:0];
  _RAND_105 = {1{`RANDOM}};
  vga_mem_ram_MPORT_52_addr_pipe_0 = _RAND_105[11:0];
  _RAND_106 = {1{`RANDOM}};
  vga_mem_ram_MPORT_53_en_pipe_0 = _RAND_106[0:0];
  _RAND_107 = {1{`RANDOM}};
  vga_mem_ram_MPORT_53_addr_pipe_0 = _RAND_107[11:0];
  _RAND_108 = {1{`RANDOM}};
  vga_mem_ram_MPORT_54_en_pipe_0 = _RAND_108[0:0];
  _RAND_109 = {1{`RANDOM}};
  vga_mem_ram_MPORT_54_addr_pipe_0 = _RAND_109[11:0];
  _RAND_110 = {1{`RANDOM}};
  vga_mem_ram_MPORT_55_en_pipe_0 = _RAND_110[0:0];
  _RAND_111 = {1{`RANDOM}};
  vga_mem_ram_MPORT_55_addr_pipe_0 = _RAND_111[11:0];
  _RAND_112 = {1{`RANDOM}};
  vga_mem_ram_MPORT_56_en_pipe_0 = _RAND_112[0:0];
  _RAND_113 = {1{`RANDOM}};
  vga_mem_ram_MPORT_56_addr_pipe_0 = _RAND_113[11:0];
  _RAND_114 = {1{`RANDOM}};
  vga_mem_ram_MPORT_57_en_pipe_0 = _RAND_114[0:0];
  _RAND_115 = {1{`RANDOM}};
  vga_mem_ram_MPORT_57_addr_pipe_0 = _RAND_115[11:0];
  _RAND_116 = {1{`RANDOM}};
  vga_mem_ram_MPORT_58_en_pipe_0 = _RAND_116[0:0];
  _RAND_117 = {1{`RANDOM}};
  vga_mem_ram_MPORT_58_addr_pipe_0 = _RAND_117[11:0];
  _RAND_118 = {1{`RANDOM}};
  vga_mem_ram_MPORT_59_en_pipe_0 = _RAND_118[0:0];
  _RAND_119 = {1{`RANDOM}};
  vga_mem_ram_MPORT_59_addr_pipe_0 = _RAND_119[11:0];
  _RAND_120 = {1{`RANDOM}};
  vga_mem_ram_MPORT_60_en_pipe_0 = _RAND_120[0:0];
  _RAND_121 = {1{`RANDOM}};
  vga_mem_ram_MPORT_60_addr_pipe_0 = _RAND_121[11:0];
  _RAND_122 = {1{`RANDOM}};
  vga_mem_ram_MPORT_61_en_pipe_0 = _RAND_122[0:0];
  _RAND_123 = {1{`RANDOM}};
  vga_mem_ram_MPORT_61_addr_pipe_0 = _RAND_123[11:0];
  _RAND_124 = {1{`RANDOM}};
  vga_mem_ram_MPORT_62_en_pipe_0 = _RAND_124[0:0];
  _RAND_125 = {1{`RANDOM}};
  vga_mem_ram_MPORT_62_addr_pipe_0 = _RAND_125[11:0];
  _RAND_126 = {1{`RANDOM}};
  vga_mem_ram_MPORT_63_en_pipe_0 = _RAND_126[0:0];
  _RAND_127 = {1{`RANDOM}};
  vga_mem_ram_MPORT_63_addr_pipe_0 = _RAND_127[11:0];
  _RAND_128 = {1{`RANDOM}};
  vga_mem_ram_MPORT_64_en_pipe_0 = _RAND_128[0:0];
  _RAND_129 = {1{`RANDOM}};
  vga_mem_ram_MPORT_64_addr_pipe_0 = _RAND_129[11:0];
  _RAND_130 = {1{`RANDOM}};
  vga_mem_ram_MPORT_65_en_pipe_0 = _RAND_130[0:0];
  _RAND_131 = {1{`RANDOM}};
  vga_mem_ram_MPORT_65_addr_pipe_0 = _RAND_131[11:0];
  _RAND_132 = {1{`RANDOM}};
  vga_mem_ram_MPORT_66_en_pipe_0 = _RAND_132[0:0];
  _RAND_133 = {1{`RANDOM}};
  vga_mem_ram_MPORT_66_addr_pipe_0 = _RAND_133[11:0];
  _RAND_134 = {1{`RANDOM}};
  vga_mem_ram_MPORT_67_en_pipe_0 = _RAND_134[0:0];
  _RAND_135 = {1{`RANDOM}};
  vga_mem_ram_MPORT_67_addr_pipe_0 = _RAND_135[11:0];
  _RAND_136 = {1{`RANDOM}};
  vga_mem_ram_MPORT_68_en_pipe_0 = _RAND_136[0:0];
  _RAND_137 = {1{`RANDOM}};
  vga_mem_ram_MPORT_68_addr_pipe_0 = _RAND_137[11:0];
  _RAND_138 = {1{`RANDOM}};
  vga_mem_ram_MPORT_69_en_pipe_0 = _RAND_138[0:0];
  _RAND_139 = {1{`RANDOM}};
  vga_mem_ram_MPORT_69_addr_pipe_0 = _RAND_139[11:0];
  _RAND_140 = {1{`RANDOM}};
  vga_mem_ram_MPORT_70_en_pipe_0 = _RAND_140[0:0];
  _RAND_141 = {1{`RANDOM}};
  vga_mem_ram_MPORT_70_addr_pipe_0 = _RAND_141[11:0];
  _RAND_142 = {1{`RANDOM}};
  vga_mem_ram_MPORT_71_en_pipe_0 = _RAND_142[0:0];
  _RAND_143 = {1{`RANDOM}};
  vga_mem_ram_MPORT_71_addr_pipe_0 = _RAND_143[11:0];
  _RAND_144 = {1{`RANDOM}};
  vga_mem_ram_MPORT_72_en_pipe_0 = _RAND_144[0:0];
  _RAND_145 = {1{`RANDOM}};
  vga_mem_ram_MPORT_72_addr_pipe_0 = _RAND_145[11:0];
  _RAND_146 = {1{`RANDOM}};
  vga_mem_ram_MPORT_73_en_pipe_0 = _RAND_146[0:0];
  _RAND_147 = {1{`RANDOM}};
  vga_mem_ram_MPORT_73_addr_pipe_0 = _RAND_147[11:0];
  _RAND_148 = {1{`RANDOM}};
  vga_mem_ram_MPORT_74_en_pipe_0 = _RAND_148[0:0];
  _RAND_149 = {1{`RANDOM}};
  vga_mem_ram_MPORT_74_addr_pipe_0 = _RAND_149[11:0];
  _RAND_150 = {1{`RANDOM}};
  vga_mem_ram_MPORT_75_en_pipe_0 = _RAND_150[0:0];
  _RAND_151 = {1{`RANDOM}};
  vga_mem_ram_MPORT_75_addr_pipe_0 = _RAND_151[11:0];
  _RAND_152 = {1{`RANDOM}};
  vga_mem_ram_MPORT_76_en_pipe_0 = _RAND_152[0:0];
  _RAND_153 = {1{`RANDOM}};
  vga_mem_ram_MPORT_76_addr_pipe_0 = _RAND_153[11:0];
  _RAND_154 = {1{`RANDOM}};
  vga_mem_ram_MPORT_77_en_pipe_0 = _RAND_154[0:0];
  _RAND_155 = {1{`RANDOM}};
  vga_mem_ram_MPORT_77_addr_pipe_0 = _RAND_155[11:0];
  _RAND_156 = {1{`RANDOM}};
  vga_mem_ram_MPORT_78_en_pipe_0 = _RAND_156[0:0];
  _RAND_157 = {1{`RANDOM}};
  vga_mem_ram_MPORT_78_addr_pipe_0 = _RAND_157[11:0];
  _RAND_158 = {1{`RANDOM}};
  vga_mem_ram_MPORT_79_en_pipe_0 = _RAND_158[0:0];
  _RAND_159 = {1{`RANDOM}};
  vga_mem_ram_MPORT_79_addr_pipe_0 = _RAND_159[11:0];
  _RAND_160 = {1{`RANDOM}};
  vga_mem_ram_MPORT_80_en_pipe_0 = _RAND_160[0:0];
  _RAND_161 = {1{`RANDOM}};
  vga_mem_ram_MPORT_80_addr_pipe_0 = _RAND_161[11:0];
  _RAND_162 = {1{`RANDOM}};
  vga_mem_ram_MPORT_81_en_pipe_0 = _RAND_162[0:0];
  _RAND_163 = {1{`RANDOM}};
  vga_mem_ram_MPORT_81_addr_pipe_0 = _RAND_163[11:0];
  _RAND_164 = {1{`RANDOM}};
  vga_mem_ram_MPORT_82_en_pipe_0 = _RAND_164[0:0];
  _RAND_165 = {1{`RANDOM}};
  vga_mem_ram_MPORT_82_addr_pipe_0 = _RAND_165[11:0];
  _RAND_166 = {1{`RANDOM}};
  vga_mem_ram_MPORT_83_en_pipe_0 = _RAND_166[0:0];
  _RAND_167 = {1{`RANDOM}};
  vga_mem_ram_MPORT_83_addr_pipe_0 = _RAND_167[11:0];
  _RAND_168 = {1{`RANDOM}};
  vga_mem_ram_MPORT_84_en_pipe_0 = _RAND_168[0:0];
  _RAND_169 = {1{`RANDOM}};
  vga_mem_ram_MPORT_84_addr_pipe_0 = _RAND_169[11:0];
  _RAND_170 = {1{`RANDOM}};
  vga_mem_ram_MPORT_85_en_pipe_0 = _RAND_170[0:0];
  _RAND_171 = {1{`RANDOM}};
  vga_mem_ram_MPORT_85_addr_pipe_0 = _RAND_171[11:0];
  _RAND_172 = {1{`RANDOM}};
  vga_mem_ram_MPORT_86_en_pipe_0 = _RAND_172[0:0];
  _RAND_173 = {1{`RANDOM}};
  vga_mem_ram_MPORT_86_addr_pipe_0 = _RAND_173[11:0];
  _RAND_174 = {1{`RANDOM}};
  vga_mem_ram_MPORT_87_en_pipe_0 = _RAND_174[0:0];
  _RAND_175 = {1{`RANDOM}};
  vga_mem_ram_MPORT_87_addr_pipe_0 = _RAND_175[11:0];
  _RAND_176 = {1{`RANDOM}};
  vga_mem_ram_MPORT_88_en_pipe_0 = _RAND_176[0:0];
  _RAND_177 = {1{`RANDOM}};
  vga_mem_ram_MPORT_88_addr_pipe_0 = _RAND_177[11:0];
  _RAND_178 = {1{`RANDOM}};
  vga_mem_ram_MPORT_89_en_pipe_0 = _RAND_178[0:0];
  _RAND_179 = {1{`RANDOM}};
  vga_mem_ram_MPORT_89_addr_pipe_0 = _RAND_179[11:0];
  _RAND_180 = {1{`RANDOM}};
  vga_mem_ram_MPORT_90_en_pipe_0 = _RAND_180[0:0];
  _RAND_181 = {1{`RANDOM}};
  vga_mem_ram_MPORT_90_addr_pipe_0 = _RAND_181[11:0];
  _RAND_182 = {1{`RANDOM}};
  vga_mem_ram_MPORT_91_en_pipe_0 = _RAND_182[0:0];
  _RAND_183 = {1{`RANDOM}};
  vga_mem_ram_MPORT_91_addr_pipe_0 = _RAND_183[11:0];
  _RAND_184 = {1{`RANDOM}};
  vga_mem_ram_MPORT_92_en_pipe_0 = _RAND_184[0:0];
  _RAND_185 = {1{`RANDOM}};
  vga_mem_ram_MPORT_92_addr_pipe_0 = _RAND_185[11:0];
  _RAND_186 = {1{`RANDOM}};
  vga_mem_ram_MPORT_93_en_pipe_0 = _RAND_186[0:0];
  _RAND_187 = {1{`RANDOM}};
  vga_mem_ram_MPORT_93_addr_pipe_0 = _RAND_187[11:0];
  _RAND_188 = {1{`RANDOM}};
  vga_mem_ram_MPORT_94_en_pipe_0 = _RAND_188[0:0];
  _RAND_189 = {1{`RANDOM}};
  vga_mem_ram_MPORT_94_addr_pipe_0 = _RAND_189[11:0];
  _RAND_190 = {1{`RANDOM}};
  vga_mem_ram_MPORT_95_en_pipe_0 = _RAND_190[0:0];
  _RAND_191 = {1{`RANDOM}};
  vga_mem_ram_MPORT_95_addr_pipe_0 = _RAND_191[11:0];
  _RAND_192 = {1{`RANDOM}};
  vga_mem_ram_MPORT_96_en_pipe_0 = _RAND_192[0:0];
  _RAND_193 = {1{`RANDOM}};
  vga_mem_ram_MPORT_96_addr_pipe_0 = _RAND_193[11:0];
  _RAND_194 = {1{`RANDOM}};
  vga_mem_ram_MPORT_97_en_pipe_0 = _RAND_194[0:0];
  _RAND_195 = {1{`RANDOM}};
  vga_mem_ram_MPORT_97_addr_pipe_0 = _RAND_195[11:0];
  _RAND_196 = {1{`RANDOM}};
  vga_mem_ram_MPORT_98_en_pipe_0 = _RAND_196[0:0];
  _RAND_197 = {1{`RANDOM}};
  vga_mem_ram_MPORT_98_addr_pipe_0 = _RAND_197[11:0];
  _RAND_198 = {1{`RANDOM}};
  vga_mem_ram_MPORT_99_en_pipe_0 = _RAND_198[0:0];
  _RAND_199 = {1{`RANDOM}};
  vga_mem_ram_MPORT_99_addr_pipe_0 = _RAND_199[11:0];
  _RAND_200 = {1{`RANDOM}};
  vga_mem_ram_MPORT_100_en_pipe_0 = _RAND_200[0:0];
  _RAND_201 = {1{`RANDOM}};
  vga_mem_ram_MPORT_100_addr_pipe_0 = _RAND_201[11:0];
  _RAND_202 = {1{`RANDOM}};
  vga_mem_ram_MPORT_101_en_pipe_0 = _RAND_202[0:0];
  _RAND_203 = {1{`RANDOM}};
  vga_mem_ram_MPORT_101_addr_pipe_0 = _RAND_203[11:0];
  _RAND_204 = {1{`RANDOM}};
  vga_mem_ram_MPORT_102_en_pipe_0 = _RAND_204[0:0];
  _RAND_205 = {1{`RANDOM}};
  vga_mem_ram_MPORT_102_addr_pipe_0 = _RAND_205[11:0];
  _RAND_206 = {1{`RANDOM}};
  vga_mem_ram_MPORT_103_en_pipe_0 = _RAND_206[0:0];
  _RAND_207 = {1{`RANDOM}};
  vga_mem_ram_MPORT_103_addr_pipe_0 = _RAND_207[11:0];
  _RAND_208 = {1{`RANDOM}};
  vga_mem_ram_MPORT_104_en_pipe_0 = _RAND_208[0:0];
  _RAND_209 = {1{`RANDOM}};
  vga_mem_ram_MPORT_104_addr_pipe_0 = _RAND_209[11:0];
  _RAND_210 = {1{`RANDOM}};
  vga_mem_ram_MPORT_105_en_pipe_0 = _RAND_210[0:0];
  _RAND_211 = {1{`RANDOM}};
  vga_mem_ram_MPORT_105_addr_pipe_0 = _RAND_211[11:0];
  _RAND_212 = {1{`RANDOM}};
  vga_mem_ram_MPORT_106_en_pipe_0 = _RAND_212[0:0];
  _RAND_213 = {1{`RANDOM}};
  vga_mem_ram_MPORT_106_addr_pipe_0 = _RAND_213[11:0];
  _RAND_214 = {1{`RANDOM}};
  vga_mem_ram_MPORT_107_en_pipe_0 = _RAND_214[0:0];
  _RAND_215 = {1{`RANDOM}};
  vga_mem_ram_MPORT_107_addr_pipe_0 = _RAND_215[11:0];
  _RAND_216 = {1{`RANDOM}};
  vga_mem_ram_MPORT_108_en_pipe_0 = _RAND_216[0:0];
  _RAND_217 = {1{`RANDOM}};
  vga_mem_ram_MPORT_108_addr_pipe_0 = _RAND_217[11:0];
  _RAND_218 = {1{`RANDOM}};
  vga_mem_ram_MPORT_109_en_pipe_0 = _RAND_218[0:0];
  _RAND_219 = {1{`RANDOM}};
  vga_mem_ram_MPORT_109_addr_pipe_0 = _RAND_219[11:0];
  _RAND_220 = {1{`RANDOM}};
  vga_mem_ram_MPORT_110_en_pipe_0 = _RAND_220[0:0];
  _RAND_221 = {1{`RANDOM}};
  vga_mem_ram_MPORT_110_addr_pipe_0 = _RAND_221[11:0];
  _RAND_222 = {1{`RANDOM}};
  vga_mem_ram_MPORT_111_en_pipe_0 = _RAND_222[0:0];
  _RAND_223 = {1{`RANDOM}};
  vga_mem_ram_MPORT_111_addr_pipe_0 = _RAND_223[11:0];
  _RAND_224 = {1{`RANDOM}};
  vga_mem_ram_MPORT_112_en_pipe_0 = _RAND_224[0:0];
  _RAND_225 = {1{`RANDOM}};
  vga_mem_ram_MPORT_112_addr_pipe_0 = _RAND_225[11:0];
  _RAND_226 = {1{`RANDOM}};
  vga_mem_ram_MPORT_113_en_pipe_0 = _RAND_226[0:0];
  _RAND_227 = {1{`RANDOM}};
  vga_mem_ram_MPORT_113_addr_pipe_0 = _RAND_227[11:0];
  _RAND_228 = {1{`RANDOM}};
  vga_mem_ram_MPORT_114_en_pipe_0 = _RAND_228[0:0];
  _RAND_229 = {1{`RANDOM}};
  vga_mem_ram_MPORT_114_addr_pipe_0 = _RAND_229[11:0];
  _RAND_230 = {1{`RANDOM}};
  vga_mem_ram_MPORT_115_en_pipe_0 = _RAND_230[0:0];
  _RAND_231 = {1{`RANDOM}};
  vga_mem_ram_MPORT_115_addr_pipe_0 = _RAND_231[11:0];
  _RAND_232 = {1{`RANDOM}};
  vga_mem_ram_MPORT_116_en_pipe_0 = _RAND_232[0:0];
  _RAND_233 = {1{`RANDOM}};
  vga_mem_ram_MPORT_116_addr_pipe_0 = _RAND_233[11:0];
  _RAND_234 = {1{`RANDOM}};
  vga_mem_ram_MPORT_117_en_pipe_0 = _RAND_234[0:0];
  _RAND_235 = {1{`RANDOM}};
  vga_mem_ram_MPORT_117_addr_pipe_0 = _RAND_235[11:0];
  _RAND_236 = {1{`RANDOM}};
  vga_mem_ram_MPORT_118_en_pipe_0 = _RAND_236[0:0];
  _RAND_237 = {1{`RANDOM}};
  vga_mem_ram_MPORT_118_addr_pipe_0 = _RAND_237[11:0];
  _RAND_238 = {1{`RANDOM}};
  vga_mem_ram_MPORT_119_en_pipe_0 = _RAND_238[0:0];
  _RAND_239 = {1{`RANDOM}};
  vga_mem_ram_MPORT_119_addr_pipe_0 = _RAND_239[11:0];
  _RAND_240 = {1{`RANDOM}};
  vga_mem_ram_MPORT_120_en_pipe_0 = _RAND_240[0:0];
  _RAND_241 = {1{`RANDOM}};
  vga_mem_ram_MPORT_120_addr_pipe_0 = _RAND_241[11:0];
  _RAND_242 = {1{`RANDOM}};
  vga_mem_ram_MPORT_121_en_pipe_0 = _RAND_242[0:0];
  _RAND_243 = {1{`RANDOM}};
  vga_mem_ram_MPORT_121_addr_pipe_0 = _RAND_243[11:0];
  _RAND_244 = {1{`RANDOM}};
  vga_mem_ram_MPORT_122_en_pipe_0 = _RAND_244[0:0];
  _RAND_245 = {1{`RANDOM}};
  vga_mem_ram_MPORT_122_addr_pipe_0 = _RAND_245[11:0];
  _RAND_246 = {1{`RANDOM}};
  vga_mem_ram_MPORT_123_en_pipe_0 = _RAND_246[0:0];
  _RAND_247 = {1{`RANDOM}};
  vga_mem_ram_MPORT_123_addr_pipe_0 = _RAND_247[11:0];
  _RAND_248 = {1{`RANDOM}};
  vga_mem_ram_MPORT_124_en_pipe_0 = _RAND_248[0:0];
  _RAND_249 = {1{`RANDOM}};
  vga_mem_ram_MPORT_124_addr_pipe_0 = _RAND_249[11:0];
  _RAND_250 = {1{`RANDOM}};
  vga_mem_ram_MPORT_125_en_pipe_0 = _RAND_250[0:0];
  _RAND_251 = {1{`RANDOM}};
  vga_mem_ram_MPORT_125_addr_pipe_0 = _RAND_251[11:0];
  _RAND_252 = {1{`RANDOM}};
  vga_mem_ram_MPORT_126_en_pipe_0 = _RAND_252[0:0];
  _RAND_253 = {1{`RANDOM}};
  vga_mem_ram_MPORT_126_addr_pipe_0 = _RAND_253[11:0];
  _RAND_254 = {1{`RANDOM}};
  vga_mem_ram_MPORT_127_en_pipe_0 = _RAND_254[0:0];
  _RAND_255 = {1{`RANDOM}};
  vga_mem_ram_MPORT_127_addr_pipe_0 = _RAND_255[11:0];
  _RAND_256 = {1{`RANDOM}};
  vga_mem_ram_MPORT_128_en_pipe_0 = _RAND_256[0:0];
  _RAND_257 = {1{`RANDOM}};
  vga_mem_ram_MPORT_128_addr_pipe_0 = _RAND_257[11:0];
  _RAND_258 = {1{`RANDOM}};
  vga_mem_ram_MPORT_129_en_pipe_0 = _RAND_258[0:0];
  _RAND_259 = {1{`RANDOM}};
  vga_mem_ram_MPORT_129_addr_pipe_0 = _RAND_259[11:0];
  _RAND_260 = {1{`RANDOM}};
  vga_mem_ram_MPORT_130_en_pipe_0 = _RAND_260[0:0];
  _RAND_261 = {1{`RANDOM}};
  vga_mem_ram_MPORT_130_addr_pipe_0 = _RAND_261[11:0];
  _RAND_262 = {1{`RANDOM}};
  vga_mem_ram_MPORT_131_en_pipe_0 = _RAND_262[0:0];
  _RAND_263 = {1{`RANDOM}};
  vga_mem_ram_MPORT_131_addr_pipe_0 = _RAND_263[11:0];
  _RAND_264 = {1{`RANDOM}};
  vga_mem_ram_MPORT_132_en_pipe_0 = _RAND_264[0:0];
  _RAND_265 = {1{`RANDOM}};
  vga_mem_ram_MPORT_132_addr_pipe_0 = _RAND_265[11:0];
  _RAND_266 = {1{`RANDOM}};
  vga_mem_ram_MPORT_133_en_pipe_0 = _RAND_266[0:0];
  _RAND_267 = {1{`RANDOM}};
  vga_mem_ram_MPORT_133_addr_pipe_0 = _RAND_267[11:0];
  _RAND_268 = {1{`RANDOM}};
  vga_mem_ram_MPORT_134_en_pipe_0 = _RAND_268[0:0];
  _RAND_269 = {1{`RANDOM}};
  vga_mem_ram_MPORT_134_addr_pipe_0 = _RAND_269[11:0];
  _RAND_270 = {1{`RANDOM}};
  vga_mem_ram_MPORT_135_en_pipe_0 = _RAND_270[0:0];
  _RAND_271 = {1{`RANDOM}};
  vga_mem_ram_MPORT_135_addr_pipe_0 = _RAND_271[11:0];
  _RAND_272 = {1{`RANDOM}};
  vga_mem_ram_MPORT_136_en_pipe_0 = _RAND_272[0:0];
  _RAND_273 = {1{`RANDOM}};
  vga_mem_ram_MPORT_136_addr_pipe_0 = _RAND_273[11:0];
  _RAND_274 = {1{`RANDOM}};
  vga_mem_ram_MPORT_137_en_pipe_0 = _RAND_274[0:0];
  _RAND_275 = {1{`RANDOM}};
  vga_mem_ram_MPORT_137_addr_pipe_0 = _RAND_275[11:0];
  _RAND_276 = {1{`RANDOM}};
  vga_mem_ram_MPORT_138_en_pipe_0 = _RAND_276[0:0];
  _RAND_277 = {1{`RANDOM}};
  vga_mem_ram_MPORT_138_addr_pipe_0 = _RAND_277[11:0];
  _RAND_278 = {1{`RANDOM}};
  vga_mem_ram_MPORT_139_en_pipe_0 = _RAND_278[0:0];
  _RAND_279 = {1{`RANDOM}};
  vga_mem_ram_MPORT_139_addr_pipe_0 = _RAND_279[11:0];
  _RAND_280 = {1{`RANDOM}};
  vga_mem_ram_MPORT_140_en_pipe_0 = _RAND_280[0:0];
  _RAND_281 = {1{`RANDOM}};
  vga_mem_ram_MPORT_140_addr_pipe_0 = _RAND_281[11:0];
  _RAND_282 = {1{`RANDOM}};
  vga_mem_ram_MPORT_141_en_pipe_0 = _RAND_282[0:0];
  _RAND_283 = {1{`RANDOM}};
  vga_mem_ram_MPORT_141_addr_pipe_0 = _RAND_283[11:0];
  _RAND_284 = {1{`RANDOM}};
  vga_mem_ram_MPORT_142_en_pipe_0 = _RAND_284[0:0];
  _RAND_285 = {1{`RANDOM}};
  vga_mem_ram_MPORT_142_addr_pipe_0 = _RAND_285[11:0];
  _RAND_286 = {1{`RANDOM}};
  vga_mem_ram_MPORT_143_en_pipe_0 = _RAND_286[0:0];
  _RAND_287 = {1{`RANDOM}};
  vga_mem_ram_MPORT_143_addr_pipe_0 = _RAND_287[11:0];
  _RAND_288 = {3{`RANDOM}};
  ram_0 = _RAND_288[89:0];
  _RAND_289 = {3{`RANDOM}};
  ram_1 = _RAND_289[89:0];
  _RAND_290 = {3{`RANDOM}};
  ram_2 = _RAND_290[89:0];
  _RAND_291 = {3{`RANDOM}};
  ram_3 = _RAND_291[89:0];
  _RAND_292 = {3{`RANDOM}};
  ram_4 = _RAND_292[89:0];
  _RAND_293 = {3{`RANDOM}};
  ram_5 = _RAND_293[89:0];
  _RAND_294 = {3{`RANDOM}};
  ram_6 = _RAND_294[89:0];
  _RAND_295 = {3{`RANDOM}};
  ram_7 = _RAND_295[89:0];
  _RAND_296 = {3{`RANDOM}};
  ram_8 = _RAND_296[89:0];
  _RAND_297 = {3{`RANDOM}};
  ram_9 = _RAND_297[89:0];
  _RAND_298 = {3{`RANDOM}};
  ram_10 = _RAND_298[89:0];
  _RAND_299 = {3{`RANDOM}};
  ram_11 = _RAND_299[89:0];
  _RAND_300 = {3{`RANDOM}};
  ram_12 = _RAND_300[89:0];
  _RAND_301 = {3{`RANDOM}};
  ram_13 = _RAND_301[89:0];
  _RAND_302 = {3{`RANDOM}};
  ram_14 = _RAND_302[89:0];
  _RAND_303 = {3{`RANDOM}};
  ram_15 = _RAND_303[89:0];
  _RAND_304 = {1{`RANDOM}};
  v = _RAND_304[8:0];
  _RAND_305 = {1{`RANDOM}};
  rdwrPort = _RAND_305[23:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
  $readmemh("resource/vga_font.txt", vga_mem);
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module vga(
  input        clock,
  input        reset,
  input  [1:0] io_now,
  input  [7:0] io_ascii,
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
  wire  v1_clock; // @[vga.scala 20:18]
  wire  v1_reset; // @[vga.scala 20:18]
  wire [23:0] v1_io_vga_data; // @[vga.scala 20:18]
  wire [9:0] v1_io_h_addr; // @[vga.scala 20:18]
  wire [9:0] v1_io_v_addr; // @[vga.scala 20:18]
  wire  v1_io_hsync; // @[vga.scala 20:18]
  wire  v1_io_vsync; // @[vga.scala 20:18]
  wire  v1_io_valid; // @[vga.scala 20:18]
  wire [7:0] v1_io_vga_r; // @[vga.scala 20:18]
  wire [7:0] v1_io_vga_g; // @[vga.scala 20:18]
  wire [7:0] v1_io_vga_b; // @[vga.scala 20:18]
  wire  vm_clock; // @[vga.scala 31:18]
  wire  vm_reset; // @[vga.scala 31:18]
  wire [1:0] vm_io_now; // @[vga.scala 31:18]
  wire [7:0] vm_io_ascii; // @[vga.scala 31:18]
  wire [9:0] vm_io_h_addr; // @[vga.scala 31:18]
  wire [8:0] vm_io_v_addr; // @[vga.scala 31:18]
  wire [23:0] vm_io_vga_data; // @[vga.scala 31:18]
  reg [9:0] h_addr; // @[vga.scala 16:19]
  reg [9:0] v_addr; // @[vga.scala 17:19]
  reg [23:0] vga_data; // @[vga.scala 18:21]
  vga_ctrl v1 ( // @[vga.scala 20:18]
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
  vmem vm ( // @[vga.scala 31:18]
    .clock(vm_clock),
    .reset(vm_reset),
    .io_now(vm_io_now),
    .io_ascii(vm_io_ascii),
    .io_h_addr(vm_io_h_addr),
    .io_v_addr(vm_io_v_addr),
    .io_vga_data(vm_io_vga_data)
  );
  assign io_VGA_HSYNC = v1_io_hsync; // @[vga.scala 24:17]
  assign io_VGA_VSYNC = v1_io_vsync; // @[vga.scala 25:17]
  assign io_VGA_BLANK_N = v1_io_valid; // @[vga.scala 26:19]
  assign io_VGA_R = v1_io_vga_r; // @[vga.scala 27:13]
  assign io_VGA_G = v1_io_vga_g; // @[vga.scala 28:13]
  assign io_VGA_B = v1_io_vga_b; // @[vga.scala 29:13]
  assign v1_clock = clock;
  assign v1_reset = reset;
  assign v1_io_vga_data = vga_data; // @[vga.scala 21:19]
  assign vm_clock = clock;
  assign vm_reset = reset;
  assign vm_io_now = io_now; // @[vga.scala 32:14]
  assign vm_io_ascii = io_ascii; // @[vga.scala 33:16]
  assign vm_io_h_addr = h_addr; // @[vga.scala 34:17]
  assign vm_io_v_addr = v_addr[8:0]; // @[vga.scala 35:25]
  always @(posedge clock) begin
    h_addr <= v1_io_h_addr; // @[vga.scala 22:11]
    v_addr <= v1_io_v_addr; // @[vga.scala 23:11]
    vga_data <= vm_io_vga_data; // @[vga.scala 36:13]
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
  output [7:0] io_VGA_B
);
  wire  PS2_clock; // @[top.scala 20:19]
  wire  PS2_reset; // @[top.scala 20:19]
  wire  PS2_io_ps2_clk; // @[top.scala 20:19]
  wire  PS2_io_ps2_data; // @[top.scala 20:19]
  wire [7:0] PS2_io_ascii; // @[top.scala 20:19]
  wire [1:0] PS2_io_now; // @[top.scala 20:19]
  wire  VGA_clock; // @[top.scala 25:19]
  wire  VGA_reset; // @[top.scala 25:19]
  wire [1:0] VGA_io_now; // @[top.scala 25:19]
  wire [7:0] VGA_io_ascii; // @[top.scala 25:19]
  wire  VGA_io_VGA_HSYNC; // @[top.scala 25:19]
  wire  VGA_io_VGA_VSYNC; // @[top.scala 25:19]
  wire  VGA_io_VGA_BLANK_N; // @[top.scala 25:19]
  wire [7:0] VGA_io_VGA_R; // @[top.scala 25:19]
  wire [7:0] VGA_io_VGA_G; // @[top.scala 25:19]
  wire [7:0] VGA_io_VGA_B; // @[top.scala 25:19]
  ps2 PS2 ( // @[top.scala 20:19]
    .clock(PS2_clock),
    .reset(PS2_reset),
    .io_ps2_clk(PS2_io_ps2_clk),
    .io_ps2_data(PS2_io_ps2_data),
    .io_ascii(PS2_io_ascii),
    .io_now(PS2_io_now)
  );
  vga VGA ( // @[top.scala 25:19]
    .clock(VGA_clock),
    .reset(VGA_reset),
    .io_now(VGA_io_now),
    .io_ascii(VGA_io_ascii),
    .io_VGA_HSYNC(VGA_io_VGA_HSYNC),
    .io_VGA_VSYNC(VGA_io_VGA_VSYNC),
    .io_VGA_BLANK_N(VGA_io_VGA_BLANK_N),
    .io_VGA_R(VGA_io_VGA_R),
    .io_VGA_G(VGA_io_VGA_G),
    .io_VGA_B(VGA_io_VGA_B)
  );
  assign io_VGA_HSYNC = VGA_io_VGA_HSYNC; // @[top.scala 28:17]
  assign io_VGA_VSYNC = VGA_io_VGA_VSYNC; // @[top.scala 29:17]
  assign io_VGA_BLANK_N = VGA_io_VGA_BLANK_N; // @[top.scala 30:19]
  assign io_VGA_R = VGA_io_VGA_R; // @[top.scala 31:13]
  assign io_VGA_G = VGA_io_VGA_G; // @[top.scala 32:13]
  assign io_VGA_B = VGA_io_VGA_B; // @[top.scala 33:13]
  assign PS2_clock = clock;
  assign PS2_reset = reset;
  assign PS2_io_ps2_clk = io_ps2_clk; // @[top.scala 22:19]
  assign PS2_io_ps2_data = io_ps2_data; // @[top.scala 23:20]
  assign VGA_clock = clock;
  assign VGA_reset = reset;
  assign VGA_io_now = PS2_io_now; // @[top.scala 27:15]
  assign VGA_io_ascii = PS2_io_ascii; // @[top.scala 26:17]
endmodule

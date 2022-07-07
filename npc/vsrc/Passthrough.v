module seg(
  input  [3:0] io_in,
  output [7:0] io_out
);
  wire [7:0] _GEN_0 = io_in == 4'hf ? 8'h8e : 8'hff; // @[Passthrough.scala 62:29 Passthrough.scala 63:15 Passthrough.scala 65:15]
  wire [7:0] _GEN_1 = io_in == 4'he ? 8'h86 : _GEN_0; // @[Passthrough.scala 60:29 Passthrough.scala 61:15]
  wire [7:0] _GEN_2 = io_in == 4'hd ? 8'ha1 : _GEN_1; // @[Passthrough.scala 58:29 Passthrough.scala 59:15]
  wire [7:0] _GEN_3 = io_in == 4'hc ? 8'hc6 : _GEN_2; // @[Passthrough.scala 56:29 Passthrough.scala 57:15]
  wire [7:0] _GEN_4 = io_in == 4'hb ? 8'h83 : _GEN_3; // @[Passthrough.scala 54:29 Passthrough.scala 55:15]
  wire [7:0] _GEN_5 = io_in == 4'ha ? 8'h88 : _GEN_4; // @[Passthrough.scala 52:29 Passthrough.scala 53:15]
  wire [7:0] _GEN_6 = io_in == 4'h9 ? 8'h90 : _GEN_5; // @[Passthrough.scala 50:28 Passthrough.scala 51:15]
  wire [7:0] _GEN_7 = io_in == 4'h8 ? 8'h80 : _GEN_6; // @[Passthrough.scala 48:28 Passthrough.scala 49:15]
  wire [7:0] _GEN_8 = io_in == 4'h7 ? 8'hf8 : _GEN_7; // @[Passthrough.scala 46:28 Passthrough.scala 47:15]
  wire [7:0] _GEN_9 = io_in == 4'h6 ? 8'h82 : _GEN_8; // @[Passthrough.scala 44:28 Passthrough.scala 45:15]
  wire [7:0] _GEN_10 = io_in == 4'h5 ? 8'h92 : _GEN_9; // @[Passthrough.scala 42:28 Passthrough.scala 43:15]
  wire [7:0] _GEN_11 = io_in == 4'h4 ? 8'h99 : _GEN_10; // @[Passthrough.scala 40:28 Passthrough.scala 41:15]
  wire [7:0] _GEN_12 = io_in == 4'h3 ? 8'hb0 : _GEN_11; // @[Passthrough.scala 38:28 Passthrough.scala 39:15]
  wire [7:0] _GEN_13 = io_in == 4'h2 ? 8'ha4 : _GEN_12; // @[Passthrough.scala 36:28 Passthrough.scala 37:15]
  wire [7:0] _GEN_14 = io_in == 4'h1 ? 8'hf9 : _GEN_13; // @[Passthrough.scala 34:28 Passthrough.scala 35:15]
  assign io_out = io_in == 4'h0 ? 8'hc0 : _GEN_14; // @[Passthrough.scala 32:22 Passthrough.scala 33:15]
endmodule
module Passthrough(
  input        clock,
  input        reset,
  input        io_button,
  output [7:0] io_bcd8seg_0,
  output [7:0] io_bcd8seg_1,
  output [7:0] io_Result
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire [3:0] m1_io_in; // @[Passthrough.scala 12:18]
  wire [7:0] m1_io_out; // @[Passthrough.scala 12:18]
  wire [3:0] m2_io_in; // @[Passthrough.scala 13:18]
  wire [7:0] m2_io_out; // @[Passthrough.scala 13:18]
  reg [7:0] num; // @[Passthrough.scala 11:20]
  reg [7:0] num1; // @[Passthrough.scala 14:21]
  wire [6:0] num1_lo = num[7:1]; // @[Passthrough.scala 15:27]
  wire  num_hi = num1[0] ^ num1[1] ^ num1[2] ^ num1[3]; // @[Passthrough.scala 16:37]
  wire [6:0] num_lo = num1[6:0]; // @[Passthrough.scala 16:50]
  wire [7:0] _num_T_6 = {num_hi,num_lo}; // @[Cat.scala 30:58]
  seg m1 ( // @[Passthrough.scala 12:18]
    .io_in(m1_io_in),
    .io_out(m1_io_out)
  );
  seg m2 ( // @[Passthrough.scala 13:18]
    .io_in(m2_io_in),
    .io_out(m2_io_out)
  );
  assign io_bcd8seg_0 = m1_io_out; // @[Passthrough.scala 22:18]
  assign io_bcd8seg_1 = m2_io_out; // @[Passthrough.scala 23:18]
  assign io_Result = num; // @[Passthrough.scala 24:14]
  assign m1_io_in = num[3:0]; // @[Passthrough.scala 20:18]
  assign m2_io_in = num[7:4]; // @[Passthrough.scala 21:18]
  always @(posedge clock) begin
    if (reset) begin // @[Passthrough.scala 11:20]
      num <= 8'h1; // @[Passthrough.scala 11:20]
    end else if (num == 8'h0) begin // @[Passthrough.scala 17:20]
      num <= 8'h1; // @[Passthrough.scala 18:12]
    end else begin
      num <= _num_T_6; // @[Passthrough.scala 16:8]
    end
    num1 <= {1'h0,num1_lo}; // @[Cat.scala 30:58]
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
  num = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  num1 = _RAND_1[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

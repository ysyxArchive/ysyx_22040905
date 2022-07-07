module seg(
  input  [3:0] io_in,
  output [7:0] io_out
);
  wire [7:0] _GEN_0 = io_in == 4'h9 ? 8'h90 : 8'hff; // @[Passthrough.scala 51:28 Passthrough.scala 52:15 Passthrough.scala 54:15]
  wire [7:0] _GEN_1 = io_in == 4'h8 ? 8'h80 : _GEN_0; // @[Passthrough.scala 49:28 Passthrough.scala 50:15]
  wire [7:0] _GEN_2 = io_in == 4'h7 ? 8'hf8 : _GEN_1; // @[Passthrough.scala 47:28 Passthrough.scala 48:15]
  wire [7:0] _GEN_3 = io_in == 4'h6 ? 8'h82 : _GEN_2; // @[Passthrough.scala 45:28 Passthrough.scala 46:15]
  wire [7:0] _GEN_4 = io_in == 4'h5 ? 8'h92 : _GEN_3; // @[Passthrough.scala 43:28 Passthrough.scala 44:15]
  wire [7:0] _GEN_5 = io_in == 4'h4 ? 8'h99 : _GEN_4; // @[Passthrough.scala 41:28 Passthrough.scala 42:15]
  wire [7:0] _GEN_6 = io_in == 4'h3 ? 8'hb0 : _GEN_5; // @[Passthrough.scala 39:28 Passthrough.scala 40:15]
  wire [7:0] _GEN_7 = io_in == 4'h2 ? 8'ha4 : _GEN_6; // @[Passthrough.scala 37:28 Passthrough.scala 38:15]
  wire [7:0] _GEN_8 = io_in == 4'h1 ? 8'hf9 : _GEN_7; // @[Passthrough.scala 35:28 Passthrough.scala 36:15]
  assign io_out = io_in == 4'h0 ? 8'hc0 : _GEN_8; // @[Passthrough.scala 33:22 Passthrough.scala 34:15]
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
`endif // RANDOMIZE_REG_INIT
  wire [3:0] m1_io_in; // @[Passthrough.scala 12:17]
  wire [7:0] m1_io_out; // @[Passthrough.scala 12:17]
  wire [3:0] m2_io_in; // @[Passthrough.scala 13:17]
  wire [7:0] m2_io_out; // @[Passthrough.scala 13:17]
  reg [7:0] num; // @[Passthrough.scala 11:19]
  wire  num_hi = num[0] ^ num[1] ^ num[2] ^ num[3]; // @[Passthrough.scala 15:34]
  wire [6:0] num_lo = num[7:1]; // @[Passthrough.scala 15:45]
  wire [7:0] _num_T_6 = {num_hi,num_lo}; // @[Cat.scala 30:58]
  wire [7:0] _GEN_0 = num % 8'ha; // @[Passthrough.scala 20:19]
  wire [7:0] _m1_io_in_T = _GEN_0[7:0]; // @[Passthrough.scala 20:19]
  wire [7:0] _m2_io_in_T = num / 8'ha; // @[Passthrough.scala 21:19]
  seg m1 ( // @[Passthrough.scala 12:17]
    .io_in(m1_io_in),
    .io_out(m1_io_out)
  );
  seg m2 ( // @[Passthrough.scala 13:17]
    .io_in(m2_io_in),
    .io_out(m2_io_out)
  );
  assign io_bcd8seg_0 = m1_io_out; // @[Passthrough.scala 22:18]
  assign io_bcd8seg_1 = m2_io_out; // @[Passthrough.scala 23:18]
  assign io_Result = num; // @[Passthrough.scala 24:14]
  assign m1_io_in = _m1_io_in_T[3:0]; // @[Passthrough.scala 20:30]
  assign m2_io_in = _m2_io_in_T[3:0]; // @[Passthrough.scala 21:30]
  always @(posedge clock) begin
    if (reset) begin // @[Passthrough.scala 11:19]
      num <= 8'h1; // @[Passthrough.scala 11:19]
    end else if (num == 8'h0) begin // @[Passthrough.scala 17:20]
      num <= 8'h1; // @[Passthrough.scala 18:12]
    end else if (io_button) begin // @[Passthrough.scala 14:26]
      num <= _num_T_6; // @[Passthrough.scala 15:8]
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
  num = _RAND_0[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

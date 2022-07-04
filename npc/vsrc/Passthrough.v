module Passthrough(
  input        clock,
  input        reset,
  input  [7:0] io_in,
  input        io_en,
  output [2:0] io_out,
  output       io_sign,
  output [7:0] io_bcd8seg
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [2:0] outt; // @[Passthrough.scala 13:25]
  wire [1:0] _GEN_2 = io_in[2] ? 2'h2 : {{1'd0}, io_in[1]}; // @[Passthrough.scala 29:35 Passthrough.scala 30:18]
  wire [1:0] _GEN_3 = io_in[3] ? 2'h3 : _GEN_2; // @[Passthrough.scala 27:35 Passthrough.scala 28:18]
  wire [2:0] _GEN_4 = io_in[4] ? 3'h4 : {{1'd0}, _GEN_3}; // @[Passthrough.scala 25:35 Passthrough.scala 26:18]
  wire [3:0] _GEN_21 = {{1'd0}, outt}; // @[Passthrough.scala 53:24]
  wire [7:0] _GEN_8 = _GEN_21 == 4'h9 ? 8'h0 : 8'hff; // @[Passthrough.scala 55:31 Passthrough.scala 56:23 Passthrough.scala 14:18]
  wire [7:0] _GEN_9 = _GEN_21 == 4'h8 ? 8'h0 : _GEN_8; // @[Passthrough.scala 53:31 Passthrough.scala 54:23]
  wire [7:0] _GEN_10 = outt == 3'h7 ? 8'h1f : _GEN_9; // @[Passthrough.scala 51:31 Passthrough.scala 52:23]
  wire [7:0] _GEN_11 = outt == 3'h6 ? 8'h41 : _GEN_10; // @[Passthrough.scala 49:31 Passthrough.scala 50:23]
  wire [7:0] _GEN_12 = outt == 3'h5 ? 8'h49 : _GEN_11; // @[Passthrough.scala 47:31 Passthrough.scala 48:23]
  wire [7:0] _GEN_13 = outt == 3'h4 ? 8'h99 : _GEN_12; // @[Passthrough.scala 45:31 Passthrough.scala 46:23]
  wire [7:0] _GEN_14 = outt == 3'h3 ? 8'hd : _GEN_13; // @[Passthrough.scala 43:31 Passthrough.scala 44:23]
  wire [7:0] _GEN_15 = outt == 3'h2 ? 8'h25 : _GEN_14; // @[Passthrough.scala 41:31 Passthrough.scala 42:23]
  wire [7:0] _GEN_16 = outt == 3'h1 ? 8'h9f : _GEN_15; // @[Passthrough.scala 39:31 Passthrough.scala 40:23]
  wire [7:0] _GEN_17 = outt == 3'h0 ? 8'h2 : _GEN_16; // @[Passthrough.scala 37:25 Passthrough.scala 38:23]
  assign io_out = io_en ? outt : 3'h0; // @[Passthrough.scala 18:18 Passthrough.scala 36:16 Passthrough.scala 16:14]
  assign io_sign = io_in > 8'h0; // @[Passthrough.scala 17:23]
  assign io_bcd8seg = io_en ? _GEN_17 : 8'hff; // @[Passthrough.scala 18:18 Passthrough.scala 14:18]
  always @(posedge clock) begin
    if (io_en) begin // @[Passthrough.scala 18:18]
      if (io_in[7]) begin // @[Passthrough.scala 19:29]
        outt <= 3'h7; // @[Passthrough.scala 20:18]
      end else if (io_in[6]) begin // @[Passthrough.scala 21:35]
        outt <= 3'h6; // @[Passthrough.scala 22:18]
      end else if (io_in[5]) begin // @[Passthrough.scala 23:35]
        outt <= 3'h5; // @[Passthrough.scala 24:18]
      end else begin
        outt <= _GEN_4;
      end
    end else begin
      outt <= 3'h0; // @[Passthrough.scala 15:12]
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
  outt = _RAND_0[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

module LFSR_8(
  input        clock,
  input        reset,
  input        io_en,
  output [7:0] io_out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] x; // @[LFSR_8.scala 10:16]
  wire  _x_T_6 = x[4] ^ x[3] ^ x[2] ^ x[0]; // @[LFSR_8.scala 12:27]
  wire [7:0] _x_T_8 = {_x_T_6,x[7:1]}; // @[Cat.scala 33:92]
  assign io_out = x; // @[LFSR_8.scala 14:9]
  always @(posedge clock) begin
    if (reset) begin // @[LFSR_8.scala 10:16]
      x <= 8'h1; // @[LFSR_8.scala 10:16]
    end else if (io_en) begin // @[LFSR_8.scala 11:14]
      x <= _x_T_8; // @[LFSR_8.scala 12:6]
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
  x = _RAND_0[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

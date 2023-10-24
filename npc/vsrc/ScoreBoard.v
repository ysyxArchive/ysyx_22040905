module ScoreBoard(
  input        clock,
  input        reset,
  input  [4:0] io_ID_lookidx1,
  input  [4:0] io_ID_lookidx2,
  input  [4:0] io_ID_setidx,
  output       io_ID_isBusy,
  input  [4:0] io_WB_clearidx,
  input        io_flush
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] busy; // @[ScoreBoard.scala 22:21]
  wire [62:0] _busy_T_1 = 63'h1 << io_WB_clearidx; // @[ScoreBoard.scala 24:38]
  wire [31:0] _busy_T_3 = ~_busy_T_1[31:0]; // @[ScoreBoard.scala 26:48]
  wire [31:0] _busy_T_4 = busy & _busy_T_3; // @[ScoreBoard.scala 26:46]
  wire [62:0] _busy_T_5 = 63'h1 << io_ID_setidx; // @[ScoreBoard.scala 24:38]
  wire [31:0] _busy_T_7 = _busy_T_4 | _busy_T_5[31:0]; // @[ScoreBoard.scala 26:73]
  wire [31:0] _busy_T_9 = {_busy_T_7[31:1],1'h0}; // @[Cat.scala 33:92]
  wire [31:0] _io_ID_isBusy_T = busy >> io_ID_lookidx1; // @[ScoreBoard.scala 27:23]
  wire [31:0] _io_ID_isBusy_T_2 = busy >> io_ID_lookidx2; // @[ScoreBoard.scala 27:44]
  assign io_ID_isBusy = _io_ID_isBusy_T[0] | _io_ID_isBusy_T_2[0]; // @[ScoreBoard.scala 27:39]
  always @(posedge clock) begin
    if (reset) begin // @[ScoreBoard.scala 22:21]
      busy <= 32'h0; // @[ScoreBoard.scala 22:21]
    end else if (io_flush) begin // @[ScoreBoard.scala 26:14]
      busy <= 32'h0;
    end else begin
      busy <= _busy_T_9;
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
  busy = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

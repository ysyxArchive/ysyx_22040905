module ICacheRAM(
  input          clock,
  input          reset,
  output [127:0] io_bits_Q0,
  output [127:0] io_bits_Q1,
  input          io_bits_CEN,
  input          io_bits_WEN,
  input  [127:0] io_bits_BWEN,
  input  [6:0]   io_bits_A,
  input  [127:0] io_bits_D,
  input          io_bits_WAY
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [127:0] S011HD1P_X32Y2D128_BW_Q; // @[CacheRAM.scala 21:18]
  wire  S011HD1P_X32Y2D128_BW_CLK; // @[CacheRAM.scala 21:18]
  wire  S011HD1P_X32Y2D128_BW_CEN; // @[CacheRAM.scala 21:18]
  wire  S011HD1P_X32Y2D128_BW_WEN; // @[CacheRAM.scala 21:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_BWEN; // @[CacheRAM.scala 21:18]
  wire [5:0] S011HD1P_X32Y2D128_BW_A; // @[CacheRAM.scala 21:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_D; // @[CacheRAM.scala 21:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_1_Q; // @[CacheRAM.scala 22:18]
  wire  S011HD1P_X32Y2D128_BW_1_CLK; // @[CacheRAM.scala 22:18]
  wire  S011HD1P_X32Y2D128_BW_1_CEN; // @[CacheRAM.scala 22:18]
  wire  S011HD1P_X32Y2D128_BW_1_WEN; // @[CacheRAM.scala 22:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_1_BWEN; // @[CacheRAM.scala 22:18]
  wire [5:0] S011HD1P_X32Y2D128_BW_1_A; // @[CacheRAM.scala 22:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_1_D; // @[CacheRAM.scala 22:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_2_Q; // @[CacheRAM.scala 23:18]
  wire  S011HD1P_X32Y2D128_BW_2_CLK; // @[CacheRAM.scala 23:18]
  wire  S011HD1P_X32Y2D128_BW_2_CEN; // @[CacheRAM.scala 23:18]
  wire  S011HD1P_X32Y2D128_BW_2_WEN; // @[CacheRAM.scala 23:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_2_BWEN; // @[CacheRAM.scala 23:18]
  wire [5:0] S011HD1P_X32Y2D128_BW_2_A; // @[CacheRAM.scala 23:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_2_D; // @[CacheRAM.scala 23:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_3_Q; // @[CacheRAM.scala 24:18]
  wire  S011HD1P_X32Y2D128_BW_3_CLK; // @[CacheRAM.scala 24:18]
  wire  S011HD1P_X32Y2D128_BW_3_CEN; // @[CacheRAM.scala 24:18]
  wire  S011HD1P_X32Y2D128_BW_3_WEN; // @[CacheRAM.scala 24:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_3_BWEN; // @[CacheRAM.scala 24:18]
  wire [5:0] S011HD1P_X32Y2D128_BW_3_A; // @[CacheRAM.scala 24:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_3_D; // @[CacheRAM.scala 24:18]
  reg  choose; // @[CacheRAM.scala 27:23]
  wire  _io_bits_Q0_T = ~choose; // @[CacheRAM.scala 39:26]
  wire  _T_6 = ~io_bits_A[6]; // @[CacheRAM.scala 52:43]
  wire  _T_13 = ~io_bits_WAY; // @[CacheRAM.scala 61:29]
  S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW ( // @[CacheRAM.scala 21:18]
    .Q(S011HD1P_X32Y2D128_BW_Q),
    .CLK(S011HD1P_X32Y2D128_BW_CLK),
    .CEN(S011HD1P_X32Y2D128_BW_CEN),
    .WEN(S011HD1P_X32Y2D128_BW_WEN),
    .BWEN(S011HD1P_X32Y2D128_BW_BWEN),
    .A(S011HD1P_X32Y2D128_BW_A),
    .D(S011HD1P_X32Y2D128_BW_D)
  );
  S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_1 ( // @[CacheRAM.scala 22:18]
    .Q(S011HD1P_X32Y2D128_BW_1_Q),
    .CLK(S011HD1P_X32Y2D128_BW_1_CLK),
    .CEN(S011HD1P_X32Y2D128_BW_1_CEN),
    .WEN(S011HD1P_X32Y2D128_BW_1_WEN),
    .BWEN(S011HD1P_X32Y2D128_BW_1_BWEN),
    .A(S011HD1P_X32Y2D128_BW_1_A),
    .D(S011HD1P_X32Y2D128_BW_1_D)
  );
  S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_2 ( // @[CacheRAM.scala 23:18]
    .Q(S011HD1P_X32Y2D128_BW_2_Q),
    .CLK(S011HD1P_X32Y2D128_BW_2_CLK),
    .CEN(S011HD1P_X32Y2D128_BW_2_CEN),
    .WEN(S011HD1P_X32Y2D128_BW_2_WEN),
    .BWEN(S011HD1P_X32Y2D128_BW_2_BWEN),
    .A(S011HD1P_X32Y2D128_BW_2_A),
    .D(S011HD1P_X32Y2D128_BW_2_D)
  );
  S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_3 ( // @[CacheRAM.scala 24:18]
    .Q(S011HD1P_X32Y2D128_BW_3_Q),
    .CLK(S011HD1P_X32Y2D128_BW_3_CLK),
    .CEN(S011HD1P_X32Y2D128_BW_3_CEN),
    .WEN(S011HD1P_X32Y2D128_BW_3_WEN),
    .BWEN(S011HD1P_X32Y2D128_BW_3_BWEN),
    .A(S011HD1P_X32Y2D128_BW_3_A),
    .D(S011HD1P_X32Y2D128_BW_3_D)
  );
  assign io_bits_Q0 = ~choose ? S011HD1P_X32Y2D128_BW_Q : S011HD1P_X32Y2D128_BW_1_Q; // @[CacheRAM.scala 39:18]
  assign io_bits_Q1 = _io_bits_Q0_T ? S011HD1P_X32Y2D128_BW_2_Q : S011HD1P_X32Y2D128_BW_3_Q; // @[CacheRAM.scala 40:18]
  assign S011HD1P_X32Y2D128_BW_CLK = clock; // @[CacheRAM.scala 43:11]
  assign S011HD1P_X32Y2D128_BW_CEN = io_bits_CEN | io_bits_A[6]; // @[CacheRAM.scala 44:27]
  assign S011HD1P_X32Y2D128_BW_WEN = io_bits_WEN | io_bits_WAY; // @[CacheRAM.scala 45:26]
  assign S011HD1P_X32Y2D128_BW_BWEN = io_bits_BWEN; // @[CacheRAM.scala 46:12]
  assign S011HD1P_X32Y2D128_BW_A = io_bits_A[5:0]; // @[CacheRAM.scala 47:21]
  assign S011HD1P_X32Y2D128_BW_D = io_bits_D; // @[CacheRAM.scala 48:9]
  assign S011HD1P_X32Y2D128_BW_1_CLK = clock; // @[CacheRAM.scala 51:11]
  assign S011HD1P_X32Y2D128_BW_1_CEN = io_bits_CEN | ~io_bits_A[6]; // @[CacheRAM.scala 52:27]
  assign S011HD1P_X32Y2D128_BW_1_WEN = io_bits_WEN | io_bits_WAY; // @[CacheRAM.scala 53:26]
  assign S011HD1P_X32Y2D128_BW_1_BWEN = io_bits_BWEN; // @[CacheRAM.scala 54:12]
  assign S011HD1P_X32Y2D128_BW_1_A = io_bits_A[5:0]; // @[CacheRAM.scala 55:21]
  assign S011HD1P_X32Y2D128_BW_1_D = io_bits_D; // @[CacheRAM.scala 56:9]
  assign S011HD1P_X32Y2D128_BW_2_CLK = clock; // @[CacheRAM.scala 59:11]
  assign S011HD1P_X32Y2D128_BW_2_CEN = io_bits_CEN | io_bits_A[6]; // @[CacheRAM.scala 60:27]
  assign S011HD1P_X32Y2D128_BW_2_WEN = io_bits_WEN | ~io_bits_WAY; // @[CacheRAM.scala 61:26]
  assign S011HD1P_X32Y2D128_BW_2_BWEN = io_bits_BWEN; // @[CacheRAM.scala 62:12]
  assign S011HD1P_X32Y2D128_BW_2_A = io_bits_A[5:0]; // @[CacheRAM.scala 63:21]
  assign S011HD1P_X32Y2D128_BW_2_D = io_bits_D; // @[CacheRAM.scala 64:9]
  assign S011HD1P_X32Y2D128_BW_3_CLK = clock; // @[CacheRAM.scala 67:11]
  assign S011HD1P_X32Y2D128_BW_3_CEN = io_bits_CEN | _T_6; // @[CacheRAM.scala 68:27]
  assign S011HD1P_X32Y2D128_BW_3_WEN = io_bits_WEN | _T_13; // @[CacheRAM.scala 69:26]
  assign S011HD1P_X32Y2D128_BW_3_BWEN = io_bits_BWEN; // @[CacheRAM.scala 70:12]
  assign S011HD1P_X32Y2D128_BW_3_A = io_bits_A[5:0]; // @[CacheRAM.scala 71:21]
  assign S011HD1P_X32Y2D128_BW_3_D = io_bits_D; // @[CacheRAM.scala 72:9]
  always @(posedge clock) begin
    if (reset) begin // @[CacheRAM.scala 27:23]
      choose <= 1'h0; // @[CacheRAM.scala 27:23]
    end else begin
      choose <= io_bits_A[6]; // @[CacheRAM.scala 32:10]
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
  choose = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

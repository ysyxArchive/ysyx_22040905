/* verilator lint_off WIDTH */
module AXILiteSRAM(
  input         clock,
  input         reset,
  output        io_ar_ready,
  input         io_ar_valid,
  input  [31:0] io_ar_bits_addr,
  input         io_r_ready,
  output        io_r_valid,
  output [63:0] io_r_bits_data,
  output        io_aw_ready,
  input         io_aw_valid,
  input  [31:0] io_aw_bits_addr,
  output        io_w_ready,
  input         io_w_valid,
  input  [63:0] io_w_bits_data,
  input  [7:0]  io_w_bits_strb
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] pmem_raddr; // @[AXILiteSRAM.scala 67:19]
  wire [63:0] pmem_rdata; // @[AXILiteSRAM.scala 67:19]
  wire [31:0] pmem_waddr; // @[AXILiteSRAM.scala 67:19]
  wire [63:0] pmem_wdata; // @[AXILiteSRAM.scala 67:19]
  wire [7:0] pmem_wmask; // @[AXILiteSRAM.scala 67:19]
  reg  rstate; // @[AXILiteSRAM.scala 44:23]
  wire  _rstate_T = io_ar_ready & io_ar_valid; // @[Decoupled.scala 40:37]
  wire  _rstate_T_2 = io_r_ready & io_r_valid; // @[Decoupled.scala 40:37]
  reg  wstate; // @[AXILiteSRAM.scala 49:23]
  wire  _wstate_T = io_aw_ready & io_aw_valid; // @[Decoupled.scala 40:37]
  wire  _wstate_T_2 = io_w_ready & io_w_valid; // @[Decoupled.scala 40:37]
  reg [1:0] rdelay; // @[AXILiteSRAM.scala 55:23]
  wire [1:0] _rdelay_T_4 = rdelay + 2'h1; // @[AXILiteSRAM.scala 56:42]
  reg [1:0] wdelay; // @[AXILiteSRAM.scala 61:23]
  wire [1:0] _wdelay_T_4 = wdelay + 2'h1; // @[AXILiteSRAM.scala 62:42]
  memory pmem ( // @[AXILiteSRAM.scala 67:19]
    .raddr(pmem_raddr),
    .rdata(pmem_rdata),
    .waddr(pmem_waddr),
    .wdata(pmem_wdata),
    .wmask(pmem_wmask)
  );
  assign io_ar_ready = ~rstate; // @[AXILiteSRAM.scala 58:26]
  assign io_r_valid = rstate & rdelay == 2'h2; // @[AXILiteSRAM.scala 59:43]
  assign io_r_bits_data = pmem_rdata; // @[AXILiteSRAM.scala 73:18]
  assign io_aw_ready = ~wstate; // @[AXILiteSRAM.scala 64:26]
  assign io_w_ready = wstate & wdelay == 2'h2; // @[AXILiteSRAM.scala 65:43]
  assign pmem_raddr = _rstate_T_2 ? io_ar_bits_addr : 32'h0; // @[AXILiteSRAM.scala 68:22]
  assign pmem_waddr = io_aw_bits_addr; // @[AXILiteSRAM.scala 69:16]
  assign pmem_wdata = io_w_bits_data; // @[AXILiteSRAM.scala 70:16]
  assign pmem_wmask = io_w_bits_strb; // @[AXILiteSRAM.scala 71:16]
  always @(posedge clock) begin
    if (reset) begin // @[AXILiteSRAM.scala 44:23]
      rstate <= 1'h0; // @[AXILiteSRAM.scala 44:23]
    end else if (rstate) begin // @[Mux.scala 80:57]
      if (_rstate_T_2) begin // @[AXILiteSRAM.scala 47:25]
        rstate <= 1'h0;
      end else begin
        rstate <= 1'h1;
      end
    end else begin
      rstate <= _rstate_T;
    end
    if (reset) begin // @[AXILiteSRAM.scala 49:23]
      wstate <= 1'h0; // @[AXILiteSRAM.scala 49:23]
    end else if (wstate) begin // @[Mux.scala 80:57]
      if (_wstate_T_2) begin // @[AXILiteSRAM.scala 52:25]
        wstate <= 1'h0;
      end else begin
        wstate <= 1'h1;
      end
    end else begin
      wstate <= _wstate_T;
    end
    if (reset) begin // @[AXILiteSRAM.scala 55:23]
      rdelay <= 2'h0; // @[AXILiteSRAM.scala 55:23]
    end else if (_rstate_T | rdelay[0]) begin // @[AXILiteSRAM.scala 56:14]
      rdelay <= _rdelay_T_4;
    end else begin
      rdelay <= 2'h0;
    end
    if (reset) begin // @[AXILiteSRAM.scala 61:23]
      wdelay <= 2'h0; // @[AXILiteSRAM.scala 61:23]
    end else if (_wstate_T | wdelay[0]) begin // @[AXILiteSRAM.scala 62:14]
      wdelay <= _wdelay_T_4;
    end else begin
      wdelay <= 2'h0;
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
  rstate = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  wstate = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  rdelay = _RAND_2[1:0];
  _RAND_3 = {1{`RANDOM}};
  wdelay = _RAND_3[1:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IFU(
  input         clock,
  input         reset,
  input  [63:0] io_pc,
  input         io_lm_ar_ready,
  output        io_lm_ar_valid,
  output [31:0] io_lm_ar_bits_addr,
  output        io_lm_r_ready,
  input         io_lm_r_valid,
  input  [63:0] io_lm_r_bits_data,
  output        io_out_valid,
  output [31:0] io_out_bits_inst
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg  state; // @[IFU.scala 18:22]
  wire  _state_T = io_lm_ar_ready & io_lm_ar_valid; // @[Decoupled.scala 40:37]
  wire  _state_T_2 = io_lm_r_ready & io_lm_r_valid; // @[Decoupled.scala 40:37]
  assign io_lm_ar_valid = ~state & ~reset; // @[IFU.scala 25:37]
  assign io_lm_ar_bits_addr = io_pc[31:0]; // @[IFU.scala 24:28]
  assign io_lm_r_ready = state; // @[IFU.scala 26:25]
  assign io_out_valid = io_lm_r_ready & io_lm_r_valid; // @[Decoupled.scala 40:37]
  assign io_out_bits_inst = io_lm_r_bits_data[31:0]; // @[IFU.scala 34:38]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 18:22]
      state <= 1'h0; // @[IFU.scala 18:22]
    end else if (state) begin // @[Mux.scala 80:57]
      if (_state_T_2) begin // @[IFU.scala 21:25]
        state <= 1'h0;
      end else begin
        state <= 1'h1;
      end
    end else begin
      state <= _state_T;
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
  state = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IDU(
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_inst,
  output        io_out_valid,
  output [4:0]  io_out_bits_rs1,
  output [4:0]  io_out_bits_rs2,
  output [4:0]  io_out_bits_rd,
  output [63:0] io_out_bits_imm,
  output [79:0] io_out_bits_op,
  output [5:0]  io_out_bits_typ
);
  wire  _op_T_1 = io_in_bits_inst[6:0] == 7'h33; // @[IDU.scala 31:37]
  wire  _op_T_3 = io_in_bits_inst[14:12] == 3'h0; // @[IDU.scala 31:77]
  wire  _op_T_4 = io_in_bits_inst[6:0] == 7'h33 & io_in_bits_inst[14:12] == 3'h0; // @[IDU.scala 31:53]
  wire  _op_T_6 = io_in_bits_inst[31:25] == 7'h0; // @[IDU.scala 31:113]
  wire  _op_T_10 = io_in_bits_inst[6:0] == 7'h3b; // @[IDU.scala 32:37]
  wire  _op_T_13 = io_in_bits_inst[6:0] == 7'h3b & _op_T_3; // @[IDU.scala 32:53]
  wire  _op_T_19 = io_in_bits_inst[6:0] == 7'h13; // @[IDU.scala 33:37]
  wire  _op_T_25 = io_in_bits_inst[6:0] == 7'h1b; // @[IDU.scala 34:37]
  wire  _op_T_36 = io_in_bits_inst[31:25] == 7'h20; // @[IDU.scala 35:113]
  wire  _op_T_51 = io_in_bits_inst[14:12] == 3'h7; // @[IDU.scala 37:77]
  wire  _op_T_52 = _op_T_1 & io_in_bits_inst[14:12] == 3'h7; // @[IDU.scala 37:53]
  wire  _op_T_66 = io_in_bits_inst[14:12] == 3'h6; // @[IDU.scala 39:77]
  wire  _op_T_67 = _op_T_1 & io_in_bits_inst[14:12] == 3'h6; // @[IDU.scala 39:53]
  wire  _op_T_81 = io_in_bits_inst[14:12] == 3'h4; // @[IDU.scala 42:77]
  wire  _op_T_82 = _op_T_1 & io_in_bits_inst[14:12] == 3'h4; // @[IDU.scala 42:53]
  wire  _op_T_96 = io_in_bits_inst[14:12] == 3'h1; // @[IDU.scala 44:77]
  wire  _op_T_97 = _op_T_1 & io_in_bits_inst[14:12] == 3'h1; // @[IDU.scala 44:53]
  wire  _op_T_117 = io_in_bits_inst[31:26] == 6'h0; // @[IDU.scala 46:113]
  wire  _op_T_132 = io_in_bits_inst[14:12] == 3'h5; // @[IDU.scala 48:77]
  wire  _op_T_133 = _op_T_1 & io_in_bits_inst[14:12] == 3'h5; // @[IDU.scala 48:53]
  wire  _op_T_142 = _op_T_10 & _op_T_132; // @[IDU.scala 49:53]
  wire  _op_T_151 = _op_T_19 & _op_T_132; // @[IDU.scala 50:53]
  wire  _op_T_153 = io_in_bits_inst[31:26] == 6'h10; // @[IDU.scala 50:113]
  wire  _op_T_160 = _op_T_25 & _op_T_132; // @[IDU.scala 51:53]
  wire  _op_T_210 = io_in_bits_inst[14:12] == 3'h2; // @[IDU.scala 59:77]
  wire  _op_T_211 = _op_T_1 & io_in_bits_inst[14:12] == 3'h2; // @[IDU.scala 59:53]
  wire  _op_T_219 = io_in_bits_inst[14:12] == 3'h3; // @[IDU.scala 60:77]
  wire  _op_T_220 = _op_T_1 & io_in_bits_inst[14:12] == 3'h3; // @[IDU.scala 60:53]
  wire  _op_T_238 = io_in_bits_inst[6:0] == 7'h63; // @[IDU.scala 64:37]
  wire  _op_T_283 = io_in_bits_inst[6:0] == 7'h3; // @[IDU.scala 72:37]
  wire  _op_T_307 = io_in_bits_inst[6:0] == 7'h23; // @[IDU.scala 77:37]
  wire  _op_T_356 = io_in_bits_inst[31:25] == 7'h1; // @[IDU.scala 87:113]
  wire  _op_T_468 = io_in_bits_inst[6:0] == 7'h73; // @[IDU.scala 102:37]
  wire [81:0] _op_T_483 = io_in_bits_inst == 32'h30200073 ? 82'h40000000000000000 : 82'h0; // @[IDU.scala 105:15]
  wire [81:0] _op_T_484 = io_in_bits_inst == 32'h73 ? 82'h20000000000000000 : _op_T_483; // @[IDU.scala 104:15]
  wire [81:0] _op_T_485 = _op_T_468 & _op_T_210 ? 82'h10000000000000000 : _op_T_484; // @[IDU.scala 103:15]
  wire [81:0] _op_T_486 = io_in_bits_inst[6:0] == 7'h73 & _op_T_96 ? 82'h8000000000000000 : _op_T_485; // @[IDU.scala 102:15]
  wire [81:0] _op_T_487 = _op_T_10 & _op_T_51 & _op_T_356 ? 82'h4000000000000000 : _op_T_486; // @[IDU.scala 99:15]
  wire [81:0] _op_T_488 = _op_T_52 & _op_T_356 ? 82'h2000000000000000 : _op_T_487; // @[IDU.scala 98:15]
  wire [81:0] _op_T_489 = _op_T_10 & _op_T_66 & _op_T_356 ? 82'h1000000000000000 : _op_T_488; // @[IDU.scala 97:15]
  wire [81:0] _op_T_490 = _op_T_67 & _op_T_356 ? 82'h800000000000000 : _op_T_489; // @[IDU.scala 96:15]
  wire [81:0] _op_T_491 = _op_T_142 & _op_T_356 ? 82'h400000000000000 : _op_T_490; // @[IDU.scala 95:15]
  wire [81:0] _op_T_492 = _op_T_133 & _op_T_356 ? 82'h200000000000000 : _op_T_491; // @[IDU.scala 94:15]
  wire [81:0] _op_T_493 = _op_T_10 & _op_T_81 & _op_T_356 ? 82'h100000000000000 : _op_T_492; // @[IDU.scala 93:15]
  wire [81:0] _op_T_494 = _op_T_82 & _op_T_356 ? 82'h80000000000000 : _op_T_493; // @[IDU.scala 92:15]
  wire [81:0] _op_T_495 = _op_T_211 & _op_T_356 ? 82'h40000000000000 : _op_T_494; // @[IDU.scala 91:15]
  wire [81:0] _op_T_496 = _op_T_220 & _op_T_356 ? 82'h20000000000000 : _op_T_495; // @[IDU.scala 90:15]
  wire [81:0] _op_T_497 = _op_T_97 & _op_T_356 ? 82'h10000000000000 : _op_T_496; // @[IDU.scala 89:15]
  wire [81:0] _op_T_498 = _op_T_13 & _op_T_356 ? 82'h8000000000000 : _op_T_497; // @[IDU.scala 88:15]
  wire [81:0] _op_T_499 = _op_T_4 & io_in_bits_inst[31:25] == 7'h1 ? 82'h4000000000000 : _op_T_498; // @[IDU.scala 87:15]
  wire [81:0] _op_T_500 = io_in_bits_inst == 32'h100073 ? 82'h2000000000000 : _op_T_499; // @[IDU.scala 84:15]
  wire [81:0] _op_T_501 = _op_T_283 & _op_T_66 ? 82'h1000000000000 : _op_T_500; // @[IDU.scala 83:15]
  wire [81:0] _op_T_502 = _op_T_283 & _op_T_132 ? 82'h800000000000 : _op_T_501; // @[IDU.scala 82:15]
  wire [81:0] _op_T_503 = _op_T_283 & _op_T_81 ? 82'h400000000000 : _op_T_502; // @[IDU.scala 81:15]
  wire [81:0] _op_T_504 = _op_T_307 & _op_T_219 ? 82'h200000000000 : _op_T_503; // @[IDU.scala 80:15]
  wire [81:0] _op_T_505 = _op_T_307 & _op_T_210 ? 82'h100000000000 : _op_T_504; // @[IDU.scala 79:15]
  wire [81:0] _op_T_506 = _op_T_307 & _op_T_96 ? 82'h80000000000 : _op_T_505; // @[IDU.scala 78:15]
  wire [81:0] _op_T_507 = io_in_bits_inst[6:0] == 7'h23 & _op_T_3 ? 82'h40000000000 : _op_T_506; // @[IDU.scala 77:15]
  wire [81:0] _op_T_508 = _op_T_283 & _op_T_219 ? 82'h20000000000 : _op_T_507; // @[IDU.scala 76:15]
  wire [81:0] _op_T_509 = _op_T_283 & _op_T_210 ? 82'h10000000000 : _op_T_508; // @[IDU.scala 75:15]
  wire [81:0] _op_T_510 = _op_T_283 & _op_T_96 ? 82'h8000000000 : _op_T_509; // @[IDU.scala 73:15]
  wire [81:0] _op_T_511 = io_in_bits_inst[6:0] == 7'h3 & _op_T_3 ? 82'h4000000000 : _op_T_510; // @[IDU.scala 72:15]
  wire [81:0] _op_T_512 = io_in_bits_inst[6:0] == 7'h67 & _op_T_3 ? 82'h2000000000 : _op_T_511; // @[IDU.scala 71:15]
  wire [81:0] _op_T_513 = io_in_bits_inst[6:0] == 7'h6f ? 82'h1000000000 : _op_T_512; // @[IDU.scala 70:15]
  wire [81:0] _op_T_514 = _op_T_238 & _op_T_66 ? 82'h800000000 : _op_T_513; // @[IDU.scala 69:15]
  wire [81:0] _op_T_515 = _op_T_238 & _op_T_81 ? 82'h400000000 : _op_T_514; // @[IDU.scala 68:15]
  wire [81:0] _op_T_516 = _op_T_238 & _op_T_51 ? 82'h200000000 : _op_T_515; // @[IDU.scala 67:15]
  wire [81:0] _op_T_517 = _op_T_238 & _op_T_132 ? 82'h100000000 : _op_T_516; // @[IDU.scala 66:15]
  wire [81:0] _op_T_518 = _op_T_238 & _op_T_96 ? 82'h80000000 : _op_T_517; // @[IDU.scala 65:15]
  wire [81:0] _op_T_519 = io_in_bits_inst[6:0] == 7'h63 & _op_T_3 ? 82'h40000000 : _op_T_518; // @[IDU.scala 64:15]
  wire [81:0] _op_T_520 = _op_T_19 & _op_T_219 ? 82'h20000000 : _op_T_519; // @[IDU.scala 62:15]
  wire [81:0] _op_T_521 = _op_T_19 & _op_T_210 ? 82'h10000000 : _op_T_520; // @[IDU.scala 61:15]
  wire [81:0] _op_T_522 = _op_T_1 & io_in_bits_inst[14:12] == 3'h3 & _op_T_6 ? 82'h8000000 : _op_T_521; // @[IDU.scala 60:15]
  wire [81:0] _op_T_523 = _op_T_1 & io_in_bits_inst[14:12] == 3'h2 & _op_T_6 ? 82'h4000000 : _op_T_522; // @[IDU.scala 59:15]
  wire [81:0] _op_T_524 = io_in_bits_inst[6:0] == 7'h17 ? 82'h2000000 : _op_T_523; // @[IDU.scala 58:15]
  wire [81:0] _op_T_525 = io_in_bits_inst[6:0] == 7'h37 ? 82'h1000000 : _op_T_524; // @[IDU.scala 57:15]
  wire [81:0] _op_T_526 = _op_T_160 & _op_T_117 ? 82'h800000 : _op_T_525; // @[IDU.scala 56:15]
  wire [81:0] _op_T_527 = _op_T_151 & _op_T_117 ? 82'h400000 : _op_T_526; // @[IDU.scala 55:15]
  wire [81:0] _op_T_528 = _op_T_142 & _op_T_6 ? 82'h200000 : _op_T_527; // @[IDU.scala 54:15]
  wire [81:0] _op_T_529 = _op_T_133 & _op_T_6 ? 82'h100000 : _op_T_528; // @[IDU.scala 53:15]
  wire [81:0] _op_T_530 = _op_T_25 & _op_T_132 & _op_T_153 ? 82'h80000 : _op_T_529; // @[IDU.scala 51:15]
  wire [81:0] _op_T_531 = _op_T_19 & _op_T_132 & io_in_bits_inst[31:26] == 6'h10 ? 82'h40000 : _op_T_530; // @[IDU.scala 50:15]
  wire [81:0] _op_T_532 = _op_T_10 & _op_T_132 & _op_T_36 ? 82'h20000 : _op_T_531; // @[IDU.scala 49:15]
  wire [81:0] _op_T_533 = _op_T_1 & io_in_bits_inst[14:12] == 3'h5 & _op_T_36 ? 82'h10000 : _op_T_532; // @[IDU.scala 48:15]
  wire [81:0] _op_T_534 = _op_T_25 & _op_T_96 & _op_T_117 ? 82'h8000 : _op_T_533; // @[IDU.scala 47:15]
  wire [81:0] _op_T_535 = _op_T_19 & _op_T_96 & io_in_bits_inst[31:26] == 6'h0 ? 82'h4000 : _op_T_534; // @[IDU.scala 46:15]
  wire [81:0] _op_T_536 = _op_T_10 & _op_T_96 & _op_T_6 ? 82'h2000 : _op_T_535; // @[IDU.scala 45:15]
  wire [81:0] _op_T_537 = _op_T_1 & io_in_bits_inst[14:12] == 3'h1 & _op_T_6 ? 82'h1000 : _op_T_536; // @[IDU.scala 44:15]
  wire [81:0] _op_T_538 = _op_T_19 & _op_T_81 ? 82'h800 : _op_T_537; // @[IDU.scala 43:15]
  wire [81:0] _op_T_539 = _op_T_1 & io_in_bits_inst[14:12] == 3'h4 & _op_T_6 ? 82'h400 : _op_T_538; // @[IDU.scala 42:15]
  wire [81:0] _op_T_540 = _op_T_19 & _op_T_66 ? 82'h200 : _op_T_539; // @[IDU.scala 40:15]
  wire [81:0] _op_T_541 = _op_T_1 & io_in_bits_inst[14:12] == 3'h6 & _op_T_6 ? 82'h100 : _op_T_540; // @[IDU.scala 39:15]
  wire [81:0] _op_T_542 = _op_T_19 & _op_T_51 ? 82'h80 : _op_T_541; // @[IDU.scala 38:15]
  wire [81:0] _op_T_543 = _op_T_1 & io_in_bits_inst[14:12] == 3'h7 & _op_T_6 ? 82'h40 : _op_T_542; // @[IDU.scala 37:15]
  wire [81:0] _op_T_544 = _op_T_13 & _op_T_36 ? 82'h20 : _op_T_543; // @[IDU.scala 36:15]
  wire [81:0] _op_T_545 = _op_T_4 & io_in_bits_inst[31:25] == 7'h20 ? 82'h10 : _op_T_544; // @[IDU.scala 35:15]
  wire [81:0] _op_T_546 = io_in_bits_inst[6:0] == 7'h1b & _op_T_3 ? 82'h8 : _op_T_545; // @[IDU.scala 34:15]
  wire [81:0] _op_T_547 = io_in_bits_inst[6:0] == 7'h13 & _op_T_3 ? 82'h4 : _op_T_546; // @[IDU.scala 33:15]
  wire [81:0] _op_T_548 = io_in_bits_inst[6:0] == 7'h3b & _op_T_3 & _op_T_6 ? 82'h2 : _op_T_547; // @[IDU.scala 32:15]
  wire [81:0] _op_T_549 = io_in_bits_inst[6:0] == 7'h33 & io_in_bits_inst[14:12] == 3'h0 & io_in_bits_inst[31:25] == 7'h0
     ? 82'h1 : _op_T_548; // @[IDU.scala 31:15]
  wire [79:0] op = _op_T_549[79:0]; // @[IDU.scala 29:16 IDU.scala 31:7]
  wire  _typ_T_30 = op[2] | op[3] | op[7] | op[9] | op[11] | op[14] | op[15] | op[18] | op[19] | op[22] | op[23] | op[28
    ] | op[29] | op[37] | op[38] | op[39]; // @[IDU.scala 113:116]
  wire  _typ_T_97 = op[0] | op[1] | op[4] | op[5] | op[6] | op[8] | op[10] | op[12] | op[13] | op[16] | op[17] | op[20]
     | op[21] | op[26] | op[27] | op[50]; // @[IDU.scala 118:114]
  wire [5:0] _typ_T_122 = _typ_T_97 | op[51] | op[52] | op[53] | op[54] | op[55] | op[56] | op[57] | op[58] | op[59] |
    op[60] | op[61] | op[62] ? 6'h20 : 6'h0; // @[IDU.scala 118:14]
  wire [5:0] _typ_T_123 = op[30] | op[31] | op[32] | op[33] | op[34] | op[35] ? 6'h10 : _typ_T_122; // @[IDU.scala 117:14]
  wire [5:0] _typ_T_124 = op[36] ? 6'h8 : _typ_T_123; // @[IDU.scala 116:14]
  wire [5:0] _typ_T_125 = op[42] | op[43] | op[44] | op[45] ? 6'h4 : _typ_T_124; // @[IDU.scala 115:14]
  wire [5:0] _typ_T_126 = op[24] | op[25] ? 6'h2 : _typ_T_125; // @[IDU.scala 114:14]
  wire [5:0] typ = _typ_T_30 | op[40] | op[41] | op[46] | op[47] | op[48] | op[63] | op[64] ? 6'h1 : _typ_T_126; // @[IDU.scala 113:14]
  wire [51:0] io_out_bits_imm_hi = io_in_bits_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 72:12]
  wire [11:0] io_out_bits_imm_lo = io_in_bits_inst[31:20]; // @[IDU.scala 121:81]
  wire [63:0] _io_out_bits_imm_T_3 = {io_out_bits_imm_hi,io_out_bits_imm_lo}; // @[Cat.scala 30:58]
  wire [31:0] io_out_bits_imm_hi_1 = io_in_bits_inst[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [19:0] io_out_bits_imm_hi_2 = io_in_bits_inst[31:12]; // @[IDU.scala 122:76]
  wire [63:0] _io_out_bits_imm_T_7 = {io_out_bits_imm_hi_1,io_out_bits_imm_hi_2,12'h0}; // @[Cat.scala 30:58]
  wire [63:0] _io_out_bits_imm_T_11 = {io_out_bits_imm_hi,io_in_bits_inst[31:25],io_in_bits_inst[11:7]}; // @[Cat.scala 30:58]
  wire [42:0] io_out_bits_imm_hi_5 = io_in_bits_inst[31] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 72:12]
  wire [7:0] io_out_bits_imm_hi_7 = io_in_bits_inst[19:12]; // @[IDU.scala 124:100]
  wire  io_out_bits_imm_hi_8 = io_in_bits_inst[20]; // @[IDU.scala 124:127]
  wire [9:0] io_out_bits_imm_hi_9 = io_in_bits_inst[30:21]; // @[IDU.scala 124:151]
  wire [63:0] _io_out_bits_imm_T_15 = {io_out_bits_imm_hi_5,io_in_bits_inst[31],io_out_bits_imm_hi_7,
    io_out_bits_imm_hi_8,io_out_bits_imm_hi_9,1'h0}; // @[Cat.scala 30:58]
  wire [50:0] io_out_bits_imm_hi_10 = io_in_bits_inst[31] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 72:12]
  wire  io_out_bits_imm_hi_12 = io_in_bits_inst[7]; // @[IDU.scala 125:100]
  wire [5:0] io_out_bits_imm_hi_13 = io_in_bits_inst[30:25]; // @[IDU.scala 125:123]
  wire [3:0] io_out_bits_imm_hi_14 = io_in_bits_inst[11:8]; // @[IDU.scala 125:150]
  wire [63:0] _io_out_bits_imm_T_19 = {io_out_bits_imm_hi_10,io_in_bits_inst[31],io_out_bits_imm_hi_12,
    io_out_bits_imm_hi_13,io_out_bits_imm_hi_14,1'h0}; // @[Cat.scala 30:58]
  wire [63:0] _io_out_bits_imm_T_20 = typ[4] ? _io_out_bits_imm_T_19 : 64'h0; // @[IDU.scala 125:16]
  wire [63:0] _io_out_bits_imm_T_21 = typ[3] ? _io_out_bits_imm_T_15 : _io_out_bits_imm_T_20; // @[IDU.scala 124:16]
  wire [63:0] _io_out_bits_imm_T_22 = typ[2] ? _io_out_bits_imm_T_11 : _io_out_bits_imm_T_21; // @[IDU.scala 123:16]
  wire [63:0] _io_out_bits_imm_T_23 = typ[1] ? _io_out_bits_imm_T_7 : _io_out_bits_imm_T_22; // @[IDU.scala 122:16]
  assign io_in_ready = 1'h1; // @[IDU.scala 27:15]
  assign io_out_valid = io_in_ready & io_in_valid; // @[Decoupled.scala 40:37]
  assign io_out_bits_rs1 = io_in_bits_inst[19:15]; // @[IDU.scala 109:37]
  assign io_out_bits_rs2 = io_in_bits_inst[24:20]; // @[IDU.scala 110:37]
  assign io_out_bits_rd = io_in_bits_inst[11:7]; // @[IDU.scala 108:36]
  assign io_out_bits_imm = typ[0] ? _io_out_bits_imm_T_3 : _io_out_bits_imm_T_23; // @[IDU.scala 121:25]
  assign io_out_bits_op = _op_T_549[79:0]; // @[IDU.scala 29:16 IDU.scala 31:7]
  assign io_out_bits_typ = _typ_T_30 | op[40] | op[41] | op[46] | op[47] | op[48] | op[63] | op[64] ? 6'h1 : _typ_T_126; // @[IDU.scala 113:14]
endmodule
module ALU(
  input  [63:0] io_src1,
  input  [63:0] io_src2,
  input  [18:0] io_op,
  output [63:0] io_result
);
  wire  _adder_b_T_6 = io_op[1] | io_op[8] | io_op[9] | io_op[11]; // @[ALU.scala 22:44]
  wire [63:0] _adder_b_T_7 = ~io_src2; // @[ALU.scala 22:55]
  wire [63:0] adder_b = io_op[1] | io_op[8] | io_op[9] | io_op[11] ? _adder_b_T_7 : io_src2; // @[ALU.scala 22:17]
  wire [64:0] _sum_T = io_src1 + adder_b; // @[ALU.scala 24:17]
  wire [64:0] _GEN_0 = {{64'd0}, _adder_b_T_6}; // @[ALU.scala 24:26]
  wire [65:0] _sum_T_1 = _sum_T + _GEN_0; // @[ALU.scala 24:26]
  wire [64:0] sum = _sum_T_1[64:0]; // @[ALU.scala 17:17 ALU.scala 24:8]
  wire  adder_cout = sum[64]; // @[ALU.scala 25:20]
  wire [63:0] adder_result = sum[63:0]; // @[ALU.scala 26:22]
  wire  slt_result_lo = io_src1[63] & ~io_src2[63] | ~(io_src1[63] ^ io_src2[63]) & adder_result[63]; // @[ALU.scala 28:61]
  wire [63:0] slt_result = {63'h0,slt_result_lo}; // @[Cat.scala 30:58]
  wire  sltu_result_lo = ~adder_cout; // @[ALU.scala 29:35]
  wire [63:0] sltu_result = {63'h0,sltu_result_lo}; // @[Cat.scala 30:58]
  wire  eql_result_lo = adder_result == 64'h0; // @[ALU.scala 30:46]
  wire [63:0] eql_result = {63'h0,eql_result_lo}; // @[Cat.scala 30:58]
  wire [63:0] _io_result_T_4 = io_src1 & io_src2; // @[ALU.scala 34:36]
  wire [63:0] _io_result_T_6 = io_src1 | io_src2; // @[ALU.scala 35:36]
  wire [63:0] _io_result_T_8 = io_src1 ^ io_src2; // @[ALU.scala 36:36]
  wire [126:0] _GEN_1 = {{63'd0}, io_src1}; // @[ALU.scala 37:37]
  wire [126:0] _io_result_T_11 = _GEN_1 << io_src2[5:0]; // @[ALU.scala 37:37]
  wire [63:0] _io_result_T_15 = io_src1 >> io_src2[5:0]; // @[ALU.scala 38:36]
  wire [63:0] _io_result_T_20 = $signed(io_src1) >>> io_src2[5:0]; // @[ALU.scala 39:62]
  wire [63:0] _io_result_T_25 = adder_result & 64'hfffffffffffffffe; // @[ALU.scala 42:42]
  wire [127:0] _io_result_T_28 = io_src1 * io_src2; // @[ALU.scala 44:37]
  wire [127:0] _io_result_T_33 = $signed(io_src1) * $signed(io_src2); // @[ALU.scala 45:62]
  wire [64:0] _io_result_T_36 = {1'b0,$signed(io_src2)}; // @[ALU.scala 46:45]
  wire [128:0] _io_result_T_37 = $signed(io_src1) * $signed(_io_result_T_36); // @[ALU.scala 46:45]
  wire [127:0] _io_result_T_40 = _io_result_T_37[127:0]; // @[ALU.scala 46:55]
  wire [64:0] _io_result_T_45 = $signed(io_src1) / $signed(io_src2); // @[ALU.scala 47:62]
  wire [63:0] _io_result_T_47 = io_src1 / io_src2; // @[ALU.scala 48:37]
  wire [63:0] _io_result_T_52 = $signed(io_src1) % $signed(io_src2); // @[ALU.scala 49:62]
  wire [63:0] _GEN_2 = io_src1 % io_src2; // @[ALU.scala 50:37]
  wire [63:0] _io_result_T_54 = _GEN_2[63:0]; // @[ALU.scala 50:37]
  wire [63:0] _io_result_T_55 = io_op[18] ? _io_result_T_54 : 64'h0; // @[ALU.scala 50:19]
  wire [63:0] _io_result_T_56 = io_op[17] ? _io_result_T_52 : _io_result_T_55; // @[ALU.scala 49:19]
  wire [63:0] _io_result_T_57 = io_op[16] ? _io_result_T_47 : _io_result_T_56; // @[ALU.scala 48:19]
  wire [64:0] _io_result_T_58 = io_op[15] ? _io_result_T_45 : {{1'd0}, _io_result_T_57}; // @[ALU.scala 47:19]
  wire [127:0] _io_result_T_59 = io_op[14] ? _io_result_T_40 : {{63'd0}, _io_result_T_58}; // @[ALU.scala 46:19]
  wire [127:0] _io_result_T_60 = io_op[13] ? _io_result_T_33 : _io_result_T_59; // @[ALU.scala 45:19]
  wire [127:0] _io_result_T_61 = io_op[12] ? _io_result_T_28 : _io_result_T_60; // @[ALU.scala 44:19]
  wire [127:0] _io_result_T_62 = io_op[11] ? {{64'd0}, eql_result} : _io_result_T_61; // @[ALU.scala 43:19]
  wire [127:0] _io_result_T_63 = io_op[10] ? {{64'd0}, _io_result_T_25} : _io_result_T_62; // @[ALU.scala 42:19]
  wire [127:0] _io_result_T_64 = io_op[9] ? {{64'd0}, sltu_result} : _io_result_T_63; // @[ALU.scala 41:19]
  wire [127:0] _io_result_T_65 = io_op[8] ? {{64'd0}, slt_result} : _io_result_T_64; // @[ALU.scala 40:19]
  wire [127:0] _io_result_T_66 = io_op[7] ? {{64'd0}, _io_result_T_20} : _io_result_T_65; // @[ALU.scala 39:19]
  wire [127:0] _io_result_T_67 = io_op[6] ? {{64'd0}, _io_result_T_15} : _io_result_T_66; // @[ALU.scala 38:19]
  wire [127:0] _io_result_T_68 = io_op[5] ? {{64'd0}, _io_result_T_11[63:0]} : _io_result_T_67; // @[ALU.scala 37:19]
  wire [127:0] _io_result_T_69 = io_op[4] ? {{64'd0}, _io_result_T_8} : _io_result_T_68; // @[ALU.scala 36:19]
  wire [127:0] _io_result_T_70 = io_op[3] ? {{64'd0}, _io_result_T_6} : _io_result_T_69; // @[ALU.scala 35:19]
  wire [127:0] _io_result_T_71 = io_op[2] ? {{64'd0}, _io_result_T_4} : _io_result_T_70; // @[ALU.scala 34:19]
  wire [127:0] _io_result_T_72 = io_op[0] | io_op[1] ? {{64'd0}, adder_result} : _io_result_T_71; // @[ALU.scala 33:19]
  assign io_result = _io_result_T_72[63:0]; // @[ALU.scala 33:14]
endmodule
module EXU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [4:0]  io_in_bits_rs1,
  input  [4:0]  io_in_bits_rs2,
  input  [4:0]  io_in_bits_rd,
  input  [63:0] io_in_bits_imm,
  input  [79:0] io_in_bits_op,
  input  [5:0]  io_in_bits_typ,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_pin_raddr,
  output [31:0] io_out_bits_pin_waddr,
  output [63:0] io_out_bits_pin_wdata,
  output [7:0]  io_out_bits_pin_wmask,
  output [4:0]  io_out_bits_idx_w,
  output        io_out_bits_en_w,
  output [79:0] io_out_bits_op,
  output [63:0] io_out_bits_val_w,
  output [4:0]  io_gpr_idx_r1,
  output [4:0]  io_gpr_idx_r2,
  output        io_gpr_en_r1,
  output        io_gpr_en_r2,
  input  [63:0] io_gpr_val_r1,
  input  [63:0] io_gpr_val_r2,
  input  [63:0] io_pc,
  output [11:0] io_csr_idx_w,
  output [11:0] io_csr_idx_r,
  output        io_csr_en_w,
  output        io_csr_en_r,
  output [63:0] io_csr_val_w,
  input  [63:0] io_csr_val_r,
  output [63:0] io_csr_no,
  output [63:0] io_csr_epc,
  output [63:0] io_pc_dnpc
);
  wire  ebreak1_en_break; // @[EXU.scala 34:27]
  wire  ebreak1_clk; // @[EXU.scala 34:27]
  wire [63:0] alu_dest_io_src1; // @[EXU.scala 43:28]
  wire [63:0] alu_dest_io_src2; // @[EXU.scala 43:28]
  wire [18:0] alu_dest_io_op; // @[EXU.scala 43:28]
  wire [63:0] alu_dest_io_result; // @[EXU.scala 43:28]
  wire [63:0] alu_pc_io_src1; // @[EXU.scala 44:26]
  wire [63:0] alu_pc_io_src2; // @[EXU.scala 44:26]
  wire [18:0] alu_pc_io_op; // @[EXU.scala 44:26]
  wire [63:0] alu_pc_io_result; // @[EXU.scala 44:26]
  wire  _io_out_valid_T = io_in_ready & io_in_valid; // @[Decoupled.scala 40:37]
  wire  _io_gpr_en_r1_T_6 = io_in_bits_typ[0] | io_in_bits_typ[2] | io_in_bits_typ[4] | io_in_bits_typ[5]; // @[EXU.scala 46:81]
  wire  _io_gpr_en_r2_T_2 = io_in_bits_typ[2] | io_in_bits_typ[4]; // @[EXU.scala 47:45]
  wire  _io_gpr_en_r2_T_4 = io_in_bits_typ[2] | io_in_bits_typ[4] | io_in_bits_typ[5]; // @[EXU.scala 47:63]
  wire  _io_out_bits_en_w_T_2 = ~_io_out_valid_T; // @[EXU.scala 50:45]
  wire  _io_csr_en_r_T_2 = io_in_bits_op[63] | io_in_bits_op[64]; // @[EXU.scala 53:43]
  wire [63:0] _src2_T_6 = io_in_bits_typ[0] ? io_in_bits_imm : 64'h0; // @[EXU.scala 68:16]
  wire [63:0] src2 = _io_gpr_en_r2_T_4 ? io_gpr_val_r2 : _src2_T_6; // @[EXU.scala 67:18]
  wire [63:0] _io_csr_idx_r_T_3 = _io_csr_en_r_T_2 ? src2 : 64'h0; // @[EXU.scala 55:26]
  wire [1:0] _io_csr_no_T_2 = io_in_bits_op[66] ? 2'h2 : 2'h0; // @[EXU.scala 58:23]
  wire [1:0] _io_csr_no_T_3 = io_in_bits_op[65] ? 2'h1 : _io_csr_no_T_2; // @[EXU.scala 57:23]
  wire [63:0] _src1_T_10 = io_in_bits_typ[1] | io_in_bits_typ[3] ? io_in_bits_imm : 64'h0; // @[EXU.scala 64:16]
  wire [63:0] src1 = _io_gpr_en_r1_T_6 ? io_gpr_val_r1 : _src1_T_10; // @[EXU.scala 63:18]
  wire [63:0] dest = _io_gpr_en_r2_T_2 ? io_in_bits_imm : {{59'd0}, io_in_bits_rd}; // @[EXU.scala 71:18]
  wire [63:0] _io_out_bits_pin_raddr_T_13 = io_in_bits_op[38] | io_in_bits_op[39] | io_in_bits_op[40] | io_in_bits_op[41
    ] | io_in_bits_op[46] | io_in_bits_op[47] | io_in_bits_op[48] ? alu_dest_io_result : 64'h0; // @[EXU.scala 74:35]
  wire  _io_out_bits_pin_waddr_T_6 = io_in_bits_op[42] | io_in_bits_op[43] | io_in_bits_op[44] | io_in_bits_op[45]; // @[EXU.scala 76:89]
  wire [63:0] _io_out_bits_pin_waddr_T_7 = io_in_bits_op[42] | io_in_bits_op[43] | io_in_bits_op[44] | io_in_bits_op[45]
     ? alu_dest_io_result : 64'h0; // @[EXU.scala 76:35]
  wire [63:0] _io_out_bits_pin_wmask_T_10 = io_in_bits_op[45] ? 64'hff : 64'h0; // @[EXU.scala 82:27]
  wire [63:0] _io_out_bits_pin_wmask_T_11 = io_in_bits_op[44] ? 64'hf : _io_out_bits_pin_wmask_T_10; // @[EXU.scala 81:27]
  wire [63:0] _io_out_bits_pin_wmask_T_12 = io_in_bits_op[43] ? 64'h3 : _io_out_bits_pin_wmask_T_11; // @[EXU.scala 80:27]
  wire [63:0] _io_out_bits_pin_wmask_T_13 = io_in_bits_op[42] ? 64'h1 : _io_out_bits_pin_wmask_T_12; // @[EXU.scala 79:27]
  wire [63:0] _io_out_bits_pin_wmask_T_14 = _io_out_bits_en_w_T_2 ? 64'h0 : _io_out_bits_pin_wmask_T_13; // @[EXU.scala 78:35]
  wire [31:0] alu_dest_io_src1_lo = src1[31:0]; // @[EXU.scala 85:178]
  wire [63:0] _alu_dest_io_src1_T_13 = {32'h0,alu_dest_io_src1_lo}; // @[Cat.scala 30:58]
  wire [31:0] alu_dest_io_src1_hi_1 = src1[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _alu_dest_io_src1_T_19 = {alu_dest_io_src1_hi_1,alu_dest_io_src1_lo}; // @[Cat.scala 30:58]
  wire  _alu_dest_io_src1_T_22 = io_in_bits_op[36] | io_in_bits_op[37]; // @[EXU.scala 87:48]
  wire [63:0] _alu_dest_io_src1_T_23 = io_in_bits_op[36] | io_in_bits_op[37] ? io_pc : src1; // @[EXU.scala 87:30]
  wire [63:0] _alu_dest_io_src1_T_24 = io_in_bits_op[17] | io_in_bits_op[19] ? _alu_dest_io_src1_T_19 :
    _alu_dest_io_src1_T_23; // @[EXU.scala 86:30]
  wire [4:0] alu_dest_io_src2_lo = src2[4:0]; // @[EXU.scala 89:106]
  wire [63:0] _alu_dest_io_src2_T_5 = {59'h0,alu_dest_io_src2_lo}; // @[Cat.scala 30:58]
  wire [31:0] alu_dest_io_src2_lo_1 = src2[31:0]; // @[EXU.scala 93:124]
  wire [63:0] _alu_dest_io_src2_T_24 = {32'h0,alu_dest_io_src2_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _alu_dest_io_src2_T_26 = io_in_bits_op[64] ? io_csr_val_r : src2; // @[EXU.scala 94:30]
  wire [63:0] _alu_dest_io_src2_T_27 = io_in_bits_op[56] | io_in_bits_op[58] | io_in_bits_op[60] | io_in_bits_op[62] ?
    _alu_dest_io_src2_T_24 : _alu_dest_io_src2_T_26; // @[EXU.scala 93:30]
  wire [63:0] _alu_dest_io_src2_T_28 = _io_out_bits_pin_waddr_T_6 ? dest : _alu_dest_io_src2_T_27; // @[EXU.scala 92:30]
  wire [63:0] _alu_dest_io_src2_T_29 = _alu_dest_io_src1_T_22 ? 64'h4 : _alu_dest_io_src2_T_28; // @[EXU.scala 91:30]
  wire [63:0] _alu_dest_io_src2_T_30 = io_in_bits_op[25] ? io_pc : _alu_dest_io_src2_T_29; // @[EXU.scala 90:30]
  wire [18:0] _alu_dest_io_op_T_108 = io_in_bits_op[61] | io_in_bits_op[62] ? 19'h40000 : 19'h0; // @[EXU.scala 113:30]
  wire [18:0] _alu_dest_io_op_T_109 = io_in_bits_op[59] | io_in_bits_op[60] ? 19'h20000 : _alu_dest_io_op_T_108; // @[EXU.scala 112:30]
  wire [18:0] _alu_dest_io_op_T_110 = io_in_bits_op[57] | io_in_bits_op[58] ? 19'h10000 : _alu_dest_io_op_T_109; // @[EXU.scala 111:30]
  wire [18:0] _alu_dest_io_op_T_111 = io_in_bits_op[55] | io_in_bits_op[56] ? 19'h8000 : _alu_dest_io_op_T_110; // @[EXU.scala 110:30]
  wire [18:0] _alu_dest_io_op_T_112 = io_in_bits_op[54] ? 19'h4000 : _alu_dest_io_op_T_111; // @[EXU.scala 109:30]
  wire [18:0] _alu_dest_io_op_T_113 = io_in_bits_op[52] ? 19'h2000 : _alu_dest_io_op_T_112; // @[EXU.scala 108:30]
  wire [18:0] _alu_dest_io_op_T_114 = io_in_bits_op[50] | io_in_bits_op[51] | io_in_bits_op[53] ? 19'h1000 :
    _alu_dest_io_op_T_113; // @[EXU.scala 107:30]
  wire [18:0] _alu_dest_io_op_T_115 = io_in_bits_op[30] | io_in_bits_op[31] ? 19'h800 : _alu_dest_io_op_T_114; // @[EXU.scala 106:30]
  wire [18:0] _alu_dest_io_op_T_116 = io_in_bits_op[27] | io_in_bits_op[29] | io_in_bits_op[33] | io_in_bits_op[35] ? 19'h200
     : _alu_dest_io_op_T_115; // @[EXU.scala 105:30]
  wire [18:0] _alu_dest_io_op_T_117 = io_in_bits_op[26] | io_in_bits_op[28] | io_in_bits_op[32] | io_in_bits_op[34] ? 19'h100
     : _alu_dest_io_op_T_116; // @[EXU.scala 104:30]
  wire [18:0] _alu_dest_io_op_T_118 = io_in_bits_op[16] | io_in_bits_op[17] | io_in_bits_op[18] | io_in_bits_op[19] ? 19'h80
     : _alu_dest_io_op_T_117; // @[EXU.scala 103:30]
  wire [18:0] _alu_dest_io_op_T_119 = io_in_bits_op[20] | io_in_bits_op[21] | io_in_bits_op[22] | io_in_bits_op[23] ? 19'h40
     : _alu_dest_io_op_T_118; // @[EXU.scala 102:30]
  wire [18:0] _alu_dest_io_op_T_120 = io_in_bits_op[12] | io_in_bits_op[13] | io_in_bits_op[14] | io_in_bits_op[15] ? 19'h20
     : _alu_dest_io_op_T_119; // @[EXU.scala 101:30]
  wire [18:0] _alu_dest_io_op_T_121 = io_in_bits_op[10] | io_in_bits_op[11] ? 19'h10 : _alu_dest_io_op_T_120; // @[EXU.scala 100:30]
  wire [18:0] _alu_dest_io_op_T_122 = io_in_bits_op[8] | io_in_bits_op[9] | io_in_bits_op[64] ? 19'h8 :
    _alu_dest_io_op_T_121; // @[EXU.scala 99:30]
  wire [18:0] _alu_dest_io_op_T_123 = io_in_bits_op[6] | io_in_bits_op[7] ? 19'h4 : _alu_dest_io_op_T_122; // @[EXU.scala 98:30]
  wire [18:0] _alu_dest_io_op_T_124 = io_in_bits_op[4] | io_in_bits_op[5] ? 19'h2 : _alu_dest_io_op_T_123; // @[EXU.scala 97:30]
  wire [31:0] io_out_bits_val_w_hi = alu_dest_io_result[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [31:0] io_out_bits_val_w_lo = alu_dest_io_result[31:0]; // @[EXU.scala 120:299]
  wire [63:0] _io_out_bits_val_w_T_25 = {io_out_bits_val_w_hi,io_out_bits_val_w_lo}; // @[Cat.scala 30:58]
  wire [31:0] io_out_bits_val_w_lo_1 = alu_dest_io_result[63:32]; // @[EXU.scala 121:116]
  wire [63:0] _io_out_bits_val_w_T_31 = {32'h0,io_out_bits_val_w_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _io_out_bits_val_w_T_35 = _io_csr_en_r_T_2 ? io_csr_val_r : alu_dest_io_result; // @[EXU.scala 122:26]
  wire [63:0] _io_out_bits_val_w_T_36 = io_in_bits_op[52] | io_in_bits_op[53] | io_in_bits_op[54] ?
    _io_out_bits_val_w_T_31 : _io_out_bits_val_w_T_35; // @[EXU.scala 121:26]
  wire [63:0] _io_csr_val_w_T_2 = io_in_bits_op[64] ? alu_dest_io_result : 64'h0; // @[EXU.scala 126:26]
  wire  _alu_pc_io_src2_T_5 = ~alu_dest_io_result[0]; // @[EXU.scala 133:48]
  wire [63:0] _alu_pc_io_src2_T_23 = io_in_bits_op[37] ? src2 : 64'h4; // @[EXU.scala 139:28]
  wire [63:0] _alu_pc_io_src2_T_24 = io_in_bits_op[36] ? src1 : _alu_pc_io_src2_T_23; // @[EXU.scala 138:28]
  wire [63:0] _alu_pc_io_src2_T_25 = io_in_bits_op[35] & alu_dest_io_result[0] ? dest : _alu_pc_io_src2_T_24; // @[EXU.scala 137:28]
  wire [63:0] _alu_pc_io_src2_T_26 = io_in_bits_op[34] & alu_dest_io_result[0] ? dest : _alu_pc_io_src2_T_25; // @[EXU.scala 136:28]
  wire [63:0] _alu_pc_io_src2_T_27 = io_in_bits_op[33] & _alu_pc_io_src2_T_5 ? dest : _alu_pc_io_src2_T_26; // @[EXU.scala 135:28]
  wire [63:0] _alu_pc_io_src2_T_28 = io_in_bits_op[32] & _alu_pc_io_src2_T_5 ? dest : _alu_pc_io_src2_T_27; // @[EXU.scala 134:28]
  wire [63:0] _alu_pc_io_src2_T_29 = io_in_bits_op[31] & ~alu_dest_io_result[0] ? dest : _alu_pc_io_src2_T_28; // @[EXU.scala 133:28]
  wire [10:0] _alu_pc_io_op_T_1 = io_in_bits_op[37] ? 11'h400 : 11'h1; // @[EXU.scala 141:28]
  wire  _io_out_bits_pc_dnpc_T_3 = reset | _io_out_bits_en_w_T_2; // @[EXU.scala 143:47]
  wire [63:0] _io_out_bits_pc_dnpc_T_7 = io_in_bits_op[65] | io_in_bits_op[66] ? io_csr_val_r : alu_pc_io_result; // @[EXU.scala 144:25]
  ebreak ebreak1 ( // @[EXU.scala 34:27]
    .en_break(ebreak1_en_break),
    .clk(ebreak1_clk)
  );
  ALU alu_dest ( // @[EXU.scala 43:28]
    .io_src1(alu_dest_io_src1),
    .io_src2(alu_dest_io_src2),
    .io_op(alu_dest_io_op),
    .io_result(alu_dest_io_result)
  );
  ALU alu_pc ( // @[EXU.scala 44:26]
    .io_src1(alu_pc_io_src1),
    .io_src2(alu_pc_io_src2),
    .io_op(alu_pc_io_op),
    .io_result(alu_pc_io_result)
  );
  assign io_in_ready = io_out_ready; // @[EXU.scala 30:20]
  assign io_out_valid = io_in_ready & io_in_valid; // @[Decoupled.scala 40:37]
  assign io_out_bits_pin_raddr = _io_out_bits_pin_raddr_T_13[31:0]; // @[EXU.scala 74:30]
  assign io_out_bits_pin_waddr = _io_out_bits_pin_waddr_T_7[31:0]; // @[EXU.scala 76:30]
  assign io_out_bits_pin_wdata = _io_out_bits_pin_waddr_T_6 ? src2 : 64'h0; // @[EXU.scala 77:35]
  assign io_out_bits_pin_wmask = _io_out_bits_pin_wmask_T_14[7:0]; // @[EXU.scala 78:30]
  assign io_out_bits_idx_w = dest[4:0]; // @[EXU.scala 51:26]
  assign io_out_bits_en_w = reset & ~_io_out_valid_T ? 1'h0 : io_in_bits_typ[0] | io_in_bits_typ[1] | io_in_bits_typ[3]
     | io_in_bits_typ[5]; // @[EXU.scala 50:30]
  assign io_out_bits_op = io_in_bits_op; // @[EXU.scala 149:23]
  assign io_out_bits_val_w = io_in_bits_op[1] | io_in_bits_op[3] | io_in_bits_op[5] | io_in_bits_op[13] | io_in_bits_op[
    15] | io_in_bits_op[17] | io_in_bits_op[21] | io_in_bits_op[23] | io_in_bits_op[51] | io_in_bits_op[56] |
    io_in_bits_op[60] | io_in_bits_op[62] ? _io_out_bits_val_w_T_25 : _io_out_bits_val_w_T_36; // @[EXU.scala 120:31]
  assign io_gpr_idx_r1 = io_in_bits_rs1; // @[EXU.scala 48:22]
  assign io_gpr_idx_r2 = io_in_bits_rs2; // @[EXU.scala 49:22]
  assign io_gpr_en_r1 = io_in_bits_typ[0] | io_in_bits_typ[2] | io_in_bits_typ[4] | io_in_bits_typ[5]; // @[EXU.scala 46:81]
  assign io_gpr_en_r2 = io_in_bits_typ[2] | io_in_bits_typ[4] | io_in_bits_typ[5]; // @[EXU.scala 47:63]
  assign io_csr_idx_w = _io_csr_idx_r_T_3[11:0]; // @[EXU.scala 56:21]
  assign io_csr_idx_r = _io_csr_idx_r_T_3[11:0]; // @[EXU.scala 55:21]
  assign io_csr_en_w = _io_out_valid_T & _io_csr_en_r_T_2; // @[EXU.scala 54:36]
  assign io_csr_en_r = io_in_bits_op[63] | io_in_bits_op[64]; // @[EXU.scala 53:43]
  assign io_csr_val_w = io_in_bits_op[63] ? src1 : _io_csr_val_w_T_2; // @[EXU.scala 125:26]
  assign io_csr_no = {{62'd0}, _io_csr_no_T_3}; // @[EXU.scala 57:23]
  assign io_csr_epc = io_pc; // @[EXU.scala 60:19]
  assign io_pc_dnpc = _io_out_bits_pc_dnpc_T_3 ? io_pc : _io_out_bits_pc_dnpc_T_7; // @[EXU.scala 146:24]
  assign ebreak1_en_break = io_in_bits_op[49] & _io_out_valid_T; // @[EXU.scala 35:47]
  assign ebreak1_clk = clock; // @[EXU.scala 36:23]
  assign alu_dest_io_src1 = io_in_bits_op[13] | io_in_bits_op[21] | io_in_bits_op[23] | io_in_bits_op[56] |
    io_in_bits_op[58] | io_in_bits_op[60] | io_in_bits_op[62] ? _alu_dest_io_src1_T_13 : _alu_dest_io_src1_T_24; // @[EXU.scala 85:30]
  assign alu_dest_io_src2 = io_in_bits_op[13] | io_in_bits_op[17] | io_in_bits_op[21] ? _alu_dest_io_src2_T_5 :
    _alu_dest_io_src2_T_30; // @[EXU.scala 89:30]
  assign alu_dest_io_op = io_in_bits_op[0] | io_in_bits_op[1] | io_in_bits_op[2] | io_in_bits_op[3] | io_in_bits_op[24]
     | io_in_bits_op[25] | io_in_bits_op[36] | io_in_bits_op[37] | io_in_bits_op[38] | io_in_bits_op[39] | io_in_bits_op
    [40] | io_in_bits_op[41] | io_in_bits_op[42] | io_in_bits_op[43] | io_in_bits_op[44] | io_in_bits_op[45] |
    io_in_bits_op[46] | io_in_bits_op[47] | io_in_bits_op[48] ? 19'h1 : _alu_dest_io_op_T_124; // @[EXU.scala 96:30]
  assign alu_pc_io_src1 = io_in_bits_op[37] ? src1 : io_pc; // @[EXU.scala 131:28]
  assign alu_pc_io_src2 = io_in_bits_op[30] & alu_dest_io_result[0] ? dest : _alu_pc_io_src2_T_29; // @[EXU.scala 132:28]
  assign alu_pc_io_op = {{8'd0}, _alu_pc_io_op_T_1}; // @[EXU.scala 141:28]
endmodule
module LSU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_pin_raddr,
  input  [31:0] io_in_bits_pin_waddr,
  input  [63:0] io_in_bits_pin_wdata,
  input  [7:0]  io_in_bits_pin_wmask,
  input  [4:0]  io_in_bits_idx_w,
  input         io_in_bits_en_w,
  input  [79:0] io_in_bits_op,
  input  [63:0] io_in_bits_val_w,
  input         io_lm_ar_ready,
  output        io_lm_ar_valid,
  output [31:0] io_lm_ar_bits_addr,
  output        io_lm_r_ready,
  input         io_lm_r_valid,
  input  [63:0] io_lm_r_bits_data,
  input         io_lm_aw_ready,
  output        io_lm_aw_valid,
  output [31:0] io_lm_aw_bits_addr,
  input         io_lm_w_ready,
  output        io_lm_w_valid,
  output [63:0] io_lm_w_bits_data,
  output [7:0]  io_lm_w_bits_strb,
  output [4:0]  io_gpr_idx_w,
  output        io_gpr_en_w,
  output [63:0] io_gpr_val_w
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  rstate; // @[LSU.scala 18:23]
  wire  _rstate_T = io_lm_ar_ready & io_lm_ar_valid; // @[Decoupled.scala 40:37]
  wire  _rstate_T_2 = io_lm_r_ready & io_lm_r_valid; // @[Decoupled.scala 40:37]
  reg  wstate; // @[LSU.scala 23:23]
  wire  _wstate_T = io_lm_aw_ready & io_lm_aw_valid; // @[Decoupled.scala 40:37]
  wire  _wstate_T_2 = io_lm_w_ready & io_lm_w_valid; // @[Decoupled.scala 40:37]
  wire  _io_lm_ar_valid_T = ~rstate; // @[LSU.scala 30:27]
  wire  _io_lm_ar_valid_T_2 = ~reset; // @[LSU.scala 30:40]
  wire  _io_lm_ar_valid_T_4 = io_in_ready & io_in_valid; // @[Decoupled.scala 40:37]
  wire  _io_lm_aw_valid_T = ~wstate; // @[LSU.scala 33:27]
  wire [55:0] io_gpr_val_w_hi = io_lm_r_bits_data[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [7:0] io_gpr_val_w_lo = io_lm_r_bits_data[7:0]; // @[LSU.scala 45:96]
  wire [63:0] _io_gpr_val_w_T_3 = {io_gpr_val_w_hi,io_gpr_val_w_lo}; // @[Cat.scala 30:58]
  wire [47:0] io_gpr_val_w_hi_1 = io_lm_r_bits_data[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [15:0] io_gpr_val_w_lo_1 = io_lm_r_bits_data[15:0]; // @[LSU.scala 46:97]
  wire [63:0] _io_gpr_val_w_T_7 = {io_gpr_val_w_hi_1,io_gpr_val_w_lo_1}; // @[Cat.scala 30:58]
  wire [31:0] io_gpr_val_w_hi_2 = io_lm_r_bits_data[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [31:0] io_gpr_val_w_lo_2 = io_lm_r_bits_data[31:0]; // @[LSU.scala 47:97]
  wire [63:0] _io_gpr_val_w_T_11 = {io_gpr_val_w_hi_2,io_gpr_val_w_lo_2}; // @[Cat.scala 30:58]
  wire [63:0] _io_gpr_val_w_T_14 = {56'h0,io_gpr_val_w_lo}; // @[Cat.scala 30:58]
  wire [63:0] _io_gpr_val_w_T_16 = {48'h0,io_gpr_val_w_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _io_gpr_val_w_T_18 = {32'h0,io_gpr_val_w_lo_2}; // @[Cat.scala 30:58]
  wire [63:0] _io_gpr_val_w_T_19 = io_in_bits_op[48] ? _io_gpr_val_w_T_18 : io_in_bits_val_w; // @[LSU.scala 51:26]
  wire [63:0] _io_gpr_val_w_T_20 = io_in_bits_op[47] ? _io_gpr_val_w_T_16 : _io_gpr_val_w_T_19; // @[LSU.scala 50:26]
  wire [63:0] _io_gpr_val_w_T_21 = io_in_bits_op[46] ? _io_gpr_val_w_T_14 : _io_gpr_val_w_T_20; // @[LSU.scala 49:26]
  wire [63:0] _io_gpr_val_w_T_22 = io_in_bits_op[41] ? io_lm_r_bits_data : _io_gpr_val_w_T_21; // @[LSU.scala 48:26]
  wire [63:0] _io_gpr_val_w_T_23 = io_in_bits_op[40] ? _io_gpr_val_w_T_11 : _io_gpr_val_w_T_22; // @[LSU.scala 47:26]
  wire [63:0] _io_gpr_val_w_T_24 = io_in_bits_op[39] ? _io_gpr_val_w_T_7 : _io_gpr_val_w_T_23; // @[LSU.scala 46:26]
  assign io_in_ready = _io_lm_ar_valid_T & _io_lm_aw_valid_T; // @[LSU.scala 39:33]
  assign io_lm_ar_valid = ~rstate & ~reset & _io_lm_ar_valid_T_4; // @[LSU.scala 30:54]
  assign io_lm_ar_bits_addr = io_in_bits_pin_raddr; // @[LSU.scala 29:21]
  assign io_lm_r_ready = rstate; // @[LSU.scala 31:26]
  assign io_lm_aw_valid = ~wstate & _io_lm_ar_valid_T_2 & _io_lm_ar_valid_T_4; // @[LSU.scala 33:54]
  assign io_lm_aw_bits_addr = io_in_bits_pin_waddr; // @[LSU.scala 32:21]
  assign io_lm_w_valid = io_in_ready & io_in_valid; // @[Decoupled.scala 40:37]
  assign io_lm_w_bits_data = io_in_bits_pin_wdata; // @[LSU.scala 34:20]
  assign io_lm_w_bits_strb = io_in_bits_pin_wmask; // @[LSU.scala 35:20]
  assign io_gpr_idx_w = io_in_bits_idx_w; // @[LSU.scala 44:15]
  assign io_gpr_en_w = io_in_bits_en_w & _rstate_T_2; // @[LSU.scala 43:31]
  assign io_gpr_val_w = io_in_bits_op[38] ? _io_gpr_val_w_T_3 : _io_gpr_val_w_T_24; // @[LSU.scala 45:26]
  always @(posedge clock) begin
    if (reset) begin // @[LSU.scala 18:23]
      rstate <= 1'h0; // @[LSU.scala 18:23]
    end else if (rstate) begin // @[Mux.scala 80:57]
      if (_rstate_T_2) begin // @[LSU.scala 21:19]
        rstate <= 1'h0;
      end else begin
        rstate <= 1'h1;
      end
    end else begin
      rstate <= _rstate_T;
    end
    if (reset) begin // @[LSU.scala 23:23]
      wstate <= 1'h0; // @[LSU.scala 23:23]
    end else if (wstate) begin // @[Mux.scala 80:57]
      if (_wstate_T_2) begin // @[LSU.scala 26:19]
        wstate <= 1'h0;
      end else begin
        wstate <= 1'h1;
      end
    end else begin
      wstate <= _wstate_T;
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
  rstate = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  wstate = _RAND_1[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module GPR(
  input         clock,
  input         reset,
  input  [4:0]  io_r_idx_r1,
  input  [4:0]  io_r_idx_r2,
  input         io_r_en_r1,
  input         io_r_en_r2,
  output [63:0] io_r_val_r1,
  output [63:0] io_r_val_r2,
  input  [4:0]  io_w_idx_w,
  input         io_w_en_w,
  input  [63:0] io_w_val_w
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [63:0] _RAND_10;
  reg [63:0] _RAND_11;
  reg [63:0] _RAND_12;
  reg [63:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [63:0] _RAND_15;
  reg [63:0] _RAND_16;
  reg [63:0] _RAND_17;
  reg [63:0] _RAND_18;
  reg [63:0] _RAND_19;
  reg [63:0] _RAND_20;
  reg [63:0] _RAND_21;
  reg [63:0] _RAND_22;
  reg [63:0] _RAND_23;
  reg [63:0] _RAND_24;
  reg [63:0] _RAND_25;
  reg [63:0] _RAND_26;
  reg [63:0] _RAND_27;
  reg [63:0] _RAND_28;
  reg [63:0] _RAND_29;
  reg [63:0] _RAND_30;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] p_rf_0; // @[GPR.scala 31:17]
  wire [63:0] p_rf_1; // @[GPR.scala 31:17]
  wire [63:0] p_rf_2; // @[GPR.scala 31:17]
  wire [63:0] p_rf_3; // @[GPR.scala 31:17]
  wire [63:0] p_rf_4; // @[GPR.scala 31:17]
  wire [63:0] p_rf_5; // @[GPR.scala 31:17]
  wire [63:0] p_rf_6; // @[GPR.scala 31:17]
  wire [63:0] p_rf_7; // @[GPR.scala 31:17]
  wire [63:0] p_rf_8; // @[GPR.scala 31:17]
  wire [63:0] p_rf_9; // @[GPR.scala 31:17]
  wire [63:0] p_rf_10; // @[GPR.scala 31:17]
  wire [63:0] p_rf_11; // @[GPR.scala 31:17]
  wire [63:0] p_rf_12; // @[GPR.scala 31:17]
  wire [63:0] p_rf_13; // @[GPR.scala 31:17]
  wire [63:0] p_rf_14; // @[GPR.scala 31:17]
  wire [63:0] p_rf_15; // @[GPR.scala 31:17]
  wire [63:0] p_rf_16; // @[GPR.scala 31:17]
  wire [63:0] p_rf_17; // @[GPR.scala 31:17]
  wire [63:0] p_rf_18; // @[GPR.scala 31:17]
  wire [63:0] p_rf_19; // @[GPR.scala 31:17]
  wire [63:0] p_rf_20; // @[GPR.scala 31:17]
  wire [63:0] p_rf_21; // @[GPR.scala 31:17]
  wire [63:0] p_rf_22; // @[GPR.scala 31:17]
  wire [63:0] p_rf_23; // @[GPR.scala 31:17]
  wire [63:0] p_rf_24; // @[GPR.scala 31:17]
  wire [63:0] p_rf_25; // @[GPR.scala 31:17]
  wire [63:0] p_rf_26; // @[GPR.scala 31:17]
  wire [63:0] p_rf_27; // @[GPR.scala 31:17]
  wire [63:0] p_rf_28; // @[GPR.scala 31:17]
  wire [63:0] p_rf_29; // @[GPR.scala 31:17]
  wire [63:0] p_rf_30; // @[GPR.scala 31:17]
  wire [63:0] p_rf_31; // @[GPR.scala 31:17]
  reg [63:0] gpr_1; // @[GPR.scala 25:20]
  reg [63:0] gpr_2; // @[GPR.scala 25:20]
  reg [63:0] gpr_3; // @[GPR.scala 25:20]
  reg [63:0] gpr_4; // @[GPR.scala 25:20]
  reg [63:0] gpr_5; // @[GPR.scala 25:20]
  reg [63:0] gpr_6; // @[GPR.scala 25:20]
  reg [63:0] gpr_7; // @[GPR.scala 25:20]
  reg [63:0] gpr_8; // @[GPR.scala 25:20]
  reg [63:0] gpr_9; // @[GPR.scala 25:20]
  reg [63:0] gpr_10; // @[GPR.scala 25:20]
  reg [63:0] gpr_11; // @[GPR.scala 25:20]
  reg [63:0] gpr_12; // @[GPR.scala 25:20]
  reg [63:0] gpr_13; // @[GPR.scala 25:20]
  reg [63:0] gpr_14; // @[GPR.scala 25:20]
  reg [63:0] gpr_15; // @[GPR.scala 25:20]
  reg [63:0] gpr_16; // @[GPR.scala 25:20]
  reg [63:0] gpr_17; // @[GPR.scala 25:20]
  reg [63:0] gpr_18; // @[GPR.scala 25:20]
  reg [63:0] gpr_19; // @[GPR.scala 25:20]
  reg [63:0] gpr_20; // @[GPR.scala 25:20]
  reg [63:0] gpr_21; // @[GPR.scala 25:20]
  reg [63:0] gpr_22; // @[GPR.scala 25:20]
  reg [63:0] gpr_23; // @[GPR.scala 25:20]
  reg [63:0] gpr_24; // @[GPR.scala 25:20]
  reg [63:0] gpr_25; // @[GPR.scala 25:20]
  reg [63:0] gpr_26; // @[GPR.scala 25:20]
  reg [63:0] gpr_27; // @[GPR.scala 25:20]
  reg [63:0] gpr_28; // @[GPR.scala 25:20]
  reg [63:0] gpr_29; // @[GPR.scala 25:20]
  reg [63:0] gpr_30; // @[GPR.scala 25:20]
  reg [63:0] gpr_31; // @[GPR.scala 25:20]
  wire [63:0] _GEN_1 = 5'h1 == io_r_idx_r1 ? gpr_1 : 64'h0; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_2 = 5'h2 == io_r_idx_r1 ? gpr_2 : _GEN_1; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_3 = 5'h3 == io_r_idx_r1 ? gpr_3 : _GEN_2; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_4 = 5'h4 == io_r_idx_r1 ? gpr_4 : _GEN_3; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_5 = 5'h5 == io_r_idx_r1 ? gpr_5 : _GEN_4; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_6 = 5'h6 == io_r_idx_r1 ? gpr_6 : _GEN_5; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_7 = 5'h7 == io_r_idx_r1 ? gpr_7 : _GEN_6; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_8 = 5'h8 == io_r_idx_r1 ? gpr_8 : _GEN_7; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_9 = 5'h9 == io_r_idx_r1 ? gpr_9 : _GEN_8; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_10 = 5'ha == io_r_idx_r1 ? gpr_10 : _GEN_9; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_11 = 5'hb == io_r_idx_r1 ? gpr_11 : _GEN_10; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_12 = 5'hc == io_r_idx_r1 ? gpr_12 : _GEN_11; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_13 = 5'hd == io_r_idx_r1 ? gpr_13 : _GEN_12; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_14 = 5'he == io_r_idx_r1 ? gpr_14 : _GEN_13; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_15 = 5'hf == io_r_idx_r1 ? gpr_15 : _GEN_14; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_16 = 5'h10 == io_r_idx_r1 ? gpr_16 : _GEN_15; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_17 = 5'h11 == io_r_idx_r1 ? gpr_17 : _GEN_16; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_18 = 5'h12 == io_r_idx_r1 ? gpr_18 : _GEN_17; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_19 = 5'h13 == io_r_idx_r1 ? gpr_19 : _GEN_18; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_20 = 5'h14 == io_r_idx_r1 ? gpr_20 : _GEN_19; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_21 = 5'h15 == io_r_idx_r1 ? gpr_21 : _GEN_20; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_22 = 5'h16 == io_r_idx_r1 ? gpr_22 : _GEN_21; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_23 = 5'h17 == io_r_idx_r1 ? gpr_23 : _GEN_22; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_24 = 5'h18 == io_r_idx_r1 ? gpr_24 : _GEN_23; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_25 = 5'h19 == io_r_idx_r1 ? gpr_25 : _GEN_24; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_26 = 5'h1a == io_r_idx_r1 ? gpr_26 : _GEN_25; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_27 = 5'h1b == io_r_idx_r1 ? gpr_27 : _GEN_26; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_28 = 5'h1c == io_r_idx_r1 ? gpr_28 : _GEN_27; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_29 = 5'h1d == io_r_idx_r1 ? gpr_29 : _GEN_28; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_30 = 5'h1e == io_r_idx_r1 ? gpr_30 : _GEN_29; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_31 = 5'h1f == io_r_idx_r1 ? gpr_31 : _GEN_30; // @[GPR.scala 26:21 GPR.scala 26:21]
  wire [63:0] _GEN_33 = 5'h1 == io_r_idx_r2 ? gpr_1 : 64'h0; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_34 = 5'h2 == io_r_idx_r2 ? gpr_2 : _GEN_33; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_35 = 5'h3 == io_r_idx_r2 ? gpr_3 : _GEN_34; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_36 = 5'h4 == io_r_idx_r2 ? gpr_4 : _GEN_35; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_37 = 5'h5 == io_r_idx_r2 ? gpr_5 : _GEN_36; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_38 = 5'h6 == io_r_idx_r2 ? gpr_6 : _GEN_37; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_39 = 5'h7 == io_r_idx_r2 ? gpr_7 : _GEN_38; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_40 = 5'h8 == io_r_idx_r2 ? gpr_8 : _GEN_39; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_41 = 5'h9 == io_r_idx_r2 ? gpr_9 : _GEN_40; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_42 = 5'ha == io_r_idx_r2 ? gpr_10 : _GEN_41; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_43 = 5'hb == io_r_idx_r2 ? gpr_11 : _GEN_42; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_44 = 5'hc == io_r_idx_r2 ? gpr_12 : _GEN_43; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_45 = 5'hd == io_r_idx_r2 ? gpr_13 : _GEN_44; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_46 = 5'he == io_r_idx_r2 ? gpr_14 : _GEN_45; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_47 = 5'hf == io_r_idx_r2 ? gpr_15 : _GEN_46; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_48 = 5'h10 == io_r_idx_r2 ? gpr_16 : _GEN_47; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_49 = 5'h11 == io_r_idx_r2 ? gpr_17 : _GEN_48; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_50 = 5'h12 == io_r_idx_r2 ? gpr_18 : _GEN_49; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_51 = 5'h13 == io_r_idx_r2 ? gpr_19 : _GEN_50; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_52 = 5'h14 == io_r_idx_r2 ? gpr_20 : _GEN_51; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_53 = 5'h15 == io_r_idx_r2 ? gpr_21 : _GEN_52; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_54 = 5'h16 == io_r_idx_r2 ? gpr_22 : _GEN_53; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_55 = 5'h17 == io_r_idx_r2 ? gpr_23 : _GEN_54; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_56 = 5'h18 == io_r_idx_r2 ? gpr_24 : _GEN_55; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_57 = 5'h19 == io_r_idx_r2 ? gpr_25 : _GEN_56; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_58 = 5'h1a == io_r_idx_r2 ? gpr_26 : _GEN_57; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_59 = 5'h1b == io_r_idx_r2 ? gpr_27 : _GEN_58; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_60 = 5'h1c == io_r_idx_r2 ? gpr_28 : _GEN_59; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_61 = 5'h1d == io_r_idx_r2 ? gpr_29 : _GEN_60; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_62 = 5'h1e == io_r_idx_r2 ? gpr_30 : _GEN_61; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_63 = 5'h1f == io_r_idx_r2 ? gpr_31 : _GEN_62; // @[GPR.scala 27:21 GPR.scala 27:21]
  wire [63:0] _GEN_65 = 5'h1 == io_w_idx_w ? gpr_1 : 64'h0; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_66 = 5'h2 == io_w_idx_w ? gpr_2 : _GEN_65; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_67 = 5'h3 == io_w_idx_w ? gpr_3 : _GEN_66; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_68 = 5'h4 == io_w_idx_w ? gpr_4 : _GEN_67; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_69 = 5'h5 == io_w_idx_w ? gpr_5 : _GEN_68; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_70 = 5'h6 == io_w_idx_w ? gpr_6 : _GEN_69; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_71 = 5'h7 == io_w_idx_w ? gpr_7 : _GEN_70; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_72 = 5'h8 == io_w_idx_w ? gpr_8 : _GEN_71; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_73 = 5'h9 == io_w_idx_w ? gpr_9 : _GEN_72; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_74 = 5'ha == io_w_idx_w ? gpr_10 : _GEN_73; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_75 = 5'hb == io_w_idx_w ? gpr_11 : _GEN_74; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_76 = 5'hc == io_w_idx_w ? gpr_12 : _GEN_75; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_77 = 5'hd == io_w_idx_w ? gpr_13 : _GEN_76; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_78 = 5'he == io_w_idx_w ? gpr_14 : _GEN_77; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_79 = 5'hf == io_w_idx_w ? gpr_15 : _GEN_78; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_80 = 5'h10 == io_w_idx_w ? gpr_16 : _GEN_79; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_81 = 5'h11 == io_w_idx_w ? gpr_17 : _GEN_80; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_82 = 5'h12 == io_w_idx_w ? gpr_18 : _GEN_81; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_83 = 5'h13 == io_w_idx_w ? gpr_19 : _GEN_82; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_84 = 5'h14 == io_w_idx_w ? gpr_20 : _GEN_83; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_85 = 5'h15 == io_w_idx_w ? gpr_21 : _GEN_84; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_86 = 5'h16 == io_w_idx_w ? gpr_22 : _GEN_85; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_87 = 5'h17 == io_w_idx_w ? gpr_23 : _GEN_86; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_88 = 5'h18 == io_w_idx_w ? gpr_24 : _GEN_87; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_89 = 5'h19 == io_w_idx_w ? gpr_25 : _GEN_88; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_90 = 5'h1a == io_w_idx_w ? gpr_26 : _GEN_89; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_91 = 5'h1b == io_w_idx_w ? gpr_27 : _GEN_90; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_92 = 5'h1c == io_w_idx_w ? gpr_28 : _GEN_91; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_93 = 5'h1d == io_w_idx_w ? gpr_29 : _GEN_92; // @[GPR.scala 28:25 GPR.scala 28:25]
  wire [63:0] _GEN_94 = 5'h1e == io_w_idx_w ? gpr_30 : _GEN_93; // @[GPR.scala 28:25 GPR.scala 28:25]
  print_gpr p ( // @[GPR.scala 31:17]
    .rf_0(p_rf_0),
    .rf_1(p_rf_1),
    .rf_2(p_rf_2),
    .rf_3(p_rf_3),
    .rf_4(p_rf_4),
    .rf_5(p_rf_5),
    .rf_6(p_rf_6),
    .rf_7(p_rf_7),
    .rf_8(p_rf_8),
    .rf_9(p_rf_9),
    .rf_10(p_rf_10),
    .rf_11(p_rf_11),
    .rf_12(p_rf_12),
    .rf_13(p_rf_13),
    .rf_14(p_rf_14),
    .rf_15(p_rf_15),
    .rf_16(p_rf_16),
    .rf_17(p_rf_17),
    .rf_18(p_rf_18),
    .rf_19(p_rf_19),
    .rf_20(p_rf_20),
    .rf_21(p_rf_21),
    .rf_22(p_rf_22),
    .rf_23(p_rf_23),
    .rf_24(p_rf_24),
    .rf_25(p_rf_25),
    .rf_26(p_rf_26),
    .rf_27(p_rf_27),
    .rf_28(p_rf_28),
    .rf_29(p_rf_29),
    .rf_30(p_rf_30),
    .rf_31(p_rf_31)
  );
  assign io_r_val_r1 = io_r_en_r1 ? _GEN_31 : 64'h0; // @[GPR.scala 26:21]
  assign io_r_val_r2 = io_r_en_r2 ? _GEN_63 : 64'h0; // @[GPR.scala 27:21]
  assign p_rf_0 = 64'h0; // @[GPR.scala 32:12]
  assign p_rf_1 = gpr_1; // @[GPR.scala 32:12]
  assign p_rf_2 = gpr_2; // @[GPR.scala 32:12]
  assign p_rf_3 = gpr_3; // @[GPR.scala 32:12]
  assign p_rf_4 = gpr_4; // @[GPR.scala 32:12]
  assign p_rf_5 = gpr_5; // @[GPR.scala 32:12]
  assign p_rf_6 = gpr_6; // @[GPR.scala 32:12]
  assign p_rf_7 = gpr_7; // @[GPR.scala 32:12]
  assign p_rf_8 = gpr_8; // @[GPR.scala 32:12]
  assign p_rf_9 = gpr_9; // @[GPR.scala 32:12]
  assign p_rf_10 = gpr_10; // @[GPR.scala 32:12]
  assign p_rf_11 = gpr_11; // @[GPR.scala 32:12]
  assign p_rf_12 = gpr_12; // @[GPR.scala 32:12]
  assign p_rf_13 = gpr_13; // @[GPR.scala 32:12]
  assign p_rf_14 = gpr_14; // @[GPR.scala 32:12]
  assign p_rf_15 = gpr_15; // @[GPR.scala 32:12]
  assign p_rf_16 = gpr_16; // @[GPR.scala 32:12]
  assign p_rf_17 = gpr_17; // @[GPR.scala 32:12]
  assign p_rf_18 = gpr_18; // @[GPR.scala 32:12]
  assign p_rf_19 = gpr_19; // @[GPR.scala 32:12]
  assign p_rf_20 = gpr_20; // @[GPR.scala 32:12]
  assign p_rf_21 = gpr_21; // @[GPR.scala 32:12]
  assign p_rf_22 = gpr_22; // @[GPR.scala 32:12]
  assign p_rf_23 = gpr_23; // @[GPR.scala 32:12]
  assign p_rf_24 = gpr_24; // @[GPR.scala 32:12]
  assign p_rf_25 = gpr_25; // @[GPR.scala 32:12]
  assign p_rf_26 = gpr_26; // @[GPR.scala 32:12]
  assign p_rf_27 = gpr_27; // @[GPR.scala 32:12]
  assign p_rf_28 = gpr_28; // @[GPR.scala 32:12]
  assign p_rf_29 = gpr_29; // @[GPR.scala 32:12]
  assign p_rf_30 = gpr_30; // @[GPR.scala 32:12]
  assign p_rf_31 = gpr_31; // @[GPR.scala 32:12]
  always @(posedge clock) begin
    if (reset) begin // @[GPR.scala 25:20]
      gpr_1 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_1 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_1 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_1 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_2 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h2 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_2 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_2 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_2 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_3 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h3 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_3 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_3 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_3 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_4 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h4 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_4 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_4 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_4 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_5 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h5 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_5 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_5 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_5 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_6 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h6 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_6 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_6 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_6 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_7 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h7 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_7 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_7 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_7 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_8 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h8 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_8 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_8 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_8 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_9 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h9 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_9 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_9 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_9 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_10 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'ha == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_10 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_10 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_10 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_11 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'hb == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_11 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_11 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_11 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_12 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'hc == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_12 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_12 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_12 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_13 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'hd == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_13 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_13 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_13 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_14 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'he == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_14 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_14 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_14 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_15 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'hf == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_15 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_15 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_15 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_16 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h10 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_16 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_16 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_16 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_17 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h11 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_17 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_17 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_17 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_18 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h12 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_18 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_18 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_18 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_19 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h13 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_19 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_19 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_19 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_20 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h14 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_20 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_20 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_20 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_21 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h15 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_21 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_21 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_21 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_22 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h16 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_22 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_22 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_22 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_23 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h17 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_23 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_23 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_23 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_24 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h18 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_24 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_24 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_24 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_25 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h19 == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_25 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_25 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_25 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_26 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1a == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_26 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_26 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_26 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_27 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1b == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_27 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_27 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_27 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_28 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1c == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_28 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_28 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_28 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_29 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1d == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_29 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_29 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_29 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_30 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1e == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_30 <= io_w_val_w;
      end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:25]
        gpr_30 <= gpr_31; // @[GPR.scala 28:25]
      end else begin
        gpr_30 <= _GEN_94;
      end
    end
    if (reset) begin // @[GPR.scala 25:20]
      gpr_31 <= 64'h0; // @[GPR.scala 25:20]
    end else if (5'h1f == io_w_idx_w) begin // @[GPR.scala 28:20]
      if (io_w_en_w) begin // @[GPR.scala 28:25]
        gpr_31 <= io_w_val_w;
      end else if (!(5'h1f == io_w_idx_w)) begin // @[GPR.scala 28:25]
        gpr_31 <= _GEN_94;
      end
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
  _RAND_0 = {2{`RANDOM}};
  gpr_1 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  gpr_2 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  gpr_3 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  gpr_4 = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  gpr_5 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  gpr_6 = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  gpr_7 = _RAND_6[63:0];
  _RAND_7 = {2{`RANDOM}};
  gpr_8 = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  gpr_9 = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  gpr_10 = _RAND_9[63:0];
  _RAND_10 = {2{`RANDOM}};
  gpr_11 = _RAND_10[63:0];
  _RAND_11 = {2{`RANDOM}};
  gpr_12 = _RAND_11[63:0];
  _RAND_12 = {2{`RANDOM}};
  gpr_13 = _RAND_12[63:0];
  _RAND_13 = {2{`RANDOM}};
  gpr_14 = _RAND_13[63:0];
  _RAND_14 = {2{`RANDOM}};
  gpr_15 = _RAND_14[63:0];
  _RAND_15 = {2{`RANDOM}};
  gpr_16 = _RAND_15[63:0];
  _RAND_16 = {2{`RANDOM}};
  gpr_17 = _RAND_16[63:0];
  _RAND_17 = {2{`RANDOM}};
  gpr_18 = _RAND_17[63:0];
  _RAND_18 = {2{`RANDOM}};
  gpr_19 = _RAND_18[63:0];
  _RAND_19 = {2{`RANDOM}};
  gpr_20 = _RAND_19[63:0];
  _RAND_20 = {2{`RANDOM}};
  gpr_21 = _RAND_20[63:0];
  _RAND_21 = {2{`RANDOM}};
  gpr_22 = _RAND_21[63:0];
  _RAND_22 = {2{`RANDOM}};
  gpr_23 = _RAND_22[63:0];
  _RAND_23 = {2{`RANDOM}};
  gpr_24 = _RAND_23[63:0];
  _RAND_24 = {2{`RANDOM}};
  gpr_25 = _RAND_24[63:0];
  _RAND_25 = {2{`RANDOM}};
  gpr_26 = _RAND_25[63:0];
  _RAND_26 = {2{`RANDOM}};
  gpr_27 = _RAND_26[63:0];
  _RAND_27 = {2{`RANDOM}};
  gpr_28 = _RAND_27[63:0];
  _RAND_28 = {2{`RANDOM}};
  gpr_29 = _RAND_28[63:0];
  _RAND_29 = {2{`RANDOM}};
  gpr_30 = _RAND_29[63:0];
  _RAND_30 = {2{`RANDOM}};
  gpr_31 = _RAND_30[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module CSR(
  input         clock,
  input         reset,
  input  [11:0] io_idx_w,
  input  [11:0] io_idx_r,
  input         io_en_w,
  input         io_en_r,
  input  [63:0] io_val_w,
  output [63:0] io_val_r,
  input  [63:0] io_no,
  input  [63:0] io_epc
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] p_rf_0; // @[CSR.scala 42:17]
  wire [63:0] p_rf_1; // @[CSR.scala 42:17]
  wire [63:0] p_rf_2; // @[CSR.scala 42:17]
  wire [63:0] p_rf_3; // @[CSR.scala 42:17]
  reg [63:0] csr_0; // @[CSR.scala 18:20]
  reg [63:0] csr_1; // @[CSR.scala 18:20]
  reg [63:0] csr_2; // @[CSR.scala 18:20]
  reg [63:0] csr_3; // @[CSR.scala 18:20]
  wire [1:0] _map_r_T_4 = io_idx_r == 12'h342 ? 2'h3 : 2'h0; // @[CSR.scala 25:15]
  wire [1:0] _map_r_T_5 = io_idx_r == 12'h341 ? 2'h2 : _map_r_T_4; // @[CSR.scala 24:15]
  wire [1:0] _map_r_T_6 = io_idx_r == 12'h305 ? 2'h1 : _map_r_T_5; // @[CSR.scala 23:15]
  wire [1:0] map_r = io_idx_r == 12'h300 ? 2'h0 : _map_r_T_6; // @[CSR.scala 22:15]
  wire [1:0] _map_w_T_4 = io_idx_w == 12'h342 ? 2'h3 : 2'h0; // @[CSR.scala 31:15]
  wire [1:0] _map_w_T_5 = io_idx_w == 12'h341 ? 2'h2 : _map_w_T_4; // @[CSR.scala 30:15]
  wire [1:0] _map_w_T_6 = io_idx_w == 12'h305 ? 2'h1 : _map_w_T_5; // @[CSR.scala 29:15]
  wire [1:0] map_w = io_idx_w == 12'h300 ? 2'h0 : _map_w_T_6; // @[CSR.scala 28:15]
  wire  _csr_2_T = io_no == 64'h1; // @[CSR.scala 34:22]
  wire [63:0] _GEN_1 = 2'h1 == map_r ? csr_1 : csr_0; // @[CSR.scala 38:18 CSR.scala 38:18]
  wire [63:0] _GEN_2 = 2'h2 == map_r ? csr_2 : _GEN_1; // @[CSR.scala 38:18 CSR.scala 38:18]
  wire [63:0] _GEN_3 = 2'h3 == map_r ? csr_3 : _GEN_2; // @[CSR.scala 38:18 CSR.scala 38:18]
  wire [63:0] _io_val_r_T_3 = io_en_r ? _GEN_3 : 64'h0; // @[CSR.scala 38:18]
  wire [63:0] _io_val_r_T_4 = io_no == 64'h2 ? csr_2 : _io_val_r_T_3; // @[CSR.scala 37:18]
  wire [63:0] _GEN_5 = 2'h1 == map_w ? csr_1 : csr_0; // @[CSR.scala 40:20 CSR.scala 40:20]
  wire [63:0] _GEN_6 = 2'h2 == map_w ? csr_2 : _GEN_5; // @[CSR.scala 40:20 CSR.scala 40:20]
  print_csr p ( // @[CSR.scala 42:17]
    .rf_0(p_rf_0),
    .rf_1(p_rf_1),
    .rf_2(p_rf_2),
    .rf_3(p_rf_3)
  );
  assign io_val_r = _csr_2_T ? csr_1 : _io_val_r_T_4; // @[CSR.scala 36:18]
  assign p_rf_0 = csr_0; // @[CSR.scala 43:12]
  assign p_rf_1 = csr_1; // @[CSR.scala 43:12]
  assign p_rf_2 = csr_2; // @[CSR.scala 43:12]
  assign p_rf_3 = csr_3; // @[CSR.scala 43:12]
  always @(posedge clock) begin
    if (reset) begin // @[CSR.scala 18:20]
      csr_0 <= 64'ha00001800; // @[CSR.scala 18:20]
    end else if (2'h0 == map_w) begin // @[CSR.scala 40:15]
      if (io_en_w) begin // @[CSR.scala 40:20]
        csr_0 <= io_val_w;
      end else if (2'h3 == map_w) begin // @[CSR.scala 40:20]
        csr_0 <= csr_3; // @[CSR.scala 40:20]
      end else begin
        csr_0 <= _GEN_6;
      end
    end
    if (reset) begin // @[CSR.scala 18:20]
      csr_1 <= 64'h0; // @[CSR.scala 18:20]
    end else if (2'h1 == map_w) begin // @[CSR.scala 40:15]
      if (io_en_w) begin // @[CSR.scala 40:20]
        csr_1 <= io_val_w;
      end else if (2'h3 == map_w) begin // @[CSR.scala 40:20]
        csr_1 <= csr_3; // @[CSR.scala 40:20]
      end else begin
        csr_1 <= _GEN_6;
      end
    end
    if (reset) begin // @[CSR.scala 18:20]
      csr_2 <= 64'h0; // @[CSR.scala 18:20]
    end else if (2'h2 == map_w) begin // @[CSR.scala 40:15]
      if (io_en_w) begin // @[CSR.scala 40:20]
        csr_2 <= io_val_w;
      end else if (2'h3 == map_w) begin // @[CSR.scala 40:20]
        csr_2 <= csr_3; // @[CSR.scala 40:20]
      end else begin
        csr_2 <= _GEN_6;
      end
    end else if (io_no == 64'h1) begin // @[CSR.scala 34:16]
      csr_2 <= io_epc;
    end
    if (reset) begin // @[CSR.scala 18:20]
      csr_3 <= 64'h0; // @[CSR.scala 18:20]
    end else if (2'h3 == map_w) begin // @[CSR.scala 40:15]
      if (io_en_w) begin // @[CSR.scala 40:20]
        csr_3 <= io_val_w;
      end else if (!(2'h3 == map_w)) begin // @[CSR.scala 40:20]
        csr_3 <= _GEN_6;
      end
    end else if (_csr_2_T) begin // @[CSR.scala 35:16]
      csr_3 <= 64'hb;
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
  _RAND_0 = {2{`RANDOM}};
  csr_0 = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  csr_1 = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  csr_2 = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  csr_3 = _RAND_3[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module top(
  input         clock,
  input         reset,
  output [63:0] io_pc
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  sram_clock; // @[top.scala 10:20]
  wire  sram_reset; // @[top.scala 10:20]
  wire  sram_io_ar_ready; // @[top.scala 10:20]
  wire  sram_io_ar_valid; // @[top.scala 10:20]
  wire [31:0] sram_io_ar_bits_addr; // @[top.scala 10:20]
  wire  sram_io_r_ready; // @[top.scala 10:20]
  wire  sram_io_r_valid; // @[top.scala 10:20]
  wire [63:0] sram_io_r_bits_data; // @[top.scala 10:20]
  wire  sram_io_aw_ready; // @[top.scala 10:20]
  wire  sram_io_aw_valid; // @[top.scala 10:20]
  wire [31:0] sram_io_aw_bits_addr; // @[top.scala 10:20]
  wire  sram_io_w_ready; // @[top.scala 10:20]
  wire  sram_io_w_valid; // @[top.scala 10:20]
  wire [63:0] sram_io_w_bits_data; // @[top.scala 10:20]
  wire [7:0] sram_io_w_bits_strb; // @[top.scala 10:20]
  wire  sram2_clock; // @[top.scala 11:21]
  wire  sram2_reset; // @[top.scala 11:21]
  wire  sram2_io_ar_ready; // @[top.scala 11:21]
  wire  sram2_io_ar_valid; // @[top.scala 11:21]
  wire [31:0] sram2_io_ar_bits_addr; // @[top.scala 11:21]
  wire  sram2_io_r_ready; // @[top.scala 11:21]
  wire  sram2_io_r_valid; // @[top.scala 11:21]
  wire [63:0] sram2_io_r_bits_data; // @[top.scala 11:21]
  wire  sram2_io_aw_ready; // @[top.scala 11:21]
  wire  sram2_io_aw_valid; // @[top.scala 11:21]
  wire [31:0] sram2_io_aw_bits_addr; // @[top.scala 11:21]
  wire  sram2_io_w_ready; // @[top.scala 11:21]
  wire  sram2_io_w_valid; // @[top.scala 11:21]
  wire [63:0] sram2_io_w_bits_data; // @[top.scala 11:21]
  wire [7:0] sram2_io_w_bits_strb; // @[top.scala 11:21]
  wire  ifu_clock; // @[top.scala 13:19]
  wire  ifu_reset; // @[top.scala 13:19]
  wire [63:0] ifu_io_pc; // @[top.scala 13:19]
  wire  ifu_io_lm_ar_ready; // @[top.scala 13:19]
  wire  ifu_io_lm_ar_valid; // @[top.scala 13:19]
  wire [31:0] ifu_io_lm_ar_bits_addr; // @[top.scala 13:19]
  wire  ifu_io_lm_r_ready; // @[top.scala 13:19]
  wire  ifu_io_lm_r_valid; // @[top.scala 13:19]
  wire [63:0] ifu_io_lm_r_bits_data; // @[top.scala 13:19]
  wire  ifu_io_out_valid; // @[top.scala 13:19]
  wire [31:0] ifu_io_out_bits_inst; // @[top.scala 13:19]
  wire  idu_io_in_ready; // @[top.scala 14:19]
  wire  idu_io_in_valid; // @[top.scala 14:19]
  wire [31:0] idu_io_in_bits_inst; // @[top.scala 14:19]
  wire  idu_io_out_valid; // @[top.scala 14:19]
  wire [4:0] idu_io_out_bits_rs1; // @[top.scala 14:19]
  wire [4:0] idu_io_out_bits_rs2; // @[top.scala 14:19]
  wire [4:0] idu_io_out_bits_rd; // @[top.scala 14:19]
  wire [63:0] idu_io_out_bits_imm; // @[top.scala 14:19]
  wire [79:0] idu_io_out_bits_op; // @[top.scala 14:19]
  wire [5:0] idu_io_out_bits_typ; // @[top.scala 14:19]
  wire  exu_clock; // @[top.scala 15:19]
  wire  exu_reset; // @[top.scala 15:19]
  wire  exu_io_in_ready; // @[top.scala 15:19]
  wire  exu_io_in_valid; // @[top.scala 15:19]
  wire [4:0] exu_io_in_bits_rs1; // @[top.scala 15:19]
  wire [4:0] exu_io_in_bits_rs2; // @[top.scala 15:19]
  wire [4:0] exu_io_in_bits_rd; // @[top.scala 15:19]
  wire [63:0] exu_io_in_bits_imm; // @[top.scala 15:19]
  wire [79:0] exu_io_in_bits_op; // @[top.scala 15:19]
  wire [5:0] exu_io_in_bits_typ; // @[top.scala 15:19]
  wire  exu_io_out_ready; // @[top.scala 15:19]
  wire  exu_io_out_valid; // @[top.scala 15:19]
  wire [31:0] exu_io_out_bits_pin_raddr; // @[top.scala 15:19]
  wire [31:0] exu_io_out_bits_pin_waddr; // @[top.scala 15:19]
  wire [63:0] exu_io_out_bits_pin_wdata; // @[top.scala 15:19]
  wire [7:0] exu_io_out_bits_pin_wmask; // @[top.scala 15:19]
  wire [4:0] exu_io_out_bits_idx_w; // @[top.scala 15:19]
  wire  exu_io_out_bits_en_w; // @[top.scala 15:19]
  wire [79:0] exu_io_out_bits_op; // @[top.scala 15:19]
  wire [63:0] exu_io_out_bits_val_w; // @[top.scala 15:19]
  wire [4:0] exu_io_gpr_idx_r1; // @[top.scala 15:19]
  wire [4:0] exu_io_gpr_idx_r2; // @[top.scala 15:19]
  wire  exu_io_gpr_en_r1; // @[top.scala 15:19]
  wire  exu_io_gpr_en_r2; // @[top.scala 15:19]
  wire [63:0] exu_io_gpr_val_r1; // @[top.scala 15:19]
  wire [63:0] exu_io_gpr_val_r2; // @[top.scala 15:19]
  wire [63:0] exu_io_pc; // @[top.scala 15:19]
  wire [11:0] exu_io_csr_idx_w; // @[top.scala 15:19]
  wire [11:0] exu_io_csr_idx_r; // @[top.scala 15:19]
  wire  exu_io_csr_en_w; // @[top.scala 15:19]
  wire  exu_io_csr_en_r; // @[top.scala 15:19]
  wire [63:0] exu_io_csr_val_w; // @[top.scala 15:19]
  wire [63:0] exu_io_csr_val_r; // @[top.scala 15:19]
  wire [63:0] exu_io_csr_no; // @[top.scala 15:19]
  wire [63:0] exu_io_csr_epc; // @[top.scala 15:19]
  wire [63:0] exu_io_pc_dnpc; // @[top.scala 15:19]
  wire  lsu_clock; // @[top.scala 16:19]
  wire  lsu_reset; // @[top.scala 16:19]
  wire  lsu_io_in_ready; // @[top.scala 16:19]
  wire  lsu_io_in_valid; // @[top.scala 16:19]
  wire [31:0] lsu_io_in_bits_pin_raddr; // @[top.scala 16:19]
  wire [31:0] lsu_io_in_bits_pin_waddr; // @[top.scala 16:19]
  wire [63:0] lsu_io_in_bits_pin_wdata; // @[top.scala 16:19]
  wire [7:0] lsu_io_in_bits_pin_wmask; // @[top.scala 16:19]
  wire [4:0] lsu_io_in_bits_idx_w; // @[top.scala 16:19]
  wire  lsu_io_in_bits_en_w; // @[top.scala 16:19]
  wire [79:0] lsu_io_in_bits_op; // @[top.scala 16:19]
  wire [63:0] lsu_io_in_bits_val_w; // @[top.scala 16:19]
  wire  lsu_io_lm_ar_ready; // @[top.scala 16:19]
  wire  lsu_io_lm_ar_valid; // @[top.scala 16:19]
  wire [31:0] lsu_io_lm_ar_bits_addr; // @[top.scala 16:19]
  wire  lsu_io_lm_r_ready; // @[top.scala 16:19]
  wire  lsu_io_lm_r_valid; // @[top.scala 16:19]
  wire [63:0] lsu_io_lm_r_bits_data; // @[top.scala 16:19]
  wire  lsu_io_lm_aw_ready; // @[top.scala 16:19]
  wire  lsu_io_lm_aw_valid; // @[top.scala 16:19]
  wire [31:0] lsu_io_lm_aw_bits_addr; // @[top.scala 16:19]
  wire  lsu_io_lm_w_ready; // @[top.scala 16:19]
  wire  lsu_io_lm_w_valid; // @[top.scala 16:19]
  wire [63:0] lsu_io_lm_w_bits_data; // @[top.scala 16:19]
  wire [7:0] lsu_io_lm_w_bits_strb; // @[top.scala 16:19]
  wire [4:0] lsu_io_gpr_idx_w; // @[top.scala 16:19]
  wire  lsu_io_gpr_en_w; // @[top.scala 16:19]
  wire [63:0] lsu_io_gpr_val_w; // @[top.scala 16:19]
  wire [63:0] it_pc; // @[top.scala 17:18]
  wire  it_in_ready; // @[top.scala 17:18]
  wire  it_in_valid; // @[top.scala 17:18]
  wire [31:0] it_in_bits_inst; // @[top.scala 17:18]
  wire  gpr_clock; // @[top.scala 18:19]
  wire  gpr_reset; // @[top.scala 18:19]
  wire [4:0] gpr_io_r_idx_r1; // @[top.scala 18:19]
  wire [4:0] gpr_io_r_idx_r2; // @[top.scala 18:19]
  wire  gpr_io_r_en_r1; // @[top.scala 18:19]
  wire  gpr_io_r_en_r2; // @[top.scala 18:19]
  wire [63:0] gpr_io_r_val_r1; // @[top.scala 18:19]
  wire [63:0] gpr_io_r_val_r2; // @[top.scala 18:19]
  wire [4:0] gpr_io_w_idx_w; // @[top.scala 18:19]
  wire  gpr_io_w_en_w; // @[top.scala 18:19]
  wire [63:0] gpr_io_w_val_w; // @[top.scala 18:19]
  wire  csr_clock; // @[top.scala 19:19]
  wire  csr_reset; // @[top.scala 19:19]
  wire [11:0] csr_io_idx_w; // @[top.scala 19:19]
  wire [11:0] csr_io_idx_r; // @[top.scala 19:19]
  wire  csr_io_en_w; // @[top.scala 19:19]
  wire  csr_io_en_r; // @[top.scala 19:19]
  wire [63:0] csr_io_val_w; // @[top.scala 19:19]
  wire [63:0] csr_io_val_r; // @[top.scala 19:19]
  wire [63:0] csr_io_no; // @[top.scala 19:19]
  wire [63:0] csr_io_epc; // @[top.scala 19:19]
  reg [63:0] pc; // @[top.scala 9:19]
  AXILiteSRAM sram ( // @[top.scala 10:20]
    .clock(sram_clock),
    .reset(sram_reset),
    .io_ar_ready(sram_io_ar_ready),
    .io_ar_valid(sram_io_ar_valid),
    .io_ar_bits_addr(sram_io_ar_bits_addr),
    .io_r_ready(sram_io_r_ready),
    .io_r_valid(sram_io_r_valid),
    .io_r_bits_data(sram_io_r_bits_data),
    .io_aw_ready(sram_io_aw_ready),
    .io_aw_valid(sram_io_aw_valid),
    .io_aw_bits_addr(sram_io_aw_bits_addr),
    .io_w_ready(sram_io_w_ready),
    .io_w_valid(sram_io_w_valid),
    .io_w_bits_data(sram_io_w_bits_data),
    .io_w_bits_strb(sram_io_w_bits_strb)
  );
  AXILiteSRAM sram2 ( // @[top.scala 11:21]
    .clock(sram2_clock),
    .reset(sram2_reset),
    .io_ar_ready(sram2_io_ar_ready),
    .io_ar_valid(sram2_io_ar_valid),
    .io_ar_bits_addr(sram2_io_ar_bits_addr),
    .io_r_ready(sram2_io_r_ready),
    .io_r_valid(sram2_io_r_valid),
    .io_r_bits_data(sram2_io_r_bits_data),
    .io_aw_ready(sram2_io_aw_ready),
    .io_aw_valid(sram2_io_aw_valid),
    .io_aw_bits_addr(sram2_io_aw_bits_addr),
    .io_w_ready(sram2_io_w_ready),
    .io_w_valid(sram2_io_w_valid),
    .io_w_bits_data(sram2_io_w_bits_data),
    .io_w_bits_strb(sram2_io_w_bits_strb)
  );
  IFU ifu ( // @[top.scala 13:19]
    .clock(ifu_clock),
    .reset(ifu_reset),
    .io_pc(ifu_io_pc),
    .io_lm_ar_ready(ifu_io_lm_ar_ready),
    .io_lm_ar_valid(ifu_io_lm_ar_valid),
    .io_lm_ar_bits_addr(ifu_io_lm_ar_bits_addr),
    .io_lm_r_ready(ifu_io_lm_r_ready),
    .io_lm_r_valid(ifu_io_lm_r_valid),
    .io_lm_r_bits_data(ifu_io_lm_r_bits_data),
    .io_out_valid(ifu_io_out_valid),
    .io_out_bits_inst(ifu_io_out_bits_inst)
  );
  IDU idu ( // @[top.scala 14:19]
    .io_in_ready(idu_io_in_ready),
    .io_in_valid(idu_io_in_valid),
    .io_in_bits_inst(idu_io_in_bits_inst),
    .io_out_valid(idu_io_out_valid),
    .io_out_bits_rs1(idu_io_out_bits_rs1),
    .io_out_bits_rs2(idu_io_out_bits_rs2),
    .io_out_bits_rd(idu_io_out_bits_rd),
    .io_out_bits_imm(idu_io_out_bits_imm),
    .io_out_bits_op(idu_io_out_bits_op),
    .io_out_bits_typ(idu_io_out_bits_typ)
  );
  EXU exu ( // @[top.scala 15:19]
    .clock(exu_clock),
    .reset(exu_reset),
    .io_in_ready(exu_io_in_ready),
    .io_in_valid(exu_io_in_valid),
    .io_in_bits_rs1(exu_io_in_bits_rs1),
    .io_in_bits_rs2(exu_io_in_bits_rs2),
    .io_in_bits_rd(exu_io_in_bits_rd),
    .io_in_bits_imm(exu_io_in_bits_imm),
    .io_in_bits_op(exu_io_in_bits_op),
    .io_in_bits_typ(exu_io_in_bits_typ),
    .io_out_ready(exu_io_out_ready),
    .io_out_valid(exu_io_out_valid),
    .io_out_bits_pin_raddr(exu_io_out_bits_pin_raddr),
    .io_out_bits_pin_waddr(exu_io_out_bits_pin_waddr),
    .io_out_bits_pin_wdata(exu_io_out_bits_pin_wdata),
    .io_out_bits_pin_wmask(exu_io_out_bits_pin_wmask),
    .io_out_bits_idx_w(exu_io_out_bits_idx_w),
    .io_out_bits_en_w(exu_io_out_bits_en_w),
    .io_out_bits_op(exu_io_out_bits_op),
    .io_out_bits_val_w(exu_io_out_bits_val_w),
    .io_gpr_idx_r1(exu_io_gpr_idx_r1),
    .io_gpr_idx_r2(exu_io_gpr_idx_r2),
    .io_gpr_en_r1(exu_io_gpr_en_r1),
    .io_gpr_en_r2(exu_io_gpr_en_r2),
    .io_gpr_val_r1(exu_io_gpr_val_r1),
    .io_gpr_val_r2(exu_io_gpr_val_r2),
    .io_pc(exu_io_pc),
    .io_csr_idx_w(exu_io_csr_idx_w),
    .io_csr_idx_r(exu_io_csr_idx_r),
    .io_csr_en_w(exu_io_csr_en_w),
    .io_csr_en_r(exu_io_csr_en_r),
    .io_csr_val_w(exu_io_csr_val_w),
    .io_csr_val_r(exu_io_csr_val_r),
    .io_csr_no(exu_io_csr_no),
    .io_csr_epc(exu_io_csr_epc),
    .io_pc_dnpc(exu_io_pc_dnpc)
  );
  LSU lsu ( // @[top.scala 16:19]
    .clock(lsu_clock),
    .reset(lsu_reset),
    .io_in_ready(lsu_io_in_ready),
    .io_in_valid(lsu_io_in_valid),
    .io_in_bits_pin_raddr(lsu_io_in_bits_pin_raddr),
    .io_in_bits_pin_waddr(lsu_io_in_bits_pin_waddr),
    .io_in_bits_pin_wdata(lsu_io_in_bits_pin_wdata),
    .io_in_bits_pin_wmask(lsu_io_in_bits_pin_wmask),
    .io_in_bits_idx_w(lsu_io_in_bits_idx_w),
    .io_in_bits_en_w(lsu_io_in_bits_en_w),
    .io_in_bits_op(lsu_io_in_bits_op),
    .io_in_bits_val_w(lsu_io_in_bits_val_w),
    .io_lm_ar_ready(lsu_io_lm_ar_ready),
    .io_lm_ar_valid(lsu_io_lm_ar_valid),
    .io_lm_ar_bits_addr(lsu_io_lm_ar_bits_addr),
    .io_lm_r_ready(lsu_io_lm_r_ready),
    .io_lm_r_valid(lsu_io_lm_r_valid),
    .io_lm_r_bits_data(lsu_io_lm_r_bits_data),
    .io_lm_aw_ready(lsu_io_lm_aw_ready),
    .io_lm_aw_valid(lsu_io_lm_aw_valid),
    .io_lm_aw_bits_addr(lsu_io_lm_aw_bits_addr),
    .io_lm_w_ready(lsu_io_lm_w_ready),
    .io_lm_w_valid(lsu_io_lm_w_valid),
    .io_lm_w_bits_data(lsu_io_lm_w_bits_data),
    .io_lm_w_bits_strb(lsu_io_lm_w_bits_strb),
    .io_gpr_idx_w(lsu_io_gpr_idx_w),
    .io_gpr_en_w(lsu_io_gpr_en_w),
    .io_gpr_val_w(lsu_io_gpr_val_w)
  );
  itrace it ( // @[top.scala 17:18]
    .pc(it_pc),
    .in_ready(it_in_ready),
    .in_valid(it_in_valid),
    .in_bits_inst(it_in_bits_inst)
  );
  GPR gpr ( // @[top.scala 18:19]
    .clock(gpr_clock),
    .reset(gpr_reset),
    .io_r_idx_r1(gpr_io_r_idx_r1),
    .io_r_idx_r2(gpr_io_r_idx_r2),
    .io_r_en_r1(gpr_io_r_en_r1),
    .io_r_en_r2(gpr_io_r_en_r2),
    .io_r_val_r1(gpr_io_r_val_r1),
    .io_r_val_r2(gpr_io_r_val_r2),
    .io_w_idx_w(gpr_io_w_idx_w),
    .io_w_en_w(gpr_io_w_en_w),
    .io_w_val_w(gpr_io_w_val_w)
  );
  CSR csr ( // @[top.scala 19:19]
    .clock(csr_clock),
    .reset(csr_reset),
    .io_idx_w(csr_io_idx_w),
    .io_idx_r(csr_io_idx_r),
    .io_en_w(csr_io_en_w),
    .io_en_r(csr_io_en_r),
    .io_val_w(csr_io_val_w),
    .io_val_r(csr_io_val_r),
    .io_no(csr_io_no),
    .io_epc(csr_io_epc)
  );
  assign io_pc = pc; // @[top.scala 37:10]
  assign sram_clock = clock;
  assign sram_reset = reset;
  assign sram_io_ar_valid = ifu_io_lm_ar_valid; // @[top.scala 23:14]
  assign sram_io_ar_bits_addr = ifu_io_lm_ar_bits_addr; // @[top.scala 23:14]
  assign sram_io_r_ready = ifu_io_lm_r_ready; // @[top.scala 23:14]
  assign sram_io_aw_valid = 1'h0; // @[top.scala 23:14]
  assign sram_io_aw_bits_addr = 32'h0; // @[top.scala 23:14]
  assign sram_io_w_valid = 1'h0; // @[top.scala 23:14]
  assign sram_io_w_bits_data = 64'h0; // @[top.scala 23:14]
  assign sram_io_w_bits_strb = 8'h0; // @[top.scala 23:14]
  assign sram2_clock = clock;
  assign sram2_reset = reset;
  assign sram2_io_ar_valid = lsu_io_lm_ar_valid; // @[top.scala 30:14]
  assign sram2_io_ar_bits_addr = lsu_io_lm_ar_bits_addr; // @[top.scala 30:14]
  assign sram2_io_r_ready = lsu_io_lm_r_ready; // @[top.scala 30:14]
  assign sram2_io_aw_valid = lsu_io_lm_aw_valid; // @[top.scala 30:14]
  assign sram2_io_aw_bits_addr = lsu_io_lm_aw_bits_addr; // @[top.scala 30:14]
  assign sram2_io_w_valid = lsu_io_lm_w_valid; // @[top.scala 30:14]
  assign sram2_io_w_bits_data = lsu_io_lm_w_bits_data; // @[top.scala 30:14]
  assign sram2_io_w_bits_strb = lsu_io_lm_w_bits_strb; // @[top.scala 30:14]
  assign ifu_clock = clock;
  assign ifu_reset = reset;
  assign ifu_io_pc = pc; // @[top.scala 21:14]
  assign ifu_io_lm_ar_ready = sram_io_ar_ready; // @[top.scala 23:14]
  assign ifu_io_lm_r_valid = sram_io_r_valid; // @[top.scala 23:14]
  assign ifu_io_lm_r_bits_data = sram_io_r_bits_data; // @[top.scala 23:14]
  assign idu_io_in_valid = ifu_io_out_valid; // @[top.scala 25:14]
  assign idu_io_in_bits_inst = ifu_io_out_bits_inst; // @[top.scala 25:14]
  assign exu_clock = clock;
  assign exu_reset = reset;
  assign exu_io_in_valid = idu_io_out_valid; // @[top.scala 26:14]
  assign exu_io_in_bits_rs1 = idu_io_out_bits_rs1; // @[top.scala 26:14]
  assign exu_io_in_bits_rs2 = idu_io_out_bits_rs2; // @[top.scala 26:14]
  assign exu_io_in_bits_rd = idu_io_out_bits_rd; // @[top.scala 26:14]
  assign exu_io_in_bits_imm = idu_io_out_bits_imm; // @[top.scala 26:14]
  assign exu_io_in_bits_op = idu_io_out_bits_op; // @[top.scala 26:14]
  assign exu_io_in_bits_typ = idu_io_out_bits_typ; // @[top.scala 26:14]
  assign exu_io_out_ready = lsu_io_in_ready; // @[top.scala 29:14]
  assign exu_io_gpr_val_r1 = gpr_io_r_val_r1; // @[top.scala 27:15]
  assign exu_io_gpr_val_r2 = gpr_io_r_val_r2; // @[top.scala 27:15]
  assign exu_io_pc = pc; // @[top.scala 33:14]
  assign exu_io_csr_val_r = csr_io_val_r; // @[top.scala 28:15]
  assign lsu_clock = clock;
  assign lsu_reset = reset;
  assign lsu_io_in_valid = exu_io_out_valid; // @[top.scala 29:14]
  assign lsu_io_in_bits_pin_raddr = exu_io_out_bits_pin_raddr; // @[top.scala 29:14]
  assign lsu_io_in_bits_pin_waddr = exu_io_out_bits_pin_waddr; // @[top.scala 29:14]
  assign lsu_io_in_bits_pin_wdata = exu_io_out_bits_pin_wdata; // @[top.scala 29:14]
  assign lsu_io_in_bits_pin_wmask = exu_io_out_bits_pin_wmask; // @[top.scala 29:14]
  assign lsu_io_in_bits_idx_w = exu_io_out_bits_idx_w; // @[top.scala 29:14]
  assign lsu_io_in_bits_en_w = exu_io_out_bits_en_w; // @[top.scala 29:14]
  assign lsu_io_in_bits_op = exu_io_out_bits_op; // @[top.scala 29:14]
  assign lsu_io_in_bits_val_w = exu_io_out_bits_val_w; // @[top.scala 29:14]
  assign lsu_io_lm_ar_ready = sram2_io_ar_ready; // @[top.scala 30:14]
  assign lsu_io_lm_r_valid = sram2_io_r_valid; // @[top.scala 30:14]
  assign lsu_io_lm_r_bits_data = sram2_io_r_bits_data; // @[top.scala 30:14]
  assign lsu_io_lm_aw_ready = sram2_io_aw_ready; // @[top.scala 30:14]
  assign lsu_io_lm_w_ready = sram2_io_w_ready; // @[top.scala 30:14]
  assign it_pc = pc; // @[top.scala 22:13]
  assign it_in_valid = ifu_io_out_valid; // @[top.scala 24:13]
  assign it_in_bits_inst = ifu_io_out_bits_inst; // @[top.scala 24:13]
  assign gpr_clock = clock;
  assign gpr_reset = reset;
  assign gpr_io_r_idx_r1 = exu_io_gpr_idx_r1; // @[top.scala 27:15]
  assign gpr_io_r_idx_r2 = exu_io_gpr_idx_r2; // @[top.scala 27:15]
  assign gpr_io_r_en_r1 = exu_io_gpr_en_r1; // @[top.scala 27:15]
  assign gpr_io_r_en_r2 = exu_io_gpr_en_r2; // @[top.scala 27:15]
  assign gpr_io_w_idx_w = lsu_io_gpr_idx_w; // @[top.scala 31:15]
  assign gpr_io_w_en_w = lsu_io_gpr_en_w; // @[top.scala 31:15]
  assign gpr_io_w_val_w = lsu_io_gpr_val_w; // @[top.scala 31:15]
  assign csr_clock = clock;
  assign csr_reset = reset;
  assign csr_io_idx_w = exu_io_csr_idx_w; // @[top.scala 28:15]
  assign csr_io_idx_r = exu_io_csr_idx_r; // @[top.scala 28:15]
  assign csr_io_en_w = exu_io_csr_en_w; // @[top.scala 28:15]
  assign csr_io_en_r = exu_io_csr_en_r; // @[top.scala 28:15]
  assign csr_io_val_w = exu_io_csr_val_w; // @[top.scala 28:15]
  assign csr_io_no = exu_io_csr_no; // @[top.scala 28:15]
  assign csr_io_epc = exu_io_csr_epc; // @[top.scala 28:15]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 9:19]
      pc <= 64'h80000000; // @[top.scala 9:19]
    end else if (reset) begin // @[top.scala 35:12]
      pc <= 64'h80000000;
    end else begin
      pc <= exu_io_pc_dnpc;
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
  _RAND_0 = {2{`RANDOM}};
  pc = _RAND_0[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

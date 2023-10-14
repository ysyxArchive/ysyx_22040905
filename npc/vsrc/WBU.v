module WBU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_pc,
  input  [63:0] io_in_bits_pc_dnpc,
  input  [4:0]  io_in_bits_gpr_idx_w,
  input         io_in_bits_gpr_en_w,
  input  [63:0] io_in_bits_gpr_val_w,
  input         io_in_bits_csr_en_w,
  input  [11:0] io_in_bits_csr_idx_w,
  input  [63:0] io_in_bits_csr_val_w,
  input  [63:0] io_in_bits_csr_no,
  input  [63:0] io_in_bits_csr_epc,
  input         io_in_bits_isJump,
  input  [4:0]  io_in_bits_clearidx,
  output [4:0]  io_gpr_idx_w,
  output        io_gpr_en_w,
  output [63:0] io_gpr_val_w,
  output        io_csr_en_w,
  output [11:0] io_csr_idx_w,
  output [63:0] io_csr_val_w,
  output [63:0] io_csr_no,
  output [63:0] io_csr_epc,
  output [63:0] io_pc_dnpc,
  output        io_valid,
  output        io_isJump,
  output [4:0]  io_sb_clearidx
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [63:0] _RAND_7;
  reg [63:0] _RAND_8;
  reg [63:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
`endif // RANDOMIZE_REG_INIT
  wire  _WB_reg_pc_T = io_in_ready & io_in_valid; // @[Decoupled.scala 52:35]
  reg [31:0] WB_reg_pc; // @[Reg.scala 19:16]
  wire  _WB_reg_pc_dnpc_T_2 = _WB_reg_pc_T & io_in_bits_pc_dnpc != 64'h4; // @[WBU.scala 17:78]
  reg [31:0] WB_reg_pc_dnpc; // @[Reg.scala 35:20]
  wire [63:0] _GEN_2 = _WB_reg_pc_dnpc_T_2 ? io_in_bits_pc_dnpc : {{32'd0}, WB_reg_pc_dnpc}; // @[Reg.scala 36:18 35:20 36:22]
  reg  WB_reg_gpr_en_w; // @[Reg.scala 19:16]
  reg [4:0] WB_reg_gpr_idx_w; // @[Reg.scala 19:16]
  reg [63:0] WB_reg_gpr_val_w; // @[Reg.scala 19:16]
  reg  WB_reg_csr_en_w; // @[Reg.scala 19:16]
  reg [11:0] WB_reg_csr_idx_w; // @[Reg.scala 19:16]
  reg [63:0] WB_reg_csr_val_w; // @[Reg.scala 19:16]
  reg [63:0] WB_reg_csr_no; // @[Reg.scala 19:16]
  reg [63:0] WB_reg_csr_epc; // @[Reg.scala 19:16]
  wire  _WB_reg_valid_T_2 = _WB_reg_pc_T & io_in_bits_pc != 32'h0; // @[WBU.scala 26:43]
  reg  WB_reg_valid; // @[Reg.scala 35:20]
  reg  WB_reg_isJump; // @[Reg.scala 35:20]
  reg [4:0] WB_reg_clearidx; // @[Reg.scala 35:20]
  reg  state; // @[WBU.scala 32:24]
  wire [63:0] _GEN_14 = reset ? 64'h80000000 : _GEN_2; // @[Reg.scala 35:{20,20}]
  assign io_in_ready = 1'h1; // @[WBU.scala 39:16]
  assign io_gpr_idx_w = WB_reg_gpr_idx_w; // @[WBU.scala 42:17]
  assign io_gpr_en_w = WB_reg_gpr_en_w & state; // @[WBU.scala 41:34]
  assign io_gpr_val_w = WB_reg_gpr_val_w; // @[WBU.scala 43:17]
  assign io_csr_en_w = WB_reg_csr_en_w & state; // @[WBU.scala 45:34]
  assign io_csr_idx_w = WB_reg_csr_idx_w; // @[WBU.scala 46:17]
  assign io_csr_val_w = WB_reg_csr_val_w; // @[WBU.scala 47:17]
  assign io_csr_no = state ? WB_reg_csr_no : 64'h0; // @[WBU.scala 48:19]
  assign io_csr_epc = WB_reg_csr_epc; // @[WBU.scala 49:15]
  assign io_pc_dnpc = {{32'd0}, WB_reg_pc_dnpc}; // @[WBU.scala 51:15]
  assign io_valid = WB_reg_valid; // @[WBU.scala 52:13]
  assign io_isJump = WB_reg_isJump & state; // @[WBU.scala 37:30]
  assign io_sb_clearidx = state ? WB_reg_clearidx : 5'h0; // @[WBU.scala 54:24]
  always @(posedge clock) begin
    if (_WB_reg_pc_T) begin // @[Reg.scala 20:18]
      WB_reg_pc <= io_in_bits_pc; // @[Reg.scala 20:22]
    end
    WB_reg_pc_dnpc <= _GEN_14[31:0]; // @[Reg.scala 35:{20,20}]
    if (_WB_reg_pc_T) begin // @[Reg.scala 20:18]
      WB_reg_gpr_en_w <= io_in_bits_gpr_en_w; // @[Reg.scala 20:22]
    end
    if (_WB_reg_pc_T) begin // @[Reg.scala 20:18]
      WB_reg_gpr_idx_w <= io_in_bits_gpr_idx_w; // @[Reg.scala 20:22]
    end
    if (_WB_reg_pc_T) begin // @[Reg.scala 20:18]
      WB_reg_gpr_val_w <= io_in_bits_gpr_val_w; // @[Reg.scala 20:22]
    end
    if (_WB_reg_pc_T) begin // @[Reg.scala 20:18]
      WB_reg_csr_en_w <= io_in_bits_csr_en_w; // @[Reg.scala 20:22]
    end
    if (_WB_reg_pc_T) begin // @[Reg.scala 20:18]
      WB_reg_csr_idx_w <= io_in_bits_csr_idx_w; // @[Reg.scala 20:22]
    end
    if (_WB_reg_pc_T) begin // @[Reg.scala 20:18]
      WB_reg_csr_val_w <= io_in_bits_csr_val_w; // @[Reg.scala 20:22]
    end
    if (_WB_reg_pc_T) begin // @[Reg.scala 20:18]
      WB_reg_csr_no <= io_in_bits_csr_no; // @[Reg.scala 20:22]
    end
    if (_WB_reg_pc_T) begin // @[Reg.scala 20:18]
      WB_reg_csr_epc <= io_in_bits_csr_epc; // @[Reg.scala 20:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      WB_reg_valid <= 1'h0; // @[Reg.scala 35:20]
    end else begin
      WB_reg_valid <= _WB_reg_valid_T_2;
    end
    if (reset) begin // @[Reg.scala 35:20]
      WB_reg_isJump <= 1'h0; // @[Reg.scala 35:20]
    end else if (_WB_reg_pc_T) begin // @[Reg.scala 36:18]
      WB_reg_isJump <= io_in_bits_isJump; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      WB_reg_clearidx <= 5'h0; // @[Reg.scala 35:20]
    end else if (_WB_reg_pc_T) begin // @[Reg.scala 36:18]
      WB_reg_clearidx <= io_in_bits_clearidx; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[WBU.scala 32:24]
      state <= 1'h0; // @[WBU.scala 32:24]
    end else if (state) begin // @[Mux.scala 81:58]
      if (~_WB_reg_pc_T) begin // @[WBU.scala 35:26]
        state <= 1'h0;
      end else begin
        state <= 1'h1;
      end
    end else begin
      state <= _WB_reg_pc_T;
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
  WB_reg_pc = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  WB_reg_pc_dnpc = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  WB_reg_gpr_en_w = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  WB_reg_gpr_idx_w = _RAND_3[4:0];
  _RAND_4 = {2{`RANDOM}};
  WB_reg_gpr_val_w = _RAND_4[63:0];
  _RAND_5 = {1{`RANDOM}};
  WB_reg_csr_en_w = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  WB_reg_csr_idx_w = _RAND_6[11:0];
  _RAND_7 = {2{`RANDOM}};
  WB_reg_csr_val_w = _RAND_7[63:0];
  _RAND_8 = {2{`RANDOM}};
  WB_reg_csr_no = _RAND_8[63:0];
  _RAND_9 = {2{`RANDOM}};
  WB_reg_csr_epc = _RAND_9[63:0];
  _RAND_10 = {1{`RANDOM}};
  WB_reg_valid = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  WB_reg_isJump = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  WB_reg_clearidx = _RAND_12[4:0];
  _RAND_13 = {1{`RANDOM}};
  state = _RAND_13[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

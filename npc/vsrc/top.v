/* verilator lint_off WIDTH */
module AXI4SRAM(
  input         clock,
  input         reset,
  output        io_ar_ready,
  input         io_ar_valid,
  input  [31:0] io_ar_bits_addr,
  input  [2:0]  io_ar_bits_size,
  input  [3:0]  io_ar_bits_id,
  input         io_r_ready,
  output        io_r_valid,
  output [63:0] io_r_bits_data,
  output [3:0]  io_r_bits_id,
  output        io_aw_ready,
  input         io_aw_valid,
  input  [31:0] io_aw_bits_addr,
  output        io_w_ready,
  input         io_w_valid,
  input  [63:0] io_w_bits_data,
  input  [7:0]  io_w_bits_strb,
  input         io_w_bits_last,
  input         io_b_ready,
  output        io_b_valid
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
`endif // RANDOMIZE_REG_INIT
  wire [31:0] pmem_raddr; // @[SRAM.scala 137:19]
  wire [63:0] pmem_rdata; // @[SRAM.scala 137:19]
  wire [31:0] pmem_waddr; // @[SRAM.scala 137:19]
  wire [63:0] pmem_wdata; // @[SRAM.scala 137:19]
  wire [7:0] pmem_wmask; // @[SRAM.scala 137:19]
  reg  rstate; // @[SRAM.scala 78:23]
  wire  _rstate_T = io_ar_ready & io_ar_valid; // @[Decoupled.scala 52:35]
  reg [7:0] rcnt; // @[SRAM.scala 97:21]
  wire  _rlast_T_1 = io_r_ready & io_r_valid; // @[Decoupled.scala 52:35]
  wire  rlast = rcnt == 8'h0 & _rlast_T_1; // @[SRAM.scala 116:25]
  wire  _rstate_T_4 = rlast & _rstate_T; // @[SRAM.scala 82:39]
  reg  wstate; // @[SRAM.scala 84:23]
  wire  _wstate_T = io_aw_ready & io_aw_valid; // @[Decoupled.scala 52:35]
  wire  _wstate_T_1 = io_w_ready & io_w_valid; // @[Decoupled.scala 52:35]
  wire  _wstate_T_2 = _wstate_T & _wstate_T_1; // @[SRAM.scala 86:36]
  wire  _wstate_T_4 = io_b_ready & io_b_valid; // @[Decoupled.scala 52:35]
  reg  rid; // @[SRAM.scala 91:18]
  reg [31:0] raddr; // @[SRAM.scala 92:20]
  reg [2:0] rsize; // @[SRAM.scala 94:20]
  reg [31:0] lower_bound_addr; // @[SRAM.scala 96:31]
  reg [7:0] beatcnt; // @[SRAM.scala 98:24]
  wire [3:0] _rid_T_1 = _rstate_T ? io_ar_bits_id : {{3'd0}, rid}; // @[SRAM.scala 100:13]
  wire [38:0] _lower_bound_addr_T_2 = 39'hffffffff << io_ar_bits_size; // @[SRAM.scala 101:95]
  wire [38:0] _GEN_0 = {{7'd0}, io_ar_bits_addr}; // @[SRAM.scala 101:52]
  wire [38:0] _lower_bound_addr_T_3 = _GEN_0 & _lower_bound_addr_T_2; // @[SRAM.scala 101:52]
  wire [38:0] _lower_bound_addr_T_4 = _rstate_T ? _lower_bound_addr_T_3 : {{7'd0}, lower_bound_addr}; // @[SRAM.scala 101:24]
  wire  _raddr_T_5 = beatcnt == 8'hff | beatcnt == 8'h0; // @[SRAM.scala 105:47]
  wire [38:0] _raddr_T_8 = 39'h1 << rsize; // @[SRAM.scala 106:45]
  wire [38:0] _GEN_1 = {{7'd0}, raddr}; // @[SRAM.scala 106:33]
  wire [38:0] _raddr_T_10 = _GEN_1 + _raddr_T_8; // @[SRAM.scala 106:33]
  wire [38:0] _raddr_T_11 = _rlast_T_1 ? _raddr_T_10 : {{7'd0}, raddr}; // @[SRAM.scala 106:15]
  wire [38:0] _raddr_T_12 = _rlast_T_1 & (beatcnt == 8'hff | beatcnt == 8'h0) ? {{7'd0}, lower_bound_addr} : _raddr_T_11
    ; // @[SRAM.scala 105:15]
  wire [38:0] _raddr_T_13 = rlast ? 39'h0 : _raddr_T_12; // @[SRAM.scala 104:15]
  wire [38:0] _raddr_T_14 = _rstate_T ? {{7'd0}, io_ar_bits_addr} : _raddr_T_13; // @[SRAM.scala 103:15]
  wire [7:0] _rcnt_T_7 = rcnt + 8'h1; // @[SRAM.scala 111:28]
  wire [7:0] _beatcnt_T_8 = beatcnt + 8'h1; // @[SRAM.scala 114:41]
  wire [7:0] _beatcnt_T_9 = rstate ? _beatcnt_T_8 : 8'h0; // @[SRAM.scala 114:15]
  wire [7:0] _beatcnt_T_10 = _raddr_T_5 ? 8'h0 : _beatcnt_T_9; // @[SRAM.scala 113:15]
  wire [31:0] _beatcnt_T_11 = _rstate_T ? 32'h0 : {{24'd0}, _beatcnt_T_10}; // @[SRAM.scala 112:15]
  reg [31:0] waddr; // @[SRAM.scala 123:22]
  reg [2:0] wsize; // @[SRAM.scala 126:22]
  wire [38:0] _waddr_T_5 = 39'h1 << wsize; // @[SRAM.scala 133:41]
  wire [38:0] _GEN_2 = {{7'd0}, waddr}; // @[SRAM.scala 133:30]
  wire [38:0] _waddr_T_7 = _GEN_2 + _waddr_T_5; // @[SRAM.scala 133:30]
  wire [38:0] _waddr_T_8 = _wstate_T_1 ? _waddr_T_7 : {{7'd0}, waddr}; // @[SRAM.scala 133:13]
  wire [38:0] _waddr_T_9 = io_w_bits_last ? 39'h0 : _waddr_T_8; // @[SRAM.scala 132:13]
  wire [38:0] _waddr_T_10 = _wstate_T & ~wstate ? {{7'd0}, io_aw_bits_addr} : _waddr_T_9; // @[SRAM.scala 131:13]
  reg  b; // @[SRAM.scala 153:16]
  wire [7:0] _T_2 = 8'h1 << rsize; // @[SRAM.scala 161:55]
  wire [15:0] _T_3 = 8'h1 * _T_2; // @[SRAM.scala 161:50]
  wire [31:0] _GEN_3 = {{16'd0}, _T_3}; // @[SRAM.scala 161:38]
  wire [31:0] _T_5 = lower_bound_addr + _GEN_3; // @[SRAM.scala 161:38]
  wire [3:0] _GEN_4 = reset ? 4'h0 : _rid_T_1; // @[SRAM.scala 91:{18,18} 100:7]
  wire [38:0] _GEN_5 = reset ? 39'h0 : _raddr_T_14; // @[SRAM.scala 92:{20,20} 103:9]
  wire [38:0] _GEN_6 = reset ? 39'h0 : _lower_bound_addr_T_4; // @[SRAM.scala 101:19 96:{31,31}]
  wire [31:0] _GEN_7 = reset ? 32'h0 : _beatcnt_T_11; // @[SRAM.scala 112:10 98:{24,24}]
  wire [38:0] _GEN_9 = reset ? 39'h0 : _waddr_T_10; // @[SRAM.scala 123:{22,22} 131:8]
  memory pmem ( // @[SRAM.scala 137:19]
    .raddr(pmem_raddr),
    .rdata(pmem_rdata),
    .waddr(pmem_waddr),
    .wdata(pmem_wdata),
    .wmask(pmem_wmask)
  );
  assign io_ar_ready = ~rstate | rlast & rstate; // @[SRAM.scala 143:38]
  assign io_r_valid = rstate; // @[SRAM.scala 144:26]
  assign io_r_bits_data = pmem_rdata; // @[SRAM.scala 148:18]
  assign io_r_bits_id = {{3'd0}, rid}; // @[SRAM.scala 149:16]
  assign io_aw_ready = ~wstate; // @[SRAM.scala 146:26]
  assign io_w_ready = ~wstate; // @[SRAM.scala 147:26]
  assign io_b_valid = b; // @[SRAM.scala 155:14]
  assign pmem_raddr = raddr; // @[SRAM.scala 138:16]
  assign pmem_waddr = waddr; // @[SRAM.scala 139:16]
  assign pmem_wdata = io_w_bits_data; // @[SRAM.scala 140:16]
  assign pmem_wmask = _wstate_T_4 ? io_w_bits_strb : 8'h0; // @[SRAM.scala 141:22]
  always @(posedge clock) begin
    if (reset) begin // @[SRAM.scala 78:23]
      rstate <= 1'h0; // @[SRAM.scala 78:23]
    end else if (rstate) begin // @[Mux.scala 81:58]
      rstate <= _rstate_T_4;
    end else begin
      rstate <= _rstate_T;
    end
    if (reset) begin // @[SRAM.scala 97:21]
      rcnt <= 8'h0; // @[SRAM.scala 97:21]
    end else if (rcnt == 8'hff | rlast | _rstate_T) begin // @[SRAM.scala 110:12]
      rcnt <= 8'h0;
    end else if (_rlast_T_1) begin // @[SRAM.scala 111:12]
      rcnt <= _rcnt_T_7;
    end
    if (reset) begin // @[SRAM.scala 84:23]
      wstate <= 1'h0; // @[SRAM.scala 84:23]
    end else if (wstate) begin // @[Mux.scala 81:58]
      if (_wstate_T_4) begin // @[SRAM.scala 87:25]
        wstate <= 1'h0;
      end else begin
        wstate <= 1'h1;
      end
    end else begin
      wstate <= _wstate_T_2;
    end
    rid <= _GEN_4[0]; // @[SRAM.scala 91:{18,18} 100:7]
    raddr <= _GEN_5[31:0]; // @[SRAM.scala 92:{20,20} 103:9]
    if (reset) begin // @[SRAM.scala 94:20]
      rsize <= 3'h0; // @[SRAM.scala 94:20]
    end else if (_rstate_T) begin // @[SRAM.scala 108:15]
      rsize <= io_ar_bits_size;
    end
    lower_bound_addr <= _GEN_6[31:0]; // @[SRAM.scala 101:19 96:{31,31}]
    beatcnt <= _GEN_7[7:0]; // @[SRAM.scala 112:10 98:{24,24}]
    waddr <= _GEN_9[31:0]; // @[SRAM.scala 123:{22,22} 131:8]
    if (reset) begin // @[SRAM.scala 126:22]
      wsize <= 3'h0; // @[SRAM.scala 126:22]
    end else if (_wstate_T) begin // @[SRAM.scala 130:13]
      wsize <= 3'h3;
    end
    if (reset) begin // @[SRAM.scala 153:16]
      b <= 1'h0; // @[SRAM.scala 153:16]
    end else begin
      b <= io_w_bits_last; // @[SRAM.scala 154:4]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(raddr < _T_5 & raddr >= lower_bound_addr | raddr == 32'h0)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at SRAM.scala:161 assert(((raddr <  lower_bound_addr + (rlen+1.U)*(1.U<<rsize )) && (raddr >= lower_bound_addr)) || (raddr === 0.U))\n"
            ); // @[SRAM.scala 161:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~reset & ~(raddr < _T_5 & raddr >= lower_bound_addr | raddr == 32'h0)) begin
          $fatal; // @[SRAM.scala 161:9]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
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
  rcnt = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  wstate = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  rid = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  raddr = _RAND_4[31:0];
  _RAND_5 = {1{`RANDOM}};
  rsize = _RAND_5[2:0];
  _RAND_6 = {1{`RANDOM}};
  lower_bound_addr = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  beatcnt = _RAND_7[7:0];
  _RAND_8 = {1{`RANDOM}};
  waddr = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  wsize = _RAND_9[2:0];
  _RAND_10 = {1{`RANDOM}};
  b = _RAND_10[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module Pre_Decode(
  input  [31:0] io_inst,
  output        io_jump
);
  wire  _io_jump_T_5 = io_inst[14:12] == 3'h0; // @[IFU.scala 83:51]
  wire  _io_jump_T_6 = io_inst[6:0] == 7'h67 & io_inst[14:12] == 3'h0; // @[IFU.scala 83:38]
  wire  _io_jump_T_7 = io_inst[6:0] == 7'h6f | _io_jump_T_6; // @[IFU.scala 82:64]
  wire  _io_jump_T_9 = io_inst[6:0] == 7'h63; // @[IFU.scala 84:22]
  wire  _io_jump_T_12 = io_inst[6:0] == 7'h63 & _io_jump_T_5; // @[IFU.scala 84:38]
  wire  _io_jump_T_13 = _io_jump_T_7 | _io_jump_T_12; // @[IFU.scala 83:64]
  wire  _io_jump_T_18 = _io_jump_T_9 & io_inst[14:12] == 3'h1; // @[IFU.scala 85:38]
  wire  _io_jump_T_19 = _io_jump_T_13 | _io_jump_T_18; // @[IFU.scala 84:64]
  wire  _io_jump_T_24 = _io_jump_T_9 & io_inst[14:12] == 3'h5; // @[IFU.scala 86:38]
  wire  _io_jump_T_25 = _io_jump_T_19 | _io_jump_T_24; // @[IFU.scala 85:64]
  wire  _io_jump_T_30 = _io_jump_T_9 & io_inst[14:12] == 3'h7; // @[IFU.scala 87:38]
  wire  _io_jump_T_31 = _io_jump_T_25 | _io_jump_T_30; // @[IFU.scala 86:64]
  wire  _io_jump_T_36 = _io_jump_T_9 & io_inst[14:12] == 3'h4; // @[IFU.scala 88:38]
  wire  _io_jump_T_37 = _io_jump_T_31 | _io_jump_T_36; // @[IFU.scala 87:64]
  wire  _io_jump_T_42 = _io_jump_T_9 & io_inst[14:12] == 3'h6; // @[IFU.scala 89:38]
  wire  _io_jump_T_43 = _io_jump_T_37 | _io_jump_T_42; // @[IFU.scala 88:64]
  wire  _io_jump_T_44 = io_inst == 32'h73; // @[IFU.scala 90:17]
  wire  _io_jump_T_45 = _io_jump_T_43 | _io_jump_T_44; // @[IFU.scala 89:64]
  wire  _io_jump_T_46 = io_inst == 32'h30200073; // @[IFU.scala 91:17]
  wire  _io_jump_T_47 = _io_jump_T_45 | _io_jump_T_46; // @[IFU.scala 90:64]
  wire  _io_jump_T_48 = io_inst == 32'h100073; // @[IFU.scala 92:17]
  assign io_jump = _io_jump_T_47 | _io_jump_T_48; // @[IFU.scala 91:64]
endmodule
module IFU(
  input         clock,
  input         reset,
  input  [63:0] io_pc_dnpc,
  input         io_clearJump,
  output        io_lm_ar_valid,
  output [31:0] io_lm_ar_bits_addr,
  input         io_lm_r_valid,
  input  [63:0] io_lm_r_bits_data,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  output        io_out_bits_isJump
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] pre_decode_io_inst; // @[IFU.scala 32:25]
  wire  pre_decode_io_jump; // @[IFU.scala 32:25]
  wire [63:0] it_pc; // @[IFU.scala 68:16]
  wire  it_en; // @[IFU.scala 68:16]
  wire [31:0] it_inst; // @[IFU.scala 68:16]
  reg  IF_reg_valid; // @[Reg.scala 35:20]
  wire  _next_valid_T_1 = io_out_ready & io_out_valid; // @[Decoupled.scala 52:35]
  wire  _next_valid_T_4 = pre_decode_io_jump & _next_valid_T_1 ? 1'h0 : IF_reg_valid; // @[IFU.scala 45:18]
  wire  next_valid = io_clearJump | _next_valid_T_4; // @[IFU.scala 44:18]
  reg [63:0] IF_reg_pc; // @[Reg.scala 35:20]
  wire [63:0] _next_pc_T_3 = IF_reg_pc + 64'h4; // @[IFU.scala 49:38]
  wire [63:0] _next_pc_T_4 = _next_valid_T_1 ? _next_pc_T_3 : IF_reg_pc; // @[IFU.scala 49:16]
  wire [63:0] next_pc = io_clearJump ? io_pc_dnpc : _next_pc_T_4; // @[IFU.scala 48:16]
  Pre_Decode pre_decode ( // @[IFU.scala 32:25]
    .io_inst(pre_decode_io_inst),
    .io_jump(pre_decode_io_jump)
  );
  itrace it ( // @[IFU.scala 68:16]
    .pc(it_pc),
    .en(it_en),
    .inst(it_inst)
  );
  assign io_lm_ar_valid = ~reset & next_valid; // @[IFU.scala 53:34]
  assign io_lm_ar_bits_addr = next_pc[31:0]; // @[IFU.scala 52:30]
  assign io_out_valid = io_lm_r_valid | ~IF_reg_valid; // @[IFU.scala 66:32]
  assign io_out_bits_pc = IF_reg_valid ? IF_reg_pc[31:0] : 32'h0; // @[IFU.scala 64:22]
  assign io_out_bits_inst = IF_reg_valid ? io_lm_r_bits_data[31:0] : 32'h13; // @[IFU.scala 63:24]
  assign io_out_bits_isJump = IF_reg_valid & pre_decode_io_jump; // @[IFU.scala 65:26]
  assign pre_decode_io_inst = io_lm_r_bits_data[31:0]; // @[IFU.scala 42:40]
  assign it_pc = {{32'd0}, IF_reg_pc[31:0]}; // @[IFU.scala 71:11]
  assign it_en = _next_valid_T_1 & IF_reg_valid; // @[IFU.scala 69:25]
  assign it_inst = io_lm_r_bits_data[31:0]; // @[IFU.scala 70:32]
  always @(posedge clock) begin
    IF_reg_valid <= reset | next_valid; // @[Reg.scala 35:{20,20}]
    if (reset) begin // @[Reg.scala 35:20]
      IF_reg_pc <= 64'h80000000; // @[Reg.scala 35:20]
    end else if (next_valid) begin // @[Reg.scala 36:18]
      if (io_clearJump) begin // @[IFU.scala 48:16]
        IF_reg_pc <= io_pc_dnpc;
      end else if (_next_valid_T_1) begin // @[IFU.scala 49:16]
        IF_reg_pc <= _next_pc_T_3;
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
  _RAND_0 = {1{`RANDOM}};
  IF_reg_valid = _RAND_0[0:0];
  _RAND_1 = {2{`RANDOM}};
  IF_reg_pc = _RAND_1[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module IDU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_pc,
  input  [31:0] io_in_bits_inst,
  input         io_in_bits_isJump,
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_pc,
  output [31:0] io_out_bits_inst,
  output [4:0]  io_out_bits_rs1,
  output [4:0]  io_out_bits_rs2,
  output [4:0]  io_out_bits_rd,
  output [63:0] io_out_bits_imm,
  output [79:0] io_out_bits_op,
  output [5:0]  io_out_bits_typ,
  output        io_out_bits_isJump,
  output [4:0]  io_out_bits_clearidx,
  output [4:0]  io_sb_lookidx1,
  output [4:0]  io_sb_lookidx2,
  output [4:0]  io_sb_setidx,
  input         io_sb_isBusy
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire  _ID_reg_inst_T = io_in_ready & io_in_valid; // @[Decoupled.scala 52:35]
  reg [31:0] ID_reg_inst; // @[Reg.scala 35:20]
  reg [31:0] ID_reg_pc; // @[Reg.scala 35:20]
  reg  ID_reg_isJump; // @[Reg.scala 35:20]
  wire  _io_out_bits_isJump_T_1 = ~io_sb_isBusy; // @[IDU.scala 30:28]
  reg  state; // @[IDU.scala 34:23]
  wire  _state_T_4 = state | _ID_reg_inst_T; // @[Mux.scala 81:58]
  wire  _op_t_0_T_1 = ID_reg_inst[6:0] == 7'h33; // @[IDU.scala 51:31]
  wire  _op_t_0_T_3 = ID_reg_inst[14:12] == 3'h0; // @[IDU.scala 51:67]
  wire  _op_t_0_T_4 = ID_reg_inst[6:0] == 7'h33 & ID_reg_inst[14:12] == 3'h0; // @[IDU.scala 51:47]
  wire  _op_t_0_T_6 = ID_reg_inst[31:25] == 7'h0; // @[IDU.scala 51:99]
  wire  op_t_0 = ID_reg_inst[6:0] == 7'h33 & ID_reg_inst[14:12] == 3'h0 & ID_reg_inst[31:25] == 7'h0; // @[IDU.scala 51:79]
  wire  _op_t_1_T_1 = ID_reg_inst[6:0] == 7'h3b; // @[IDU.scala 52:31]
  wire  _op_t_1_T_4 = ID_reg_inst[6:0] == 7'h3b & _op_t_0_T_3; // @[IDU.scala 52:47]
  wire  op_t_1 = ID_reg_inst[6:0] == 7'h3b & _op_t_0_T_3 & _op_t_0_T_6; // @[IDU.scala 52:79]
  wire  _op_t_2_T_1 = ID_reg_inst[6:0] == 7'h13; // @[IDU.scala 53:31]
  wire  op_t_2 = ID_reg_inst[6:0] == 7'h13 & _op_t_0_T_3; // @[IDU.scala 53:47]
  wire  _op_t_3_T_1 = ID_reg_inst[6:0] == 7'h1b; // @[IDU.scala 54:31]
  wire  op_t_3 = ID_reg_inst[6:0] == 7'h1b & _op_t_0_T_3; // @[IDU.scala 54:47]
  wire  _op_t_4_T_6 = ID_reg_inst[31:25] == 7'h20; // @[IDU.scala 55:99]
  wire  op_t_4 = _op_t_0_T_4 & ID_reg_inst[31:25] == 7'h20; // @[IDU.scala 55:79]
  wire  op_t_5 = _op_t_1_T_4 & _op_t_4_T_6; // @[IDU.scala 56:79]
  wire  _op_t_6_T_3 = ID_reg_inst[14:12] == 3'h7; // @[IDU.scala 57:67]
  wire  _op_t_6_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h7; // @[IDU.scala 57:47]
  wire  op_t_6 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h7 & _op_t_0_T_6; // @[IDU.scala 57:79]
  wire  op_t_7 = _op_t_2_T_1 & _op_t_6_T_3; // @[IDU.scala 58:47]
  wire  _op_t_8_T_3 = ID_reg_inst[14:12] == 3'h6; // @[IDU.scala 59:67]
  wire  _op_t_8_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h6; // @[IDU.scala 59:47]
  wire  op_t_8 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h6 & _op_t_0_T_6; // @[IDU.scala 59:79]
  wire  op_t_9 = _op_t_2_T_1 & _op_t_8_T_3; // @[IDU.scala 60:47]
  wire  _op_t_10_T_3 = ID_reg_inst[14:12] == 3'h4; // @[IDU.scala 61:67]
  wire  _op_t_10_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h4; // @[IDU.scala 61:47]
  wire  op_t_10 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h4 & _op_t_0_T_6; // @[IDU.scala 61:79]
  wire  op_t_11 = _op_t_2_T_1 & _op_t_10_T_3; // @[IDU.scala 62:47]
  wire  _op_t_12_T_3 = ID_reg_inst[14:12] == 3'h1; // @[IDU.scala 63:67]
  wire  _op_t_12_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h1; // @[IDU.scala 63:47]
  wire  op_t_12 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h1 & _op_t_0_T_6; // @[IDU.scala 63:79]
  wire  op_t_13 = _op_t_1_T_1 & _op_t_12_T_3 & _op_t_0_T_6; // @[IDU.scala 64:79]
  wire  _op_t_14_T_6 = ID_reg_inst[31:26] == 6'h0; // @[IDU.scala 65:99]
  wire  op_t_14 = _op_t_2_T_1 & _op_t_12_T_3 & ID_reg_inst[31:26] == 6'h0; // @[IDU.scala 65:79]
  wire  op_t_15 = _op_t_3_T_1 & _op_t_12_T_3 & _op_t_14_T_6; // @[IDU.scala 66:79]
  wire  _op_t_16_T_3 = ID_reg_inst[14:12] == 3'h5; // @[IDU.scala 67:67]
  wire  _op_t_16_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h5; // @[IDU.scala 67:47]
  wire  op_t_16 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h5 & _op_t_4_T_6; // @[IDU.scala 67:79]
  wire  _op_t_17_T_4 = _op_t_1_T_1 & _op_t_16_T_3; // @[IDU.scala 68:47]
  wire  op_t_17 = _op_t_1_T_1 & _op_t_16_T_3 & _op_t_4_T_6; // @[IDU.scala 68:79]
  wire  _op_t_18_T_4 = _op_t_2_T_1 & _op_t_16_T_3; // @[IDU.scala 69:47]
  wire  _op_t_18_T_6 = ID_reg_inst[31:26] == 6'h10; // @[IDU.scala 69:99]
  wire  op_t_18 = _op_t_2_T_1 & _op_t_16_T_3 & ID_reg_inst[31:26] == 6'h10; // @[IDU.scala 69:79]
  wire  _op_t_19_T_4 = _op_t_3_T_1 & _op_t_16_T_3; // @[IDU.scala 70:47]
  wire  op_t_19 = _op_t_3_T_1 & _op_t_16_T_3 & _op_t_18_T_6; // @[IDU.scala 70:79]
  wire  op_t_20 = _op_t_16_T_4 & _op_t_0_T_6; // @[IDU.scala 71:79]
  wire  op_t_21 = _op_t_17_T_4 & _op_t_0_T_6; // @[IDU.scala 72:79]
  wire  op_t_22 = _op_t_18_T_4 & _op_t_14_T_6; // @[IDU.scala 73:79]
  wire  op_t_23 = _op_t_19_T_4 & _op_t_14_T_6; // @[IDU.scala 74:79]
  wire  op_t_24 = ID_reg_inst[6:0] == 7'h37; // @[IDU.scala 75:31]
  wire  op_t_25 = ID_reg_inst[6:0] == 7'h17; // @[IDU.scala 76:31]
  wire  _op_t_26_T_3 = ID_reg_inst[14:12] == 3'h2; // @[IDU.scala 77:67]
  wire  _op_t_26_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h2; // @[IDU.scala 77:47]
  wire  op_t_26 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h2 & _op_t_0_T_6; // @[IDU.scala 77:79]
  wire  _op_t_27_T_3 = ID_reg_inst[14:12] == 3'h3; // @[IDU.scala 78:67]
  wire  _op_t_27_T_4 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h3; // @[IDU.scala 78:47]
  wire  op_t_27 = _op_t_0_T_1 & ID_reg_inst[14:12] == 3'h3 & _op_t_0_T_6; // @[IDU.scala 78:79]
  wire  op_t_28 = _op_t_2_T_1 & _op_t_26_T_3; // @[IDU.scala 79:47]
  wire  op_t_29 = _op_t_2_T_1 & _op_t_27_T_3; // @[IDU.scala 80:47]
  wire  _op_t_30_T_1 = ID_reg_inst[6:0] == 7'h63; // @[IDU.scala 81:31]
  wire  op_t_30 = ID_reg_inst[6:0] == 7'h63 & _op_t_0_T_3; // @[IDU.scala 81:47]
  wire  op_t_31 = _op_t_30_T_1 & _op_t_12_T_3; // @[IDU.scala 82:47]
  wire  op_t_32 = _op_t_30_T_1 & _op_t_16_T_3; // @[IDU.scala 83:47]
  wire  op_t_33 = _op_t_30_T_1 & _op_t_6_T_3; // @[IDU.scala 84:47]
  wire  op_t_34 = _op_t_30_T_1 & _op_t_10_T_3; // @[IDU.scala 85:47]
  wire  op_t_35 = _op_t_30_T_1 & _op_t_8_T_3; // @[IDU.scala 86:47]
  wire  op_t_36 = ID_reg_inst[6:0] == 7'h6f; // @[IDU.scala 87:31]
  wire  op_t_37 = ID_reg_inst[6:0] == 7'h67 & _op_t_0_T_3; // @[IDU.scala 88:47]
  wire  _op_t_38_T_1 = ID_reg_inst[6:0] == 7'h3; // @[IDU.scala 89:31]
  wire  op_t_38 = ID_reg_inst[6:0] == 7'h3 & _op_t_0_T_3; // @[IDU.scala 89:47]
  wire  op_t_39 = _op_t_38_T_1 & _op_t_12_T_3; // @[IDU.scala 90:47]
  wire  op_t_40 = _op_t_38_T_1 & _op_t_26_T_3; // @[IDU.scala 91:47]
  wire  op_t_41 = _op_t_38_T_1 & _op_t_27_T_3; // @[IDU.scala 92:47]
  wire  _op_t_42_T_1 = ID_reg_inst[6:0] == 7'h23; // @[IDU.scala 93:31]
  wire  op_t_42 = ID_reg_inst[6:0] == 7'h23 & _op_t_0_T_3; // @[IDU.scala 93:47]
  wire  op_t_43 = _op_t_42_T_1 & _op_t_12_T_3; // @[IDU.scala 94:47]
  wire  op_t_44 = _op_t_42_T_1 & _op_t_26_T_3; // @[IDU.scala 95:47]
  wire  op_t_45 = _op_t_42_T_1 & _op_t_27_T_3; // @[IDU.scala 96:47]
  wire  op_t_46 = _op_t_38_T_1 & _op_t_10_T_3; // @[IDU.scala 97:47]
  wire  op_t_47 = _op_t_38_T_1 & _op_t_16_T_3; // @[IDU.scala 98:47]
  wire  op_t_48 = _op_t_38_T_1 & _op_t_8_T_3; // @[IDU.scala 99:47]
  wire  op_t_49 = ID_reg_inst == 32'h100073; // @[IDU.scala 100:26]
  wire  _op_t_50_T_6 = ID_reg_inst[31:25] == 7'h1; // @[IDU.scala 103:99]
  wire  op_t_50 = _op_t_0_T_4 & ID_reg_inst[31:25] == 7'h1; // @[IDU.scala 103:79]
  wire  op_t_51 = _op_t_1_T_4 & _op_t_50_T_6; // @[IDU.scala 104:79]
  wire  op_t_52 = _op_t_12_T_4 & _op_t_50_T_6; // @[IDU.scala 105:79]
  wire  op_t_53 = _op_t_27_T_4 & _op_t_50_T_6; // @[IDU.scala 106:79]
  wire  op_t_54 = _op_t_26_T_4 & _op_t_50_T_6; // @[IDU.scala 107:79]
  wire  op_t_55 = _op_t_10_T_4 & _op_t_50_T_6; // @[IDU.scala 108:79]
  wire  op_t_56 = _op_t_1_T_1 & _op_t_10_T_3 & _op_t_50_T_6; // @[IDU.scala 109:79]
  wire  op_t_57 = _op_t_16_T_4 & _op_t_50_T_6; // @[IDU.scala 110:79]
  wire  op_t_58 = _op_t_17_T_4 & _op_t_50_T_6; // @[IDU.scala 111:79]
  wire  op_t_59 = _op_t_8_T_4 & _op_t_50_T_6; // @[IDU.scala 112:79]
  wire  op_t_60 = _op_t_1_T_1 & _op_t_8_T_3 & _op_t_50_T_6; // @[IDU.scala 113:79]
  wire  op_t_61 = _op_t_6_T_4 & _op_t_50_T_6; // @[IDU.scala 114:79]
  wire  op_t_62 = _op_t_1_T_1 & _op_t_6_T_3 & _op_t_50_T_6; // @[IDU.scala 115:79]
  wire  _op_t_63_T_1 = ID_reg_inst[6:0] == 7'h73; // @[IDU.scala 118:31]
  wire  op_t_63 = ID_reg_inst[6:0] == 7'h73 & _op_t_12_T_3; // @[IDU.scala 118:47]
  wire  op_t_64 = _op_t_63_T_1 & _op_t_26_T_3; // @[IDU.scala 119:47]
  wire  op_t_65 = ID_reg_inst == 32'h73; // @[IDU.scala 120:26]
  wire  op_t_66 = ID_reg_inst == 32'h30200073; // @[IDU.scala 121:26]
  wire [9:0] op_lo_lo_lo = {op_t_9,op_t_8,op_t_7,op_t_6,op_t_5,op_t_4,op_t_3,op_t_2,op_t_1,op_t_0}; // @[IDU.scala 124:13]
  wire [9:0] op_lo_lo_hi = {op_t_19,op_t_18,op_t_17,op_t_16,op_t_15,op_t_14,op_t_13,op_t_12,op_t_11,op_t_10}; // @[IDU.scala 124:13]
  wire [9:0] op_lo_hi_lo = {op_t_29,op_t_28,op_t_27,op_t_26,op_t_25,op_t_24,op_t_23,op_t_22,op_t_21,op_t_20}; // @[IDU.scala 124:13]
  wire [9:0] op_lo_hi_hi = {op_t_39,op_t_38,op_t_37,op_t_36,op_t_35,op_t_34,op_t_33,op_t_32,op_t_31,op_t_30}; // @[IDU.scala 124:13]
  wire [9:0] op_hi_lo_lo = {op_t_49,op_t_48,op_t_47,op_t_46,op_t_45,op_t_44,op_t_43,op_t_42,op_t_41,op_t_40}; // @[IDU.scala 124:13]
  wire [9:0] op_hi_lo_hi = {op_t_59,op_t_58,op_t_57,op_t_56,op_t_55,op_t_54,op_t_53,op_t_52,op_t_51,op_t_50}; // @[IDU.scala 124:13]
  wire [19:0] op_hi_lo = {op_hi_lo_hi,op_hi_lo_lo}; // @[IDU.scala 124:13]
  wire [39:0] op_hi = {10'h0,3'h0,op_t_66,op_t_65,op_t_64,op_t_63,op_t_62,op_t_61,op_t_60,op_hi_lo}; // @[IDU.scala 124:13]
  wire [79:0] op = {op_hi,op_lo_hi_hi,op_lo_hi_lo,op_lo_lo_hi,op_lo_lo_lo}; // @[IDU.scala 124:13]
  wire  _typ_t_0_T_30 = op[2] | op[3] | op[7] | op[9] | op[11] | op[14] | op[15] | op[18] | op[19] | op[22] | op[23] |
    op[28] | op[29] | op[37] | op[38] | op[39]; // @[IDU.scala 138:116]
  wire  typ_t_0 = _typ_t_0_T_30 | op[40] | op[41] | op[46] | op[47] | op[48] | op[63] | op[64]; // @[IDU.scala 138:165]
  wire  typ_t_1 = op[24] | op[25]; // @[IDU.scala 139:22]
  wire  typ_t_2 = op[42] | op[43] | op[44] | op[45]; // @[IDU.scala 140:36]
  wire  typ_t_3 = op[36]; // @[IDU.scala 141:18]
  wire  typ_t_4 = op[30] | op[31] | op[32] | op[33] | op[34] | op[35]; // @[IDU.scala 142:50]
  wire  _typ_t_5_T_30 = op[0] | op[1] | op[4] | op[5] | op[6] | op[8] | op[10] | op[12] | op[13] | op[16] | op[17] | op[
    20] | op[21] | op[26] | op[27] | op[50]; // @[IDU.scala 143:114]
  wire  typ_t_5 = _typ_t_5_T_30 | op[51] | op[52] | op[53] | op[54] | op[55] | op[56] | op[57] | op[58] | op[59] | op[60
    ] | op[61] | op[62]; // @[IDU.scala 143:198]
  wire [5:0] typ = {typ_t_5,typ_t_4,typ_t_3,typ_t_2,typ_t_1,typ_t_0}; // @[IDU.scala 145:15]
  wire [51:0] _io_out_bits_imm_T_3 = ID_reg_inst[31] ? 52'hfffffffffffff : 52'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_imm_T_5 = {_io_out_bits_imm_T_3,ID_reg_inst[31:20]}; // @[Cat.scala 33:92]
  wire [31:0] _io_out_bits_imm_T_9 = ID_reg_inst[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_imm_T_13 = {_io_out_bits_imm_T_9,ID_reg_inst[31:12],12'h0}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_imm_T_21 = {_io_out_bits_imm_T_3,ID_reg_inst[31:25],ID_reg_inst[11:7]}; // @[Cat.scala 33:92]
  wire [42:0] _io_out_bits_imm_T_25 = ID_reg_inst[31] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_imm_T_34 = {_io_out_bits_imm_T_25,ID_reg_inst[31],ID_reg_inst[19:12],ID_reg_inst[20],
    ID_reg_inst[30:21],1'h0}; // @[Cat.scala 33:92]
  wire [50:0] _io_out_bits_imm_T_38 = ID_reg_inst[31] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_imm_T_47 = {_io_out_bits_imm_T_38,ID_reg_inst[31],ID_reg_inst[7],ID_reg_inst[30:25],
    ID_reg_inst[11:8],1'h0}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_imm_T_48 = typ[4] ? _io_out_bits_imm_T_47 : 64'h0; // @[IDU.scala 154:25]
  wire [63:0] _io_out_bits_imm_T_49 = typ[3] ? _io_out_bits_imm_T_34 : _io_out_bits_imm_T_48; // @[IDU.scala 153:25]
  wire [63:0] _io_out_bits_imm_T_50 = typ[2] ? _io_out_bits_imm_T_21 : _io_out_bits_imm_T_49; // @[IDU.scala 152:25]
  wire [63:0] _io_out_bits_imm_T_51 = typ[1] ? _io_out_bits_imm_T_13 : _io_out_bits_imm_T_50; // @[IDU.scala 151:25]
  wire  _io_sb_setidx_T_7 = io_out_ready & io_out_valid; // @[Decoupled.scala 52:35]
  assign io_in_ready = _io_out_bits_isJump_T_1 & io_out_ready; // @[IDU.scala 42:25]
  assign io_out_valid = state & io_in_valid; // @[IDU.scala 43:43]
  assign io_out_bits_pc = _io_out_bits_isJump_T_1 ? ID_reg_pc : 32'h0; // @[IDU.scala 44:23]
  assign io_out_bits_inst = _io_out_bits_isJump_T_1 ? ID_reg_inst : 32'h13; // @[IDU.scala 45:25]
  assign io_out_bits_rs1 = _io_out_bits_isJump_T_1 ? ID_reg_inst[19:15] : 5'h0; // @[IDU.scala 128:24]
  assign io_out_bits_rs2 = _io_out_bits_isJump_T_1 ? ID_reg_inst[24:20] : 5'h0; // @[IDU.scala 129:24]
  assign io_out_bits_rd = _io_out_bits_isJump_T_1 ? ID_reg_inst[11:7] : 5'h0; // @[IDU.scala 127:23]
  assign io_out_bits_imm = typ[0] ? _io_out_bits_imm_T_5 : _io_out_bits_imm_T_51; // @[IDU.scala 150:25]
  assign io_out_bits_op = _io_out_bits_isJump_T_1 ? op : 80'h0; // @[IDU.scala 126:23]
  assign io_out_bits_typ = _io_out_bits_isJump_T_1 ? typ : 6'h0; // @[IDU.scala 147:24]
  assign io_out_bits_isJump = ~io_sb_isBusy & ID_reg_isJump; // @[IDU.scala 30:27]
  assign io_out_bits_clearidx = _io_out_bits_isJump_T_1 ? io_sb_setidx : 5'h0; // @[IDU.scala 161:29]
  assign io_sb_lookidx1 = typ[0] | typ[2] | typ[4] | typ[5] ? ID_reg_inst[19:15] : 5'h0; // @[IDU.scala 158:23]
  assign io_sb_lookidx2 = typ[2] | typ[4] | typ[5] ? ID_reg_inst[24:20] : 5'h0; // @[IDU.scala 159:23]
  assign io_sb_setidx = (typ[0] | typ[1] | typ[3] | typ[5]) & (_io_sb_setidx_T_7 & _ID_reg_inst_T) &
    _io_out_bits_isJump_T_1 ? ID_reg_inst[11:7] : 5'h0; // @[IDU.scala 160:21]
  always @(posedge clock) begin
    if (reset) begin // @[Reg.scala 35:20]
      ID_reg_inst <= 32'h0; // @[Reg.scala 35:20]
    end else if (_ID_reg_inst_T) begin // @[Reg.scala 36:18]
      ID_reg_inst <= io_in_bits_inst; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      ID_reg_pc <= 32'h0; // @[Reg.scala 35:20]
    end else if (_ID_reg_inst_T) begin // @[Reg.scala 36:18]
      ID_reg_pc <= io_in_bits_pc; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      ID_reg_isJump <= 1'h0; // @[Reg.scala 35:20]
    end else if (_ID_reg_inst_T) begin // @[Reg.scala 36:18]
      ID_reg_isJump <= io_in_bits_isJump; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[IDU.scala 34:23]
      state <= 1'h0; // @[IDU.scala 34:23]
    end else begin
      state <= _state_T_4; // @[IDU.scala 37:10]
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
  ID_reg_inst = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  ID_reg_pc = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  ID_reg_isJump = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  state = _RAND_3[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module LSU(
  input         clock,
  input         reset,
  input         io_ls_in_valid,
  input  [31:0] io_ls_in_bits_raddr,
  input  [31:0] io_ls_in_bits_waddr,
  input  [63:0] io_ls_in_bits_wdata,
  input  [7:0]  io_ls_in_bits_wmask,
  input         io_ls_out_ready,
  output        io_ls_out_valid,
  output [63:0] io_ls_out_bits_rdata,
  input         io_en_r,
  input         io_en_w,
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
  output        io_lm_b_ready,
  input         io_lm_b_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] rstate; // @[LSU.scala 14:23]
  wire  _rstate_T = io_lm_ar_ready & io_lm_ar_valid; // @[Decoupled.scala 52:35]
  wire  _rstate_T_2 = io_lm_r_ready & io_lm_r_valid; // @[Decoupled.scala 52:35]
  reg [1:0] wstate; // @[LSU.scala 19:23]
  wire  _wstate_T = io_lm_aw_ready & io_lm_aw_valid; // @[Decoupled.scala 52:35]
  wire  _wstate_T_1 = io_lm_w_ready & io_lm_w_valid; // @[Decoupled.scala 52:35]
  wire  _wstate_T_4 = io_lm_b_ready & io_lm_b_valid; // @[Decoupled.scala 52:35]
  wire  _io_lm_ar_valid_T_2 = ~reset; // @[LSU.scala 26:40]
  wire  _io_lm_aw_valid_T_4 = wstate == 2'h0 & _io_lm_ar_valid_T_2 & io_ls_in_valid; // @[LSU.scala 29:54]
  reg [63:0] rdata; // @[Reg.scala 35:20]
  assign io_ls_out_valid = _rstate_T_2 | _wstate_T_4; // @[LSU.scala 38:33]
  assign io_ls_out_bits_rdata = _rstate_T_2 ? io_lm_r_bits_data : rdata; // @[LSU.scala 37:28]
  assign io_lm_ar_valid = rstate == 2'h0 & ~reset & io_ls_in_valid & io_en_r; // @[LSU.scala 26:71]
  assign io_lm_ar_bits_addr = io_ls_in_bits_raddr; // @[LSU.scala 25:21]
  assign io_lm_r_ready = 1'h1; // @[LSU.scala 27:16]
  assign io_lm_aw_valid = wstate == 2'h0 & _io_lm_ar_valid_T_2 & io_ls_in_valid & io_en_w; // @[LSU.scala 29:71]
  assign io_lm_aw_bits_addr = io_ls_in_bits_waddr; // @[LSU.scala 28:21]
  assign io_lm_w_valid = _io_lm_aw_valid_T_4 & io_en_w; // @[LSU.scala 32:70]
  assign io_lm_w_bits_data = io_ls_in_bits_wdata; // @[LSU.scala 30:20]
  assign io_lm_w_bits_strb = io_ls_in_bits_wmask; // @[LSU.scala 31:20]
  assign io_lm_b_ready = 1'h1; // @[LSU.scala 33:16]
  always @(posedge clock) begin
    if (reset) begin // @[LSU.scala 14:23]
      rstate <= 2'h0; // @[LSU.scala 14:23]
    end else if (2'h1 == rstate) begin // @[Mux.scala 81:58]
      if (_rstate_T_2) begin // @[LSU.scala 17:19]
        rstate <= 2'h0;
      end else begin
        rstate <= 2'h1;
      end
    end else if (2'h0 == rstate) begin // @[Mux.scala 81:58]
      if (_rstate_T) begin // @[LSU.scala 16:19]
        rstate <= 2'h1;
      end else begin
        rstate <= 2'h0;
      end
    end else begin
      rstate <= 2'h0;
    end
    if (reset) begin // @[LSU.scala 19:23]
      wstate <= 2'h0; // @[LSU.scala 19:23]
    end else if (2'h1 == wstate) begin // @[Mux.scala 81:58]
      if (_wstate_T_4) begin // @[LSU.scala 22:19]
        wstate <= 2'h0;
      end else begin
        wstate <= 2'h1;
      end
    end else if (2'h0 == wstate) begin // @[Mux.scala 81:58]
      if (_wstate_T & _wstate_T_1) begin // @[LSU.scala 21:19]
        wstate <= 2'h1;
      end else begin
        wstate <= 2'h0;
      end
    end else begin
      wstate <= 2'h0;
    end
    if (reset) begin // @[Reg.scala 35:20]
      rdata <= 64'h0; // @[Reg.scala 35:20]
    end else if (_rstate_T_2) begin // @[Reg.scala 36:18]
      rdata <= io_lm_r_bits_data; // @[Reg.scala 36:22]
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
  rstate = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  wstate = _RAND_1[1:0];
  _RAND_2 = {2{`RANDOM}};
  rdata = _RAND_2[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module mul_cell(
  input          clock,
  input          reset,
  input          io_flush,
  input          io_valid,
  input  [128:0] io_a_in,
  input  [128:0] io_b_in,
  input  [128:0] io_sum_in,
  input          io_last,
  output [128:0] io_a_out,
  output [128:0] io_b_out,
  output [128:0] io_sum_out,
  output         io_ready,
  input  [63:0]  io_a,
  input  [63:0]  io_b,
  output [63:0]  io_A,
  output [63:0]  io_B
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [159:0] _RAND_2;
  reg [159:0] _RAND_3;
  reg [159:0] _RAND_4;
  reg [31:0] _RAND_5;
`endif // RANDOMIZE_REG_INIT
  reg [63:0] reg_a; // @[mul.scala 25:22]
  reg [63:0] reg_b; // @[mul.scala 26:22]
  reg [128:0] a_in; // @[mul.scala 36:22]
  reg [128:0] b_in; // @[mul.scala 37:22]
  reg [128:0] sum_in; // @[mul.scala 38:24]
  reg  valid; // @[mul.scala 39:22]
  wire [129:0] _io_a_out_T = {a_in, 1'h0}; // @[mul.scala 56:20]
  wire [128:0] _io_sum_out_T_4 = sum_in - a_in; // @[mul.scala 59:43]
  wire [128:0] _io_sum_out_T_6 = sum_in + a_in; // @[mul.scala 60:24]
  wire [128:0] _io_sum_out_T_7 = io_last ? _io_sum_out_T_4 : _io_sum_out_T_6; // @[mul.scala 59:20]
  assign io_a_out = _io_a_out_T[128:0]; // @[mul.scala 56:12]
  assign io_b_out = {{1'd0}, b_in[128:1]}; // @[mul.scala 57:20]
  assign io_sum_out = ~b_in[0] ? sum_in : _io_sum_out_T_7; // @[mul.scala 58:20]
  assign io_ready = valid; // @[mul.scala 61:12]
  assign io_A = reg_a; // @[mul.scala 33:8]
  assign io_B = reg_b; // @[mul.scala 34:8]
  always @(posedge clock) begin
    if (reset) begin // @[mul.scala 25:22]
      reg_a <= 64'h0; // @[mul.scala 25:22]
    end else if (io_flush) begin // @[mul.scala 27:16]
      reg_a <= 64'h0;
    end else if (io_valid) begin // @[mul.scala 28:15]
      reg_a <= io_a;
    end
    if (reset) begin // @[mul.scala 26:22]
      reg_b <= 64'h0; // @[mul.scala 26:22]
    end else if (io_flush) begin // @[mul.scala 30:16]
      reg_b <= 64'h0;
    end else if (io_valid) begin // @[mul.scala 31:15]
      reg_b <= io_b;
    end
    if (reset) begin // @[mul.scala 36:22]
      a_in <= 129'h0; // @[mul.scala 36:22]
    end else if (io_flush) begin // @[mul.scala 42:17]
      a_in <= 129'h0;
    end else if (io_valid) begin // @[mul.scala 43:16]
      a_in <= io_a_in;
    end
    if (reset) begin // @[mul.scala 37:22]
      b_in <= 129'h0; // @[mul.scala 37:22]
    end else if (io_flush) begin // @[mul.scala 46:17]
      b_in <= 129'h0;
    end else if (io_valid) begin // @[mul.scala 47:16]
      b_in <= io_b_in;
    end
    if (reset) begin // @[mul.scala 38:24]
      sum_in <= 129'h0; // @[mul.scala 38:24]
    end else if (io_flush) begin // @[mul.scala 50:17]
      sum_in <= 129'h0;
    end else if (io_valid) begin // @[mul.scala 51:16]
      sum_in <= io_sum_in;
    end
    if (reset) begin // @[mul.scala 39:22]
      valid <= 1'h0; // @[mul.scala 39:22]
    end else if (io_flush) begin // @[mul.scala 54:17]
      valid <= 1'h0;
    end else begin
      valid <= io_valid;
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
  reg_a = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  reg_b = _RAND_1[63:0];
  _RAND_2 = {5{`RANDOM}};
  a_in = _RAND_2[128:0];
  _RAND_3 = {5{`RANDOM}};
  b_in = _RAND_3[128:0];
  _RAND_4 = {5{`RANDOM}};
  sum_in = _RAND_4[128:0];
  _RAND_5 = {1{`RANDOM}};
  valid = _RAND_5[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module mul_pipe(
  input         clock,
  input         reset,
  input         io_mul_valid,
  input  [1:0]  io_mul_signed,
  input  [63:0] io_multiplicand,
  input  [63:0] io_multiplier,
  output        io_out_valid,
  output [63:0] io_result_lo
);
`ifdef RANDOMIZE_REG_INIT
  reg [159:0] _RAND_0;
  reg [159:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  cell_0_clock; // @[mul.scala 95:35]
  wire  cell_0_reset; // @[mul.scala 95:35]
  wire  cell_0_io_flush; // @[mul.scala 95:35]
  wire  cell_0_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_0_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_0_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_0_io_sum_in; // @[mul.scala 95:35]
  wire  cell_0_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_0_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_0_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_0_io_sum_out; // @[mul.scala 95:35]
  wire  cell_0_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_0_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_0_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_0_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_0_io_B; // @[mul.scala 95:35]
  wire  cell_1_clock; // @[mul.scala 95:35]
  wire  cell_1_reset; // @[mul.scala 95:35]
  wire  cell_1_io_flush; // @[mul.scala 95:35]
  wire  cell_1_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_1_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_1_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_1_io_sum_in; // @[mul.scala 95:35]
  wire  cell_1_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_1_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_1_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_1_io_sum_out; // @[mul.scala 95:35]
  wire  cell_1_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_1_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_1_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_1_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_1_io_B; // @[mul.scala 95:35]
  wire  cell_2_clock; // @[mul.scala 95:35]
  wire  cell_2_reset; // @[mul.scala 95:35]
  wire  cell_2_io_flush; // @[mul.scala 95:35]
  wire  cell_2_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_2_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_2_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_2_io_sum_in; // @[mul.scala 95:35]
  wire  cell_2_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_2_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_2_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_2_io_sum_out; // @[mul.scala 95:35]
  wire  cell_2_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_2_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_2_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_2_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_2_io_B; // @[mul.scala 95:35]
  wire  cell_3_clock; // @[mul.scala 95:35]
  wire  cell_3_reset; // @[mul.scala 95:35]
  wire  cell_3_io_flush; // @[mul.scala 95:35]
  wire  cell_3_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_3_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_3_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_3_io_sum_in; // @[mul.scala 95:35]
  wire  cell_3_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_3_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_3_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_3_io_sum_out; // @[mul.scala 95:35]
  wire  cell_3_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_3_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_3_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_3_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_3_io_B; // @[mul.scala 95:35]
  wire  cell_4_clock; // @[mul.scala 95:35]
  wire  cell_4_reset; // @[mul.scala 95:35]
  wire  cell_4_io_flush; // @[mul.scala 95:35]
  wire  cell_4_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_4_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_4_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_4_io_sum_in; // @[mul.scala 95:35]
  wire  cell_4_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_4_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_4_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_4_io_sum_out; // @[mul.scala 95:35]
  wire  cell_4_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_4_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_4_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_4_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_4_io_B; // @[mul.scala 95:35]
  wire  cell_5_clock; // @[mul.scala 95:35]
  wire  cell_5_reset; // @[mul.scala 95:35]
  wire  cell_5_io_flush; // @[mul.scala 95:35]
  wire  cell_5_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_5_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_5_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_5_io_sum_in; // @[mul.scala 95:35]
  wire  cell_5_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_5_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_5_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_5_io_sum_out; // @[mul.scala 95:35]
  wire  cell_5_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_5_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_5_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_5_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_5_io_B; // @[mul.scala 95:35]
  wire  cell_6_clock; // @[mul.scala 95:35]
  wire  cell_6_reset; // @[mul.scala 95:35]
  wire  cell_6_io_flush; // @[mul.scala 95:35]
  wire  cell_6_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_6_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_6_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_6_io_sum_in; // @[mul.scala 95:35]
  wire  cell_6_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_6_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_6_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_6_io_sum_out; // @[mul.scala 95:35]
  wire  cell_6_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_6_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_6_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_6_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_6_io_B; // @[mul.scala 95:35]
  wire  cell_7_clock; // @[mul.scala 95:35]
  wire  cell_7_reset; // @[mul.scala 95:35]
  wire  cell_7_io_flush; // @[mul.scala 95:35]
  wire  cell_7_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_7_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_7_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_7_io_sum_in; // @[mul.scala 95:35]
  wire  cell_7_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_7_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_7_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_7_io_sum_out; // @[mul.scala 95:35]
  wire  cell_7_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_7_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_7_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_7_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_7_io_B; // @[mul.scala 95:35]
  wire  cell_8_clock; // @[mul.scala 95:35]
  wire  cell_8_reset; // @[mul.scala 95:35]
  wire  cell_8_io_flush; // @[mul.scala 95:35]
  wire  cell_8_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_8_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_8_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_8_io_sum_in; // @[mul.scala 95:35]
  wire  cell_8_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_8_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_8_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_8_io_sum_out; // @[mul.scala 95:35]
  wire  cell_8_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_8_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_8_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_8_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_8_io_B; // @[mul.scala 95:35]
  wire  cell_9_clock; // @[mul.scala 95:35]
  wire  cell_9_reset; // @[mul.scala 95:35]
  wire  cell_9_io_flush; // @[mul.scala 95:35]
  wire  cell_9_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_9_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_9_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_9_io_sum_in; // @[mul.scala 95:35]
  wire  cell_9_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_9_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_9_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_9_io_sum_out; // @[mul.scala 95:35]
  wire  cell_9_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_9_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_9_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_9_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_9_io_B; // @[mul.scala 95:35]
  wire  cell_10_clock; // @[mul.scala 95:35]
  wire  cell_10_reset; // @[mul.scala 95:35]
  wire  cell_10_io_flush; // @[mul.scala 95:35]
  wire  cell_10_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_10_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_10_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_10_io_sum_in; // @[mul.scala 95:35]
  wire  cell_10_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_10_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_10_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_10_io_sum_out; // @[mul.scala 95:35]
  wire  cell_10_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_10_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_10_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_10_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_10_io_B; // @[mul.scala 95:35]
  wire  cell_11_clock; // @[mul.scala 95:35]
  wire  cell_11_reset; // @[mul.scala 95:35]
  wire  cell_11_io_flush; // @[mul.scala 95:35]
  wire  cell_11_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_11_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_11_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_11_io_sum_in; // @[mul.scala 95:35]
  wire  cell_11_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_11_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_11_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_11_io_sum_out; // @[mul.scala 95:35]
  wire  cell_11_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_11_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_11_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_11_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_11_io_B; // @[mul.scala 95:35]
  wire  cell_12_clock; // @[mul.scala 95:35]
  wire  cell_12_reset; // @[mul.scala 95:35]
  wire  cell_12_io_flush; // @[mul.scala 95:35]
  wire  cell_12_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_12_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_12_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_12_io_sum_in; // @[mul.scala 95:35]
  wire  cell_12_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_12_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_12_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_12_io_sum_out; // @[mul.scala 95:35]
  wire  cell_12_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_12_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_12_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_12_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_12_io_B; // @[mul.scala 95:35]
  wire  cell_13_clock; // @[mul.scala 95:35]
  wire  cell_13_reset; // @[mul.scala 95:35]
  wire  cell_13_io_flush; // @[mul.scala 95:35]
  wire  cell_13_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_13_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_13_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_13_io_sum_in; // @[mul.scala 95:35]
  wire  cell_13_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_13_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_13_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_13_io_sum_out; // @[mul.scala 95:35]
  wire  cell_13_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_13_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_13_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_13_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_13_io_B; // @[mul.scala 95:35]
  wire  cell_14_clock; // @[mul.scala 95:35]
  wire  cell_14_reset; // @[mul.scala 95:35]
  wire  cell_14_io_flush; // @[mul.scala 95:35]
  wire  cell_14_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_14_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_14_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_14_io_sum_in; // @[mul.scala 95:35]
  wire  cell_14_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_14_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_14_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_14_io_sum_out; // @[mul.scala 95:35]
  wire  cell_14_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_14_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_14_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_14_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_14_io_B; // @[mul.scala 95:35]
  wire  cell_15_clock; // @[mul.scala 95:35]
  wire  cell_15_reset; // @[mul.scala 95:35]
  wire  cell_15_io_flush; // @[mul.scala 95:35]
  wire  cell_15_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_15_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_15_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_15_io_sum_in; // @[mul.scala 95:35]
  wire  cell_15_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_15_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_15_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_15_io_sum_out; // @[mul.scala 95:35]
  wire  cell_15_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_15_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_15_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_15_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_15_io_B; // @[mul.scala 95:35]
  wire  cell_16_clock; // @[mul.scala 95:35]
  wire  cell_16_reset; // @[mul.scala 95:35]
  wire  cell_16_io_flush; // @[mul.scala 95:35]
  wire  cell_16_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_16_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_16_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_16_io_sum_in; // @[mul.scala 95:35]
  wire  cell_16_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_16_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_16_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_16_io_sum_out; // @[mul.scala 95:35]
  wire  cell_16_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_16_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_16_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_16_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_16_io_B; // @[mul.scala 95:35]
  wire  cell_17_clock; // @[mul.scala 95:35]
  wire  cell_17_reset; // @[mul.scala 95:35]
  wire  cell_17_io_flush; // @[mul.scala 95:35]
  wire  cell_17_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_17_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_17_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_17_io_sum_in; // @[mul.scala 95:35]
  wire  cell_17_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_17_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_17_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_17_io_sum_out; // @[mul.scala 95:35]
  wire  cell_17_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_17_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_17_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_17_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_17_io_B; // @[mul.scala 95:35]
  wire  cell_18_clock; // @[mul.scala 95:35]
  wire  cell_18_reset; // @[mul.scala 95:35]
  wire  cell_18_io_flush; // @[mul.scala 95:35]
  wire  cell_18_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_18_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_18_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_18_io_sum_in; // @[mul.scala 95:35]
  wire  cell_18_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_18_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_18_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_18_io_sum_out; // @[mul.scala 95:35]
  wire  cell_18_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_18_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_18_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_18_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_18_io_B; // @[mul.scala 95:35]
  wire  cell_19_clock; // @[mul.scala 95:35]
  wire  cell_19_reset; // @[mul.scala 95:35]
  wire  cell_19_io_flush; // @[mul.scala 95:35]
  wire  cell_19_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_19_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_19_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_19_io_sum_in; // @[mul.scala 95:35]
  wire  cell_19_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_19_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_19_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_19_io_sum_out; // @[mul.scala 95:35]
  wire  cell_19_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_19_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_19_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_19_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_19_io_B; // @[mul.scala 95:35]
  wire  cell_20_clock; // @[mul.scala 95:35]
  wire  cell_20_reset; // @[mul.scala 95:35]
  wire  cell_20_io_flush; // @[mul.scala 95:35]
  wire  cell_20_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_20_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_20_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_20_io_sum_in; // @[mul.scala 95:35]
  wire  cell_20_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_20_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_20_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_20_io_sum_out; // @[mul.scala 95:35]
  wire  cell_20_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_20_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_20_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_20_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_20_io_B; // @[mul.scala 95:35]
  wire  cell_21_clock; // @[mul.scala 95:35]
  wire  cell_21_reset; // @[mul.scala 95:35]
  wire  cell_21_io_flush; // @[mul.scala 95:35]
  wire  cell_21_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_21_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_21_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_21_io_sum_in; // @[mul.scala 95:35]
  wire  cell_21_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_21_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_21_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_21_io_sum_out; // @[mul.scala 95:35]
  wire  cell_21_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_21_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_21_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_21_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_21_io_B; // @[mul.scala 95:35]
  wire  cell_22_clock; // @[mul.scala 95:35]
  wire  cell_22_reset; // @[mul.scala 95:35]
  wire  cell_22_io_flush; // @[mul.scala 95:35]
  wire  cell_22_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_22_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_22_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_22_io_sum_in; // @[mul.scala 95:35]
  wire  cell_22_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_22_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_22_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_22_io_sum_out; // @[mul.scala 95:35]
  wire  cell_22_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_22_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_22_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_22_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_22_io_B; // @[mul.scala 95:35]
  wire  cell_23_clock; // @[mul.scala 95:35]
  wire  cell_23_reset; // @[mul.scala 95:35]
  wire  cell_23_io_flush; // @[mul.scala 95:35]
  wire  cell_23_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_23_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_23_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_23_io_sum_in; // @[mul.scala 95:35]
  wire  cell_23_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_23_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_23_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_23_io_sum_out; // @[mul.scala 95:35]
  wire  cell_23_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_23_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_23_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_23_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_23_io_B; // @[mul.scala 95:35]
  wire  cell_24_clock; // @[mul.scala 95:35]
  wire  cell_24_reset; // @[mul.scala 95:35]
  wire  cell_24_io_flush; // @[mul.scala 95:35]
  wire  cell_24_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_24_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_24_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_24_io_sum_in; // @[mul.scala 95:35]
  wire  cell_24_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_24_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_24_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_24_io_sum_out; // @[mul.scala 95:35]
  wire  cell_24_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_24_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_24_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_24_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_24_io_B; // @[mul.scala 95:35]
  wire  cell_25_clock; // @[mul.scala 95:35]
  wire  cell_25_reset; // @[mul.scala 95:35]
  wire  cell_25_io_flush; // @[mul.scala 95:35]
  wire  cell_25_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_25_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_25_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_25_io_sum_in; // @[mul.scala 95:35]
  wire  cell_25_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_25_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_25_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_25_io_sum_out; // @[mul.scala 95:35]
  wire  cell_25_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_25_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_25_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_25_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_25_io_B; // @[mul.scala 95:35]
  wire  cell_26_clock; // @[mul.scala 95:35]
  wire  cell_26_reset; // @[mul.scala 95:35]
  wire  cell_26_io_flush; // @[mul.scala 95:35]
  wire  cell_26_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_26_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_26_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_26_io_sum_in; // @[mul.scala 95:35]
  wire  cell_26_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_26_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_26_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_26_io_sum_out; // @[mul.scala 95:35]
  wire  cell_26_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_26_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_26_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_26_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_26_io_B; // @[mul.scala 95:35]
  wire  cell_27_clock; // @[mul.scala 95:35]
  wire  cell_27_reset; // @[mul.scala 95:35]
  wire  cell_27_io_flush; // @[mul.scala 95:35]
  wire  cell_27_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_27_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_27_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_27_io_sum_in; // @[mul.scala 95:35]
  wire  cell_27_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_27_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_27_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_27_io_sum_out; // @[mul.scala 95:35]
  wire  cell_27_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_27_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_27_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_27_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_27_io_B; // @[mul.scala 95:35]
  wire  cell_28_clock; // @[mul.scala 95:35]
  wire  cell_28_reset; // @[mul.scala 95:35]
  wire  cell_28_io_flush; // @[mul.scala 95:35]
  wire  cell_28_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_28_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_28_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_28_io_sum_in; // @[mul.scala 95:35]
  wire  cell_28_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_28_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_28_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_28_io_sum_out; // @[mul.scala 95:35]
  wire  cell_28_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_28_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_28_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_28_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_28_io_B; // @[mul.scala 95:35]
  wire  cell_29_clock; // @[mul.scala 95:35]
  wire  cell_29_reset; // @[mul.scala 95:35]
  wire  cell_29_io_flush; // @[mul.scala 95:35]
  wire  cell_29_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_29_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_29_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_29_io_sum_in; // @[mul.scala 95:35]
  wire  cell_29_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_29_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_29_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_29_io_sum_out; // @[mul.scala 95:35]
  wire  cell_29_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_29_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_29_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_29_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_29_io_B; // @[mul.scala 95:35]
  wire  cell_30_clock; // @[mul.scala 95:35]
  wire  cell_30_reset; // @[mul.scala 95:35]
  wire  cell_30_io_flush; // @[mul.scala 95:35]
  wire  cell_30_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_30_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_30_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_30_io_sum_in; // @[mul.scala 95:35]
  wire  cell_30_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_30_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_30_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_30_io_sum_out; // @[mul.scala 95:35]
  wire  cell_30_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_30_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_30_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_30_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_30_io_B; // @[mul.scala 95:35]
  wire  cell_31_clock; // @[mul.scala 95:35]
  wire  cell_31_reset; // @[mul.scala 95:35]
  wire  cell_31_io_flush; // @[mul.scala 95:35]
  wire  cell_31_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_31_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_31_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_31_io_sum_in; // @[mul.scala 95:35]
  wire  cell_31_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_31_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_31_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_31_io_sum_out; // @[mul.scala 95:35]
  wire  cell_31_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_31_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_31_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_31_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_31_io_B; // @[mul.scala 95:35]
  wire  cell_32_clock; // @[mul.scala 95:35]
  wire  cell_32_reset; // @[mul.scala 95:35]
  wire  cell_32_io_flush; // @[mul.scala 95:35]
  wire  cell_32_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_32_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_32_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_32_io_sum_in; // @[mul.scala 95:35]
  wire  cell_32_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_32_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_32_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_32_io_sum_out; // @[mul.scala 95:35]
  wire  cell_32_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_32_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_32_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_32_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_32_io_B; // @[mul.scala 95:35]
  wire  cell_33_clock; // @[mul.scala 95:35]
  wire  cell_33_reset; // @[mul.scala 95:35]
  wire  cell_33_io_flush; // @[mul.scala 95:35]
  wire  cell_33_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_33_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_33_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_33_io_sum_in; // @[mul.scala 95:35]
  wire  cell_33_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_33_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_33_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_33_io_sum_out; // @[mul.scala 95:35]
  wire  cell_33_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_33_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_33_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_33_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_33_io_B; // @[mul.scala 95:35]
  wire  cell_34_clock; // @[mul.scala 95:35]
  wire  cell_34_reset; // @[mul.scala 95:35]
  wire  cell_34_io_flush; // @[mul.scala 95:35]
  wire  cell_34_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_34_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_34_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_34_io_sum_in; // @[mul.scala 95:35]
  wire  cell_34_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_34_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_34_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_34_io_sum_out; // @[mul.scala 95:35]
  wire  cell_34_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_34_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_34_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_34_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_34_io_B; // @[mul.scala 95:35]
  wire  cell_35_clock; // @[mul.scala 95:35]
  wire  cell_35_reset; // @[mul.scala 95:35]
  wire  cell_35_io_flush; // @[mul.scala 95:35]
  wire  cell_35_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_35_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_35_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_35_io_sum_in; // @[mul.scala 95:35]
  wire  cell_35_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_35_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_35_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_35_io_sum_out; // @[mul.scala 95:35]
  wire  cell_35_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_35_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_35_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_35_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_35_io_B; // @[mul.scala 95:35]
  wire  cell_36_clock; // @[mul.scala 95:35]
  wire  cell_36_reset; // @[mul.scala 95:35]
  wire  cell_36_io_flush; // @[mul.scala 95:35]
  wire  cell_36_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_36_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_36_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_36_io_sum_in; // @[mul.scala 95:35]
  wire  cell_36_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_36_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_36_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_36_io_sum_out; // @[mul.scala 95:35]
  wire  cell_36_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_36_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_36_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_36_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_36_io_B; // @[mul.scala 95:35]
  wire  cell_37_clock; // @[mul.scala 95:35]
  wire  cell_37_reset; // @[mul.scala 95:35]
  wire  cell_37_io_flush; // @[mul.scala 95:35]
  wire  cell_37_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_37_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_37_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_37_io_sum_in; // @[mul.scala 95:35]
  wire  cell_37_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_37_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_37_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_37_io_sum_out; // @[mul.scala 95:35]
  wire  cell_37_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_37_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_37_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_37_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_37_io_B; // @[mul.scala 95:35]
  wire  cell_38_clock; // @[mul.scala 95:35]
  wire  cell_38_reset; // @[mul.scala 95:35]
  wire  cell_38_io_flush; // @[mul.scala 95:35]
  wire  cell_38_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_38_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_38_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_38_io_sum_in; // @[mul.scala 95:35]
  wire  cell_38_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_38_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_38_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_38_io_sum_out; // @[mul.scala 95:35]
  wire  cell_38_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_38_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_38_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_38_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_38_io_B; // @[mul.scala 95:35]
  wire  cell_39_clock; // @[mul.scala 95:35]
  wire  cell_39_reset; // @[mul.scala 95:35]
  wire  cell_39_io_flush; // @[mul.scala 95:35]
  wire  cell_39_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_39_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_39_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_39_io_sum_in; // @[mul.scala 95:35]
  wire  cell_39_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_39_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_39_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_39_io_sum_out; // @[mul.scala 95:35]
  wire  cell_39_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_39_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_39_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_39_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_39_io_B; // @[mul.scala 95:35]
  wire  cell_40_clock; // @[mul.scala 95:35]
  wire  cell_40_reset; // @[mul.scala 95:35]
  wire  cell_40_io_flush; // @[mul.scala 95:35]
  wire  cell_40_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_40_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_40_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_40_io_sum_in; // @[mul.scala 95:35]
  wire  cell_40_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_40_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_40_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_40_io_sum_out; // @[mul.scala 95:35]
  wire  cell_40_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_40_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_40_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_40_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_40_io_B; // @[mul.scala 95:35]
  wire  cell_41_clock; // @[mul.scala 95:35]
  wire  cell_41_reset; // @[mul.scala 95:35]
  wire  cell_41_io_flush; // @[mul.scala 95:35]
  wire  cell_41_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_41_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_41_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_41_io_sum_in; // @[mul.scala 95:35]
  wire  cell_41_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_41_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_41_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_41_io_sum_out; // @[mul.scala 95:35]
  wire  cell_41_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_41_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_41_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_41_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_41_io_B; // @[mul.scala 95:35]
  wire  cell_42_clock; // @[mul.scala 95:35]
  wire  cell_42_reset; // @[mul.scala 95:35]
  wire  cell_42_io_flush; // @[mul.scala 95:35]
  wire  cell_42_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_42_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_42_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_42_io_sum_in; // @[mul.scala 95:35]
  wire  cell_42_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_42_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_42_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_42_io_sum_out; // @[mul.scala 95:35]
  wire  cell_42_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_42_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_42_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_42_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_42_io_B; // @[mul.scala 95:35]
  wire  cell_43_clock; // @[mul.scala 95:35]
  wire  cell_43_reset; // @[mul.scala 95:35]
  wire  cell_43_io_flush; // @[mul.scala 95:35]
  wire  cell_43_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_43_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_43_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_43_io_sum_in; // @[mul.scala 95:35]
  wire  cell_43_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_43_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_43_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_43_io_sum_out; // @[mul.scala 95:35]
  wire  cell_43_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_43_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_43_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_43_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_43_io_B; // @[mul.scala 95:35]
  wire  cell_44_clock; // @[mul.scala 95:35]
  wire  cell_44_reset; // @[mul.scala 95:35]
  wire  cell_44_io_flush; // @[mul.scala 95:35]
  wire  cell_44_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_44_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_44_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_44_io_sum_in; // @[mul.scala 95:35]
  wire  cell_44_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_44_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_44_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_44_io_sum_out; // @[mul.scala 95:35]
  wire  cell_44_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_44_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_44_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_44_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_44_io_B; // @[mul.scala 95:35]
  wire  cell_45_clock; // @[mul.scala 95:35]
  wire  cell_45_reset; // @[mul.scala 95:35]
  wire  cell_45_io_flush; // @[mul.scala 95:35]
  wire  cell_45_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_45_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_45_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_45_io_sum_in; // @[mul.scala 95:35]
  wire  cell_45_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_45_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_45_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_45_io_sum_out; // @[mul.scala 95:35]
  wire  cell_45_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_45_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_45_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_45_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_45_io_B; // @[mul.scala 95:35]
  wire  cell_46_clock; // @[mul.scala 95:35]
  wire  cell_46_reset; // @[mul.scala 95:35]
  wire  cell_46_io_flush; // @[mul.scala 95:35]
  wire  cell_46_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_46_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_46_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_46_io_sum_in; // @[mul.scala 95:35]
  wire  cell_46_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_46_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_46_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_46_io_sum_out; // @[mul.scala 95:35]
  wire  cell_46_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_46_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_46_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_46_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_46_io_B; // @[mul.scala 95:35]
  wire  cell_47_clock; // @[mul.scala 95:35]
  wire  cell_47_reset; // @[mul.scala 95:35]
  wire  cell_47_io_flush; // @[mul.scala 95:35]
  wire  cell_47_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_47_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_47_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_47_io_sum_in; // @[mul.scala 95:35]
  wire  cell_47_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_47_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_47_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_47_io_sum_out; // @[mul.scala 95:35]
  wire  cell_47_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_47_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_47_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_47_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_47_io_B; // @[mul.scala 95:35]
  wire  cell_48_clock; // @[mul.scala 95:35]
  wire  cell_48_reset; // @[mul.scala 95:35]
  wire  cell_48_io_flush; // @[mul.scala 95:35]
  wire  cell_48_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_48_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_48_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_48_io_sum_in; // @[mul.scala 95:35]
  wire  cell_48_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_48_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_48_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_48_io_sum_out; // @[mul.scala 95:35]
  wire  cell_48_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_48_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_48_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_48_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_48_io_B; // @[mul.scala 95:35]
  wire  cell_49_clock; // @[mul.scala 95:35]
  wire  cell_49_reset; // @[mul.scala 95:35]
  wire  cell_49_io_flush; // @[mul.scala 95:35]
  wire  cell_49_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_49_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_49_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_49_io_sum_in; // @[mul.scala 95:35]
  wire  cell_49_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_49_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_49_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_49_io_sum_out; // @[mul.scala 95:35]
  wire  cell_49_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_49_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_49_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_49_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_49_io_B; // @[mul.scala 95:35]
  wire  cell_50_clock; // @[mul.scala 95:35]
  wire  cell_50_reset; // @[mul.scala 95:35]
  wire  cell_50_io_flush; // @[mul.scala 95:35]
  wire  cell_50_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_50_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_50_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_50_io_sum_in; // @[mul.scala 95:35]
  wire  cell_50_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_50_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_50_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_50_io_sum_out; // @[mul.scala 95:35]
  wire  cell_50_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_50_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_50_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_50_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_50_io_B; // @[mul.scala 95:35]
  wire  cell_51_clock; // @[mul.scala 95:35]
  wire  cell_51_reset; // @[mul.scala 95:35]
  wire  cell_51_io_flush; // @[mul.scala 95:35]
  wire  cell_51_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_51_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_51_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_51_io_sum_in; // @[mul.scala 95:35]
  wire  cell_51_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_51_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_51_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_51_io_sum_out; // @[mul.scala 95:35]
  wire  cell_51_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_51_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_51_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_51_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_51_io_B; // @[mul.scala 95:35]
  wire  cell_52_clock; // @[mul.scala 95:35]
  wire  cell_52_reset; // @[mul.scala 95:35]
  wire  cell_52_io_flush; // @[mul.scala 95:35]
  wire  cell_52_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_52_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_52_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_52_io_sum_in; // @[mul.scala 95:35]
  wire  cell_52_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_52_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_52_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_52_io_sum_out; // @[mul.scala 95:35]
  wire  cell_52_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_52_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_52_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_52_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_52_io_B; // @[mul.scala 95:35]
  wire  cell_53_clock; // @[mul.scala 95:35]
  wire  cell_53_reset; // @[mul.scala 95:35]
  wire  cell_53_io_flush; // @[mul.scala 95:35]
  wire  cell_53_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_53_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_53_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_53_io_sum_in; // @[mul.scala 95:35]
  wire  cell_53_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_53_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_53_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_53_io_sum_out; // @[mul.scala 95:35]
  wire  cell_53_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_53_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_53_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_53_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_53_io_B; // @[mul.scala 95:35]
  wire  cell_54_clock; // @[mul.scala 95:35]
  wire  cell_54_reset; // @[mul.scala 95:35]
  wire  cell_54_io_flush; // @[mul.scala 95:35]
  wire  cell_54_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_54_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_54_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_54_io_sum_in; // @[mul.scala 95:35]
  wire  cell_54_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_54_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_54_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_54_io_sum_out; // @[mul.scala 95:35]
  wire  cell_54_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_54_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_54_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_54_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_54_io_B; // @[mul.scala 95:35]
  wire  cell_55_clock; // @[mul.scala 95:35]
  wire  cell_55_reset; // @[mul.scala 95:35]
  wire  cell_55_io_flush; // @[mul.scala 95:35]
  wire  cell_55_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_55_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_55_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_55_io_sum_in; // @[mul.scala 95:35]
  wire  cell_55_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_55_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_55_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_55_io_sum_out; // @[mul.scala 95:35]
  wire  cell_55_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_55_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_55_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_55_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_55_io_B; // @[mul.scala 95:35]
  wire  cell_56_clock; // @[mul.scala 95:35]
  wire  cell_56_reset; // @[mul.scala 95:35]
  wire  cell_56_io_flush; // @[mul.scala 95:35]
  wire  cell_56_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_56_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_56_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_56_io_sum_in; // @[mul.scala 95:35]
  wire  cell_56_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_56_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_56_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_56_io_sum_out; // @[mul.scala 95:35]
  wire  cell_56_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_56_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_56_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_56_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_56_io_B; // @[mul.scala 95:35]
  wire  cell_57_clock; // @[mul.scala 95:35]
  wire  cell_57_reset; // @[mul.scala 95:35]
  wire  cell_57_io_flush; // @[mul.scala 95:35]
  wire  cell_57_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_57_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_57_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_57_io_sum_in; // @[mul.scala 95:35]
  wire  cell_57_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_57_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_57_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_57_io_sum_out; // @[mul.scala 95:35]
  wire  cell_57_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_57_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_57_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_57_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_57_io_B; // @[mul.scala 95:35]
  wire  cell_58_clock; // @[mul.scala 95:35]
  wire  cell_58_reset; // @[mul.scala 95:35]
  wire  cell_58_io_flush; // @[mul.scala 95:35]
  wire  cell_58_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_58_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_58_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_58_io_sum_in; // @[mul.scala 95:35]
  wire  cell_58_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_58_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_58_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_58_io_sum_out; // @[mul.scala 95:35]
  wire  cell_58_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_58_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_58_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_58_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_58_io_B; // @[mul.scala 95:35]
  wire  cell_59_clock; // @[mul.scala 95:35]
  wire  cell_59_reset; // @[mul.scala 95:35]
  wire  cell_59_io_flush; // @[mul.scala 95:35]
  wire  cell_59_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_59_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_59_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_59_io_sum_in; // @[mul.scala 95:35]
  wire  cell_59_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_59_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_59_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_59_io_sum_out; // @[mul.scala 95:35]
  wire  cell_59_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_59_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_59_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_59_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_59_io_B; // @[mul.scala 95:35]
  wire  cell_60_clock; // @[mul.scala 95:35]
  wire  cell_60_reset; // @[mul.scala 95:35]
  wire  cell_60_io_flush; // @[mul.scala 95:35]
  wire  cell_60_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_60_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_60_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_60_io_sum_in; // @[mul.scala 95:35]
  wire  cell_60_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_60_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_60_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_60_io_sum_out; // @[mul.scala 95:35]
  wire  cell_60_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_60_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_60_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_60_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_60_io_B; // @[mul.scala 95:35]
  wire  cell_61_clock; // @[mul.scala 95:35]
  wire  cell_61_reset; // @[mul.scala 95:35]
  wire  cell_61_io_flush; // @[mul.scala 95:35]
  wire  cell_61_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_61_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_61_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_61_io_sum_in; // @[mul.scala 95:35]
  wire  cell_61_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_61_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_61_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_61_io_sum_out; // @[mul.scala 95:35]
  wire  cell_61_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_61_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_61_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_61_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_61_io_B; // @[mul.scala 95:35]
  wire  cell_62_clock; // @[mul.scala 95:35]
  wire  cell_62_reset; // @[mul.scala 95:35]
  wire  cell_62_io_flush; // @[mul.scala 95:35]
  wire  cell_62_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_62_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_62_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_62_io_sum_in; // @[mul.scala 95:35]
  wire  cell_62_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_62_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_62_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_62_io_sum_out; // @[mul.scala 95:35]
  wire  cell_62_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_62_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_62_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_62_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_62_io_B; // @[mul.scala 95:35]
  wire  cell_63_clock; // @[mul.scala 95:35]
  wire  cell_63_reset; // @[mul.scala 95:35]
  wire  cell_63_io_flush; // @[mul.scala 95:35]
  wire  cell_63_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_63_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_63_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_63_io_sum_in; // @[mul.scala 95:35]
  wire  cell_63_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_63_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_63_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_63_io_sum_out; // @[mul.scala 95:35]
  wire  cell_63_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_63_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_63_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_63_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_63_io_B; // @[mul.scala 95:35]
  wire  cell_64_clock; // @[mul.scala 95:35]
  wire  cell_64_reset; // @[mul.scala 95:35]
  wire  cell_64_io_flush; // @[mul.scala 95:35]
  wire  cell_64_io_valid; // @[mul.scala 95:35]
  wire [128:0] cell_64_io_a_in; // @[mul.scala 95:35]
  wire [128:0] cell_64_io_b_in; // @[mul.scala 95:35]
  wire [128:0] cell_64_io_sum_in; // @[mul.scala 95:35]
  wire  cell_64_io_last; // @[mul.scala 95:35]
  wire [128:0] cell_64_io_a_out; // @[mul.scala 95:35]
  wire [128:0] cell_64_io_b_out; // @[mul.scala 95:35]
  wire [128:0] cell_64_io_sum_out; // @[mul.scala 95:35]
  wire  cell_64_io_ready; // @[mul.scala 95:35]
  wire [63:0] cell_64_io_a; // @[mul.scala 95:35]
  wire [63:0] cell_64_io_b; // @[mul.scala 95:35]
  wire [63:0] cell_64_io_A; // @[mul.scala 95:35]
  wire [63:0] cell_64_io_B; // @[mul.scala 95:35]
  reg [128:0] a; // @[mul.scala 77:20]
  reg [128:0] b; // @[mul.scala 78:20]
  reg  valid; // @[mul.scala 79:24]
  wire  _a_T_2 = io_mul_valid & io_mul_signed[1]; // @[mul.scala 82:26]
  wire [64:0] _a_T_16 = io_multiplicand[63] ? 65'h1ffffffffffffffff : 65'h0; // @[Bitwise.scala 77:12]
  wire [128:0] _a_T_17 = {_a_T_16,io_multiplicand}; // @[Cat.scala 33:92]
  wire [128:0] _a_T_19 = io_mul_valid ? {{65'd0}, io_multiplicand} : a; // @[mul.scala 84:12]
  wire [128:0] _a_T_20 = _a_T_2 ? _a_T_17 : _a_T_19; // @[mul.scala 83:12]
  wire [160:0] _a_T_21 = {{32'd0}, _a_T_20}; // @[mul.scala 82:12]
  wire [64:0] _b_T_16 = io_multiplier[63] ? 65'h1ffffffffffffffff : 65'h0; // @[Bitwise.scala 77:12]
  wire [128:0] _b_T_17 = {_b_T_16,io_multiplier}; // @[Cat.scala 33:92]
  wire [128:0] _b_T_19 = io_mul_valid ? {{65'd0}, io_multiplier} : b; // @[mul.scala 90:12]
  wire [128:0] _b_T_20 = _a_T_2 ? _b_T_17 : _b_T_19; // @[mul.scala 89:12]
  wire [160:0] _b_T_21 = {{32'd0}, _b_T_20}; // @[mul.scala 88:12]
  wire [127:0] _T_1 = cell_64_io_A * cell_64_io_B; // @[mul.scala 124:64]
  wire [128:0] _GEN_0 = {{1'd0}, _T_1}; // @[mul.scala 124:45]
  wire [160:0] _GEN_1 = reset ? 161'h0 : _a_T_21; // @[mul.scala 77:{20,20} 81:7]
  wire [160:0] _GEN_2 = reset ? 161'h0 : _b_T_21; // @[mul.scala 78:{20,20} 87:7]
  mul_cell cell_0 ( // @[mul.scala 95:35]
    .clock(cell_0_clock),
    .reset(cell_0_reset),
    .io_flush(cell_0_io_flush),
    .io_valid(cell_0_io_valid),
    .io_a_in(cell_0_io_a_in),
    .io_b_in(cell_0_io_b_in),
    .io_sum_in(cell_0_io_sum_in),
    .io_last(cell_0_io_last),
    .io_a_out(cell_0_io_a_out),
    .io_b_out(cell_0_io_b_out),
    .io_sum_out(cell_0_io_sum_out),
    .io_ready(cell_0_io_ready),
    .io_a(cell_0_io_a),
    .io_b(cell_0_io_b),
    .io_A(cell_0_io_A),
    .io_B(cell_0_io_B)
  );
  mul_cell cell_1 ( // @[mul.scala 95:35]
    .clock(cell_1_clock),
    .reset(cell_1_reset),
    .io_flush(cell_1_io_flush),
    .io_valid(cell_1_io_valid),
    .io_a_in(cell_1_io_a_in),
    .io_b_in(cell_1_io_b_in),
    .io_sum_in(cell_1_io_sum_in),
    .io_last(cell_1_io_last),
    .io_a_out(cell_1_io_a_out),
    .io_b_out(cell_1_io_b_out),
    .io_sum_out(cell_1_io_sum_out),
    .io_ready(cell_1_io_ready),
    .io_a(cell_1_io_a),
    .io_b(cell_1_io_b),
    .io_A(cell_1_io_A),
    .io_B(cell_1_io_B)
  );
  mul_cell cell_2 ( // @[mul.scala 95:35]
    .clock(cell_2_clock),
    .reset(cell_2_reset),
    .io_flush(cell_2_io_flush),
    .io_valid(cell_2_io_valid),
    .io_a_in(cell_2_io_a_in),
    .io_b_in(cell_2_io_b_in),
    .io_sum_in(cell_2_io_sum_in),
    .io_last(cell_2_io_last),
    .io_a_out(cell_2_io_a_out),
    .io_b_out(cell_2_io_b_out),
    .io_sum_out(cell_2_io_sum_out),
    .io_ready(cell_2_io_ready),
    .io_a(cell_2_io_a),
    .io_b(cell_2_io_b),
    .io_A(cell_2_io_A),
    .io_B(cell_2_io_B)
  );
  mul_cell cell_3 ( // @[mul.scala 95:35]
    .clock(cell_3_clock),
    .reset(cell_3_reset),
    .io_flush(cell_3_io_flush),
    .io_valid(cell_3_io_valid),
    .io_a_in(cell_3_io_a_in),
    .io_b_in(cell_3_io_b_in),
    .io_sum_in(cell_3_io_sum_in),
    .io_last(cell_3_io_last),
    .io_a_out(cell_3_io_a_out),
    .io_b_out(cell_3_io_b_out),
    .io_sum_out(cell_3_io_sum_out),
    .io_ready(cell_3_io_ready),
    .io_a(cell_3_io_a),
    .io_b(cell_3_io_b),
    .io_A(cell_3_io_A),
    .io_B(cell_3_io_B)
  );
  mul_cell cell_4 ( // @[mul.scala 95:35]
    .clock(cell_4_clock),
    .reset(cell_4_reset),
    .io_flush(cell_4_io_flush),
    .io_valid(cell_4_io_valid),
    .io_a_in(cell_4_io_a_in),
    .io_b_in(cell_4_io_b_in),
    .io_sum_in(cell_4_io_sum_in),
    .io_last(cell_4_io_last),
    .io_a_out(cell_4_io_a_out),
    .io_b_out(cell_4_io_b_out),
    .io_sum_out(cell_4_io_sum_out),
    .io_ready(cell_4_io_ready),
    .io_a(cell_4_io_a),
    .io_b(cell_4_io_b),
    .io_A(cell_4_io_A),
    .io_B(cell_4_io_B)
  );
  mul_cell cell_5 ( // @[mul.scala 95:35]
    .clock(cell_5_clock),
    .reset(cell_5_reset),
    .io_flush(cell_5_io_flush),
    .io_valid(cell_5_io_valid),
    .io_a_in(cell_5_io_a_in),
    .io_b_in(cell_5_io_b_in),
    .io_sum_in(cell_5_io_sum_in),
    .io_last(cell_5_io_last),
    .io_a_out(cell_5_io_a_out),
    .io_b_out(cell_5_io_b_out),
    .io_sum_out(cell_5_io_sum_out),
    .io_ready(cell_5_io_ready),
    .io_a(cell_5_io_a),
    .io_b(cell_5_io_b),
    .io_A(cell_5_io_A),
    .io_B(cell_5_io_B)
  );
  mul_cell cell_6 ( // @[mul.scala 95:35]
    .clock(cell_6_clock),
    .reset(cell_6_reset),
    .io_flush(cell_6_io_flush),
    .io_valid(cell_6_io_valid),
    .io_a_in(cell_6_io_a_in),
    .io_b_in(cell_6_io_b_in),
    .io_sum_in(cell_6_io_sum_in),
    .io_last(cell_6_io_last),
    .io_a_out(cell_6_io_a_out),
    .io_b_out(cell_6_io_b_out),
    .io_sum_out(cell_6_io_sum_out),
    .io_ready(cell_6_io_ready),
    .io_a(cell_6_io_a),
    .io_b(cell_6_io_b),
    .io_A(cell_6_io_A),
    .io_B(cell_6_io_B)
  );
  mul_cell cell_7 ( // @[mul.scala 95:35]
    .clock(cell_7_clock),
    .reset(cell_7_reset),
    .io_flush(cell_7_io_flush),
    .io_valid(cell_7_io_valid),
    .io_a_in(cell_7_io_a_in),
    .io_b_in(cell_7_io_b_in),
    .io_sum_in(cell_7_io_sum_in),
    .io_last(cell_7_io_last),
    .io_a_out(cell_7_io_a_out),
    .io_b_out(cell_7_io_b_out),
    .io_sum_out(cell_7_io_sum_out),
    .io_ready(cell_7_io_ready),
    .io_a(cell_7_io_a),
    .io_b(cell_7_io_b),
    .io_A(cell_7_io_A),
    .io_B(cell_7_io_B)
  );
  mul_cell cell_8 ( // @[mul.scala 95:35]
    .clock(cell_8_clock),
    .reset(cell_8_reset),
    .io_flush(cell_8_io_flush),
    .io_valid(cell_8_io_valid),
    .io_a_in(cell_8_io_a_in),
    .io_b_in(cell_8_io_b_in),
    .io_sum_in(cell_8_io_sum_in),
    .io_last(cell_8_io_last),
    .io_a_out(cell_8_io_a_out),
    .io_b_out(cell_8_io_b_out),
    .io_sum_out(cell_8_io_sum_out),
    .io_ready(cell_8_io_ready),
    .io_a(cell_8_io_a),
    .io_b(cell_8_io_b),
    .io_A(cell_8_io_A),
    .io_B(cell_8_io_B)
  );
  mul_cell cell_9 ( // @[mul.scala 95:35]
    .clock(cell_9_clock),
    .reset(cell_9_reset),
    .io_flush(cell_9_io_flush),
    .io_valid(cell_9_io_valid),
    .io_a_in(cell_9_io_a_in),
    .io_b_in(cell_9_io_b_in),
    .io_sum_in(cell_9_io_sum_in),
    .io_last(cell_9_io_last),
    .io_a_out(cell_9_io_a_out),
    .io_b_out(cell_9_io_b_out),
    .io_sum_out(cell_9_io_sum_out),
    .io_ready(cell_9_io_ready),
    .io_a(cell_9_io_a),
    .io_b(cell_9_io_b),
    .io_A(cell_9_io_A),
    .io_B(cell_9_io_B)
  );
  mul_cell cell_10 ( // @[mul.scala 95:35]
    .clock(cell_10_clock),
    .reset(cell_10_reset),
    .io_flush(cell_10_io_flush),
    .io_valid(cell_10_io_valid),
    .io_a_in(cell_10_io_a_in),
    .io_b_in(cell_10_io_b_in),
    .io_sum_in(cell_10_io_sum_in),
    .io_last(cell_10_io_last),
    .io_a_out(cell_10_io_a_out),
    .io_b_out(cell_10_io_b_out),
    .io_sum_out(cell_10_io_sum_out),
    .io_ready(cell_10_io_ready),
    .io_a(cell_10_io_a),
    .io_b(cell_10_io_b),
    .io_A(cell_10_io_A),
    .io_B(cell_10_io_B)
  );
  mul_cell cell_11 ( // @[mul.scala 95:35]
    .clock(cell_11_clock),
    .reset(cell_11_reset),
    .io_flush(cell_11_io_flush),
    .io_valid(cell_11_io_valid),
    .io_a_in(cell_11_io_a_in),
    .io_b_in(cell_11_io_b_in),
    .io_sum_in(cell_11_io_sum_in),
    .io_last(cell_11_io_last),
    .io_a_out(cell_11_io_a_out),
    .io_b_out(cell_11_io_b_out),
    .io_sum_out(cell_11_io_sum_out),
    .io_ready(cell_11_io_ready),
    .io_a(cell_11_io_a),
    .io_b(cell_11_io_b),
    .io_A(cell_11_io_A),
    .io_B(cell_11_io_B)
  );
  mul_cell cell_12 ( // @[mul.scala 95:35]
    .clock(cell_12_clock),
    .reset(cell_12_reset),
    .io_flush(cell_12_io_flush),
    .io_valid(cell_12_io_valid),
    .io_a_in(cell_12_io_a_in),
    .io_b_in(cell_12_io_b_in),
    .io_sum_in(cell_12_io_sum_in),
    .io_last(cell_12_io_last),
    .io_a_out(cell_12_io_a_out),
    .io_b_out(cell_12_io_b_out),
    .io_sum_out(cell_12_io_sum_out),
    .io_ready(cell_12_io_ready),
    .io_a(cell_12_io_a),
    .io_b(cell_12_io_b),
    .io_A(cell_12_io_A),
    .io_B(cell_12_io_B)
  );
  mul_cell cell_13 ( // @[mul.scala 95:35]
    .clock(cell_13_clock),
    .reset(cell_13_reset),
    .io_flush(cell_13_io_flush),
    .io_valid(cell_13_io_valid),
    .io_a_in(cell_13_io_a_in),
    .io_b_in(cell_13_io_b_in),
    .io_sum_in(cell_13_io_sum_in),
    .io_last(cell_13_io_last),
    .io_a_out(cell_13_io_a_out),
    .io_b_out(cell_13_io_b_out),
    .io_sum_out(cell_13_io_sum_out),
    .io_ready(cell_13_io_ready),
    .io_a(cell_13_io_a),
    .io_b(cell_13_io_b),
    .io_A(cell_13_io_A),
    .io_B(cell_13_io_B)
  );
  mul_cell cell_14 ( // @[mul.scala 95:35]
    .clock(cell_14_clock),
    .reset(cell_14_reset),
    .io_flush(cell_14_io_flush),
    .io_valid(cell_14_io_valid),
    .io_a_in(cell_14_io_a_in),
    .io_b_in(cell_14_io_b_in),
    .io_sum_in(cell_14_io_sum_in),
    .io_last(cell_14_io_last),
    .io_a_out(cell_14_io_a_out),
    .io_b_out(cell_14_io_b_out),
    .io_sum_out(cell_14_io_sum_out),
    .io_ready(cell_14_io_ready),
    .io_a(cell_14_io_a),
    .io_b(cell_14_io_b),
    .io_A(cell_14_io_A),
    .io_B(cell_14_io_B)
  );
  mul_cell cell_15 ( // @[mul.scala 95:35]
    .clock(cell_15_clock),
    .reset(cell_15_reset),
    .io_flush(cell_15_io_flush),
    .io_valid(cell_15_io_valid),
    .io_a_in(cell_15_io_a_in),
    .io_b_in(cell_15_io_b_in),
    .io_sum_in(cell_15_io_sum_in),
    .io_last(cell_15_io_last),
    .io_a_out(cell_15_io_a_out),
    .io_b_out(cell_15_io_b_out),
    .io_sum_out(cell_15_io_sum_out),
    .io_ready(cell_15_io_ready),
    .io_a(cell_15_io_a),
    .io_b(cell_15_io_b),
    .io_A(cell_15_io_A),
    .io_B(cell_15_io_B)
  );
  mul_cell cell_16 ( // @[mul.scala 95:35]
    .clock(cell_16_clock),
    .reset(cell_16_reset),
    .io_flush(cell_16_io_flush),
    .io_valid(cell_16_io_valid),
    .io_a_in(cell_16_io_a_in),
    .io_b_in(cell_16_io_b_in),
    .io_sum_in(cell_16_io_sum_in),
    .io_last(cell_16_io_last),
    .io_a_out(cell_16_io_a_out),
    .io_b_out(cell_16_io_b_out),
    .io_sum_out(cell_16_io_sum_out),
    .io_ready(cell_16_io_ready),
    .io_a(cell_16_io_a),
    .io_b(cell_16_io_b),
    .io_A(cell_16_io_A),
    .io_B(cell_16_io_B)
  );
  mul_cell cell_17 ( // @[mul.scala 95:35]
    .clock(cell_17_clock),
    .reset(cell_17_reset),
    .io_flush(cell_17_io_flush),
    .io_valid(cell_17_io_valid),
    .io_a_in(cell_17_io_a_in),
    .io_b_in(cell_17_io_b_in),
    .io_sum_in(cell_17_io_sum_in),
    .io_last(cell_17_io_last),
    .io_a_out(cell_17_io_a_out),
    .io_b_out(cell_17_io_b_out),
    .io_sum_out(cell_17_io_sum_out),
    .io_ready(cell_17_io_ready),
    .io_a(cell_17_io_a),
    .io_b(cell_17_io_b),
    .io_A(cell_17_io_A),
    .io_B(cell_17_io_B)
  );
  mul_cell cell_18 ( // @[mul.scala 95:35]
    .clock(cell_18_clock),
    .reset(cell_18_reset),
    .io_flush(cell_18_io_flush),
    .io_valid(cell_18_io_valid),
    .io_a_in(cell_18_io_a_in),
    .io_b_in(cell_18_io_b_in),
    .io_sum_in(cell_18_io_sum_in),
    .io_last(cell_18_io_last),
    .io_a_out(cell_18_io_a_out),
    .io_b_out(cell_18_io_b_out),
    .io_sum_out(cell_18_io_sum_out),
    .io_ready(cell_18_io_ready),
    .io_a(cell_18_io_a),
    .io_b(cell_18_io_b),
    .io_A(cell_18_io_A),
    .io_B(cell_18_io_B)
  );
  mul_cell cell_19 ( // @[mul.scala 95:35]
    .clock(cell_19_clock),
    .reset(cell_19_reset),
    .io_flush(cell_19_io_flush),
    .io_valid(cell_19_io_valid),
    .io_a_in(cell_19_io_a_in),
    .io_b_in(cell_19_io_b_in),
    .io_sum_in(cell_19_io_sum_in),
    .io_last(cell_19_io_last),
    .io_a_out(cell_19_io_a_out),
    .io_b_out(cell_19_io_b_out),
    .io_sum_out(cell_19_io_sum_out),
    .io_ready(cell_19_io_ready),
    .io_a(cell_19_io_a),
    .io_b(cell_19_io_b),
    .io_A(cell_19_io_A),
    .io_B(cell_19_io_B)
  );
  mul_cell cell_20 ( // @[mul.scala 95:35]
    .clock(cell_20_clock),
    .reset(cell_20_reset),
    .io_flush(cell_20_io_flush),
    .io_valid(cell_20_io_valid),
    .io_a_in(cell_20_io_a_in),
    .io_b_in(cell_20_io_b_in),
    .io_sum_in(cell_20_io_sum_in),
    .io_last(cell_20_io_last),
    .io_a_out(cell_20_io_a_out),
    .io_b_out(cell_20_io_b_out),
    .io_sum_out(cell_20_io_sum_out),
    .io_ready(cell_20_io_ready),
    .io_a(cell_20_io_a),
    .io_b(cell_20_io_b),
    .io_A(cell_20_io_A),
    .io_B(cell_20_io_B)
  );
  mul_cell cell_21 ( // @[mul.scala 95:35]
    .clock(cell_21_clock),
    .reset(cell_21_reset),
    .io_flush(cell_21_io_flush),
    .io_valid(cell_21_io_valid),
    .io_a_in(cell_21_io_a_in),
    .io_b_in(cell_21_io_b_in),
    .io_sum_in(cell_21_io_sum_in),
    .io_last(cell_21_io_last),
    .io_a_out(cell_21_io_a_out),
    .io_b_out(cell_21_io_b_out),
    .io_sum_out(cell_21_io_sum_out),
    .io_ready(cell_21_io_ready),
    .io_a(cell_21_io_a),
    .io_b(cell_21_io_b),
    .io_A(cell_21_io_A),
    .io_B(cell_21_io_B)
  );
  mul_cell cell_22 ( // @[mul.scala 95:35]
    .clock(cell_22_clock),
    .reset(cell_22_reset),
    .io_flush(cell_22_io_flush),
    .io_valid(cell_22_io_valid),
    .io_a_in(cell_22_io_a_in),
    .io_b_in(cell_22_io_b_in),
    .io_sum_in(cell_22_io_sum_in),
    .io_last(cell_22_io_last),
    .io_a_out(cell_22_io_a_out),
    .io_b_out(cell_22_io_b_out),
    .io_sum_out(cell_22_io_sum_out),
    .io_ready(cell_22_io_ready),
    .io_a(cell_22_io_a),
    .io_b(cell_22_io_b),
    .io_A(cell_22_io_A),
    .io_B(cell_22_io_B)
  );
  mul_cell cell_23 ( // @[mul.scala 95:35]
    .clock(cell_23_clock),
    .reset(cell_23_reset),
    .io_flush(cell_23_io_flush),
    .io_valid(cell_23_io_valid),
    .io_a_in(cell_23_io_a_in),
    .io_b_in(cell_23_io_b_in),
    .io_sum_in(cell_23_io_sum_in),
    .io_last(cell_23_io_last),
    .io_a_out(cell_23_io_a_out),
    .io_b_out(cell_23_io_b_out),
    .io_sum_out(cell_23_io_sum_out),
    .io_ready(cell_23_io_ready),
    .io_a(cell_23_io_a),
    .io_b(cell_23_io_b),
    .io_A(cell_23_io_A),
    .io_B(cell_23_io_B)
  );
  mul_cell cell_24 ( // @[mul.scala 95:35]
    .clock(cell_24_clock),
    .reset(cell_24_reset),
    .io_flush(cell_24_io_flush),
    .io_valid(cell_24_io_valid),
    .io_a_in(cell_24_io_a_in),
    .io_b_in(cell_24_io_b_in),
    .io_sum_in(cell_24_io_sum_in),
    .io_last(cell_24_io_last),
    .io_a_out(cell_24_io_a_out),
    .io_b_out(cell_24_io_b_out),
    .io_sum_out(cell_24_io_sum_out),
    .io_ready(cell_24_io_ready),
    .io_a(cell_24_io_a),
    .io_b(cell_24_io_b),
    .io_A(cell_24_io_A),
    .io_B(cell_24_io_B)
  );
  mul_cell cell_25 ( // @[mul.scala 95:35]
    .clock(cell_25_clock),
    .reset(cell_25_reset),
    .io_flush(cell_25_io_flush),
    .io_valid(cell_25_io_valid),
    .io_a_in(cell_25_io_a_in),
    .io_b_in(cell_25_io_b_in),
    .io_sum_in(cell_25_io_sum_in),
    .io_last(cell_25_io_last),
    .io_a_out(cell_25_io_a_out),
    .io_b_out(cell_25_io_b_out),
    .io_sum_out(cell_25_io_sum_out),
    .io_ready(cell_25_io_ready),
    .io_a(cell_25_io_a),
    .io_b(cell_25_io_b),
    .io_A(cell_25_io_A),
    .io_B(cell_25_io_B)
  );
  mul_cell cell_26 ( // @[mul.scala 95:35]
    .clock(cell_26_clock),
    .reset(cell_26_reset),
    .io_flush(cell_26_io_flush),
    .io_valid(cell_26_io_valid),
    .io_a_in(cell_26_io_a_in),
    .io_b_in(cell_26_io_b_in),
    .io_sum_in(cell_26_io_sum_in),
    .io_last(cell_26_io_last),
    .io_a_out(cell_26_io_a_out),
    .io_b_out(cell_26_io_b_out),
    .io_sum_out(cell_26_io_sum_out),
    .io_ready(cell_26_io_ready),
    .io_a(cell_26_io_a),
    .io_b(cell_26_io_b),
    .io_A(cell_26_io_A),
    .io_B(cell_26_io_B)
  );
  mul_cell cell_27 ( // @[mul.scala 95:35]
    .clock(cell_27_clock),
    .reset(cell_27_reset),
    .io_flush(cell_27_io_flush),
    .io_valid(cell_27_io_valid),
    .io_a_in(cell_27_io_a_in),
    .io_b_in(cell_27_io_b_in),
    .io_sum_in(cell_27_io_sum_in),
    .io_last(cell_27_io_last),
    .io_a_out(cell_27_io_a_out),
    .io_b_out(cell_27_io_b_out),
    .io_sum_out(cell_27_io_sum_out),
    .io_ready(cell_27_io_ready),
    .io_a(cell_27_io_a),
    .io_b(cell_27_io_b),
    .io_A(cell_27_io_A),
    .io_B(cell_27_io_B)
  );
  mul_cell cell_28 ( // @[mul.scala 95:35]
    .clock(cell_28_clock),
    .reset(cell_28_reset),
    .io_flush(cell_28_io_flush),
    .io_valid(cell_28_io_valid),
    .io_a_in(cell_28_io_a_in),
    .io_b_in(cell_28_io_b_in),
    .io_sum_in(cell_28_io_sum_in),
    .io_last(cell_28_io_last),
    .io_a_out(cell_28_io_a_out),
    .io_b_out(cell_28_io_b_out),
    .io_sum_out(cell_28_io_sum_out),
    .io_ready(cell_28_io_ready),
    .io_a(cell_28_io_a),
    .io_b(cell_28_io_b),
    .io_A(cell_28_io_A),
    .io_B(cell_28_io_B)
  );
  mul_cell cell_29 ( // @[mul.scala 95:35]
    .clock(cell_29_clock),
    .reset(cell_29_reset),
    .io_flush(cell_29_io_flush),
    .io_valid(cell_29_io_valid),
    .io_a_in(cell_29_io_a_in),
    .io_b_in(cell_29_io_b_in),
    .io_sum_in(cell_29_io_sum_in),
    .io_last(cell_29_io_last),
    .io_a_out(cell_29_io_a_out),
    .io_b_out(cell_29_io_b_out),
    .io_sum_out(cell_29_io_sum_out),
    .io_ready(cell_29_io_ready),
    .io_a(cell_29_io_a),
    .io_b(cell_29_io_b),
    .io_A(cell_29_io_A),
    .io_B(cell_29_io_B)
  );
  mul_cell cell_30 ( // @[mul.scala 95:35]
    .clock(cell_30_clock),
    .reset(cell_30_reset),
    .io_flush(cell_30_io_flush),
    .io_valid(cell_30_io_valid),
    .io_a_in(cell_30_io_a_in),
    .io_b_in(cell_30_io_b_in),
    .io_sum_in(cell_30_io_sum_in),
    .io_last(cell_30_io_last),
    .io_a_out(cell_30_io_a_out),
    .io_b_out(cell_30_io_b_out),
    .io_sum_out(cell_30_io_sum_out),
    .io_ready(cell_30_io_ready),
    .io_a(cell_30_io_a),
    .io_b(cell_30_io_b),
    .io_A(cell_30_io_A),
    .io_B(cell_30_io_B)
  );
  mul_cell cell_31 ( // @[mul.scala 95:35]
    .clock(cell_31_clock),
    .reset(cell_31_reset),
    .io_flush(cell_31_io_flush),
    .io_valid(cell_31_io_valid),
    .io_a_in(cell_31_io_a_in),
    .io_b_in(cell_31_io_b_in),
    .io_sum_in(cell_31_io_sum_in),
    .io_last(cell_31_io_last),
    .io_a_out(cell_31_io_a_out),
    .io_b_out(cell_31_io_b_out),
    .io_sum_out(cell_31_io_sum_out),
    .io_ready(cell_31_io_ready),
    .io_a(cell_31_io_a),
    .io_b(cell_31_io_b),
    .io_A(cell_31_io_A),
    .io_B(cell_31_io_B)
  );
  mul_cell cell_32 ( // @[mul.scala 95:35]
    .clock(cell_32_clock),
    .reset(cell_32_reset),
    .io_flush(cell_32_io_flush),
    .io_valid(cell_32_io_valid),
    .io_a_in(cell_32_io_a_in),
    .io_b_in(cell_32_io_b_in),
    .io_sum_in(cell_32_io_sum_in),
    .io_last(cell_32_io_last),
    .io_a_out(cell_32_io_a_out),
    .io_b_out(cell_32_io_b_out),
    .io_sum_out(cell_32_io_sum_out),
    .io_ready(cell_32_io_ready),
    .io_a(cell_32_io_a),
    .io_b(cell_32_io_b),
    .io_A(cell_32_io_A),
    .io_B(cell_32_io_B)
  );
  mul_cell cell_33 ( // @[mul.scala 95:35]
    .clock(cell_33_clock),
    .reset(cell_33_reset),
    .io_flush(cell_33_io_flush),
    .io_valid(cell_33_io_valid),
    .io_a_in(cell_33_io_a_in),
    .io_b_in(cell_33_io_b_in),
    .io_sum_in(cell_33_io_sum_in),
    .io_last(cell_33_io_last),
    .io_a_out(cell_33_io_a_out),
    .io_b_out(cell_33_io_b_out),
    .io_sum_out(cell_33_io_sum_out),
    .io_ready(cell_33_io_ready),
    .io_a(cell_33_io_a),
    .io_b(cell_33_io_b),
    .io_A(cell_33_io_A),
    .io_B(cell_33_io_B)
  );
  mul_cell cell_34 ( // @[mul.scala 95:35]
    .clock(cell_34_clock),
    .reset(cell_34_reset),
    .io_flush(cell_34_io_flush),
    .io_valid(cell_34_io_valid),
    .io_a_in(cell_34_io_a_in),
    .io_b_in(cell_34_io_b_in),
    .io_sum_in(cell_34_io_sum_in),
    .io_last(cell_34_io_last),
    .io_a_out(cell_34_io_a_out),
    .io_b_out(cell_34_io_b_out),
    .io_sum_out(cell_34_io_sum_out),
    .io_ready(cell_34_io_ready),
    .io_a(cell_34_io_a),
    .io_b(cell_34_io_b),
    .io_A(cell_34_io_A),
    .io_B(cell_34_io_B)
  );
  mul_cell cell_35 ( // @[mul.scala 95:35]
    .clock(cell_35_clock),
    .reset(cell_35_reset),
    .io_flush(cell_35_io_flush),
    .io_valid(cell_35_io_valid),
    .io_a_in(cell_35_io_a_in),
    .io_b_in(cell_35_io_b_in),
    .io_sum_in(cell_35_io_sum_in),
    .io_last(cell_35_io_last),
    .io_a_out(cell_35_io_a_out),
    .io_b_out(cell_35_io_b_out),
    .io_sum_out(cell_35_io_sum_out),
    .io_ready(cell_35_io_ready),
    .io_a(cell_35_io_a),
    .io_b(cell_35_io_b),
    .io_A(cell_35_io_A),
    .io_B(cell_35_io_B)
  );
  mul_cell cell_36 ( // @[mul.scala 95:35]
    .clock(cell_36_clock),
    .reset(cell_36_reset),
    .io_flush(cell_36_io_flush),
    .io_valid(cell_36_io_valid),
    .io_a_in(cell_36_io_a_in),
    .io_b_in(cell_36_io_b_in),
    .io_sum_in(cell_36_io_sum_in),
    .io_last(cell_36_io_last),
    .io_a_out(cell_36_io_a_out),
    .io_b_out(cell_36_io_b_out),
    .io_sum_out(cell_36_io_sum_out),
    .io_ready(cell_36_io_ready),
    .io_a(cell_36_io_a),
    .io_b(cell_36_io_b),
    .io_A(cell_36_io_A),
    .io_B(cell_36_io_B)
  );
  mul_cell cell_37 ( // @[mul.scala 95:35]
    .clock(cell_37_clock),
    .reset(cell_37_reset),
    .io_flush(cell_37_io_flush),
    .io_valid(cell_37_io_valid),
    .io_a_in(cell_37_io_a_in),
    .io_b_in(cell_37_io_b_in),
    .io_sum_in(cell_37_io_sum_in),
    .io_last(cell_37_io_last),
    .io_a_out(cell_37_io_a_out),
    .io_b_out(cell_37_io_b_out),
    .io_sum_out(cell_37_io_sum_out),
    .io_ready(cell_37_io_ready),
    .io_a(cell_37_io_a),
    .io_b(cell_37_io_b),
    .io_A(cell_37_io_A),
    .io_B(cell_37_io_B)
  );
  mul_cell cell_38 ( // @[mul.scala 95:35]
    .clock(cell_38_clock),
    .reset(cell_38_reset),
    .io_flush(cell_38_io_flush),
    .io_valid(cell_38_io_valid),
    .io_a_in(cell_38_io_a_in),
    .io_b_in(cell_38_io_b_in),
    .io_sum_in(cell_38_io_sum_in),
    .io_last(cell_38_io_last),
    .io_a_out(cell_38_io_a_out),
    .io_b_out(cell_38_io_b_out),
    .io_sum_out(cell_38_io_sum_out),
    .io_ready(cell_38_io_ready),
    .io_a(cell_38_io_a),
    .io_b(cell_38_io_b),
    .io_A(cell_38_io_A),
    .io_B(cell_38_io_B)
  );
  mul_cell cell_39 ( // @[mul.scala 95:35]
    .clock(cell_39_clock),
    .reset(cell_39_reset),
    .io_flush(cell_39_io_flush),
    .io_valid(cell_39_io_valid),
    .io_a_in(cell_39_io_a_in),
    .io_b_in(cell_39_io_b_in),
    .io_sum_in(cell_39_io_sum_in),
    .io_last(cell_39_io_last),
    .io_a_out(cell_39_io_a_out),
    .io_b_out(cell_39_io_b_out),
    .io_sum_out(cell_39_io_sum_out),
    .io_ready(cell_39_io_ready),
    .io_a(cell_39_io_a),
    .io_b(cell_39_io_b),
    .io_A(cell_39_io_A),
    .io_B(cell_39_io_B)
  );
  mul_cell cell_40 ( // @[mul.scala 95:35]
    .clock(cell_40_clock),
    .reset(cell_40_reset),
    .io_flush(cell_40_io_flush),
    .io_valid(cell_40_io_valid),
    .io_a_in(cell_40_io_a_in),
    .io_b_in(cell_40_io_b_in),
    .io_sum_in(cell_40_io_sum_in),
    .io_last(cell_40_io_last),
    .io_a_out(cell_40_io_a_out),
    .io_b_out(cell_40_io_b_out),
    .io_sum_out(cell_40_io_sum_out),
    .io_ready(cell_40_io_ready),
    .io_a(cell_40_io_a),
    .io_b(cell_40_io_b),
    .io_A(cell_40_io_A),
    .io_B(cell_40_io_B)
  );
  mul_cell cell_41 ( // @[mul.scala 95:35]
    .clock(cell_41_clock),
    .reset(cell_41_reset),
    .io_flush(cell_41_io_flush),
    .io_valid(cell_41_io_valid),
    .io_a_in(cell_41_io_a_in),
    .io_b_in(cell_41_io_b_in),
    .io_sum_in(cell_41_io_sum_in),
    .io_last(cell_41_io_last),
    .io_a_out(cell_41_io_a_out),
    .io_b_out(cell_41_io_b_out),
    .io_sum_out(cell_41_io_sum_out),
    .io_ready(cell_41_io_ready),
    .io_a(cell_41_io_a),
    .io_b(cell_41_io_b),
    .io_A(cell_41_io_A),
    .io_B(cell_41_io_B)
  );
  mul_cell cell_42 ( // @[mul.scala 95:35]
    .clock(cell_42_clock),
    .reset(cell_42_reset),
    .io_flush(cell_42_io_flush),
    .io_valid(cell_42_io_valid),
    .io_a_in(cell_42_io_a_in),
    .io_b_in(cell_42_io_b_in),
    .io_sum_in(cell_42_io_sum_in),
    .io_last(cell_42_io_last),
    .io_a_out(cell_42_io_a_out),
    .io_b_out(cell_42_io_b_out),
    .io_sum_out(cell_42_io_sum_out),
    .io_ready(cell_42_io_ready),
    .io_a(cell_42_io_a),
    .io_b(cell_42_io_b),
    .io_A(cell_42_io_A),
    .io_B(cell_42_io_B)
  );
  mul_cell cell_43 ( // @[mul.scala 95:35]
    .clock(cell_43_clock),
    .reset(cell_43_reset),
    .io_flush(cell_43_io_flush),
    .io_valid(cell_43_io_valid),
    .io_a_in(cell_43_io_a_in),
    .io_b_in(cell_43_io_b_in),
    .io_sum_in(cell_43_io_sum_in),
    .io_last(cell_43_io_last),
    .io_a_out(cell_43_io_a_out),
    .io_b_out(cell_43_io_b_out),
    .io_sum_out(cell_43_io_sum_out),
    .io_ready(cell_43_io_ready),
    .io_a(cell_43_io_a),
    .io_b(cell_43_io_b),
    .io_A(cell_43_io_A),
    .io_B(cell_43_io_B)
  );
  mul_cell cell_44 ( // @[mul.scala 95:35]
    .clock(cell_44_clock),
    .reset(cell_44_reset),
    .io_flush(cell_44_io_flush),
    .io_valid(cell_44_io_valid),
    .io_a_in(cell_44_io_a_in),
    .io_b_in(cell_44_io_b_in),
    .io_sum_in(cell_44_io_sum_in),
    .io_last(cell_44_io_last),
    .io_a_out(cell_44_io_a_out),
    .io_b_out(cell_44_io_b_out),
    .io_sum_out(cell_44_io_sum_out),
    .io_ready(cell_44_io_ready),
    .io_a(cell_44_io_a),
    .io_b(cell_44_io_b),
    .io_A(cell_44_io_A),
    .io_B(cell_44_io_B)
  );
  mul_cell cell_45 ( // @[mul.scala 95:35]
    .clock(cell_45_clock),
    .reset(cell_45_reset),
    .io_flush(cell_45_io_flush),
    .io_valid(cell_45_io_valid),
    .io_a_in(cell_45_io_a_in),
    .io_b_in(cell_45_io_b_in),
    .io_sum_in(cell_45_io_sum_in),
    .io_last(cell_45_io_last),
    .io_a_out(cell_45_io_a_out),
    .io_b_out(cell_45_io_b_out),
    .io_sum_out(cell_45_io_sum_out),
    .io_ready(cell_45_io_ready),
    .io_a(cell_45_io_a),
    .io_b(cell_45_io_b),
    .io_A(cell_45_io_A),
    .io_B(cell_45_io_B)
  );
  mul_cell cell_46 ( // @[mul.scala 95:35]
    .clock(cell_46_clock),
    .reset(cell_46_reset),
    .io_flush(cell_46_io_flush),
    .io_valid(cell_46_io_valid),
    .io_a_in(cell_46_io_a_in),
    .io_b_in(cell_46_io_b_in),
    .io_sum_in(cell_46_io_sum_in),
    .io_last(cell_46_io_last),
    .io_a_out(cell_46_io_a_out),
    .io_b_out(cell_46_io_b_out),
    .io_sum_out(cell_46_io_sum_out),
    .io_ready(cell_46_io_ready),
    .io_a(cell_46_io_a),
    .io_b(cell_46_io_b),
    .io_A(cell_46_io_A),
    .io_B(cell_46_io_B)
  );
  mul_cell cell_47 ( // @[mul.scala 95:35]
    .clock(cell_47_clock),
    .reset(cell_47_reset),
    .io_flush(cell_47_io_flush),
    .io_valid(cell_47_io_valid),
    .io_a_in(cell_47_io_a_in),
    .io_b_in(cell_47_io_b_in),
    .io_sum_in(cell_47_io_sum_in),
    .io_last(cell_47_io_last),
    .io_a_out(cell_47_io_a_out),
    .io_b_out(cell_47_io_b_out),
    .io_sum_out(cell_47_io_sum_out),
    .io_ready(cell_47_io_ready),
    .io_a(cell_47_io_a),
    .io_b(cell_47_io_b),
    .io_A(cell_47_io_A),
    .io_B(cell_47_io_B)
  );
  mul_cell cell_48 ( // @[mul.scala 95:35]
    .clock(cell_48_clock),
    .reset(cell_48_reset),
    .io_flush(cell_48_io_flush),
    .io_valid(cell_48_io_valid),
    .io_a_in(cell_48_io_a_in),
    .io_b_in(cell_48_io_b_in),
    .io_sum_in(cell_48_io_sum_in),
    .io_last(cell_48_io_last),
    .io_a_out(cell_48_io_a_out),
    .io_b_out(cell_48_io_b_out),
    .io_sum_out(cell_48_io_sum_out),
    .io_ready(cell_48_io_ready),
    .io_a(cell_48_io_a),
    .io_b(cell_48_io_b),
    .io_A(cell_48_io_A),
    .io_B(cell_48_io_B)
  );
  mul_cell cell_49 ( // @[mul.scala 95:35]
    .clock(cell_49_clock),
    .reset(cell_49_reset),
    .io_flush(cell_49_io_flush),
    .io_valid(cell_49_io_valid),
    .io_a_in(cell_49_io_a_in),
    .io_b_in(cell_49_io_b_in),
    .io_sum_in(cell_49_io_sum_in),
    .io_last(cell_49_io_last),
    .io_a_out(cell_49_io_a_out),
    .io_b_out(cell_49_io_b_out),
    .io_sum_out(cell_49_io_sum_out),
    .io_ready(cell_49_io_ready),
    .io_a(cell_49_io_a),
    .io_b(cell_49_io_b),
    .io_A(cell_49_io_A),
    .io_B(cell_49_io_B)
  );
  mul_cell cell_50 ( // @[mul.scala 95:35]
    .clock(cell_50_clock),
    .reset(cell_50_reset),
    .io_flush(cell_50_io_flush),
    .io_valid(cell_50_io_valid),
    .io_a_in(cell_50_io_a_in),
    .io_b_in(cell_50_io_b_in),
    .io_sum_in(cell_50_io_sum_in),
    .io_last(cell_50_io_last),
    .io_a_out(cell_50_io_a_out),
    .io_b_out(cell_50_io_b_out),
    .io_sum_out(cell_50_io_sum_out),
    .io_ready(cell_50_io_ready),
    .io_a(cell_50_io_a),
    .io_b(cell_50_io_b),
    .io_A(cell_50_io_A),
    .io_B(cell_50_io_B)
  );
  mul_cell cell_51 ( // @[mul.scala 95:35]
    .clock(cell_51_clock),
    .reset(cell_51_reset),
    .io_flush(cell_51_io_flush),
    .io_valid(cell_51_io_valid),
    .io_a_in(cell_51_io_a_in),
    .io_b_in(cell_51_io_b_in),
    .io_sum_in(cell_51_io_sum_in),
    .io_last(cell_51_io_last),
    .io_a_out(cell_51_io_a_out),
    .io_b_out(cell_51_io_b_out),
    .io_sum_out(cell_51_io_sum_out),
    .io_ready(cell_51_io_ready),
    .io_a(cell_51_io_a),
    .io_b(cell_51_io_b),
    .io_A(cell_51_io_A),
    .io_B(cell_51_io_B)
  );
  mul_cell cell_52 ( // @[mul.scala 95:35]
    .clock(cell_52_clock),
    .reset(cell_52_reset),
    .io_flush(cell_52_io_flush),
    .io_valid(cell_52_io_valid),
    .io_a_in(cell_52_io_a_in),
    .io_b_in(cell_52_io_b_in),
    .io_sum_in(cell_52_io_sum_in),
    .io_last(cell_52_io_last),
    .io_a_out(cell_52_io_a_out),
    .io_b_out(cell_52_io_b_out),
    .io_sum_out(cell_52_io_sum_out),
    .io_ready(cell_52_io_ready),
    .io_a(cell_52_io_a),
    .io_b(cell_52_io_b),
    .io_A(cell_52_io_A),
    .io_B(cell_52_io_B)
  );
  mul_cell cell_53 ( // @[mul.scala 95:35]
    .clock(cell_53_clock),
    .reset(cell_53_reset),
    .io_flush(cell_53_io_flush),
    .io_valid(cell_53_io_valid),
    .io_a_in(cell_53_io_a_in),
    .io_b_in(cell_53_io_b_in),
    .io_sum_in(cell_53_io_sum_in),
    .io_last(cell_53_io_last),
    .io_a_out(cell_53_io_a_out),
    .io_b_out(cell_53_io_b_out),
    .io_sum_out(cell_53_io_sum_out),
    .io_ready(cell_53_io_ready),
    .io_a(cell_53_io_a),
    .io_b(cell_53_io_b),
    .io_A(cell_53_io_A),
    .io_B(cell_53_io_B)
  );
  mul_cell cell_54 ( // @[mul.scala 95:35]
    .clock(cell_54_clock),
    .reset(cell_54_reset),
    .io_flush(cell_54_io_flush),
    .io_valid(cell_54_io_valid),
    .io_a_in(cell_54_io_a_in),
    .io_b_in(cell_54_io_b_in),
    .io_sum_in(cell_54_io_sum_in),
    .io_last(cell_54_io_last),
    .io_a_out(cell_54_io_a_out),
    .io_b_out(cell_54_io_b_out),
    .io_sum_out(cell_54_io_sum_out),
    .io_ready(cell_54_io_ready),
    .io_a(cell_54_io_a),
    .io_b(cell_54_io_b),
    .io_A(cell_54_io_A),
    .io_B(cell_54_io_B)
  );
  mul_cell cell_55 ( // @[mul.scala 95:35]
    .clock(cell_55_clock),
    .reset(cell_55_reset),
    .io_flush(cell_55_io_flush),
    .io_valid(cell_55_io_valid),
    .io_a_in(cell_55_io_a_in),
    .io_b_in(cell_55_io_b_in),
    .io_sum_in(cell_55_io_sum_in),
    .io_last(cell_55_io_last),
    .io_a_out(cell_55_io_a_out),
    .io_b_out(cell_55_io_b_out),
    .io_sum_out(cell_55_io_sum_out),
    .io_ready(cell_55_io_ready),
    .io_a(cell_55_io_a),
    .io_b(cell_55_io_b),
    .io_A(cell_55_io_A),
    .io_B(cell_55_io_B)
  );
  mul_cell cell_56 ( // @[mul.scala 95:35]
    .clock(cell_56_clock),
    .reset(cell_56_reset),
    .io_flush(cell_56_io_flush),
    .io_valid(cell_56_io_valid),
    .io_a_in(cell_56_io_a_in),
    .io_b_in(cell_56_io_b_in),
    .io_sum_in(cell_56_io_sum_in),
    .io_last(cell_56_io_last),
    .io_a_out(cell_56_io_a_out),
    .io_b_out(cell_56_io_b_out),
    .io_sum_out(cell_56_io_sum_out),
    .io_ready(cell_56_io_ready),
    .io_a(cell_56_io_a),
    .io_b(cell_56_io_b),
    .io_A(cell_56_io_A),
    .io_B(cell_56_io_B)
  );
  mul_cell cell_57 ( // @[mul.scala 95:35]
    .clock(cell_57_clock),
    .reset(cell_57_reset),
    .io_flush(cell_57_io_flush),
    .io_valid(cell_57_io_valid),
    .io_a_in(cell_57_io_a_in),
    .io_b_in(cell_57_io_b_in),
    .io_sum_in(cell_57_io_sum_in),
    .io_last(cell_57_io_last),
    .io_a_out(cell_57_io_a_out),
    .io_b_out(cell_57_io_b_out),
    .io_sum_out(cell_57_io_sum_out),
    .io_ready(cell_57_io_ready),
    .io_a(cell_57_io_a),
    .io_b(cell_57_io_b),
    .io_A(cell_57_io_A),
    .io_B(cell_57_io_B)
  );
  mul_cell cell_58 ( // @[mul.scala 95:35]
    .clock(cell_58_clock),
    .reset(cell_58_reset),
    .io_flush(cell_58_io_flush),
    .io_valid(cell_58_io_valid),
    .io_a_in(cell_58_io_a_in),
    .io_b_in(cell_58_io_b_in),
    .io_sum_in(cell_58_io_sum_in),
    .io_last(cell_58_io_last),
    .io_a_out(cell_58_io_a_out),
    .io_b_out(cell_58_io_b_out),
    .io_sum_out(cell_58_io_sum_out),
    .io_ready(cell_58_io_ready),
    .io_a(cell_58_io_a),
    .io_b(cell_58_io_b),
    .io_A(cell_58_io_A),
    .io_B(cell_58_io_B)
  );
  mul_cell cell_59 ( // @[mul.scala 95:35]
    .clock(cell_59_clock),
    .reset(cell_59_reset),
    .io_flush(cell_59_io_flush),
    .io_valid(cell_59_io_valid),
    .io_a_in(cell_59_io_a_in),
    .io_b_in(cell_59_io_b_in),
    .io_sum_in(cell_59_io_sum_in),
    .io_last(cell_59_io_last),
    .io_a_out(cell_59_io_a_out),
    .io_b_out(cell_59_io_b_out),
    .io_sum_out(cell_59_io_sum_out),
    .io_ready(cell_59_io_ready),
    .io_a(cell_59_io_a),
    .io_b(cell_59_io_b),
    .io_A(cell_59_io_A),
    .io_B(cell_59_io_B)
  );
  mul_cell cell_60 ( // @[mul.scala 95:35]
    .clock(cell_60_clock),
    .reset(cell_60_reset),
    .io_flush(cell_60_io_flush),
    .io_valid(cell_60_io_valid),
    .io_a_in(cell_60_io_a_in),
    .io_b_in(cell_60_io_b_in),
    .io_sum_in(cell_60_io_sum_in),
    .io_last(cell_60_io_last),
    .io_a_out(cell_60_io_a_out),
    .io_b_out(cell_60_io_b_out),
    .io_sum_out(cell_60_io_sum_out),
    .io_ready(cell_60_io_ready),
    .io_a(cell_60_io_a),
    .io_b(cell_60_io_b),
    .io_A(cell_60_io_A),
    .io_B(cell_60_io_B)
  );
  mul_cell cell_61 ( // @[mul.scala 95:35]
    .clock(cell_61_clock),
    .reset(cell_61_reset),
    .io_flush(cell_61_io_flush),
    .io_valid(cell_61_io_valid),
    .io_a_in(cell_61_io_a_in),
    .io_b_in(cell_61_io_b_in),
    .io_sum_in(cell_61_io_sum_in),
    .io_last(cell_61_io_last),
    .io_a_out(cell_61_io_a_out),
    .io_b_out(cell_61_io_b_out),
    .io_sum_out(cell_61_io_sum_out),
    .io_ready(cell_61_io_ready),
    .io_a(cell_61_io_a),
    .io_b(cell_61_io_b),
    .io_A(cell_61_io_A),
    .io_B(cell_61_io_B)
  );
  mul_cell cell_62 ( // @[mul.scala 95:35]
    .clock(cell_62_clock),
    .reset(cell_62_reset),
    .io_flush(cell_62_io_flush),
    .io_valid(cell_62_io_valid),
    .io_a_in(cell_62_io_a_in),
    .io_b_in(cell_62_io_b_in),
    .io_sum_in(cell_62_io_sum_in),
    .io_last(cell_62_io_last),
    .io_a_out(cell_62_io_a_out),
    .io_b_out(cell_62_io_b_out),
    .io_sum_out(cell_62_io_sum_out),
    .io_ready(cell_62_io_ready),
    .io_a(cell_62_io_a),
    .io_b(cell_62_io_b),
    .io_A(cell_62_io_A),
    .io_B(cell_62_io_B)
  );
  mul_cell cell_63 ( // @[mul.scala 95:35]
    .clock(cell_63_clock),
    .reset(cell_63_reset),
    .io_flush(cell_63_io_flush),
    .io_valid(cell_63_io_valid),
    .io_a_in(cell_63_io_a_in),
    .io_b_in(cell_63_io_b_in),
    .io_sum_in(cell_63_io_sum_in),
    .io_last(cell_63_io_last),
    .io_a_out(cell_63_io_a_out),
    .io_b_out(cell_63_io_b_out),
    .io_sum_out(cell_63_io_sum_out),
    .io_ready(cell_63_io_ready),
    .io_a(cell_63_io_a),
    .io_b(cell_63_io_b),
    .io_A(cell_63_io_A),
    .io_B(cell_63_io_B)
  );
  mul_cell cell_64 ( // @[mul.scala 95:35]
    .clock(cell_64_clock),
    .reset(cell_64_reset),
    .io_flush(cell_64_io_flush),
    .io_valid(cell_64_io_valid),
    .io_a_in(cell_64_io_a_in),
    .io_b_in(cell_64_io_b_in),
    .io_sum_in(cell_64_io_sum_in),
    .io_last(cell_64_io_last),
    .io_a_out(cell_64_io_a_out),
    .io_b_out(cell_64_io_b_out),
    .io_sum_out(cell_64_io_sum_out),
    .io_ready(cell_64_io_ready),
    .io_a(cell_64_io_a),
    .io_b(cell_64_io_b),
    .io_A(cell_64_io_A),
    .io_B(cell_64_io_B)
  );
  assign io_out_valid = cell_64_io_ready; // @[mul.scala 118:18]
  assign io_result_lo = cell_64_io_sum_out[63:0]; // @[mul.scala 120:41]
  assign cell_0_clock = clock;
  assign cell_0_reset = reset;
  assign cell_0_io_flush = 1'h0; // @[mul.scala 97:23]
  assign cell_0_io_valid = valid; // @[mul.scala 98:23]
  assign cell_0_io_a_in = a; // @[mul.scala 99:23]
  assign cell_0_io_b_in = b; // @[mul.scala 100:23]
  assign cell_0_io_sum_in = 129'h0; // @[mul.scala 101:23]
  assign cell_0_io_last = 1'h0; // @[mul.scala 102:23]
  assign cell_0_io_a = io_multiplicand; // @[mul.scala 103:23]
  assign cell_0_io_b = io_multiplier; // @[mul.scala 104:23]
  assign cell_1_clock = clock;
  assign cell_1_reset = reset;
  assign cell_1_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_1_io_valid = cell_0_io_ready; // @[mul.scala 108:25]
  assign cell_1_io_a_in = cell_0_io_a_out; // @[mul.scala 109:25]
  assign cell_1_io_b_in = cell_0_io_b_out; // @[mul.scala 110:25]
  assign cell_1_io_sum_in = cell_0_io_sum_out; // @[mul.scala 111:25]
  assign cell_1_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_1_io_a = cell_0_io_A; // @[mul.scala 113:25]
  assign cell_1_io_b = cell_0_io_B; // @[mul.scala 114:25]
  assign cell_2_clock = clock;
  assign cell_2_reset = reset;
  assign cell_2_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_2_io_valid = cell_1_io_ready; // @[mul.scala 108:25]
  assign cell_2_io_a_in = cell_1_io_a_out; // @[mul.scala 109:25]
  assign cell_2_io_b_in = cell_1_io_b_out; // @[mul.scala 110:25]
  assign cell_2_io_sum_in = cell_1_io_sum_out; // @[mul.scala 111:25]
  assign cell_2_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_2_io_a = cell_1_io_A; // @[mul.scala 113:25]
  assign cell_2_io_b = cell_1_io_B; // @[mul.scala 114:25]
  assign cell_3_clock = clock;
  assign cell_3_reset = reset;
  assign cell_3_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_3_io_valid = cell_2_io_ready; // @[mul.scala 108:25]
  assign cell_3_io_a_in = cell_2_io_a_out; // @[mul.scala 109:25]
  assign cell_3_io_b_in = cell_2_io_b_out; // @[mul.scala 110:25]
  assign cell_3_io_sum_in = cell_2_io_sum_out; // @[mul.scala 111:25]
  assign cell_3_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_3_io_a = cell_2_io_A; // @[mul.scala 113:25]
  assign cell_3_io_b = cell_2_io_B; // @[mul.scala 114:25]
  assign cell_4_clock = clock;
  assign cell_4_reset = reset;
  assign cell_4_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_4_io_valid = cell_3_io_ready; // @[mul.scala 108:25]
  assign cell_4_io_a_in = cell_3_io_a_out; // @[mul.scala 109:25]
  assign cell_4_io_b_in = cell_3_io_b_out; // @[mul.scala 110:25]
  assign cell_4_io_sum_in = cell_3_io_sum_out; // @[mul.scala 111:25]
  assign cell_4_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_4_io_a = cell_3_io_A; // @[mul.scala 113:25]
  assign cell_4_io_b = cell_3_io_B; // @[mul.scala 114:25]
  assign cell_5_clock = clock;
  assign cell_5_reset = reset;
  assign cell_5_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_5_io_valid = cell_4_io_ready; // @[mul.scala 108:25]
  assign cell_5_io_a_in = cell_4_io_a_out; // @[mul.scala 109:25]
  assign cell_5_io_b_in = cell_4_io_b_out; // @[mul.scala 110:25]
  assign cell_5_io_sum_in = cell_4_io_sum_out; // @[mul.scala 111:25]
  assign cell_5_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_5_io_a = cell_4_io_A; // @[mul.scala 113:25]
  assign cell_5_io_b = cell_4_io_B; // @[mul.scala 114:25]
  assign cell_6_clock = clock;
  assign cell_6_reset = reset;
  assign cell_6_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_6_io_valid = cell_5_io_ready; // @[mul.scala 108:25]
  assign cell_6_io_a_in = cell_5_io_a_out; // @[mul.scala 109:25]
  assign cell_6_io_b_in = cell_5_io_b_out; // @[mul.scala 110:25]
  assign cell_6_io_sum_in = cell_5_io_sum_out; // @[mul.scala 111:25]
  assign cell_6_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_6_io_a = cell_5_io_A; // @[mul.scala 113:25]
  assign cell_6_io_b = cell_5_io_B; // @[mul.scala 114:25]
  assign cell_7_clock = clock;
  assign cell_7_reset = reset;
  assign cell_7_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_7_io_valid = cell_6_io_ready; // @[mul.scala 108:25]
  assign cell_7_io_a_in = cell_6_io_a_out; // @[mul.scala 109:25]
  assign cell_7_io_b_in = cell_6_io_b_out; // @[mul.scala 110:25]
  assign cell_7_io_sum_in = cell_6_io_sum_out; // @[mul.scala 111:25]
  assign cell_7_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_7_io_a = cell_6_io_A; // @[mul.scala 113:25]
  assign cell_7_io_b = cell_6_io_B; // @[mul.scala 114:25]
  assign cell_8_clock = clock;
  assign cell_8_reset = reset;
  assign cell_8_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_8_io_valid = cell_7_io_ready; // @[mul.scala 108:25]
  assign cell_8_io_a_in = cell_7_io_a_out; // @[mul.scala 109:25]
  assign cell_8_io_b_in = cell_7_io_b_out; // @[mul.scala 110:25]
  assign cell_8_io_sum_in = cell_7_io_sum_out; // @[mul.scala 111:25]
  assign cell_8_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_8_io_a = cell_7_io_A; // @[mul.scala 113:25]
  assign cell_8_io_b = cell_7_io_B; // @[mul.scala 114:25]
  assign cell_9_clock = clock;
  assign cell_9_reset = reset;
  assign cell_9_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_9_io_valid = cell_8_io_ready; // @[mul.scala 108:25]
  assign cell_9_io_a_in = cell_8_io_a_out; // @[mul.scala 109:25]
  assign cell_9_io_b_in = cell_8_io_b_out; // @[mul.scala 110:25]
  assign cell_9_io_sum_in = cell_8_io_sum_out; // @[mul.scala 111:25]
  assign cell_9_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_9_io_a = cell_8_io_A; // @[mul.scala 113:25]
  assign cell_9_io_b = cell_8_io_B; // @[mul.scala 114:25]
  assign cell_10_clock = clock;
  assign cell_10_reset = reset;
  assign cell_10_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_10_io_valid = cell_9_io_ready; // @[mul.scala 108:25]
  assign cell_10_io_a_in = cell_9_io_a_out; // @[mul.scala 109:25]
  assign cell_10_io_b_in = cell_9_io_b_out; // @[mul.scala 110:25]
  assign cell_10_io_sum_in = cell_9_io_sum_out; // @[mul.scala 111:25]
  assign cell_10_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_10_io_a = cell_9_io_A; // @[mul.scala 113:25]
  assign cell_10_io_b = cell_9_io_B; // @[mul.scala 114:25]
  assign cell_11_clock = clock;
  assign cell_11_reset = reset;
  assign cell_11_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_11_io_valid = cell_10_io_ready; // @[mul.scala 108:25]
  assign cell_11_io_a_in = cell_10_io_a_out; // @[mul.scala 109:25]
  assign cell_11_io_b_in = cell_10_io_b_out; // @[mul.scala 110:25]
  assign cell_11_io_sum_in = cell_10_io_sum_out; // @[mul.scala 111:25]
  assign cell_11_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_11_io_a = cell_10_io_A; // @[mul.scala 113:25]
  assign cell_11_io_b = cell_10_io_B; // @[mul.scala 114:25]
  assign cell_12_clock = clock;
  assign cell_12_reset = reset;
  assign cell_12_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_12_io_valid = cell_11_io_ready; // @[mul.scala 108:25]
  assign cell_12_io_a_in = cell_11_io_a_out; // @[mul.scala 109:25]
  assign cell_12_io_b_in = cell_11_io_b_out; // @[mul.scala 110:25]
  assign cell_12_io_sum_in = cell_11_io_sum_out; // @[mul.scala 111:25]
  assign cell_12_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_12_io_a = cell_11_io_A; // @[mul.scala 113:25]
  assign cell_12_io_b = cell_11_io_B; // @[mul.scala 114:25]
  assign cell_13_clock = clock;
  assign cell_13_reset = reset;
  assign cell_13_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_13_io_valid = cell_12_io_ready; // @[mul.scala 108:25]
  assign cell_13_io_a_in = cell_12_io_a_out; // @[mul.scala 109:25]
  assign cell_13_io_b_in = cell_12_io_b_out; // @[mul.scala 110:25]
  assign cell_13_io_sum_in = cell_12_io_sum_out; // @[mul.scala 111:25]
  assign cell_13_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_13_io_a = cell_12_io_A; // @[mul.scala 113:25]
  assign cell_13_io_b = cell_12_io_B; // @[mul.scala 114:25]
  assign cell_14_clock = clock;
  assign cell_14_reset = reset;
  assign cell_14_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_14_io_valid = cell_13_io_ready; // @[mul.scala 108:25]
  assign cell_14_io_a_in = cell_13_io_a_out; // @[mul.scala 109:25]
  assign cell_14_io_b_in = cell_13_io_b_out; // @[mul.scala 110:25]
  assign cell_14_io_sum_in = cell_13_io_sum_out; // @[mul.scala 111:25]
  assign cell_14_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_14_io_a = cell_13_io_A; // @[mul.scala 113:25]
  assign cell_14_io_b = cell_13_io_B; // @[mul.scala 114:25]
  assign cell_15_clock = clock;
  assign cell_15_reset = reset;
  assign cell_15_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_15_io_valid = cell_14_io_ready; // @[mul.scala 108:25]
  assign cell_15_io_a_in = cell_14_io_a_out; // @[mul.scala 109:25]
  assign cell_15_io_b_in = cell_14_io_b_out; // @[mul.scala 110:25]
  assign cell_15_io_sum_in = cell_14_io_sum_out; // @[mul.scala 111:25]
  assign cell_15_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_15_io_a = cell_14_io_A; // @[mul.scala 113:25]
  assign cell_15_io_b = cell_14_io_B; // @[mul.scala 114:25]
  assign cell_16_clock = clock;
  assign cell_16_reset = reset;
  assign cell_16_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_16_io_valid = cell_15_io_ready; // @[mul.scala 108:25]
  assign cell_16_io_a_in = cell_15_io_a_out; // @[mul.scala 109:25]
  assign cell_16_io_b_in = cell_15_io_b_out; // @[mul.scala 110:25]
  assign cell_16_io_sum_in = cell_15_io_sum_out; // @[mul.scala 111:25]
  assign cell_16_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_16_io_a = cell_15_io_A; // @[mul.scala 113:25]
  assign cell_16_io_b = cell_15_io_B; // @[mul.scala 114:25]
  assign cell_17_clock = clock;
  assign cell_17_reset = reset;
  assign cell_17_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_17_io_valid = cell_16_io_ready; // @[mul.scala 108:25]
  assign cell_17_io_a_in = cell_16_io_a_out; // @[mul.scala 109:25]
  assign cell_17_io_b_in = cell_16_io_b_out; // @[mul.scala 110:25]
  assign cell_17_io_sum_in = cell_16_io_sum_out; // @[mul.scala 111:25]
  assign cell_17_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_17_io_a = cell_16_io_A; // @[mul.scala 113:25]
  assign cell_17_io_b = cell_16_io_B; // @[mul.scala 114:25]
  assign cell_18_clock = clock;
  assign cell_18_reset = reset;
  assign cell_18_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_18_io_valid = cell_17_io_ready; // @[mul.scala 108:25]
  assign cell_18_io_a_in = cell_17_io_a_out; // @[mul.scala 109:25]
  assign cell_18_io_b_in = cell_17_io_b_out; // @[mul.scala 110:25]
  assign cell_18_io_sum_in = cell_17_io_sum_out; // @[mul.scala 111:25]
  assign cell_18_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_18_io_a = cell_17_io_A; // @[mul.scala 113:25]
  assign cell_18_io_b = cell_17_io_B; // @[mul.scala 114:25]
  assign cell_19_clock = clock;
  assign cell_19_reset = reset;
  assign cell_19_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_19_io_valid = cell_18_io_ready; // @[mul.scala 108:25]
  assign cell_19_io_a_in = cell_18_io_a_out; // @[mul.scala 109:25]
  assign cell_19_io_b_in = cell_18_io_b_out; // @[mul.scala 110:25]
  assign cell_19_io_sum_in = cell_18_io_sum_out; // @[mul.scala 111:25]
  assign cell_19_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_19_io_a = cell_18_io_A; // @[mul.scala 113:25]
  assign cell_19_io_b = cell_18_io_B; // @[mul.scala 114:25]
  assign cell_20_clock = clock;
  assign cell_20_reset = reset;
  assign cell_20_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_20_io_valid = cell_19_io_ready; // @[mul.scala 108:25]
  assign cell_20_io_a_in = cell_19_io_a_out; // @[mul.scala 109:25]
  assign cell_20_io_b_in = cell_19_io_b_out; // @[mul.scala 110:25]
  assign cell_20_io_sum_in = cell_19_io_sum_out; // @[mul.scala 111:25]
  assign cell_20_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_20_io_a = cell_19_io_A; // @[mul.scala 113:25]
  assign cell_20_io_b = cell_19_io_B; // @[mul.scala 114:25]
  assign cell_21_clock = clock;
  assign cell_21_reset = reset;
  assign cell_21_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_21_io_valid = cell_20_io_ready; // @[mul.scala 108:25]
  assign cell_21_io_a_in = cell_20_io_a_out; // @[mul.scala 109:25]
  assign cell_21_io_b_in = cell_20_io_b_out; // @[mul.scala 110:25]
  assign cell_21_io_sum_in = cell_20_io_sum_out; // @[mul.scala 111:25]
  assign cell_21_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_21_io_a = cell_20_io_A; // @[mul.scala 113:25]
  assign cell_21_io_b = cell_20_io_B; // @[mul.scala 114:25]
  assign cell_22_clock = clock;
  assign cell_22_reset = reset;
  assign cell_22_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_22_io_valid = cell_21_io_ready; // @[mul.scala 108:25]
  assign cell_22_io_a_in = cell_21_io_a_out; // @[mul.scala 109:25]
  assign cell_22_io_b_in = cell_21_io_b_out; // @[mul.scala 110:25]
  assign cell_22_io_sum_in = cell_21_io_sum_out; // @[mul.scala 111:25]
  assign cell_22_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_22_io_a = cell_21_io_A; // @[mul.scala 113:25]
  assign cell_22_io_b = cell_21_io_B; // @[mul.scala 114:25]
  assign cell_23_clock = clock;
  assign cell_23_reset = reset;
  assign cell_23_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_23_io_valid = cell_22_io_ready; // @[mul.scala 108:25]
  assign cell_23_io_a_in = cell_22_io_a_out; // @[mul.scala 109:25]
  assign cell_23_io_b_in = cell_22_io_b_out; // @[mul.scala 110:25]
  assign cell_23_io_sum_in = cell_22_io_sum_out; // @[mul.scala 111:25]
  assign cell_23_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_23_io_a = cell_22_io_A; // @[mul.scala 113:25]
  assign cell_23_io_b = cell_22_io_B; // @[mul.scala 114:25]
  assign cell_24_clock = clock;
  assign cell_24_reset = reset;
  assign cell_24_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_24_io_valid = cell_23_io_ready; // @[mul.scala 108:25]
  assign cell_24_io_a_in = cell_23_io_a_out; // @[mul.scala 109:25]
  assign cell_24_io_b_in = cell_23_io_b_out; // @[mul.scala 110:25]
  assign cell_24_io_sum_in = cell_23_io_sum_out; // @[mul.scala 111:25]
  assign cell_24_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_24_io_a = cell_23_io_A; // @[mul.scala 113:25]
  assign cell_24_io_b = cell_23_io_B; // @[mul.scala 114:25]
  assign cell_25_clock = clock;
  assign cell_25_reset = reset;
  assign cell_25_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_25_io_valid = cell_24_io_ready; // @[mul.scala 108:25]
  assign cell_25_io_a_in = cell_24_io_a_out; // @[mul.scala 109:25]
  assign cell_25_io_b_in = cell_24_io_b_out; // @[mul.scala 110:25]
  assign cell_25_io_sum_in = cell_24_io_sum_out; // @[mul.scala 111:25]
  assign cell_25_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_25_io_a = cell_24_io_A; // @[mul.scala 113:25]
  assign cell_25_io_b = cell_24_io_B; // @[mul.scala 114:25]
  assign cell_26_clock = clock;
  assign cell_26_reset = reset;
  assign cell_26_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_26_io_valid = cell_25_io_ready; // @[mul.scala 108:25]
  assign cell_26_io_a_in = cell_25_io_a_out; // @[mul.scala 109:25]
  assign cell_26_io_b_in = cell_25_io_b_out; // @[mul.scala 110:25]
  assign cell_26_io_sum_in = cell_25_io_sum_out; // @[mul.scala 111:25]
  assign cell_26_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_26_io_a = cell_25_io_A; // @[mul.scala 113:25]
  assign cell_26_io_b = cell_25_io_B; // @[mul.scala 114:25]
  assign cell_27_clock = clock;
  assign cell_27_reset = reset;
  assign cell_27_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_27_io_valid = cell_26_io_ready; // @[mul.scala 108:25]
  assign cell_27_io_a_in = cell_26_io_a_out; // @[mul.scala 109:25]
  assign cell_27_io_b_in = cell_26_io_b_out; // @[mul.scala 110:25]
  assign cell_27_io_sum_in = cell_26_io_sum_out; // @[mul.scala 111:25]
  assign cell_27_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_27_io_a = cell_26_io_A; // @[mul.scala 113:25]
  assign cell_27_io_b = cell_26_io_B; // @[mul.scala 114:25]
  assign cell_28_clock = clock;
  assign cell_28_reset = reset;
  assign cell_28_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_28_io_valid = cell_27_io_ready; // @[mul.scala 108:25]
  assign cell_28_io_a_in = cell_27_io_a_out; // @[mul.scala 109:25]
  assign cell_28_io_b_in = cell_27_io_b_out; // @[mul.scala 110:25]
  assign cell_28_io_sum_in = cell_27_io_sum_out; // @[mul.scala 111:25]
  assign cell_28_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_28_io_a = cell_27_io_A; // @[mul.scala 113:25]
  assign cell_28_io_b = cell_27_io_B; // @[mul.scala 114:25]
  assign cell_29_clock = clock;
  assign cell_29_reset = reset;
  assign cell_29_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_29_io_valid = cell_28_io_ready; // @[mul.scala 108:25]
  assign cell_29_io_a_in = cell_28_io_a_out; // @[mul.scala 109:25]
  assign cell_29_io_b_in = cell_28_io_b_out; // @[mul.scala 110:25]
  assign cell_29_io_sum_in = cell_28_io_sum_out; // @[mul.scala 111:25]
  assign cell_29_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_29_io_a = cell_28_io_A; // @[mul.scala 113:25]
  assign cell_29_io_b = cell_28_io_B; // @[mul.scala 114:25]
  assign cell_30_clock = clock;
  assign cell_30_reset = reset;
  assign cell_30_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_30_io_valid = cell_29_io_ready; // @[mul.scala 108:25]
  assign cell_30_io_a_in = cell_29_io_a_out; // @[mul.scala 109:25]
  assign cell_30_io_b_in = cell_29_io_b_out; // @[mul.scala 110:25]
  assign cell_30_io_sum_in = cell_29_io_sum_out; // @[mul.scala 111:25]
  assign cell_30_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_30_io_a = cell_29_io_A; // @[mul.scala 113:25]
  assign cell_30_io_b = cell_29_io_B; // @[mul.scala 114:25]
  assign cell_31_clock = clock;
  assign cell_31_reset = reset;
  assign cell_31_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_31_io_valid = cell_30_io_ready; // @[mul.scala 108:25]
  assign cell_31_io_a_in = cell_30_io_a_out; // @[mul.scala 109:25]
  assign cell_31_io_b_in = cell_30_io_b_out; // @[mul.scala 110:25]
  assign cell_31_io_sum_in = cell_30_io_sum_out; // @[mul.scala 111:25]
  assign cell_31_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_31_io_a = cell_30_io_A; // @[mul.scala 113:25]
  assign cell_31_io_b = cell_30_io_B; // @[mul.scala 114:25]
  assign cell_32_clock = clock;
  assign cell_32_reset = reset;
  assign cell_32_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_32_io_valid = cell_31_io_ready; // @[mul.scala 108:25]
  assign cell_32_io_a_in = cell_31_io_a_out; // @[mul.scala 109:25]
  assign cell_32_io_b_in = cell_31_io_b_out; // @[mul.scala 110:25]
  assign cell_32_io_sum_in = cell_31_io_sum_out; // @[mul.scala 111:25]
  assign cell_32_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_32_io_a = cell_31_io_A; // @[mul.scala 113:25]
  assign cell_32_io_b = cell_31_io_B; // @[mul.scala 114:25]
  assign cell_33_clock = clock;
  assign cell_33_reset = reset;
  assign cell_33_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_33_io_valid = cell_32_io_ready; // @[mul.scala 108:25]
  assign cell_33_io_a_in = cell_32_io_a_out; // @[mul.scala 109:25]
  assign cell_33_io_b_in = cell_32_io_b_out; // @[mul.scala 110:25]
  assign cell_33_io_sum_in = cell_32_io_sum_out; // @[mul.scala 111:25]
  assign cell_33_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_33_io_a = cell_32_io_A; // @[mul.scala 113:25]
  assign cell_33_io_b = cell_32_io_B; // @[mul.scala 114:25]
  assign cell_34_clock = clock;
  assign cell_34_reset = reset;
  assign cell_34_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_34_io_valid = cell_33_io_ready; // @[mul.scala 108:25]
  assign cell_34_io_a_in = cell_33_io_a_out; // @[mul.scala 109:25]
  assign cell_34_io_b_in = cell_33_io_b_out; // @[mul.scala 110:25]
  assign cell_34_io_sum_in = cell_33_io_sum_out; // @[mul.scala 111:25]
  assign cell_34_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_34_io_a = cell_33_io_A; // @[mul.scala 113:25]
  assign cell_34_io_b = cell_33_io_B; // @[mul.scala 114:25]
  assign cell_35_clock = clock;
  assign cell_35_reset = reset;
  assign cell_35_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_35_io_valid = cell_34_io_ready; // @[mul.scala 108:25]
  assign cell_35_io_a_in = cell_34_io_a_out; // @[mul.scala 109:25]
  assign cell_35_io_b_in = cell_34_io_b_out; // @[mul.scala 110:25]
  assign cell_35_io_sum_in = cell_34_io_sum_out; // @[mul.scala 111:25]
  assign cell_35_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_35_io_a = cell_34_io_A; // @[mul.scala 113:25]
  assign cell_35_io_b = cell_34_io_B; // @[mul.scala 114:25]
  assign cell_36_clock = clock;
  assign cell_36_reset = reset;
  assign cell_36_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_36_io_valid = cell_35_io_ready; // @[mul.scala 108:25]
  assign cell_36_io_a_in = cell_35_io_a_out; // @[mul.scala 109:25]
  assign cell_36_io_b_in = cell_35_io_b_out; // @[mul.scala 110:25]
  assign cell_36_io_sum_in = cell_35_io_sum_out; // @[mul.scala 111:25]
  assign cell_36_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_36_io_a = cell_35_io_A; // @[mul.scala 113:25]
  assign cell_36_io_b = cell_35_io_B; // @[mul.scala 114:25]
  assign cell_37_clock = clock;
  assign cell_37_reset = reset;
  assign cell_37_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_37_io_valid = cell_36_io_ready; // @[mul.scala 108:25]
  assign cell_37_io_a_in = cell_36_io_a_out; // @[mul.scala 109:25]
  assign cell_37_io_b_in = cell_36_io_b_out; // @[mul.scala 110:25]
  assign cell_37_io_sum_in = cell_36_io_sum_out; // @[mul.scala 111:25]
  assign cell_37_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_37_io_a = cell_36_io_A; // @[mul.scala 113:25]
  assign cell_37_io_b = cell_36_io_B; // @[mul.scala 114:25]
  assign cell_38_clock = clock;
  assign cell_38_reset = reset;
  assign cell_38_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_38_io_valid = cell_37_io_ready; // @[mul.scala 108:25]
  assign cell_38_io_a_in = cell_37_io_a_out; // @[mul.scala 109:25]
  assign cell_38_io_b_in = cell_37_io_b_out; // @[mul.scala 110:25]
  assign cell_38_io_sum_in = cell_37_io_sum_out; // @[mul.scala 111:25]
  assign cell_38_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_38_io_a = cell_37_io_A; // @[mul.scala 113:25]
  assign cell_38_io_b = cell_37_io_B; // @[mul.scala 114:25]
  assign cell_39_clock = clock;
  assign cell_39_reset = reset;
  assign cell_39_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_39_io_valid = cell_38_io_ready; // @[mul.scala 108:25]
  assign cell_39_io_a_in = cell_38_io_a_out; // @[mul.scala 109:25]
  assign cell_39_io_b_in = cell_38_io_b_out; // @[mul.scala 110:25]
  assign cell_39_io_sum_in = cell_38_io_sum_out; // @[mul.scala 111:25]
  assign cell_39_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_39_io_a = cell_38_io_A; // @[mul.scala 113:25]
  assign cell_39_io_b = cell_38_io_B; // @[mul.scala 114:25]
  assign cell_40_clock = clock;
  assign cell_40_reset = reset;
  assign cell_40_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_40_io_valid = cell_39_io_ready; // @[mul.scala 108:25]
  assign cell_40_io_a_in = cell_39_io_a_out; // @[mul.scala 109:25]
  assign cell_40_io_b_in = cell_39_io_b_out; // @[mul.scala 110:25]
  assign cell_40_io_sum_in = cell_39_io_sum_out; // @[mul.scala 111:25]
  assign cell_40_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_40_io_a = cell_39_io_A; // @[mul.scala 113:25]
  assign cell_40_io_b = cell_39_io_B; // @[mul.scala 114:25]
  assign cell_41_clock = clock;
  assign cell_41_reset = reset;
  assign cell_41_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_41_io_valid = cell_40_io_ready; // @[mul.scala 108:25]
  assign cell_41_io_a_in = cell_40_io_a_out; // @[mul.scala 109:25]
  assign cell_41_io_b_in = cell_40_io_b_out; // @[mul.scala 110:25]
  assign cell_41_io_sum_in = cell_40_io_sum_out; // @[mul.scala 111:25]
  assign cell_41_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_41_io_a = cell_40_io_A; // @[mul.scala 113:25]
  assign cell_41_io_b = cell_40_io_B; // @[mul.scala 114:25]
  assign cell_42_clock = clock;
  assign cell_42_reset = reset;
  assign cell_42_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_42_io_valid = cell_41_io_ready; // @[mul.scala 108:25]
  assign cell_42_io_a_in = cell_41_io_a_out; // @[mul.scala 109:25]
  assign cell_42_io_b_in = cell_41_io_b_out; // @[mul.scala 110:25]
  assign cell_42_io_sum_in = cell_41_io_sum_out; // @[mul.scala 111:25]
  assign cell_42_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_42_io_a = cell_41_io_A; // @[mul.scala 113:25]
  assign cell_42_io_b = cell_41_io_B; // @[mul.scala 114:25]
  assign cell_43_clock = clock;
  assign cell_43_reset = reset;
  assign cell_43_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_43_io_valid = cell_42_io_ready; // @[mul.scala 108:25]
  assign cell_43_io_a_in = cell_42_io_a_out; // @[mul.scala 109:25]
  assign cell_43_io_b_in = cell_42_io_b_out; // @[mul.scala 110:25]
  assign cell_43_io_sum_in = cell_42_io_sum_out; // @[mul.scala 111:25]
  assign cell_43_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_43_io_a = cell_42_io_A; // @[mul.scala 113:25]
  assign cell_43_io_b = cell_42_io_B; // @[mul.scala 114:25]
  assign cell_44_clock = clock;
  assign cell_44_reset = reset;
  assign cell_44_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_44_io_valid = cell_43_io_ready; // @[mul.scala 108:25]
  assign cell_44_io_a_in = cell_43_io_a_out; // @[mul.scala 109:25]
  assign cell_44_io_b_in = cell_43_io_b_out; // @[mul.scala 110:25]
  assign cell_44_io_sum_in = cell_43_io_sum_out; // @[mul.scala 111:25]
  assign cell_44_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_44_io_a = cell_43_io_A; // @[mul.scala 113:25]
  assign cell_44_io_b = cell_43_io_B; // @[mul.scala 114:25]
  assign cell_45_clock = clock;
  assign cell_45_reset = reset;
  assign cell_45_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_45_io_valid = cell_44_io_ready; // @[mul.scala 108:25]
  assign cell_45_io_a_in = cell_44_io_a_out; // @[mul.scala 109:25]
  assign cell_45_io_b_in = cell_44_io_b_out; // @[mul.scala 110:25]
  assign cell_45_io_sum_in = cell_44_io_sum_out; // @[mul.scala 111:25]
  assign cell_45_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_45_io_a = cell_44_io_A; // @[mul.scala 113:25]
  assign cell_45_io_b = cell_44_io_B; // @[mul.scala 114:25]
  assign cell_46_clock = clock;
  assign cell_46_reset = reset;
  assign cell_46_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_46_io_valid = cell_45_io_ready; // @[mul.scala 108:25]
  assign cell_46_io_a_in = cell_45_io_a_out; // @[mul.scala 109:25]
  assign cell_46_io_b_in = cell_45_io_b_out; // @[mul.scala 110:25]
  assign cell_46_io_sum_in = cell_45_io_sum_out; // @[mul.scala 111:25]
  assign cell_46_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_46_io_a = cell_45_io_A; // @[mul.scala 113:25]
  assign cell_46_io_b = cell_45_io_B; // @[mul.scala 114:25]
  assign cell_47_clock = clock;
  assign cell_47_reset = reset;
  assign cell_47_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_47_io_valid = cell_46_io_ready; // @[mul.scala 108:25]
  assign cell_47_io_a_in = cell_46_io_a_out; // @[mul.scala 109:25]
  assign cell_47_io_b_in = cell_46_io_b_out; // @[mul.scala 110:25]
  assign cell_47_io_sum_in = cell_46_io_sum_out; // @[mul.scala 111:25]
  assign cell_47_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_47_io_a = cell_46_io_A; // @[mul.scala 113:25]
  assign cell_47_io_b = cell_46_io_B; // @[mul.scala 114:25]
  assign cell_48_clock = clock;
  assign cell_48_reset = reset;
  assign cell_48_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_48_io_valid = cell_47_io_ready; // @[mul.scala 108:25]
  assign cell_48_io_a_in = cell_47_io_a_out; // @[mul.scala 109:25]
  assign cell_48_io_b_in = cell_47_io_b_out; // @[mul.scala 110:25]
  assign cell_48_io_sum_in = cell_47_io_sum_out; // @[mul.scala 111:25]
  assign cell_48_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_48_io_a = cell_47_io_A; // @[mul.scala 113:25]
  assign cell_48_io_b = cell_47_io_B; // @[mul.scala 114:25]
  assign cell_49_clock = clock;
  assign cell_49_reset = reset;
  assign cell_49_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_49_io_valid = cell_48_io_ready; // @[mul.scala 108:25]
  assign cell_49_io_a_in = cell_48_io_a_out; // @[mul.scala 109:25]
  assign cell_49_io_b_in = cell_48_io_b_out; // @[mul.scala 110:25]
  assign cell_49_io_sum_in = cell_48_io_sum_out; // @[mul.scala 111:25]
  assign cell_49_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_49_io_a = cell_48_io_A; // @[mul.scala 113:25]
  assign cell_49_io_b = cell_48_io_B; // @[mul.scala 114:25]
  assign cell_50_clock = clock;
  assign cell_50_reset = reset;
  assign cell_50_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_50_io_valid = cell_49_io_ready; // @[mul.scala 108:25]
  assign cell_50_io_a_in = cell_49_io_a_out; // @[mul.scala 109:25]
  assign cell_50_io_b_in = cell_49_io_b_out; // @[mul.scala 110:25]
  assign cell_50_io_sum_in = cell_49_io_sum_out; // @[mul.scala 111:25]
  assign cell_50_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_50_io_a = cell_49_io_A; // @[mul.scala 113:25]
  assign cell_50_io_b = cell_49_io_B; // @[mul.scala 114:25]
  assign cell_51_clock = clock;
  assign cell_51_reset = reset;
  assign cell_51_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_51_io_valid = cell_50_io_ready; // @[mul.scala 108:25]
  assign cell_51_io_a_in = cell_50_io_a_out; // @[mul.scala 109:25]
  assign cell_51_io_b_in = cell_50_io_b_out; // @[mul.scala 110:25]
  assign cell_51_io_sum_in = cell_50_io_sum_out; // @[mul.scala 111:25]
  assign cell_51_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_51_io_a = cell_50_io_A; // @[mul.scala 113:25]
  assign cell_51_io_b = cell_50_io_B; // @[mul.scala 114:25]
  assign cell_52_clock = clock;
  assign cell_52_reset = reset;
  assign cell_52_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_52_io_valid = cell_51_io_ready; // @[mul.scala 108:25]
  assign cell_52_io_a_in = cell_51_io_a_out; // @[mul.scala 109:25]
  assign cell_52_io_b_in = cell_51_io_b_out; // @[mul.scala 110:25]
  assign cell_52_io_sum_in = cell_51_io_sum_out; // @[mul.scala 111:25]
  assign cell_52_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_52_io_a = cell_51_io_A; // @[mul.scala 113:25]
  assign cell_52_io_b = cell_51_io_B; // @[mul.scala 114:25]
  assign cell_53_clock = clock;
  assign cell_53_reset = reset;
  assign cell_53_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_53_io_valid = cell_52_io_ready; // @[mul.scala 108:25]
  assign cell_53_io_a_in = cell_52_io_a_out; // @[mul.scala 109:25]
  assign cell_53_io_b_in = cell_52_io_b_out; // @[mul.scala 110:25]
  assign cell_53_io_sum_in = cell_52_io_sum_out; // @[mul.scala 111:25]
  assign cell_53_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_53_io_a = cell_52_io_A; // @[mul.scala 113:25]
  assign cell_53_io_b = cell_52_io_B; // @[mul.scala 114:25]
  assign cell_54_clock = clock;
  assign cell_54_reset = reset;
  assign cell_54_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_54_io_valid = cell_53_io_ready; // @[mul.scala 108:25]
  assign cell_54_io_a_in = cell_53_io_a_out; // @[mul.scala 109:25]
  assign cell_54_io_b_in = cell_53_io_b_out; // @[mul.scala 110:25]
  assign cell_54_io_sum_in = cell_53_io_sum_out; // @[mul.scala 111:25]
  assign cell_54_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_54_io_a = cell_53_io_A; // @[mul.scala 113:25]
  assign cell_54_io_b = cell_53_io_B; // @[mul.scala 114:25]
  assign cell_55_clock = clock;
  assign cell_55_reset = reset;
  assign cell_55_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_55_io_valid = cell_54_io_ready; // @[mul.scala 108:25]
  assign cell_55_io_a_in = cell_54_io_a_out; // @[mul.scala 109:25]
  assign cell_55_io_b_in = cell_54_io_b_out; // @[mul.scala 110:25]
  assign cell_55_io_sum_in = cell_54_io_sum_out; // @[mul.scala 111:25]
  assign cell_55_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_55_io_a = cell_54_io_A; // @[mul.scala 113:25]
  assign cell_55_io_b = cell_54_io_B; // @[mul.scala 114:25]
  assign cell_56_clock = clock;
  assign cell_56_reset = reset;
  assign cell_56_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_56_io_valid = cell_55_io_ready; // @[mul.scala 108:25]
  assign cell_56_io_a_in = cell_55_io_a_out; // @[mul.scala 109:25]
  assign cell_56_io_b_in = cell_55_io_b_out; // @[mul.scala 110:25]
  assign cell_56_io_sum_in = cell_55_io_sum_out; // @[mul.scala 111:25]
  assign cell_56_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_56_io_a = cell_55_io_A; // @[mul.scala 113:25]
  assign cell_56_io_b = cell_55_io_B; // @[mul.scala 114:25]
  assign cell_57_clock = clock;
  assign cell_57_reset = reset;
  assign cell_57_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_57_io_valid = cell_56_io_ready; // @[mul.scala 108:25]
  assign cell_57_io_a_in = cell_56_io_a_out; // @[mul.scala 109:25]
  assign cell_57_io_b_in = cell_56_io_b_out; // @[mul.scala 110:25]
  assign cell_57_io_sum_in = cell_56_io_sum_out; // @[mul.scala 111:25]
  assign cell_57_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_57_io_a = cell_56_io_A; // @[mul.scala 113:25]
  assign cell_57_io_b = cell_56_io_B; // @[mul.scala 114:25]
  assign cell_58_clock = clock;
  assign cell_58_reset = reset;
  assign cell_58_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_58_io_valid = cell_57_io_ready; // @[mul.scala 108:25]
  assign cell_58_io_a_in = cell_57_io_a_out; // @[mul.scala 109:25]
  assign cell_58_io_b_in = cell_57_io_b_out; // @[mul.scala 110:25]
  assign cell_58_io_sum_in = cell_57_io_sum_out; // @[mul.scala 111:25]
  assign cell_58_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_58_io_a = cell_57_io_A; // @[mul.scala 113:25]
  assign cell_58_io_b = cell_57_io_B; // @[mul.scala 114:25]
  assign cell_59_clock = clock;
  assign cell_59_reset = reset;
  assign cell_59_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_59_io_valid = cell_58_io_ready; // @[mul.scala 108:25]
  assign cell_59_io_a_in = cell_58_io_a_out; // @[mul.scala 109:25]
  assign cell_59_io_b_in = cell_58_io_b_out; // @[mul.scala 110:25]
  assign cell_59_io_sum_in = cell_58_io_sum_out; // @[mul.scala 111:25]
  assign cell_59_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_59_io_a = cell_58_io_A; // @[mul.scala 113:25]
  assign cell_59_io_b = cell_58_io_B; // @[mul.scala 114:25]
  assign cell_60_clock = clock;
  assign cell_60_reset = reset;
  assign cell_60_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_60_io_valid = cell_59_io_ready; // @[mul.scala 108:25]
  assign cell_60_io_a_in = cell_59_io_a_out; // @[mul.scala 109:25]
  assign cell_60_io_b_in = cell_59_io_b_out; // @[mul.scala 110:25]
  assign cell_60_io_sum_in = cell_59_io_sum_out; // @[mul.scala 111:25]
  assign cell_60_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_60_io_a = cell_59_io_A; // @[mul.scala 113:25]
  assign cell_60_io_b = cell_59_io_B; // @[mul.scala 114:25]
  assign cell_61_clock = clock;
  assign cell_61_reset = reset;
  assign cell_61_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_61_io_valid = cell_60_io_ready; // @[mul.scala 108:25]
  assign cell_61_io_a_in = cell_60_io_a_out; // @[mul.scala 109:25]
  assign cell_61_io_b_in = cell_60_io_b_out; // @[mul.scala 110:25]
  assign cell_61_io_sum_in = cell_60_io_sum_out; // @[mul.scala 111:25]
  assign cell_61_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_61_io_a = cell_60_io_A; // @[mul.scala 113:25]
  assign cell_61_io_b = cell_60_io_B; // @[mul.scala 114:25]
  assign cell_62_clock = clock;
  assign cell_62_reset = reset;
  assign cell_62_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_62_io_valid = cell_61_io_ready; // @[mul.scala 108:25]
  assign cell_62_io_a_in = cell_61_io_a_out; // @[mul.scala 109:25]
  assign cell_62_io_b_in = cell_61_io_b_out; // @[mul.scala 110:25]
  assign cell_62_io_sum_in = cell_61_io_sum_out; // @[mul.scala 111:25]
  assign cell_62_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_62_io_a = cell_61_io_A; // @[mul.scala 113:25]
  assign cell_62_io_b = cell_61_io_B; // @[mul.scala 114:25]
  assign cell_63_clock = clock;
  assign cell_63_reset = reset;
  assign cell_63_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_63_io_valid = cell_62_io_ready; // @[mul.scala 108:25]
  assign cell_63_io_a_in = cell_62_io_a_out; // @[mul.scala 109:25]
  assign cell_63_io_b_in = cell_62_io_b_out; // @[mul.scala 110:25]
  assign cell_63_io_sum_in = cell_62_io_sum_out; // @[mul.scala 111:25]
  assign cell_63_io_last = 1'h0; // @[mul.scala 112:25]
  assign cell_63_io_a = cell_62_io_A; // @[mul.scala 113:25]
  assign cell_63_io_b = cell_62_io_B; // @[mul.scala 114:25]
  assign cell_64_clock = clock;
  assign cell_64_reset = reset;
  assign cell_64_io_flush = 1'h0; // @[mul.scala 107:25]
  assign cell_64_io_valid = cell_63_io_ready; // @[mul.scala 108:25]
  assign cell_64_io_a_in = cell_63_io_a_out; // @[mul.scala 109:25]
  assign cell_64_io_b_in = cell_63_io_b_out; // @[mul.scala 110:25]
  assign cell_64_io_sum_in = cell_63_io_sum_out; // @[mul.scala 111:25]
  assign cell_64_io_last = 1'h1; // @[mul.scala 112:25]
  assign cell_64_io_a = cell_63_io_A; // @[mul.scala 113:25]
  assign cell_64_io_b = cell_63_io_B; // @[mul.scala 114:25]
  always @(posedge clock) begin
    a <= _GEN_1[128:0]; // @[mul.scala 77:{20,20} 81:7]
    b <= _GEN_2[128:0]; // @[mul.scala 78:{20,20} 87:7]
    if (reset) begin // @[mul.scala 79:24]
      valid <= 1'h0; // @[mul.scala 79:24]
    end else begin
      valid <= io_mul_valid; // @[mul.scala 93:10]
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (io_out_valid & ~reset & ~(cell_64_io_sum_out == _GEN_0)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at mul.scala:124 chisel3.assert( cell(64).io.sum_out === (cell(64).io.A * cell(64).io.B))\n"
            ); // @[mul.scala 124:23]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (io_out_valid & ~reset & ~(cell_64_io_sum_out == _GEN_0)) begin
          $fatal; // @[mul.scala 124:23]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
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
  _RAND_0 = {5{`RANDOM}};
  a = _RAND_0[128:0];
  _RAND_1 = {5{`RANDOM}};
  b = _RAND_1[128:0];
  _RAND_2 = {1{`RANDOM}};
  valid = _RAND_2[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module div(
  input         clock,
  input         reset,
  input  [63:0] io_dividend,
  input  [63:0] io_divisor,
  input         io_div_valid,
  input         io_div_signed,
  output        io_div_ready,
  output        io_out_valid,
  output [63:0] io_quotient,
  output [63:0] io_remainder
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [127:0] _RAND_2;
  reg [95:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] _dividend_abs_T_3 = ~io_dividend; // @[divtest.scala 24:27]
  wire [63:0] _dividend_abs_T_5 = _dividend_abs_T_3 + 64'h1; // @[divtest.scala 24:48]
  wire [63:0] dividend_abs = io_div_signed & io_dividend[63] ? _dividend_abs_T_5 : io_dividend; // @[divtest.scala 23:25]
  wire [63:0] _divisor_abs_T_3 = ~io_divisor; // @[divtest.scala 26:26]
  wire [63:0] _divisor_abs_T_5 = _divisor_abs_T_3 + 64'h1; // @[divtest.scala 26:46]
  wire [63:0] divisor_abs = io_div_signed & io_divisor[63] ? _divisor_abs_T_5 : io_divisor; // @[divtest.scala 25:24]
  reg [63:0] quotient; // @[divtest.scala 28:25]
  reg [63:0] remainder; // @[divtest.scala 29:26]
  reg [127:0] dividend; // @[divtest.scala 30:25]
  reg [64:0] divisor; // @[divtest.scala 31:24]
  reg [6:0] shift_count; // @[divtest.scala 33:28]
  reg  is_dividing; // @[divtest.scala 35:28]
  reg  quotient_sign; // @[divtest.scala 43:30]
  reg  remainder_sign; // @[divtest.scala 44:31]
  reg  out_valid; // @[divtest.scala 45:26]
  wire [64:0] sub = dividend[127:63] - divisor; // @[divtest.scala 47:36]
  wire  _io_div_ready_T = ~is_dividing; // @[divtest.scala 49:19]
  wire [127:0] _dividend_T = {64'h0,dividend_abs}; // @[Cat.scala 33:92]
  wire [64:0] _divisor_T = {1'h0,divisor_abs}; // @[Cat.scala 33:92]
  wire [63:0] _quotient_T = ~quotient; // @[divtest.scala 72:39]
  wire [63:0] _quotient_T_2 = _quotient_T + 64'h1; // @[divtest.scala 72:57]
  wire [63:0] _quotient_T_3 = quotient_sign ? _quotient_T_2 : quotient; // @[divtest.scala 72:22]
  wire [63:0] _remainder_T_1 = ~dividend[127:64]; // @[divtest.scala 73:41]
  wire [63:0] _remainder_T_3 = _remainder_T_1 + 64'h1; // @[divtest.scala 73:75]
  wire [63:0] _remainder_T_5 = remainder_sign ? _remainder_T_3 : dividend[127:64]; // @[divtest.scala 73:23]
  wire [128:0] _dividend_T_1 = {dividend, 1'h0}; // @[divtest.scala 78:28]
  wire [64:0] _quotient_T_4 = {quotient, 1'h0}; // @[divtest.scala 79:28]
  wire [64:0] _quotient_T_6 = _quotient_T_4 | 65'h1; // @[divtest.scala 81:37]
  wire [127:0] _dividend_T_3 = {sub,dividend[62:0]}; // @[Cat.scala 33:92]
  wire [128:0] _dividend_T_4 = {_dividend_T_3, 1'h0}; // @[divtest.scala 82:47]
  wire [128:0] _GEN_0 = sub[64] ? _dividend_T_1 : _dividend_T_4; // @[divtest.scala 77:33 78:16 82:16]
  wire [64:0] _GEN_1 = sub[64] ? _quotient_T_4 : _quotient_T_6; // @[divtest.scala 77:33 79:16 81:16]
  wire  _GEN_2 = shift_count == 7'h0 ? 1'h0 : is_dividing; // @[divtest.scala 68:30 69:19 35:28]
  wire [64:0] _GEN_3 = shift_count == 7'h0 ? {{1'd0}, _quotient_T_3} : _GEN_1; // @[divtest.scala 68:30 72:16]
  wire  _GEN_5 = shift_count == 7'h0 | out_valid; // @[divtest.scala 68:30 75:17 45:26]
  wire [128:0] _GEN_6 = shift_count == 7'h0 ? {{1'd0}, dividend} : _GEN_0; // @[divtest.scala 30:25 68:30]
  wire [6:0] _shift_count_T_1 = shift_count - 7'h1; // @[divtest.scala 85:32]
  wire  _GEN_7 = is_dividing ? _GEN_2 : is_dividing; // @[divtest.scala 67:27 35:28]
  wire [64:0] _GEN_8 = is_dividing ? _GEN_3 : {{1'd0}, quotient}; // @[divtest.scala 28:25 67:27]
  wire  _GEN_10 = is_dividing & _GEN_5; // @[divtest.scala 67:27 88:15]
  wire [128:0] _GEN_11 = is_dividing ? _GEN_6 : {{1'd0}, dividend}; // @[divtest.scala 30:25 67:27]
  wire  _GEN_13 = io_div_valid & _io_div_ready_T | _GEN_7; // @[divtest.scala 55:44 56:17]
  wire [128:0] _GEN_16 = io_div_valid & _io_div_ready_T ? {{1'd0}, _dividend_T} : _GEN_11; // @[divtest.scala 55:44 59:14]
  wire [64:0] _GEN_18 = io_div_valid & _io_div_ready_T ? 65'h0 : _GEN_8; // @[divtest.scala 55:44 61:14]
  wire [64:0] _GEN_35 = reset ? 65'h0 : _GEN_18; // @[divtest.scala 28:{25,25}]
  wire [128:0] _GEN_36 = reset ? 129'h0 : _GEN_16; // @[divtest.scala 30:{25,25}]
  assign io_div_ready = ~is_dividing; // @[divtest.scala 49:19]
  assign io_out_valid = out_valid; // @[divtest.scala 93:16]
  assign io_quotient = quotient; // @[divtest.scala 94:15]
  assign io_remainder = remainder; // @[divtest.scala 95:16]
  always @(posedge clock) begin
    quotient <= _GEN_35[63:0]; // @[divtest.scala 28:{25,25}]
    if (reset) begin // @[divtest.scala 29:26]
      remainder <= 64'h0; // @[divtest.scala 29:26]
    end else if (io_div_valid & _io_div_ready_T) begin // @[divtest.scala 55:44]
      remainder <= 64'h0; // @[divtest.scala 62:15]
    end else if (is_dividing) begin // @[divtest.scala 67:27]
      if (shift_count == 7'h0) begin // @[divtest.scala 68:30]
        remainder <= _remainder_T_5; // @[divtest.scala 73:17]
      end
    end
    dividend <= _GEN_36[127:0]; // @[divtest.scala 30:{25,25}]
    if (reset) begin // @[divtest.scala 31:24]
      divisor <= 65'h0; // @[divtest.scala 31:24]
    end else if (io_div_valid & _io_div_ready_T) begin // @[divtest.scala 55:44]
      divisor <= _divisor_T; // @[divtest.scala 60:13]
    end
    if (reset) begin // @[divtest.scala 33:28]
      shift_count <= 7'h40; // @[divtest.scala 33:28]
    end else if (io_div_valid & _io_div_ready_T) begin // @[divtest.scala 55:44]
      shift_count <= 7'h40; // @[divtest.scala 63:17]
    end else if (is_dividing) begin // @[divtest.scala 67:27]
      shift_count <= _shift_count_T_1; // @[divtest.scala 85:17]
    end
    if (reset) begin // @[divtest.scala 35:28]
      is_dividing <= 1'h0; // @[divtest.scala 35:28]
    end else begin
      is_dividing <= _GEN_13;
    end
    if (reset) begin // @[divtest.scala 43:30]
      quotient_sign <= 1'h0; // @[divtest.scala 43:30]
    end else if (io_div_valid & _io_div_ready_T) begin // @[divtest.scala 55:44]
      quotient_sign <= io_dividend[63] ^ io_divisor[63]; // @[divtest.scala 64:19]
    end
    if (reset) begin // @[divtest.scala 44:31]
      remainder_sign <= 1'h0; // @[divtest.scala 44:31]
    end else if (io_div_valid & _io_div_ready_T) begin // @[divtest.scala 55:44]
      remainder_sign <= io_dividend[63]; // @[divtest.scala 65:20]
    end
    if (reset) begin // @[divtest.scala 45:26]
      out_valid <= 1'h0; // @[divtest.scala 45:26]
    end else if (io_div_valid & _io_div_ready_T) begin // @[divtest.scala 55:44]
      out_valid <= 1'h0; // @[divtest.scala 66:15]
    end else begin
      out_valid <= _GEN_10;
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
  quotient = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  remainder = _RAND_1[63:0];
  _RAND_2 = {4{`RANDOM}};
  dividend = _RAND_2[127:0];
  _RAND_3 = {3{`RANDOM}};
  divisor = _RAND_3[64:0];
  _RAND_4 = {1{`RANDOM}};
  shift_count = _RAND_4[6:0];
  _RAND_5 = {1{`RANDOM}};
  is_dividing = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  quotient_sign = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  remainder_sign = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  out_valid = _RAND_8[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ALU(
  input         clock,
  input         reset,
  input  [63:0] io_src1,
  input  [63:0] io_src2,
  input  [18:0] io_op,
  output [63:0] io_result,
  input         io_validin,
  output        io_validout,
  output        io_busy
);
  wire  mul_pipe_clock; // @[ALU.scala 38:19]
  wire  mul_pipe_reset; // @[ALU.scala 38:19]
  wire  mul_pipe_io_mul_valid; // @[ALU.scala 38:19]
  wire [1:0] mul_pipe_io_mul_signed; // @[ALU.scala 38:19]
  wire [63:0] mul_pipe_io_multiplicand; // @[ALU.scala 38:19]
  wire [63:0] mul_pipe_io_multiplier; // @[ALU.scala 38:19]
  wire  mul_pipe_io_out_valid; // @[ALU.scala 38:19]
  wire [63:0] mul_pipe_io_result_lo; // @[ALU.scala 38:19]
  wire  div_clock; // @[ALU.scala 46:19]
  wire  div_reset; // @[ALU.scala 46:19]
  wire [63:0] div_io_dividend; // @[ALU.scala 46:19]
  wire [63:0] div_io_divisor; // @[ALU.scala 46:19]
  wire  div_io_div_valid; // @[ALU.scala 46:19]
  wire  div_io_div_signed; // @[ALU.scala 46:19]
  wire  div_io_div_ready; // @[ALU.scala 46:19]
  wire  div_io_out_valid; // @[ALU.scala 46:19]
  wire [63:0] div_io_quotient; // @[ALU.scala 46:19]
  wire [63:0] div_io_remainder; // @[ALU.scala 46:19]
  wire  _adder_b_T_6 = io_op[1] | io_op[8] | io_op[9] | io_op[11]; // @[ALU.scala 27:44]
  wire [63:0] _adder_b_T_7 = ~io_src2; // @[ALU.scala 27:55]
  wire [63:0] adder_b = io_op[1] | io_op[8] | io_op[9] | io_op[11] ? _adder_b_T_7 : io_src2; // @[ALU.scala 27:17]
  wire [64:0] _sum_T = io_src1 + adder_b; // @[ALU.scala 29:17]
  wire [64:0] _GEN_0 = {{64'd0}, _adder_b_T_6}; // @[ALU.scala 29:26]
  wire [65:0] _sum_T_1 = _sum_T + _GEN_0; // @[ALU.scala 29:26]
  wire [64:0] sum = _sum_T_1[64:0]; // @[ALU.scala 22:17 29:8]
  wire  adder_cout = sum[64]; // @[ALU.scala 30:20]
  wire [63:0] adder_result = sum[63:0]; // @[ALU.scala 31:22]
  wire  _slt_result_T_11 = io_src1[63] & ~io_src2[63] | ~(io_src1[63] ^ io_src2[63]) & adder_result[63]; // @[ALU.scala 33:61]
  wire [63:0] slt_result = {63'h0,_slt_result_T_11}; // @[Cat.scala 33:92]
  wire  _sltu_result_T_1 = ~adder_cout; // @[ALU.scala 34:35]
  wire [63:0] sltu_result = {63'h0,_sltu_result_T_1}; // @[Cat.scala 33:92]
  wire  _eql_result_T_1 = adder_result == 64'h0; // @[ALU.scala 35:46]
  wire [63:0] eql_result = {63'h0,_eql_result_T_1}; // @[Cat.scala 33:92]
  wire  _T_4 = io_op[12] | io_op[13] | io_op[14]; // @[ALU.scala 39:42]
  wire  _T_8 = io_op[13] | io_op[14]; // @[ALU.scala 41:35]
  wire  _T_13 = io_op[15] | io_op[16]; // @[ALU.scala 47:32]
  wire [63:0] _io_result_T_4 = io_src1 & io_src2; // @[ALU.scala 60:36]
  wire [63:0] _io_result_T_6 = io_src1 | io_src2; // @[ALU.scala 61:36]
  wire [63:0] _io_result_T_8 = io_src1 ^ io_src2; // @[ALU.scala 62:36]
  wire [126:0] _GEN_1 = {{63'd0}, io_src1}; // @[ALU.scala 63:37]
  wire [126:0] _io_result_T_11 = _GEN_1 << io_src2[5:0]; // @[ALU.scala 63:37]
  wire [63:0] _io_result_T_15 = io_src1 >> io_src2[5:0]; // @[ALU.scala 64:36]
  wire [63:0] _io_result_T_20 = $signed(io_src1) >>> io_src2[5:0]; // @[ALU.scala 65:62]
  wire [63:0] _io_result_T_25 = adder_result & 64'hfffffffffffffffe; // @[ALU.scala 68:42]
  wire [63:0] _io_result_T_38 = io_op[17] | io_op[18] ? div_io_remainder : 64'h0; // @[ALU.scala 72:19]
  wire [63:0] _io_result_T_39 = _T_13 ? div_io_quotient : _io_result_T_38; // @[ALU.scala 71:19]
  wire [63:0] _io_result_T_40 = _T_4 ? mul_pipe_io_result_lo : _io_result_T_39; // @[ALU.scala 70:19]
  wire [63:0] _io_result_T_41 = io_op[11] ? eql_result : _io_result_T_40; // @[ALU.scala 69:19]
  wire [63:0] _io_result_T_42 = io_op[10] ? _io_result_T_25 : _io_result_T_41; // @[ALU.scala 68:19]
  wire [63:0] _io_result_T_43 = io_op[9] ? sltu_result : _io_result_T_42; // @[ALU.scala 67:19]
  wire [63:0] _io_result_T_44 = io_op[8] ? slt_result : _io_result_T_43; // @[ALU.scala 66:19]
  wire [63:0] _io_result_T_45 = io_op[7] ? _io_result_T_20 : _io_result_T_44; // @[ALU.scala 65:19]
  wire [63:0] _io_result_T_46 = io_op[6] ? _io_result_T_15 : _io_result_T_45; // @[ALU.scala 64:19]
  wire [63:0] _io_result_T_47 = io_op[5] ? _io_result_T_11[63:0] : _io_result_T_46; // @[ALU.scala 63:19]
  wire [63:0] _io_result_T_48 = io_op[4] ? _io_result_T_8 : _io_result_T_47; // @[ALU.scala 62:19]
  wire [63:0] _io_result_T_49 = io_op[3] ? _io_result_T_6 : _io_result_T_48; // @[ALU.scala 61:19]
  wire [63:0] _io_result_T_50 = io_op[2] ? _io_result_T_4 : _io_result_T_49; // @[ALU.scala 60:19]
  mul_pipe mul_pipe ( // @[ALU.scala 38:19]
    .clock(mul_pipe_clock),
    .reset(mul_pipe_reset),
    .io_mul_valid(mul_pipe_io_mul_valid),
    .io_mul_signed(mul_pipe_io_mul_signed),
    .io_multiplicand(mul_pipe_io_multiplicand),
    .io_multiplier(mul_pipe_io_multiplier),
    .io_out_valid(mul_pipe_io_out_valid),
    .io_result_lo(mul_pipe_io_result_lo)
  );
  div div ( // @[ALU.scala 46:19]
    .clock(div_clock),
    .reset(div_reset),
    .io_dividend(div_io_dividend),
    .io_divisor(div_io_divisor),
    .io_div_valid(div_io_div_valid),
    .io_div_signed(div_io_div_signed),
    .io_div_ready(div_io_div_ready),
    .io_out_valid(div_io_out_valid),
    .io_quotient(div_io_quotient),
    .io_remainder(div_io_remainder)
  );
  assign io_result = io_op[0] | io_op[1] ? adder_result : _io_result_T_50; // @[ALU.scala 59:19]
  assign io_validout = mul_pipe_io_out_valid | div_io_out_valid; // @[ALU.scala 57:33]
  assign io_busy = ~div_io_div_ready; // @[ALU.scala 54:35]
  assign mul_pipe_clock = clock;
  assign mul_pipe_reset = reset;
  assign mul_pipe_io_mul_valid = (io_op[12] | io_op[13] | io_op[14]) & io_validin; // @[ALU.scala 39:53]
  assign mul_pipe_io_mul_signed = {_T_8,io_op[13]}; // @[Cat.scala 33:92]
  assign mul_pipe_io_multiplicand = io_src1; // @[ALU.scala 42:21]
  assign mul_pipe_io_multiplier = io_src2; // @[ALU.scala 43:19]
  assign div_clock = clock;
  assign div_reset = reset;
  assign div_io_dividend = io_src1; // @[ALU.scala 50:17]
  assign div_io_divisor = io_src2; // @[ALU.scala 51:16]
  assign div_io_div_valid = (io_op[15] | io_op[16] | io_op[17] | io_op[18]) & io_validin; // @[ALU.scala 47:63]
  assign div_io_div_signed = io_op[15] | io_op[17]; // @[ALU.scala 49:30]
endmodule
module EXU(
  input         clock,
  input         reset,
  output        io_in_ready,
  input         io_in_valid,
  input  [31:0] io_in_bits_pc,
  input  [31:0] io_in_bits_inst,
  input  [4:0]  io_in_bits_rs1,
  input  [4:0]  io_in_bits_rs2,
  input  [4:0]  io_in_bits_rd,
  input  [63:0] io_in_bits_imm,
  input  [79:0] io_in_bits_op,
  input  [5:0]  io_in_bits_typ,
  input         io_in_bits_isJump,
  input  [4:0]  io_in_bits_clearidx,
  output        io_out_valid,
  output [31:0] io_out_bits_pc,
  output [63:0] io_out_bits_pc_dnpc,
  output [4:0]  io_out_bits_gpr_idx_w,
  output        io_out_bits_gpr_en_w,
  output [63:0] io_out_bits_gpr_val_w,
  output        io_out_bits_csr_en_w,
  output [11:0] io_out_bits_csr_idx_w,
  output [63:0] io_out_bits_csr_val_w,
  output [63:0] io_out_bits_csr_no,
  output [63:0] io_out_bits_csr_epc,
  output        io_out_bits_isJump,
  output [4:0]  io_out_bits_clearidx,
  output [4:0]  io_gpr_idx_r1,
  output [4:0]  io_gpr_idx_r2,
  output        io_gpr_en_r1,
  output        io_gpr_en_r2,
  input  [63:0] io_gpr_val_r1,
  input  [63:0] io_gpr_val_r2,
  output [11:0] io_csr_idx_r,
  output        io_csr_en_r,
  input  [63:0] io_csr_val_r,
  input         io_lm_ar_ready,
  output        io_lm_ar_valid,
  output [31:0] io_lm_ar_bits_addr,
  input         io_lm_r_valid,
  input  [63:0] io_lm_r_bits_data,
  input         io_lm_aw_ready,
  output        io_lm_aw_valid,
  output [31:0] io_lm_aw_bits_addr,
  input         io_lm_w_ready,
  output        io_lm_w_valid,
  output [63:0] io_lm_w_bits_data,
  output [7:0]  io_lm_w_bits_strb,
  input         io_lm_b_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [95:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [63:0] _RAND_14;
`endif // RANDOMIZE_REG_INIT
  wire  lsu_clock; // @[EXU.scala 39:25]
  wire  lsu_reset; // @[EXU.scala 39:25]
  wire  lsu_io_ls_in_valid; // @[EXU.scala 39:25]
  wire [31:0] lsu_io_ls_in_bits_raddr; // @[EXU.scala 39:25]
  wire [31:0] lsu_io_ls_in_bits_waddr; // @[EXU.scala 39:25]
  wire [63:0] lsu_io_ls_in_bits_wdata; // @[EXU.scala 39:25]
  wire [7:0] lsu_io_ls_in_bits_wmask; // @[EXU.scala 39:25]
  wire  lsu_io_ls_out_ready; // @[EXU.scala 39:25]
  wire  lsu_io_ls_out_valid; // @[EXU.scala 39:25]
  wire [63:0] lsu_io_ls_out_bits_rdata; // @[EXU.scala 39:25]
  wire  lsu_io_en_r; // @[EXU.scala 39:25]
  wire  lsu_io_en_w; // @[EXU.scala 39:25]
  wire  lsu_io_lm_ar_ready; // @[EXU.scala 39:25]
  wire  lsu_io_lm_ar_valid; // @[EXU.scala 39:25]
  wire [31:0] lsu_io_lm_ar_bits_addr; // @[EXU.scala 39:25]
  wire  lsu_io_lm_r_ready; // @[EXU.scala 39:25]
  wire  lsu_io_lm_r_valid; // @[EXU.scala 39:25]
  wire [63:0] lsu_io_lm_r_bits_data; // @[EXU.scala 39:25]
  wire  lsu_io_lm_aw_ready; // @[EXU.scala 39:25]
  wire  lsu_io_lm_aw_valid; // @[EXU.scala 39:25]
  wire [31:0] lsu_io_lm_aw_bits_addr; // @[EXU.scala 39:25]
  wire  lsu_io_lm_w_ready; // @[EXU.scala 39:25]
  wire  lsu_io_lm_w_valid; // @[EXU.scala 39:25]
  wire [63:0] lsu_io_lm_w_bits_data; // @[EXU.scala 39:25]
  wire [7:0] lsu_io_lm_w_bits_strb; // @[EXU.scala 39:25]
  wire  lsu_io_lm_b_ready; // @[EXU.scala 39:25]
  wire  lsu_io_lm_b_valid; // @[EXU.scala 39:25]
  wire  alu_clock; // @[EXU.scala 70:23]
  wire  alu_reset; // @[EXU.scala 70:23]
  wire [63:0] alu_io_src1; // @[EXU.scala 70:23]
  wire [63:0] alu_io_src2; // @[EXU.scala 70:23]
  wire [18:0] alu_io_op; // @[EXU.scala 70:23]
  wire [63:0] alu_io_result; // @[EXU.scala 70:23]
  wire  alu_io_validin; // @[EXU.scala 70:23]
  wire  alu_io_validout; // @[EXU.scala 70:23]
  wire  alu_io_busy; // @[EXU.scala 70:23]
  wire  ebreak1_en_break; // @[EXU.scala 120:27]
  wire  ebreak1_clk; // @[EXU.scala 120:27]
  wire  _EXE_reg_pc_T = io_in_ready & io_in_valid; // @[Decoupled.scala 52:35]
  reg [31:0] EXE_reg_pc; // @[Reg.scala 35:20]
  reg [31:0] EXE_reg_inst; // @[Reg.scala 35:20]
  reg [4:0] EXE_reg_rs1; // @[Reg.scala 35:20]
  reg [4:0] EXE_reg_rs2; // @[Reg.scala 35:20]
  reg [4:0] EXE_reg_rd; // @[Reg.scala 35:20]
  reg [63:0] EXE_reg_imm; // @[Reg.scala 35:20]
  reg [79:0] EXE_reg_op; // @[Reg.scala 35:20]
  reg [5:0] EXE_reg_typ; // @[Reg.scala 35:20]
  reg  EXE_reg_isJump; // @[Reg.scala 35:20]
  reg [4:0] EXE_reg_clearidx; // @[Reg.scala 35:20]
  wire  op_r = EXE_reg_op[38] | EXE_reg_op[39] | EXE_reg_op[40] | EXE_reg_op[41] | EXE_reg_op[46] | EXE_reg_op[47] |
    EXE_reg_op[48]; // @[EXU.scala 48:110]
  wire  op_w = EXE_reg_op[42] | EXE_reg_op[43] | EXE_reg_op[44] | EXE_reg_op[45]; // @[EXU.scala 49:62]
  wire  _op_mul_T_2 = EXE_reg_op[50] | EXE_reg_op[51]; // @[EXU.scala 50:31]
  wire  op_mul = EXE_reg_op[50] | EXE_reg_op[51] | EXE_reg_op[52] | EXE_reg_op[53] | EXE_reg_op[54]; // @[EXU.scala 50:76]
  wire  _op_div_T_2 = EXE_reg_op[55] | EXE_reg_op[56]; // @[EXU.scala 51:31]
  wire  op_div = EXE_reg_op[55] | EXE_reg_op[56] | EXE_reg_op[57] | EXE_reg_op[58] | EXE_reg_op[59] | EXE_reg_op[60] |
    EXE_reg_op[61] | EXE_reg_op[62]; // @[EXU.scala 51:121]
  wire  op_wait = op_r | op_w | op_mul | op_div; // @[EXU.scala 52:34]
  wire  op_rw = io_in_bits_op[38] | io_in_bits_op[39] | io_in_bits_op[40] | io_in_bits_op[41] | io_in_bits_op[46] |
    io_in_bits_op[47] | io_in_bits_op[48] | io_in_bits_op[42] | io_in_bits_op[43] | io_in_bits_op[44] | io_in_bits_op[45
    ]; // @[EXU.scala 53:204]
  wire  op_alu = io_in_bits_op[50] | io_in_bits_op[51] | io_in_bits_op[52] | io_in_bits_op[53] | io_in_bits_op[54] |
    io_in_bits_op[55] | io_in_bits_op[56] | io_in_bits_op[57] | io_in_bits_op[58] | io_in_bits_op[59] | io_in_bits_op[60
    ] | io_in_bits_op[61] | io_in_bits_op[62]; // @[EXU.scala 54:232]
  wire  _src1_T_4 = EXE_reg_typ[0] | EXE_reg_typ[2] | EXE_reg_typ[4]; // @[EXU.scala 59:49]
  wire [63:0] _src1_T_10 = EXE_reg_typ[1] | EXE_reg_typ[3] ? EXE_reg_imm : 64'h0; // @[EXU.scala 60:16]
  wire [63:0] src1 = EXE_reg_typ[0] | EXE_reg_typ[2] | EXE_reg_typ[4] | EXE_reg_typ[5] ? io_gpr_val_r1 : _src1_T_10; // @[EXU.scala 59:18]
  wire  _src2_T_2 = EXE_reg_typ[2] | EXE_reg_typ[4]; // @[EXU.scala 63:34]
  wire [63:0] _src2_T_6 = EXE_reg_typ[0] ? EXE_reg_imm : 64'h0; // @[EXU.scala 64:16]
  wire [63:0] src2 = EXE_reg_typ[2] | EXE_reg_typ[4] | EXE_reg_typ[5] ? io_gpr_val_r2 : _src2_T_6; // @[EXU.scala 63:18]
  wire [63:0] dest = _src2_T_2 ? EXE_reg_imm : {{59'd0}, EXE_reg_rd}; // @[EXU.scala 67:18]
  reg  lsu_finish; // @[EXU.scala 72:31]
  reg  alu_finish; // @[EXU.scala 73:31]
  reg  alu_valid; // @[EXU.scala 74:31]
  reg [1:0] state; // @[EXU.scala 78:28]
  wire  _lsu_finish_T_3 = lsu_io_ls_out_ready & lsu_io_ls_out_valid; // @[Decoupled.scala 52:35]
  wire  _lsu_finish_T_9 = _lsu_finish_T_3 | ~op_r & ~op_w | lsu_finish; // @[EXU.scala 81:26]
  wire  _lsu_finish_T_10 = _EXE_reg_pc_T & op_rw ? 1'h0 : _lsu_finish_T_9; // @[EXU.scala 80:26]
  wire  _alu_finish_T_2 = _EXE_reg_pc_T & op_alu; // @[EXU.scala 82:38]
  wire  _alu_finish_T_8 = alu_io_validout | ~op_mul & ~op_div | alu_finish; // @[EXU.scala 83:26]
  wire  _alu_finish_T_9 = _EXE_reg_pc_T & op_alu ? 1'h0 : _alu_finish_T_8; // @[EXU.scala 82:26]
  wire  _alu_valid_T_4 = ~alu_io_busy ? 1'h0 : alu_valid; // @[EXU.scala 85:26]
  wire  _state_T_10 = alu_io_validout; // @[EXU.scala 91:113]
  reg [63:0] alu_res; // @[Reg.scala 35:20]
  wire [63:0] alu_result = io_out_valid ? alu_io_result : alu_res; // @[EXU.scala 97:24]
  wire  _io_in_ready_T_1 = lsu_finish | _lsu_finish_T_3; // @[EXU.scala 99:49]
  wire  _io_in_ready_T_3 = alu_finish | alu_io_validout; // @[EXU.scala 99:83]
  wire  _io_out_valid_T = state == 2'h2; // @[EXU.scala 100:30]
  wire [63:0] _lsu_io_ls_in_bits_raddr_T_13 = op_r ? alu_io_result : 64'h0; // @[EXU.scala 107:37]
  wire [63:0] _lsu_io_ls_in_bits_waddr_T_7 = op_w ? alu_io_result : 64'h0; // @[EXU.scala 108:37]
  wire [7:0] _lsu_io_ls_in_bits_wmask_T_13 = EXE_reg_op[45] ? 8'hff : 8'h0; // @[EXU.scala 113:35]
  wire [7:0] _lsu_io_ls_in_bits_wmask_T_14 = EXE_reg_op[44] ? 8'hf : _lsu_io_ls_in_bits_wmask_T_13; // @[EXU.scala 112:35]
  wire [7:0] _lsu_io_ls_in_bits_wmask_T_15 = EXE_reg_op[43] ? 8'h3 : _lsu_io_ls_in_bits_wmask_T_14; // @[EXU.scala 111:35]
  wire  _io_csr_en_r_T_2 = EXE_reg_op[63] | EXE_reg_op[64]; // @[EXU.scala 132:40]
  wire [63:0] _io_csr_idx_r_T_3 = _io_csr_en_r_T_2 ? src2 : 64'h0; // @[EXU.scala 133:26]
  wire [63:0] _alu_io_src1_T_15 = {32'h0,src1[31:0]}; // @[Cat.scala 33:92]
  wire [31:0] _alu_io_src1_T_21 = src1[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _alu_io_src1_T_23 = {_alu_io_src1_T_21,src1[31:0]}; // @[Cat.scala 33:92]
  wire  _alu_io_src1_T_26 = EXE_reg_op[36] | EXE_reg_op[37]; // @[EXU.scala 145:43]
  wire [63:0] _alu_io_src1_T_27 = EXE_reg_op[36] | EXE_reg_op[37] ? {{32'd0}, EXE_reg_pc} : src1; // @[EXU.scala 145:28]
  wire [63:0] _alu_io_src1_T_28 = EXE_reg_op[17] | EXE_reg_op[19] ? _alu_io_src1_T_23 : _alu_io_src1_T_27; // @[EXU.scala 144:28]
  wire [63:0] _alu_io_src2_T_7 = {59'h0,src2[4:0]}; // @[Cat.scala 33:92]
  wire [63:0] _alu_io_src2_T_28 = {32'h0,src2[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _alu_io_src2_T_30 = EXE_reg_op[64] ? io_csr_val_r : src2; // @[EXU.scala 152:28]
  wire [63:0] _alu_io_src2_T_31 = EXE_reg_op[56] | EXE_reg_op[58] | EXE_reg_op[60] | EXE_reg_op[62] ? _alu_io_src2_T_28
     : _alu_io_src2_T_30; // @[EXU.scala 151:28]
  wire [63:0] _alu_io_src2_T_32 = op_w ? dest : _alu_io_src2_T_31; // @[EXU.scala 150:28]
  wire [63:0] _alu_io_src2_T_33 = _alu_io_src1_T_26 ? 64'h4 : _alu_io_src2_T_32; // @[EXU.scala 149:28]
  wire [63:0] _alu_io_src2_T_34 = EXE_reg_op[25] ? {{32'd0}, EXE_reg_pc} : _alu_io_src2_T_33; // @[EXU.scala 148:28]
  wire [18:0] _alu_io_op_T_108 = EXE_reg_op[61] | EXE_reg_op[62] ? 19'h40000 : 19'h0; // @[EXU.scala 171:28]
  wire [18:0] _alu_io_op_T_109 = EXE_reg_op[59] | EXE_reg_op[60] ? 19'h20000 : _alu_io_op_T_108; // @[EXU.scala 170:28]
  wire [18:0] _alu_io_op_T_110 = EXE_reg_op[57] | EXE_reg_op[58] ? 19'h10000 : _alu_io_op_T_109; // @[EXU.scala 169:28]
  wire [18:0] _alu_io_op_T_111 = _op_div_T_2 ? 19'h8000 : _alu_io_op_T_110; // @[EXU.scala 168:28]
  wire [18:0] _alu_io_op_T_112 = EXE_reg_op[54] ? 19'h4000 : _alu_io_op_T_111; // @[EXU.scala 167:28]
  wire [18:0] _alu_io_op_T_113 = EXE_reg_op[52] ? 19'h2000 : _alu_io_op_T_112; // @[EXU.scala 166:28]
  wire [18:0] _alu_io_op_T_114 = _op_mul_T_2 | EXE_reg_op[53] ? 19'h1000 : _alu_io_op_T_113; // @[EXU.scala 165:28]
  wire [18:0] _alu_io_op_T_115 = EXE_reg_op[30] | EXE_reg_op[31] ? 19'h800 : _alu_io_op_T_114; // @[EXU.scala 164:28]
  wire [18:0] _alu_io_op_T_116 = EXE_reg_op[27] | EXE_reg_op[29] | EXE_reg_op[33] | EXE_reg_op[35] ? 19'h200 :
    _alu_io_op_T_115; // @[EXU.scala 163:28]
  wire [18:0] _alu_io_op_T_117 = EXE_reg_op[26] | EXE_reg_op[28] | EXE_reg_op[32] | EXE_reg_op[34] ? 19'h100 :
    _alu_io_op_T_116; // @[EXU.scala 162:28]
  wire [18:0] _alu_io_op_T_118 = EXE_reg_op[16] | EXE_reg_op[17] | EXE_reg_op[18] | EXE_reg_op[19] ? 19'h80 :
    _alu_io_op_T_117; // @[EXU.scala 161:28]
  wire [18:0] _alu_io_op_T_119 = EXE_reg_op[20] | EXE_reg_op[21] | EXE_reg_op[22] | EXE_reg_op[23] ? 19'h40 :
    _alu_io_op_T_118; // @[EXU.scala 160:28]
  wire [18:0] _alu_io_op_T_120 = EXE_reg_op[12] | EXE_reg_op[13] | EXE_reg_op[14] | EXE_reg_op[15] ? 19'h20 :
    _alu_io_op_T_119; // @[EXU.scala 159:28]
  wire [18:0] _alu_io_op_T_121 = EXE_reg_op[10] | EXE_reg_op[11] ? 19'h10 : _alu_io_op_T_120; // @[EXU.scala 158:28]
  wire [18:0] _alu_io_op_T_122 = EXE_reg_op[8] | EXE_reg_op[9] | EXE_reg_op[64] ? 19'h8 : _alu_io_op_T_121; // @[EXU.scala 157:28]
  wire [18:0] _alu_io_op_T_123 = EXE_reg_op[6] | EXE_reg_op[7] ? 19'h4 : _alu_io_op_T_122; // @[EXU.scala 156:28]
  wire [18:0] _alu_io_op_T_124 = EXE_reg_op[4] | EXE_reg_op[5] ? 19'h2 : _alu_io_op_T_123; // @[EXU.scala 155:28]
  wire [63:0] next_pc_src1 = EXE_reg_op[37] ? src1 : {{32'd0}, EXE_reg_pc}; // @[EXU.scala 178:26]
  wire  _next_pc_src2_T_5 = ~alu_io_result[0]; // @[EXU.scala 180:43]
  wire [63:0] _next_pc_src2_T_23 = EXE_reg_op[37] ? src2 : 64'h4; // @[EXU.scala 186:26]
  wire [63:0] _next_pc_src2_T_24 = EXE_reg_op[36] ? src1 : _next_pc_src2_T_23; // @[EXU.scala 185:26]
  wire [63:0] _next_pc_src2_T_25 = EXE_reg_op[35] & alu_io_result[0] ? dest : _next_pc_src2_T_24; // @[EXU.scala 184:26]
  wire [63:0] _next_pc_src2_T_26 = EXE_reg_op[34] & alu_io_result[0] ? dest : _next_pc_src2_T_25; // @[EXU.scala 183:26]
  wire [63:0] _next_pc_src2_T_27 = EXE_reg_op[33] & _next_pc_src2_T_5 ? dest : _next_pc_src2_T_26; // @[EXU.scala 182:26]
  wire [63:0] _next_pc_src2_T_28 = EXE_reg_op[32] & _next_pc_src2_T_5 ? dest : _next_pc_src2_T_27; // @[EXU.scala 181:26]
  wire [63:0] _next_pc_src2_T_29 = EXE_reg_op[31] & ~alu_io_result[0] ? dest : _next_pc_src2_T_28; // @[EXU.scala 180:26]
  wire [63:0] next_pc_src2 = EXE_reg_op[30] & alu_io_result[0] ? dest : _next_pc_src2_T_29; // @[EXU.scala 179:26]
  wire [63:0] next_pc_sum = next_pc_src1 + next_pc_src2; // @[EXU.scala 188:34]
  wire [1:0] _io_out_bits_csr_no_T_2 = EXE_reg_op[66] ? 2'h2 : 2'h0; // @[EXU.scala 197:32]
  wire [1:0] _io_out_bits_csr_no_T_3 = EXE_reg_op[65] ? 2'h1 : _io_out_bits_csr_no_T_2; // @[EXU.scala 196:32]
  wire [31:0] _io_out_bits_gpr_val_w_T_17 = alu_io_result[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_gpr_val_w_T_19 = {_io_out_bits_gpr_val_w_T_17,alu_io_result[31:0]}; // @[Cat.scala 33:92]
  wire [31:0] _io_out_bits_gpr_val_w_T_29 = alu_result[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_gpr_val_w_T_31 = {_io_out_bits_gpr_val_w_T_29,alu_result[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_gpr_val_w_T_39 = {32'h0,alu_result[63:32]}; // @[Cat.scala 33:92]
  wire [55:0] _io_out_bits_gpr_val_w_T_46 = lsu_io_ls_out_bits_rdata[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_gpr_val_w_T_48 = {_io_out_bits_gpr_val_w_T_46,lsu_io_ls_out_bits_rdata[7:0]}; // @[Cat.scala 33:92]
  wire [47:0] _io_out_bits_gpr_val_w_T_52 = lsu_io_ls_out_bits_rdata[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_gpr_val_w_T_54 = {_io_out_bits_gpr_val_w_T_52,lsu_io_ls_out_bits_rdata[15:0]}; // @[Cat.scala 33:92]
  wire [31:0] _io_out_bits_gpr_val_w_T_58 = lsu_io_ls_out_bits_rdata[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_out_bits_gpr_val_w_T_60 = {_io_out_bits_gpr_val_w_T_58,lsu_io_ls_out_bits_rdata[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_gpr_val_w_T_65 = {56'h0,lsu_io_ls_out_bits_rdata[7:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_gpr_val_w_T_69 = {48'h0,lsu_io_ls_out_bits_rdata[15:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_gpr_val_w_T_73 = {32'h0,lsu_io_ls_out_bits_rdata[31:0]}; // @[Cat.scala 33:92]
  wire [63:0] _io_out_bits_gpr_val_w_T_85 = EXE_reg_op[50] | EXE_reg_op[55] | EXE_reg_op[57] | EXE_reg_op[58] |
    EXE_reg_op[59] | EXE_reg_op[61] ? alu_result : alu_io_result; // @[EXU.scala 212:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_86 = EXE_reg_op[48] ? _io_out_bits_gpr_val_w_T_73 : _io_out_bits_gpr_val_w_T_85; // @[EXU.scala 211:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_87 = EXE_reg_op[47] ? _io_out_bits_gpr_val_w_T_69 : _io_out_bits_gpr_val_w_T_86; // @[EXU.scala 210:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_88 = EXE_reg_op[46] ? _io_out_bits_gpr_val_w_T_65 : _io_out_bits_gpr_val_w_T_87; // @[EXU.scala 209:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_89 = EXE_reg_op[41] ? lsu_io_ls_out_bits_rdata : _io_out_bits_gpr_val_w_T_88; // @[EXU.scala 208:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_90 = EXE_reg_op[40] ? _io_out_bits_gpr_val_w_T_60 : _io_out_bits_gpr_val_w_T_89; // @[EXU.scala 207:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_91 = EXE_reg_op[39] ? _io_out_bits_gpr_val_w_T_54 : _io_out_bits_gpr_val_w_T_90; // @[EXU.scala 206:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_92 = EXE_reg_op[38] ? _io_out_bits_gpr_val_w_T_48 : _io_out_bits_gpr_val_w_T_91; // @[EXU.scala 205:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_93 = _io_csr_en_r_T_2 ? io_csr_val_r : _io_out_bits_gpr_val_w_T_92; // @[EXU.scala 204:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_94 = EXE_reg_op[52] | EXE_reg_op[53] | EXE_reg_op[54] ?
    _io_out_bits_gpr_val_w_T_39 : _io_out_bits_gpr_val_w_T_93; // @[EXU.scala 203:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_95 = EXE_reg_op[51] | EXE_reg_op[56] | EXE_reg_op[60] | EXE_reg_op[62] ?
    _io_out_bits_gpr_val_w_T_31 : _io_out_bits_gpr_val_w_T_94; // @[EXU.scala 202:26]
  wire [63:0] _io_out_bits_csr_val_w_T_2 = EXE_reg_op[64] ? alu_io_result : 64'h0; // @[EXU.scala 218:26]
  wire [63:0] _io_out_bits_pc_dnpc_T_5 = next_pc_sum & 64'hfffffffffffffffe; // @[EXU.scala 221:60]
  wire [63:0] _io_out_bits_pc_dnpc_T_6 = EXE_reg_op[37] ? _io_out_bits_pc_dnpc_T_5 : next_pc_sum; // @[EXU.scala 221:33]
  LSU lsu ( // @[EXU.scala 39:25]
    .clock(lsu_clock),
    .reset(lsu_reset),
    .io_ls_in_valid(lsu_io_ls_in_valid),
    .io_ls_in_bits_raddr(lsu_io_ls_in_bits_raddr),
    .io_ls_in_bits_waddr(lsu_io_ls_in_bits_waddr),
    .io_ls_in_bits_wdata(lsu_io_ls_in_bits_wdata),
    .io_ls_in_bits_wmask(lsu_io_ls_in_bits_wmask),
    .io_ls_out_ready(lsu_io_ls_out_ready),
    .io_ls_out_valid(lsu_io_ls_out_valid),
    .io_ls_out_bits_rdata(lsu_io_ls_out_bits_rdata),
    .io_en_r(lsu_io_en_r),
    .io_en_w(lsu_io_en_w),
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
    .io_lm_b_ready(lsu_io_lm_b_ready),
    .io_lm_b_valid(lsu_io_lm_b_valid)
  );
  ALU alu ( // @[EXU.scala 70:23]
    .clock(alu_clock),
    .reset(alu_reset),
    .io_src1(alu_io_src1),
    .io_src2(alu_io_src2),
    .io_op(alu_io_op),
    .io_result(alu_io_result),
    .io_validin(alu_io_validin),
    .io_validout(alu_io_validout),
    .io_busy(alu_io_busy)
  );
  ebreak ebreak1 ( // @[EXU.scala 120:27]
    .en_break(ebreak1_en_break),
    .clk(ebreak1_clk)
  );
  assign io_in_ready = (lsu_finish | _lsu_finish_T_3) & (alu_finish | alu_io_validout); // @[EXU.scala 99:70]
  assign io_out_valid = state == 2'h2 & _io_in_ready_T_1 & _io_in_ready_T_3; // @[EXU.scala 100:81]
  assign io_out_bits_pc = EXE_reg_pc; // @[EXU.scala 224:23]
  assign io_out_bits_pc_dnpc = EXE_reg_op[65] | EXE_reg_op[66] ? io_csr_val_r : _io_out_bits_pc_dnpc_T_6; // @[EXU.scala 220:33]
  assign io_out_bits_gpr_idx_w = dest[4:0]; // @[EXU.scala 192:30]
  assign io_out_bits_gpr_en_w = EXE_reg_typ[0] | EXE_reg_typ[1] | EXE_reg_typ[3] | EXE_reg_typ[5]; // @[EXU.scala 191:80]
  assign io_out_bits_gpr_val_w = EXE_reg_op[1] | EXE_reg_op[3] | EXE_reg_op[5] | EXE_reg_op[13] | EXE_reg_op[15] |
    EXE_reg_op[17] | EXE_reg_op[21] | EXE_reg_op[23] ? _io_out_bits_gpr_val_w_T_19 : _io_out_bits_gpr_val_w_T_95; // @[EXU.scala 201:26]
  assign io_out_bits_csr_en_w = EXE_reg_op[63] | EXE_reg_op[64]; // @[EXU.scala 194:50]
  assign io_out_bits_csr_idx_w = _io_csr_idx_r_T_3[11:0]; // @[EXU.scala 195:30]
  assign io_out_bits_csr_val_w = EXE_reg_op[63] ? src1 : _io_out_bits_csr_val_w_T_2; // @[EXU.scala 217:35]
  assign io_out_bits_csr_no = {{62'd0}, _io_out_bits_csr_no_T_3}; // @[EXU.scala 196:27]
  assign io_out_bits_csr_epc = {{32'd0}, EXE_reg_pc}; // @[EXU.scala 199:28]
  assign io_out_bits_isJump = EXE_reg_isJump; // @[EXU.scala 36:27]
  assign io_out_bits_clearidx = EXE_reg_clearidx; // @[EXU.scala 37:29]
  assign io_gpr_idx_r1 = EXE_reg_rs1; // @[EXU.scala 128:22]
  assign io_gpr_idx_r2 = EXE_reg_rs2; // @[EXU.scala 129:22]
  assign io_gpr_en_r1 = _src1_T_4 | EXE_reg_typ[5]; // @[EXU.scala 126:72]
  assign io_gpr_en_r2 = _src2_T_2 | EXE_reg_typ[5]; // @[EXU.scala 127:57]
  assign io_csr_idx_r = _io_csr_idx_r_T_3[11:0]; // @[EXU.scala 133:21]
  assign io_csr_en_r = EXE_reg_op[63] | EXE_reg_op[64]; // @[EXU.scala 132:40]
  assign io_lm_ar_valid = lsu_io_lm_ar_valid; // @[EXU.scala 117:14]
  assign io_lm_ar_bits_addr = lsu_io_lm_ar_bits_addr; // @[EXU.scala 117:14]
  assign io_lm_aw_valid = lsu_io_lm_aw_valid; // @[EXU.scala 117:14]
  assign io_lm_aw_bits_addr = lsu_io_lm_aw_bits_addr; // @[EXU.scala 117:14]
  assign io_lm_w_valid = lsu_io_lm_w_valid; // @[EXU.scala 117:14]
  assign io_lm_w_bits_data = lsu_io_lm_w_bits_data; // @[EXU.scala 117:14]
  assign io_lm_w_bits_strb = lsu_io_lm_w_bits_strb; // @[EXU.scala 117:14]
  assign lsu_clock = clock;
  assign lsu_reset = reset;
  assign lsu_io_ls_in_valid = _io_out_valid_T & ~lsu_finish; // @[EXU.scala 106:53]
  assign lsu_io_ls_in_bits_raddr = _lsu_io_ls_in_bits_raddr_T_13[31:0]; // @[EXU.scala 107:32]
  assign lsu_io_ls_in_bits_waddr = _lsu_io_ls_in_bits_waddr_T_7[31:0]; // @[EXU.scala 108:32]
  assign lsu_io_ls_in_bits_wdata = op_w ? io_gpr_val_r2 : 64'h0; // @[EXU.scala 109:37]
  assign lsu_io_ls_in_bits_wmask = EXE_reg_op[42] ? 8'h1 : _lsu_io_ls_in_bits_wmask_T_15; // @[EXU.scala 110:37]
  assign lsu_io_ls_out_ready = 1'h1; // @[EXU.scala 105:28]
  assign lsu_io_en_r = EXE_reg_op[38] | EXE_reg_op[39] | EXE_reg_op[40] | EXE_reg_op[41] | EXE_reg_op[46] | EXE_reg_op[
    47] | EXE_reg_op[48]; // @[EXU.scala 48:110]
  assign lsu_io_en_w = EXE_reg_op[42] | EXE_reg_op[43] | EXE_reg_op[44] | EXE_reg_op[45]; // @[EXU.scala 49:62]
  assign lsu_io_lm_ar_ready = io_lm_ar_ready; // @[EXU.scala 117:14]
  assign lsu_io_lm_r_valid = io_lm_r_valid; // @[EXU.scala 117:14]
  assign lsu_io_lm_r_bits_data = io_lm_r_bits_data; // @[EXU.scala 117:14]
  assign lsu_io_lm_aw_ready = io_lm_aw_ready; // @[EXU.scala 117:14]
  assign lsu_io_lm_w_ready = io_lm_w_ready; // @[EXU.scala 117:14]
  assign lsu_io_lm_b_valid = io_lm_b_valid; // @[EXU.scala 117:14]
  assign alu_clock = clock;
  assign alu_reset = reset;
  assign alu_io_src1 = EXE_reg_op[13] | EXE_reg_op[21] | EXE_reg_op[23] | EXE_reg_op[56] | EXE_reg_op[58] | EXE_reg_op[
    60] | EXE_reg_op[62] ? _alu_io_src1_T_15 : _alu_io_src1_T_28; // @[EXU.scala 143:28]
  assign alu_io_src2 = EXE_reg_op[13] | EXE_reg_op[17] | EXE_reg_op[21] ? _alu_io_src2_T_7 : _alu_io_src2_T_34; // @[EXU.scala 147:28]
  assign alu_io_op = EXE_reg_op[0] | EXE_reg_op[1] | EXE_reg_op[2] | EXE_reg_op[3] | EXE_reg_op[24] | EXE_reg_op[25] |
    EXE_reg_op[36] | EXE_reg_op[37] | EXE_reg_op[38] | EXE_reg_op[39] | EXE_reg_op[40] | EXE_reg_op[41] | EXE_reg_op[42]
     | EXE_reg_op[43] | EXE_reg_op[44] | EXE_reg_op[45] | EXE_reg_op[46] | EXE_reg_op[47] | EXE_reg_op[48] ? 19'h1 :
    _alu_io_op_T_124; // @[EXU.scala 154:28]
  assign alu_io_validin = _io_out_valid_T & (op_mul | op_div) & ~alu_finish & alu_valid; // @[EXU.scala 141:83]
  assign ebreak1_en_break = EXE_reg_op[49] & _EXE_reg_pc_T; // @[EXU.scala 121:44]
  assign ebreak1_clk = clock; // @[EXU.scala 122:23]
  always @(posedge clock) begin
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_pc <= 32'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_pc <= io_in_bits_pc; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_inst <= 32'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_inst <= io_in_bits_inst; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_rs1 <= 5'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_rs1 <= io_in_bits_rs1; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_rs2 <= 5'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_rs2 <= io_in_bits_rs2; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_rd <= 5'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_rd <= io_in_bits_rd; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_imm <= 64'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_imm <= io_in_bits_imm; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_op <= 80'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_op <= io_in_bits_op; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_typ <= 6'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_typ <= io_in_bits_typ; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_isJump <= 1'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_isJump <= io_in_bits_isJump; // @[Reg.scala 36:22]
    end
    if (reset) begin // @[Reg.scala 35:20]
      EXE_reg_clearidx <= 5'h0; // @[Reg.scala 35:20]
    end else if (_EXE_reg_pc_T) begin // @[Reg.scala 36:18]
      EXE_reg_clearidx <= io_in_bits_clearidx; // @[Reg.scala 36:22]
    end
    lsu_finish <= reset | _lsu_finish_T_10; // @[EXU.scala 72:{31,31} 80:20]
    alu_finish <= reset | _alu_finish_T_9; // @[EXU.scala 73:{31,31} 82:20]
    if (reset) begin // @[EXU.scala 74:31]
      alu_valid <= 1'h0; // @[EXU.scala 74:31]
    end else begin
      alu_valid <= _alu_finish_T_2 | _alu_valid_T_4; // @[EXU.scala 84:20]
    end
    if (reset) begin // @[EXU.scala 78:28]
      state <= 2'h0; // @[EXU.scala 78:28]
    end else if (2'h2 == state) begin // @[Mux.scala 81:58]
      if ((~io_out_valid | ~_EXE_reg_pc_T) & (~op_wait | _lsu_finish_T_3 | alu_io_validout)) begin // @[EXU.scala 91:31]
        state <= 2'h0;
      end else begin
        state <= 2'h2;
      end
    end else if (2'h0 == state) begin // @[Mux.scala 81:58]
      if (_EXE_reg_pc_T) begin // @[EXU.scala 90:26]
        state <= 2'h2;
      end else begin
        state <= 2'h0;
      end
    end else begin
      state <= 2'h0;
    end
    if (reset) begin // @[Reg.scala 35:20]
      alu_res <= 64'h0; // @[Reg.scala 35:20]
    end else if (_state_T_10) begin // @[Reg.scala 36:18]
      alu_res <= alu_io_result; // @[Reg.scala 36:22]
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
  EXE_reg_pc = _RAND_0[31:0];
  _RAND_1 = {1{`RANDOM}};
  EXE_reg_inst = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  EXE_reg_rs1 = _RAND_2[4:0];
  _RAND_3 = {1{`RANDOM}};
  EXE_reg_rs2 = _RAND_3[4:0];
  _RAND_4 = {1{`RANDOM}};
  EXE_reg_rd = _RAND_4[4:0];
  _RAND_5 = {2{`RANDOM}};
  EXE_reg_imm = _RAND_5[63:0];
  _RAND_6 = {3{`RANDOM}};
  EXE_reg_op = _RAND_6[79:0];
  _RAND_7 = {1{`RANDOM}};
  EXE_reg_typ = _RAND_7[5:0];
  _RAND_8 = {1{`RANDOM}};
  EXE_reg_isJump = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  EXE_reg_clearidx = _RAND_9[4:0];
  _RAND_10 = {1{`RANDOM}};
  lsu_finish = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  alu_finish = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  alu_valid = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  state = _RAND_13[1:0];
  _RAND_14 = {2{`RANDOM}};
  alu_res = _RAND_14[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
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
  wire [63:0] _GEN_1 = 5'h1 == io_r_idx_r1 ? gpr_1 : 64'h0; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_2 = 5'h2 == io_r_idx_r1 ? gpr_2 : _GEN_1; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_3 = 5'h3 == io_r_idx_r1 ? gpr_3 : _GEN_2; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_4 = 5'h4 == io_r_idx_r1 ? gpr_4 : _GEN_3; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_5 = 5'h5 == io_r_idx_r1 ? gpr_5 : _GEN_4; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_6 = 5'h6 == io_r_idx_r1 ? gpr_6 : _GEN_5; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_7 = 5'h7 == io_r_idx_r1 ? gpr_7 : _GEN_6; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_8 = 5'h8 == io_r_idx_r1 ? gpr_8 : _GEN_7; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_9 = 5'h9 == io_r_idx_r1 ? gpr_9 : _GEN_8; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_10 = 5'ha == io_r_idx_r1 ? gpr_10 : _GEN_9; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_11 = 5'hb == io_r_idx_r1 ? gpr_11 : _GEN_10; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_12 = 5'hc == io_r_idx_r1 ? gpr_12 : _GEN_11; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_13 = 5'hd == io_r_idx_r1 ? gpr_13 : _GEN_12; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_14 = 5'he == io_r_idx_r1 ? gpr_14 : _GEN_13; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_15 = 5'hf == io_r_idx_r1 ? gpr_15 : _GEN_14; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_16 = 5'h10 == io_r_idx_r1 ? gpr_16 : _GEN_15; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_17 = 5'h11 == io_r_idx_r1 ? gpr_17 : _GEN_16; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_18 = 5'h12 == io_r_idx_r1 ? gpr_18 : _GEN_17; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_19 = 5'h13 == io_r_idx_r1 ? gpr_19 : _GEN_18; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_20 = 5'h14 == io_r_idx_r1 ? gpr_20 : _GEN_19; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_21 = 5'h15 == io_r_idx_r1 ? gpr_21 : _GEN_20; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_22 = 5'h16 == io_r_idx_r1 ? gpr_22 : _GEN_21; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_23 = 5'h17 == io_r_idx_r1 ? gpr_23 : _GEN_22; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_24 = 5'h18 == io_r_idx_r1 ? gpr_24 : _GEN_23; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_25 = 5'h19 == io_r_idx_r1 ? gpr_25 : _GEN_24; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_26 = 5'h1a == io_r_idx_r1 ? gpr_26 : _GEN_25; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_27 = 5'h1b == io_r_idx_r1 ? gpr_27 : _GEN_26; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_28 = 5'h1c == io_r_idx_r1 ? gpr_28 : _GEN_27; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_29 = 5'h1d == io_r_idx_r1 ? gpr_29 : _GEN_28; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_30 = 5'h1e == io_r_idx_r1 ? gpr_30 : _GEN_29; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_31 = 5'h1f == io_r_idx_r1 ? gpr_31 : _GEN_30; // @[GPR.scala 26:{21,21}]
  wire [63:0] _GEN_33 = 5'h1 == io_r_idx_r2 ? gpr_1 : 64'h0; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_34 = 5'h2 == io_r_idx_r2 ? gpr_2 : _GEN_33; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_35 = 5'h3 == io_r_idx_r2 ? gpr_3 : _GEN_34; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_36 = 5'h4 == io_r_idx_r2 ? gpr_4 : _GEN_35; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_37 = 5'h5 == io_r_idx_r2 ? gpr_5 : _GEN_36; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_38 = 5'h6 == io_r_idx_r2 ? gpr_6 : _GEN_37; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_39 = 5'h7 == io_r_idx_r2 ? gpr_7 : _GEN_38; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_40 = 5'h8 == io_r_idx_r2 ? gpr_8 : _GEN_39; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_41 = 5'h9 == io_r_idx_r2 ? gpr_9 : _GEN_40; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_42 = 5'ha == io_r_idx_r2 ? gpr_10 : _GEN_41; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_43 = 5'hb == io_r_idx_r2 ? gpr_11 : _GEN_42; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_44 = 5'hc == io_r_idx_r2 ? gpr_12 : _GEN_43; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_45 = 5'hd == io_r_idx_r2 ? gpr_13 : _GEN_44; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_46 = 5'he == io_r_idx_r2 ? gpr_14 : _GEN_45; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_47 = 5'hf == io_r_idx_r2 ? gpr_15 : _GEN_46; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_48 = 5'h10 == io_r_idx_r2 ? gpr_16 : _GEN_47; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_49 = 5'h11 == io_r_idx_r2 ? gpr_17 : _GEN_48; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_50 = 5'h12 == io_r_idx_r2 ? gpr_18 : _GEN_49; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_51 = 5'h13 == io_r_idx_r2 ? gpr_19 : _GEN_50; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_52 = 5'h14 == io_r_idx_r2 ? gpr_20 : _GEN_51; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_53 = 5'h15 == io_r_idx_r2 ? gpr_21 : _GEN_52; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_54 = 5'h16 == io_r_idx_r2 ? gpr_22 : _GEN_53; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_55 = 5'h17 == io_r_idx_r2 ? gpr_23 : _GEN_54; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_56 = 5'h18 == io_r_idx_r2 ? gpr_24 : _GEN_55; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_57 = 5'h19 == io_r_idx_r2 ? gpr_25 : _GEN_56; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_58 = 5'h1a == io_r_idx_r2 ? gpr_26 : _GEN_57; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_59 = 5'h1b == io_r_idx_r2 ? gpr_27 : _GEN_58; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_60 = 5'h1c == io_r_idx_r2 ? gpr_28 : _GEN_59; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_61 = 5'h1d == io_r_idx_r2 ? gpr_29 : _GEN_60; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_62 = 5'h1e == io_r_idx_r2 ? gpr_30 : _GEN_61; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_63 = 5'h1f == io_r_idx_r2 ? gpr_31 : _GEN_62; // @[GPR.scala 27:{21,21}]
  wire [63:0] _GEN_65 = 5'h1 == io_w_idx_w ? gpr_1 : 64'h0; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_66 = 5'h2 == io_w_idx_w ? gpr_2 : _GEN_65; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_67 = 5'h3 == io_w_idx_w ? gpr_3 : _GEN_66; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_68 = 5'h4 == io_w_idx_w ? gpr_4 : _GEN_67; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_69 = 5'h5 == io_w_idx_w ? gpr_5 : _GEN_68; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_70 = 5'h6 == io_w_idx_w ? gpr_6 : _GEN_69; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_71 = 5'h7 == io_w_idx_w ? gpr_7 : _GEN_70; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_72 = 5'h8 == io_w_idx_w ? gpr_8 : _GEN_71; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_73 = 5'h9 == io_w_idx_w ? gpr_9 : _GEN_72; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_74 = 5'ha == io_w_idx_w ? gpr_10 : _GEN_73; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_75 = 5'hb == io_w_idx_w ? gpr_11 : _GEN_74; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_76 = 5'hc == io_w_idx_w ? gpr_12 : _GEN_75; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_77 = 5'hd == io_w_idx_w ? gpr_13 : _GEN_76; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_78 = 5'he == io_w_idx_w ? gpr_14 : _GEN_77; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_79 = 5'hf == io_w_idx_w ? gpr_15 : _GEN_78; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_80 = 5'h10 == io_w_idx_w ? gpr_16 : _GEN_79; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_81 = 5'h11 == io_w_idx_w ? gpr_17 : _GEN_80; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_82 = 5'h12 == io_w_idx_w ? gpr_18 : _GEN_81; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_83 = 5'h13 == io_w_idx_w ? gpr_19 : _GEN_82; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_84 = 5'h14 == io_w_idx_w ? gpr_20 : _GEN_83; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_85 = 5'h15 == io_w_idx_w ? gpr_21 : _GEN_84; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_86 = 5'h16 == io_w_idx_w ? gpr_22 : _GEN_85; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_87 = 5'h17 == io_w_idx_w ? gpr_23 : _GEN_86; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_88 = 5'h18 == io_w_idx_w ? gpr_24 : _GEN_87; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_89 = 5'h19 == io_w_idx_w ? gpr_25 : _GEN_88; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_90 = 5'h1a == io_w_idx_w ? gpr_26 : _GEN_89; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_91 = 5'h1b == io_w_idx_w ? gpr_27 : _GEN_90; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_92 = 5'h1c == io_w_idx_w ? gpr_28 : _GEN_91; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_93 = 5'h1d == io_w_idx_w ? gpr_29 : _GEN_92; // @[GPR.scala 28:{25,25}]
  wire [63:0] _GEN_94 = 5'h1e == io_w_idx_w ? gpr_30 : _GEN_93; // @[GPR.scala 28:{25,25}]
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
  input  [11:0] io_r_idx_r,
  input         io_r_en_r,
  output [63:0] io_r_val_r,
  input         io_w_en_w,
  input  [11:0] io_w_idx_w,
  input  [63:0] io_w_val_w,
  input  [63:0] io_w_no,
  input  [63:0] io_w_epc
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] p_rf_0; // @[CSR.scala 48:17]
  wire [63:0] p_rf_1; // @[CSR.scala 48:17]
  wire [63:0] p_rf_2; // @[CSR.scala 48:17]
  wire [63:0] p_rf_3; // @[CSR.scala 48:17]
  reg [63:0] csr_0; // @[CSR.scala 24:20]
  reg [63:0] csr_1; // @[CSR.scala 24:20]
  reg [63:0] csr_2; // @[CSR.scala 24:20]
  reg [63:0] csr_3; // @[CSR.scala 24:20]
  wire [1:0] _map_r_T_4 = io_r_idx_r == 12'h342 ? 2'h3 : 2'h0; // @[CSR.scala 31:15]
  wire [1:0] _map_r_T_5 = io_r_idx_r == 12'h341 ? 2'h2 : _map_r_T_4; // @[CSR.scala 30:15]
  wire [1:0] _map_r_T_6 = io_r_idx_r == 12'h305 ? 2'h1 : _map_r_T_5; // @[CSR.scala 29:15]
  wire [1:0] map_r = io_r_idx_r == 12'h300 ? 2'h0 : _map_r_T_6; // @[CSR.scala 28:15]
  wire [1:0] _map_w_T_4 = io_w_idx_w == 12'h342 ? 2'h3 : 2'h0; // @[CSR.scala 37:15]
  wire [1:0] _map_w_T_5 = io_w_idx_w == 12'h341 ? 2'h2 : _map_w_T_4; // @[CSR.scala 36:15]
  wire [1:0] _map_w_T_6 = io_w_idx_w == 12'h305 ? 2'h1 : _map_w_T_5; // @[CSR.scala 35:15]
  wire [1:0] map_w = io_w_idx_w == 12'h300 ? 2'h0 : _map_w_T_6; // @[CSR.scala 34:15]
  wire  _csr_2_T = io_w_no == 64'h1; // @[CSR.scala 40:24]
  wire [63:0] _GEN_1 = 2'h1 == map_r ? csr_1 : csr_0; // @[CSR.scala 44:{20,20}]
  wire [63:0] _GEN_2 = 2'h2 == map_r ? csr_2 : _GEN_1; // @[CSR.scala 44:{20,20}]
  wire [63:0] _GEN_3 = 2'h3 == map_r ? csr_3 : _GEN_2; // @[CSR.scala 44:{20,20}]
  wire [63:0] _io_r_val_r_T_3 = io_r_en_r ? _GEN_3 : 64'h0; // @[CSR.scala 44:20]
  wire [63:0] _io_r_val_r_T_4 = io_w_no == 64'h2 ? csr_2 : _io_r_val_r_T_3; // @[CSR.scala 43:20]
  wire [63:0] _GEN_5 = 2'h1 == map_w ? csr_1 : csr_0; // @[CSR.scala 46:{20,20}]
  wire [63:0] _GEN_6 = 2'h2 == map_w ? csr_2 : _GEN_5; // @[CSR.scala 46:{20,20}]
  print_csr p ( // @[CSR.scala 48:17]
    .rf_0(p_rf_0),
    .rf_1(p_rf_1),
    .rf_2(p_rf_2),
    .rf_3(p_rf_3)
  );
  assign io_r_val_r = _csr_2_T ? csr_1 : _io_r_val_r_T_4; // @[CSR.scala 42:20]
  assign p_rf_0 = csr_0; // @[CSR.scala 49:12]
  assign p_rf_1 = csr_1; // @[CSR.scala 49:12]
  assign p_rf_2 = csr_2; // @[CSR.scala 49:12]
  assign p_rf_3 = csr_3; // @[CSR.scala 49:12]
  always @(posedge clock) begin
    if (reset) begin // @[CSR.scala 24:20]
      csr_0 <= 64'ha00001800; // @[CSR.scala 24:20]
    end else if (2'h0 == map_w) begin // @[CSR.scala 46:15]
      if (io_w_en_w) begin // @[CSR.scala 46:20]
        csr_0 <= io_w_val_w;
      end else if (2'h3 == map_w) begin // @[CSR.scala 46:20]
        csr_0 <= csr_3; // @[CSR.scala 46:20]
      end else begin
        csr_0 <= _GEN_6;
      end
    end
    if (reset) begin // @[CSR.scala 24:20]
      csr_1 <= 64'h0; // @[CSR.scala 24:20]
    end else if (2'h1 == map_w) begin // @[CSR.scala 46:15]
      if (io_w_en_w) begin // @[CSR.scala 46:20]
        csr_1 <= io_w_val_w;
      end else if (2'h3 == map_w) begin // @[CSR.scala 46:20]
        csr_1 <= csr_3; // @[CSR.scala 46:20]
      end else begin
        csr_1 <= _GEN_6;
      end
    end
    if (reset) begin // @[CSR.scala 24:20]
      csr_2 <= 64'h0; // @[CSR.scala 24:20]
    end else if (2'h2 == map_w) begin // @[CSR.scala 46:15]
      if (io_w_en_w) begin // @[CSR.scala 46:20]
        csr_2 <= io_w_val_w;
      end else if (2'h3 == map_w) begin // @[CSR.scala 46:20]
        csr_2 <= csr_3; // @[CSR.scala 46:20]
      end else begin
        csr_2 <= _GEN_6;
      end
    end else if (io_w_no == 64'h1) begin // @[CSR.scala 40:16]
      csr_2 <= io_w_epc;
    end
    if (reset) begin // @[CSR.scala 24:20]
      csr_3 <= 64'h0; // @[CSR.scala 24:20]
    end else if (2'h3 == map_w) begin // @[CSR.scala 46:15]
      if (io_w_en_w) begin // @[CSR.scala 46:20]
        csr_3 <= io_w_val_w;
      end else if (!(2'h3 == map_w)) begin // @[CSR.scala 46:20]
        csr_3 <= _GEN_6;
      end
    end else if (_csr_2_T) begin // @[CSR.scala 41:16]
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
module ScoreBoard(
  input        clock,
  input        reset,
  input  [4:0] io_ID_lookidx1,
  input  [4:0] io_ID_lookidx2,
  input  [4:0] io_ID_setidx,
  output       io_ID_isBusy,
  input  [4:0] io_WB_clearidx
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [31:0] busy; // @[ScoreBoard.scala 21:21]
  wire [62:0] _busy_T = 63'h1 << io_WB_clearidx; // @[ScoreBoard.scala 23:38]
  wire [31:0] _busy_T_2 = ~_busy_T[31:0]; // @[ScoreBoard.scala 25:24]
  wire [31:0] _busy_T_3 = busy & _busy_T_2; // @[ScoreBoard.scala 25:22]
  wire [62:0] _busy_T_4 = 63'h1 << io_ID_setidx; // @[ScoreBoard.scala 23:38]
  wire [31:0] _busy_T_6 = _busy_T_3 | _busy_T_4[31:0]; // @[ScoreBoard.scala 25:49]
  wire [31:0] _busy_T_8 = {_busy_T_6[31:1],1'h0}; // @[Cat.scala 33:92]
  wire [31:0] _io_ID_isBusy_T = busy >> io_ID_lookidx1; // @[ScoreBoard.scala 26:23]
  wire [31:0] _io_ID_isBusy_T_2 = busy >> io_ID_lookidx2; // @[ScoreBoard.scala 26:44]
  assign io_ID_isBusy = _io_ID_isBusy_T[0] | _io_ID_isBusy_T_2[0]; // @[ScoreBoard.scala 26:39]
  always @(posedge clock) begin
    if (reset) begin // @[ScoreBoard.scala 21:21]
      busy <= 32'h0; // @[ScoreBoard.scala 21:21]
    end else begin
      busy <= _busy_T_8; // @[ScoreBoard.scala 25:9]
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
module AXILite2AXI4(
  output        io_in_ar_ready,
  input         io_in_ar_valid,
  input  [31:0] io_in_ar_bits_addr,
  output        io_in_r_valid,
  output [63:0] io_in_r_bits_data,
  output        io_in_aw_ready,
  input         io_in_aw_valid,
  input  [31:0] io_in_aw_bits_addr,
  output        io_in_w_ready,
  input         io_in_w_valid,
  input  [63:0] io_in_w_bits_data,
  input  [7:0]  io_in_w_bits_strb,
  input         io_in_b_ready,
  output        io_in_b_valid,
  input         io_id,
  input         io_mem_ar_ready,
  output        io_mem_ar_valid,
  output [31:0] io_mem_ar_bits_addr,
  output [3:0]  io_mem_ar_bits_id,
  input         io_mem_r_valid,
  input  [63:0] io_mem_r_bits_data,
  input         io_mem_aw_ready,
  output        io_mem_aw_valid,
  output [31:0] io_mem_aw_bits_addr,
  input         io_mem_w_ready,
  output        io_mem_w_valid,
  output [63:0] io_mem_w_bits_data,
  output [7:0]  io_mem_w_bits_strb,
  output        io_mem_w_bits_last,
  output        io_mem_b_ready,
  input         io_mem_b_valid
);
  assign io_in_ar_ready = io_mem_ar_ready; // @[Crossbar.scala 212:18]
  assign io_in_r_valid = io_mem_r_valid; // @[Crossbar.scala 215:17]
  assign io_in_r_bits_data = io_mem_r_bits_data; // @[Crossbar.scala 213:21]
  assign io_in_aw_ready = io_mem_aw_ready; // @[Crossbar.scala 219:18]
  assign io_in_w_ready = io_mem_w_ready; // @[Crossbar.scala 223:17]
  assign io_in_b_valid = io_mem_b_valid; // @[Crossbar.scala 225:17]
  assign io_mem_ar_valid = io_in_ar_valid; // @[Crossbar.scala 211:18]
  assign io_mem_ar_bits_addr = io_in_ar_bits_addr; // @[Crossbar.scala 210:22]
  assign io_mem_ar_bits_id = {{3'd0}, io_id}; // @[Crossbar.scala 228:21]
  assign io_mem_aw_valid = io_in_aw_valid; // @[Crossbar.scala 218:18]
  assign io_mem_aw_bits_addr = io_in_aw_bits_addr; // @[Crossbar.scala 217:22]
  assign io_mem_w_valid = io_in_w_valid; // @[Crossbar.scala 222:17]
  assign io_mem_w_bits_data = io_in_w_bits_data; // @[Crossbar.scala 220:21]
  assign io_mem_w_bits_strb = io_in_w_bits_strb; // @[Crossbar.scala 221:21]
  assign io_mem_w_bits_last = io_in_w_valid; // @[Crossbar.scala 239:22]
  assign io_mem_b_ready = io_in_b_ready; // @[Crossbar.scala 226:17]
endmodule
module AXI4Arbiter(
  output        io_ifu_ar_ready,
  input         io_ifu_ar_valid,
  input  [31:0] io_ifu_ar_bits_addr,
  input  [3:0]  io_ifu_ar_bits_id,
  output        io_ifu_r_valid,
  output [63:0] io_ifu_r_bits_data,
  output        io_lsu_ar_ready,
  input         io_lsu_ar_valid,
  input  [31:0] io_lsu_ar_bits_addr,
  input  [3:0]  io_lsu_ar_bits_id,
  output        io_lsu_r_valid,
  output [63:0] io_lsu_r_bits_data,
  output        io_lsu_aw_ready,
  input         io_lsu_aw_valid,
  input  [31:0] io_lsu_aw_bits_addr,
  output        io_lsu_w_ready,
  input         io_lsu_w_valid,
  input  [63:0] io_lsu_w_bits_data,
  input  [7:0]  io_lsu_w_bits_strb,
  input         io_lsu_w_bits_last,
  input         io_lsu_b_ready,
  output        io_lsu_b_valid,
  input         io_out_ar_ready,
  output        io_out_ar_valid,
  output [31:0] io_out_ar_bits_addr,
  output [2:0]  io_out_ar_bits_size,
  output [3:0]  io_out_ar_bits_id,
  output        io_out_r_ready,
  input         io_out_r_valid,
  input  [63:0] io_out_r_bits_data,
  input  [3:0]  io_out_r_bits_id,
  input         io_out_aw_ready,
  output        io_out_aw_valid,
  output [31:0] io_out_aw_bits_addr,
  input         io_out_w_ready,
  output        io_out_w_valid,
  output [63:0] io_out_w_bits_data,
  output [7:0]  io_out_w_bits_strb,
  output        io_out_w_bits_last,
  output        io_out_b_ready,
  input         io_out_b_valid
);
  wire [1:0] arstate = io_lsu_ar_valid ? 2'h2 : 2'h1; // @[Arbiter.scala 17:17]
  wire [1:0] rstate = io_out_r_bits_id == 4'h1 ? 2'h2 : 2'h1; // @[Arbiter.scala 18:16]
  wire [3:0] _GEN_0 = arstate == 2'h2 ? io_lsu_ar_bits_id : 4'h0; // @[Arbiter.scala 46:33 47:25 56:25]
  wire [31:0] _GEN_1 = arstate == 2'h2 ? io_lsu_ar_bits_addr : 32'h0; // @[Arbiter.scala 46:33 48:25 57:25]
  wire [2:0] _GEN_3 = arstate == 2'h2 ? 3'h3 : 3'h0; // @[Arbiter.scala 46:33 50:25 59:25]
  wire  _GEN_5 = arstate == 2'h2 & io_lsu_ar_valid; // @[Arbiter.scala 46:33 52:25 61:25]
  wire  _GEN_7 = arstate == 2'h2 & io_out_ar_ready; // @[Arbiter.scala 46:33 54:25 63:25]
  wire  _T_3 = rstate == 2'h2; // @[Arbiter.scala 80:21]
  wire [63:0] _GEN_18 = rstate == 2'h2 ? io_out_r_bits_data : 64'h0; // @[Arbiter.scala 102:27 80:32 88:27]
  wire  _GEN_21 = rstate == 2'h2 & io_out_r_valid; // @[Arbiter.scala 105:27 80:32 91:27]
  assign io_ifu_ar_ready = arstate == 2'h1 & io_out_ar_ready; // @[Arbiter.scala 37:26 44:25]
  assign io_ifu_r_valid = rstate == 2'h1 & io_out_r_valid; // @[Arbiter.scala 66:25 71:27]
  assign io_ifu_r_bits_data = rstate == 2'h1 ? io_out_r_bits_data : 64'h0; // @[Arbiter.scala 66:25 68:27]
  assign io_lsu_ar_ready = arstate == 2'h1 ? 1'h0 : _GEN_7; // @[Arbiter.scala 37:26 45:25]
  assign io_lsu_r_valid = rstate == 2'h1 ? 1'h0 : _GEN_21; // @[Arbiter.scala 66:25 77:27]
  assign io_lsu_r_bits_data = rstate == 2'h1 ? 64'h0 : _GEN_18; // @[Arbiter.scala 66:25 74:27]
  assign io_lsu_aw_ready = io_out_aw_ready; // @[Arbiter.scala 119:23]
  assign io_lsu_w_ready = io_out_w_ready; // @[Arbiter.scala 128:23]
  assign io_lsu_b_valid = io_out_b_valid; // @[Arbiter.scala 136:23]
  assign io_out_ar_valid = arstate == 2'h1 ? io_ifu_ar_valid : _GEN_5; // @[Arbiter.scala 37:26 43:25]
  assign io_out_ar_bits_addr = arstate == 2'h1 ? io_ifu_ar_bits_addr : _GEN_1; // @[Arbiter.scala 37:26 39:25]
  assign io_out_ar_bits_size = arstate == 2'h1 ? 3'h3 : _GEN_3; // @[Arbiter.scala 37:26 41:25]
  assign io_out_ar_bits_id = arstate == 2'h1 ? io_ifu_ar_bits_id : _GEN_0; // @[Arbiter.scala 37:26 38:25]
  assign io_out_r_ready = rstate == 2'h1 | _T_3; // @[Arbiter.scala 66:25 79:27]
  assign io_out_aw_valid = io_lsu_aw_valid; // @[Arbiter.scala 116:23]
  assign io_out_aw_bits_addr = io_lsu_aw_bits_addr; // @[Arbiter.scala 112:23]
  assign io_out_w_valid = io_lsu_w_valid; // @[Arbiter.scala 125:23]
  assign io_out_w_bits_data = io_lsu_w_bits_data; // @[Arbiter.scala 122:23]
  assign io_out_w_bits_strb = io_lsu_w_bits_strb; // @[Arbiter.scala 123:23]
  assign io_out_w_bits_last = io_lsu_w_bits_last; // @[Arbiter.scala 124:23]
  assign io_out_b_ready = io_lsu_b_ready; // @[Arbiter.scala 138:18]
endmodule
module Crossbar(
  input         io_in1_ar_valid,
  input  [31:0] io_in1_ar_bits_addr,
  output        io_in1_r_valid,
  output [63:0] io_in1_r_bits_data,
  output        io_in2_ar_ready,
  input         io_in2_ar_valid,
  input  [31:0] io_in2_ar_bits_addr,
  output        io_in2_r_valid,
  output [63:0] io_in2_r_bits_data,
  output        io_in2_aw_ready,
  input         io_in2_aw_valid,
  input  [31:0] io_in2_aw_bits_addr,
  output        io_in2_w_ready,
  input         io_in2_w_valid,
  input  [63:0] io_in2_w_bits_data,
  input  [7:0]  io_in2_w_bits_strb,
  output        io_in2_b_valid,
  input         io_out_ar_ready,
  output        io_out_ar_valid,
  output [31:0] io_out_ar_bits_addr,
  output [2:0]  io_out_ar_bits_size,
  output [3:0]  io_out_ar_bits_id,
  output        io_out_r_ready,
  input         io_out_r_valid,
  input  [63:0] io_out_r_bits_data,
  input  [3:0]  io_out_r_bits_id,
  input         io_out_aw_ready,
  output        io_out_aw_valid,
  output [31:0] io_out_aw_bits_addr,
  input         io_out_w_ready,
  output        io_out_w_valid,
  output [63:0] io_out_w_bits_data,
  output [7:0]  io_out_w_bits_strb,
  output        io_out_w_bits_last,
  output        io_out_b_ready,
  input         io_out_b_valid
);
  wire  AXILite2AXI4_io_in_ar_ready; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_in_ar_valid; // @[Crossbar.scala 18:22]
  wire [31:0] AXILite2AXI4_io_in_ar_bits_addr; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_in_r_valid; // @[Crossbar.scala 18:22]
  wire [63:0] AXILite2AXI4_io_in_r_bits_data; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_in_aw_ready; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_in_aw_valid; // @[Crossbar.scala 18:22]
  wire [31:0] AXILite2AXI4_io_in_aw_bits_addr; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_in_w_ready; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_in_w_valid; // @[Crossbar.scala 18:22]
  wire [63:0] AXILite2AXI4_io_in_w_bits_data; // @[Crossbar.scala 18:22]
  wire [7:0] AXILite2AXI4_io_in_w_bits_strb; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_in_b_ready; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_in_b_valid; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_id; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_mem_ar_ready; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_mem_ar_valid; // @[Crossbar.scala 18:22]
  wire [31:0] AXILite2AXI4_io_mem_ar_bits_addr; // @[Crossbar.scala 18:22]
  wire [3:0] AXILite2AXI4_io_mem_ar_bits_id; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_mem_r_valid; // @[Crossbar.scala 18:22]
  wire [63:0] AXILite2AXI4_io_mem_r_bits_data; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_mem_aw_ready; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_mem_aw_valid; // @[Crossbar.scala 18:22]
  wire [31:0] AXILite2AXI4_io_mem_aw_bits_addr; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_mem_w_ready; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_mem_w_valid; // @[Crossbar.scala 18:22]
  wire [63:0] AXILite2AXI4_io_mem_w_bits_data; // @[Crossbar.scala 18:22]
  wire [7:0] AXILite2AXI4_io_mem_w_bits_strb; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_mem_w_bits_last; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_mem_b_ready; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_io_mem_b_valid; // @[Crossbar.scala 18:22]
  wire  AXILite2AXI4_1_io_in_ar_ready; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_in_ar_valid; // @[Crossbar.scala 19:22]
  wire [31:0] AXILite2AXI4_1_io_in_ar_bits_addr; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_in_r_valid; // @[Crossbar.scala 19:22]
  wire [63:0] AXILite2AXI4_1_io_in_r_bits_data; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_in_aw_ready; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_in_aw_valid; // @[Crossbar.scala 19:22]
  wire [31:0] AXILite2AXI4_1_io_in_aw_bits_addr; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_in_w_ready; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_in_w_valid; // @[Crossbar.scala 19:22]
  wire [63:0] AXILite2AXI4_1_io_in_w_bits_data; // @[Crossbar.scala 19:22]
  wire [7:0] AXILite2AXI4_1_io_in_w_bits_strb; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_in_b_ready; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_in_b_valid; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_id; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_mem_ar_ready; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_mem_ar_valid; // @[Crossbar.scala 19:22]
  wire [31:0] AXILite2AXI4_1_io_mem_ar_bits_addr; // @[Crossbar.scala 19:22]
  wire [3:0] AXILite2AXI4_1_io_mem_ar_bits_id; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_mem_r_valid; // @[Crossbar.scala 19:22]
  wire [63:0] AXILite2AXI4_1_io_mem_r_bits_data; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_mem_aw_ready; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_mem_aw_valid; // @[Crossbar.scala 19:22]
  wire [31:0] AXILite2AXI4_1_io_mem_aw_bits_addr; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_mem_w_ready; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_mem_w_valid; // @[Crossbar.scala 19:22]
  wire [63:0] AXILite2AXI4_1_io_mem_w_bits_data; // @[Crossbar.scala 19:22]
  wire [7:0] AXILite2AXI4_1_io_mem_w_bits_strb; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_mem_w_bits_last; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_mem_b_ready; // @[Crossbar.scala 19:22]
  wire  AXILite2AXI4_1_io_mem_b_valid; // @[Crossbar.scala 19:22]
  wire  AXI4Arbiter_io_ifu_ar_ready; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_ifu_ar_valid; // @[Crossbar.scala 20:23]
  wire [31:0] AXI4Arbiter_io_ifu_ar_bits_addr; // @[Crossbar.scala 20:23]
  wire [3:0] AXI4Arbiter_io_ifu_ar_bits_id; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_ifu_r_valid; // @[Crossbar.scala 20:23]
  wire [63:0] AXI4Arbiter_io_ifu_r_bits_data; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_lsu_ar_ready; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_lsu_ar_valid; // @[Crossbar.scala 20:23]
  wire [31:0] AXI4Arbiter_io_lsu_ar_bits_addr; // @[Crossbar.scala 20:23]
  wire [3:0] AXI4Arbiter_io_lsu_ar_bits_id; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_lsu_r_valid; // @[Crossbar.scala 20:23]
  wire [63:0] AXI4Arbiter_io_lsu_r_bits_data; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_lsu_aw_ready; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_lsu_aw_valid; // @[Crossbar.scala 20:23]
  wire [31:0] AXI4Arbiter_io_lsu_aw_bits_addr; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_lsu_w_ready; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_lsu_w_valid; // @[Crossbar.scala 20:23]
  wire [63:0] AXI4Arbiter_io_lsu_w_bits_data; // @[Crossbar.scala 20:23]
  wire [7:0] AXI4Arbiter_io_lsu_w_bits_strb; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_lsu_w_bits_last; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_lsu_b_ready; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_lsu_b_valid; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_out_ar_ready; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_out_ar_valid; // @[Crossbar.scala 20:23]
  wire [31:0] AXI4Arbiter_io_out_ar_bits_addr; // @[Crossbar.scala 20:23]
  wire [2:0] AXI4Arbiter_io_out_ar_bits_size; // @[Crossbar.scala 20:23]
  wire [3:0] AXI4Arbiter_io_out_ar_bits_id; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_out_r_ready; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_out_r_valid; // @[Crossbar.scala 20:23]
  wire [63:0] AXI4Arbiter_io_out_r_bits_data; // @[Crossbar.scala 20:23]
  wire [3:0] AXI4Arbiter_io_out_r_bits_id; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_out_aw_ready; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_out_aw_valid; // @[Crossbar.scala 20:23]
  wire [31:0] AXI4Arbiter_io_out_aw_bits_addr; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_out_w_ready; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_out_w_valid; // @[Crossbar.scala 20:23]
  wire [63:0] AXI4Arbiter_io_out_w_bits_data; // @[Crossbar.scala 20:23]
  wire [7:0] AXI4Arbiter_io_out_w_bits_strb; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_out_w_bits_last; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_out_b_ready; // @[Crossbar.scala 20:23]
  wire  AXI4Arbiter_io_out_b_valid; // @[Crossbar.scala 20:23]
  AXILite2AXI4 AXILite2AXI4 ( // @[Crossbar.scala 18:22]
    .io_in_ar_ready(AXILite2AXI4_io_in_ar_ready),
    .io_in_ar_valid(AXILite2AXI4_io_in_ar_valid),
    .io_in_ar_bits_addr(AXILite2AXI4_io_in_ar_bits_addr),
    .io_in_r_valid(AXILite2AXI4_io_in_r_valid),
    .io_in_r_bits_data(AXILite2AXI4_io_in_r_bits_data),
    .io_in_aw_ready(AXILite2AXI4_io_in_aw_ready),
    .io_in_aw_valid(AXILite2AXI4_io_in_aw_valid),
    .io_in_aw_bits_addr(AXILite2AXI4_io_in_aw_bits_addr),
    .io_in_w_ready(AXILite2AXI4_io_in_w_ready),
    .io_in_w_valid(AXILite2AXI4_io_in_w_valid),
    .io_in_w_bits_data(AXILite2AXI4_io_in_w_bits_data),
    .io_in_w_bits_strb(AXILite2AXI4_io_in_w_bits_strb),
    .io_in_b_ready(AXILite2AXI4_io_in_b_ready),
    .io_in_b_valid(AXILite2AXI4_io_in_b_valid),
    .io_id(AXILite2AXI4_io_id),
    .io_mem_ar_ready(AXILite2AXI4_io_mem_ar_ready),
    .io_mem_ar_valid(AXILite2AXI4_io_mem_ar_valid),
    .io_mem_ar_bits_addr(AXILite2AXI4_io_mem_ar_bits_addr),
    .io_mem_ar_bits_id(AXILite2AXI4_io_mem_ar_bits_id),
    .io_mem_r_valid(AXILite2AXI4_io_mem_r_valid),
    .io_mem_r_bits_data(AXILite2AXI4_io_mem_r_bits_data),
    .io_mem_aw_ready(AXILite2AXI4_io_mem_aw_ready),
    .io_mem_aw_valid(AXILite2AXI4_io_mem_aw_valid),
    .io_mem_aw_bits_addr(AXILite2AXI4_io_mem_aw_bits_addr),
    .io_mem_w_ready(AXILite2AXI4_io_mem_w_ready),
    .io_mem_w_valid(AXILite2AXI4_io_mem_w_valid),
    .io_mem_w_bits_data(AXILite2AXI4_io_mem_w_bits_data),
    .io_mem_w_bits_strb(AXILite2AXI4_io_mem_w_bits_strb),
    .io_mem_w_bits_last(AXILite2AXI4_io_mem_w_bits_last),
    .io_mem_b_ready(AXILite2AXI4_io_mem_b_ready),
    .io_mem_b_valid(AXILite2AXI4_io_mem_b_valid)
  );
  AXILite2AXI4 AXILite2AXI4_1 ( // @[Crossbar.scala 19:22]
    .io_in_ar_ready(AXILite2AXI4_1_io_in_ar_ready),
    .io_in_ar_valid(AXILite2AXI4_1_io_in_ar_valid),
    .io_in_ar_bits_addr(AXILite2AXI4_1_io_in_ar_bits_addr),
    .io_in_r_valid(AXILite2AXI4_1_io_in_r_valid),
    .io_in_r_bits_data(AXILite2AXI4_1_io_in_r_bits_data),
    .io_in_aw_ready(AXILite2AXI4_1_io_in_aw_ready),
    .io_in_aw_valid(AXILite2AXI4_1_io_in_aw_valid),
    .io_in_aw_bits_addr(AXILite2AXI4_1_io_in_aw_bits_addr),
    .io_in_w_ready(AXILite2AXI4_1_io_in_w_ready),
    .io_in_w_valid(AXILite2AXI4_1_io_in_w_valid),
    .io_in_w_bits_data(AXILite2AXI4_1_io_in_w_bits_data),
    .io_in_w_bits_strb(AXILite2AXI4_1_io_in_w_bits_strb),
    .io_in_b_ready(AXILite2AXI4_1_io_in_b_ready),
    .io_in_b_valid(AXILite2AXI4_1_io_in_b_valid),
    .io_id(AXILite2AXI4_1_io_id),
    .io_mem_ar_ready(AXILite2AXI4_1_io_mem_ar_ready),
    .io_mem_ar_valid(AXILite2AXI4_1_io_mem_ar_valid),
    .io_mem_ar_bits_addr(AXILite2AXI4_1_io_mem_ar_bits_addr),
    .io_mem_ar_bits_id(AXILite2AXI4_1_io_mem_ar_bits_id),
    .io_mem_r_valid(AXILite2AXI4_1_io_mem_r_valid),
    .io_mem_r_bits_data(AXILite2AXI4_1_io_mem_r_bits_data),
    .io_mem_aw_ready(AXILite2AXI4_1_io_mem_aw_ready),
    .io_mem_aw_valid(AXILite2AXI4_1_io_mem_aw_valid),
    .io_mem_aw_bits_addr(AXILite2AXI4_1_io_mem_aw_bits_addr),
    .io_mem_w_ready(AXILite2AXI4_1_io_mem_w_ready),
    .io_mem_w_valid(AXILite2AXI4_1_io_mem_w_valid),
    .io_mem_w_bits_data(AXILite2AXI4_1_io_mem_w_bits_data),
    .io_mem_w_bits_strb(AXILite2AXI4_1_io_mem_w_bits_strb),
    .io_mem_w_bits_last(AXILite2AXI4_1_io_mem_w_bits_last),
    .io_mem_b_ready(AXILite2AXI4_1_io_mem_b_ready),
    .io_mem_b_valid(AXILite2AXI4_1_io_mem_b_valid)
  );
  AXI4Arbiter AXI4Arbiter ( // @[Crossbar.scala 20:23]
    .io_ifu_ar_ready(AXI4Arbiter_io_ifu_ar_ready),
    .io_ifu_ar_valid(AXI4Arbiter_io_ifu_ar_valid),
    .io_ifu_ar_bits_addr(AXI4Arbiter_io_ifu_ar_bits_addr),
    .io_ifu_ar_bits_id(AXI4Arbiter_io_ifu_ar_bits_id),
    .io_ifu_r_valid(AXI4Arbiter_io_ifu_r_valid),
    .io_ifu_r_bits_data(AXI4Arbiter_io_ifu_r_bits_data),
    .io_lsu_ar_ready(AXI4Arbiter_io_lsu_ar_ready),
    .io_lsu_ar_valid(AXI4Arbiter_io_lsu_ar_valid),
    .io_lsu_ar_bits_addr(AXI4Arbiter_io_lsu_ar_bits_addr),
    .io_lsu_ar_bits_id(AXI4Arbiter_io_lsu_ar_bits_id),
    .io_lsu_r_valid(AXI4Arbiter_io_lsu_r_valid),
    .io_lsu_r_bits_data(AXI4Arbiter_io_lsu_r_bits_data),
    .io_lsu_aw_ready(AXI4Arbiter_io_lsu_aw_ready),
    .io_lsu_aw_valid(AXI4Arbiter_io_lsu_aw_valid),
    .io_lsu_aw_bits_addr(AXI4Arbiter_io_lsu_aw_bits_addr),
    .io_lsu_w_ready(AXI4Arbiter_io_lsu_w_ready),
    .io_lsu_w_valid(AXI4Arbiter_io_lsu_w_valid),
    .io_lsu_w_bits_data(AXI4Arbiter_io_lsu_w_bits_data),
    .io_lsu_w_bits_strb(AXI4Arbiter_io_lsu_w_bits_strb),
    .io_lsu_w_bits_last(AXI4Arbiter_io_lsu_w_bits_last),
    .io_lsu_b_ready(AXI4Arbiter_io_lsu_b_ready),
    .io_lsu_b_valid(AXI4Arbiter_io_lsu_b_valid),
    .io_out_ar_ready(AXI4Arbiter_io_out_ar_ready),
    .io_out_ar_valid(AXI4Arbiter_io_out_ar_valid),
    .io_out_ar_bits_addr(AXI4Arbiter_io_out_ar_bits_addr),
    .io_out_ar_bits_size(AXI4Arbiter_io_out_ar_bits_size),
    .io_out_ar_bits_id(AXI4Arbiter_io_out_ar_bits_id),
    .io_out_r_ready(AXI4Arbiter_io_out_r_ready),
    .io_out_r_valid(AXI4Arbiter_io_out_r_valid),
    .io_out_r_bits_data(AXI4Arbiter_io_out_r_bits_data),
    .io_out_r_bits_id(AXI4Arbiter_io_out_r_bits_id),
    .io_out_aw_ready(AXI4Arbiter_io_out_aw_ready),
    .io_out_aw_valid(AXI4Arbiter_io_out_aw_valid),
    .io_out_aw_bits_addr(AXI4Arbiter_io_out_aw_bits_addr),
    .io_out_w_ready(AXI4Arbiter_io_out_w_ready),
    .io_out_w_valid(AXI4Arbiter_io_out_w_valid),
    .io_out_w_bits_data(AXI4Arbiter_io_out_w_bits_data),
    .io_out_w_bits_strb(AXI4Arbiter_io_out_w_bits_strb),
    .io_out_w_bits_last(AXI4Arbiter_io_out_w_bits_last),
    .io_out_b_ready(AXI4Arbiter_io_out_b_ready),
    .io_out_b_valid(AXI4Arbiter_io_out_b_valid)
  );
  assign io_in1_r_valid = AXILite2AXI4_1_io_in_r_valid; // @[Crossbar.scala 22:18 37:15]
  assign io_in1_r_bits_data = AXILite2AXI4_1_io_in_r_bits_data; // @[Crossbar.scala 22:18 37:15]
  assign io_in2_ar_ready = AXILite2AXI4_io_in_ar_ready; // @[Crossbar.scala 23:18 39:15]
  assign io_in2_r_valid = AXILite2AXI4_io_in_r_valid; // @[Crossbar.scala 23:18 39:15]
  assign io_in2_r_bits_data = AXILite2AXI4_io_in_r_bits_data; // @[Crossbar.scala 23:18 39:15]
  assign io_in2_aw_ready = AXILite2AXI4_io_in_aw_ready; // @[Crossbar.scala 23:18 39:15]
  assign io_in2_w_ready = AXILite2AXI4_io_in_w_ready; // @[Crossbar.scala 23:18 39:15]
  assign io_in2_b_valid = AXILite2AXI4_io_in_b_valid; // @[Crossbar.scala 23:18 39:15]
  assign io_out_ar_valid = AXI4Arbiter_io_out_ar_valid; // @[Crossbar.scala 35:11]
  assign io_out_ar_bits_addr = AXI4Arbiter_io_out_ar_bits_addr; // @[Crossbar.scala 35:11]
  assign io_out_ar_bits_size = AXI4Arbiter_io_out_ar_bits_size; // @[Crossbar.scala 35:11]
  assign io_out_ar_bits_id = AXI4Arbiter_io_out_ar_bits_id; // @[Crossbar.scala 35:11]
  assign io_out_r_ready = AXI4Arbiter_io_out_r_ready; // @[Crossbar.scala 35:11]
  assign io_out_aw_valid = AXI4Arbiter_io_out_aw_valid; // @[Crossbar.scala 35:11]
  assign io_out_aw_bits_addr = AXI4Arbiter_io_out_aw_bits_addr; // @[Crossbar.scala 35:11]
  assign io_out_w_valid = AXI4Arbiter_io_out_w_valid; // @[Crossbar.scala 35:11]
  assign io_out_w_bits_data = AXI4Arbiter_io_out_w_bits_data; // @[Crossbar.scala 35:11]
  assign io_out_w_bits_strb = AXI4Arbiter_io_out_w_bits_strb; // @[Crossbar.scala 35:11]
  assign io_out_w_bits_last = AXI4Arbiter_io_out_w_bits_last; // @[Crossbar.scala 35:11]
  assign io_out_b_ready = AXI4Arbiter_io_out_b_ready; // @[Crossbar.scala 35:11]
  assign AXILite2AXI4_io_in_ar_valid = io_in2_ar_valid; // @[Crossbar.scala 23:18 32:11]
  assign AXILite2AXI4_io_in_ar_bits_addr = io_in2_ar_bits_addr; // @[Crossbar.scala 23:18 32:11]
  assign AXILite2AXI4_io_in_aw_valid = io_in2_aw_valid; // @[Crossbar.scala 23:18 32:11]
  assign AXILite2AXI4_io_in_aw_bits_addr = io_in2_aw_bits_addr; // @[Crossbar.scala 23:18 32:11]
  assign AXILite2AXI4_io_in_w_valid = io_in2_w_valid; // @[Crossbar.scala 23:18 32:11]
  assign AXILite2AXI4_io_in_w_bits_data = io_in2_w_bits_data; // @[Crossbar.scala 23:18 32:11]
  assign AXILite2AXI4_io_in_w_bits_strb = io_in2_w_bits_strb; // @[Crossbar.scala 23:18 32:11]
  assign AXILite2AXI4_io_in_b_ready = 1'h1; // @[Crossbar.scala 23:18 32:11]
  assign AXILite2AXI4_io_id = 1'h1; // @[Crossbar.scala 40:15]
  assign AXILite2AXI4_io_mem_ar_ready = AXI4Arbiter_io_lsu_ar_ready; // @[Crossbar.scala 42:17]
  assign AXILite2AXI4_io_mem_r_valid = AXI4Arbiter_io_lsu_r_valid; // @[Crossbar.scala 42:17]
  assign AXILite2AXI4_io_mem_r_bits_data = AXI4Arbiter_io_lsu_r_bits_data; // @[Crossbar.scala 42:17]
  assign AXILite2AXI4_io_mem_aw_ready = AXI4Arbiter_io_lsu_aw_ready; // @[Crossbar.scala 42:17]
  assign AXILite2AXI4_io_mem_w_ready = AXI4Arbiter_io_lsu_w_ready; // @[Crossbar.scala 42:17]
  assign AXILite2AXI4_io_mem_b_valid = AXI4Arbiter_io_lsu_b_valid; // @[Crossbar.scala 42:17]
  assign AXILite2AXI4_1_io_in_ar_valid = io_in1_ar_valid; // @[Crossbar.scala 22:18 27:11]
  assign AXILite2AXI4_1_io_in_ar_bits_addr = io_in1_ar_bits_addr; // @[Crossbar.scala 22:18 27:11]
  assign AXILite2AXI4_1_io_in_aw_valid = 1'h0; // @[Crossbar.scala 22:18 27:11]
  assign AXILite2AXI4_1_io_in_aw_bits_addr = 32'h0; // @[Crossbar.scala 22:18 27:11]
  assign AXILite2AXI4_1_io_in_w_valid = 1'h0; // @[Crossbar.scala 22:18 27:11]
  assign AXILite2AXI4_1_io_in_w_bits_data = 64'h0; // @[Crossbar.scala 22:18 27:11]
  assign AXILite2AXI4_1_io_in_w_bits_strb = 8'h0; // @[Crossbar.scala 22:18 27:11]
  assign AXILite2AXI4_1_io_in_b_ready = 1'h0; // @[Crossbar.scala 22:18 27:11]
  assign AXILite2AXI4_1_io_id = 1'h0; // @[Crossbar.scala 38:15]
  assign AXILite2AXI4_1_io_mem_ar_ready = AXI4Arbiter_io_ifu_ar_ready; // @[Crossbar.scala 41:17]
  assign AXILite2AXI4_1_io_mem_r_valid = AXI4Arbiter_io_ifu_r_valid; // @[Crossbar.scala 41:17]
  assign AXILite2AXI4_1_io_mem_r_bits_data = AXI4Arbiter_io_ifu_r_bits_data; // @[Crossbar.scala 41:17]
  assign AXILite2AXI4_1_io_mem_aw_ready = 1'h0; // @[Crossbar.scala 41:17]
  assign AXILite2AXI4_1_io_mem_w_ready = 1'h0; // @[Crossbar.scala 41:17]
  assign AXILite2AXI4_1_io_mem_b_valid = 1'h0; // @[Crossbar.scala 41:17]
  assign AXI4Arbiter_io_ifu_ar_valid = AXILite2AXI4_1_io_mem_ar_valid; // @[Crossbar.scala 41:17]
  assign AXI4Arbiter_io_ifu_ar_bits_addr = AXILite2AXI4_1_io_mem_ar_bits_addr; // @[Crossbar.scala 41:17]
  assign AXI4Arbiter_io_ifu_ar_bits_id = AXILite2AXI4_1_io_mem_ar_bits_id; // @[Crossbar.scala 41:17]
  assign AXI4Arbiter_io_lsu_ar_valid = AXILite2AXI4_io_mem_ar_valid; // @[Crossbar.scala 42:17]
  assign AXI4Arbiter_io_lsu_ar_bits_addr = AXILite2AXI4_io_mem_ar_bits_addr; // @[Crossbar.scala 42:17]
  assign AXI4Arbiter_io_lsu_ar_bits_id = AXILite2AXI4_io_mem_ar_bits_id; // @[Crossbar.scala 42:17]
  assign AXI4Arbiter_io_lsu_aw_valid = AXILite2AXI4_io_mem_aw_valid; // @[Crossbar.scala 42:17]
  assign AXI4Arbiter_io_lsu_aw_bits_addr = AXILite2AXI4_io_mem_aw_bits_addr; // @[Crossbar.scala 42:17]
  assign AXI4Arbiter_io_lsu_w_valid = AXILite2AXI4_io_mem_w_valid; // @[Crossbar.scala 42:17]
  assign AXI4Arbiter_io_lsu_w_bits_data = AXILite2AXI4_io_mem_w_bits_data; // @[Crossbar.scala 42:17]
  assign AXI4Arbiter_io_lsu_w_bits_strb = AXILite2AXI4_io_mem_w_bits_strb; // @[Crossbar.scala 42:17]
  assign AXI4Arbiter_io_lsu_w_bits_last = AXILite2AXI4_io_mem_w_bits_last; // @[Crossbar.scala 42:17]
  assign AXI4Arbiter_io_lsu_b_ready = AXILite2AXI4_io_mem_b_ready; // @[Crossbar.scala 42:17]
  assign AXI4Arbiter_io_out_ar_ready = io_out_ar_ready; // @[Crossbar.scala 35:11]
  assign AXI4Arbiter_io_out_r_valid = io_out_r_valid; // @[Crossbar.scala 35:11]
  assign AXI4Arbiter_io_out_r_bits_data = io_out_r_bits_data; // @[Crossbar.scala 35:11]
  assign AXI4Arbiter_io_out_r_bits_id = io_out_r_bits_id; // @[Crossbar.scala 35:11]
  assign AXI4Arbiter_io_out_aw_ready = io_out_aw_ready; // @[Crossbar.scala 35:11]
  assign AXI4Arbiter_io_out_w_ready = io_out_w_ready; // @[Crossbar.scala 35:11]
  assign AXI4Arbiter_io_out_b_valid = io_out_b_valid; // @[Crossbar.scala 35:11]
endmodule
module top(
  input         clock,
  input         reset,
  output [63:0] io_pc,
  output        io_valid,
  output [63:0] io_hitrate_i,
  output [63:0] io_hitrate_d
);
  wire  sram_clock; // @[top.scala 12:20]
  wire  sram_reset; // @[top.scala 12:20]
  wire  sram_io_ar_ready; // @[top.scala 12:20]
  wire  sram_io_ar_valid; // @[top.scala 12:20]
  wire [31:0] sram_io_ar_bits_addr; // @[top.scala 12:20]
  wire [2:0] sram_io_ar_bits_size; // @[top.scala 12:20]
  wire [3:0] sram_io_ar_bits_id; // @[top.scala 12:20]
  wire  sram_io_r_ready; // @[top.scala 12:20]
  wire  sram_io_r_valid; // @[top.scala 12:20]
  wire [63:0] sram_io_r_bits_data; // @[top.scala 12:20]
  wire [3:0] sram_io_r_bits_id; // @[top.scala 12:20]
  wire  sram_io_aw_ready; // @[top.scala 12:20]
  wire  sram_io_aw_valid; // @[top.scala 12:20]
  wire [31:0] sram_io_aw_bits_addr; // @[top.scala 12:20]
  wire  sram_io_w_ready; // @[top.scala 12:20]
  wire  sram_io_w_valid; // @[top.scala 12:20]
  wire [63:0] sram_io_w_bits_data; // @[top.scala 12:20]
  wire [7:0] sram_io_w_bits_strb; // @[top.scala 12:20]
  wire  sram_io_w_bits_last; // @[top.scala 12:20]
  wire  sram_io_b_ready; // @[top.scala 12:20]
  wire  sram_io_b_valid; // @[top.scala 12:20]
  wire  ifu_clock; // @[top.scala 13:19]
  wire  ifu_reset; // @[top.scala 13:19]
  wire [63:0] ifu_io_pc_dnpc; // @[top.scala 13:19]
  wire  ifu_io_clearJump; // @[top.scala 13:19]
  wire  ifu_io_lm_ar_valid; // @[top.scala 13:19]
  wire [31:0] ifu_io_lm_ar_bits_addr; // @[top.scala 13:19]
  wire  ifu_io_lm_r_valid; // @[top.scala 13:19]
  wire [63:0] ifu_io_lm_r_bits_data; // @[top.scala 13:19]
  wire  ifu_io_out_ready; // @[top.scala 13:19]
  wire  ifu_io_out_valid; // @[top.scala 13:19]
  wire [31:0] ifu_io_out_bits_pc; // @[top.scala 13:19]
  wire [31:0] ifu_io_out_bits_inst; // @[top.scala 13:19]
  wire  ifu_io_out_bits_isJump; // @[top.scala 13:19]
  wire  idu_clock; // @[top.scala 14:19]
  wire  idu_reset; // @[top.scala 14:19]
  wire  idu_io_in_ready; // @[top.scala 14:19]
  wire  idu_io_in_valid; // @[top.scala 14:19]
  wire [31:0] idu_io_in_bits_pc; // @[top.scala 14:19]
  wire [31:0] idu_io_in_bits_inst; // @[top.scala 14:19]
  wire  idu_io_in_bits_isJump; // @[top.scala 14:19]
  wire  idu_io_out_ready; // @[top.scala 14:19]
  wire  idu_io_out_valid; // @[top.scala 14:19]
  wire [31:0] idu_io_out_bits_pc; // @[top.scala 14:19]
  wire [31:0] idu_io_out_bits_inst; // @[top.scala 14:19]
  wire [4:0] idu_io_out_bits_rs1; // @[top.scala 14:19]
  wire [4:0] idu_io_out_bits_rs2; // @[top.scala 14:19]
  wire [4:0] idu_io_out_bits_rd; // @[top.scala 14:19]
  wire [63:0] idu_io_out_bits_imm; // @[top.scala 14:19]
  wire [79:0] idu_io_out_bits_op; // @[top.scala 14:19]
  wire [5:0] idu_io_out_bits_typ; // @[top.scala 14:19]
  wire  idu_io_out_bits_isJump; // @[top.scala 14:19]
  wire [4:0] idu_io_out_bits_clearidx; // @[top.scala 14:19]
  wire [4:0] idu_io_sb_lookidx1; // @[top.scala 14:19]
  wire [4:0] idu_io_sb_lookidx2; // @[top.scala 14:19]
  wire [4:0] idu_io_sb_setidx; // @[top.scala 14:19]
  wire  idu_io_sb_isBusy; // @[top.scala 14:19]
  wire  exu_clock; // @[top.scala 15:19]
  wire  exu_reset; // @[top.scala 15:19]
  wire  exu_io_in_ready; // @[top.scala 15:19]
  wire  exu_io_in_valid; // @[top.scala 15:19]
  wire [31:0] exu_io_in_bits_pc; // @[top.scala 15:19]
  wire [31:0] exu_io_in_bits_inst; // @[top.scala 15:19]
  wire [4:0] exu_io_in_bits_rs1; // @[top.scala 15:19]
  wire [4:0] exu_io_in_bits_rs2; // @[top.scala 15:19]
  wire [4:0] exu_io_in_bits_rd; // @[top.scala 15:19]
  wire [63:0] exu_io_in_bits_imm; // @[top.scala 15:19]
  wire [79:0] exu_io_in_bits_op; // @[top.scala 15:19]
  wire [5:0] exu_io_in_bits_typ; // @[top.scala 15:19]
  wire  exu_io_in_bits_isJump; // @[top.scala 15:19]
  wire [4:0] exu_io_in_bits_clearidx; // @[top.scala 15:19]
  wire  exu_io_out_valid; // @[top.scala 15:19]
  wire [31:0] exu_io_out_bits_pc; // @[top.scala 15:19]
  wire [63:0] exu_io_out_bits_pc_dnpc; // @[top.scala 15:19]
  wire [4:0] exu_io_out_bits_gpr_idx_w; // @[top.scala 15:19]
  wire  exu_io_out_bits_gpr_en_w; // @[top.scala 15:19]
  wire [63:0] exu_io_out_bits_gpr_val_w; // @[top.scala 15:19]
  wire  exu_io_out_bits_csr_en_w; // @[top.scala 15:19]
  wire [11:0] exu_io_out_bits_csr_idx_w; // @[top.scala 15:19]
  wire [63:0] exu_io_out_bits_csr_val_w; // @[top.scala 15:19]
  wire [63:0] exu_io_out_bits_csr_no; // @[top.scala 15:19]
  wire [63:0] exu_io_out_bits_csr_epc; // @[top.scala 15:19]
  wire  exu_io_out_bits_isJump; // @[top.scala 15:19]
  wire [4:0] exu_io_out_bits_clearidx; // @[top.scala 15:19]
  wire [4:0] exu_io_gpr_idx_r1; // @[top.scala 15:19]
  wire [4:0] exu_io_gpr_idx_r2; // @[top.scala 15:19]
  wire  exu_io_gpr_en_r1; // @[top.scala 15:19]
  wire  exu_io_gpr_en_r2; // @[top.scala 15:19]
  wire [63:0] exu_io_gpr_val_r1; // @[top.scala 15:19]
  wire [63:0] exu_io_gpr_val_r2; // @[top.scala 15:19]
  wire [11:0] exu_io_csr_idx_r; // @[top.scala 15:19]
  wire  exu_io_csr_en_r; // @[top.scala 15:19]
  wire [63:0] exu_io_csr_val_r; // @[top.scala 15:19]
  wire  exu_io_lm_ar_ready; // @[top.scala 15:19]
  wire  exu_io_lm_ar_valid; // @[top.scala 15:19]
  wire [31:0] exu_io_lm_ar_bits_addr; // @[top.scala 15:19]
  wire  exu_io_lm_r_valid; // @[top.scala 15:19]
  wire [63:0] exu_io_lm_r_bits_data; // @[top.scala 15:19]
  wire  exu_io_lm_aw_ready; // @[top.scala 15:19]
  wire  exu_io_lm_aw_valid; // @[top.scala 15:19]
  wire [31:0] exu_io_lm_aw_bits_addr; // @[top.scala 15:19]
  wire  exu_io_lm_w_ready; // @[top.scala 15:19]
  wire  exu_io_lm_w_valid; // @[top.scala 15:19]
  wire [63:0] exu_io_lm_w_bits_data; // @[top.scala 15:19]
  wire [7:0] exu_io_lm_w_bits_strb; // @[top.scala 15:19]
  wire  exu_io_lm_b_valid; // @[top.scala 15:19]
  wire  wbu_clock; // @[top.scala 16:19]
  wire  wbu_reset; // @[top.scala 16:19]
  wire  wbu_io_in_ready; // @[top.scala 16:19]
  wire  wbu_io_in_valid; // @[top.scala 16:19]
  wire [31:0] wbu_io_in_bits_pc; // @[top.scala 16:19]
  wire [63:0] wbu_io_in_bits_pc_dnpc; // @[top.scala 16:19]
  wire [4:0] wbu_io_in_bits_gpr_idx_w; // @[top.scala 16:19]
  wire  wbu_io_in_bits_gpr_en_w; // @[top.scala 16:19]
  wire [63:0] wbu_io_in_bits_gpr_val_w; // @[top.scala 16:19]
  wire  wbu_io_in_bits_csr_en_w; // @[top.scala 16:19]
  wire [11:0] wbu_io_in_bits_csr_idx_w; // @[top.scala 16:19]
  wire [63:0] wbu_io_in_bits_csr_val_w; // @[top.scala 16:19]
  wire [63:0] wbu_io_in_bits_csr_no; // @[top.scala 16:19]
  wire [63:0] wbu_io_in_bits_csr_epc; // @[top.scala 16:19]
  wire  wbu_io_in_bits_isJump; // @[top.scala 16:19]
  wire [4:0] wbu_io_in_bits_clearidx; // @[top.scala 16:19]
  wire [4:0] wbu_io_gpr_idx_w; // @[top.scala 16:19]
  wire  wbu_io_gpr_en_w; // @[top.scala 16:19]
  wire [63:0] wbu_io_gpr_val_w; // @[top.scala 16:19]
  wire  wbu_io_csr_en_w; // @[top.scala 16:19]
  wire [11:0] wbu_io_csr_idx_w; // @[top.scala 16:19]
  wire [63:0] wbu_io_csr_val_w; // @[top.scala 16:19]
  wire [63:0] wbu_io_csr_no; // @[top.scala 16:19]
  wire [63:0] wbu_io_csr_epc; // @[top.scala 16:19]
  wire [63:0] wbu_io_pc_dnpc; // @[top.scala 16:19]
  wire  wbu_io_valid; // @[top.scala 16:19]
  wire  wbu_io_isJump; // @[top.scala 16:19]
  wire [4:0] wbu_io_sb_clearidx; // @[top.scala 16:19]
  wire  gpr_clock; // @[top.scala 17:19]
  wire  gpr_reset; // @[top.scala 17:19]
  wire [4:0] gpr_io_r_idx_r1; // @[top.scala 17:19]
  wire [4:0] gpr_io_r_idx_r2; // @[top.scala 17:19]
  wire  gpr_io_r_en_r1; // @[top.scala 17:19]
  wire  gpr_io_r_en_r2; // @[top.scala 17:19]
  wire [63:0] gpr_io_r_val_r1; // @[top.scala 17:19]
  wire [63:0] gpr_io_r_val_r2; // @[top.scala 17:19]
  wire [4:0] gpr_io_w_idx_w; // @[top.scala 17:19]
  wire  gpr_io_w_en_w; // @[top.scala 17:19]
  wire [63:0] gpr_io_w_val_w; // @[top.scala 17:19]
  wire  csr_clock; // @[top.scala 18:19]
  wire  csr_reset; // @[top.scala 18:19]
  wire [11:0] csr_io_r_idx_r; // @[top.scala 18:19]
  wire  csr_io_r_en_r; // @[top.scala 18:19]
  wire [63:0] csr_io_r_val_r; // @[top.scala 18:19]
  wire  csr_io_w_en_w; // @[top.scala 18:19]
  wire [11:0] csr_io_w_idx_w; // @[top.scala 18:19]
  wire [63:0] csr_io_w_val_w; // @[top.scala 18:19]
  wire [63:0] csr_io_w_no; // @[top.scala 18:19]
  wire [63:0] csr_io_w_epc; // @[top.scala 18:19]
  wire  scoreboard_clock; // @[top.scala 19:26]
  wire  scoreboard_reset; // @[top.scala 19:26]
  wire [4:0] scoreboard_io_ID_lookidx1; // @[top.scala 19:26]
  wire [4:0] scoreboard_io_ID_lookidx2; // @[top.scala 19:26]
  wire [4:0] scoreboard_io_ID_setidx; // @[top.scala 19:26]
  wire  scoreboard_io_ID_isBusy; // @[top.scala 19:26]
  wire [4:0] scoreboard_io_WB_clearidx; // @[top.scala 19:26]
  wire  crossbar_io_in1_ar_valid; // @[top.scala 36:24]
  wire [31:0] crossbar_io_in1_ar_bits_addr; // @[top.scala 36:24]
  wire  crossbar_io_in1_r_valid; // @[top.scala 36:24]
  wire [63:0] crossbar_io_in1_r_bits_data; // @[top.scala 36:24]
  wire  crossbar_io_in2_ar_ready; // @[top.scala 36:24]
  wire  crossbar_io_in2_ar_valid; // @[top.scala 36:24]
  wire [31:0] crossbar_io_in2_ar_bits_addr; // @[top.scala 36:24]
  wire  crossbar_io_in2_r_valid; // @[top.scala 36:24]
  wire [63:0] crossbar_io_in2_r_bits_data; // @[top.scala 36:24]
  wire  crossbar_io_in2_aw_ready; // @[top.scala 36:24]
  wire  crossbar_io_in2_aw_valid; // @[top.scala 36:24]
  wire [31:0] crossbar_io_in2_aw_bits_addr; // @[top.scala 36:24]
  wire  crossbar_io_in2_w_ready; // @[top.scala 36:24]
  wire  crossbar_io_in2_w_valid; // @[top.scala 36:24]
  wire [63:0] crossbar_io_in2_w_bits_data; // @[top.scala 36:24]
  wire [7:0] crossbar_io_in2_w_bits_strb; // @[top.scala 36:24]
  wire  crossbar_io_in2_b_valid; // @[top.scala 36:24]
  wire  crossbar_io_out_ar_ready; // @[top.scala 36:24]
  wire  crossbar_io_out_ar_valid; // @[top.scala 36:24]
  wire [31:0] crossbar_io_out_ar_bits_addr; // @[top.scala 36:24]
  wire [2:0] crossbar_io_out_ar_bits_size; // @[top.scala 36:24]
  wire [3:0] crossbar_io_out_ar_bits_id; // @[top.scala 36:24]
  wire  crossbar_io_out_r_ready; // @[top.scala 36:24]
  wire  crossbar_io_out_r_valid; // @[top.scala 36:24]
  wire [63:0] crossbar_io_out_r_bits_data; // @[top.scala 36:24]
  wire [3:0] crossbar_io_out_r_bits_id; // @[top.scala 36:24]
  wire  crossbar_io_out_aw_ready; // @[top.scala 36:24]
  wire  crossbar_io_out_aw_valid; // @[top.scala 36:24]
  wire [31:0] crossbar_io_out_aw_bits_addr; // @[top.scala 36:24]
  wire  crossbar_io_out_w_ready; // @[top.scala 36:24]
  wire  crossbar_io_out_w_valid; // @[top.scala 36:24]
  wire [63:0] crossbar_io_out_w_bits_data; // @[top.scala 36:24]
  wire [7:0] crossbar_io_out_w_bits_strb; // @[top.scala 36:24]
  wire  crossbar_io_out_w_bits_last; // @[top.scala 36:24]
  wire  crossbar_io_out_b_ready; // @[top.scala 36:24]
  wire  crossbar_io_out_b_valid; // @[top.scala 36:24]
  AXI4SRAM sram ( // @[top.scala 12:20]
    .clock(sram_clock),
    .reset(sram_reset),
    .io_ar_ready(sram_io_ar_ready),
    .io_ar_valid(sram_io_ar_valid),
    .io_ar_bits_addr(sram_io_ar_bits_addr),
    .io_ar_bits_size(sram_io_ar_bits_size),
    .io_ar_bits_id(sram_io_ar_bits_id),
    .io_r_ready(sram_io_r_ready),
    .io_r_valid(sram_io_r_valid),
    .io_r_bits_data(sram_io_r_bits_data),
    .io_r_bits_id(sram_io_r_bits_id),
    .io_aw_ready(sram_io_aw_ready),
    .io_aw_valid(sram_io_aw_valid),
    .io_aw_bits_addr(sram_io_aw_bits_addr),
    .io_w_ready(sram_io_w_ready),
    .io_w_valid(sram_io_w_valid),
    .io_w_bits_data(sram_io_w_bits_data),
    .io_w_bits_strb(sram_io_w_bits_strb),
    .io_w_bits_last(sram_io_w_bits_last),
    .io_b_ready(sram_io_b_ready),
    .io_b_valid(sram_io_b_valid)
  );
  IFU ifu ( // @[top.scala 13:19]
    .clock(ifu_clock),
    .reset(ifu_reset),
    .io_pc_dnpc(ifu_io_pc_dnpc),
    .io_clearJump(ifu_io_clearJump),
    .io_lm_ar_valid(ifu_io_lm_ar_valid),
    .io_lm_ar_bits_addr(ifu_io_lm_ar_bits_addr),
    .io_lm_r_valid(ifu_io_lm_r_valid),
    .io_lm_r_bits_data(ifu_io_lm_r_bits_data),
    .io_out_ready(ifu_io_out_ready),
    .io_out_valid(ifu_io_out_valid),
    .io_out_bits_pc(ifu_io_out_bits_pc),
    .io_out_bits_inst(ifu_io_out_bits_inst),
    .io_out_bits_isJump(ifu_io_out_bits_isJump)
  );
  IDU idu ( // @[top.scala 14:19]
    .clock(idu_clock),
    .reset(idu_reset),
    .io_in_ready(idu_io_in_ready),
    .io_in_valid(idu_io_in_valid),
    .io_in_bits_pc(idu_io_in_bits_pc),
    .io_in_bits_inst(idu_io_in_bits_inst),
    .io_in_bits_isJump(idu_io_in_bits_isJump),
    .io_out_ready(idu_io_out_ready),
    .io_out_valid(idu_io_out_valid),
    .io_out_bits_pc(idu_io_out_bits_pc),
    .io_out_bits_inst(idu_io_out_bits_inst),
    .io_out_bits_rs1(idu_io_out_bits_rs1),
    .io_out_bits_rs2(idu_io_out_bits_rs2),
    .io_out_bits_rd(idu_io_out_bits_rd),
    .io_out_bits_imm(idu_io_out_bits_imm),
    .io_out_bits_op(idu_io_out_bits_op),
    .io_out_bits_typ(idu_io_out_bits_typ),
    .io_out_bits_isJump(idu_io_out_bits_isJump),
    .io_out_bits_clearidx(idu_io_out_bits_clearidx),
    .io_sb_lookidx1(idu_io_sb_lookidx1),
    .io_sb_lookidx2(idu_io_sb_lookidx2),
    .io_sb_setidx(idu_io_sb_setidx),
    .io_sb_isBusy(idu_io_sb_isBusy)
  );
  EXU exu ( // @[top.scala 15:19]
    .clock(exu_clock),
    .reset(exu_reset),
    .io_in_ready(exu_io_in_ready),
    .io_in_valid(exu_io_in_valid),
    .io_in_bits_pc(exu_io_in_bits_pc),
    .io_in_bits_inst(exu_io_in_bits_inst),
    .io_in_bits_rs1(exu_io_in_bits_rs1),
    .io_in_bits_rs2(exu_io_in_bits_rs2),
    .io_in_bits_rd(exu_io_in_bits_rd),
    .io_in_bits_imm(exu_io_in_bits_imm),
    .io_in_bits_op(exu_io_in_bits_op),
    .io_in_bits_typ(exu_io_in_bits_typ),
    .io_in_bits_isJump(exu_io_in_bits_isJump),
    .io_in_bits_clearidx(exu_io_in_bits_clearidx),
    .io_out_valid(exu_io_out_valid),
    .io_out_bits_pc(exu_io_out_bits_pc),
    .io_out_bits_pc_dnpc(exu_io_out_bits_pc_dnpc),
    .io_out_bits_gpr_idx_w(exu_io_out_bits_gpr_idx_w),
    .io_out_bits_gpr_en_w(exu_io_out_bits_gpr_en_w),
    .io_out_bits_gpr_val_w(exu_io_out_bits_gpr_val_w),
    .io_out_bits_csr_en_w(exu_io_out_bits_csr_en_w),
    .io_out_bits_csr_idx_w(exu_io_out_bits_csr_idx_w),
    .io_out_bits_csr_val_w(exu_io_out_bits_csr_val_w),
    .io_out_bits_csr_no(exu_io_out_bits_csr_no),
    .io_out_bits_csr_epc(exu_io_out_bits_csr_epc),
    .io_out_bits_isJump(exu_io_out_bits_isJump),
    .io_out_bits_clearidx(exu_io_out_bits_clearidx),
    .io_gpr_idx_r1(exu_io_gpr_idx_r1),
    .io_gpr_idx_r2(exu_io_gpr_idx_r2),
    .io_gpr_en_r1(exu_io_gpr_en_r1),
    .io_gpr_en_r2(exu_io_gpr_en_r2),
    .io_gpr_val_r1(exu_io_gpr_val_r1),
    .io_gpr_val_r2(exu_io_gpr_val_r2),
    .io_csr_idx_r(exu_io_csr_idx_r),
    .io_csr_en_r(exu_io_csr_en_r),
    .io_csr_val_r(exu_io_csr_val_r),
    .io_lm_ar_ready(exu_io_lm_ar_ready),
    .io_lm_ar_valid(exu_io_lm_ar_valid),
    .io_lm_ar_bits_addr(exu_io_lm_ar_bits_addr),
    .io_lm_r_valid(exu_io_lm_r_valid),
    .io_lm_r_bits_data(exu_io_lm_r_bits_data),
    .io_lm_aw_ready(exu_io_lm_aw_ready),
    .io_lm_aw_valid(exu_io_lm_aw_valid),
    .io_lm_aw_bits_addr(exu_io_lm_aw_bits_addr),
    .io_lm_w_ready(exu_io_lm_w_ready),
    .io_lm_w_valid(exu_io_lm_w_valid),
    .io_lm_w_bits_data(exu_io_lm_w_bits_data),
    .io_lm_w_bits_strb(exu_io_lm_w_bits_strb),
    .io_lm_b_valid(exu_io_lm_b_valid)
  );
  WBU wbu ( // @[top.scala 16:19]
    .clock(wbu_clock),
    .reset(wbu_reset),
    .io_in_ready(wbu_io_in_ready),
    .io_in_valid(wbu_io_in_valid),
    .io_in_bits_pc(wbu_io_in_bits_pc),
    .io_in_bits_pc_dnpc(wbu_io_in_bits_pc_dnpc),
    .io_in_bits_gpr_idx_w(wbu_io_in_bits_gpr_idx_w),
    .io_in_bits_gpr_en_w(wbu_io_in_bits_gpr_en_w),
    .io_in_bits_gpr_val_w(wbu_io_in_bits_gpr_val_w),
    .io_in_bits_csr_en_w(wbu_io_in_bits_csr_en_w),
    .io_in_bits_csr_idx_w(wbu_io_in_bits_csr_idx_w),
    .io_in_bits_csr_val_w(wbu_io_in_bits_csr_val_w),
    .io_in_bits_csr_no(wbu_io_in_bits_csr_no),
    .io_in_bits_csr_epc(wbu_io_in_bits_csr_epc),
    .io_in_bits_isJump(wbu_io_in_bits_isJump),
    .io_in_bits_clearidx(wbu_io_in_bits_clearidx),
    .io_gpr_idx_w(wbu_io_gpr_idx_w),
    .io_gpr_en_w(wbu_io_gpr_en_w),
    .io_gpr_val_w(wbu_io_gpr_val_w),
    .io_csr_en_w(wbu_io_csr_en_w),
    .io_csr_idx_w(wbu_io_csr_idx_w),
    .io_csr_val_w(wbu_io_csr_val_w),
    .io_csr_no(wbu_io_csr_no),
    .io_csr_epc(wbu_io_csr_epc),
    .io_pc_dnpc(wbu_io_pc_dnpc),
    .io_valid(wbu_io_valid),
    .io_isJump(wbu_io_isJump),
    .io_sb_clearidx(wbu_io_sb_clearidx)
  );
  GPR gpr ( // @[top.scala 17:19]
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
  CSR csr ( // @[top.scala 18:19]
    .clock(csr_clock),
    .reset(csr_reset),
    .io_r_idx_r(csr_io_r_idx_r),
    .io_r_en_r(csr_io_r_en_r),
    .io_r_val_r(csr_io_r_val_r),
    .io_w_en_w(csr_io_w_en_w),
    .io_w_idx_w(csr_io_w_idx_w),
    .io_w_val_w(csr_io_w_val_w),
    .io_w_no(csr_io_w_no),
    .io_w_epc(csr_io_w_epc)
  );
  ScoreBoard scoreboard ( // @[top.scala 19:26]
    .clock(scoreboard_clock),
    .reset(scoreboard_reset),
    .io_ID_lookidx1(scoreboard_io_ID_lookidx1),
    .io_ID_lookidx2(scoreboard_io_ID_lookidx2),
    .io_ID_setidx(scoreboard_io_ID_setidx),
    .io_ID_isBusy(scoreboard_io_ID_isBusy),
    .io_WB_clearidx(scoreboard_io_WB_clearidx)
  );
  Crossbar crossbar ( // @[top.scala 36:24]
    .io_in1_ar_valid(crossbar_io_in1_ar_valid),
    .io_in1_ar_bits_addr(crossbar_io_in1_ar_bits_addr),
    .io_in1_r_valid(crossbar_io_in1_r_valid),
    .io_in1_r_bits_data(crossbar_io_in1_r_bits_data),
    .io_in2_ar_ready(crossbar_io_in2_ar_ready),
    .io_in2_ar_valid(crossbar_io_in2_ar_valid),
    .io_in2_ar_bits_addr(crossbar_io_in2_ar_bits_addr),
    .io_in2_r_valid(crossbar_io_in2_r_valid),
    .io_in2_r_bits_data(crossbar_io_in2_r_bits_data),
    .io_in2_aw_ready(crossbar_io_in2_aw_ready),
    .io_in2_aw_valid(crossbar_io_in2_aw_valid),
    .io_in2_aw_bits_addr(crossbar_io_in2_aw_bits_addr),
    .io_in2_w_ready(crossbar_io_in2_w_ready),
    .io_in2_w_valid(crossbar_io_in2_w_valid),
    .io_in2_w_bits_data(crossbar_io_in2_w_bits_data),
    .io_in2_w_bits_strb(crossbar_io_in2_w_bits_strb),
    .io_in2_b_valid(crossbar_io_in2_b_valid),
    .io_out_ar_ready(crossbar_io_out_ar_ready),
    .io_out_ar_valid(crossbar_io_out_ar_valid),
    .io_out_ar_bits_addr(crossbar_io_out_ar_bits_addr),
    .io_out_ar_bits_size(crossbar_io_out_ar_bits_size),
    .io_out_ar_bits_id(crossbar_io_out_ar_bits_id),
    .io_out_r_ready(crossbar_io_out_r_ready),
    .io_out_r_valid(crossbar_io_out_r_valid),
    .io_out_r_bits_data(crossbar_io_out_r_bits_data),
    .io_out_r_bits_id(crossbar_io_out_r_bits_id),
    .io_out_aw_ready(crossbar_io_out_aw_ready),
    .io_out_aw_valid(crossbar_io_out_aw_valid),
    .io_out_aw_bits_addr(crossbar_io_out_aw_bits_addr),
    .io_out_w_ready(crossbar_io_out_w_ready),
    .io_out_w_valid(crossbar_io_out_w_valid),
    .io_out_w_bits_data(crossbar_io_out_w_bits_data),
    .io_out_w_bits_strb(crossbar_io_out_w_bits_strb),
    .io_out_w_bits_last(crossbar_io_out_w_bits_last),
    .io_out_b_ready(crossbar_io_out_b_ready),
    .io_out_b_valid(crossbar_io_out_b_valid)
  );
  assign io_pc = wbu_io_pc_dnpc; // @[top.scala 34:10]
  assign io_valid = wbu_io_valid; // @[top.scala 33:13]
  assign io_hitrate_i = 64'h0; // @[top.scala 42:38]
  assign io_hitrate_d = 64'h0; // @[top.scala 43:38]
  assign sram_clock = clock;
  assign sram_reset = reset;
  assign sram_io_ar_valid = crossbar_io_out_ar_valid; // @[top.scala 39:20]
  assign sram_io_ar_bits_addr = crossbar_io_out_ar_bits_addr; // @[top.scala 39:20]
  assign sram_io_ar_bits_size = crossbar_io_out_ar_bits_size; // @[top.scala 39:20]
  assign sram_io_ar_bits_id = crossbar_io_out_ar_bits_id; // @[top.scala 39:20]
  assign sram_io_r_ready = crossbar_io_out_r_ready; // @[top.scala 39:20]
  assign sram_io_aw_valid = crossbar_io_out_aw_valid; // @[top.scala 39:20]
  assign sram_io_aw_bits_addr = crossbar_io_out_aw_bits_addr; // @[top.scala 39:20]
  assign sram_io_w_valid = crossbar_io_out_w_valid; // @[top.scala 39:20]
  assign sram_io_w_bits_data = crossbar_io_out_w_bits_data; // @[top.scala 39:20]
  assign sram_io_w_bits_strb = crossbar_io_out_w_bits_strb; // @[top.scala 39:20]
  assign sram_io_w_bits_last = crossbar_io_out_w_bits_last; // @[top.scala 39:20]
  assign sram_io_b_ready = crossbar_io_out_b_ready; // @[top.scala 39:20]
  assign ifu_clock = clock;
  assign ifu_reset = reset;
  assign ifu_io_pc_dnpc = wbu_io_pc_dnpc; // @[top.scala 23:19]
  assign ifu_io_clearJump = wbu_io_isJump; // @[top.scala 24:21]
  assign ifu_io_lm_r_valid = crossbar_io_in1_r_valid; // @[top.scala 37:20]
  assign ifu_io_lm_r_bits_data = crossbar_io_in1_r_bits_data; // @[top.scala 37:20]
  assign ifu_io_out_ready = idu_io_in_ready; // @[top.scala 25:14]
  assign idu_clock = clock;
  assign idu_reset = reset;
  assign idu_io_in_valid = ifu_io_out_valid; // @[top.scala 25:14]
  assign idu_io_in_bits_pc = ifu_io_out_bits_pc; // @[top.scala 25:14]
  assign idu_io_in_bits_inst = ifu_io_out_bits_inst; // @[top.scala 25:14]
  assign idu_io_in_bits_isJump = ifu_io_out_bits_isJump; // @[top.scala 25:14]
  assign idu_io_out_ready = exu_io_in_ready; // @[top.scala 26:14]
  assign idu_io_sb_isBusy = scoreboard_io_ID_isBusy; // @[top.scala 21:21]
  assign exu_clock = clock;
  assign exu_reset = reset;
  assign exu_io_in_valid = idu_io_out_valid; // @[top.scala 26:14]
  assign exu_io_in_bits_pc = idu_io_out_bits_pc; // @[top.scala 26:14]
  assign exu_io_in_bits_inst = idu_io_out_bits_inst; // @[top.scala 26:14]
  assign exu_io_in_bits_rs1 = idu_io_out_bits_rs1; // @[top.scala 26:14]
  assign exu_io_in_bits_rs2 = idu_io_out_bits_rs2; // @[top.scala 26:14]
  assign exu_io_in_bits_rd = idu_io_out_bits_rd; // @[top.scala 26:14]
  assign exu_io_in_bits_imm = idu_io_out_bits_imm; // @[top.scala 26:14]
  assign exu_io_in_bits_op = idu_io_out_bits_op; // @[top.scala 26:14]
  assign exu_io_in_bits_typ = idu_io_out_bits_typ; // @[top.scala 26:14]
  assign exu_io_in_bits_isJump = idu_io_out_bits_isJump; // @[top.scala 26:14]
  assign exu_io_in_bits_clearidx = idu_io_out_bits_clearidx; // @[top.scala 26:14]
  assign exu_io_gpr_val_r1 = gpr_io_r_val_r1; // @[top.scala 27:15]
  assign exu_io_gpr_val_r2 = gpr_io_r_val_r2; // @[top.scala 27:15]
  assign exu_io_csr_val_r = csr_io_r_val_r; // @[top.scala 28:15]
  assign exu_io_lm_ar_ready = crossbar_io_in2_ar_ready; // @[top.scala 38:20]
  assign exu_io_lm_r_valid = crossbar_io_in2_r_valid; // @[top.scala 38:20]
  assign exu_io_lm_r_bits_data = crossbar_io_in2_r_bits_data; // @[top.scala 38:20]
  assign exu_io_lm_aw_ready = crossbar_io_in2_aw_ready; // @[top.scala 38:20]
  assign exu_io_lm_w_ready = crossbar_io_in2_w_ready; // @[top.scala 38:20]
  assign exu_io_lm_b_valid = crossbar_io_in2_b_valid; // @[top.scala 38:20]
  assign wbu_clock = clock;
  assign wbu_reset = reset;
  assign wbu_io_in_valid = exu_io_out_valid; // @[top.scala 29:14]
  assign wbu_io_in_bits_pc = exu_io_out_bits_pc; // @[top.scala 29:14]
  assign wbu_io_in_bits_pc_dnpc = exu_io_out_bits_pc_dnpc; // @[top.scala 29:14]
  assign wbu_io_in_bits_gpr_idx_w = exu_io_out_bits_gpr_idx_w; // @[top.scala 29:14]
  assign wbu_io_in_bits_gpr_en_w = exu_io_out_bits_gpr_en_w; // @[top.scala 29:14]
  assign wbu_io_in_bits_gpr_val_w = exu_io_out_bits_gpr_val_w; // @[top.scala 29:14]
  assign wbu_io_in_bits_csr_en_w = exu_io_out_bits_csr_en_w; // @[top.scala 29:14]
  assign wbu_io_in_bits_csr_idx_w = exu_io_out_bits_csr_idx_w; // @[top.scala 29:14]
  assign wbu_io_in_bits_csr_val_w = exu_io_out_bits_csr_val_w; // @[top.scala 29:14]
  assign wbu_io_in_bits_csr_no = exu_io_out_bits_csr_no; // @[top.scala 29:14]
  assign wbu_io_in_bits_csr_epc = exu_io_out_bits_csr_epc; // @[top.scala 29:14]
  assign wbu_io_in_bits_isJump = exu_io_out_bits_isJump; // @[top.scala 29:14]
  assign wbu_io_in_bits_clearidx = exu_io_out_bits_clearidx; // @[top.scala 29:14]
  assign gpr_clock = clock;
  assign gpr_reset = reset;
  assign gpr_io_r_idx_r1 = exu_io_gpr_idx_r1; // @[top.scala 27:15]
  assign gpr_io_r_idx_r2 = exu_io_gpr_idx_r2; // @[top.scala 27:15]
  assign gpr_io_r_en_r1 = exu_io_gpr_en_r1; // @[top.scala 27:15]
  assign gpr_io_r_en_r2 = exu_io_gpr_en_r2; // @[top.scala 27:15]
  assign gpr_io_w_idx_w = wbu_io_gpr_idx_w; // @[top.scala 30:15]
  assign gpr_io_w_en_w = wbu_io_gpr_en_w; // @[top.scala 30:15]
  assign gpr_io_w_val_w = wbu_io_gpr_val_w; // @[top.scala 30:15]
  assign csr_clock = clock;
  assign csr_reset = reset;
  assign csr_io_r_idx_r = exu_io_csr_idx_r; // @[top.scala 28:15]
  assign csr_io_r_en_r = exu_io_csr_en_r; // @[top.scala 28:15]
  assign csr_io_w_en_w = wbu_io_csr_en_w; // @[top.scala 31:15]
  assign csr_io_w_idx_w = wbu_io_csr_idx_w; // @[top.scala 31:15]
  assign csr_io_w_val_w = wbu_io_csr_val_w; // @[top.scala 31:15]
  assign csr_io_w_no = wbu_io_csr_no; // @[top.scala 31:15]
  assign csr_io_w_epc = wbu_io_csr_epc; // @[top.scala 31:15]
  assign scoreboard_clock = clock;
  assign scoreboard_reset = reset;
  assign scoreboard_io_ID_lookidx1 = idu_io_sb_lookidx1; // @[top.scala 21:21]
  assign scoreboard_io_ID_lookidx2 = idu_io_sb_lookidx2; // @[top.scala 21:21]
  assign scoreboard_io_ID_setidx = idu_io_sb_setidx; // @[top.scala 21:21]
  assign scoreboard_io_WB_clearidx = wbu_io_sb_clearidx; // @[top.scala 22:21]
  assign crossbar_io_in1_ar_valid = ifu_io_lm_ar_valid; // @[top.scala 37:20]
  assign crossbar_io_in1_ar_bits_addr = ifu_io_lm_ar_bits_addr; // @[top.scala 37:20]
  assign crossbar_io_in2_ar_valid = exu_io_lm_ar_valid; // @[top.scala 38:20]
  assign crossbar_io_in2_ar_bits_addr = exu_io_lm_ar_bits_addr; // @[top.scala 38:20]
  assign crossbar_io_in2_aw_valid = exu_io_lm_aw_valid; // @[top.scala 38:20]
  assign crossbar_io_in2_aw_bits_addr = exu_io_lm_aw_bits_addr; // @[top.scala 38:20]
  assign crossbar_io_in2_w_valid = exu_io_lm_w_valid; // @[top.scala 38:20]
  assign crossbar_io_in2_w_bits_data = exu_io_lm_w_bits_data; // @[top.scala 38:20]
  assign crossbar_io_in2_w_bits_strb = exu_io_lm_w_bits_strb; // @[top.scala 38:20]
  assign crossbar_io_out_ar_ready = sram_io_ar_ready; // @[top.scala 39:20]
  assign crossbar_io_out_r_valid = sram_io_r_valid; // @[top.scala 39:20]
  assign crossbar_io_out_r_bits_data = sram_io_r_bits_data; // @[top.scala 39:20]
  assign crossbar_io_out_r_bits_id = sram_io_r_bits_id; // @[top.scala 39:20]
  assign crossbar_io_out_aw_ready = sram_io_aw_ready; // @[top.scala 39:20]
  assign crossbar_io_out_w_ready = sram_io_w_ready; // @[top.scala 39:20]
  assign crossbar_io_out_b_valid = sram_io_b_valid; // @[top.scala 39:20]
endmodule

/* verilator lint_off WIDTH */
module AXI4SRAM(
  input         clock,
  input         reset,
  output        io_ar_ready,
  input         io_ar_valid,
  input  [31:0] io_ar_bits_addr,
  input  [7:0]  io_ar_bits_len,
  input  [2:0]  io_ar_bits_size,
  input         io_r_ready,
  output        io_r_valid,
  output [63:0] io_r_bits_data,
  output        io_aw_ready,
  input         io_aw_valid,
  input  [31:0] io_aw_bits_addr,
  input  [2:0]  io_aw_bits_size,
  output        io_w_ready,
  input         io_w_valid,
  input  [63:0] io_w_bits_data,
  input  [7:0]  io_w_bits_strb,
  input         io_w_bits_last
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
`endif // RANDOMIZE_REG_INIT
  wire [31:0] pmem_raddr; // @[SRAM.scala 133:19]
  wire [63:0] pmem_rdata; // @[SRAM.scala 133:19]
  wire [31:0] pmem_waddr; // @[SRAM.scala 133:19]
  wire [63:0] pmem_wdata; // @[SRAM.scala 133:19]
  wire [7:0] pmem_wmask; // @[SRAM.scala 133:19]
  reg  rstate; // @[SRAM.scala 78:23]
  wire  _rstate_T = io_ar_ready & io_ar_valid; // @[Decoupled.scala 40:37]
  reg [7:0] rcnt; // @[SRAM.scala 96:21]
  reg [7:0] rlen; // @[SRAM.scala 92:19]
  wire  _rlast_T_1 = io_r_ready & io_r_valid; // @[Decoupled.scala 40:37]
  wire  rlast = rcnt == rlen & _rlast_T_1; // @[SRAM.scala 115:25]
  reg  wstate; // @[SRAM.scala 84:23]
  wire  _wstate_T = io_aw_ready & io_aw_valid; // @[Decoupled.scala 40:37]
  reg [31:0] raddr; // @[SRAM.scala 91:20]
  reg [2:0] rsize; // @[SRAM.scala 93:20]
  reg [31:0] lower_bound_addr; // @[SRAM.scala 95:31]
  reg [7:0] beatcnt; // @[SRAM.scala 97:24]
  wire [31:0] _lower_bound_addr_WIRE = {{24'd0}, io_ar_bits_len}; // @[SRAM.scala 100:81 SRAM.scala 100:81]
  wire [31:0] _lower_bound_addr_T_1 = ~_lower_bound_addr_WIRE; // @[SRAM.scala 100:57]
  wire [38:0] _GEN_1 = {{7'd0}, _lower_bound_addr_T_1}; // @[SRAM.scala 100:95]
  wire [38:0] _lower_bound_addr_T_2 = _GEN_1 << io_ar_bits_size; // @[SRAM.scala 100:95]
  wire [38:0] _GEN_2 = {{7'd0}, io_ar_bits_addr}; // @[SRAM.scala 100:52]
  wire [38:0] _lower_bound_addr_T_3 = _GEN_2 & _lower_bound_addr_T_2; // @[SRAM.scala 100:52]
  wire [38:0] _lower_bound_addr_T_4 = _rstate_T ? _lower_bound_addr_T_3 : {{7'd0}, lower_bound_addr}; // @[SRAM.scala 100:24]
  wire  _raddr_T_5 = beatcnt == 8'hff | beatcnt == rlen; // @[SRAM.scala 104:47]
  wire [38:0] _raddr_T_8 = 39'h1 << rsize; // @[SRAM.scala 105:45]
  wire [38:0] _GEN_3 = {{7'd0}, raddr}; // @[SRAM.scala 105:33]
  wire [38:0] _raddr_T_10 = _GEN_3 + _raddr_T_8; // @[SRAM.scala 105:33]
  wire [38:0] _raddr_T_11 = _rlast_T_1 ? _raddr_T_10 : {{7'd0}, raddr}; // @[SRAM.scala 105:15]
  wire [38:0] _raddr_T_12 = _rlast_T_1 & (beatcnt == 8'hff | beatcnt == rlen) ? {{7'd0}, lower_bound_addr} : _raddr_T_11
    ; // @[SRAM.scala 104:15]
  wire [38:0] _raddr_T_13 = rlast ? 39'h0 : _raddr_T_12; // @[SRAM.scala 103:15]
  wire [38:0] _raddr_T_14 = _rstate_T ? {{7'd0}, io_ar_bits_addr} : _raddr_T_13; // @[SRAM.scala 102:15]
  wire [7:0] _rcnt_T_7 = rcnt + 8'h1; // @[SRAM.scala 110:28]
  wire [31:0] _beatcnt_T_1 = io_ar_bits_addr >> io_ar_bits_size; // @[SRAM.scala 111:44]
  wire [31:0] _beatcnt_T_2 = _beatcnt_T_1 & _lower_bound_addr_WIRE; // @[SRAM.scala 111:64]
  wire [7:0] _beatcnt_T_8 = beatcnt + 8'h1; // @[SRAM.scala 113:41]
  wire [7:0] _beatcnt_T_9 = rstate ? _beatcnt_T_8 : 8'h0; // @[SRAM.scala 113:15]
  wire [7:0] _beatcnt_T_10 = _raddr_T_5 ? 8'h0 : _beatcnt_T_9; // @[SRAM.scala 112:15]
  wire [31:0] _beatcnt_T_11 = _rstate_T ? _beatcnt_T_2 : {{24'd0}, _beatcnt_T_10}; // @[SRAM.scala 111:15]
  reg [31:0] waddr; // @[SRAM.scala 121:22]
  reg [2:0] wsize; // @[SRAM.scala 124:22]
  wire  _waddr_T_3 = io_w_ready & io_w_valid; // @[Decoupled.scala 40:37]
  wire [31:0] _waddr_T_5 = waddr + 32'h1; // @[SRAM.scala 129:30]
  wire [38:0] _GEN_5 = {{7'd0}, _waddr_T_5}; // @[SRAM.scala 129:40]
  wire [38:0] _waddr_T_6 = _GEN_5 << wsize; // @[SRAM.scala 129:40]
  wire [38:0] _waddr_T_7 = _waddr_T_3 ? _waddr_T_6 : {{7'd0}, waddr}; // @[SRAM.scala 129:13]
  wire [38:0] _waddr_T_8 = _wstate_T & ~wstate ? {{7'd0}, io_aw_bits_addr} : _waddr_T_7; // @[SRAM.scala 128:13]
  wire [7:0] _T_1 = rlen + 8'h1; // @[SRAM.scala 152:45]
  wire [7:0] _T_2 = 8'h1 << rsize; // @[SRAM.scala 152:55]
  wire [15:0] _T_3 = _T_1 * _T_2; // @[SRAM.scala 152:50]
  wire [31:0] _GEN_6 = {{16'd0}, _T_3}; // @[SRAM.scala 152:38]
  wire [31:0] _T_5 = lower_bound_addr + _GEN_6; // @[SRAM.scala 152:38]
  memory pmem ( // @[SRAM.scala 133:19]
    .raddr(pmem_raddr),
    .rdata(pmem_rdata),
    .waddr(pmem_waddr),
    .wdata(pmem_wdata),
    .wmask(pmem_wmask)
  );
  assign io_ar_ready = ~rstate; // @[SRAM.scala 139:26]
  assign io_r_valid = rstate; // @[SRAM.scala 140:26]
  assign io_r_bits_data = pmem_rdata; // @[SRAM.scala 145:18]
  assign io_aw_ready = ~wstate; // @[SRAM.scala 142:26]
  assign io_w_ready = wstate; // @[SRAM.scala 143:26]
  assign pmem_raddr = raddr; // @[SRAM.scala 134:16]
  assign pmem_waddr = waddr; // @[SRAM.scala 135:16]
  assign pmem_wdata = io_w_bits_data; // @[SRAM.scala 136:16]
  assign pmem_wmask = wstate ? io_w_bits_strb : 8'h0; // @[SRAM.scala 137:22]
  always @(posedge clock) begin
    if (reset) begin // @[SRAM.scala 78:23]
      rstate <= 1'h0; // @[SRAM.scala 78:23]
    end else if (rstate) begin // @[Mux.scala 80:57]
      if (rlast) begin // @[SRAM.scala 82:25]
        rstate <= 1'h0;
      end else begin
        rstate <= 1'h1;
      end
    end else begin
      rstate <= _rstate_T;
    end
    if (reset) begin // @[SRAM.scala 96:21]
      rcnt <= 8'h0; // @[SRAM.scala 96:21]
    end else if (rcnt == 8'hff | rlast | _rstate_T) begin // @[SRAM.scala 109:12]
      rcnt <= 8'h0;
    end else if (_rlast_T_1) begin // @[SRAM.scala 110:12]
      rcnt <= _rcnt_T_7;
    end
    if (reset) begin // @[SRAM.scala 92:19]
      rlen <= 8'h0; // @[SRAM.scala 92:19]
    end else if (_rstate_T) begin // @[SRAM.scala 106:14]
      rlen <= io_ar_bits_len;
    end
    if (reset) begin // @[SRAM.scala 84:23]
      wstate <= 1'h0; // @[SRAM.scala 84:23]
    end else if (wstate) begin // @[Mux.scala 80:57]
      if (io_w_bits_last) begin // @[SRAM.scala 87:25]
        wstate <= 1'h0;
      end else begin
        wstate <= 1'h1;
      end
    end else begin
      wstate <= _wstate_T;
    end
    if (reset) begin // @[SRAM.scala 91:20]
      raddr <= 32'h0; // @[SRAM.scala 91:20]
    end else begin
      raddr <= _raddr_T_14[31:0]; // @[SRAM.scala 102:9]
    end
    if (reset) begin // @[SRAM.scala 93:20]
      rsize <= 3'h0; // @[SRAM.scala 93:20]
    end else if (_rstate_T) begin // @[SRAM.scala 107:15]
      rsize <= io_ar_bits_size;
    end
    if (reset) begin // @[SRAM.scala 95:31]
      lower_bound_addr <= 32'h0; // @[SRAM.scala 95:31]
    end else begin
      lower_bound_addr <= _lower_bound_addr_T_4[31:0]; // @[SRAM.scala 100:19]
    end
    if (reset) begin // @[SRAM.scala 97:24]
      beatcnt <= 8'h0; // @[SRAM.scala 97:24]
    end else begin
      beatcnt <= _beatcnt_T_11[7:0]; // @[SRAM.scala 111:10]
    end
    if (reset) begin // @[SRAM.scala 121:22]
      waddr <= 32'h0; // @[SRAM.scala 121:22]
    end else begin
      waddr <= _waddr_T_8[31:0]; // @[SRAM.scala 128:8]
    end
    if (reset) begin // @[SRAM.scala 124:22]
      wsize <= 3'h0; // @[SRAM.scala 124:22]
    end else if (_wstate_T) begin // @[SRAM.scala 127:13]
      wsize <= io_aw_bits_size;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~(raddr < _T_5 & raddr >= lower_bound_addr | raddr == 32'h0 | reset)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at SRAM.scala:152 assert(((raddr <  lower_bound_addr + (rlen+1.U)*(1.U<<rsize )) && (raddr >= lower_bound_addr)) || (raddr === 0.U))\n"
            ); // @[SRAM.scala 152:9]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (~(raddr < _T_5 & raddr >= lower_bound_addr | raddr == 32'h0 | reset)) begin
          $fatal; // @[SRAM.scala 152:9]
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
  rlen = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  wstate = _RAND_3[0:0];
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
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module AXI4Arbiter(
  input         clock,
  input         reset,
  output        io_ifu_ar_ready,
  input         io_ifu_ar_valid,
  input  [31:0] io_ifu_ar_bits_addr,
  output        io_ifu_r_valid,
  output [63:0] io_ifu_r_bits_data,
  output        io_ifu_aw_ready,
  input  [31:0] io_ifu_aw_bits_addr,
  output        io_ifu_w_ready,
  input         io_ifu_w_valid,
  input  [63:0] io_ifu_w_bits_data,
  input         io_ifu_w_bits_last,
  output        io_ifu_b_valid,
  output        io_lsu_ar_ready,
  input         io_lsu_ar_valid,
  input  [31:0] io_lsu_ar_bits_addr,
  input         io_lsu_r_ready,
  output        io_lsu_r_valid,
  output [63:0] io_lsu_r_bits_data,
  output        io_lsu_aw_ready,
  input         io_lsu_aw_valid,
  input  [31:0] io_lsu_aw_bits_addr,
  output        io_lsu_w_ready,
  input         io_lsu_w_valid,
  input  [63:0] io_lsu_w_bits_data,
  input  [7:0]  io_lsu_w_bits_strb,
  input         io_out_ar_ready,
  output        io_out_ar_valid,
  output [31:0] io_out_ar_bits_addr,
  output [7:0]  io_out_ar_bits_len,
  output [2:0]  io_out_ar_bits_size,
  output        io_out_r_ready,
  input         io_out_r_valid,
  input  [63:0] io_out_r_bits_data,
  input         io_out_aw_ready,
  output        io_out_aw_valid,
  output [31:0] io_out_aw_bits_addr,
  output [2:0]  io_out_aw_bits_size,
  input         io_out_w_ready,
  output        io_out_w_valid,
  output [63:0] io_out_w_bits_data,
  output [7:0]  io_out_w_bits_strb,
  output        io_out_w_bits_last
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [63:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
  reg [31:0] _RAND_11;
  reg [31:0] _RAND_12;
  reg [31:0] _RAND_13;
  reg [63:0] _RAND_14;
  reg [31:0] _RAND_15;
  reg [31:0] _RAND_16;
  reg [31:0] _RAND_17;
  reg [31:0] _RAND_18;
  reg [31:0] _RAND_19;
  reg [31:0] _RAND_20;
  reg [31:0] _RAND_21;
  reg [31:0] _RAND_22;
  reg [31:0] _RAND_23;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] state; // @[Arbiter.scala 48:22]
  wire [1:0] _state_T = io_lsu_ar_valid ? 2'h1 : 2'h2; // @[Arbiter.scala 51:18]
  wire [1:0] _state_T_1 = io_ifu_ar_valid ? 2'h0 : _state_T; // @[Arbiter.scala 50:18]
  wire  _state_T_4 = io_lsu_r_ready & io_lsu_r_valid; // @[Decoupled.scala 40:37]
  reg [31:0] araddr; // @[Arbiter.scala 56:21]
  reg  arvalid; // @[Arbiter.scala 57:22]
  reg  ifu_arready; // @[Arbiter.scala 58:26]
  reg  lsu_arready; // @[Arbiter.scala 59:26]
  reg [63:0] ifu_rdata; // @[Arbiter.scala 60:24]
  reg [63:0] lsu_rdata; // @[Arbiter.scala 61:24]
  reg  ifu_rvalid; // @[Arbiter.scala 64:25]
  reg  lsu_rvalid; // @[Arbiter.scala 65:25]
  reg  rready; // @[Arbiter.scala 66:21]
  reg [31:0] awaddr; // @[Arbiter.scala 67:21]
  reg  awvalid; // @[Arbiter.scala 68:22]
  reg  ifu_awready; // @[Arbiter.scala 69:26]
  reg  lsu_awready; // @[Arbiter.scala 70:26]
  reg [63:0] wdata; // @[Arbiter.scala 71:20]
  reg [7:0] wstrb; // @[Arbiter.scala 72:20]
  reg  wvalid; // @[Arbiter.scala 73:21]
  reg  ifu_wready; // @[Arbiter.scala 74:25]
  reg  lsu_wready; // @[Arbiter.scala 75:25]
  reg  ifu_bvalid; // @[Arbiter.scala 78:25]
  reg [7:0] arlen; // @[Arbiter.scala 82:22]
  reg [2:0] arsize; // @[Arbiter.scala 83:23]
  reg [2:0] awsize; // @[Arbiter.scala 86:23]
  reg  wlast; // @[Arbiter.scala 88:22]
  wire [1:0] _arvalid_T_3 = 2'h0 == state ? {{1'd0}, io_ifu_ar_valid} : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _arvalid_T_5 = 2'h1 == state ? {{1'd0}, io_lsu_ar_valid} : _arvalid_T_3; // @[Mux.scala 80:57]
  wire [1:0] _rready_T_3 = 2'h0 == state ? 2'h1 : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _rready_T_5 = 2'h1 == state ? {{1'd0}, io_lsu_r_ready} : _rready_T_3; // @[Mux.scala 80:57]
  wire [1:0] _awvalid_T_5 = 2'h1 == state ? {{1'd0}, io_lsu_aw_valid} : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _wvalid_T_3 = 2'h0 == state ? {{1'd0}, io_ifu_w_valid} : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _wvalid_T_5 = 2'h1 == state ? {{1'd0}, io_lsu_w_valid} : _wvalid_T_3; // @[Mux.scala 80:57]
  wire [1:0] _wlast_T_3 = 2'h0 == state ? {{1'd0}, io_ifu_w_bits_last} : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _wlast_T_5 = 2'h1 == state ? 2'h1 : _wlast_T_3; // @[Mux.scala 80:57]
  wire [1:0] _ifu_arready_T_3 = 2'h0 == state ? {{1'd0}, io_out_ar_ready} : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _ifu_arready_T_5 = 2'h1 == state ? 2'h0 : _ifu_arready_T_3; // @[Mux.scala 80:57]
  wire [1:0] _ifu_rvalid_T_3 = 2'h0 == state ? {{1'd0}, io_out_r_valid} : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _ifu_rvalid_T_5 = 2'h1 == state ? 2'h0 : _ifu_rvalid_T_3; // @[Mux.scala 80:57]
  wire [1:0] _ifu_awready_T_3 = 2'h0 == state ? {{1'd0}, io_out_aw_ready} : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _ifu_awready_T_5 = 2'h1 == state ? 2'h0 : _ifu_awready_T_3; // @[Mux.scala 80:57]
  wire [1:0] _ifu_wready_T_3 = 2'h0 == state ? {{1'd0}, io_out_w_ready} : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _ifu_wready_T_5 = 2'h1 == state ? 2'h0 : _ifu_wready_T_3; // @[Mux.scala 80:57]
  wire [1:0] _ifu_bvalid_T_5 = 2'h1 == state ? 2'h0 : _rready_T_3; // @[Mux.scala 80:57]
  wire [1:0] _lsu_arready_T_5 = 2'h1 == state ? {{1'd0}, io_out_ar_ready} : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _lsu_rvalid_T_5 = 2'h1 == state ? {{1'd0}, io_out_r_valid} : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _lsu_awready_T_5 = 2'h1 == state ? {{1'd0}, io_out_aw_ready} : 2'h0; // @[Mux.scala 80:57]
  wire [1:0] _lsu_wready_T_5 = 2'h1 == state ? {{1'd0}, io_out_w_ready} : 2'h0; // @[Mux.scala 80:57]
  assign io_ifu_ar_ready = ifu_arready; // @[Arbiter.scala 197:18]
  assign io_ifu_r_valid = ifu_rvalid; // @[Arbiter.scala 215:17]
  assign io_ifu_r_bits_data = ifu_rdata; // @[Arbiter.scala 203:21]
  assign io_ifu_aw_ready = ifu_awready; // @[Arbiter.scala 221:18]
  assign io_ifu_w_ready = ifu_wready; // @[Arbiter.scala 227:17]
  assign io_ifu_b_valid = ifu_bvalid; // @[Arbiter.scala 239:17]
  assign io_lsu_ar_ready = lsu_arready; // @[Arbiter.scala 253:18]
  assign io_lsu_r_valid = lsu_rvalid; // @[Arbiter.scala 271:17]
  assign io_lsu_r_bits_data = lsu_rdata; // @[Arbiter.scala 259:21]
  assign io_lsu_aw_ready = lsu_awready; // @[Arbiter.scala 277:18]
  assign io_lsu_w_ready = lsu_wready; // @[Arbiter.scala 283:17]
  assign io_out_ar_valid = arvalid; // @[Arbiter.scala 100:18]
  assign io_out_ar_bits_addr = araddr; // @[Arbiter.scala 94:22]
  assign io_out_ar_bits_len = arlen; // @[Arbiter.scala 148:21]
  assign io_out_ar_bits_size = arsize; // @[Arbiter.scala 154:22]
  assign io_out_r_ready = rready; // @[Arbiter.scala 106:17]
  assign io_out_aw_valid = awvalid; // @[Arbiter.scala 118:18]
  assign io_out_aw_bits_addr = awaddr; // @[Arbiter.scala 112:22]
  assign io_out_aw_bits_size = awsize; // @[Arbiter.scala 172:22]
  assign io_out_w_valid = wvalid; // @[Arbiter.scala 136:17]
  assign io_out_w_bits_data = wdata; // @[Arbiter.scala 124:21]
  assign io_out_w_bits_strb = wstrb; // @[Arbiter.scala 130:21]
  assign io_out_w_bits_last = wlast; // @[Arbiter.scala 184:21]
  always @(posedge clock) begin
    if (reset) begin // @[Arbiter.scala 48:22]
      state <= 2'h2; // @[Arbiter.scala 48:22]
    end else if (2'h1 == state) begin // @[Mux.scala 80:57]
      if (_state_T_4) begin // @[Arbiter.scala 53:18]
        state <= 2'h2;
      end else begin
        state <= 2'h1;
      end
    end else if (2'h0 == state) begin // @[Mux.scala 80:57]
      if (io_ifu_r_valid) begin // @[Arbiter.scala 52:18]
        state <= 2'h2;
      end else begin
        state <= 2'h0;
      end
    end else if (2'h2 == state) begin // @[Mux.scala 80:57]
      state <= _state_T_1;
    end else begin
      state <= 2'h0;
    end
    if (reset) begin // @[Arbiter.scala 56:21]
      araddr <= 32'h0; // @[Arbiter.scala 56:21]
    end else if (2'h1 == state) begin // @[Mux.scala 80:57]
      araddr <= io_lsu_ar_bits_addr;
    end else if (2'h0 == state) begin // @[Mux.scala 80:57]
      araddr <= io_ifu_ar_bits_addr;
    end else begin
      araddr <= 32'h0;
    end
    if (reset) begin // @[Arbiter.scala 57:22]
      arvalid <= 1'h0; // @[Arbiter.scala 57:22]
    end else begin
      arvalid <= _arvalid_T_5[0]; // @[Arbiter.scala 101:10]
    end
    if (reset) begin // @[Arbiter.scala 58:26]
      ifu_arready <= 1'h0; // @[Arbiter.scala 58:26]
    end else begin
      ifu_arready <= _ifu_arready_T_5[0]; // @[Arbiter.scala 198:14]
    end
    if (reset) begin // @[Arbiter.scala 59:26]
      lsu_arready <= 1'h0; // @[Arbiter.scala 59:26]
    end else begin
      lsu_arready <= _lsu_arready_T_5[0]; // @[Arbiter.scala 254:14]
    end
    if (reset) begin // @[Arbiter.scala 60:24]
      ifu_rdata <= 64'h0; // @[Arbiter.scala 60:24]
    end else if (2'h1 == state) begin // @[Mux.scala 80:57]
      ifu_rdata <= 64'h0;
    end else if (2'h0 == state) begin // @[Mux.scala 80:57]
      ifu_rdata <= io_out_r_bits_data;
    end else begin
      ifu_rdata <= 64'h0;
    end
    if (reset) begin // @[Arbiter.scala 61:24]
      lsu_rdata <= 64'h0; // @[Arbiter.scala 61:24]
    end else if (2'h1 == state) begin // @[Mux.scala 80:57]
      lsu_rdata <= io_out_r_bits_data;
    end else begin
      lsu_rdata <= 64'h0;
    end
    if (reset) begin // @[Arbiter.scala 64:25]
      ifu_rvalid <= 1'h0; // @[Arbiter.scala 64:25]
    end else begin
      ifu_rvalid <= _ifu_rvalid_T_5[0]; // @[Arbiter.scala 216:13]
    end
    if (reset) begin // @[Arbiter.scala 65:25]
      lsu_rvalid <= 1'h0; // @[Arbiter.scala 65:25]
    end else begin
      lsu_rvalid <= _lsu_rvalid_T_5[0]; // @[Arbiter.scala 272:13]
    end
    if (reset) begin // @[Arbiter.scala 66:21]
      rready <= 1'h0; // @[Arbiter.scala 66:21]
    end else begin
      rready <= _rready_T_5[0]; // @[Arbiter.scala 107:9]
    end
    if (reset) begin // @[Arbiter.scala 67:21]
      awaddr <= 32'h0; // @[Arbiter.scala 67:21]
    end else if (2'h1 == state) begin // @[Mux.scala 80:57]
      awaddr <= io_lsu_aw_bits_addr;
    end else if (2'h0 == state) begin // @[Mux.scala 80:57]
      awaddr <= io_ifu_aw_bits_addr;
    end else begin
      awaddr <= 32'h0;
    end
    if (reset) begin // @[Arbiter.scala 68:22]
      awvalid <= 1'h0; // @[Arbiter.scala 68:22]
    end else begin
      awvalid <= _awvalid_T_5[0]; // @[Arbiter.scala 119:10]
    end
    if (reset) begin // @[Arbiter.scala 69:26]
      ifu_awready <= 1'h0; // @[Arbiter.scala 69:26]
    end else begin
      ifu_awready <= _ifu_awready_T_5[0]; // @[Arbiter.scala 222:14]
    end
    if (reset) begin // @[Arbiter.scala 70:26]
      lsu_awready <= 1'h0; // @[Arbiter.scala 70:26]
    end else begin
      lsu_awready <= _lsu_awready_T_5[0]; // @[Arbiter.scala 278:14]
    end
    if (reset) begin // @[Arbiter.scala 71:20]
      wdata <= 64'h0; // @[Arbiter.scala 71:20]
    end else if (2'h1 == state) begin // @[Mux.scala 80:57]
      wdata <= io_lsu_w_bits_data;
    end else if (2'h0 == state) begin // @[Mux.scala 80:57]
      wdata <= io_ifu_w_bits_data;
    end else begin
      wdata <= 64'h0;
    end
    if (reset) begin // @[Arbiter.scala 72:20]
      wstrb <= 8'h0; // @[Arbiter.scala 72:20]
    end else if (2'h1 == state) begin // @[Mux.scala 80:57]
      wstrb <= io_lsu_w_bits_strb;
    end else if (2'h0 == state) begin // @[Mux.scala 80:57]
      wstrb <= 8'h1;
    end else begin
      wstrb <= 8'h0;
    end
    if (reset) begin // @[Arbiter.scala 73:21]
      wvalid <= 1'h0; // @[Arbiter.scala 73:21]
    end else begin
      wvalid <= _wvalid_T_5[0]; // @[Arbiter.scala 137:9]
    end
    if (reset) begin // @[Arbiter.scala 74:25]
      ifu_wready <= 1'h0; // @[Arbiter.scala 74:25]
    end else begin
      ifu_wready <= _ifu_wready_T_5[0]; // @[Arbiter.scala 228:13]
    end
    if (reset) begin // @[Arbiter.scala 75:25]
      lsu_wready <= 1'h0; // @[Arbiter.scala 75:25]
    end else begin
      lsu_wready <= _lsu_wready_T_5[0]; // @[Arbiter.scala 284:13]
    end
    if (reset) begin // @[Arbiter.scala 78:25]
      ifu_bvalid <= 1'h0; // @[Arbiter.scala 78:25]
    end else begin
      ifu_bvalid <= _ifu_bvalid_T_5[0]; // @[Arbiter.scala 240:13]
    end
    if (reset) begin // @[Arbiter.scala 82:22]
      arlen <= 8'h0; // @[Arbiter.scala 82:22]
    end else if (2'h1 == state) begin // @[Mux.scala 80:57]
      arlen <= 8'h0;
    end else if (2'h0 == state) begin // @[Mux.scala 80:57]
      arlen <= 8'h1;
    end else begin
      arlen <= 8'h0;
    end
    if (reset) begin // @[Arbiter.scala 83:23]
      arsize <= 3'h0; // @[Arbiter.scala 83:23]
    end else if (2'h1 == state) begin // @[Mux.scala 80:57]
      arsize <= 3'h3;
    end else if (2'h0 == state) begin // @[Mux.scala 80:57]
      arsize <= 3'h3;
    end else begin
      arsize <= 3'h0;
    end
    if (reset) begin // @[Arbiter.scala 86:23]
      awsize <= 3'h0; // @[Arbiter.scala 86:23]
    end else if (2'h1 == state) begin // @[Mux.scala 80:57]
      awsize <= 3'h3;
    end else if (2'h0 == state) begin // @[Mux.scala 80:57]
      awsize <= 3'h3;
    end else begin
      awsize <= 3'h0;
    end
    if (reset) begin // @[Arbiter.scala 88:22]
      wlast <= 1'h0; // @[Arbiter.scala 88:22]
    end else begin
      wlast <= _wlast_T_5[0]; // @[Arbiter.scala 185:8]
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
  state = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  araddr = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  arvalid = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  ifu_arready = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  lsu_arready = _RAND_4[0:0];
  _RAND_5 = {2{`RANDOM}};
  ifu_rdata = _RAND_5[63:0];
  _RAND_6 = {2{`RANDOM}};
  lsu_rdata = _RAND_6[63:0];
  _RAND_7 = {1{`RANDOM}};
  ifu_rvalid = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  lsu_rvalid = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  rready = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  awaddr = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  awvalid = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  ifu_awready = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  lsu_awready = _RAND_13[0:0];
  _RAND_14 = {2{`RANDOM}};
  wdata = _RAND_14[63:0];
  _RAND_15 = {1{`RANDOM}};
  wstrb = _RAND_15[7:0];
  _RAND_16 = {1{`RANDOM}};
  wvalid = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  ifu_wready = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  lsu_wready = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  ifu_bvalid = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  arlen = _RAND_20[7:0];
  _RAND_21 = {1{`RANDOM}};
  arsize = _RAND_21[2:0];
  _RAND_22 = {1{`RANDOM}};
  awsize = _RAND_22[2:0];
  _RAND_23 = {1{`RANDOM}};
  wlast = _RAND_23[0:0];
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
  input         io_out_ready,
  output        io_out_valid,
  output [31:0] io_out_bits_inst,
  input         io_next
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] it_pc; // @[IFU.scala 41:16]
  wire  it_en; // @[IFU.scala 41:16]
  wire [31:0] it_inst; // @[IFU.scala 41:16]
  reg [1:0] state; // @[IFU.scala 23:22]
  wire  _state_T = io_lm_ar_ready & io_lm_ar_valid; // @[Decoupled.scala 40:37]
  wire [1:0] _state_T_1 = _state_T ? 2'h1 : 2'h0; // @[IFU.scala 25:25]
  wire  _state_T_2 = io_lm_r_ready & io_lm_r_valid; // @[Decoupled.scala 40:37]
  wire [1:0] _state_T_3 = _state_T_2 ? 2'h2 : 2'h1; // @[IFU.scala 26:25]
  wire  _state_T_4 = io_out_ready & io_out_valid; // @[Decoupled.scala 40:37]
  reg [31:0] inst; // @[IFU.scala 42:19]
  itrace it ( // @[IFU.scala 41:16]
    .pc(it_pc),
    .en(it_en),
    .inst(it_inst)
  );
  assign io_lm_ar_valid = state == 2'h0 & ~reset; // @[IFU.scala 32:37]
  assign io_lm_ar_bits_addr = io_pc[31:0]; // @[IFU.scala 31:28]
  assign io_lm_r_ready = state == 2'h1; // @[IFU.scala 33:25]
  assign io_out_valid = state == 2'h2 | state == 2'h3; // @[IFU.scala 45:41]
  assign io_out_bits_inst = _state_T_2 ? io_lm_r_bits_data[31:0] : inst; // @[IFU.scala 44:24]
  assign it_pc = {{32'd0}, io_lm_ar_bits_addr}; // @[IFU.scala 49:11]
  assign it_en = io_lm_r_ready & io_lm_r_valid; // @[Decoupled.scala 40:37]
  assign it_inst = _state_T_2 ? io_lm_r_bits_data[31:0] : inst; // @[IFU.scala 48:18]
  always @(posedge clock) begin
    if (reset) begin // @[IFU.scala 23:22]
      state <= 2'h0; // @[IFU.scala 23:22]
    end else if (2'h3 == state) begin // @[Mux.scala 80:57]
      if (io_next) begin // @[IFU.scala 28:25]
        state <= 2'h0;
      end else begin
        state <= 2'h3;
      end
    end else if (2'h2 == state) begin // @[Mux.scala 80:57]
      if (_state_T_4) begin // @[IFU.scala 27:25]
        state <= 2'h3;
      end else begin
        state <= 2'h2;
      end
    end else if (2'h1 == state) begin // @[Mux.scala 80:57]
      state <= _state_T_3;
    end else begin
      state <= _state_T_1;
    end
    if (reset) begin // @[IFU.scala 42:19]
      inst <= 32'h0; // @[IFU.scala 42:19]
    end else if (_state_T_2) begin // @[IFU.scala 43:12]
      inst <= io_lm_r_bits_data[31:0];
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
  state = _RAND_0[1:0];
  _RAND_1 = {1{`RANDOM}};
  inst = _RAND_1[31:0];
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
  input         io_out_ready,
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
  assign io_in_ready = io_out_ready; // @[IDU.scala 27:15]
  assign io_out_valid = io_in_valid; // @[IDU.scala 26:16]
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
  output [79:0] io_out_bits_op,
  output [63:0] io_out_bits_pc_dnpc,
  output [4:0]  io_out_bits_gpr_idx_w,
  output        io_out_bits_gpr_en_w,
  output [63:0] io_out_bits_gpr_val_w,
  output        io_out_bits_csr_en_w,
  output [11:0] io_out_bits_csr_idx_w,
  output [63:0] io_out_bits_csr_val_w,
  output [63:0] io_out_bits_csr_no,
  output [63:0] io_out_bits_csr_epc,
  output [4:0]  io_gpr_idx_r1,
  output [4:0]  io_gpr_idx_r2,
  output        io_gpr_en_r1,
  output        io_gpr_en_r2,
  input  [63:0] io_gpr_val_r1,
  input  [63:0] io_gpr_val_r2,
  input  [63:0] io_pc,
  output [11:0] io_csr_idx_r,
  input  [63:0] io_csr_val_r
);
  wire  ebreak1_en_break; // @[EXU.scala 32:27]
  wire  ebreak1_clk; // @[EXU.scala 32:27]
  wire [63:0] alu_dest_io_src1; // @[EXU.scala 41:28]
  wire [63:0] alu_dest_io_src2; // @[EXU.scala 41:28]
  wire [18:0] alu_dest_io_op; // @[EXU.scala 41:28]
  wire [63:0] alu_dest_io_result; // @[EXU.scala 41:28]
  wire [63:0] alu_pc_io_src1; // @[EXU.scala 42:26]
  wire [63:0] alu_pc_io_src2; // @[EXU.scala 42:26]
  wire [18:0] alu_pc_io_op; // @[EXU.scala 42:26]
  wire [63:0] alu_pc_io_result; // @[EXU.scala 42:26]
  wire  _ebreak1_io_en_break_T_1 = io_in_ready & io_in_valid; // @[Decoupled.scala 40:37]
  wire  _io_gpr_en_r1_T_6 = io_in_bits_typ[0] | io_in_bits_typ[2] | io_in_bits_typ[4] | io_in_bits_typ[5]; // @[EXU.scala 44:81]
  wire  _io_gpr_en_r2_T_2 = io_in_bits_typ[2] | io_in_bits_typ[4]; // @[EXU.scala 45:45]
  wire  _io_gpr_en_r2_T_4 = io_in_bits_typ[2] | io_in_bits_typ[4] | io_in_bits_typ[5]; // @[EXU.scala 45:63]
  wire  _io_csr_en_r_T_2 = io_in_bits_op[63] | io_in_bits_op[64]; // @[EXU.scala 51:43]
  wire [63:0] _src2_T_6 = io_in_bits_typ[0] ? io_in_bits_imm : 64'h0; // @[EXU.scala 66:16]
  wire [63:0] src2 = _io_gpr_en_r2_T_4 ? io_gpr_val_r2 : _src2_T_6; // @[EXU.scala 65:18]
  wire [63:0] _io_csr_idx_r_T_3 = _io_csr_en_r_T_2 ? src2 : 64'h0; // @[EXU.scala 52:26]
  wire [1:0] _io_out_bits_csr_no_T_2 = io_in_bits_op[66] ? 2'h2 : 2'h0; // @[EXU.scala 56:32]
  wire [1:0] _io_out_bits_csr_no_T_3 = io_in_bits_op[65] ? 2'h1 : _io_out_bits_csr_no_T_2; // @[EXU.scala 55:32]
  wire [63:0] _src1_T_10 = io_in_bits_typ[1] | io_in_bits_typ[3] ? io_in_bits_imm : 64'h0; // @[EXU.scala 62:16]
  wire [63:0] src1 = _io_gpr_en_r1_T_6 ? io_gpr_val_r1 : _src1_T_10; // @[EXU.scala 61:18]
  wire [63:0] dest = _io_gpr_en_r2_T_2 ? io_in_bits_imm : {{59'd0}, io_in_bits_rd}; // @[EXU.scala 69:18]
  wire [63:0] _io_out_bits_pin_raddr_T_13 = io_in_bits_op[38] | io_in_bits_op[39] | io_in_bits_op[40] | io_in_bits_op[41
    ] | io_in_bits_op[46] | io_in_bits_op[47] | io_in_bits_op[48] ? alu_dest_io_result : 64'h0; // @[EXU.scala 74:35]
  wire  _io_out_bits_pin_waddr_T_6 = io_in_bits_op[42] | io_in_bits_op[43] | io_in_bits_op[44] | io_in_bits_op[45]; // @[EXU.scala 76:89]
  wire [63:0] _io_out_bits_pin_waddr_T_7 = io_in_bits_op[42] | io_in_bits_op[43] | io_in_bits_op[44] | io_in_bits_op[45]
     ? alu_dest_io_result : 64'h0; // @[EXU.scala 76:35]
  wire [63:0] _io_out_bits_pin_wmask_T_8 = io_in_bits_op[45] ? 64'hff : 64'h0; // @[EXU.scala 81:35]
  wire [63:0] _io_out_bits_pin_wmask_T_9 = io_in_bits_op[44] ? 64'hf : _io_out_bits_pin_wmask_T_8; // @[EXU.scala 80:35]
  wire [63:0] _io_out_bits_pin_wmask_T_10 = io_in_bits_op[43] ? 64'h3 : _io_out_bits_pin_wmask_T_9; // @[EXU.scala 79:35]
  wire [63:0] _io_out_bits_pin_wmask_T_11 = io_in_bits_op[42] ? 64'h1 : _io_out_bits_pin_wmask_T_10; // @[EXU.scala 78:35]
  wire [31:0] alu_dest_io_src1_lo = src1[31:0]; // @[EXU.scala 84:178]
  wire [63:0] _alu_dest_io_src1_T_13 = {32'h0,alu_dest_io_src1_lo}; // @[Cat.scala 30:58]
  wire [31:0] alu_dest_io_src1_hi_1 = src1[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [63:0] _alu_dest_io_src1_T_19 = {alu_dest_io_src1_hi_1,alu_dest_io_src1_lo}; // @[Cat.scala 30:58]
  wire  _alu_dest_io_src1_T_22 = io_in_bits_op[36] | io_in_bits_op[37]; // @[EXU.scala 86:48]
  wire [63:0] _alu_dest_io_src1_T_23 = io_in_bits_op[36] | io_in_bits_op[37] ? io_pc : src1; // @[EXU.scala 86:30]
  wire [63:0] _alu_dest_io_src1_T_24 = io_in_bits_op[17] | io_in_bits_op[19] ? _alu_dest_io_src1_T_19 :
    _alu_dest_io_src1_T_23; // @[EXU.scala 85:30]
  wire [4:0] alu_dest_io_src2_lo = src2[4:0]; // @[EXU.scala 88:106]
  wire [63:0] _alu_dest_io_src2_T_5 = {59'h0,alu_dest_io_src2_lo}; // @[Cat.scala 30:58]
  wire [31:0] alu_dest_io_src2_lo_1 = src2[31:0]; // @[EXU.scala 92:124]
  wire [63:0] _alu_dest_io_src2_T_24 = {32'h0,alu_dest_io_src2_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _alu_dest_io_src2_T_26 = io_in_bits_op[64] ? io_csr_val_r : src2; // @[EXU.scala 93:30]
  wire [63:0] _alu_dest_io_src2_T_27 = io_in_bits_op[56] | io_in_bits_op[58] | io_in_bits_op[60] | io_in_bits_op[62] ?
    _alu_dest_io_src2_T_24 : _alu_dest_io_src2_T_26; // @[EXU.scala 92:30]
  wire [63:0] _alu_dest_io_src2_T_28 = _io_out_bits_pin_waddr_T_6 ? dest : _alu_dest_io_src2_T_27; // @[EXU.scala 91:30]
  wire [63:0] _alu_dest_io_src2_T_29 = _alu_dest_io_src1_T_22 ? 64'h4 : _alu_dest_io_src2_T_28; // @[EXU.scala 90:30]
  wire [63:0] _alu_dest_io_src2_T_30 = io_in_bits_op[25] ? io_pc : _alu_dest_io_src2_T_29; // @[EXU.scala 89:30]
  wire [18:0] _alu_dest_io_op_T_108 = io_in_bits_op[61] | io_in_bits_op[62] ? 19'h40000 : 19'h0; // @[EXU.scala 112:30]
  wire [18:0] _alu_dest_io_op_T_109 = io_in_bits_op[59] | io_in_bits_op[60] ? 19'h20000 : _alu_dest_io_op_T_108; // @[EXU.scala 111:30]
  wire [18:0] _alu_dest_io_op_T_110 = io_in_bits_op[57] | io_in_bits_op[58] ? 19'h10000 : _alu_dest_io_op_T_109; // @[EXU.scala 110:30]
  wire [18:0] _alu_dest_io_op_T_111 = io_in_bits_op[55] | io_in_bits_op[56] ? 19'h8000 : _alu_dest_io_op_T_110; // @[EXU.scala 109:30]
  wire [18:0] _alu_dest_io_op_T_112 = io_in_bits_op[54] ? 19'h4000 : _alu_dest_io_op_T_111; // @[EXU.scala 108:30]
  wire [18:0] _alu_dest_io_op_T_113 = io_in_bits_op[52] ? 19'h2000 : _alu_dest_io_op_T_112; // @[EXU.scala 107:30]
  wire [18:0] _alu_dest_io_op_T_114 = io_in_bits_op[50] | io_in_bits_op[51] | io_in_bits_op[53] ? 19'h1000 :
    _alu_dest_io_op_T_113; // @[EXU.scala 106:30]
  wire [18:0] _alu_dest_io_op_T_115 = io_in_bits_op[30] | io_in_bits_op[31] ? 19'h800 : _alu_dest_io_op_T_114; // @[EXU.scala 105:30]
  wire [18:0] _alu_dest_io_op_T_116 = io_in_bits_op[27] | io_in_bits_op[29] | io_in_bits_op[33] | io_in_bits_op[35] ? 19'h200
     : _alu_dest_io_op_T_115; // @[EXU.scala 104:30]
  wire [18:0] _alu_dest_io_op_T_117 = io_in_bits_op[26] | io_in_bits_op[28] | io_in_bits_op[32] | io_in_bits_op[34] ? 19'h100
     : _alu_dest_io_op_T_116; // @[EXU.scala 103:30]
  wire [18:0] _alu_dest_io_op_T_118 = io_in_bits_op[16] | io_in_bits_op[17] | io_in_bits_op[18] | io_in_bits_op[19] ? 19'h80
     : _alu_dest_io_op_T_117; // @[EXU.scala 102:30]
  wire [18:0] _alu_dest_io_op_T_119 = io_in_bits_op[20] | io_in_bits_op[21] | io_in_bits_op[22] | io_in_bits_op[23] ? 19'h40
     : _alu_dest_io_op_T_118; // @[EXU.scala 101:30]
  wire [18:0] _alu_dest_io_op_T_120 = io_in_bits_op[12] | io_in_bits_op[13] | io_in_bits_op[14] | io_in_bits_op[15] ? 19'h20
     : _alu_dest_io_op_T_119; // @[EXU.scala 100:30]
  wire [18:0] _alu_dest_io_op_T_121 = io_in_bits_op[10] | io_in_bits_op[11] ? 19'h10 : _alu_dest_io_op_T_120; // @[EXU.scala 99:30]
  wire [18:0] _alu_dest_io_op_T_122 = io_in_bits_op[8] | io_in_bits_op[9] | io_in_bits_op[64] ? 19'h8 :
    _alu_dest_io_op_T_121; // @[EXU.scala 98:30]
  wire [18:0] _alu_dest_io_op_T_123 = io_in_bits_op[6] | io_in_bits_op[7] ? 19'h4 : _alu_dest_io_op_T_122; // @[EXU.scala 97:30]
  wire [18:0] _alu_dest_io_op_T_124 = io_in_bits_op[4] | io_in_bits_op[5] ? 19'h2 : _alu_dest_io_op_T_123; // @[EXU.scala 96:30]
  wire [31:0] io_out_bits_gpr_val_w_hi = alu_dest_io_result[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [31:0] io_out_bits_gpr_val_w_lo = alu_dest_io_result[31:0]; // @[EXU.scala 119:303]
  wire [63:0] _io_out_bits_gpr_val_w_T_25 = {io_out_bits_gpr_val_w_hi,io_out_bits_gpr_val_w_lo}; // @[Cat.scala 30:58]
  wire [31:0] io_out_bits_gpr_val_w_lo_1 = alu_dest_io_result[63:32]; // @[EXU.scala 120:116]
  wire [63:0] _io_out_bits_gpr_val_w_T_31 = {32'h0,io_out_bits_gpr_val_w_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _io_out_bits_gpr_val_w_T_35 = _io_csr_en_r_T_2 ? io_csr_val_r : alu_dest_io_result; // @[EXU.scala 121:26]
  wire [63:0] _io_out_bits_gpr_val_w_T_36 = io_in_bits_op[52] | io_in_bits_op[53] | io_in_bits_op[54] ?
    _io_out_bits_gpr_val_w_T_31 : _io_out_bits_gpr_val_w_T_35; // @[EXU.scala 120:26]
  wire [63:0] _io_out_bits_csr_val_w_T_2 = io_in_bits_op[64] ? alu_dest_io_result : 64'h0; // @[EXU.scala 125:26]
  wire  _alu_pc_io_src2_T_5 = ~alu_dest_io_result[0]; // @[EXU.scala 132:48]
  wire [63:0] _alu_pc_io_src2_T_23 = io_in_bits_op[37] ? src2 : 64'h4; // @[EXU.scala 138:28]
  wire [63:0] _alu_pc_io_src2_T_24 = io_in_bits_op[36] ? src1 : _alu_pc_io_src2_T_23; // @[EXU.scala 137:28]
  wire [63:0] _alu_pc_io_src2_T_25 = io_in_bits_op[35] & alu_dest_io_result[0] ? dest : _alu_pc_io_src2_T_24; // @[EXU.scala 136:28]
  wire [63:0] _alu_pc_io_src2_T_26 = io_in_bits_op[34] & alu_dest_io_result[0] ? dest : _alu_pc_io_src2_T_25; // @[EXU.scala 135:28]
  wire [63:0] _alu_pc_io_src2_T_27 = io_in_bits_op[33] & _alu_pc_io_src2_T_5 ? dest : _alu_pc_io_src2_T_26; // @[EXU.scala 134:28]
  wire [63:0] _alu_pc_io_src2_T_28 = io_in_bits_op[32] & _alu_pc_io_src2_T_5 ? dest : _alu_pc_io_src2_T_27; // @[EXU.scala 133:28]
  wire [63:0] _alu_pc_io_src2_T_29 = io_in_bits_op[31] & ~alu_dest_io_result[0] ? dest : _alu_pc_io_src2_T_28; // @[EXU.scala 132:28]
  wire [10:0] _alu_pc_io_op_T_1 = io_in_bits_op[37] ? 11'h400 : 11'h1; // @[EXU.scala 140:28]
  ebreak ebreak1 ( // @[EXU.scala 32:27]
    .en_break(ebreak1_en_break),
    .clk(ebreak1_clk)
  );
  ALU alu_dest ( // @[EXU.scala 41:28]
    .io_src1(alu_dest_io_src1),
    .io_src2(alu_dest_io_src2),
    .io_op(alu_dest_io_op),
    .io_result(alu_dest_io_result)
  );
  ALU alu_pc ( // @[EXU.scala 42:26]
    .io_src1(alu_pc_io_src1),
    .io_src2(alu_pc_io_src2),
    .io_op(alu_pc_io_op),
    .io_result(alu_pc_io_result)
  );
  assign io_in_ready = io_out_ready; // @[EXU.scala 28:20]
  assign io_out_valid = io_in_valid; // @[EXU.scala 29:21]
  assign io_out_bits_pin_raddr = _io_out_bits_pin_raddr_T_13[31:0]; // @[EXU.scala 74:30]
  assign io_out_bits_pin_waddr = _io_out_bits_pin_waddr_T_7[31:0]; // @[EXU.scala 76:30]
  assign io_out_bits_pin_wdata = _io_out_bits_pin_waddr_T_6 ? io_gpr_val_r2 : 64'h0; // @[EXU.scala 77:35]
  assign io_out_bits_pin_wmask = _io_out_bits_pin_wmask_T_11[7:0]; // @[EXU.scala 78:30]
  assign io_out_bits_op = io_in_bits_op; // @[EXU.scala 144:23]
  assign io_out_bits_pc_dnpc = io_in_bits_op[65] | io_in_bits_op[66] ? io_csr_val_r : alu_pc_io_result; // @[EXU.scala 142:33]
  assign io_out_bits_gpr_idx_w = dest[4:0]; // @[EXU.scala 49:30]
  assign io_out_bits_gpr_en_w = io_in_bits_typ[0] | io_in_bits_typ[1] | io_in_bits_typ[3] | io_in_bits_typ[5]; // @[EXU.scala 48:89]
  assign io_out_bits_gpr_val_w = io_in_bits_op[1] | io_in_bits_op[3] | io_in_bits_op[5] | io_in_bits_op[13] |
    io_in_bits_op[15] | io_in_bits_op[17] | io_in_bits_op[21] | io_in_bits_op[23] | io_in_bits_op[51] | io_in_bits_op[56
    ] | io_in_bits_op[60] | io_in_bits_op[62] ? _io_out_bits_gpr_val_w_T_25 : _io_out_bits_gpr_val_w_T_36; // @[EXU.scala 119:35]
  assign io_out_bits_csr_en_w = io_in_bits_op[63] | io_in_bits_op[64]; // @[EXU.scala 53:53]
  assign io_out_bits_csr_idx_w = _io_csr_idx_r_T_3[11:0]; // @[EXU.scala 54:30]
  assign io_out_bits_csr_val_w = io_in_bits_op[63] ? src1 : _io_out_bits_csr_val_w_T_2; // @[EXU.scala 124:35]
  assign io_out_bits_csr_no = {{62'd0}, _io_out_bits_csr_no_T_3}; // @[EXU.scala 55:32]
  assign io_out_bits_csr_epc = io_pc; // @[EXU.scala 58:28]
  assign io_gpr_idx_r1 = io_in_bits_rs1; // @[EXU.scala 46:22]
  assign io_gpr_idx_r2 = io_in_bits_rs2; // @[EXU.scala 47:22]
  assign io_gpr_en_r1 = io_in_bits_typ[0] | io_in_bits_typ[2] | io_in_bits_typ[4] | io_in_bits_typ[5]; // @[EXU.scala 44:81]
  assign io_gpr_en_r2 = io_in_bits_typ[2] | io_in_bits_typ[4] | io_in_bits_typ[5]; // @[EXU.scala 45:63]
  assign io_csr_idx_r = _io_csr_idx_r_T_3[11:0]; // @[EXU.scala 52:21]
  assign ebreak1_en_break = io_in_bits_op[49] & _ebreak1_io_en_break_T_1; // @[EXU.scala 33:47]
  assign ebreak1_clk = clock; // @[EXU.scala 34:23]
  assign alu_dest_io_src1 = io_in_bits_op[13] | io_in_bits_op[21] | io_in_bits_op[23] | io_in_bits_op[56] |
    io_in_bits_op[58] | io_in_bits_op[60] | io_in_bits_op[62] ? _alu_dest_io_src1_T_13 : _alu_dest_io_src1_T_24; // @[EXU.scala 84:30]
  assign alu_dest_io_src2 = io_in_bits_op[13] | io_in_bits_op[17] | io_in_bits_op[21] ? _alu_dest_io_src2_T_5 :
    _alu_dest_io_src2_T_30; // @[EXU.scala 88:30]
  assign alu_dest_io_op = io_in_bits_op[0] | io_in_bits_op[1] | io_in_bits_op[2] | io_in_bits_op[3] | io_in_bits_op[24]
     | io_in_bits_op[25] | io_in_bits_op[36] | io_in_bits_op[37] | io_in_bits_op[38] | io_in_bits_op[39] | io_in_bits_op
    [40] | io_in_bits_op[41] | io_in_bits_op[42] | io_in_bits_op[43] | io_in_bits_op[44] | io_in_bits_op[45] |
    io_in_bits_op[46] | io_in_bits_op[47] | io_in_bits_op[48] ? 19'h1 : _alu_dest_io_op_T_124; // @[EXU.scala 95:30]
  assign alu_pc_io_src1 = io_in_bits_op[37] ? src1 : io_pc; // @[EXU.scala 130:28]
  assign alu_pc_io_src2 = io_in_bits_op[30] & alu_dest_io_result[0] ? dest : _alu_pc_io_src2_T_29; // @[EXU.scala 131:28]
  assign alu_pc_io_op = {{8'd0}, _alu_pc_io_op_T_1}; // @[EXU.scala 140:28]
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
  input  [79:0] io_in_bits_op,
  input  [63:0] io_in_bits_pc_dnpc,
  input  [4:0]  io_in_bits_gpr_idx_w,
  input         io_in_bits_gpr_en_w,
  input  [63:0] io_in_bits_gpr_val_w,
  input         io_in_bits_csr_en_w,
  input  [11:0] io_in_bits_csr_idx_w,
  input  [63:0] io_in_bits_csr_val_w,
  input  [63:0] io_in_bits_csr_no,
  input  [63:0] io_in_bits_csr_epc,
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
  output [63:0] io_gpr_val_w,
  output        io_csr_en_w,
  output [11:0] io_csr_idx_w,
  output [63:0] io_csr_val_w,
  output [63:0] io_csr_no,
  output [63:0] io_csr_epc,
  output        io_out_valid,
  output [63:0] io_out_bits_pc_dnpc
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg  rstate; // @[LSU.scala 19:23]
  wire  _rstate_T = io_lm_ar_ready & io_lm_ar_valid; // @[Decoupled.scala 40:37]
  wire  _rstate_T_2 = io_lm_r_ready & io_lm_r_valid; // @[Decoupled.scala 40:37]
  reg  wstate; // @[LSU.scala 24:23]
  wire  _wstate_T = io_lm_aw_ready & io_lm_aw_valid; // @[Decoupled.scala 40:37]
  wire  _wstate_T_2 = io_lm_w_ready & io_lm_w_valid; // @[Decoupled.scala 40:37]
  wire  _io_lm_ar_valid_T = ~rstate; // @[LSU.scala 31:27]
  wire  _io_lm_ar_valid_T_2 = ~reset; // @[LSU.scala 31:40]
  wire  _io_lm_aw_valid_T = ~wstate; // @[LSU.scala 34:27]
  wire [55:0] io_gpr_val_w_hi = io_lm_r_bits_data[7] ? 56'hffffffffffffff : 56'h0; // @[Bitwise.scala 72:12]
  wire [7:0] io_gpr_val_w_lo = io_lm_r_bits_data[7:0]; // @[LSU.scala 46:96]
  wire [63:0] _io_gpr_val_w_T_3 = {io_gpr_val_w_hi,io_gpr_val_w_lo}; // @[Cat.scala 30:58]
  wire [47:0] io_gpr_val_w_hi_1 = io_lm_r_bits_data[15] ? 48'hffffffffffff : 48'h0; // @[Bitwise.scala 72:12]
  wire [15:0] io_gpr_val_w_lo_1 = io_lm_r_bits_data[15:0]; // @[LSU.scala 47:97]
  wire [63:0] _io_gpr_val_w_T_7 = {io_gpr_val_w_hi_1,io_gpr_val_w_lo_1}; // @[Cat.scala 30:58]
  wire [31:0] io_gpr_val_w_hi_2 = io_lm_r_bits_data[31] ? 32'hffffffff : 32'h0; // @[Bitwise.scala 72:12]
  wire [31:0] io_gpr_val_w_lo_2 = io_lm_r_bits_data[31:0]; // @[LSU.scala 48:97]
  wire [63:0] _io_gpr_val_w_T_11 = {io_gpr_val_w_hi_2,io_gpr_val_w_lo_2}; // @[Cat.scala 30:58]
  wire [63:0] _io_gpr_val_w_T_14 = {56'h0,io_gpr_val_w_lo}; // @[Cat.scala 30:58]
  wire [63:0] _io_gpr_val_w_T_16 = {48'h0,io_gpr_val_w_lo_1}; // @[Cat.scala 30:58]
  wire [63:0] _io_gpr_val_w_T_18 = {32'h0,io_gpr_val_w_lo_2}; // @[Cat.scala 30:58]
  wire [63:0] _io_gpr_val_w_T_19 = io_in_bits_op[48] ? _io_gpr_val_w_T_18 : io_in_bits_gpr_val_w; // @[LSU.scala 52:26]
  wire [63:0] _io_gpr_val_w_T_20 = io_in_bits_op[47] ? _io_gpr_val_w_T_16 : _io_gpr_val_w_T_19; // @[LSU.scala 51:26]
  wire [63:0] _io_gpr_val_w_T_21 = io_in_bits_op[46] ? _io_gpr_val_w_T_14 : _io_gpr_val_w_T_20; // @[LSU.scala 50:26]
  wire [63:0] _io_gpr_val_w_T_22 = io_in_bits_op[41] ? io_lm_r_bits_data : _io_gpr_val_w_T_21; // @[LSU.scala 49:26]
  wire [63:0] _io_gpr_val_w_T_23 = io_in_bits_op[40] ? _io_gpr_val_w_T_11 : _io_gpr_val_w_T_22; // @[LSU.scala 48:26]
  wire [63:0] _io_gpr_val_w_T_24 = io_in_bits_op[39] ? _io_gpr_val_w_T_7 : _io_gpr_val_w_T_23; // @[LSU.scala 47:26]
  assign io_in_ready = _io_lm_ar_valid_T & _io_lm_aw_valid_T; // @[LSU.scala 41:33]
  assign io_lm_ar_valid = ~rstate & ~reset & io_in_valid; // @[LSU.scala 31:54]
  assign io_lm_ar_bits_addr = io_in_bits_pin_raddr; // @[LSU.scala 30:21]
  assign io_lm_r_ready = rstate; // @[LSU.scala 32:26]
  assign io_lm_aw_valid = ~wstate & _io_lm_ar_valid_T_2 & io_in_valid; // @[LSU.scala 34:54]
  assign io_lm_aw_bits_addr = io_in_bits_pin_waddr; // @[LSU.scala 33:21]
  assign io_lm_w_valid = wstate & _io_lm_ar_valid_T_2; // @[LSU.scala 37:37]
  assign io_lm_w_bits_data = io_in_bits_pin_wdata; // @[LSU.scala 35:20]
  assign io_lm_w_bits_strb = io_in_bits_pin_wmask; // @[LSU.scala 36:20]
  assign io_gpr_idx_w = io_in_bits_gpr_idx_w; // @[LSU.scala 45:15]
  assign io_gpr_en_w = io_in_bits_gpr_en_w & _rstate_T_2; // @[LSU.scala 44:35]
  assign io_gpr_val_w = io_in_bits_op[38] ? _io_gpr_val_w_T_3 : _io_gpr_val_w_T_24; // @[LSU.scala 46:26]
  assign io_csr_en_w = io_in_bits_csr_en_w & _rstate_T_2; // @[LSU.scala 55:35]
  assign io_csr_idx_w = io_in_bits_csr_idx_w; // @[LSU.scala 56:15]
  assign io_csr_val_w = io_in_bits_csr_val_w; // @[LSU.scala 57:15]
  assign io_csr_no = _rstate_T_2 ? io_in_bits_csr_no : 64'h0; // @[LSU.scala 58:17]
  assign io_csr_epc = io_in_bits_csr_epc; // @[LSU.scala 59:13]
  assign io_out_valid = io_lm_r_ready & io_lm_r_valid; // @[Decoupled.scala 40:37]
  assign io_out_bits_pc_dnpc = io_in_bits_pc_dnpc; // @[LSU.scala 61:22]
  always @(posedge clock) begin
    if (reset) begin // @[LSU.scala 19:23]
      rstate <= 1'h0; // @[LSU.scala 19:23]
    end else if (rstate) begin // @[Mux.scala 80:57]
      if (_rstate_T_2) begin // @[LSU.scala 22:19]
        rstate <= 1'h0;
      end else begin
        rstate <= 1'h1;
      end
    end else begin
      rstate <= _rstate_T;
    end
    if (reset) begin // @[LSU.scala 24:23]
      wstate <= 1'h0; // @[LSU.scala 24:23]
    end else if (wstate) begin // @[Mux.scala 80:57]
      if (_wstate_T_2) begin // @[LSU.scala 27:19]
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
  input  [11:0] io_r_idx_r,
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
  wire [63:0] _GEN_1 = 2'h1 == map_r ? csr_1 : csr_0; // @[CSR.scala 44:18 CSR.scala 44:18]
  wire [63:0] _GEN_2 = 2'h2 == map_r ? csr_2 : _GEN_1; // @[CSR.scala 44:18 CSR.scala 44:18]
  wire [63:0] _GEN_3 = 2'h3 == map_r ? csr_3 : _GEN_2; // @[CSR.scala 44:18 CSR.scala 44:18]
  wire [63:0] _io_r_val_r_T_3 = io_w_en_w ? _GEN_3 : 64'h0; // @[CSR.scala 44:18]
  wire [63:0] _io_r_val_r_T_4 = io_w_no == 64'h2 ? csr_2 : _io_r_val_r_T_3; // @[CSR.scala 43:18]
  wire [63:0] _GEN_5 = 2'h1 == map_w ? csr_1 : csr_0; // @[CSR.scala 46:20 CSR.scala 46:20]
  wire [63:0] _GEN_6 = 2'h2 == map_w ? csr_2 : _GEN_5; // @[CSR.scala 46:20 CSR.scala 46:20]
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
module LFSR_8(
  input        clock,
  input        reset,
  output [7:0] io_out
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  reg [7:0] x; // @[LFSR_8.scala 9:16]
  wire  x_hi = x[4] ^ x[3] ^ x[2] ^ x[0]; // @[LFSR_8.scala 10:25]
  wire [6:0] x_lo = x[7:1]; // @[LFSR_8.scala 10:32]
  wire [7:0] _x_T_6 = {x_hi,x_lo}; // @[Cat.scala 30:58]
  assign io_out = x; // @[LFSR_8.scala 11:9]
  always @(posedge clock) begin
    if (reset) begin // @[LFSR_8.scala 9:16]
      x <= 8'h1; // @[LFSR_8.scala 9:16]
    end else begin
      x <= _x_T_6; // @[LFSR_8.scala 10:4]
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
module Cache(
  input          clock,
  input          reset,
  output         io_in_ar_ready,
  input          io_in_ar_valid,
  input  [31:0]  io_in_ar_bits_addr,
  output         io_in_r_valid,
  output [63:0]  io_in_r_bits_data,
  input          io_mem_ar_ready,
  output         io_mem_ar_valid,
  output [31:0]  io_mem_ar_bits_addr,
  output         io_mem_r_ready,
  input          io_mem_r_valid,
  input  [63:0]  io_mem_r_bits_data,
  input          io_mem_aw_ready,
  output         io_mem_aw_valid,
  output [31:0]  io_mem_aw_bits_addr,
  input          io_mem_w_ready,
  output         io_mem_w_valid,
  output [63:0]  io_mem_w_bits_data,
  output         io_mem_w_bits_last,
  output         io_mem_b_ready,
  input          io_mem_b_valid,
  input  [127:0] io_ram_bits_Q,
  output         io_ram_bits_CEN,
  output         io_ram_bits_WEN,
  output [7:0]   io_ram_bits_A,
  output [127:0] io_ram_bits_D
);
`ifdef RANDOMIZE_MEM_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
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
  reg [127:0] _RAND_259;
  reg [31:0] _RAND_260;
  reg [31:0] _RAND_261;
  reg [31:0] _RAND_262;
  reg [31:0] _RAND_263;
  reg [31:0] _RAND_264;
  reg [31:0] _RAND_265;
  reg [63:0] _RAND_266;
`endif // RANDOMIZE_REG_INIT
  reg [41:0] cache_tag [0:127]; // @[cache.scala 23:31]
  wire [41:0] cache_tag_tag_read_MPORT_data; // @[cache.scala 23:31]
  wire [6:0] cache_tag_tag_read_MPORT_addr; // @[cache.scala 23:31]
  wire [41:0] cache_tag_MPORT_data; // @[cache.scala 23:31]
  wire [6:0] cache_tag_MPORT_addr; // @[cache.scala 23:31]
  wire  cache_tag_MPORT_mask; // @[cache.scala 23:31]
  wire  cache_tag_MPORT_en; // @[cache.scala 23:31]
  reg  cache_tag_tag_read_MPORT_en_pipe_0;
  reg [6:0] cache_tag_tag_read_MPORT_addr_pipe_0;
  wire  lfsr8_clock; // @[cache.scala 61:19]
  wire  lfsr8_reset; // @[cache.scala 61:19]
  wire [7:0] lfsr8_io_out; // @[cache.scala 61:19]
  reg  valid_0_0; // @[cache.scala 24:22]
  reg  valid_0_1; // @[cache.scala 24:22]
  reg  valid_1_0; // @[cache.scala 24:22]
  reg  valid_1_1; // @[cache.scala 24:22]
  reg  valid_2_0; // @[cache.scala 24:22]
  reg  valid_2_1; // @[cache.scala 24:22]
  reg  valid_3_0; // @[cache.scala 24:22]
  reg  valid_3_1; // @[cache.scala 24:22]
  reg  valid_4_0; // @[cache.scala 24:22]
  reg  valid_4_1; // @[cache.scala 24:22]
  reg  valid_5_0; // @[cache.scala 24:22]
  reg  valid_5_1; // @[cache.scala 24:22]
  reg  valid_6_0; // @[cache.scala 24:22]
  reg  valid_6_1; // @[cache.scala 24:22]
  reg  valid_7_0; // @[cache.scala 24:22]
  reg  valid_7_1; // @[cache.scala 24:22]
  reg  valid_8_0; // @[cache.scala 24:22]
  reg  valid_8_1; // @[cache.scala 24:22]
  reg  valid_9_0; // @[cache.scala 24:22]
  reg  valid_9_1; // @[cache.scala 24:22]
  reg  valid_10_0; // @[cache.scala 24:22]
  reg  valid_10_1; // @[cache.scala 24:22]
  reg  valid_11_0; // @[cache.scala 24:22]
  reg  valid_11_1; // @[cache.scala 24:22]
  reg  valid_12_0; // @[cache.scala 24:22]
  reg  valid_12_1; // @[cache.scala 24:22]
  reg  valid_13_0; // @[cache.scala 24:22]
  reg  valid_13_1; // @[cache.scala 24:22]
  reg  valid_14_0; // @[cache.scala 24:22]
  reg  valid_14_1; // @[cache.scala 24:22]
  reg  valid_15_0; // @[cache.scala 24:22]
  reg  valid_15_1; // @[cache.scala 24:22]
  reg  valid_16_0; // @[cache.scala 24:22]
  reg  valid_16_1; // @[cache.scala 24:22]
  reg  valid_17_0; // @[cache.scala 24:22]
  reg  valid_17_1; // @[cache.scala 24:22]
  reg  valid_18_0; // @[cache.scala 24:22]
  reg  valid_18_1; // @[cache.scala 24:22]
  reg  valid_19_0; // @[cache.scala 24:22]
  reg  valid_19_1; // @[cache.scala 24:22]
  reg  valid_20_0; // @[cache.scala 24:22]
  reg  valid_20_1; // @[cache.scala 24:22]
  reg  valid_21_0; // @[cache.scala 24:22]
  reg  valid_21_1; // @[cache.scala 24:22]
  reg  valid_22_0; // @[cache.scala 24:22]
  reg  valid_22_1; // @[cache.scala 24:22]
  reg  valid_23_0; // @[cache.scala 24:22]
  reg  valid_23_1; // @[cache.scala 24:22]
  reg  valid_24_0; // @[cache.scala 24:22]
  reg  valid_24_1; // @[cache.scala 24:22]
  reg  valid_25_0; // @[cache.scala 24:22]
  reg  valid_25_1; // @[cache.scala 24:22]
  reg  valid_26_0; // @[cache.scala 24:22]
  reg  valid_26_1; // @[cache.scala 24:22]
  reg  valid_27_0; // @[cache.scala 24:22]
  reg  valid_27_1; // @[cache.scala 24:22]
  reg  valid_28_0; // @[cache.scala 24:22]
  reg  valid_28_1; // @[cache.scala 24:22]
  reg  valid_29_0; // @[cache.scala 24:22]
  reg  valid_29_1; // @[cache.scala 24:22]
  reg  valid_30_0; // @[cache.scala 24:22]
  reg  valid_30_1; // @[cache.scala 24:22]
  reg  valid_31_0; // @[cache.scala 24:22]
  reg  valid_31_1; // @[cache.scala 24:22]
  reg  valid_32_0; // @[cache.scala 24:22]
  reg  valid_32_1; // @[cache.scala 24:22]
  reg  valid_33_0; // @[cache.scala 24:22]
  reg  valid_33_1; // @[cache.scala 24:22]
  reg  valid_34_0; // @[cache.scala 24:22]
  reg  valid_34_1; // @[cache.scala 24:22]
  reg  valid_35_0; // @[cache.scala 24:22]
  reg  valid_35_1; // @[cache.scala 24:22]
  reg  valid_36_0; // @[cache.scala 24:22]
  reg  valid_36_1; // @[cache.scala 24:22]
  reg  valid_37_0; // @[cache.scala 24:22]
  reg  valid_37_1; // @[cache.scala 24:22]
  reg  valid_38_0; // @[cache.scala 24:22]
  reg  valid_38_1; // @[cache.scala 24:22]
  reg  valid_39_0; // @[cache.scala 24:22]
  reg  valid_39_1; // @[cache.scala 24:22]
  reg  valid_40_0; // @[cache.scala 24:22]
  reg  valid_40_1; // @[cache.scala 24:22]
  reg  valid_41_0; // @[cache.scala 24:22]
  reg  valid_41_1; // @[cache.scala 24:22]
  reg  valid_42_0; // @[cache.scala 24:22]
  reg  valid_42_1; // @[cache.scala 24:22]
  reg  valid_43_0; // @[cache.scala 24:22]
  reg  valid_43_1; // @[cache.scala 24:22]
  reg  valid_44_0; // @[cache.scala 24:22]
  reg  valid_44_1; // @[cache.scala 24:22]
  reg  valid_45_0; // @[cache.scala 24:22]
  reg  valid_45_1; // @[cache.scala 24:22]
  reg  valid_46_0; // @[cache.scala 24:22]
  reg  valid_46_1; // @[cache.scala 24:22]
  reg  valid_47_0; // @[cache.scala 24:22]
  reg  valid_47_1; // @[cache.scala 24:22]
  reg  valid_48_0; // @[cache.scala 24:22]
  reg  valid_48_1; // @[cache.scala 24:22]
  reg  valid_49_0; // @[cache.scala 24:22]
  reg  valid_49_1; // @[cache.scala 24:22]
  reg  valid_50_0; // @[cache.scala 24:22]
  reg  valid_50_1; // @[cache.scala 24:22]
  reg  valid_51_0; // @[cache.scala 24:22]
  reg  valid_51_1; // @[cache.scala 24:22]
  reg  valid_52_0; // @[cache.scala 24:22]
  reg  valid_52_1; // @[cache.scala 24:22]
  reg  valid_53_0; // @[cache.scala 24:22]
  reg  valid_53_1; // @[cache.scala 24:22]
  reg  valid_54_0; // @[cache.scala 24:22]
  reg  valid_54_1; // @[cache.scala 24:22]
  reg  valid_55_0; // @[cache.scala 24:22]
  reg  valid_55_1; // @[cache.scala 24:22]
  reg  valid_56_0; // @[cache.scala 24:22]
  reg  valid_56_1; // @[cache.scala 24:22]
  reg  valid_57_0; // @[cache.scala 24:22]
  reg  valid_57_1; // @[cache.scala 24:22]
  reg  valid_58_0; // @[cache.scala 24:22]
  reg  valid_58_1; // @[cache.scala 24:22]
  reg  valid_59_0; // @[cache.scala 24:22]
  reg  valid_59_1; // @[cache.scala 24:22]
  reg  valid_60_0; // @[cache.scala 24:22]
  reg  valid_60_1; // @[cache.scala 24:22]
  reg  valid_61_0; // @[cache.scala 24:22]
  reg  valid_61_1; // @[cache.scala 24:22]
  reg  valid_62_0; // @[cache.scala 24:22]
  reg  valid_62_1; // @[cache.scala 24:22]
  reg  valid_63_0; // @[cache.scala 24:22]
  reg  valid_63_1; // @[cache.scala 24:22]
  reg  valid_64_0; // @[cache.scala 24:22]
  reg  valid_64_1; // @[cache.scala 24:22]
  reg  valid_65_0; // @[cache.scala 24:22]
  reg  valid_65_1; // @[cache.scala 24:22]
  reg  valid_66_0; // @[cache.scala 24:22]
  reg  valid_66_1; // @[cache.scala 24:22]
  reg  valid_67_0; // @[cache.scala 24:22]
  reg  valid_67_1; // @[cache.scala 24:22]
  reg  valid_68_0; // @[cache.scala 24:22]
  reg  valid_68_1; // @[cache.scala 24:22]
  reg  valid_69_0; // @[cache.scala 24:22]
  reg  valid_69_1; // @[cache.scala 24:22]
  reg  valid_70_0; // @[cache.scala 24:22]
  reg  valid_70_1; // @[cache.scala 24:22]
  reg  valid_71_0; // @[cache.scala 24:22]
  reg  valid_71_1; // @[cache.scala 24:22]
  reg  valid_72_0; // @[cache.scala 24:22]
  reg  valid_72_1; // @[cache.scala 24:22]
  reg  valid_73_0; // @[cache.scala 24:22]
  reg  valid_73_1; // @[cache.scala 24:22]
  reg  valid_74_0; // @[cache.scala 24:22]
  reg  valid_74_1; // @[cache.scala 24:22]
  reg  valid_75_0; // @[cache.scala 24:22]
  reg  valid_75_1; // @[cache.scala 24:22]
  reg  valid_76_0; // @[cache.scala 24:22]
  reg  valid_76_1; // @[cache.scala 24:22]
  reg  valid_77_0; // @[cache.scala 24:22]
  reg  valid_77_1; // @[cache.scala 24:22]
  reg  valid_78_0; // @[cache.scala 24:22]
  reg  valid_78_1; // @[cache.scala 24:22]
  reg  valid_79_0; // @[cache.scala 24:22]
  reg  valid_79_1; // @[cache.scala 24:22]
  reg  valid_80_0; // @[cache.scala 24:22]
  reg  valid_80_1; // @[cache.scala 24:22]
  reg  valid_81_0; // @[cache.scala 24:22]
  reg  valid_81_1; // @[cache.scala 24:22]
  reg  valid_82_0; // @[cache.scala 24:22]
  reg  valid_82_1; // @[cache.scala 24:22]
  reg  valid_83_0; // @[cache.scala 24:22]
  reg  valid_83_1; // @[cache.scala 24:22]
  reg  valid_84_0; // @[cache.scala 24:22]
  reg  valid_84_1; // @[cache.scala 24:22]
  reg  valid_85_0; // @[cache.scala 24:22]
  reg  valid_85_1; // @[cache.scala 24:22]
  reg  valid_86_0; // @[cache.scala 24:22]
  reg  valid_86_1; // @[cache.scala 24:22]
  reg  valid_87_0; // @[cache.scala 24:22]
  reg  valid_87_1; // @[cache.scala 24:22]
  reg  valid_88_0; // @[cache.scala 24:22]
  reg  valid_88_1; // @[cache.scala 24:22]
  reg  valid_89_0; // @[cache.scala 24:22]
  reg  valid_89_1; // @[cache.scala 24:22]
  reg  valid_90_0; // @[cache.scala 24:22]
  reg  valid_90_1; // @[cache.scala 24:22]
  reg  valid_91_0; // @[cache.scala 24:22]
  reg  valid_91_1; // @[cache.scala 24:22]
  reg  valid_92_0; // @[cache.scala 24:22]
  reg  valid_92_1; // @[cache.scala 24:22]
  reg  valid_93_0; // @[cache.scala 24:22]
  reg  valid_93_1; // @[cache.scala 24:22]
  reg  valid_94_0; // @[cache.scala 24:22]
  reg  valid_94_1; // @[cache.scala 24:22]
  reg  valid_95_0; // @[cache.scala 24:22]
  reg  valid_95_1; // @[cache.scala 24:22]
  reg  valid_96_0; // @[cache.scala 24:22]
  reg  valid_96_1; // @[cache.scala 24:22]
  reg  valid_97_0; // @[cache.scala 24:22]
  reg  valid_97_1; // @[cache.scala 24:22]
  reg  valid_98_0; // @[cache.scala 24:22]
  reg  valid_98_1; // @[cache.scala 24:22]
  reg  valid_99_0; // @[cache.scala 24:22]
  reg  valid_99_1; // @[cache.scala 24:22]
  reg  valid_100_0; // @[cache.scala 24:22]
  reg  valid_100_1; // @[cache.scala 24:22]
  reg  valid_101_0; // @[cache.scala 24:22]
  reg  valid_101_1; // @[cache.scala 24:22]
  reg  valid_102_0; // @[cache.scala 24:22]
  reg  valid_102_1; // @[cache.scala 24:22]
  reg  valid_103_0; // @[cache.scala 24:22]
  reg  valid_103_1; // @[cache.scala 24:22]
  reg  valid_104_0; // @[cache.scala 24:22]
  reg  valid_104_1; // @[cache.scala 24:22]
  reg  valid_105_0; // @[cache.scala 24:22]
  reg  valid_105_1; // @[cache.scala 24:22]
  reg  valid_106_0; // @[cache.scala 24:22]
  reg  valid_106_1; // @[cache.scala 24:22]
  reg  valid_107_0; // @[cache.scala 24:22]
  reg  valid_107_1; // @[cache.scala 24:22]
  reg  valid_108_0; // @[cache.scala 24:22]
  reg  valid_108_1; // @[cache.scala 24:22]
  reg  valid_109_0; // @[cache.scala 24:22]
  reg  valid_109_1; // @[cache.scala 24:22]
  reg  valid_110_0; // @[cache.scala 24:22]
  reg  valid_110_1; // @[cache.scala 24:22]
  reg  valid_111_0; // @[cache.scala 24:22]
  reg  valid_111_1; // @[cache.scala 24:22]
  reg  valid_112_0; // @[cache.scala 24:22]
  reg  valid_112_1; // @[cache.scala 24:22]
  reg  valid_113_0; // @[cache.scala 24:22]
  reg  valid_113_1; // @[cache.scala 24:22]
  reg  valid_114_0; // @[cache.scala 24:22]
  reg  valid_114_1; // @[cache.scala 24:22]
  reg  valid_115_0; // @[cache.scala 24:22]
  reg  valid_115_1; // @[cache.scala 24:22]
  reg  valid_116_0; // @[cache.scala 24:22]
  reg  valid_116_1; // @[cache.scala 24:22]
  reg  valid_117_0; // @[cache.scala 24:22]
  reg  valid_117_1; // @[cache.scala 24:22]
  reg  valid_118_0; // @[cache.scala 24:22]
  reg  valid_118_1; // @[cache.scala 24:22]
  reg  valid_119_0; // @[cache.scala 24:22]
  reg  valid_119_1; // @[cache.scala 24:22]
  reg  valid_120_0; // @[cache.scala 24:22]
  reg  valid_120_1; // @[cache.scala 24:22]
  reg  valid_121_0; // @[cache.scala 24:22]
  reg  valid_121_1; // @[cache.scala 24:22]
  reg  valid_122_0; // @[cache.scala 24:22]
  reg  valid_122_1; // @[cache.scala 24:22]
  reg  valid_123_0; // @[cache.scala 24:22]
  reg  valid_123_1; // @[cache.scala 24:22]
  reg  valid_124_0; // @[cache.scala 24:22]
  reg  valid_124_1; // @[cache.scala 24:22]
  reg  valid_125_0; // @[cache.scala 24:22]
  reg  valid_125_1; // @[cache.scala 24:22]
  reg  valid_126_0; // @[cache.scala 24:22]
  reg  valid_126_1; // @[cache.scala 24:22]
  reg  valid_127_0; // @[cache.scala 24:22]
  reg  valid_127_1; // @[cache.scala 24:22]
  reg [127:0] buf_; // @[cache.scala 26:18]
  reg [31:0] addr; // @[cache.scala 28:21]
  wire [6:0] offset = {addr[3:0], 3'h0}; // @[cache.scala 29:41]
  wire [6:0] idx = addr[10:4]; // @[cache.scala 30:17]
  wire [20:0] tag = addr[31:11]; // @[cache.scala 31:17]
  reg [3:0] state; // @[cache.scala 37:23]
  reg [3:0] state_r; // @[cache.scala 38:24]
  reg [3:0] state_w; // @[cache.scala 39:24]
  wire [7:0] _idxh_T = {idx, 1'h0}; // @[cache.scala 41:17]
  wire [41:0] tag_read = cache_tag_tag_read_MPORT_data; // @[cache.scala 55:22 cache.scala 56:11]
  wire  _GEN_5 = 7'h1 == idx ? valid_1_0 : valid_0_0; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_6 = 7'h2 == idx ? valid_2_0 : _GEN_5; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_7 = 7'h3 == idx ? valid_3_0 : _GEN_6; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_8 = 7'h4 == idx ? valid_4_0 : _GEN_7; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_9 = 7'h5 == idx ? valid_5_0 : _GEN_8; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_10 = 7'h6 == idx ? valid_6_0 : _GEN_9; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_11 = 7'h7 == idx ? valid_7_0 : _GEN_10; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_12 = 7'h8 == idx ? valid_8_0 : _GEN_11; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_13 = 7'h9 == idx ? valid_9_0 : _GEN_12; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_14 = 7'ha == idx ? valid_10_0 : _GEN_13; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_15 = 7'hb == idx ? valid_11_0 : _GEN_14; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_16 = 7'hc == idx ? valid_12_0 : _GEN_15; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_17 = 7'hd == idx ? valid_13_0 : _GEN_16; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_18 = 7'he == idx ? valid_14_0 : _GEN_17; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_19 = 7'hf == idx ? valid_15_0 : _GEN_18; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_20 = 7'h10 == idx ? valid_16_0 : _GEN_19; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_21 = 7'h11 == idx ? valid_17_0 : _GEN_20; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_22 = 7'h12 == idx ? valid_18_0 : _GEN_21; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_23 = 7'h13 == idx ? valid_19_0 : _GEN_22; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_24 = 7'h14 == idx ? valid_20_0 : _GEN_23; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_25 = 7'h15 == idx ? valid_21_0 : _GEN_24; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_26 = 7'h16 == idx ? valid_22_0 : _GEN_25; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_27 = 7'h17 == idx ? valid_23_0 : _GEN_26; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_28 = 7'h18 == idx ? valid_24_0 : _GEN_27; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_29 = 7'h19 == idx ? valid_25_0 : _GEN_28; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_30 = 7'h1a == idx ? valid_26_0 : _GEN_29; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_31 = 7'h1b == idx ? valid_27_0 : _GEN_30; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_32 = 7'h1c == idx ? valid_28_0 : _GEN_31; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_33 = 7'h1d == idx ? valid_29_0 : _GEN_32; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_34 = 7'h1e == idx ? valid_30_0 : _GEN_33; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_35 = 7'h1f == idx ? valid_31_0 : _GEN_34; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_36 = 7'h20 == idx ? valid_32_0 : _GEN_35; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_37 = 7'h21 == idx ? valid_33_0 : _GEN_36; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_38 = 7'h22 == idx ? valid_34_0 : _GEN_37; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_39 = 7'h23 == idx ? valid_35_0 : _GEN_38; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_40 = 7'h24 == idx ? valid_36_0 : _GEN_39; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_41 = 7'h25 == idx ? valid_37_0 : _GEN_40; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_42 = 7'h26 == idx ? valid_38_0 : _GEN_41; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_43 = 7'h27 == idx ? valid_39_0 : _GEN_42; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_44 = 7'h28 == idx ? valid_40_0 : _GEN_43; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_45 = 7'h29 == idx ? valid_41_0 : _GEN_44; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_46 = 7'h2a == idx ? valid_42_0 : _GEN_45; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_47 = 7'h2b == idx ? valid_43_0 : _GEN_46; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_48 = 7'h2c == idx ? valid_44_0 : _GEN_47; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_49 = 7'h2d == idx ? valid_45_0 : _GEN_48; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_50 = 7'h2e == idx ? valid_46_0 : _GEN_49; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_51 = 7'h2f == idx ? valid_47_0 : _GEN_50; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_52 = 7'h30 == idx ? valid_48_0 : _GEN_51; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_53 = 7'h31 == idx ? valid_49_0 : _GEN_52; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_54 = 7'h32 == idx ? valid_50_0 : _GEN_53; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_55 = 7'h33 == idx ? valid_51_0 : _GEN_54; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_56 = 7'h34 == idx ? valid_52_0 : _GEN_55; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_57 = 7'h35 == idx ? valid_53_0 : _GEN_56; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_58 = 7'h36 == idx ? valid_54_0 : _GEN_57; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_59 = 7'h37 == idx ? valid_55_0 : _GEN_58; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_60 = 7'h38 == idx ? valid_56_0 : _GEN_59; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_61 = 7'h39 == idx ? valid_57_0 : _GEN_60; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_62 = 7'h3a == idx ? valid_58_0 : _GEN_61; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_63 = 7'h3b == idx ? valid_59_0 : _GEN_62; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_64 = 7'h3c == idx ? valid_60_0 : _GEN_63; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_65 = 7'h3d == idx ? valid_61_0 : _GEN_64; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_66 = 7'h3e == idx ? valid_62_0 : _GEN_65; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_67 = 7'h3f == idx ? valid_63_0 : _GEN_66; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_68 = 7'h40 == idx ? valid_64_0 : _GEN_67; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_69 = 7'h41 == idx ? valid_65_0 : _GEN_68; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_70 = 7'h42 == idx ? valid_66_0 : _GEN_69; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_71 = 7'h43 == idx ? valid_67_0 : _GEN_70; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_72 = 7'h44 == idx ? valid_68_0 : _GEN_71; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_73 = 7'h45 == idx ? valid_69_0 : _GEN_72; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_74 = 7'h46 == idx ? valid_70_0 : _GEN_73; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_75 = 7'h47 == idx ? valid_71_0 : _GEN_74; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_76 = 7'h48 == idx ? valid_72_0 : _GEN_75; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_77 = 7'h49 == idx ? valid_73_0 : _GEN_76; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_78 = 7'h4a == idx ? valid_74_0 : _GEN_77; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_79 = 7'h4b == idx ? valid_75_0 : _GEN_78; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_80 = 7'h4c == idx ? valid_76_0 : _GEN_79; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_81 = 7'h4d == idx ? valid_77_0 : _GEN_80; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_82 = 7'h4e == idx ? valid_78_0 : _GEN_81; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_83 = 7'h4f == idx ? valid_79_0 : _GEN_82; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_84 = 7'h50 == idx ? valid_80_0 : _GEN_83; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_85 = 7'h51 == idx ? valid_81_0 : _GEN_84; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_86 = 7'h52 == idx ? valid_82_0 : _GEN_85; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_87 = 7'h53 == idx ? valid_83_0 : _GEN_86; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_88 = 7'h54 == idx ? valid_84_0 : _GEN_87; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_89 = 7'h55 == idx ? valid_85_0 : _GEN_88; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_90 = 7'h56 == idx ? valid_86_0 : _GEN_89; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_91 = 7'h57 == idx ? valid_87_0 : _GEN_90; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_92 = 7'h58 == idx ? valid_88_0 : _GEN_91; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_93 = 7'h59 == idx ? valid_89_0 : _GEN_92; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_94 = 7'h5a == idx ? valid_90_0 : _GEN_93; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_95 = 7'h5b == idx ? valid_91_0 : _GEN_94; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_96 = 7'h5c == idx ? valid_92_0 : _GEN_95; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_97 = 7'h5d == idx ? valid_93_0 : _GEN_96; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_98 = 7'h5e == idx ? valid_94_0 : _GEN_97; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_99 = 7'h5f == idx ? valid_95_0 : _GEN_98; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_100 = 7'h60 == idx ? valid_96_0 : _GEN_99; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_101 = 7'h61 == idx ? valid_97_0 : _GEN_100; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_102 = 7'h62 == idx ? valid_98_0 : _GEN_101; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_103 = 7'h63 == idx ? valid_99_0 : _GEN_102; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_104 = 7'h64 == idx ? valid_100_0 : _GEN_103; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_105 = 7'h65 == idx ? valid_101_0 : _GEN_104; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_106 = 7'h66 == idx ? valid_102_0 : _GEN_105; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_107 = 7'h67 == idx ? valid_103_0 : _GEN_106; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_108 = 7'h68 == idx ? valid_104_0 : _GEN_107; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_109 = 7'h69 == idx ? valid_105_0 : _GEN_108; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_110 = 7'h6a == idx ? valid_106_0 : _GEN_109; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_111 = 7'h6b == idx ? valid_107_0 : _GEN_110; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_112 = 7'h6c == idx ? valid_108_0 : _GEN_111; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_113 = 7'h6d == idx ? valid_109_0 : _GEN_112; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_114 = 7'h6e == idx ? valid_110_0 : _GEN_113; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_115 = 7'h6f == idx ? valid_111_0 : _GEN_114; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_116 = 7'h70 == idx ? valid_112_0 : _GEN_115; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_117 = 7'h71 == idx ? valid_113_0 : _GEN_116; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_118 = 7'h72 == idx ? valid_114_0 : _GEN_117; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_119 = 7'h73 == idx ? valid_115_0 : _GEN_118; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_120 = 7'h74 == idx ? valid_116_0 : _GEN_119; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_121 = 7'h75 == idx ? valid_117_0 : _GEN_120; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_122 = 7'h76 == idx ? valid_118_0 : _GEN_121; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_123 = 7'h77 == idx ? valid_119_0 : _GEN_122; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_124 = 7'h78 == idx ? valid_120_0 : _GEN_123; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_125 = 7'h79 == idx ? valid_121_0 : _GEN_124; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_126 = 7'h7a == idx ? valid_122_0 : _GEN_125; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_127 = 7'h7b == idx ? valid_123_0 : _GEN_126; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_128 = 7'h7c == idx ? valid_124_0 : _GEN_127; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_129 = 7'h7d == idx ? valid_125_0 : _GEN_128; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_130 = 7'h7e == idx ? valid_126_0 : _GEN_129; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_131 = 7'h7f == idx ? valid_127_0 : _GEN_130; // @[cache.scala 57:62 cache.scala 57:62]
  wire  _GEN_133 = 7'h1 == idx ? valid_1_1 : valid_0_1; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_134 = 7'h2 == idx ? valid_2_1 : _GEN_133; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_135 = 7'h3 == idx ? valid_3_1 : _GEN_134; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_136 = 7'h4 == idx ? valid_4_1 : _GEN_135; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_137 = 7'h5 == idx ? valid_5_1 : _GEN_136; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_138 = 7'h6 == idx ? valid_6_1 : _GEN_137; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_139 = 7'h7 == idx ? valid_7_1 : _GEN_138; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_140 = 7'h8 == idx ? valid_8_1 : _GEN_139; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_141 = 7'h9 == idx ? valid_9_1 : _GEN_140; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_142 = 7'ha == idx ? valid_10_1 : _GEN_141; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_143 = 7'hb == idx ? valid_11_1 : _GEN_142; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_144 = 7'hc == idx ? valid_12_1 : _GEN_143; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_145 = 7'hd == idx ? valid_13_1 : _GEN_144; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_146 = 7'he == idx ? valid_14_1 : _GEN_145; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_147 = 7'hf == idx ? valid_15_1 : _GEN_146; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_148 = 7'h10 == idx ? valid_16_1 : _GEN_147; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_149 = 7'h11 == idx ? valid_17_1 : _GEN_148; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_150 = 7'h12 == idx ? valid_18_1 : _GEN_149; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_151 = 7'h13 == idx ? valid_19_1 : _GEN_150; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_152 = 7'h14 == idx ? valid_20_1 : _GEN_151; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_153 = 7'h15 == idx ? valid_21_1 : _GEN_152; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_154 = 7'h16 == idx ? valid_22_1 : _GEN_153; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_155 = 7'h17 == idx ? valid_23_1 : _GEN_154; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_156 = 7'h18 == idx ? valid_24_1 : _GEN_155; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_157 = 7'h19 == idx ? valid_25_1 : _GEN_156; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_158 = 7'h1a == idx ? valid_26_1 : _GEN_157; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_159 = 7'h1b == idx ? valid_27_1 : _GEN_158; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_160 = 7'h1c == idx ? valid_28_1 : _GEN_159; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_161 = 7'h1d == idx ? valid_29_1 : _GEN_160; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_162 = 7'h1e == idx ? valid_30_1 : _GEN_161; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_163 = 7'h1f == idx ? valid_31_1 : _GEN_162; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_164 = 7'h20 == idx ? valid_32_1 : _GEN_163; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_165 = 7'h21 == idx ? valid_33_1 : _GEN_164; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_166 = 7'h22 == idx ? valid_34_1 : _GEN_165; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_167 = 7'h23 == idx ? valid_35_1 : _GEN_166; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_168 = 7'h24 == idx ? valid_36_1 : _GEN_167; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_169 = 7'h25 == idx ? valid_37_1 : _GEN_168; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_170 = 7'h26 == idx ? valid_38_1 : _GEN_169; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_171 = 7'h27 == idx ? valid_39_1 : _GEN_170; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_172 = 7'h28 == idx ? valid_40_1 : _GEN_171; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_173 = 7'h29 == idx ? valid_41_1 : _GEN_172; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_174 = 7'h2a == idx ? valid_42_1 : _GEN_173; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_175 = 7'h2b == idx ? valid_43_1 : _GEN_174; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_176 = 7'h2c == idx ? valid_44_1 : _GEN_175; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_177 = 7'h2d == idx ? valid_45_1 : _GEN_176; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_178 = 7'h2e == idx ? valid_46_1 : _GEN_177; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_179 = 7'h2f == idx ? valid_47_1 : _GEN_178; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_180 = 7'h30 == idx ? valid_48_1 : _GEN_179; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_181 = 7'h31 == idx ? valid_49_1 : _GEN_180; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_182 = 7'h32 == idx ? valid_50_1 : _GEN_181; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_183 = 7'h33 == idx ? valid_51_1 : _GEN_182; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_184 = 7'h34 == idx ? valid_52_1 : _GEN_183; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_185 = 7'h35 == idx ? valid_53_1 : _GEN_184; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_186 = 7'h36 == idx ? valid_54_1 : _GEN_185; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_187 = 7'h37 == idx ? valid_55_1 : _GEN_186; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_188 = 7'h38 == idx ? valid_56_1 : _GEN_187; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_189 = 7'h39 == idx ? valid_57_1 : _GEN_188; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_190 = 7'h3a == idx ? valid_58_1 : _GEN_189; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_191 = 7'h3b == idx ? valid_59_1 : _GEN_190; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_192 = 7'h3c == idx ? valid_60_1 : _GEN_191; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_193 = 7'h3d == idx ? valid_61_1 : _GEN_192; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_194 = 7'h3e == idx ? valid_62_1 : _GEN_193; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_195 = 7'h3f == idx ? valid_63_1 : _GEN_194; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_196 = 7'h40 == idx ? valid_64_1 : _GEN_195; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_197 = 7'h41 == idx ? valid_65_1 : _GEN_196; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_198 = 7'h42 == idx ? valid_66_1 : _GEN_197; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_199 = 7'h43 == idx ? valid_67_1 : _GEN_198; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_200 = 7'h44 == idx ? valid_68_1 : _GEN_199; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_201 = 7'h45 == idx ? valid_69_1 : _GEN_200; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_202 = 7'h46 == idx ? valid_70_1 : _GEN_201; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_203 = 7'h47 == idx ? valid_71_1 : _GEN_202; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_204 = 7'h48 == idx ? valid_72_1 : _GEN_203; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_205 = 7'h49 == idx ? valid_73_1 : _GEN_204; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_206 = 7'h4a == idx ? valid_74_1 : _GEN_205; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_207 = 7'h4b == idx ? valid_75_1 : _GEN_206; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_208 = 7'h4c == idx ? valid_76_1 : _GEN_207; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_209 = 7'h4d == idx ? valid_77_1 : _GEN_208; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_210 = 7'h4e == idx ? valid_78_1 : _GEN_209; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_211 = 7'h4f == idx ? valid_79_1 : _GEN_210; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_212 = 7'h50 == idx ? valid_80_1 : _GEN_211; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_213 = 7'h51 == idx ? valid_81_1 : _GEN_212; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_214 = 7'h52 == idx ? valid_82_1 : _GEN_213; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_215 = 7'h53 == idx ? valid_83_1 : _GEN_214; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_216 = 7'h54 == idx ? valid_84_1 : _GEN_215; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_217 = 7'h55 == idx ? valid_85_1 : _GEN_216; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_218 = 7'h56 == idx ? valid_86_1 : _GEN_217; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_219 = 7'h57 == idx ? valid_87_1 : _GEN_218; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_220 = 7'h58 == idx ? valid_88_1 : _GEN_219; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_221 = 7'h59 == idx ? valid_89_1 : _GEN_220; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_222 = 7'h5a == idx ? valid_90_1 : _GEN_221; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_223 = 7'h5b == idx ? valid_91_1 : _GEN_222; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_224 = 7'h5c == idx ? valid_92_1 : _GEN_223; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_225 = 7'h5d == idx ? valid_93_1 : _GEN_224; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_226 = 7'h5e == idx ? valid_94_1 : _GEN_225; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_227 = 7'h5f == idx ? valid_95_1 : _GEN_226; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_228 = 7'h60 == idx ? valid_96_1 : _GEN_227; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_229 = 7'h61 == idx ? valid_97_1 : _GEN_228; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_230 = 7'h62 == idx ? valid_98_1 : _GEN_229; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_231 = 7'h63 == idx ? valid_99_1 : _GEN_230; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_232 = 7'h64 == idx ? valid_100_1 : _GEN_231; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_233 = 7'h65 == idx ? valid_101_1 : _GEN_232; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_234 = 7'h66 == idx ? valid_102_1 : _GEN_233; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_235 = 7'h67 == idx ? valid_103_1 : _GEN_234; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_236 = 7'h68 == idx ? valid_104_1 : _GEN_235; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_237 = 7'h69 == idx ? valid_105_1 : _GEN_236; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_238 = 7'h6a == idx ? valid_106_1 : _GEN_237; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_239 = 7'h6b == idx ? valid_107_1 : _GEN_238; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_240 = 7'h6c == idx ? valid_108_1 : _GEN_239; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_241 = 7'h6d == idx ? valid_109_1 : _GEN_240; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_242 = 7'h6e == idx ? valid_110_1 : _GEN_241; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_243 = 7'h6f == idx ? valid_111_1 : _GEN_242; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_244 = 7'h70 == idx ? valid_112_1 : _GEN_243; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_245 = 7'h71 == idx ? valid_113_1 : _GEN_244; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_246 = 7'h72 == idx ? valid_114_1 : _GEN_245; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_247 = 7'h73 == idx ? valid_115_1 : _GEN_246; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_248 = 7'h74 == idx ? valid_116_1 : _GEN_247; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_249 = 7'h75 == idx ? valid_117_1 : _GEN_248; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_250 = 7'h76 == idx ? valid_118_1 : _GEN_249; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_251 = 7'h77 == idx ? valid_119_1 : _GEN_250; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_252 = 7'h78 == idx ? valid_120_1 : _GEN_251; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_253 = 7'h79 == idx ? valid_121_1 : _GEN_252; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_254 = 7'h7a == idx ? valid_122_1 : _GEN_253; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_255 = 7'h7b == idx ? valid_123_1 : _GEN_254; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_256 = 7'h7c == idx ? valid_124_1 : _GEN_255; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_257 = 7'h7d == idx ? valid_125_1 : _GEN_256; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_258 = 7'h7e == idx ? valid_126_1 : _GEN_257; // @[cache.scala 58:62 cache.scala 58:62]
  wire  _GEN_259 = 7'h7f == idx ? valid_127_1 : _GEN_258; // @[cache.scala 58:62 cache.scala 58:62]
  wire [7:0] _hit_way_T_8 = tag_read[41:21] == tag & _GEN_259 ? 8'h1 : 8'hff; // @[cache.scala 58:15]
  wire [7:0] hit_way = tag_read[20:0] == tag & _GEN_131 ? 8'h0 : _hit_way_T_8; // @[cache.scala 57:15]
  wire [7:0] idxh = _idxh_T | hit_way; // @[cache.scala 41:24]
  wire [7:0] way2 = {{7'd0}, lfsr8_io_out[0]}; // @[cache.scala 34:17 cache.scala 62:7]
  wire [7:0] idxw = _idxh_T | way2; // @[cache.scala 42:24]
  reg  rmode; // @[cache.scala 48:20]
  wire  _rmode_T = state == 4'h0; // @[cache.scala 50:20]
  wire  _rmode_T_1 = io_in_ar_ready & io_in_ar_valid; // @[Decoupled.scala 40:37]
  wire  _rmode_T_4 = _rmode_T ? 1'h0 : rmode; // @[cache.scala 51:13]
  wire  _tag_way_T = way2 == 8'h0; // @[cache.scala 65:20]
  wire [20:0] tag_way = way2 == 8'h0 ? tag_read[20:0] : tag_read[41:21]; // @[cache.scala 65:15]
  wire [3:0] _state_T_3 = _rmode_T_1 ? 4'h1 : 4'h0; // @[cache.scala 68:20]
  wire [3:0] _state_T_5 = hit_way == 8'hff ? 4'h4 : 4'h3; // @[cache.scala 70:20]
  wire [3:0] _state_T_17 = 4'h0 == state ? _state_T_3 : 4'h0; // @[Mux.scala 80:57]
  wire [3:0] _state_T_19 = 4'h1 == state ? 4'h2 : _state_T_17; // @[Mux.scala 80:57]
  wire [3:0] _state_T_21 = 4'h2 == state ? _state_T_5 : _state_T_19; // @[Mux.scala 80:57]
  wire  _io_in_r_bits_data_T = state == 4'h3; // @[cache.scala 78:32]
  wire [127:0] _io_in_r_bits_data_T_1 = io_ram_bits_Q >> offset; // @[cache.scala 78:56]
  wire  _io_in_r_bits_data_T_3 = state == 4'h5; // @[cache.scala 79:33]
  wire [127:0] _io_in_r_bits_data_T_4 = buf_ >> offset; // @[cache.scala 79:50]
  wire [127:0] _io_in_r_bits_data_T_5 = state == 4'h5 ? _io_in_r_bits_data_T_4 : 128'h0; // @[cache.scala 79:26]
  wire [127:0] _io_in_r_bits_data_T_6 = state == 4'h3 ? {{64'd0}, _io_in_r_bits_data_T_1[63:0]} : _io_in_r_bits_data_T_5
    ; // @[cache.scala 78:25]
  wire  _state_r_T = state == 4'h4; // @[cache.scala 91:32]
  wire  _state_r_T_1 = io_mem_ar_ready & io_mem_ar_valid; // @[Decoupled.scala 40:37]
  wire [3:0] _state_r_T_3 = state == 4'h4 & _state_r_T_1 ? 4'h6 : 4'h0; // @[cache.scala 91:25]
  wire  _state_r_T_4 = io_mem_r_ready & io_mem_r_valid; // @[Decoupled.scala 40:37]
  wire [3:0] _state_r_T_5 = _state_r_T_4 ? 4'h7 : 4'h6; // @[cache.scala 92:25]
  wire [3:0] _state_r_T_11 = 4'h0 == state_r ? _state_r_T_3 : 4'h0; // @[Mux.scala 80:57]
  wire  _state_w_T_1 = io_mem_aw_ready & io_mem_aw_valid; // @[Decoupled.scala 40:37]
  wire [3:0] _state_w_T_3 = _state_r_T & _state_w_T_1 ? 4'h6 : 4'h0; // @[cache.scala 97:25]
  wire  _state_w_T_4 = io_mem_w_ready & io_mem_w_valid; // @[Decoupled.scala 40:37]
  wire [3:0] _state_w_T_5 = _state_w_T_4 ? 4'h7 : 4'h6; // @[cache.scala 98:25]
  wire [3:0] _state_w_T_7 = _state_w_T_4 ? 4'h8 : 4'h7; // @[cache.scala 99:25]
  wire  _state_w_T_8 = io_mem_b_ready & io_mem_b_valid; // @[Decoupled.scala 40:37]
  wire [3:0] _state_w_T_13 = 4'h0 == state_w ? _state_w_T_3 : 4'h0; // @[Mux.scala 80:57]
  wire [3:0] _state_w_T_15 = 4'h6 == state_w ? _state_w_T_5 : _state_w_T_13; // @[Mux.scala 80:57]
  wire [27:0] _io_mem_aw_bits_addr_T = {tag_way, 7'h0}; // @[cache.scala 103:33]
  wire [27:0] _GEN_1545 = {{21'd0}, idx}; // @[cache.scala 103:45]
  wire [27:0] _io_mem_aw_bits_addr_T_1 = _io_mem_aw_bits_addr_T | _GEN_1545; // @[cache.scala 103:45]
  wire  _io_mem_w_bits_data_T = state_w == 4'h8; // @[cache.scala 108:36]
  wire  _io_mem_w_valid_T = state_w == 4'h7; // @[cache.scala 111:29]
  wire [34:0] _GEN_1546 = {{3'd0}, addr}; // @[cache.scala 114:30]
  wire [34:0] _io_mem_ar_bits_addr_T_2 = _GEN_1546 & 35'h7fffffff8; // @[cache.scala 114:30]
  wire  _io_mem_ar_valid_T = state_r == 4'h0; // @[cache.scala 115:29]
  reg  rcnt; // @[cache.scala 121:19]
  wire [63:0] buf_hi = buf_[127:64]; // @[cache.scala 125:37]
  wire [127:0] _buf_T_4 = {buf_hi,io_mem_r_bits_data}; // @[Cat.scala 30:58]
  wire [63:0] buf_lo = buf_[63:0]; // @[cache.scala 126:35]
  wire [127:0] _buf_T_5 = {io_mem_r_bits_data,buf_lo}; // @[Cat.scala 30:58]
  reg [41:0] taggg; // @[cache.scala 129:22]
  wire [20:0] tagg_hi = taggg[41:21]; // @[cache.scala 131:42]
  wire [41:0] _tagg_T_1 = {tagg_hi,tag}; // @[Cat.scala 30:58]
  wire [20:0] tagg_lo = taggg[20:0]; // @[cache.scala 131:70]
  wire [41:0] _tagg_T_2 = {tag,tagg_lo}; // @[Cat.scala 30:58]
  wire  _GEN_1034 = 7'h0 == idx & way2[0] ? valid_0_1 : valid_0_0; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1035 = 7'h1 == idx & ~way2[0] ? valid_1_0 : _GEN_1034; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1036 = 7'h1 == idx & way2[0] ? valid_1_1 : _GEN_1035; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1037 = 7'h2 == idx & ~way2[0] ? valid_2_0 : _GEN_1036; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1038 = 7'h2 == idx & way2[0] ? valid_2_1 : _GEN_1037; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1039 = 7'h3 == idx & ~way2[0] ? valid_3_0 : _GEN_1038; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1040 = 7'h3 == idx & way2[0] ? valid_3_1 : _GEN_1039; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1041 = 7'h4 == idx & ~way2[0] ? valid_4_0 : _GEN_1040; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1042 = 7'h4 == idx & way2[0] ? valid_4_1 : _GEN_1041; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1043 = 7'h5 == idx & ~way2[0] ? valid_5_0 : _GEN_1042; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1044 = 7'h5 == idx & way2[0] ? valid_5_1 : _GEN_1043; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1045 = 7'h6 == idx & ~way2[0] ? valid_6_0 : _GEN_1044; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1046 = 7'h6 == idx & way2[0] ? valid_6_1 : _GEN_1045; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1047 = 7'h7 == idx & ~way2[0] ? valid_7_0 : _GEN_1046; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1048 = 7'h7 == idx & way2[0] ? valid_7_1 : _GEN_1047; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1049 = 7'h8 == idx & ~way2[0] ? valid_8_0 : _GEN_1048; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1050 = 7'h8 == idx & way2[0] ? valid_8_1 : _GEN_1049; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1051 = 7'h9 == idx & ~way2[0] ? valid_9_0 : _GEN_1050; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1052 = 7'h9 == idx & way2[0] ? valid_9_1 : _GEN_1051; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1053 = 7'ha == idx & ~way2[0] ? valid_10_0 : _GEN_1052; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1054 = 7'ha == idx & way2[0] ? valid_10_1 : _GEN_1053; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1055 = 7'hb == idx & ~way2[0] ? valid_11_0 : _GEN_1054; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1056 = 7'hb == idx & way2[0] ? valid_11_1 : _GEN_1055; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1057 = 7'hc == idx & ~way2[0] ? valid_12_0 : _GEN_1056; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1058 = 7'hc == idx & way2[0] ? valid_12_1 : _GEN_1057; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1059 = 7'hd == idx & ~way2[0] ? valid_13_0 : _GEN_1058; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1060 = 7'hd == idx & way2[0] ? valid_13_1 : _GEN_1059; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1061 = 7'he == idx & ~way2[0] ? valid_14_0 : _GEN_1060; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1062 = 7'he == idx & way2[0] ? valid_14_1 : _GEN_1061; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1063 = 7'hf == idx & ~way2[0] ? valid_15_0 : _GEN_1062; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1064 = 7'hf == idx & way2[0] ? valid_15_1 : _GEN_1063; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1065 = 7'h10 == idx & ~way2[0] ? valid_16_0 : _GEN_1064; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1066 = 7'h10 == idx & way2[0] ? valid_16_1 : _GEN_1065; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1067 = 7'h11 == idx & ~way2[0] ? valid_17_0 : _GEN_1066; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1068 = 7'h11 == idx & way2[0] ? valid_17_1 : _GEN_1067; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1069 = 7'h12 == idx & ~way2[0] ? valid_18_0 : _GEN_1068; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1070 = 7'h12 == idx & way2[0] ? valid_18_1 : _GEN_1069; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1071 = 7'h13 == idx & ~way2[0] ? valid_19_0 : _GEN_1070; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1072 = 7'h13 == idx & way2[0] ? valid_19_1 : _GEN_1071; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1073 = 7'h14 == idx & ~way2[0] ? valid_20_0 : _GEN_1072; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1074 = 7'h14 == idx & way2[0] ? valid_20_1 : _GEN_1073; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1075 = 7'h15 == idx & ~way2[0] ? valid_21_0 : _GEN_1074; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1076 = 7'h15 == idx & way2[0] ? valid_21_1 : _GEN_1075; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1077 = 7'h16 == idx & ~way2[0] ? valid_22_0 : _GEN_1076; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1078 = 7'h16 == idx & way2[0] ? valid_22_1 : _GEN_1077; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1079 = 7'h17 == idx & ~way2[0] ? valid_23_0 : _GEN_1078; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1080 = 7'h17 == idx & way2[0] ? valid_23_1 : _GEN_1079; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1081 = 7'h18 == idx & ~way2[0] ? valid_24_0 : _GEN_1080; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1082 = 7'h18 == idx & way2[0] ? valid_24_1 : _GEN_1081; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1083 = 7'h19 == idx & ~way2[0] ? valid_25_0 : _GEN_1082; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1084 = 7'h19 == idx & way2[0] ? valid_25_1 : _GEN_1083; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1085 = 7'h1a == idx & ~way2[0] ? valid_26_0 : _GEN_1084; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1086 = 7'h1a == idx & way2[0] ? valid_26_1 : _GEN_1085; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1087 = 7'h1b == idx & ~way2[0] ? valid_27_0 : _GEN_1086; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1088 = 7'h1b == idx & way2[0] ? valid_27_1 : _GEN_1087; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1089 = 7'h1c == idx & ~way2[0] ? valid_28_0 : _GEN_1088; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1090 = 7'h1c == idx & way2[0] ? valid_28_1 : _GEN_1089; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1091 = 7'h1d == idx & ~way2[0] ? valid_29_0 : _GEN_1090; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1092 = 7'h1d == idx & way2[0] ? valid_29_1 : _GEN_1091; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1093 = 7'h1e == idx & ~way2[0] ? valid_30_0 : _GEN_1092; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1094 = 7'h1e == idx & way2[0] ? valid_30_1 : _GEN_1093; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1095 = 7'h1f == idx & ~way2[0] ? valid_31_0 : _GEN_1094; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1096 = 7'h1f == idx & way2[0] ? valid_31_1 : _GEN_1095; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1097 = 7'h20 == idx & ~way2[0] ? valid_32_0 : _GEN_1096; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1098 = 7'h20 == idx & way2[0] ? valid_32_1 : _GEN_1097; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1099 = 7'h21 == idx & ~way2[0] ? valid_33_0 : _GEN_1098; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1100 = 7'h21 == idx & way2[0] ? valid_33_1 : _GEN_1099; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1101 = 7'h22 == idx & ~way2[0] ? valid_34_0 : _GEN_1100; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1102 = 7'h22 == idx & way2[0] ? valid_34_1 : _GEN_1101; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1103 = 7'h23 == idx & ~way2[0] ? valid_35_0 : _GEN_1102; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1104 = 7'h23 == idx & way2[0] ? valid_35_1 : _GEN_1103; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1105 = 7'h24 == idx & ~way2[0] ? valid_36_0 : _GEN_1104; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1106 = 7'h24 == idx & way2[0] ? valid_36_1 : _GEN_1105; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1107 = 7'h25 == idx & ~way2[0] ? valid_37_0 : _GEN_1106; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1108 = 7'h25 == idx & way2[0] ? valid_37_1 : _GEN_1107; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1109 = 7'h26 == idx & ~way2[0] ? valid_38_0 : _GEN_1108; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1110 = 7'h26 == idx & way2[0] ? valid_38_1 : _GEN_1109; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1111 = 7'h27 == idx & ~way2[0] ? valid_39_0 : _GEN_1110; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1112 = 7'h27 == idx & way2[0] ? valid_39_1 : _GEN_1111; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1113 = 7'h28 == idx & ~way2[0] ? valid_40_0 : _GEN_1112; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1114 = 7'h28 == idx & way2[0] ? valid_40_1 : _GEN_1113; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1115 = 7'h29 == idx & ~way2[0] ? valid_41_0 : _GEN_1114; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1116 = 7'h29 == idx & way2[0] ? valid_41_1 : _GEN_1115; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1117 = 7'h2a == idx & ~way2[0] ? valid_42_0 : _GEN_1116; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1118 = 7'h2a == idx & way2[0] ? valid_42_1 : _GEN_1117; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1119 = 7'h2b == idx & ~way2[0] ? valid_43_0 : _GEN_1118; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1120 = 7'h2b == idx & way2[0] ? valid_43_1 : _GEN_1119; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1121 = 7'h2c == idx & ~way2[0] ? valid_44_0 : _GEN_1120; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1122 = 7'h2c == idx & way2[0] ? valid_44_1 : _GEN_1121; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1123 = 7'h2d == idx & ~way2[0] ? valid_45_0 : _GEN_1122; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1124 = 7'h2d == idx & way2[0] ? valid_45_1 : _GEN_1123; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1125 = 7'h2e == idx & ~way2[0] ? valid_46_0 : _GEN_1124; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1126 = 7'h2e == idx & way2[0] ? valid_46_1 : _GEN_1125; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1127 = 7'h2f == idx & ~way2[0] ? valid_47_0 : _GEN_1126; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1128 = 7'h2f == idx & way2[0] ? valid_47_1 : _GEN_1127; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1129 = 7'h30 == idx & ~way2[0] ? valid_48_0 : _GEN_1128; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1130 = 7'h30 == idx & way2[0] ? valid_48_1 : _GEN_1129; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1131 = 7'h31 == idx & ~way2[0] ? valid_49_0 : _GEN_1130; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1132 = 7'h31 == idx & way2[0] ? valid_49_1 : _GEN_1131; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1133 = 7'h32 == idx & ~way2[0] ? valid_50_0 : _GEN_1132; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1134 = 7'h32 == idx & way2[0] ? valid_50_1 : _GEN_1133; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1135 = 7'h33 == idx & ~way2[0] ? valid_51_0 : _GEN_1134; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1136 = 7'h33 == idx & way2[0] ? valid_51_1 : _GEN_1135; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1137 = 7'h34 == idx & ~way2[0] ? valid_52_0 : _GEN_1136; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1138 = 7'h34 == idx & way2[0] ? valid_52_1 : _GEN_1137; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1139 = 7'h35 == idx & ~way2[0] ? valid_53_0 : _GEN_1138; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1140 = 7'h35 == idx & way2[0] ? valid_53_1 : _GEN_1139; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1141 = 7'h36 == idx & ~way2[0] ? valid_54_0 : _GEN_1140; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1142 = 7'h36 == idx & way2[0] ? valid_54_1 : _GEN_1141; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1143 = 7'h37 == idx & ~way2[0] ? valid_55_0 : _GEN_1142; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1144 = 7'h37 == idx & way2[0] ? valid_55_1 : _GEN_1143; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1145 = 7'h38 == idx & ~way2[0] ? valid_56_0 : _GEN_1144; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1146 = 7'h38 == idx & way2[0] ? valid_56_1 : _GEN_1145; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1147 = 7'h39 == idx & ~way2[0] ? valid_57_0 : _GEN_1146; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1148 = 7'h39 == idx & way2[0] ? valid_57_1 : _GEN_1147; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1149 = 7'h3a == idx & ~way2[0] ? valid_58_0 : _GEN_1148; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1150 = 7'h3a == idx & way2[0] ? valid_58_1 : _GEN_1149; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1151 = 7'h3b == idx & ~way2[0] ? valid_59_0 : _GEN_1150; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1152 = 7'h3b == idx & way2[0] ? valid_59_1 : _GEN_1151; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1153 = 7'h3c == idx & ~way2[0] ? valid_60_0 : _GEN_1152; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1154 = 7'h3c == idx & way2[0] ? valid_60_1 : _GEN_1153; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1155 = 7'h3d == idx & ~way2[0] ? valid_61_0 : _GEN_1154; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1156 = 7'h3d == idx & way2[0] ? valid_61_1 : _GEN_1155; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1157 = 7'h3e == idx & ~way2[0] ? valid_62_0 : _GEN_1156; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1158 = 7'h3e == idx & way2[0] ? valid_62_1 : _GEN_1157; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1159 = 7'h3f == idx & ~way2[0] ? valid_63_0 : _GEN_1158; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1160 = 7'h3f == idx & way2[0] ? valid_63_1 : _GEN_1159; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1161 = 7'h40 == idx & ~way2[0] ? valid_64_0 : _GEN_1160; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1162 = 7'h40 == idx & way2[0] ? valid_64_1 : _GEN_1161; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1163 = 7'h41 == idx & ~way2[0] ? valid_65_0 : _GEN_1162; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1164 = 7'h41 == idx & way2[0] ? valid_65_1 : _GEN_1163; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1165 = 7'h42 == idx & ~way2[0] ? valid_66_0 : _GEN_1164; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1166 = 7'h42 == idx & way2[0] ? valid_66_1 : _GEN_1165; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1167 = 7'h43 == idx & ~way2[0] ? valid_67_0 : _GEN_1166; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1168 = 7'h43 == idx & way2[0] ? valid_67_1 : _GEN_1167; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1169 = 7'h44 == idx & ~way2[0] ? valid_68_0 : _GEN_1168; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1170 = 7'h44 == idx & way2[0] ? valid_68_1 : _GEN_1169; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1171 = 7'h45 == idx & ~way2[0] ? valid_69_0 : _GEN_1170; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1172 = 7'h45 == idx & way2[0] ? valid_69_1 : _GEN_1171; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1173 = 7'h46 == idx & ~way2[0] ? valid_70_0 : _GEN_1172; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1174 = 7'h46 == idx & way2[0] ? valid_70_1 : _GEN_1173; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1175 = 7'h47 == idx & ~way2[0] ? valid_71_0 : _GEN_1174; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1176 = 7'h47 == idx & way2[0] ? valid_71_1 : _GEN_1175; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1177 = 7'h48 == idx & ~way2[0] ? valid_72_0 : _GEN_1176; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1178 = 7'h48 == idx & way2[0] ? valid_72_1 : _GEN_1177; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1179 = 7'h49 == idx & ~way2[0] ? valid_73_0 : _GEN_1178; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1180 = 7'h49 == idx & way2[0] ? valid_73_1 : _GEN_1179; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1181 = 7'h4a == idx & ~way2[0] ? valid_74_0 : _GEN_1180; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1182 = 7'h4a == idx & way2[0] ? valid_74_1 : _GEN_1181; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1183 = 7'h4b == idx & ~way2[0] ? valid_75_0 : _GEN_1182; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1184 = 7'h4b == idx & way2[0] ? valid_75_1 : _GEN_1183; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1185 = 7'h4c == idx & ~way2[0] ? valid_76_0 : _GEN_1184; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1186 = 7'h4c == idx & way2[0] ? valid_76_1 : _GEN_1185; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1187 = 7'h4d == idx & ~way2[0] ? valid_77_0 : _GEN_1186; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1188 = 7'h4d == idx & way2[0] ? valid_77_1 : _GEN_1187; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1189 = 7'h4e == idx & ~way2[0] ? valid_78_0 : _GEN_1188; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1190 = 7'h4e == idx & way2[0] ? valid_78_1 : _GEN_1189; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1191 = 7'h4f == idx & ~way2[0] ? valid_79_0 : _GEN_1190; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1192 = 7'h4f == idx & way2[0] ? valid_79_1 : _GEN_1191; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1193 = 7'h50 == idx & ~way2[0] ? valid_80_0 : _GEN_1192; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1194 = 7'h50 == idx & way2[0] ? valid_80_1 : _GEN_1193; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1195 = 7'h51 == idx & ~way2[0] ? valid_81_0 : _GEN_1194; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1196 = 7'h51 == idx & way2[0] ? valid_81_1 : _GEN_1195; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1197 = 7'h52 == idx & ~way2[0] ? valid_82_0 : _GEN_1196; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1198 = 7'h52 == idx & way2[0] ? valid_82_1 : _GEN_1197; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1199 = 7'h53 == idx & ~way2[0] ? valid_83_0 : _GEN_1198; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1200 = 7'h53 == idx & way2[0] ? valid_83_1 : _GEN_1199; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1201 = 7'h54 == idx & ~way2[0] ? valid_84_0 : _GEN_1200; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1202 = 7'h54 == idx & way2[0] ? valid_84_1 : _GEN_1201; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1203 = 7'h55 == idx & ~way2[0] ? valid_85_0 : _GEN_1202; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1204 = 7'h55 == idx & way2[0] ? valid_85_1 : _GEN_1203; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1205 = 7'h56 == idx & ~way2[0] ? valid_86_0 : _GEN_1204; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1206 = 7'h56 == idx & way2[0] ? valid_86_1 : _GEN_1205; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1207 = 7'h57 == idx & ~way2[0] ? valid_87_0 : _GEN_1206; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1208 = 7'h57 == idx & way2[0] ? valid_87_1 : _GEN_1207; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1209 = 7'h58 == idx & ~way2[0] ? valid_88_0 : _GEN_1208; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1210 = 7'h58 == idx & way2[0] ? valid_88_1 : _GEN_1209; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1211 = 7'h59 == idx & ~way2[0] ? valid_89_0 : _GEN_1210; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1212 = 7'h59 == idx & way2[0] ? valid_89_1 : _GEN_1211; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1213 = 7'h5a == idx & ~way2[0] ? valid_90_0 : _GEN_1212; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1214 = 7'h5a == idx & way2[0] ? valid_90_1 : _GEN_1213; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1215 = 7'h5b == idx & ~way2[0] ? valid_91_0 : _GEN_1214; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1216 = 7'h5b == idx & way2[0] ? valid_91_1 : _GEN_1215; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1217 = 7'h5c == idx & ~way2[0] ? valid_92_0 : _GEN_1216; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1218 = 7'h5c == idx & way2[0] ? valid_92_1 : _GEN_1217; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1219 = 7'h5d == idx & ~way2[0] ? valid_93_0 : _GEN_1218; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1220 = 7'h5d == idx & way2[0] ? valid_93_1 : _GEN_1219; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1221 = 7'h5e == idx & ~way2[0] ? valid_94_0 : _GEN_1220; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1222 = 7'h5e == idx & way2[0] ? valid_94_1 : _GEN_1221; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1223 = 7'h5f == idx & ~way2[0] ? valid_95_0 : _GEN_1222; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1224 = 7'h5f == idx & way2[0] ? valid_95_1 : _GEN_1223; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1225 = 7'h60 == idx & ~way2[0] ? valid_96_0 : _GEN_1224; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1226 = 7'h60 == idx & way2[0] ? valid_96_1 : _GEN_1225; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1227 = 7'h61 == idx & ~way2[0] ? valid_97_0 : _GEN_1226; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1228 = 7'h61 == idx & way2[0] ? valid_97_1 : _GEN_1227; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1229 = 7'h62 == idx & ~way2[0] ? valid_98_0 : _GEN_1228; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1230 = 7'h62 == idx & way2[0] ? valid_98_1 : _GEN_1229; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1231 = 7'h63 == idx & ~way2[0] ? valid_99_0 : _GEN_1230; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1232 = 7'h63 == idx & way2[0] ? valid_99_1 : _GEN_1231; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1233 = 7'h64 == idx & ~way2[0] ? valid_100_0 : _GEN_1232; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1234 = 7'h64 == idx & way2[0] ? valid_100_1 : _GEN_1233; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1235 = 7'h65 == idx & ~way2[0] ? valid_101_0 : _GEN_1234; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1236 = 7'h65 == idx & way2[0] ? valid_101_1 : _GEN_1235; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1237 = 7'h66 == idx & ~way2[0] ? valid_102_0 : _GEN_1236; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1238 = 7'h66 == idx & way2[0] ? valid_102_1 : _GEN_1237; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1239 = 7'h67 == idx & ~way2[0] ? valid_103_0 : _GEN_1238; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1240 = 7'h67 == idx & way2[0] ? valid_103_1 : _GEN_1239; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1241 = 7'h68 == idx & ~way2[0] ? valid_104_0 : _GEN_1240; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1242 = 7'h68 == idx & way2[0] ? valid_104_1 : _GEN_1241; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1243 = 7'h69 == idx & ~way2[0] ? valid_105_0 : _GEN_1242; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1244 = 7'h69 == idx & way2[0] ? valid_105_1 : _GEN_1243; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1245 = 7'h6a == idx & ~way2[0] ? valid_106_0 : _GEN_1244; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1246 = 7'h6a == idx & way2[0] ? valid_106_1 : _GEN_1245; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1247 = 7'h6b == idx & ~way2[0] ? valid_107_0 : _GEN_1246; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1248 = 7'h6b == idx & way2[0] ? valid_107_1 : _GEN_1247; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1249 = 7'h6c == idx & ~way2[0] ? valid_108_0 : _GEN_1248; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1250 = 7'h6c == idx & way2[0] ? valid_108_1 : _GEN_1249; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1251 = 7'h6d == idx & ~way2[0] ? valid_109_0 : _GEN_1250; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1252 = 7'h6d == idx & way2[0] ? valid_109_1 : _GEN_1251; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1253 = 7'h6e == idx & ~way2[0] ? valid_110_0 : _GEN_1252; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1254 = 7'h6e == idx & way2[0] ? valid_110_1 : _GEN_1253; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1255 = 7'h6f == idx & ~way2[0] ? valid_111_0 : _GEN_1254; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1256 = 7'h6f == idx & way2[0] ? valid_111_1 : _GEN_1255; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1257 = 7'h70 == idx & ~way2[0] ? valid_112_0 : _GEN_1256; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1258 = 7'h70 == idx & way2[0] ? valid_112_1 : _GEN_1257; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1259 = 7'h71 == idx & ~way2[0] ? valid_113_0 : _GEN_1258; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1260 = 7'h71 == idx & way2[0] ? valid_113_1 : _GEN_1259; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1261 = 7'h72 == idx & ~way2[0] ? valid_114_0 : _GEN_1260; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1262 = 7'h72 == idx & way2[0] ? valid_114_1 : _GEN_1261; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1263 = 7'h73 == idx & ~way2[0] ? valid_115_0 : _GEN_1262; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1264 = 7'h73 == idx & way2[0] ? valid_115_1 : _GEN_1263; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1265 = 7'h74 == idx & ~way2[0] ? valid_116_0 : _GEN_1264; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1266 = 7'h74 == idx & way2[0] ? valid_116_1 : _GEN_1265; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1267 = 7'h75 == idx & ~way2[0] ? valid_117_0 : _GEN_1266; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1268 = 7'h75 == idx & way2[0] ? valid_117_1 : _GEN_1267; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1269 = 7'h76 == idx & ~way2[0] ? valid_118_0 : _GEN_1268; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1270 = 7'h76 == idx & way2[0] ? valid_118_1 : _GEN_1269; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1271 = 7'h77 == idx & ~way2[0] ? valid_119_0 : _GEN_1270; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1272 = 7'h77 == idx & way2[0] ? valid_119_1 : _GEN_1271; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1273 = 7'h78 == idx & ~way2[0] ? valid_120_0 : _GEN_1272; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1274 = 7'h78 == idx & way2[0] ? valid_120_1 : _GEN_1273; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1275 = 7'h79 == idx & ~way2[0] ? valid_121_0 : _GEN_1274; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1276 = 7'h79 == idx & way2[0] ? valid_121_1 : _GEN_1275; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1277 = 7'h7a == idx & ~way2[0] ? valid_122_0 : _GEN_1276; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1278 = 7'h7a == idx & way2[0] ? valid_122_1 : _GEN_1277; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1279 = 7'h7b == idx & ~way2[0] ? valid_123_0 : _GEN_1278; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1280 = 7'h7b == idx & way2[0] ? valid_123_1 : _GEN_1279; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1281 = 7'h7c == idx & ~way2[0] ? valid_124_0 : _GEN_1280; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1282 = 7'h7c == idx & way2[0] ? valid_124_1 : _GEN_1281; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1283 = 7'h7d == idx & ~way2[0] ? valid_125_0 : _GEN_1282; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1284 = 7'h7d == idx & way2[0] ? valid_125_1 : _GEN_1283; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1285 = 7'h7e == idx & ~way2[0] ? valid_126_0 : _GEN_1284; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1286 = 7'h7e == idx & way2[0] ? valid_126_1 : _GEN_1285; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1287 = 7'h7f == idx & ~way2[0] ? valid_127_0 : _GEN_1286; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _GEN_1288 = 7'h7f == idx & way2[0] ? valid_127_1 : _GEN_1287; // @[cache.scala 133:26 cache.scala 133:26]
  wire  _io_ram_bits_CEN_T = state == 4'h2; // @[cache.scala 137:27]
  wire [7:0] _io_ram_bits_A_T_6 = _io_mem_w_bits_data_T | _io_mem_w_valid_T | _io_in_r_bits_data_T_3 ? idxw : 8'h0; // @[cache.scala 141:21]
  LFSR_8 lfsr8 ( // @[cache.scala 61:19]
    .clock(lfsr8_clock),
    .reset(lfsr8_reset),
    .io_out(lfsr8_io_out)
  );
  assign cache_tag_tag_read_MPORT_addr = cache_tag_tag_read_MPORT_addr_pipe_0;
  assign cache_tag_tag_read_MPORT_data = cache_tag[cache_tag_tag_read_MPORT_addr]; // @[cache.scala 23:31]
  assign cache_tag_MPORT_data = _tag_way_T ? _tagg_T_1 : _tagg_T_2;
  assign cache_tag_MPORT_addr = addr[10:4];
  assign cache_tag_MPORT_mask = 1'h1;
  assign cache_tag_MPORT_en = state == 4'h5;
  assign io_in_ar_ready = state == 4'h0; // @[cache.scala 80:27]
  assign io_in_r_valid = (_io_in_r_bits_data_T | _io_in_r_bits_data_T_3) & rmode; // @[cache.scala 81:62]
  assign io_in_r_bits_data = _io_in_r_bits_data_T_6[63:0]; // @[cache.scala 78:20]
  assign io_mem_ar_valid = state_r == 4'h0 & _state_r_T; // @[cache.scala 115:40]
  assign io_mem_ar_bits_addr = _io_mem_ar_bits_addr_T_2[31:0]; // @[cache.scala 114:22]
  assign io_mem_r_ready = 1'h1; // @[cache.scala 119:17]
  assign io_mem_aw_valid = 1'h0; // @[cache.scala 106:40]
  assign io_mem_aw_bits_addr = {_io_mem_aw_bits_addr_T_1, 4'h0}; // @[cache.scala 103:52]
  assign io_mem_w_valid = state_w == 4'h7 | _io_mem_w_bits_data_T; // @[cache.scala 111:40]
  assign io_mem_w_bits_data = state_w == 4'h8 ? io_ram_bits_Q[127:64] : io_ram_bits_Q[63:0]; // @[cache.scala 108:27]
  assign io_mem_w_bits_last = state_w == 4'h8; // @[cache.scala 110:32]
  assign io_mem_b_ready = 1'h1; // @[cache.scala 112:17]
  assign io_ram_bits_CEN = state == 4'h2 | _io_mem_w_bits_data_T | _io_mem_w_valid_T | _io_in_r_bits_data_T_3; // @[cache.scala 137:84]
  assign io_ram_bits_WEN = state == 4'h5; // @[cache.scala 138:27]
  assign io_ram_bits_A = _io_ram_bits_CEN_T ? idxh : _io_ram_bits_A_T_6; // @[cache.scala 140:21]
  assign io_ram_bits_D = buf_; // @[cache.scala 142:15]
  assign lfsr8_clock = clock;
  assign lfsr8_reset = reset;
  always @(posedge clock) begin
    if(cache_tag_MPORT_en & cache_tag_MPORT_mask) begin
      cache_tag[cache_tag_MPORT_addr] <= cache_tag_MPORT_data; // @[cache.scala 23:31]
    end
    cache_tag_tag_read_MPORT_en_pipe_0 <= state != 4'h5;
    if (state != 4'h5) begin
      cache_tag_tag_read_MPORT_addr_pipe_0 <= addr[10:4];
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_0_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h0 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_0_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_0_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h0 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_0_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_1_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_1_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_1_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_1_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_2_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_2_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_2_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_2_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_3_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_3_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_3_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_3_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_4_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_4_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_4_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_4_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_5_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_5_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_5_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_5_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_6_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_6_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_6_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_6_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_7_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_7_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_7_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_7_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_8_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h8 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_8_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_8_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h8 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_8_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_9_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h9 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_9_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_9_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h9 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_9_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_10_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'ha == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_10_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_10_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'ha == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_10_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_11_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'hb == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_11_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_11_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'hb == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_11_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_12_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'hc == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_12_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_12_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'hc == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_12_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_13_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'hd == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_13_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_13_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'hd == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_13_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_14_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'he == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_14_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_14_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'he == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_14_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_15_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'hf == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_15_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_15_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'hf == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_15_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_16_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h10 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_16_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_16_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h10 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_16_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_17_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h11 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_17_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_17_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h11 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_17_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_18_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h12 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_18_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_18_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h12 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_18_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_19_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h13 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_19_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_19_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h13 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_19_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_20_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h14 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_20_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_20_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h14 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_20_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_21_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h15 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_21_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_21_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h15 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_21_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_22_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h16 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_22_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_22_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h16 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_22_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_23_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h17 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_23_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_23_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h17 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_23_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_24_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h18 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_24_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_24_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h18 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_24_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_25_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h19 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_25_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_25_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h19 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_25_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_26_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1a == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_26_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_26_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1a == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_26_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_27_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1b == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_27_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_27_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1b == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_27_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_28_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1c == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_28_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_28_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1c == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_28_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_29_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1d == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_29_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_29_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1d == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_29_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_30_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1e == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_30_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_30_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1e == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_30_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_31_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1f == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_31_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_31_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h1f == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_31_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_32_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h20 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_32_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_32_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h20 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_32_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_33_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h21 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_33_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_33_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h21 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_33_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_34_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h22 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_34_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_34_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h22 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_34_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_35_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h23 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_35_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_35_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h23 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_35_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_36_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h24 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_36_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_36_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h24 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_36_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_37_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h25 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_37_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_37_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h25 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_37_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_38_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h26 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_38_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_38_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h26 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_38_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_39_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h27 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_39_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_39_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h27 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_39_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_40_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h28 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_40_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_40_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h28 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_40_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_41_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h29 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_41_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_41_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h29 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_41_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_42_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2a == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_42_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_42_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2a == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_42_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_43_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2b == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_43_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_43_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2b == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_43_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_44_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2c == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_44_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_44_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2c == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_44_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_45_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2d == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_45_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_45_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2d == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_45_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_46_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2e == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_46_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_46_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2e == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_46_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_47_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2f == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_47_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_47_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h2f == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_47_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_48_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h30 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_48_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_48_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h30 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_48_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_49_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h31 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_49_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_49_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h31 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_49_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_50_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h32 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_50_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_50_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h32 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_50_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_51_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h33 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_51_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_51_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h33 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_51_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_52_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h34 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_52_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_52_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h34 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_52_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_53_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h35 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_53_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_53_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h35 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_53_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_54_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h36 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_54_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_54_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h36 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_54_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_55_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h37 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_55_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_55_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h37 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_55_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_56_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h38 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_56_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_56_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h38 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_56_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_57_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h39 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_57_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_57_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h39 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_57_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_58_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3a == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_58_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_58_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3a == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_58_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_59_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3b == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_59_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_59_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3b == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_59_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_60_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3c == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_60_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_60_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3c == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_60_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_61_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3d == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_61_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_61_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3d == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_61_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_62_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3e == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_62_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_62_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3e == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_62_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_63_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3f == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_63_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_63_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h3f == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_63_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_64_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h40 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_64_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_64_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h40 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_64_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_65_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h41 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_65_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_65_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h41 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_65_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_66_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h42 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_66_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_66_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h42 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_66_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_67_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h43 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_67_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_67_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h43 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_67_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_68_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h44 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_68_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_68_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h44 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_68_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_69_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h45 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_69_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_69_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h45 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_69_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_70_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h46 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_70_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_70_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h46 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_70_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_71_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h47 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_71_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_71_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h47 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_71_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_72_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h48 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_72_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_72_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h48 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_72_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_73_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h49 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_73_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_73_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h49 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_73_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_74_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4a == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_74_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_74_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4a == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_74_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_75_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4b == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_75_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_75_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4b == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_75_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_76_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4c == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_76_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_76_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4c == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_76_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_77_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4d == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_77_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_77_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4d == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_77_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_78_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4e == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_78_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_78_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4e == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_78_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_79_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4f == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_79_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_79_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h4f == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_79_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_80_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h50 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_80_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_80_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h50 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_80_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_81_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h51 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_81_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_81_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h51 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_81_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_82_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h52 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_82_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_82_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h52 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_82_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_83_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h53 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_83_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_83_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h53 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_83_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_84_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h54 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_84_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_84_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h54 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_84_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_85_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h55 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_85_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_85_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h55 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_85_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_86_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h56 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_86_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_86_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h56 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_86_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_87_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h57 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_87_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_87_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h57 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_87_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_88_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h58 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_88_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_88_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h58 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_88_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_89_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h59 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_89_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_89_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h59 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_89_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_90_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5a == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_90_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_90_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5a == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_90_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_91_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5b == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_91_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_91_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5b == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_91_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_92_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5c == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_92_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_92_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5c == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_92_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_93_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5d == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_93_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_93_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5d == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_93_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_94_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5e == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_94_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_94_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5e == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_94_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_95_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5f == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_95_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_95_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h5f == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_95_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_96_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h60 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_96_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_96_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h60 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_96_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_97_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h61 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_97_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_97_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h61 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_97_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_98_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h62 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_98_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_98_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h62 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_98_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_99_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h63 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_99_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_99_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h63 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_99_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_100_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h64 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_100_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_100_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h64 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_100_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_101_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h65 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_101_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_101_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h65 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_101_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_102_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h66 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_102_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_102_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h66 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_102_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_103_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h67 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_103_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_103_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h67 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_103_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_104_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h68 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_104_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_104_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h68 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_104_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_105_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h69 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_105_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_105_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h69 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_105_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_106_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6a == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_106_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_106_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6a == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_106_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_107_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6b == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_107_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_107_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6b == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_107_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_108_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6c == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_108_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_108_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6c == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_108_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_109_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6d == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_109_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_109_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6d == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_109_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_110_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6e == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_110_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_110_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6e == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_110_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_111_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6f == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_111_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_111_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h6f == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_111_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_112_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h70 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_112_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_112_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h70 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_112_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_113_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h71 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_113_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_113_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h71 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_113_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_114_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h72 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_114_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_114_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h72 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_114_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_115_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h73 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_115_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_115_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h73 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_115_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_116_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h74 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_116_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_116_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h74 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_116_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_117_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h75 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_117_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_117_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h75 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_117_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_118_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h76 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_118_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_118_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h76 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_118_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_119_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h77 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_119_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_119_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h77 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_119_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_120_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h78 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_120_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_120_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h78 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_120_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_121_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h79 == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_121_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_121_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h79 == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_121_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_122_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7a == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_122_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_122_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7a == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_122_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_123_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7b == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_123_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_123_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7b == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_123_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_124_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7c == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_124_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_124_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7c == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_124_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_125_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7d == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_125_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_125_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7d == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_125_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_126_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7e == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_126_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_126_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7e == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_126_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_127_0 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7f == idx & ~way2[0]) begin // @[cache.scala 133:20]
      valid_127_0 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 24:22]
      valid_127_1 <= 1'h0; // @[cache.scala 24:22]
    end else if (7'h7f == idx & way2[0]) begin // @[cache.scala 133:20]
      valid_127_1 <= _io_in_r_bits_data_T_3 | _GEN_1288; // @[cache.scala 133:20]
    end
    if (reset) begin // @[cache.scala 26:18]
      buf_ <= 128'h0; // @[cache.scala 26:18]
    end else if (!(~_state_r_T_4)) begin // @[cache.scala 124:12]
      if (rcnt == addr[3]) begin // @[cache.scala 125:12]
        buf_ <= _buf_T_4;
      end else begin
        buf_ <= _buf_T_5;
      end
    end
    if (reset) begin // @[cache.scala 28:21]
      addr <= 32'h0; // @[cache.scala 28:21]
    end else if (_rmode_T_1) begin // @[cache.scala 75:13]
      addr <= io_in_ar_bits_addr;
    end
    if (reset) begin // @[cache.scala 37:23]
      state <= 4'h0; // @[cache.scala 37:23]
    end else if (4'h5 == state) begin // @[Mux.scala 80:57]
      state <= 4'h0;
    end else if (4'h4 == state) begin // @[Mux.scala 80:57]
      if (state_r == 4'h9) begin // @[cache.scala 72:20]
        state <= 4'h5;
      end else begin
        state <= 4'h4;
      end
    end else if (4'h3 == state) begin // @[Mux.scala 80:57]
      state <= 4'h0;
    end else begin
      state <= _state_T_21;
    end
    if (reset) begin // @[cache.scala 38:24]
      state_r <= 4'h0; // @[cache.scala 38:24]
    end else if (4'h9 == state_r) begin // @[Mux.scala 80:57]
      if (state != 4'h4) begin // @[cache.scala 94:25]
        state_r <= 4'h0;
      end else begin
        state_r <= 4'h9;
      end
    end else if (4'h7 == state_r) begin // @[Mux.scala 80:57]
      if (_state_r_T_4) begin // @[cache.scala 93:25]
        state_r <= 4'h9;
      end else begin
        state_r <= 4'h7;
      end
    end else if (4'h6 == state_r) begin // @[Mux.scala 80:57]
      state_r <= _state_r_T_5;
    end else begin
      state_r <= _state_r_T_11;
    end
    if (reset) begin // @[cache.scala 39:24]
      state_w <= 4'h0; // @[cache.scala 39:24]
    end else if (4'h9 == state_w) begin // @[Mux.scala 80:57]
      if (state != 4'h4) begin // @[cache.scala 94:25]
        state_w <= 4'h0;
      end else begin
        state_w <= 4'h9;
      end
    end else if (4'h8 == state_w) begin // @[Mux.scala 80:57]
      if (_state_w_T_8) begin // @[cache.scala 100:25]
        state_w <= 4'h9;
      end else begin
        state_w <= 4'h8;
      end
    end else if (4'h7 == state_w) begin // @[Mux.scala 80:57]
      state_w <= _state_w_T_7;
    end else begin
      state_w <= _state_w_T_15;
    end
    if (reset) begin // @[cache.scala 48:20]
      rmode <= 1'h0; // @[cache.scala 48:20]
    end else begin
      rmode <= state == 4'h0 & _rmode_T_1 | _rmode_T_4; // @[cache.scala 50:8]
    end
    if (reset) begin // @[cache.scala 121:19]
      rcnt <= 1'h0; // @[cache.scala 121:19]
    end else if (_io_mem_ar_valid_T) begin // @[cache.scala 122:12]
      rcnt <= 1'h0;
    end else if (_state_r_T_4) begin // @[cache.scala 123:12]
      rcnt <= rcnt + 1'h1;
    end
    if (reset) begin // @[cache.scala 129:22]
      taggg <= 42'h0; // @[cache.scala 129:22]
    end else begin
      taggg <= tag_read; // @[cache.scala 130:8]
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
`ifdef RANDOMIZE_MEM_INIT
  _RAND_0 = {2{`RANDOM}};
  for (initvar = 0; initvar < 128; initvar = initvar+1)
    cache_tag[initvar] = _RAND_0[41:0];
`endif // RANDOMIZE_MEM_INIT
`ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  cache_tag_tag_read_MPORT_en_pipe_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  cache_tag_tag_read_MPORT_addr_pipe_0 = _RAND_2[6:0];
  _RAND_3 = {1{`RANDOM}};
  valid_0_0 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  valid_0_1 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  valid_1_0 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  valid_1_1 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  valid_2_0 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  valid_2_1 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  valid_3_0 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  valid_3_1 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  valid_4_0 = _RAND_11[0:0];
  _RAND_12 = {1{`RANDOM}};
  valid_4_1 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  valid_5_0 = _RAND_13[0:0];
  _RAND_14 = {1{`RANDOM}};
  valid_5_1 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  valid_6_0 = _RAND_15[0:0];
  _RAND_16 = {1{`RANDOM}};
  valid_6_1 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  valid_7_0 = _RAND_17[0:0];
  _RAND_18 = {1{`RANDOM}};
  valid_7_1 = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  valid_8_0 = _RAND_19[0:0];
  _RAND_20 = {1{`RANDOM}};
  valid_8_1 = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  valid_9_0 = _RAND_21[0:0];
  _RAND_22 = {1{`RANDOM}};
  valid_9_1 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  valid_10_0 = _RAND_23[0:0];
  _RAND_24 = {1{`RANDOM}};
  valid_10_1 = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  valid_11_0 = _RAND_25[0:0];
  _RAND_26 = {1{`RANDOM}};
  valid_11_1 = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  valid_12_0 = _RAND_27[0:0];
  _RAND_28 = {1{`RANDOM}};
  valid_12_1 = _RAND_28[0:0];
  _RAND_29 = {1{`RANDOM}};
  valid_13_0 = _RAND_29[0:0];
  _RAND_30 = {1{`RANDOM}};
  valid_13_1 = _RAND_30[0:0];
  _RAND_31 = {1{`RANDOM}};
  valid_14_0 = _RAND_31[0:0];
  _RAND_32 = {1{`RANDOM}};
  valid_14_1 = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  valid_15_0 = _RAND_33[0:0];
  _RAND_34 = {1{`RANDOM}};
  valid_15_1 = _RAND_34[0:0];
  _RAND_35 = {1{`RANDOM}};
  valid_16_0 = _RAND_35[0:0];
  _RAND_36 = {1{`RANDOM}};
  valid_16_1 = _RAND_36[0:0];
  _RAND_37 = {1{`RANDOM}};
  valid_17_0 = _RAND_37[0:0];
  _RAND_38 = {1{`RANDOM}};
  valid_17_1 = _RAND_38[0:0];
  _RAND_39 = {1{`RANDOM}};
  valid_18_0 = _RAND_39[0:0];
  _RAND_40 = {1{`RANDOM}};
  valid_18_1 = _RAND_40[0:0];
  _RAND_41 = {1{`RANDOM}};
  valid_19_0 = _RAND_41[0:0];
  _RAND_42 = {1{`RANDOM}};
  valid_19_1 = _RAND_42[0:0];
  _RAND_43 = {1{`RANDOM}};
  valid_20_0 = _RAND_43[0:0];
  _RAND_44 = {1{`RANDOM}};
  valid_20_1 = _RAND_44[0:0];
  _RAND_45 = {1{`RANDOM}};
  valid_21_0 = _RAND_45[0:0];
  _RAND_46 = {1{`RANDOM}};
  valid_21_1 = _RAND_46[0:0];
  _RAND_47 = {1{`RANDOM}};
  valid_22_0 = _RAND_47[0:0];
  _RAND_48 = {1{`RANDOM}};
  valid_22_1 = _RAND_48[0:0];
  _RAND_49 = {1{`RANDOM}};
  valid_23_0 = _RAND_49[0:0];
  _RAND_50 = {1{`RANDOM}};
  valid_23_1 = _RAND_50[0:0];
  _RAND_51 = {1{`RANDOM}};
  valid_24_0 = _RAND_51[0:0];
  _RAND_52 = {1{`RANDOM}};
  valid_24_1 = _RAND_52[0:0];
  _RAND_53 = {1{`RANDOM}};
  valid_25_0 = _RAND_53[0:0];
  _RAND_54 = {1{`RANDOM}};
  valid_25_1 = _RAND_54[0:0];
  _RAND_55 = {1{`RANDOM}};
  valid_26_0 = _RAND_55[0:0];
  _RAND_56 = {1{`RANDOM}};
  valid_26_1 = _RAND_56[0:0];
  _RAND_57 = {1{`RANDOM}};
  valid_27_0 = _RAND_57[0:0];
  _RAND_58 = {1{`RANDOM}};
  valid_27_1 = _RAND_58[0:0];
  _RAND_59 = {1{`RANDOM}};
  valid_28_0 = _RAND_59[0:0];
  _RAND_60 = {1{`RANDOM}};
  valid_28_1 = _RAND_60[0:0];
  _RAND_61 = {1{`RANDOM}};
  valid_29_0 = _RAND_61[0:0];
  _RAND_62 = {1{`RANDOM}};
  valid_29_1 = _RAND_62[0:0];
  _RAND_63 = {1{`RANDOM}};
  valid_30_0 = _RAND_63[0:0];
  _RAND_64 = {1{`RANDOM}};
  valid_30_1 = _RAND_64[0:0];
  _RAND_65 = {1{`RANDOM}};
  valid_31_0 = _RAND_65[0:0];
  _RAND_66 = {1{`RANDOM}};
  valid_31_1 = _RAND_66[0:0];
  _RAND_67 = {1{`RANDOM}};
  valid_32_0 = _RAND_67[0:0];
  _RAND_68 = {1{`RANDOM}};
  valid_32_1 = _RAND_68[0:0];
  _RAND_69 = {1{`RANDOM}};
  valid_33_0 = _RAND_69[0:0];
  _RAND_70 = {1{`RANDOM}};
  valid_33_1 = _RAND_70[0:0];
  _RAND_71 = {1{`RANDOM}};
  valid_34_0 = _RAND_71[0:0];
  _RAND_72 = {1{`RANDOM}};
  valid_34_1 = _RAND_72[0:0];
  _RAND_73 = {1{`RANDOM}};
  valid_35_0 = _RAND_73[0:0];
  _RAND_74 = {1{`RANDOM}};
  valid_35_1 = _RAND_74[0:0];
  _RAND_75 = {1{`RANDOM}};
  valid_36_0 = _RAND_75[0:0];
  _RAND_76 = {1{`RANDOM}};
  valid_36_1 = _RAND_76[0:0];
  _RAND_77 = {1{`RANDOM}};
  valid_37_0 = _RAND_77[0:0];
  _RAND_78 = {1{`RANDOM}};
  valid_37_1 = _RAND_78[0:0];
  _RAND_79 = {1{`RANDOM}};
  valid_38_0 = _RAND_79[0:0];
  _RAND_80 = {1{`RANDOM}};
  valid_38_1 = _RAND_80[0:0];
  _RAND_81 = {1{`RANDOM}};
  valid_39_0 = _RAND_81[0:0];
  _RAND_82 = {1{`RANDOM}};
  valid_39_1 = _RAND_82[0:0];
  _RAND_83 = {1{`RANDOM}};
  valid_40_0 = _RAND_83[0:0];
  _RAND_84 = {1{`RANDOM}};
  valid_40_1 = _RAND_84[0:0];
  _RAND_85 = {1{`RANDOM}};
  valid_41_0 = _RAND_85[0:0];
  _RAND_86 = {1{`RANDOM}};
  valid_41_1 = _RAND_86[0:0];
  _RAND_87 = {1{`RANDOM}};
  valid_42_0 = _RAND_87[0:0];
  _RAND_88 = {1{`RANDOM}};
  valid_42_1 = _RAND_88[0:0];
  _RAND_89 = {1{`RANDOM}};
  valid_43_0 = _RAND_89[0:0];
  _RAND_90 = {1{`RANDOM}};
  valid_43_1 = _RAND_90[0:0];
  _RAND_91 = {1{`RANDOM}};
  valid_44_0 = _RAND_91[0:0];
  _RAND_92 = {1{`RANDOM}};
  valid_44_1 = _RAND_92[0:0];
  _RAND_93 = {1{`RANDOM}};
  valid_45_0 = _RAND_93[0:0];
  _RAND_94 = {1{`RANDOM}};
  valid_45_1 = _RAND_94[0:0];
  _RAND_95 = {1{`RANDOM}};
  valid_46_0 = _RAND_95[0:0];
  _RAND_96 = {1{`RANDOM}};
  valid_46_1 = _RAND_96[0:0];
  _RAND_97 = {1{`RANDOM}};
  valid_47_0 = _RAND_97[0:0];
  _RAND_98 = {1{`RANDOM}};
  valid_47_1 = _RAND_98[0:0];
  _RAND_99 = {1{`RANDOM}};
  valid_48_0 = _RAND_99[0:0];
  _RAND_100 = {1{`RANDOM}};
  valid_48_1 = _RAND_100[0:0];
  _RAND_101 = {1{`RANDOM}};
  valid_49_0 = _RAND_101[0:0];
  _RAND_102 = {1{`RANDOM}};
  valid_49_1 = _RAND_102[0:0];
  _RAND_103 = {1{`RANDOM}};
  valid_50_0 = _RAND_103[0:0];
  _RAND_104 = {1{`RANDOM}};
  valid_50_1 = _RAND_104[0:0];
  _RAND_105 = {1{`RANDOM}};
  valid_51_0 = _RAND_105[0:0];
  _RAND_106 = {1{`RANDOM}};
  valid_51_1 = _RAND_106[0:0];
  _RAND_107 = {1{`RANDOM}};
  valid_52_0 = _RAND_107[0:0];
  _RAND_108 = {1{`RANDOM}};
  valid_52_1 = _RAND_108[0:0];
  _RAND_109 = {1{`RANDOM}};
  valid_53_0 = _RAND_109[0:0];
  _RAND_110 = {1{`RANDOM}};
  valid_53_1 = _RAND_110[0:0];
  _RAND_111 = {1{`RANDOM}};
  valid_54_0 = _RAND_111[0:0];
  _RAND_112 = {1{`RANDOM}};
  valid_54_1 = _RAND_112[0:0];
  _RAND_113 = {1{`RANDOM}};
  valid_55_0 = _RAND_113[0:0];
  _RAND_114 = {1{`RANDOM}};
  valid_55_1 = _RAND_114[0:0];
  _RAND_115 = {1{`RANDOM}};
  valid_56_0 = _RAND_115[0:0];
  _RAND_116 = {1{`RANDOM}};
  valid_56_1 = _RAND_116[0:0];
  _RAND_117 = {1{`RANDOM}};
  valid_57_0 = _RAND_117[0:0];
  _RAND_118 = {1{`RANDOM}};
  valid_57_1 = _RAND_118[0:0];
  _RAND_119 = {1{`RANDOM}};
  valid_58_0 = _RAND_119[0:0];
  _RAND_120 = {1{`RANDOM}};
  valid_58_1 = _RAND_120[0:0];
  _RAND_121 = {1{`RANDOM}};
  valid_59_0 = _RAND_121[0:0];
  _RAND_122 = {1{`RANDOM}};
  valid_59_1 = _RAND_122[0:0];
  _RAND_123 = {1{`RANDOM}};
  valid_60_0 = _RAND_123[0:0];
  _RAND_124 = {1{`RANDOM}};
  valid_60_1 = _RAND_124[0:0];
  _RAND_125 = {1{`RANDOM}};
  valid_61_0 = _RAND_125[0:0];
  _RAND_126 = {1{`RANDOM}};
  valid_61_1 = _RAND_126[0:0];
  _RAND_127 = {1{`RANDOM}};
  valid_62_0 = _RAND_127[0:0];
  _RAND_128 = {1{`RANDOM}};
  valid_62_1 = _RAND_128[0:0];
  _RAND_129 = {1{`RANDOM}};
  valid_63_0 = _RAND_129[0:0];
  _RAND_130 = {1{`RANDOM}};
  valid_63_1 = _RAND_130[0:0];
  _RAND_131 = {1{`RANDOM}};
  valid_64_0 = _RAND_131[0:0];
  _RAND_132 = {1{`RANDOM}};
  valid_64_1 = _RAND_132[0:0];
  _RAND_133 = {1{`RANDOM}};
  valid_65_0 = _RAND_133[0:0];
  _RAND_134 = {1{`RANDOM}};
  valid_65_1 = _RAND_134[0:0];
  _RAND_135 = {1{`RANDOM}};
  valid_66_0 = _RAND_135[0:0];
  _RAND_136 = {1{`RANDOM}};
  valid_66_1 = _RAND_136[0:0];
  _RAND_137 = {1{`RANDOM}};
  valid_67_0 = _RAND_137[0:0];
  _RAND_138 = {1{`RANDOM}};
  valid_67_1 = _RAND_138[0:0];
  _RAND_139 = {1{`RANDOM}};
  valid_68_0 = _RAND_139[0:0];
  _RAND_140 = {1{`RANDOM}};
  valid_68_1 = _RAND_140[0:0];
  _RAND_141 = {1{`RANDOM}};
  valid_69_0 = _RAND_141[0:0];
  _RAND_142 = {1{`RANDOM}};
  valid_69_1 = _RAND_142[0:0];
  _RAND_143 = {1{`RANDOM}};
  valid_70_0 = _RAND_143[0:0];
  _RAND_144 = {1{`RANDOM}};
  valid_70_1 = _RAND_144[0:0];
  _RAND_145 = {1{`RANDOM}};
  valid_71_0 = _RAND_145[0:0];
  _RAND_146 = {1{`RANDOM}};
  valid_71_1 = _RAND_146[0:0];
  _RAND_147 = {1{`RANDOM}};
  valid_72_0 = _RAND_147[0:0];
  _RAND_148 = {1{`RANDOM}};
  valid_72_1 = _RAND_148[0:0];
  _RAND_149 = {1{`RANDOM}};
  valid_73_0 = _RAND_149[0:0];
  _RAND_150 = {1{`RANDOM}};
  valid_73_1 = _RAND_150[0:0];
  _RAND_151 = {1{`RANDOM}};
  valid_74_0 = _RAND_151[0:0];
  _RAND_152 = {1{`RANDOM}};
  valid_74_1 = _RAND_152[0:0];
  _RAND_153 = {1{`RANDOM}};
  valid_75_0 = _RAND_153[0:0];
  _RAND_154 = {1{`RANDOM}};
  valid_75_1 = _RAND_154[0:0];
  _RAND_155 = {1{`RANDOM}};
  valid_76_0 = _RAND_155[0:0];
  _RAND_156 = {1{`RANDOM}};
  valid_76_1 = _RAND_156[0:0];
  _RAND_157 = {1{`RANDOM}};
  valid_77_0 = _RAND_157[0:0];
  _RAND_158 = {1{`RANDOM}};
  valid_77_1 = _RAND_158[0:0];
  _RAND_159 = {1{`RANDOM}};
  valid_78_0 = _RAND_159[0:0];
  _RAND_160 = {1{`RANDOM}};
  valid_78_1 = _RAND_160[0:0];
  _RAND_161 = {1{`RANDOM}};
  valid_79_0 = _RAND_161[0:0];
  _RAND_162 = {1{`RANDOM}};
  valid_79_1 = _RAND_162[0:0];
  _RAND_163 = {1{`RANDOM}};
  valid_80_0 = _RAND_163[0:0];
  _RAND_164 = {1{`RANDOM}};
  valid_80_1 = _RAND_164[0:0];
  _RAND_165 = {1{`RANDOM}};
  valid_81_0 = _RAND_165[0:0];
  _RAND_166 = {1{`RANDOM}};
  valid_81_1 = _RAND_166[0:0];
  _RAND_167 = {1{`RANDOM}};
  valid_82_0 = _RAND_167[0:0];
  _RAND_168 = {1{`RANDOM}};
  valid_82_1 = _RAND_168[0:0];
  _RAND_169 = {1{`RANDOM}};
  valid_83_0 = _RAND_169[0:0];
  _RAND_170 = {1{`RANDOM}};
  valid_83_1 = _RAND_170[0:0];
  _RAND_171 = {1{`RANDOM}};
  valid_84_0 = _RAND_171[0:0];
  _RAND_172 = {1{`RANDOM}};
  valid_84_1 = _RAND_172[0:0];
  _RAND_173 = {1{`RANDOM}};
  valid_85_0 = _RAND_173[0:0];
  _RAND_174 = {1{`RANDOM}};
  valid_85_1 = _RAND_174[0:0];
  _RAND_175 = {1{`RANDOM}};
  valid_86_0 = _RAND_175[0:0];
  _RAND_176 = {1{`RANDOM}};
  valid_86_1 = _RAND_176[0:0];
  _RAND_177 = {1{`RANDOM}};
  valid_87_0 = _RAND_177[0:0];
  _RAND_178 = {1{`RANDOM}};
  valid_87_1 = _RAND_178[0:0];
  _RAND_179 = {1{`RANDOM}};
  valid_88_0 = _RAND_179[0:0];
  _RAND_180 = {1{`RANDOM}};
  valid_88_1 = _RAND_180[0:0];
  _RAND_181 = {1{`RANDOM}};
  valid_89_0 = _RAND_181[0:0];
  _RAND_182 = {1{`RANDOM}};
  valid_89_1 = _RAND_182[0:0];
  _RAND_183 = {1{`RANDOM}};
  valid_90_0 = _RAND_183[0:0];
  _RAND_184 = {1{`RANDOM}};
  valid_90_1 = _RAND_184[0:0];
  _RAND_185 = {1{`RANDOM}};
  valid_91_0 = _RAND_185[0:0];
  _RAND_186 = {1{`RANDOM}};
  valid_91_1 = _RAND_186[0:0];
  _RAND_187 = {1{`RANDOM}};
  valid_92_0 = _RAND_187[0:0];
  _RAND_188 = {1{`RANDOM}};
  valid_92_1 = _RAND_188[0:0];
  _RAND_189 = {1{`RANDOM}};
  valid_93_0 = _RAND_189[0:0];
  _RAND_190 = {1{`RANDOM}};
  valid_93_1 = _RAND_190[0:0];
  _RAND_191 = {1{`RANDOM}};
  valid_94_0 = _RAND_191[0:0];
  _RAND_192 = {1{`RANDOM}};
  valid_94_1 = _RAND_192[0:0];
  _RAND_193 = {1{`RANDOM}};
  valid_95_0 = _RAND_193[0:0];
  _RAND_194 = {1{`RANDOM}};
  valid_95_1 = _RAND_194[0:0];
  _RAND_195 = {1{`RANDOM}};
  valid_96_0 = _RAND_195[0:0];
  _RAND_196 = {1{`RANDOM}};
  valid_96_1 = _RAND_196[0:0];
  _RAND_197 = {1{`RANDOM}};
  valid_97_0 = _RAND_197[0:0];
  _RAND_198 = {1{`RANDOM}};
  valid_97_1 = _RAND_198[0:0];
  _RAND_199 = {1{`RANDOM}};
  valid_98_0 = _RAND_199[0:0];
  _RAND_200 = {1{`RANDOM}};
  valid_98_1 = _RAND_200[0:0];
  _RAND_201 = {1{`RANDOM}};
  valid_99_0 = _RAND_201[0:0];
  _RAND_202 = {1{`RANDOM}};
  valid_99_1 = _RAND_202[0:0];
  _RAND_203 = {1{`RANDOM}};
  valid_100_0 = _RAND_203[0:0];
  _RAND_204 = {1{`RANDOM}};
  valid_100_1 = _RAND_204[0:0];
  _RAND_205 = {1{`RANDOM}};
  valid_101_0 = _RAND_205[0:0];
  _RAND_206 = {1{`RANDOM}};
  valid_101_1 = _RAND_206[0:0];
  _RAND_207 = {1{`RANDOM}};
  valid_102_0 = _RAND_207[0:0];
  _RAND_208 = {1{`RANDOM}};
  valid_102_1 = _RAND_208[0:0];
  _RAND_209 = {1{`RANDOM}};
  valid_103_0 = _RAND_209[0:0];
  _RAND_210 = {1{`RANDOM}};
  valid_103_1 = _RAND_210[0:0];
  _RAND_211 = {1{`RANDOM}};
  valid_104_0 = _RAND_211[0:0];
  _RAND_212 = {1{`RANDOM}};
  valid_104_1 = _RAND_212[0:0];
  _RAND_213 = {1{`RANDOM}};
  valid_105_0 = _RAND_213[0:0];
  _RAND_214 = {1{`RANDOM}};
  valid_105_1 = _RAND_214[0:0];
  _RAND_215 = {1{`RANDOM}};
  valid_106_0 = _RAND_215[0:0];
  _RAND_216 = {1{`RANDOM}};
  valid_106_1 = _RAND_216[0:0];
  _RAND_217 = {1{`RANDOM}};
  valid_107_0 = _RAND_217[0:0];
  _RAND_218 = {1{`RANDOM}};
  valid_107_1 = _RAND_218[0:0];
  _RAND_219 = {1{`RANDOM}};
  valid_108_0 = _RAND_219[0:0];
  _RAND_220 = {1{`RANDOM}};
  valid_108_1 = _RAND_220[0:0];
  _RAND_221 = {1{`RANDOM}};
  valid_109_0 = _RAND_221[0:0];
  _RAND_222 = {1{`RANDOM}};
  valid_109_1 = _RAND_222[0:0];
  _RAND_223 = {1{`RANDOM}};
  valid_110_0 = _RAND_223[0:0];
  _RAND_224 = {1{`RANDOM}};
  valid_110_1 = _RAND_224[0:0];
  _RAND_225 = {1{`RANDOM}};
  valid_111_0 = _RAND_225[0:0];
  _RAND_226 = {1{`RANDOM}};
  valid_111_1 = _RAND_226[0:0];
  _RAND_227 = {1{`RANDOM}};
  valid_112_0 = _RAND_227[0:0];
  _RAND_228 = {1{`RANDOM}};
  valid_112_1 = _RAND_228[0:0];
  _RAND_229 = {1{`RANDOM}};
  valid_113_0 = _RAND_229[0:0];
  _RAND_230 = {1{`RANDOM}};
  valid_113_1 = _RAND_230[0:0];
  _RAND_231 = {1{`RANDOM}};
  valid_114_0 = _RAND_231[0:0];
  _RAND_232 = {1{`RANDOM}};
  valid_114_1 = _RAND_232[0:0];
  _RAND_233 = {1{`RANDOM}};
  valid_115_0 = _RAND_233[0:0];
  _RAND_234 = {1{`RANDOM}};
  valid_115_1 = _RAND_234[0:0];
  _RAND_235 = {1{`RANDOM}};
  valid_116_0 = _RAND_235[0:0];
  _RAND_236 = {1{`RANDOM}};
  valid_116_1 = _RAND_236[0:0];
  _RAND_237 = {1{`RANDOM}};
  valid_117_0 = _RAND_237[0:0];
  _RAND_238 = {1{`RANDOM}};
  valid_117_1 = _RAND_238[0:0];
  _RAND_239 = {1{`RANDOM}};
  valid_118_0 = _RAND_239[0:0];
  _RAND_240 = {1{`RANDOM}};
  valid_118_1 = _RAND_240[0:0];
  _RAND_241 = {1{`RANDOM}};
  valid_119_0 = _RAND_241[0:0];
  _RAND_242 = {1{`RANDOM}};
  valid_119_1 = _RAND_242[0:0];
  _RAND_243 = {1{`RANDOM}};
  valid_120_0 = _RAND_243[0:0];
  _RAND_244 = {1{`RANDOM}};
  valid_120_1 = _RAND_244[0:0];
  _RAND_245 = {1{`RANDOM}};
  valid_121_0 = _RAND_245[0:0];
  _RAND_246 = {1{`RANDOM}};
  valid_121_1 = _RAND_246[0:0];
  _RAND_247 = {1{`RANDOM}};
  valid_122_0 = _RAND_247[0:0];
  _RAND_248 = {1{`RANDOM}};
  valid_122_1 = _RAND_248[0:0];
  _RAND_249 = {1{`RANDOM}};
  valid_123_0 = _RAND_249[0:0];
  _RAND_250 = {1{`RANDOM}};
  valid_123_1 = _RAND_250[0:0];
  _RAND_251 = {1{`RANDOM}};
  valid_124_0 = _RAND_251[0:0];
  _RAND_252 = {1{`RANDOM}};
  valid_124_1 = _RAND_252[0:0];
  _RAND_253 = {1{`RANDOM}};
  valid_125_0 = _RAND_253[0:0];
  _RAND_254 = {1{`RANDOM}};
  valid_125_1 = _RAND_254[0:0];
  _RAND_255 = {1{`RANDOM}};
  valid_126_0 = _RAND_255[0:0];
  _RAND_256 = {1{`RANDOM}};
  valid_126_1 = _RAND_256[0:0];
  _RAND_257 = {1{`RANDOM}};
  valid_127_0 = _RAND_257[0:0];
  _RAND_258 = {1{`RANDOM}};
  valid_127_1 = _RAND_258[0:0];
  _RAND_259 = {4{`RANDOM}};
  buf_ = _RAND_259[127:0];
  _RAND_260 = {1{`RANDOM}};
  addr = _RAND_260[31:0];
  _RAND_261 = {1{`RANDOM}};
  state = _RAND_261[3:0];
  _RAND_262 = {1{`RANDOM}};
  state_r = _RAND_262[3:0];
  _RAND_263 = {1{`RANDOM}};
  state_w = _RAND_263[3:0];
  _RAND_264 = {1{`RANDOM}};
  rmode = _RAND_264[0:0];
  _RAND_265 = {1{`RANDOM}};
  rcnt = _RAND_265[0:0];
  _RAND_266 = {2{`RANDOM}};
  taggg = _RAND_266[41:0];
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
  input         io_in_r_ready,
  output        io_in_r_valid,
  output [63:0] io_in_r_bits_data,
  output        io_in_aw_ready,
  input         io_in_aw_valid,
  input  [31:0] io_in_aw_bits_addr,
  output        io_in_w_ready,
  input         io_in_w_valid,
  input  [63:0] io_in_w_bits_data,
  input  [7:0]  io_in_w_bits_strb,
  input         io_mem_ar_ready,
  output        io_mem_ar_valid,
  output [31:0] io_mem_ar_bits_addr,
  output        io_mem_r_ready,
  input         io_mem_r_valid,
  input  [63:0] io_mem_r_bits_data,
  input         io_mem_aw_ready,
  output        io_mem_aw_valid,
  output [31:0] io_mem_aw_bits_addr,
  input         io_mem_w_ready,
  output        io_mem_w_valid,
  output [63:0] io_mem_w_bits_data,
  output [7:0]  io_mem_w_bits_strb
);
  assign io_in_ar_ready = io_mem_ar_ready; // @[cache.scala 169:17]
  assign io_in_r_valid = io_mem_r_valid; // @[cache.scala 172:16]
  assign io_in_r_bits_data = io_mem_r_bits_data; // @[cache.scala 170:20]
  assign io_in_aw_ready = io_mem_aw_ready; // @[cache.scala 176:17]
  assign io_in_w_ready = io_mem_w_ready; // @[cache.scala 180:16]
  assign io_mem_ar_valid = io_in_ar_valid; // @[cache.scala 168:17]
  assign io_mem_ar_bits_addr = io_in_ar_bits_addr; // @[cache.scala 167:21]
  assign io_mem_r_ready = io_in_r_ready; // @[cache.scala 173:16]
  assign io_mem_aw_valid = io_in_aw_valid; // @[cache.scala 175:17]
  assign io_mem_aw_bits_addr = io_in_aw_bits_addr; // @[cache.scala 174:21]
  assign io_mem_w_valid = io_in_w_valid; // @[cache.scala 179:16]
  assign io_mem_w_bits_data = io_in_w_bits_data; // @[cache.scala 177:20]
  assign io_mem_w_bits_strb = io_in_w_bits_strb; // @[cache.scala 178:20]
endmodule
module CacheRAM(
  input          clock,
  input          reset,
  output [127:0] io_bits_Q,
  input          io_bits_CEN,
  input          io_bits_WEN,
  input  [7:0]   io_bits_A,
  input  [127:0] io_bits_D
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [127:0] S011HD1P_X32Y2D128_BW_Q; // @[CacheRAM.scala 19:18]
  wire  S011HD1P_X32Y2D128_BW_CLK; // @[CacheRAM.scala 19:18]
  wire  S011HD1P_X32Y2D128_BW_CEN; // @[CacheRAM.scala 19:18]
  wire  S011HD1P_X32Y2D128_BW_WEN; // @[CacheRAM.scala 19:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_BWEN; // @[CacheRAM.scala 19:18]
  wire [5:0] S011HD1P_X32Y2D128_BW_A; // @[CacheRAM.scala 19:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_D; // @[CacheRAM.scala 19:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_1_Q; // @[CacheRAM.scala 20:18]
  wire  S011HD1P_X32Y2D128_BW_1_CLK; // @[CacheRAM.scala 20:18]
  wire  S011HD1P_X32Y2D128_BW_1_CEN; // @[CacheRAM.scala 20:18]
  wire  S011HD1P_X32Y2D128_BW_1_WEN; // @[CacheRAM.scala 20:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_1_BWEN; // @[CacheRAM.scala 20:18]
  wire [5:0] S011HD1P_X32Y2D128_BW_1_A; // @[CacheRAM.scala 20:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_1_D; // @[CacheRAM.scala 20:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_2_Q; // @[CacheRAM.scala 21:18]
  wire  S011HD1P_X32Y2D128_BW_2_CLK; // @[CacheRAM.scala 21:18]
  wire  S011HD1P_X32Y2D128_BW_2_CEN; // @[CacheRAM.scala 21:18]
  wire  S011HD1P_X32Y2D128_BW_2_WEN; // @[CacheRAM.scala 21:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_2_BWEN; // @[CacheRAM.scala 21:18]
  wire [5:0] S011HD1P_X32Y2D128_BW_2_A; // @[CacheRAM.scala 21:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_2_D; // @[CacheRAM.scala 21:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_3_Q; // @[CacheRAM.scala 22:18]
  wire  S011HD1P_X32Y2D128_BW_3_CLK; // @[CacheRAM.scala 22:18]
  wire  S011HD1P_X32Y2D128_BW_3_CEN; // @[CacheRAM.scala 22:18]
  wire  S011HD1P_X32Y2D128_BW_3_WEN; // @[CacheRAM.scala 22:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_3_BWEN; // @[CacheRAM.scala 22:18]
  wire [5:0] S011HD1P_X32Y2D128_BW_3_A; // @[CacheRAM.scala 22:18]
  wire [127:0] S011HD1P_X32Y2D128_BW_3_D; // @[CacheRAM.scala 22:18]
  reg [1:0] choose; // @[CacheRAM.scala 27:23]
  wire [127:0] _io_bits_Q_T_3 = choose == 2'h2 ? S011HD1P_X32Y2D128_BW_2_Q : S011HD1P_X32Y2D128_BW_3_Q; // @[CacheRAM.scala 39:17]
  wire [127:0] _io_bits_Q_T_4 = choose == 2'h1 ? S011HD1P_X32Y2D128_BW_1_Q : _io_bits_Q_T_3; // @[CacheRAM.scala 38:17]
  S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW ( // @[CacheRAM.scala 19:18]
    .Q(S011HD1P_X32Y2D128_BW_Q),
    .CLK(S011HD1P_X32Y2D128_BW_CLK),
    .CEN(S011HD1P_X32Y2D128_BW_CEN),
    .WEN(S011HD1P_X32Y2D128_BW_WEN),
    .BWEN(S011HD1P_X32Y2D128_BW_BWEN),
    .A(S011HD1P_X32Y2D128_BW_A),
    .D(S011HD1P_X32Y2D128_BW_D)
  );
  S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_1 ( // @[CacheRAM.scala 20:18]
    .Q(S011HD1P_X32Y2D128_BW_1_Q),
    .CLK(S011HD1P_X32Y2D128_BW_1_CLK),
    .CEN(S011HD1P_X32Y2D128_BW_1_CEN),
    .WEN(S011HD1P_X32Y2D128_BW_1_WEN),
    .BWEN(S011HD1P_X32Y2D128_BW_1_BWEN),
    .A(S011HD1P_X32Y2D128_BW_1_A),
    .D(S011HD1P_X32Y2D128_BW_1_D)
  );
  S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_2 ( // @[CacheRAM.scala 21:18]
    .Q(S011HD1P_X32Y2D128_BW_2_Q),
    .CLK(S011HD1P_X32Y2D128_BW_2_CLK),
    .CEN(S011HD1P_X32Y2D128_BW_2_CEN),
    .WEN(S011HD1P_X32Y2D128_BW_2_WEN),
    .BWEN(S011HD1P_X32Y2D128_BW_2_BWEN),
    .A(S011HD1P_X32Y2D128_BW_2_A),
    .D(S011HD1P_X32Y2D128_BW_2_D)
  );
  S011HD1P_X32Y2D128_BW S011HD1P_X32Y2D128_BW_3 ( // @[CacheRAM.scala 22:18]
    .Q(S011HD1P_X32Y2D128_BW_3_Q),
    .CLK(S011HD1P_X32Y2D128_BW_3_CLK),
    .CEN(S011HD1P_X32Y2D128_BW_3_CEN),
    .WEN(S011HD1P_X32Y2D128_BW_3_WEN),
    .BWEN(S011HD1P_X32Y2D128_BW_3_BWEN),
    .A(S011HD1P_X32Y2D128_BW_3_A),
    .D(S011HD1P_X32Y2D128_BW_3_D)
  );
  assign io_bits_Q = choose == 2'h0 ? S011HD1P_X32Y2D128_BW_Q : _io_bits_Q_T_4; // @[CacheRAM.scala 37:17]
  assign S011HD1P_X32Y2D128_BW_CLK = clock; // @[CacheRAM.scala 40:11]
  assign S011HD1P_X32Y2D128_BW_CEN = ~(io_bits_CEN & io_bits_A[7:6] == 2'h0); // @[CacheRAM.scala 41:14]
  assign S011HD1P_X32Y2D128_BW_WEN = ~io_bits_WEN; // @[CacheRAM.scala 42:14]
  assign S011HD1P_X32Y2D128_BW_BWEN = 128'h0; // @[CacheRAM.scala 43:15]
  assign S011HD1P_X32Y2D128_BW_A = io_bits_A[5:0]; // @[CacheRAM.scala 44:21]
  assign S011HD1P_X32Y2D128_BW_D = io_bits_D; // @[CacheRAM.scala 45:9]
  assign S011HD1P_X32Y2D128_BW_1_CLK = clock; // @[CacheRAM.scala 47:11]
  assign S011HD1P_X32Y2D128_BW_1_CEN = ~(io_bits_CEN & io_bits_A[7:6] == 2'h1); // @[CacheRAM.scala 48:14]
  assign S011HD1P_X32Y2D128_BW_1_WEN = ~io_bits_WEN; // @[CacheRAM.scala 49:14]
  assign S011HD1P_X32Y2D128_BW_1_BWEN = 128'h0; // @[CacheRAM.scala 50:15]
  assign S011HD1P_X32Y2D128_BW_1_A = io_bits_A[5:0]; // @[CacheRAM.scala 51:21]
  assign S011HD1P_X32Y2D128_BW_1_D = io_bits_D; // @[CacheRAM.scala 52:9]
  assign S011HD1P_X32Y2D128_BW_2_CLK = clock; // @[CacheRAM.scala 54:11]
  assign S011HD1P_X32Y2D128_BW_2_CEN = ~(io_bits_CEN & io_bits_A[7:6] == 2'h2); // @[CacheRAM.scala 55:14]
  assign S011HD1P_X32Y2D128_BW_2_WEN = ~io_bits_WEN; // @[CacheRAM.scala 56:14]
  assign S011HD1P_X32Y2D128_BW_2_BWEN = 128'h0; // @[CacheRAM.scala 57:15]
  assign S011HD1P_X32Y2D128_BW_2_A = io_bits_A[5:0]; // @[CacheRAM.scala 58:21]
  assign S011HD1P_X32Y2D128_BW_2_D = io_bits_D; // @[CacheRAM.scala 59:9]
  assign S011HD1P_X32Y2D128_BW_3_CLK = clock; // @[CacheRAM.scala 61:11]
  assign S011HD1P_X32Y2D128_BW_3_CEN = ~(io_bits_CEN & io_bits_A[7:6] == 2'h3); // @[CacheRAM.scala 62:14]
  assign S011HD1P_X32Y2D128_BW_3_WEN = ~io_bits_WEN; // @[CacheRAM.scala 63:14]
  assign S011HD1P_X32Y2D128_BW_3_BWEN = 128'h0; // @[CacheRAM.scala 64:15]
  assign S011HD1P_X32Y2D128_BW_3_A = io_bits_A[5:0]; // @[CacheRAM.scala 65:21]
  assign S011HD1P_X32Y2D128_BW_3_D = io_bits_D; // @[CacheRAM.scala 66:9]
  always @(posedge clock) begin
    if (reset) begin // @[CacheRAM.scala 27:23]
      choose <= 2'h0; // @[CacheRAM.scala 27:23]
    end else begin
      choose <= io_bits_A[7:6]; // @[CacheRAM.scala 28:10]
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
  choose = _RAND_0[1:0];
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
  output [63:0] io_pc,
  output        io_valid
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  sram_clock; // @[top.scala 11:20]
  wire  sram_reset; // @[top.scala 11:20]
  wire  sram_io_ar_ready; // @[top.scala 11:20]
  wire  sram_io_ar_valid; // @[top.scala 11:20]
  wire [31:0] sram_io_ar_bits_addr; // @[top.scala 11:20]
  wire [7:0] sram_io_ar_bits_len; // @[top.scala 11:20]
  wire [2:0] sram_io_ar_bits_size; // @[top.scala 11:20]
  wire  sram_io_r_ready; // @[top.scala 11:20]
  wire  sram_io_r_valid; // @[top.scala 11:20]
  wire [63:0] sram_io_r_bits_data; // @[top.scala 11:20]
  wire  sram_io_aw_ready; // @[top.scala 11:20]
  wire  sram_io_aw_valid; // @[top.scala 11:20]
  wire [31:0] sram_io_aw_bits_addr; // @[top.scala 11:20]
  wire [2:0] sram_io_aw_bits_size; // @[top.scala 11:20]
  wire  sram_io_w_ready; // @[top.scala 11:20]
  wire  sram_io_w_valid; // @[top.scala 11:20]
  wire [63:0] sram_io_w_bits_data; // @[top.scala 11:20]
  wire [7:0] sram_io_w_bits_strb; // @[top.scala 11:20]
  wire  sram_io_w_bits_last; // @[top.scala 11:20]
  wire  arbiter_clock; // @[top.scala 12:23]
  wire  arbiter_reset; // @[top.scala 12:23]
  wire  arbiter_io_ifu_ar_ready; // @[top.scala 12:23]
  wire  arbiter_io_ifu_ar_valid; // @[top.scala 12:23]
  wire [31:0] arbiter_io_ifu_ar_bits_addr; // @[top.scala 12:23]
  wire  arbiter_io_ifu_r_valid; // @[top.scala 12:23]
  wire [63:0] arbiter_io_ifu_r_bits_data; // @[top.scala 12:23]
  wire  arbiter_io_ifu_aw_ready; // @[top.scala 12:23]
  wire [31:0] arbiter_io_ifu_aw_bits_addr; // @[top.scala 12:23]
  wire  arbiter_io_ifu_w_ready; // @[top.scala 12:23]
  wire  arbiter_io_ifu_w_valid; // @[top.scala 12:23]
  wire [63:0] arbiter_io_ifu_w_bits_data; // @[top.scala 12:23]
  wire  arbiter_io_ifu_w_bits_last; // @[top.scala 12:23]
  wire  arbiter_io_ifu_b_valid; // @[top.scala 12:23]
  wire  arbiter_io_lsu_ar_ready; // @[top.scala 12:23]
  wire  arbiter_io_lsu_ar_valid; // @[top.scala 12:23]
  wire [31:0] arbiter_io_lsu_ar_bits_addr; // @[top.scala 12:23]
  wire  arbiter_io_lsu_r_ready; // @[top.scala 12:23]
  wire  arbiter_io_lsu_r_valid; // @[top.scala 12:23]
  wire [63:0] arbiter_io_lsu_r_bits_data; // @[top.scala 12:23]
  wire  arbiter_io_lsu_aw_ready; // @[top.scala 12:23]
  wire  arbiter_io_lsu_aw_valid; // @[top.scala 12:23]
  wire [31:0] arbiter_io_lsu_aw_bits_addr; // @[top.scala 12:23]
  wire  arbiter_io_lsu_w_ready; // @[top.scala 12:23]
  wire  arbiter_io_lsu_w_valid; // @[top.scala 12:23]
  wire [63:0] arbiter_io_lsu_w_bits_data; // @[top.scala 12:23]
  wire [7:0] arbiter_io_lsu_w_bits_strb; // @[top.scala 12:23]
  wire  arbiter_io_out_ar_ready; // @[top.scala 12:23]
  wire  arbiter_io_out_ar_valid; // @[top.scala 12:23]
  wire [31:0] arbiter_io_out_ar_bits_addr; // @[top.scala 12:23]
  wire [7:0] arbiter_io_out_ar_bits_len; // @[top.scala 12:23]
  wire [2:0] arbiter_io_out_ar_bits_size; // @[top.scala 12:23]
  wire  arbiter_io_out_r_ready; // @[top.scala 12:23]
  wire  arbiter_io_out_r_valid; // @[top.scala 12:23]
  wire [63:0] arbiter_io_out_r_bits_data; // @[top.scala 12:23]
  wire  arbiter_io_out_aw_ready; // @[top.scala 12:23]
  wire  arbiter_io_out_aw_valid; // @[top.scala 12:23]
  wire [31:0] arbiter_io_out_aw_bits_addr; // @[top.scala 12:23]
  wire [2:0] arbiter_io_out_aw_bits_size; // @[top.scala 12:23]
  wire  arbiter_io_out_w_ready; // @[top.scala 12:23]
  wire  arbiter_io_out_w_valid; // @[top.scala 12:23]
  wire [63:0] arbiter_io_out_w_bits_data; // @[top.scala 12:23]
  wire [7:0] arbiter_io_out_w_bits_strb; // @[top.scala 12:23]
  wire  arbiter_io_out_w_bits_last; // @[top.scala 12:23]
  wire  ifu_clock; // @[top.scala 13:19]
  wire  ifu_reset; // @[top.scala 13:19]
  wire [63:0] ifu_io_pc; // @[top.scala 13:19]
  wire  ifu_io_lm_ar_ready; // @[top.scala 13:19]
  wire  ifu_io_lm_ar_valid; // @[top.scala 13:19]
  wire [31:0] ifu_io_lm_ar_bits_addr; // @[top.scala 13:19]
  wire  ifu_io_lm_r_ready; // @[top.scala 13:19]
  wire  ifu_io_lm_r_valid; // @[top.scala 13:19]
  wire [63:0] ifu_io_lm_r_bits_data; // @[top.scala 13:19]
  wire  ifu_io_out_ready; // @[top.scala 13:19]
  wire  ifu_io_out_valid; // @[top.scala 13:19]
  wire [31:0] ifu_io_out_bits_inst; // @[top.scala 13:19]
  wire  ifu_io_next; // @[top.scala 13:19]
  wire  idu_io_in_ready; // @[top.scala 14:19]
  wire  idu_io_in_valid; // @[top.scala 14:19]
  wire [31:0] idu_io_in_bits_inst; // @[top.scala 14:19]
  wire  idu_io_out_ready; // @[top.scala 14:19]
  wire  idu_io_out_valid; // @[top.scala 14:19]
  wire [4:0] idu_io_out_bits_rs1; // @[top.scala 14:19]
  wire [4:0] idu_io_out_bits_rs2; // @[top.scala 14:19]
  wire [4:0] idu_io_out_bits_rd; // @[top.scala 14:19]
  wire [63:0] idu_io_out_bits_imm; // @[top.scala 14:19]
  wire [79:0] idu_io_out_bits_op; // @[top.scala 14:19]
  wire [5:0] idu_io_out_bits_typ; // @[top.scala 14:19]
  wire  exu_clock; // @[top.scala 15:19]
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
  wire [79:0] exu_io_out_bits_op; // @[top.scala 15:19]
  wire [63:0] exu_io_out_bits_pc_dnpc; // @[top.scala 15:19]
  wire [4:0] exu_io_out_bits_gpr_idx_w; // @[top.scala 15:19]
  wire  exu_io_out_bits_gpr_en_w; // @[top.scala 15:19]
  wire [63:0] exu_io_out_bits_gpr_val_w; // @[top.scala 15:19]
  wire  exu_io_out_bits_csr_en_w; // @[top.scala 15:19]
  wire [11:0] exu_io_out_bits_csr_idx_w; // @[top.scala 15:19]
  wire [63:0] exu_io_out_bits_csr_val_w; // @[top.scala 15:19]
  wire [63:0] exu_io_out_bits_csr_no; // @[top.scala 15:19]
  wire [63:0] exu_io_out_bits_csr_epc; // @[top.scala 15:19]
  wire [4:0] exu_io_gpr_idx_r1; // @[top.scala 15:19]
  wire [4:0] exu_io_gpr_idx_r2; // @[top.scala 15:19]
  wire  exu_io_gpr_en_r1; // @[top.scala 15:19]
  wire  exu_io_gpr_en_r2; // @[top.scala 15:19]
  wire [63:0] exu_io_gpr_val_r1; // @[top.scala 15:19]
  wire [63:0] exu_io_gpr_val_r2; // @[top.scala 15:19]
  wire [63:0] exu_io_pc; // @[top.scala 15:19]
  wire [11:0] exu_io_csr_idx_r; // @[top.scala 15:19]
  wire [63:0] exu_io_csr_val_r; // @[top.scala 15:19]
  wire  lsu_clock; // @[top.scala 16:19]
  wire  lsu_reset; // @[top.scala 16:19]
  wire  lsu_io_in_ready; // @[top.scala 16:19]
  wire  lsu_io_in_valid; // @[top.scala 16:19]
  wire [31:0] lsu_io_in_bits_pin_raddr; // @[top.scala 16:19]
  wire [31:0] lsu_io_in_bits_pin_waddr; // @[top.scala 16:19]
  wire [63:0] lsu_io_in_bits_pin_wdata; // @[top.scala 16:19]
  wire [7:0] lsu_io_in_bits_pin_wmask; // @[top.scala 16:19]
  wire [79:0] lsu_io_in_bits_op; // @[top.scala 16:19]
  wire [63:0] lsu_io_in_bits_pc_dnpc; // @[top.scala 16:19]
  wire [4:0] lsu_io_in_bits_gpr_idx_w; // @[top.scala 16:19]
  wire  lsu_io_in_bits_gpr_en_w; // @[top.scala 16:19]
  wire [63:0] lsu_io_in_bits_gpr_val_w; // @[top.scala 16:19]
  wire  lsu_io_in_bits_csr_en_w; // @[top.scala 16:19]
  wire [11:0] lsu_io_in_bits_csr_idx_w; // @[top.scala 16:19]
  wire [63:0] lsu_io_in_bits_csr_val_w; // @[top.scala 16:19]
  wire [63:0] lsu_io_in_bits_csr_no; // @[top.scala 16:19]
  wire [63:0] lsu_io_in_bits_csr_epc; // @[top.scala 16:19]
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
  wire  lsu_io_csr_en_w; // @[top.scala 16:19]
  wire [11:0] lsu_io_csr_idx_w; // @[top.scala 16:19]
  wire [63:0] lsu_io_csr_val_w; // @[top.scala 16:19]
  wire [63:0] lsu_io_csr_no; // @[top.scala 16:19]
  wire [63:0] lsu_io_csr_epc; // @[top.scala 16:19]
  wire  lsu_io_out_valid; // @[top.scala 16:19]
  wire [63:0] lsu_io_out_bits_pc_dnpc; // @[top.scala 16:19]
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
  wire [63:0] csr_io_r_val_r; // @[top.scala 18:19]
  wire  csr_io_w_en_w; // @[top.scala 18:19]
  wire [11:0] csr_io_w_idx_w; // @[top.scala 18:19]
  wire [63:0] csr_io_w_val_w; // @[top.scala 18:19]
  wire [63:0] csr_io_w_no; // @[top.scala 18:19]
  wire [63:0] csr_io_w_epc; // @[top.scala 18:19]
  wire  icache_clock; // @[top.scala 19:22]
  wire  icache_reset; // @[top.scala 19:22]
  wire  icache_io_in_ar_ready; // @[top.scala 19:22]
  wire  icache_io_in_ar_valid; // @[top.scala 19:22]
  wire [31:0] icache_io_in_ar_bits_addr; // @[top.scala 19:22]
  wire  icache_io_in_r_valid; // @[top.scala 19:22]
  wire [63:0] icache_io_in_r_bits_data; // @[top.scala 19:22]
  wire  icache_io_mem_ar_ready; // @[top.scala 19:22]
  wire  icache_io_mem_ar_valid; // @[top.scala 19:22]
  wire [31:0] icache_io_mem_ar_bits_addr; // @[top.scala 19:22]
  wire  icache_io_mem_r_ready; // @[top.scala 19:22]
  wire  icache_io_mem_r_valid; // @[top.scala 19:22]
  wire [63:0] icache_io_mem_r_bits_data; // @[top.scala 19:22]
  wire  icache_io_mem_aw_ready; // @[top.scala 19:22]
  wire  icache_io_mem_aw_valid; // @[top.scala 19:22]
  wire [31:0] icache_io_mem_aw_bits_addr; // @[top.scala 19:22]
  wire  icache_io_mem_w_ready; // @[top.scala 19:22]
  wire  icache_io_mem_w_valid; // @[top.scala 19:22]
  wire [63:0] icache_io_mem_w_bits_data; // @[top.scala 19:22]
  wire  icache_io_mem_w_bits_last; // @[top.scala 19:22]
  wire  icache_io_mem_b_ready; // @[top.scala 19:22]
  wire  icache_io_mem_b_valid; // @[top.scala 19:22]
  wire [127:0] icache_io_ram_bits_Q; // @[top.scala 19:22]
  wire  icache_io_ram_bits_CEN; // @[top.scala 19:22]
  wire  icache_io_ram_bits_WEN; // @[top.scala 19:22]
  wire [7:0] icache_io_ram_bits_A; // @[top.scala 19:22]
  wire [127:0] icache_io_ram_bits_D; // @[top.scala 19:22]
  wire  dcache_io_in_ar_ready; // @[top.scala 20:22]
  wire  dcache_io_in_ar_valid; // @[top.scala 20:22]
  wire [31:0] dcache_io_in_ar_bits_addr; // @[top.scala 20:22]
  wire  dcache_io_in_r_ready; // @[top.scala 20:22]
  wire  dcache_io_in_r_valid; // @[top.scala 20:22]
  wire [63:0] dcache_io_in_r_bits_data; // @[top.scala 20:22]
  wire  dcache_io_in_aw_ready; // @[top.scala 20:22]
  wire  dcache_io_in_aw_valid; // @[top.scala 20:22]
  wire [31:0] dcache_io_in_aw_bits_addr; // @[top.scala 20:22]
  wire  dcache_io_in_w_ready; // @[top.scala 20:22]
  wire  dcache_io_in_w_valid; // @[top.scala 20:22]
  wire [63:0] dcache_io_in_w_bits_data; // @[top.scala 20:22]
  wire [7:0] dcache_io_in_w_bits_strb; // @[top.scala 20:22]
  wire  dcache_io_mem_ar_ready; // @[top.scala 20:22]
  wire  dcache_io_mem_ar_valid; // @[top.scala 20:22]
  wire [31:0] dcache_io_mem_ar_bits_addr; // @[top.scala 20:22]
  wire  dcache_io_mem_r_ready; // @[top.scala 20:22]
  wire  dcache_io_mem_r_valid; // @[top.scala 20:22]
  wire [63:0] dcache_io_mem_r_bits_data; // @[top.scala 20:22]
  wire  dcache_io_mem_aw_ready; // @[top.scala 20:22]
  wire  dcache_io_mem_aw_valid; // @[top.scala 20:22]
  wire [31:0] dcache_io_mem_aw_bits_addr; // @[top.scala 20:22]
  wire  dcache_io_mem_w_ready; // @[top.scala 20:22]
  wire  dcache_io_mem_w_valid; // @[top.scala 20:22]
  wire [63:0] dcache_io_mem_w_bits_data; // @[top.scala 20:22]
  wire [7:0] dcache_io_mem_w_bits_strb; // @[top.scala 20:22]
  wire  icacheram_clock; // @[top.scala 22:25]
  wire  icacheram_reset; // @[top.scala 22:25]
  wire [127:0] icacheram_io_bits_Q; // @[top.scala 22:25]
  wire  icacheram_io_bits_CEN; // @[top.scala 22:25]
  wire  icacheram_io_bits_WEN; // @[top.scala 22:25]
  wire [7:0] icacheram_io_bits_A; // @[top.scala 22:25]
  wire [127:0] icacheram_io_bits_D; // @[top.scala 22:25]
  reg [63:0] pc; // @[top.scala 10:19]
  wire [63:0] _pc_T_1 = lsu_io_out_valid ? lsu_io_out_bits_pc_dnpc : pc; // @[top.scala 39:12]
  AXI4SRAM sram ( // @[top.scala 11:20]
    .clock(sram_clock),
    .reset(sram_reset),
    .io_ar_ready(sram_io_ar_ready),
    .io_ar_valid(sram_io_ar_valid),
    .io_ar_bits_addr(sram_io_ar_bits_addr),
    .io_ar_bits_len(sram_io_ar_bits_len),
    .io_ar_bits_size(sram_io_ar_bits_size),
    .io_r_ready(sram_io_r_ready),
    .io_r_valid(sram_io_r_valid),
    .io_r_bits_data(sram_io_r_bits_data),
    .io_aw_ready(sram_io_aw_ready),
    .io_aw_valid(sram_io_aw_valid),
    .io_aw_bits_addr(sram_io_aw_bits_addr),
    .io_aw_bits_size(sram_io_aw_bits_size),
    .io_w_ready(sram_io_w_ready),
    .io_w_valid(sram_io_w_valid),
    .io_w_bits_data(sram_io_w_bits_data),
    .io_w_bits_strb(sram_io_w_bits_strb),
    .io_w_bits_last(sram_io_w_bits_last)
  );
  AXI4Arbiter arbiter ( // @[top.scala 12:23]
    .clock(arbiter_clock),
    .reset(arbiter_reset),
    .io_ifu_ar_ready(arbiter_io_ifu_ar_ready),
    .io_ifu_ar_valid(arbiter_io_ifu_ar_valid),
    .io_ifu_ar_bits_addr(arbiter_io_ifu_ar_bits_addr),
    .io_ifu_r_valid(arbiter_io_ifu_r_valid),
    .io_ifu_r_bits_data(arbiter_io_ifu_r_bits_data),
    .io_ifu_aw_ready(arbiter_io_ifu_aw_ready),
    .io_ifu_aw_bits_addr(arbiter_io_ifu_aw_bits_addr),
    .io_ifu_w_ready(arbiter_io_ifu_w_ready),
    .io_ifu_w_valid(arbiter_io_ifu_w_valid),
    .io_ifu_w_bits_data(arbiter_io_ifu_w_bits_data),
    .io_ifu_w_bits_last(arbiter_io_ifu_w_bits_last),
    .io_ifu_b_valid(arbiter_io_ifu_b_valid),
    .io_lsu_ar_ready(arbiter_io_lsu_ar_ready),
    .io_lsu_ar_valid(arbiter_io_lsu_ar_valid),
    .io_lsu_ar_bits_addr(arbiter_io_lsu_ar_bits_addr),
    .io_lsu_r_ready(arbiter_io_lsu_r_ready),
    .io_lsu_r_valid(arbiter_io_lsu_r_valid),
    .io_lsu_r_bits_data(arbiter_io_lsu_r_bits_data),
    .io_lsu_aw_ready(arbiter_io_lsu_aw_ready),
    .io_lsu_aw_valid(arbiter_io_lsu_aw_valid),
    .io_lsu_aw_bits_addr(arbiter_io_lsu_aw_bits_addr),
    .io_lsu_w_ready(arbiter_io_lsu_w_ready),
    .io_lsu_w_valid(arbiter_io_lsu_w_valid),
    .io_lsu_w_bits_data(arbiter_io_lsu_w_bits_data),
    .io_lsu_w_bits_strb(arbiter_io_lsu_w_bits_strb),
    .io_out_ar_ready(arbiter_io_out_ar_ready),
    .io_out_ar_valid(arbiter_io_out_ar_valid),
    .io_out_ar_bits_addr(arbiter_io_out_ar_bits_addr),
    .io_out_ar_bits_len(arbiter_io_out_ar_bits_len),
    .io_out_ar_bits_size(arbiter_io_out_ar_bits_size),
    .io_out_r_ready(arbiter_io_out_r_ready),
    .io_out_r_valid(arbiter_io_out_r_valid),
    .io_out_r_bits_data(arbiter_io_out_r_bits_data),
    .io_out_aw_ready(arbiter_io_out_aw_ready),
    .io_out_aw_valid(arbiter_io_out_aw_valid),
    .io_out_aw_bits_addr(arbiter_io_out_aw_bits_addr),
    .io_out_aw_bits_size(arbiter_io_out_aw_bits_size),
    .io_out_w_ready(arbiter_io_out_w_ready),
    .io_out_w_valid(arbiter_io_out_w_valid),
    .io_out_w_bits_data(arbiter_io_out_w_bits_data),
    .io_out_w_bits_strb(arbiter_io_out_w_bits_strb),
    .io_out_w_bits_last(arbiter_io_out_w_bits_last)
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
    .io_out_ready(ifu_io_out_ready),
    .io_out_valid(ifu_io_out_valid),
    .io_out_bits_inst(ifu_io_out_bits_inst),
    .io_next(ifu_io_next)
  );
  IDU idu ( // @[top.scala 14:19]
    .io_in_ready(idu_io_in_ready),
    .io_in_valid(idu_io_in_valid),
    .io_in_bits_inst(idu_io_in_bits_inst),
    .io_out_ready(idu_io_out_ready),
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
    .io_out_bits_op(exu_io_out_bits_op),
    .io_out_bits_pc_dnpc(exu_io_out_bits_pc_dnpc),
    .io_out_bits_gpr_idx_w(exu_io_out_bits_gpr_idx_w),
    .io_out_bits_gpr_en_w(exu_io_out_bits_gpr_en_w),
    .io_out_bits_gpr_val_w(exu_io_out_bits_gpr_val_w),
    .io_out_bits_csr_en_w(exu_io_out_bits_csr_en_w),
    .io_out_bits_csr_idx_w(exu_io_out_bits_csr_idx_w),
    .io_out_bits_csr_val_w(exu_io_out_bits_csr_val_w),
    .io_out_bits_csr_no(exu_io_out_bits_csr_no),
    .io_out_bits_csr_epc(exu_io_out_bits_csr_epc),
    .io_gpr_idx_r1(exu_io_gpr_idx_r1),
    .io_gpr_idx_r2(exu_io_gpr_idx_r2),
    .io_gpr_en_r1(exu_io_gpr_en_r1),
    .io_gpr_en_r2(exu_io_gpr_en_r2),
    .io_gpr_val_r1(exu_io_gpr_val_r1),
    .io_gpr_val_r2(exu_io_gpr_val_r2),
    .io_pc(exu_io_pc),
    .io_csr_idx_r(exu_io_csr_idx_r),
    .io_csr_val_r(exu_io_csr_val_r)
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
    .io_in_bits_op(lsu_io_in_bits_op),
    .io_in_bits_pc_dnpc(lsu_io_in_bits_pc_dnpc),
    .io_in_bits_gpr_idx_w(lsu_io_in_bits_gpr_idx_w),
    .io_in_bits_gpr_en_w(lsu_io_in_bits_gpr_en_w),
    .io_in_bits_gpr_val_w(lsu_io_in_bits_gpr_val_w),
    .io_in_bits_csr_en_w(lsu_io_in_bits_csr_en_w),
    .io_in_bits_csr_idx_w(lsu_io_in_bits_csr_idx_w),
    .io_in_bits_csr_val_w(lsu_io_in_bits_csr_val_w),
    .io_in_bits_csr_no(lsu_io_in_bits_csr_no),
    .io_in_bits_csr_epc(lsu_io_in_bits_csr_epc),
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
    .io_gpr_val_w(lsu_io_gpr_val_w),
    .io_csr_en_w(lsu_io_csr_en_w),
    .io_csr_idx_w(lsu_io_csr_idx_w),
    .io_csr_val_w(lsu_io_csr_val_w),
    .io_csr_no(lsu_io_csr_no),
    .io_csr_epc(lsu_io_csr_epc),
    .io_out_valid(lsu_io_out_valid),
    .io_out_bits_pc_dnpc(lsu_io_out_bits_pc_dnpc)
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
    .io_r_val_r(csr_io_r_val_r),
    .io_w_en_w(csr_io_w_en_w),
    .io_w_idx_w(csr_io_w_idx_w),
    .io_w_val_w(csr_io_w_val_w),
    .io_w_no(csr_io_w_no),
    .io_w_epc(csr_io_w_epc)
  );
  Cache icache ( // @[top.scala 19:22]
    .clock(icache_clock),
    .reset(icache_reset),
    .io_in_ar_ready(icache_io_in_ar_ready),
    .io_in_ar_valid(icache_io_in_ar_valid),
    .io_in_ar_bits_addr(icache_io_in_ar_bits_addr),
    .io_in_r_valid(icache_io_in_r_valid),
    .io_in_r_bits_data(icache_io_in_r_bits_data),
    .io_mem_ar_ready(icache_io_mem_ar_ready),
    .io_mem_ar_valid(icache_io_mem_ar_valid),
    .io_mem_ar_bits_addr(icache_io_mem_ar_bits_addr),
    .io_mem_r_ready(icache_io_mem_r_ready),
    .io_mem_r_valid(icache_io_mem_r_valid),
    .io_mem_r_bits_data(icache_io_mem_r_bits_data),
    .io_mem_aw_ready(icache_io_mem_aw_ready),
    .io_mem_aw_valid(icache_io_mem_aw_valid),
    .io_mem_aw_bits_addr(icache_io_mem_aw_bits_addr),
    .io_mem_w_ready(icache_io_mem_w_ready),
    .io_mem_w_valid(icache_io_mem_w_valid),
    .io_mem_w_bits_data(icache_io_mem_w_bits_data),
    .io_mem_w_bits_last(icache_io_mem_w_bits_last),
    .io_mem_b_ready(icache_io_mem_b_ready),
    .io_mem_b_valid(icache_io_mem_b_valid),
    .io_ram_bits_Q(icache_io_ram_bits_Q),
    .io_ram_bits_CEN(icache_io_ram_bits_CEN),
    .io_ram_bits_WEN(icache_io_ram_bits_WEN),
    .io_ram_bits_A(icache_io_ram_bits_A),
    .io_ram_bits_D(icache_io_ram_bits_D)
  );
  AXILite2AXI4 dcache ( // @[top.scala 20:22]
    .io_in_ar_ready(dcache_io_in_ar_ready),
    .io_in_ar_valid(dcache_io_in_ar_valid),
    .io_in_ar_bits_addr(dcache_io_in_ar_bits_addr),
    .io_in_r_ready(dcache_io_in_r_ready),
    .io_in_r_valid(dcache_io_in_r_valid),
    .io_in_r_bits_data(dcache_io_in_r_bits_data),
    .io_in_aw_ready(dcache_io_in_aw_ready),
    .io_in_aw_valid(dcache_io_in_aw_valid),
    .io_in_aw_bits_addr(dcache_io_in_aw_bits_addr),
    .io_in_w_ready(dcache_io_in_w_ready),
    .io_in_w_valid(dcache_io_in_w_valid),
    .io_in_w_bits_data(dcache_io_in_w_bits_data),
    .io_in_w_bits_strb(dcache_io_in_w_bits_strb),
    .io_mem_ar_ready(dcache_io_mem_ar_ready),
    .io_mem_ar_valid(dcache_io_mem_ar_valid),
    .io_mem_ar_bits_addr(dcache_io_mem_ar_bits_addr),
    .io_mem_r_ready(dcache_io_mem_r_ready),
    .io_mem_r_valid(dcache_io_mem_r_valid),
    .io_mem_r_bits_data(dcache_io_mem_r_bits_data),
    .io_mem_aw_ready(dcache_io_mem_aw_ready),
    .io_mem_aw_valid(dcache_io_mem_aw_valid),
    .io_mem_aw_bits_addr(dcache_io_mem_aw_bits_addr),
    .io_mem_w_ready(dcache_io_mem_w_ready),
    .io_mem_w_valid(dcache_io_mem_w_valid),
    .io_mem_w_bits_data(dcache_io_mem_w_bits_data),
    .io_mem_w_bits_strb(dcache_io_mem_w_bits_strb)
  );
  CacheRAM icacheram ( // @[top.scala 22:25]
    .clock(icacheram_clock),
    .reset(icacheram_reset),
    .io_bits_Q(icacheram_io_bits_Q),
    .io_bits_CEN(icacheram_io_bits_CEN),
    .io_bits_WEN(icacheram_io_bits_WEN),
    .io_bits_A(icacheram_io_bits_A),
    .io_bits_D(icacheram_io_bits_D)
  );
  assign io_pc = reset ? 64'h80000000 : _pc_T_1; // @[top.scala 41:15]
  assign io_valid = lsu_io_out_valid; // @[top.scala 37:13]
  assign sram_clock = clock;
  assign sram_reset = reset;
  assign sram_io_ar_valid = arbiter_io_out_ar_valid; // @[top.scala 49:12]
  assign sram_io_ar_bits_addr = arbiter_io_out_ar_bits_addr; // @[top.scala 49:12]
  assign sram_io_ar_bits_len = arbiter_io_out_ar_bits_len; // @[top.scala 49:12]
  assign sram_io_ar_bits_size = arbiter_io_out_ar_bits_size; // @[top.scala 49:12]
  assign sram_io_r_ready = arbiter_io_out_r_ready; // @[top.scala 49:12]
  assign sram_io_aw_valid = arbiter_io_out_aw_valid; // @[top.scala 49:12]
  assign sram_io_aw_bits_addr = arbiter_io_out_aw_bits_addr; // @[top.scala 49:12]
  assign sram_io_aw_bits_size = arbiter_io_out_aw_bits_size; // @[top.scala 49:12]
  assign sram_io_w_valid = arbiter_io_out_w_valid; // @[top.scala 49:12]
  assign sram_io_w_bits_data = arbiter_io_out_w_bits_data; // @[top.scala 49:12]
  assign sram_io_w_bits_strb = arbiter_io_out_w_bits_strb; // @[top.scala 49:12]
  assign sram_io_w_bits_last = arbiter_io_out_w_bits_last; // @[top.scala 49:12]
  assign arbiter_clock = clock;
  assign arbiter_reset = reset;
  assign arbiter_io_ifu_ar_valid = icache_io_mem_ar_valid; // @[top.scala 46:18]
  assign arbiter_io_ifu_ar_bits_addr = icache_io_mem_ar_bits_addr; // @[top.scala 46:18]
  assign arbiter_io_ifu_aw_bits_addr = icache_io_mem_aw_bits_addr; // @[top.scala 46:18]
  assign arbiter_io_ifu_w_valid = icache_io_mem_w_valid; // @[top.scala 46:18]
  assign arbiter_io_ifu_w_bits_data = icache_io_mem_w_bits_data; // @[top.scala 46:18]
  assign arbiter_io_ifu_w_bits_last = icache_io_mem_w_bits_last; // @[top.scala 46:18]
  assign arbiter_io_lsu_ar_valid = dcache_io_mem_ar_valid; // @[top.scala 48:18]
  assign arbiter_io_lsu_ar_bits_addr = dcache_io_mem_ar_bits_addr; // @[top.scala 48:18]
  assign arbiter_io_lsu_r_ready = dcache_io_mem_r_ready; // @[top.scala 48:18]
  assign arbiter_io_lsu_aw_valid = dcache_io_mem_aw_valid; // @[top.scala 48:18]
  assign arbiter_io_lsu_aw_bits_addr = dcache_io_mem_aw_bits_addr; // @[top.scala 48:18]
  assign arbiter_io_lsu_w_valid = dcache_io_mem_w_valid; // @[top.scala 48:18]
  assign arbiter_io_lsu_w_bits_data = dcache_io_mem_w_bits_data; // @[top.scala 48:18]
  assign arbiter_io_lsu_w_bits_strb = dcache_io_mem_w_bits_strb; // @[top.scala 48:18]
  assign arbiter_io_out_ar_ready = sram_io_ar_ready; // @[top.scala 49:12]
  assign arbiter_io_out_r_valid = sram_io_r_valid; // @[top.scala 49:12]
  assign arbiter_io_out_r_bits_data = sram_io_r_bits_data; // @[top.scala 49:12]
  assign arbiter_io_out_aw_ready = sram_io_aw_ready; // @[top.scala 49:12]
  assign arbiter_io_out_w_ready = sram_io_w_ready; // @[top.scala 49:12]
  assign ifu_clock = clock;
  assign ifu_reset = reset;
  assign ifu_io_pc = pc; // @[top.scala 27:14]
  assign ifu_io_lm_ar_ready = icache_io_in_ar_ready; // @[top.scala 44:14]
  assign ifu_io_lm_r_valid = icache_io_in_r_valid; // @[top.scala 44:14]
  assign ifu_io_lm_r_bits_data = icache_io_in_r_bits_data; // @[top.scala 44:14]
  assign ifu_io_out_ready = idu_io_in_ready; // @[top.scala 28:14]
  assign ifu_io_next = lsu_io_out_valid; // @[top.scala 21:18 top.scala 25:9]
  assign idu_io_in_valid = ifu_io_out_valid; // @[top.scala 28:14]
  assign idu_io_in_bits_inst = ifu_io_out_bits_inst; // @[top.scala 28:14]
  assign idu_io_out_ready = exu_io_in_ready; // @[top.scala 29:14]
  assign exu_clock = clock;
  assign exu_io_in_valid = idu_io_out_valid; // @[top.scala 29:14]
  assign exu_io_in_bits_rs1 = idu_io_out_bits_rs1; // @[top.scala 29:14]
  assign exu_io_in_bits_rs2 = idu_io_out_bits_rs2; // @[top.scala 29:14]
  assign exu_io_in_bits_rd = idu_io_out_bits_rd; // @[top.scala 29:14]
  assign exu_io_in_bits_imm = idu_io_out_bits_imm; // @[top.scala 29:14]
  assign exu_io_in_bits_op = idu_io_out_bits_op; // @[top.scala 29:14]
  assign exu_io_in_bits_typ = idu_io_out_bits_typ; // @[top.scala 29:14]
  assign exu_io_out_ready = lsu_io_in_ready; // @[top.scala 32:14]
  assign exu_io_gpr_val_r1 = gpr_io_r_val_r1; // @[top.scala 30:15]
  assign exu_io_gpr_val_r2 = gpr_io_r_val_r2; // @[top.scala 30:15]
  assign exu_io_pc = pc; // @[top.scala 35:14]
  assign exu_io_csr_val_r = csr_io_r_val_r; // @[top.scala 31:15]
  assign lsu_clock = clock;
  assign lsu_reset = reset;
  assign lsu_io_in_valid = exu_io_out_valid; // @[top.scala 32:14]
  assign lsu_io_in_bits_pin_raddr = exu_io_out_bits_pin_raddr; // @[top.scala 32:14]
  assign lsu_io_in_bits_pin_waddr = exu_io_out_bits_pin_waddr; // @[top.scala 32:14]
  assign lsu_io_in_bits_pin_wdata = exu_io_out_bits_pin_wdata; // @[top.scala 32:14]
  assign lsu_io_in_bits_pin_wmask = exu_io_out_bits_pin_wmask; // @[top.scala 32:14]
  assign lsu_io_in_bits_op = exu_io_out_bits_op; // @[top.scala 32:14]
  assign lsu_io_in_bits_pc_dnpc = exu_io_out_bits_pc_dnpc; // @[top.scala 32:14]
  assign lsu_io_in_bits_gpr_idx_w = exu_io_out_bits_gpr_idx_w; // @[top.scala 32:14]
  assign lsu_io_in_bits_gpr_en_w = exu_io_out_bits_gpr_en_w; // @[top.scala 32:14]
  assign lsu_io_in_bits_gpr_val_w = exu_io_out_bits_gpr_val_w; // @[top.scala 32:14]
  assign lsu_io_in_bits_csr_en_w = exu_io_out_bits_csr_en_w; // @[top.scala 32:14]
  assign lsu_io_in_bits_csr_idx_w = exu_io_out_bits_csr_idx_w; // @[top.scala 32:14]
  assign lsu_io_in_bits_csr_val_w = exu_io_out_bits_csr_val_w; // @[top.scala 32:14]
  assign lsu_io_in_bits_csr_no = exu_io_out_bits_csr_no; // @[top.scala 32:14]
  assign lsu_io_in_bits_csr_epc = exu_io_out_bits_csr_epc; // @[top.scala 32:14]
  assign lsu_io_lm_ar_ready = dcache_io_in_ar_ready; // @[top.scala 45:14]
  assign lsu_io_lm_r_valid = dcache_io_in_r_valid; // @[top.scala 45:14]
  assign lsu_io_lm_r_bits_data = dcache_io_in_r_bits_data; // @[top.scala 45:14]
  assign lsu_io_lm_aw_ready = dcache_io_in_aw_ready; // @[top.scala 45:14]
  assign lsu_io_lm_w_ready = dcache_io_in_w_ready; // @[top.scala 45:14]
  assign gpr_clock = clock;
  assign gpr_reset = reset;
  assign gpr_io_r_idx_r1 = exu_io_gpr_idx_r1; // @[top.scala 30:15]
  assign gpr_io_r_idx_r2 = exu_io_gpr_idx_r2; // @[top.scala 30:15]
  assign gpr_io_r_en_r1 = exu_io_gpr_en_r1; // @[top.scala 30:15]
  assign gpr_io_r_en_r2 = exu_io_gpr_en_r2; // @[top.scala 30:15]
  assign gpr_io_w_idx_w = lsu_io_gpr_idx_w; // @[top.scala 33:15]
  assign gpr_io_w_en_w = lsu_io_gpr_en_w; // @[top.scala 33:15]
  assign gpr_io_w_val_w = lsu_io_gpr_val_w; // @[top.scala 33:15]
  assign csr_clock = clock;
  assign csr_reset = reset;
  assign csr_io_r_idx_r = exu_io_csr_idx_r; // @[top.scala 31:15]
  assign csr_io_w_en_w = lsu_io_csr_en_w; // @[top.scala 34:15]
  assign csr_io_w_idx_w = lsu_io_csr_idx_w; // @[top.scala 34:15]
  assign csr_io_w_val_w = lsu_io_csr_val_w; // @[top.scala 34:15]
  assign csr_io_w_no = lsu_io_csr_no; // @[top.scala 34:15]
  assign csr_io_w_epc = lsu_io_csr_epc; // @[top.scala 34:15]
  assign icache_clock = clock;
  assign icache_reset = reset;
  assign icache_io_in_ar_valid = ifu_io_lm_ar_valid; // @[top.scala 44:14]
  assign icache_io_in_ar_bits_addr = ifu_io_lm_ar_bits_addr; // @[top.scala 44:14]
  assign icache_io_mem_ar_ready = arbiter_io_ifu_ar_ready; // @[top.scala 46:18]
  assign icache_io_mem_r_valid = arbiter_io_ifu_r_valid; // @[top.scala 46:18]
  assign icache_io_mem_r_bits_data = arbiter_io_ifu_r_bits_data; // @[top.scala 46:18]
  assign icache_io_mem_aw_ready = arbiter_io_ifu_aw_ready; // @[top.scala 46:18]
  assign icache_io_mem_w_ready = arbiter_io_ifu_w_ready; // @[top.scala 46:18]
  assign icache_io_mem_b_valid = arbiter_io_ifu_b_valid; // @[top.scala 46:18]
  assign icache_io_ram_bits_Q = icacheram_io_bits_Q; // @[top.scala 47:18]
  assign dcache_io_in_ar_valid = lsu_io_lm_ar_valid; // @[top.scala 45:14]
  assign dcache_io_in_ar_bits_addr = lsu_io_lm_ar_bits_addr; // @[top.scala 45:14]
  assign dcache_io_in_r_ready = lsu_io_lm_r_ready; // @[top.scala 45:14]
  assign dcache_io_in_aw_valid = lsu_io_lm_aw_valid; // @[top.scala 45:14]
  assign dcache_io_in_aw_bits_addr = lsu_io_lm_aw_bits_addr; // @[top.scala 45:14]
  assign dcache_io_in_w_valid = lsu_io_lm_w_valid; // @[top.scala 45:14]
  assign dcache_io_in_w_bits_data = lsu_io_lm_w_bits_data; // @[top.scala 45:14]
  assign dcache_io_in_w_bits_strb = lsu_io_lm_w_bits_strb; // @[top.scala 45:14]
  assign dcache_io_mem_ar_ready = arbiter_io_lsu_ar_ready; // @[top.scala 48:18]
  assign dcache_io_mem_r_valid = arbiter_io_lsu_r_valid; // @[top.scala 48:18]
  assign dcache_io_mem_r_bits_data = arbiter_io_lsu_r_bits_data; // @[top.scala 48:18]
  assign dcache_io_mem_aw_ready = arbiter_io_lsu_aw_ready; // @[top.scala 48:18]
  assign dcache_io_mem_w_ready = arbiter_io_lsu_w_ready; // @[top.scala 48:18]
  assign icacheram_clock = clock;
  assign icacheram_reset = reset;
  assign icacheram_io_bits_CEN = icache_io_ram_bits_CEN; // @[top.scala 47:18]
  assign icacheram_io_bits_WEN = icache_io_ram_bits_WEN; // @[top.scala 47:18]
  assign icacheram_io_bits_A = icache_io_ram_bits_A; // @[top.scala 47:18]
  assign icacheram_io_bits_D = icache_io_ram_bits_D; // @[top.scala 47:18]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 10:19]
      pc <= 64'h80000000; // @[top.scala 10:19]
    end else if (reset) begin // @[top.scala 38:12]
      pc <= 64'h80000000;
    end else if (lsu_io_out_valid) begin // @[top.scala 39:12]
      pc <= lsu_io_out_bits_pc_dnpc;
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

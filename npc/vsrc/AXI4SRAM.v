module AXI4SRAM(
  input         clock,
  input         reset,
  output        io_ar_ready,
  input         io_ar_valid,
  input  [31:0] io_ar_bits_addr,
  input  [7:0]  io_ar_bits_len,
  input  [2:0]  io_ar_bits_size,
  input  [3:0]  io_ar_bits_id,
  input         io_r_ready,
  output        io_r_valid,
  output [63:0] io_r_bits_data,
  output        io_r_bits_last,
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
  wire  pmem_clock; // @[SRAM.scala 106:19]
  wire [31:0] pmem_raddr; // @[SRAM.scala 106:19]
  wire [63:0] pmem_rdata; // @[SRAM.scala 106:19]
  wire [31:0] pmem_waddr; // @[SRAM.scala 106:19]
  wire [63:0] pmem_wdata; // @[SRAM.scala 106:19]
  wire [7:0] pmem_wmask; // @[SRAM.scala 106:19]
  reg  rstate; // @[SRAM.scala 47:23]
  wire  _rstate_T = io_ar_ready & io_ar_valid; // @[Decoupled.scala 52:35]
  reg [7:0] rcnt; // @[SRAM.scala 66:21]
  reg [7:0] rlen; // @[SRAM.scala 62:19]
  wire  _rlast_T_1 = io_r_ready & io_r_valid; // @[Decoupled.scala 52:35]
  wire  rlast = rcnt == rlen & _rlast_T_1; // @[SRAM.scala 85:25]
  reg  wstate; // @[SRAM.scala 53:23]
  wire  _wstate_T = io_w_ready & io_w_valid; // @[Decoupled.scala 52:35]
  wire  _wstate_T_2 = _wstate_T & io_w_bits_last; // @[SRAM.scala 55:35]
  wire  _wstate_T_4 = io_b_ready & io_b_valid; // @[Decoupled.scala 52:35]
  reg  rid; // @[SRAM.scala 60:18]
  reg [31:0] raddr; // @[SRAM.scala 61:20]
  reg [2:0] rsize; // @[SRAM.scala 63:20]
  reg [31:0] lower_bound_addr; // @[SRAM.scala 65:31]
  reg [7:0] beatcnt; // @[SRAM.scala 67:24]
  wire [3:0] _rid_T_1 = _rstate_T ? io_ar_bits_id : {{3'd0}, rid}; // @[SRAM.scala 69:13]
  wire [31:0] _lower_bound_addr_WIRE = {{24'd0}, io_ar_bits_len}; // @[SRAM.scala 70:{81,81}]
  wire [31:0] _lower_bound_addr_T_1 = ~_lower_bound_addr_WIRE; // @[SRAM.scala 70:57]
  wire [38:0] _GEN_2 = {{7'd0}, _lower_bound_addr_T_1}; // @[SRAM.scala 70:95]
  wire [38:0] _lower_bound_addr_T_2 = _GEN_2 << io_ar_bits_size; // @[SRAM.scala 70:95]
  wire [38:0] _GEN_0 = {{7'd0}, io_ar_bits_addr}; // @[SRAM.scala 70:52]
  wire [38:0] _lower_bound_addr_T_3 = _GEN_0 & _lower_bound_addr_T_2; // @[SRAM.scala 70:52]
  wire [38:0] _lower_bound_addr_T_4 = _rstate_T ? _lower_bound_addr_T_3 : {{7'd0}, lower_bound_addr}; // @[SRAM.scala 70:24]
  wire  _raddr_T_5 = beatcnt == 8'hff | beatcnt == rlen; // @[SRAM.scala 74:47]
  wire [38:0] _raddr_T_8 = 39'h1 << rsize; // @[SRAM.scala 75:45]
  wire [38:0] _GEN_1 = {{7'd0}, raddr}; // @[SRAM.scala 75:33]
  wire [38:0] _raddr_T_10 = _GEN_1 + _raddr_T_8; // @[SRAM.scala 75:33]
  wire [38:0] _raddr_T_11 = _rlast_T_1 ? _raddr_T_10 : {{7'd0}, raddr}; // @[SRAM.scala 75:15]
  wire [38:0] _raddr_T_12 = _rlast_T_1 & (beatcnt == 8'hff | beatcnt == rlen) ? {{7'd0}, lower_bound_addr} : _raddr_T_11
    ; // @[SRAM.scala 74:15]
  wire [38:0] _raddr_T_13 = rlast ? 39'h0 : _raddr_T_12; // @[SRAM.scala 73:15]
  wire [38:0] _raddr_T_14 = _rstate_T ? {{7'd0}, io_ar_bits_addr} : _raddr_T_13; // @[SRAM.scala 72:15]
  wire [7:0] _rcnt_T_7 = rcnt + 8'h1; // @[SRAM.scala 80:28]
  wire [31:0] _beatcnt_T_1 = io_ar_bits_addr >> io_ar_bits_size; // @[SRAM.scala 81:44]
  wire [31:0] _beatcnt_T_2 = _beatcnt_T_1 & _lower_bound_addr_WIRE; // @[SRAM.scala 81:64]
  wire [7:0] _beatcnt_T_8 = beatcnt + 8'h1; // @[SRAM.scala 83:41]
  wire [7:0] _beatcnt_T_9 = rstate ? _beatcnt_T_8 : 8'h0; // @[SRAM.scala 83:15]
  wire [7:0] _beatcnt_T_10 = _raddr_T_5 ? 8'h0 : _beatcnt_T_9; // @[SRAM.scala 82:15]
  wire [31:0] _beatcnt_T_11 = _rstate_T ? _beatcnt_T_2 : {{24'd0}, _beatcnt_T_10}; // @[SRAM.scala 81:15]
  reg [31:0] waddr; // @[SRAM.scala 92:22]
  reg [2:0] wsize; // @[SRAM.scala 95:22]
  wire  _wid_T = io_aw_ready & io_aw_valid; // @[Decoupled.scala 52:35]
  wire [38:0] _GEN_3 = {{7'd0}, io_aw_bits_addr}; // @[SRAM.scala 101:75]
  wire [38:0] _waddr_T_8 = _GEN_3 + 39'h8; // @[SRAM.scala 101:75]
  wire [38:0] _waddr_T_10 = 39'h1 << wsize; // @[SRAM.scala 102:41]
  wire [38:0] _GEN_4 = {{7'd0}, waddr}; // @[SRAM.scala 102:30]
  wire [38:0] _waddr_T_12 = _GEN_4 + _waddr_T_10; // @[SRAM.scala 102:30]
  wire [38:0] _waddr_T_13 = _wstate_T ? _waddr_T_12 : {{7'd0}, waddr}; // @[SRAM.scala 102:13]
  wire [38:0] _waddr_T_14 = _wid_T & _wstate_T & ~wstate ? _waddr_T_8 : _waddr_T_13; // @[SRAM.scala 101:13]
  wire [38:0] _waddr_T_15 = io_w_bits_last ? 39'h0 : _waddr_T_14; // @[SRAM.scala 100:13]
  wire [3:0] _GEN_5 = reset ? 4'h0 : _rid_T_1; // @[SRAM.scala 60:{18,18} 69:7]
  wire [38:0] _GEN_6 = reset ? 39'h0 : _raddr_T_14; // @[SRAM.scala 61:{20,20} 72:9]
  wire [38:0] _GEN_7 = reset ? 39'h0 : _lower_bound_addr_T_4; // @[SRAM.scala 65:{31,31} 70:19]
  wire [31:0] _GEN_8 = reset ? 32'h0 : _beatcnt_T_11; // @[SRAM.scala 67:{24,24} 81:10]
  wire [38:0] _GEN_10 = reset ? 39'h0 : _waddr_T_15; // @[SRAM.scala 92:{22,22} 100:8]
  memory pmem ( // @[SRAM.scala 106:19]
    .clock(pmem_clock),
    .raddr(pmem_raddr),
    .rdata(pmem_rdata),
    .waddr(pmem_waddr),
    .wdata(pmem_wdata),
    .wmask(pmem_wmask)
  );
  assign io_ar_ready = ~rstate | rlast & rstate; // @[SRAM.scala 113:38]
  assign io_r_valid = rstate; // @[SRAM.scala 114:26]
  assign io_r_bits_data = pmem_rdata; // @[SRAM.scala 118:18]
  assign io_r_bits_last = rcnt == rlen & _rlast_T_1; // @[SRAM.scala 85:25]
  assign io_r_bits_id = {{3'd0}, rid}; // @[SRAM.scala 119:16]
  assign io_aw_ready = ~wstate; // @[SRAM.scala 116:26]
  assign io_w_ready = ~wstate; // @[SRAM.scala 117:26]
  assign io_b_valid = wstate; // @[SRAM.scala 123:25]
  assign pmem_clock = clock; // @[SRAM.scala 111:16]
  assign pmem_raddr = raddr; // @[SRAM.scala 107:16]
  assign pmem_waddr = _wid_T ? io_aw_bits_addr : waddr; // @[SRAM.scala 108:22]
  assign pmem_wdata = io_w_bits_data; // @[SRAM.scala 109:16]
  assign pmem_wmask = _wstate_T ? io_w_bits_strb : 8'h0; // @[SRAM.scala 110:22]
  always @(posedge clock) begin
    if (reset) begin // @[SRAM.scala 47:23]
      rstate <= 1'h0; // @[SRAM.scala 47:23]
    end else if (rstate) begin // @[Mux.scala 81:58]
      if (rlast & ~_rstate_T) begin // @[SRAM.scala 51:25]
        rstate <= 1'h0;
      end else begin
        rstate <= 1'h1;
      end
    end else begin
      rstate <= _rstate_T;
    end
    if (reset) begin // @[SRAM.scala 66:21]
      rcnt <= 8'h0; // @[SRAM.scala 66:21]
    end else if (rcnt == 8'hff | rlast | _rstate_T) begin // @[SRAM.scala 79:12]
      rcnt <= 8'h0;
    end else if (_rlast_T_1) begin // @[SRAM.scala 80:12]
      rcnt <= _rcnt_T_7;
    end
    if (reset) begin // @[SRAM.scala 62:19]
      rlen <= 8'h0; // @[SRAM.scala 62:19]
    end else if (_rstate_T) begin // @[SRAM.scala 76:14]
      rlen <= io_ar_bits_len;
    end
    if (reset) begin // @[SRAM.scala 53:23]
      wstate <= 1'h0; // @[SRAM.scala 53:23]
    end else if (wstate) begin // @[Mux.scala 81:58]
      if (_wstate_T_4) begin // @[SRAM.scala 56:25]
        wstate <= 1'h0;
      end else begin
        wstate <= 1'h1;
      end
    end else begin
      wstate <= _wstate_T_2;
    end
    rid <= _GEN_5[0]; // @[SRAM.scala 60:{18,18} 69:7]
    raddr <= _GEN_6[31:0]; // @[SRAM.scala 61:{20,20} 72:9]
    if (reset) begin // @[SRAM.scala 63:20]
      rsize <= 3'h0; // @[SRAM.scala 63:20]
    end else if (_rstate_T) begin // @[SRAM.scala 77:15]
      rsize <= io_ar_bits_size;
    end
    lower_bound_addr <= _GEN_7[31:0]; // @[SRAM.scala 65:{31,31} 70:19]
    beatcnt <= _GEN_8[7:0]; // @[SRAM.scala 67:{24,24} 81:10]
    waddr <= _GEN_10[31:0]; // @[SRAM.scala 92:{22,22} 100:8]
    if (reset) begin // @[SRAM.scala 95:22]
      wsize <= 3'h0; // @[SRAM.scala 95:22]
    end else if (_wid_T) begin // @[SRAM.scala 99:13]
      wsize <= 3'h3;
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
  rcnt = _RAND_1[7:0];
  _RAND_2 = {1{`RANDOM}};
  rlen = _RAND_2[7:0];
  _RAND_3 = {1{`RANDOM}};
  wstate = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  rid = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  raddr = _RAND_5[31:0];
  _RAND_6 = {1{`RANDOM}};
  rsize = _RAND_6[2:0];
  _RAND_7 = {1{`RANDOM}};
  lower_bound_addr = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  beatcnt = _RAND_8[7:0];
  _RAND_9 = {1{`RANDOM}};
  waddr = _RAND_9[31:0];
  _RAND_10 = {1{`RANDOM}};
  wsize = _RAND_10[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

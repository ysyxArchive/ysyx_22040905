module CLINT(
  input         clock,
  input         reset,
  output        io_in_ar_ready,
  input         io_in_ar_valid,
  input  [31:0] io_in_ar_bits_addr,
  input  [7:0]  io_in_ar_bits_len,
  input  [2:0]  io_in_ar_bits_size,
  input  [3:0]  io_in_ar_bits_id,
  input         io_in_r_ready,
  output        io_in_r_valid,
  output [63:0] io_in_r_bits_data,
  output        io_in_r_bits_last,
  output [3:0]  io_in_r_bits_id,
  output        io_in_aw_ready,
  input         io_in_aw_valid,
  input  [31:0] io_in_aw_bits_addr,
  input  [3:0]  io_in_aw_bits_id,
  output        io_in_w_ready,
  input         io_in_w_valid,
  input  [63:0] io_in_w_bits_data,
  input  [7:0]  io_in_w_bits_strb,
  input         io_in_w_bits_last,
  input         io_in_b_ready,
  output        io_in_b_valid,
  output [3:0]  io_in_b_bits_id,
  output        io_mtip,
  input         io_en_mtip,
  output        io_skip
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
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
`endif // RANDOMIZE_REG_INIT
  reg [63:0] mtimecmp; // @[CLINT.scala 28:27]
  reg [63:0] mtime; // @[CLINT.scala 29:24]
  reg [63:0] cnt; // @[CLINT.scala 36:22]
  wire  _cnt_T = cnt == 64'h0; // @[CLINT.scala 37:20]
  wire [63:0] _cnt_T_2 = cnt + 64'h1; // @[CLINT.scala 37:47]
  reg  rstate; // @[CLINT.scala 43:25]
  wire  _rstate_T = io_in_ar_ready & io_in_ar_valid; // @[Decoupled.scala 52:35]
  reg [7:0] rcnt; // @[CLINT.scala 62:23]
  reg [7:0] rlen; // @[CLINT.scala 58:21]
  wire  _rlast_T_1 = io_in_r_ready & io_in_r_valid; // @[Decoupled.scala 52:35]
  wire  rlast = rcnt == rlen & _rlast_T_1; // @[CLINT.scala 81:27]
  reg  wstate; // @[CLINT.scala 49:25]
  wire  _wstate_T = io_in_w_ready & io_in_w_valid; // @[Decoupled.scala 52:35]
  wire  _wstate_T_2 = _wstate_T & io_in_w_bits_last; // @[CLINT.scala 51:40]
  wire  _wstate_T_4 = io_in_b_ready & io_in_b_valid; // @[Decoupled.scala 52:35]
  reg [3:0] rid; // @[CLINT.scala 56:20]
  reg [31:0] raddr; // @[CLINT.scala 57:22]
  reg [2:0] rsize; // @[CLINT.scala 59:22]
  reg [31:0] lower_bound_addr; // @[CLINT.scala 61:33]
  reg [7:0] beatcnt; // @[CLINT.scala 63:26]
  wire [31:0] _lower_bound_addr_WIRE = {{24'd0}, io_in_ar_bits_len}; // @[CLINT.scala 66:{92,92}]
  wire [31:0] _lower_bound_addr_T_1 = ~_lower_bound_addr_WIRE; // @[CLINT.scala 66:65]
  wire [38:0] _GEN_2 = {{7'd0}, _lower_bound_addr_T_1}; // @[CLINT.scala 66:106]
  wire [38:0] _lower_bound_addr_T_2 = _GEN_2 << io_in_ar_bits_size; // @[CLINT.scala 66:106]
  wire [38:0] _GEN_0 = {{7'd0}, io_in_ar_bits_addr}; // @[CLINT.scala 66:60]
  wire [38:0] _lower_bound_addr_T_3 = _GEN_0 & _lower_bound_addr_T_2; // @[CLINT.scala 66:60]
  wire [38:0] _lower_bound_addr_T_4 = _rstate_T ? _lower_bound_addr_T_3 : {{7'd0}, lower_bound_addr}; // @[CLINT.scala 66:26]
  wire  _raddr_T_5 = beatcnt == 8'hff | beatcnt == rlen; // @[CLINT.scala 70:52]
  wire [38:0] _raddr_T_8 = 39'h1 << rsize; // @[CLINT.scala 71:50]
  wire [38:0] _GEN_1 = {{7'd0}, raddr}; // @[CLINT.scala 71:38]
  wire [38:0] _raddr_T_10 = _GEN_1 + _raddr_T_8; // @[CLINT.scala 71:38]
  wire [38:0] _raddr_T_11 = _rlast_T_1 ? _raddr_T_10 : {{7'd0}, raddr}; // @[CLINT.scala 71:17]
  wire [38:0] _raddr_T_12 = _rlast_T_1 & (beatcnt == 8'hff | beatcnt == rlen) ? {{7'd0}, lower_bound_addr} : _raddr_T_11
    ; // @[CLINT.scala 70:17]
  wire [38:0] _raddr_T_13 = rlast ? 39'h0 : _raddr_T_12; // @[CLINT.scala 69:17]
  wire [38:0] _raddr_T_14 = _rstate_T ? {{7'd0}, io_in_ar_bits_addr} : _raddr_T_13; // @[CLINT.scala 68:17]
  wire [7:0] _rcnt_T_7 = rcnt + 8'h1; // @[CLINT.scala 76:33]
  wire [31:0] _beatcnt_T_1 = io_in_ar_bits_addr >> io_in_ar_bits_size; // @[CLINT.scala 77:52]
  wire [31:0] _beatcnt_T_2 = _beatcnt_T_1 & _lower_bound_addr_WIRE; // @[CLINT.scala 77:75]
  wire [7:0] _beatcnt_T_8 = beatcnt + 8'h1; // @[CLINT.scala 79:43]
  wire [7:0] _beatcnt_T_9 = rstate ? _beatcnt_T_8 : 8'h0; // @[CLINT.scala 79:17]
  wire [7:0] _beatcnt_T_10 = _raddr_T_5 ? 8'h0 : _beatcnt_T_9; // @[CLINT.scala 78:17]
  wire [31:0] _beatcnt_T_11 = _rstate_T ? _beatcnt_T_2 : {{24'd0}, _beatcnt_T_10}; // @[CLINT.scala 77:17]
  reg [3:0] wid; // @[CLINT.scala 87:20]
  wire  _wid_T = io_in_aw_ready & io_in_aw_valid; // @[Decoupled.scala 52:35]
  wire [7:0] _T_1 = rlen + 8'h1; // @[CLINT.scala 114:47]
  wire [7:0] _T_2 = 8'h1 << rsize; // @[CLINT.scala 114:57]
  wire [15:0] _T_3 = _T_1 * _T_2; // @[CLINT.scala 114:52]
  wire [31:0] _GEN_5 = {{16'd0}, _T_3}; // @[CLINT.scala 114:40]
  wire [31:0] _T_5 = lower_bound_addr + _GEN_5; // @[CLINT.scala 114:40]
  wire  _T_12 = ~reset; // @[CLINT.scala 114:11]
  wire [63:0] _mask_T_8 = io_in_w_bits_strb == 8'hff ? 64'hffffffffffffffff : 64'h0; // @[CLINT.scala 121:16]
  wire [63:0] _mask_T_9 = io_in_w_bits_strb == 8'hf ? 64'hffffffff : _mask_T_8; // @[CLINT.scala 120:16]
  wire [63:0] _mask_T_10 = io_in_w_bits_strb == 8'h3 ? 64'hffff : _mask_T_9; // @[CLINT.scala 119:16]
  wire [63:0] mask = io_in_w_bits_strb == 8'h1 ? 64'hff : _mask_T_10; // @[CLINT.scala 118:16]
  wire  _mtimecmp_T_1 = io_in_aw_bits_addr == 32'h20004000; // @[CLINT.scala 124:57]
  wire [63:0] _mtimecmp_T_3 = io_in_w_bits_data & mask; // @[CLINT.scala 124:89]
  wire  _mtime_T_1 = io_in_aw_bits_addr == 32'h2000bff8; // @[CLINT.scala 125:54]
  wire [63:0] _mtime_T_8 = mtime + 64'h1; // @[CLINT.scala 127:46]
  wire [63:0] _io_in_r_bits_data_T_2 = raddr == 32'h2000bff8 ? mtime : 64'h0; // @[CLINT.scala 131:28]
  wire [38:0] _GEN_6 = reset ? 39'h0 : _raddr_T_14; // @[CLINT.scala 57:{22,22} 68:11]
  wire [38:0] _GEN_7 = reset ? 39'h0 : _lower_bound_addr_T_4; // @[CLINT.scala 61:{33,33} 66:21]
  wire [31:0] _GEN_8 = reset ? 32'h0 : _beatcnt_T_11; // @[CLINT.scala 63:{26,26} 77:12]
  assign io_in_ar_ready = ~rstate | rlast & rstate; // @[CLINT.scala 103:43]
  assign io_in_r_valid = rstate; // @[CLINT.scala 104:31]
  assign io_in_r_bits_data = raddr == 32'h20004000 ? mtimecmp : _io_in_r_bits_data_T_2; // @[CLINT.scala 130:31]
  assign io_in_r_bits_last = rcnt == rlen & _rlast_T_1; // @[CLINT.scala 81:27]
  assign io_in_r_bits_id = rid; // @[CLINT.scala 108:21]
  assign io_in_aw_ready = ~wstate; // @[CLINT.scala 106:31]
  assign io_in_w_ready = ~wstate; // @[CLINT.scala 107:31]
  assign io_in_b_valid = wstate; // @[CLINT.scala 112:30]
  assign io_in_b_bits_id = wid; // @[CLINT.scala 110:21]
  assign io_mtip = mtime >= mtimecmp; // @[CLINT.scala 32:22]
  assign io_skip = io_in_aw_bits_addr >= 32'h20000000 & io_in_aw_bits_addr <= 32'h2000bfff | io_in_ar_bits_addr >= 32'h20000000
     & io_in_ar_bits_addr <= 32'h2000bfff; // @[CLINT.scala 136:93]
  always @(posedge clock) begin
    if (reset) begin // @[CLINT.scala 28:27]
      mtimecmp <= 64'h0; // @[CLINT.scala 28:27]
    end else if (_wstate_T & io_in_aw_bits_addr == 32'h20004000) begin // @[CLINT.scala 124:20]
      mtimecmp <= _mtimecmp_T_3;
    end
    if (reset) begin // @[CLINT.scala 29:24]
      mtime <= 64'h0; // @[CLINT.scala 29:24]
    end else if (_wstate_T & io_in_aw_bits_addr == 32'h2000bff8) begin // @[CLINT.scala 125:17]
      mtime <= _mtimecmp_T_3;
    end else if (~io_en_mtip) begin // @[CLINT.scala 126:17]
      mtime <= 64'h0;
    end else if (_cnt_T) begin // @[CLINT.scala 127:17]
      mtime <= _mtime_T_8;
    end
    if (reset) begin // @[CLINT.scala 36:22]
      cnt <= 64'h0; // @[CLINT.scala 36:22]
    end else if (cnt == 64'h0) begin // @[CLINT.scala 37:15]
      cnt <= 64'h0;
    end else begin
      cnt <= _cnt_T_2;
    end
    if (reset) begin // @[CLINT.scala 43:25]
      rstate <= 1'h0; // @[CLINT.scala 43:25]
    end else if (rstate) begin // @[Mux.scala 81:58]
      if (rlast & ~_rstate_T) begin // @[CLINT.scala 47:27]
        rstate <= 1'h0;
      end else begin
        rstate <= 1'h1;
      end
    end else begin
      rstate <= _rstate_T;
    end
    if (reset) begin // @[CLINT.scala 62:23]
      rcnt <= 8'h0; // @[CLINT.scala 62:23]
    end else if (rcnt == 8'hff | rlast | _rstate_T) begin // @[CLINT.scala 75:14]
      rcnt <= 8'h0;
    end else if (_rlast_T_1) begin // @[CLINT.scala 76:14]
      rcnt <= _rcnt_T_7;
    end
    if (reset) begin // @[CLINT.scala 58:21]
      rlen <= 8'h0; // @[CLINT.scala 58:21]
    end else if (_rstate_T) begin // @[CLINT.scala 72:16]
      rlen <= io_in_ar_bits_len;
    end
    if (reset) begin // @[CLINT.scala 49:25]
      wstate <= 1'h0; // @[CLINT.scala 49:25]
    end else if (wstate) begin // @[Mux.scala 81:58]
      if (_wstate_T_4) begin // @[CLINT.scala 52:27]
        wstate <= 1'h0;
      end else begin
        wstate <= 1'h1;
      end
    end else begin
      wstate <= _wstate_T_2;
    end
    if (reset) begin // @[CLINT.scala 56:20]
      rid <= 4'h0; // @[CLINT.scala 56:20]
    end else if (_rstate_T) begin // @[CLINT.scala 65:15]
      rid <= io_in_ar_bits_id;
    end else begin
      rid <= 4'h0;
    end
    raddr <= _GEN_6[31:0]; // @[CLINT.scala 57:{22,22} 68:11]
    if (reset) begin // @[CLINT.scala 59:22]
      rsize <= 3'h0; // @[CLINT.scala 59:22]
    end else if (_rstate_T) begin // @[CLINT.scala 73:17]
      rsize <= io_in_ar_bits_size;
    end
    lower_bound_addr <= _GEN_7[31:0]; // @[CLINT.scala 61:{33,33} 66:21]
    beatcnt <= _GEN_8[7:0]; // @[CLINT.scala 63:{26,26} 77:12]
    if (reset) begin // @[CLINT.scala 87:20]
      wid <= 4'h0; // @[CLINT.scala 87:20]
    end else if (_wid_T) begin // @[CLINT.scala 93:15]
      wid <= io_in_aw_bits_id;
    end else begin
      wid <= 4'h0;
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (~reset & ~(raddr < _T_5 & raddr >= lower_bound_addr | raddr == 32'h0)) begin
          $fwrite(32'h80000002,
            "Assertion failed\n    at CLINT.scala:114 assert(((raddr <  lower_bound_addr + (rlen+1.U)*(1.U<<rsize )) && (raddr >= lower_bound_addr)) || (raddr === 0.U))\n"
            ); // @[CLINT.scala 114:11]
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
          $fatal; // @[CLINT.scala 114:11]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_12 & ~(_wstate_T & (_mtimecmp_T_1 | _mtime_T_1) | ~_wstate_T)) begin
          $fwrite(32'h80000002,
            "Assertion failed: Error: clint_waddr=0x%x\n\n    at CLINT.scala:134 chisel3.assert((io.in.w.fire && ((io.in.aw.bits.addr === MTIMECMP) || (io.in.aw.bits.addr === MTIME))) || (!io.in.w.fire),\"Error: clint_waddr=0x%%x\\n\",io.in.aw.bits.addr)\n"
            ,io_in_aw_bits_addr); // @[CLINT.scala 134:19]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_12 & ~(_wstate_T & (_mtimecmp_T_1 | _mtime_T_1) | ~_wstate_T)) begin
          $fatal; // @[CLINT.scala 134:19]
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
  _RAND_0 = {2{`RANDOM}};
  mtimecmp = _RAND_0[63:0];
  _RAND_1 = {2{`RANDOM}};
  mtime = _RAND_1[63:0];
  _RAND_2 = {2{`RANDOM}};
  cnt = _RAND_2[63:0];
  _RAND_3 = {1{`RANDOM}};
  rstate = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  rcnt = _RAND_4[7:0];
  _RAND_5 = {1{`RANDOM}};
  rlen = _RAND_5[7:0];
  _RAND_6 = {1{`RANDOM}};
  wstate = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  rid = _RAND_7[3:0];
  _RAND_8 = {1{`RANDOM}};
  raddr = _RAND_8[31:0];
  _RAND_9 = {1{`RANDOM}};
  rsize = _RAND_9[2:0];
  _RAND_10 = {1{`RANDOM}};
  lower_bound_addr = _RAND_10[31:0];
  _RAND_11 = {1{`RANDOM}};
  beatcnt = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  wid = _RAND_12[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

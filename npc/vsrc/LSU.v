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
  input         io_lm_b_valid,
  input         io_flush
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [63:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  reg [1:0] rstate; // @[LSU.scala 15:23]
  wire  _rstate_T_1 = io_lm_ar_ready & io_lm_ar_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _rstate_T_2 = _rstate_T_1 ? 2'h1 : 2'h0; // @[LSU.scala 17:46]
  wire  _rstate_T_5 = io_lm_r_ready & io_lm_r_valid; // @[Decoupled.scala 52:35]
  reg [1:0] wstate; // @[LSU.scala 20:23]
  wire  _wstate_T_1 = io_lm_aw_ready & io_lm_aw_valid; // @[Decoupled.scala 52:35]
  wire  _wstate_T_2 = io_lm_w_ready & io_lm_w_valid; // @[Decoupled.scala 52:35]
  wire [1:0] _wstate_T_4 = _wstate_T_1 & _wstate_T_2 ? 2'h1 : 2'h0; // @[LSU.scala 22:46]
  wire  _wstate_T_7 = io_lm_b_ready & io_lm_b_valid; // @[Decoupled.scala 52:35]
  wire  _io_lm_ar_valid_T_2 = ~reset; // @[LSU.scala 27:40]
  wire  _io_lm_aw_valid_T_4 = wstate == 2'h0 & _io_lm_ar_valid_T_2 & io_ls_in_valid; // @[LSU.scala 30:54]
  reg [63:0] rdata; // @[Reg.scala 35:20]
  assign io_ls_out_valid = _rstate_T_5 | _wstate_T_7; // @[LSU.scala 39:33]
  assign io_ls_out_bits_rdata = _rstate_T_5 ? io_lm_r_bits_data : rdata; // @[LSU.scala 38:28]
  assign io_lm_ar_valid = rstate == 2'h0 & ~reset & io_ls_in_valid & io_en_r; // @[LSU.scala 27:71]
  assign io_lm_ar_bits_addr = io_ls_in_bits_raddr; // @[LSU.scala 26:21]
  assign io_lm_r_ready = 1'h1; // @[LSU.scala 28:16]
  assign io_lm_aw_valid = wstate == 2'h0 & _io_lm_ar_valid_T_2 & io_ls_in_valid & io_en_w; // @[LSU.scala 30:71]
  assign io_lm_aw_bits_addr = io_ls_in_bits_waddr; // @[LSU.scala 29:21]
  assign io_lm_w_valid = _io_lm_aw_valid_T_4 & io_en_w; // @[LSU.scala 33:70]
  assign io_lm_w_bits_data = io_ls_in_bits_wdata; // @[LSU.scala 31:20]
  assign io_lm_w_bits_strb = io_ls_in_bits_wmask; // @[LSU.scala 32:20]
  assign io_lm_b_ready = 1'h1; // @[LSU.scala 34:16]
  always @(posedge clock) begin
    if (reset) begin // @[LSU.scala 15:23]
      rstate <= 2'h0; // @[LSU.scala 15:23]
    end else if (2'h1 == rstate) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[LSU.scala 18:19]
        rstate <= 2'h0;
      end else if (_rstate_T_5) begin // @[LSU.scala 18:46]
        rstate <= 2'h0;
      end else begin
        rstate <= 2'h1;
      end
    end else if (2'h0 == rstate) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[LSU.scala 17:19]
        rstate <= 2'h0;
      end else begin
        rstate <= _rstate_T_2;
      end
    end else begin
      rstate <= 2'h0;
    end
    if (reset) begin // @[LSU.scala 20:23]
      wstate <= 2'h0; // @[LSU.scala 20:23]
    end else if (2'h1 == wstate) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[LSU.scala 23:19]
        wstate <= 2'h0;
      end else if (_wstate_T_7) begin // @[LSU.scala 23:46]
        wstate <= 2'h0;
      end else begin
        wstate <= 2'h1;
      end
    end else if (2'h0 == wstate) begin // @[Mux.scala 81:58]
      if (io_flush) begin // @[LSU.scala 22:19]
        wstate <= 2'h0;
      end else begin
        wstate <= _wstate_T_4;
      end
    end else begin
      wstate <= 2'h0;
    end
    if (reset) begin // @[Reg.scala 35:20]
      rdata <= 64'h0; // @[Reg.scala 35:20]
    end else if (_rstate_T_5) begin // @[Reg.scala 36:18]
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

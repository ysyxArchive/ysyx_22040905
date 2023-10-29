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
  input  [63:0] io_w_epc,
  input         io_clint_mtip,
  output        io_irq,
  input  [31:0] io_irq_pc,
  output [31:0] io_next_pc,
  output        io_en_mtip
);
`ifdef RANDOMIZE_REG_INIT
  reg [63:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
  reg [63:0] _RAND_5;
  reg [31:0] _RAND_6;
`endif // RANDOMIZE_REG_INIT
  wire [63:0] p_rf_0; // @[CSR.scala 75:17]
  wire [63:0] p_rf_1; // @[CSR.scala 75:17]
  wire [63:0] p_rf_2; // @[CSR.scala 75:17]
  wire [63:0] p_rf_3; // @[CSR.scala 75:17]
  wire [63:0] p_rf_4; // @[CSR.scala 75:17]
  wire [63:0] p_rf_5; // @[CSR.scala 75:17]
  reg [63:0] csr_0; // @[CSR.scala 34:20]
  reg [63:0] csr_1; // @[CSR.scala 34:20]
  reg [63:0] csr_2; // @[CSR.scala 34:20]
  reg [63:0] csr_3; // @[CSR.scala 34:20]
  reg [63:0] csr_4; // @[CSR.scala 34:20]
  reg [63:0] csr_5; // @[CSR.scala 34:20]
  reg  clint_mtip; // @[CSR.scala 39:27]
  wire  clint_irq = csr_0[3] & csr_4[7] & io_clint_mtip & ~clint_mtip; // @[CSR.scala 43:62]
  wire [2:0] _map_r_T_6 = io_r_idx_r == 12'h344 ? 3'h5 : 3'h0; // @[CSR.scala 54:15]
  wire [2:0] _map_r_T_7 = io_r_idx_r == 12'h304 ? 3'h4 : _map_r_T_6; // @[CSR.scala 53:15]
  wire [2:0] _map_r_T_8 = io_r_idx_r == 12'h342 ? 3'h3 : _map_r_T_7; // @[CSR.scala 52:15]
  wire [2:0] _map_r_T_9 = io_r_idx_r == 12'h341 ? 3'h2 : _map_r_T_8; // @[CSR.scala 51:15]
  wire [2:0] _map_r_T_10 = io_r_idx_r == 12'h305 ? 3'h1 : _map_r_T_9; // @[CSR.scala 50:15]
  wire [2:0] _map_r_T_11 = io_r_idx_r == 12'h300 ? 3'h0 : _map_r_T_10; // @[CSR.scala 49:15]
  wire [2:0] _map_w_T_6 = io_w_idx_w == 12'h344 ? 3'h5 : 3'h0; // @[CSR.scala 62:15]
  wire [2:0] _map_w_T_7 = io_w_idx_w == 12'h304 ? 3'h4 : _map_w_T_6; // @[CSR.scala 61:15]
  wire [2:0] _map_w_T_8 = io_w_idx_w == 12'h342 ? 3'h3 : _map_w_T_7; // @[CSR.scala 60:15]
  wire [2:0] _map_w_T_9 = io_w_idx_w == 12'h341 ? 3'h2 : _map_w_T_8; // @[CSR.scala 59:15]
  wire [2:0] _map_w_T_10 = io_w_idx_w == 12'h305 ? 3'h1 : _map_w_T_9; // @[CSR.scala 58:15]
  wire [2:0] _map_w_T_11 = io_w_idx_w == 12'h300 ? 3'h0 : _map_w_T_10; // @[CSR.scala 57:15]
  wire  _csr_0_T_1 = io_w_no == 64'h1; // @[CSR.scala 65:44]
  wire [63:0] _csr_0_T_10 = {csr_0[63:8],csr_0[3],csr_0[6:4],1'h0,csr_0[2:0]}; // @[Cat.scala 33:92]
  wire [63:0] _csr_0_T_19 = {csr_0[63:8],1'h1,csr_0[6:4],csr_0[7],csr_0[2:0]}; // @[Cat.scala 33:92]
  wire [4:0] map_r = {{2'd0}, _map_r_T_11}; // @[CSR.scala 36:19 49:10]
  wire [63:0] _GEN_1 = 3'h1 == map_r[2:0] ? csr_1 : csr_0; // @[CSR.scala 72:{20,20}]
  wire [63:0] _GEN_2 = 3'h2 == map_r[2:0] ? csr_2 : _GEN_1; // @[CSR.scala 72:{20,20}]
  wire [63:0] _GEN_3 = 3'h3 == map_r[2:0] ? csr_3 : _GEN_2; // @[CSR.scala 72:{20,20}]
  wire [63:0] _GEN_4 = 3'h4 == map_r[2:0] ? csr_4 : _GEN_3; // @[CSR.scala 72:{20,20}]
  wire [63:0] _GEN_5 = 3'h5 == map_r[2:0] ? csr_5 : _GEN_4; // @[CSR.scala 72:{20,20}]
  wire [4:0] map_w = {{2'd0}, _map_w_T_11}; // @[CSR.scala 37:19 57:10]
  wire [63:0] _GEN_7 = 3'h1 == map_w[2:0] ? csr_1 : csr_0; // @[CSR.scala 73:{20,20}]
  wire [63:0] _GEN_8 = 3'h2 == map_w[2:0] ? csr_2 : _GEN_7; // @[CSR.scala 73:{20,20}]
  wire [63:0] _GEN_9 = 3'h3 == map_w[2:0] ? csr_3 : _GEN_8; // @[CSR.scala 73:{20,20}]
  wire [63:0] _GEN_10 = 3'h4 == map_w[2:0] ? csr_4 : _GEN_9; // @[CSR.scala 73:{20,20}]
  print_csr p ( // @[CSR.scala 75:17]
    .rf_0(p_rf_0),
    .rf_1(p_rf_1),
    .rf_2(p_rf_2),
    .rf_3(p_rf_3),
    .rf_4(p_rf_4),
    .rf_5(p_rf_5)
  );
  assign io_r_val_r = io_r_en_r ? _GEN_5 : 64'h0; // @[CSR.scala 72:20]
  assign io_irq = csr_0[3] & csr_4[7] & io_clint_mtip & ~clint_mtip; // @[CSR.scala 43:62]
  assign io_next_pc = csr_1[31:0]; // @[CSR.scala 46:23]
  assign io_en_mtip = csr_0[3] & csr_4[7]; // @[CSR.scala 48:28]
  assign p_rf_0 = csr_0; // @[CSR.scala 76:12]
  assign p_rf_1 = csr_1; // @[CSR.scala 76:12]
  assign p_rf_2 = csr_2; // @[CSR.scala 76:12]
  assign p_rf_3 = csr_3; // @[CSR.scala 76:12]
  assign p_rf_4 = csr_4; // @[CSR.scala 76:12]
  assign p_rf_5 = csr_5; // @[CSR.scala 76:12]
  always @(posedge clock) begin
    if (reset) begin // @[CSR.scala 34:20]
      csr_0 <= 64'ha00001800; // @[CSR.scala 34:20]
    end else if (3'h0 == map_w[2:0]) begin // @[CSR.scala 73:15]
      if (io_w_en_w) begin // @[CSR.scala 73:20]
        csr_0 <= io_w_val_w;
      end else if (3'h5 == map_w[2:0]) begin // @[CSR.scala 73:20]
        csr_0 <= csr_5; // @[CSR.scala 73:20]
      end else begin
        csr_0 <= _GEN_10;
      end
    end else if (clint_irq | io_w_no == 64'h1) begin // @[CSR.scala 65:16]
      csr_0 <= _csr_0_T_10;
    end else if (io_w_no == 64'h2) begin // @[CSR.scala 66:16]
      csr_0 <= _csr_0_T_19;
    end
    if (reset) begin // @[CSR.scala 34:20]
      csr_1 <= 64'h0; // @[CSR.scala 34:20]
    end else if (3'h1 == map_w[2:0]) begin // @[CSR.scala 73:15]
      if (io_w_en_w) begin // @[CSR.scala 73:20]
        csr_1 <= io_w_val_w;
      end else if (3'h5 == map_w[2:0]) begin // @[CSR.scala 73:20]
        csr_1 <= csr_5; // @[CSR.scala 73:20]
      end else begin
        csr_1 <= _GEN_10;
      end
    end
    if (reset) begin // @[CSR.scala 34:20]
      csr_2 <= 64'h0; // @[CSR.scala 34:20]
    end else if (3'h2 == map_w[2:0]) begin // @[CSR.scala 73:15]
      if (io_w_en_w) begin // @[CSR.scala 73:20]
        csr_2 <= io_w_val_w;
      end else if (3'h5 == map_w[2:0]) begin // @[CSR.scala 73:20]
        csr_2 <= csr_5; // @[CSR.scala 73:20]
      end else begin
        csr_2 <= _GEN_10;
      end
    end else if (clint_irq) begin // @[CSR.scala 68:16]
      csr_2 <= {{32'd0}, io_irq_pc};
    end else if (_csr_0_T_1) begin // @[CSR.scala 69:16]
      csr_2 <= io_w_epc;
    end
    if (reset) begin // @[CSR.scala 34:20]
      csr_3 <= 64'h0; // @[CSR.scala 34:20]
    end else if (3'h3 == map_w[2:0]) begin // @[CSR.scala 73:15]
      if (io_w_en_w) begin // @[CSR.scala 73:20]
        csr_3 <= io_w_val_w;
      end else if (3'h5 == map_w[2:0]) begin // @[CSR.scala 73:20]
        csr_3 <= csr_5; // @[CSR.scala 73:20]
      end else begin
        csr_3 <= _GEN_10;
      end
    end else if (clint_irq) begin // @[CSR.scala 70:16]
      csr_3 <= 64'h8000000000000007;
    end else if (_csr_0_T_1) begin // @[CSR.scala 71:16]
      csr_3 <= 64'hb;
    end
    if (reset) begin // @[CSR.scala 34:20]
      csr_4 <= 64'h0; // @[CSR.scala 34:20]
    end else if (3'h4 == map_w[2:0]) begin // @[CSR.scala 73:15]
      if (io_w_en_w) begin // @[CSR.scala 73:20]
        csr_4 <= io_w_val_w;
      end else if (3'h5 == map_w[2:0]) begin // @[CSR.scala 73:20]
        csr_4 <= csr_5; // @[CSR.scala 73:20]
      end else begin
        csr_4 <= _GEN_10;
      end
    end
    if (reset) begin // @[CSR.scala 34:20]
      csr_5 <= 64'h0; // @[CSR.scala 34:20]
    end else if (3'h5 == map_w[2:0]) begin // @[CSR.scala 73:15]
      if (io_w_en_w) begin // @[CSR.scala 73:20]
        csr_5 <= io_w_val_w;
      end else if (!(3'h5 == map_w[2:0])) begin // @[CSR.scala 73:20]
        csr_5 <= _GEN_10;
      end
    end
    if (reset) begin // @[CSR.scala 39:27]
      clint_mtip <= 1'h0; // @[CSR.scala 39:27]
    end else begin
      clint_mtip <= io_clint_mtip; // @[CSR.scala 40:15]
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
  _RAND_4 = {2{`RANDOM}};
  csr_4 = _RAND_4[63:0];
  _RAND_5 = {2{`RANDOM}};
  csr_5 = _RAND_5[63:0];
  _RAND_6 = {1{`RANDOM}};
  clint_mtip = _RAND_6[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

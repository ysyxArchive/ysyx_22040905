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
  output        io_out_bits_isJump,
  input  [31:0] io_irq_nextpc,
  input         io_irq
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] pre_decode_io_inst; // @[IFU.scala 34:25]
  wire  pre_decode_io_jump; // @[IFU.scala 34:25]
  wire  pre_decode_io_jal; // @[IFU.scala 34:25]
  wire [31:0] pre_decode_io_jal_off; // @[IFU.scala 34:25]
  wire [63:0] it_pc; // @[IFU.scala 73:16]
  wire  it_en; // @[IFU.scala 73:16]
  wire [31:0] it_inst; // @[IFU.scala 73:16]
  reg  IF_reg_valid; // @[Reg.scala 35:20]
  wire  _next_valid_T_2 = io_out_ready & io_out_valid; // @[Decoupled.scala 52:35]
  wire  _next_valid_T_5 = pre_decode_io_jump & _next_valid_T_2 ? 1'h0 : IF_reg_valid; // @[IFU.scala 48:18]
  wire  _next_valid_T_6 = io_clearJump | _next_valid_T_5; // @[IFU.scala 47:18]
  wire  next_valid = io_irq | _next_valid_T_6; // @[IFU.scala 46:18]
  reg [63:0] IF_reg_pc; // @[Reg.scala 35:20]
  wire [63:0] _GEN_3 = {{32'd0}, pre_decode_io_jal_off}; // @[IFU.scala 54:53]
  wire [63:0] _next_pc_T_5 = IF_reg_pc + _GEN_3; // @[IFU.scala 54:53]
  wire [63:0] _next_pc_T_7 = IF_reg_pc + 64'h4; // @[IFU.scala 54:85]
  wire [63:0] _next_pc_T_8 = pre_decode_io_jal ? _next_pc_T_5 : _next_pc_T_7; // @[IFU.scala 54:18]
  wire [63:0] _next_pc_T_9 = _next_valid_T_2 ? _next_pc_T_8 : IF_reg_pc; // @[IFU.scala 53:16]
  wire [63:0] _next_pc_T_10 = io_clearJump ? io_pc_dnpc : _next_pc_T_9; // @[IFU.scala 52:16]
  wire [63:0] next_pc = io_irq ? {{32'd0}, io_irq_nextpc} : _next_pc_T_10; // @[IFU.scala 51:16]
  Pre_Decode pre_decode ( // @[IFU.scala 34:25]
    .io_inst(pre_decode_io_inst),
    .io_jump(pre_decode_io_jump),
    .io_jal(pre_decode_io_jal),
    .io_jal_off(pre_decode_io_jal_off)
  );
  itrace it ( // @[IFU.scala 73:16]
    .pc(it_pc),
    .en(it_en),
    .inst(it_inst)
  );
  assign io_lm_ar_valid = ~reset & next_valid; // @[IFU.scala 58:34]
  assign io_lm_ar_bits_addr = next_pc[31:0]; // @[IFU.scala 57:30]
  assign io_out_valid = io_lm_r_valid | ~IF_reg_valid | io_irq; // @[IFU.scala 71:52]
  assign io_out_bits_pc = IF_reg_valid ? IF_reg_pc[31:0] : 32'h0; // @[IFU.scala 69:22]
  assign io_out_bits_inst = IF_reg_valid ? io_lm_r_bits_data[31:0] : 32'h13; // @[IFU.scala 68:24]
  assign io_out_bits_isJump = IF_reg_valid & pre_decode_io_jump; // @[IFU.scala 70:26]
  assign pre_decode_io_inst = io_lm_r_bits_data[31:0]; // @[IFU.scala 44:40]
  assign it_pc = {{32'd0}, IF_reg_pc[31:0]}; // @[IFU.scala 76:11]
  assign it_en = _next_valid_T_2 & IF_reg_valid; // @[IFU.scala 74:25]
  assign it_inst = io_lm_r_bits_data[31:0]; // @[IFU.scala 75:32]
  always @(posedge clock) begin
    IF_reg_valid <= reset | next_valid; // @[Reg.scala 35:{20,20}]
    if (reset) begin // @[Reg.scala 35:20]
      IF_reg_pc <= 64'h80000000; // @[Reg.scala 35:20]
    end else if (next_valid) begin // @[Reg.scala 36:18]
      if (io_irq) begin // @[IFU.scala 51:16]
        IF_reg_pc <= {{32'd0}, io_irq_nextpc};
      end else if (io_clearJump) begin // @[IFU.scala 52:16]
        IF_reg_pc <= io_pc_dnpc;
      end else begin
        IF_reg_pc <= _next_pc_T_9;
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

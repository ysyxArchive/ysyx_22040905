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
  input         io_irq,
  input  [31:0] io_real_pc,
  input         io_p_error,
  output [63:0] io_B_num,
  output [63:0] io_B_Error,
  output [63:0] io_block_num
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [63:0] _RAND_1;
  reg [63:0] _RAND_2;
  reg [63:0] _RAND_3;
  reg [63:0] _RAND_4;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] pre_decode_io_inst; // @[IFU.scala 40:25]
  wire  pre_decode_io_jump; // @[IFU.scala 40:25]
  wire  pre_decode_io_j; // @[IFU.scala 40:25]
  wire [31:0] pre_decode_io_offset; // @[IFU.scala 40:25]
  wire [63:0] it_pc; // @[IFU.scala 79:16]
  wire  it_en; // @[IFU.scala 79:16]
  wire [31:0] it_inst; // @[IFU.scala 79:16]
  reg  IF_reg_valid; // @[Reg.scala 35:20]
  wire  _next_valid_T_5 = io_out_ready & io_out_valid; // @[Decoupled.scala 52:35]
  wire  _next_valid_T_8 = pre_decode_io_jump & _next_valid_T_5 ? 1'h0 : IF_reg_valid; // @[IFU.scala 53:18]
  wire  next_valid = io_irq | io_clearJump | io_p_error | _next_valid_T_8; // @[IFU.scala 52:18]
  wire  _IF_reg_pc_T_2 = io_p_error | next_valid; // @[IFU.scala 43:72]
  reg [63:0] IF_reg_pc; // @[Reg.scala 35:20]
  wire  _next_pc_T_5 = pre_decode_io_j; // @[IFU.scala 60:33]
  wire [63:0] _GEN_3 = {{32'd0}, pre_decode_io_offset}; // @[IFU.scala 60:49]
  wire [63:0] _next_pc_T_7 = IF_reg_pc + _GEN_3; // @[IFU.scala 60:49]
  wire [63:0] _next_pc_T_9 = IF_reg_pc + 64'h4; // @[IFU.scala 61:22]
  wire [63:0] _next_pc_T_10 = pre_decode_io_j ? _next_pc_T_7 : _next_pc_T_9; // @[IFU.scala 60:16]
  wire [63:0] _next_pc_T_11 = ~_next_valid_T_5 ? IF_reg_pc : _next_pc_T_10; // @[IFU.scala 59:16]
  wire [63:0] _next_pc_T_12 = io_clearJump ? io_pc_dnpc : _next_pc_T_11; // @[IFU.scala 58:16]
  wire [63:0] _next_pc_T_13 = io_p_error ? {{32'd0}, io_real_pc} : _next_pc_T_12; // @[IFU.scala 57:16]
  wire [63:0] next_pc = io_irq ? {{32'd0}, io_irq_nextpc} : _next_pc_T_13; // @[IFU.scala 56:16]
  reg [63:0] B_num; // @[IFU.scala 86:20]
  reg [63:0] B_Error; // @[IFU.scala 87:22]
  wire [63:0] _B_num_T_4 = B_num + 64'h1; // @[IFU.scala 89:58]
  wire [63:0] _B_Error_T_2 = B_Error + 64'h1; // @[IFU.scala 90:43]
  reg [63:0] block_num; // @[IFU.scala 96:24]
  wire [63:0] _block_num_T_4 = block_num + 64'h1; // @[IFU.scala 97:67]
  Pre_Decode pre_decode ( // @[IFU.scala 40:25]
    .io_inst(pre_decode_io_inst),
    .io_jump(pre_decode_io_jump),
    .io_j(pre_decode_io_j),
    .io_offset(pre_decode_io_offset)
  );
  itrace it ( // @[IFU.scala 79:16]
    .pc(it_pc),
    .en(it_en),
    .inst(it_inst)
  );
  assign io_lm_ar_valid = ~reset & next_valid; // @[IFU.scala 64:34]
  assign io_lm_ar_bits_addr = next_pc[31:0]; // @[IFU.scala 63:30]
  assign io_out_valid = io_lm_r_valid | ~IF_reg_valid | io_irq | io_p_error; // @[IFU.scala 77:69]
  assign io_out_bits_pc = IF_reg_valid ? IF_reg_pc[31:0] : 32'h0; // @[IFU.scala 75:22]
  assign io_out_bits_inst = IF_reg_valid ? io_lm_r_bits_data[31:0] : 32'h13; // @[IFU.scala 74:24]
  assign io_out_bits_isJump = IF_reg_valid & pre_decode_io_jump; // @[IFU.scala 76:26]
  assign io_B_num = B_num; // @[IFU.scala 92:12]
  assign io_B_Error = B_Error; // @[IFU.scala 93:14]
  assign io_block_num = block_num; // @[IFU.scala 98:15]
  assign pre_decode_io_inst = io_lm_r_bits_data[31:0]; // @[IFU.scala 50:40]
  assign it_pc = {{32'd0}, IF_reg_pc[31:0]}; // @[IFU.scala 82:11]
  assign it_en = _next_valid_T_5 & IF_reg_valid; // @[IFU.scala 80:25]
  assign it_inst = io_lm_r_bits_data[31:0]; // @[IFU.scala 81:32]
  always @(posedge clock) begin
    IF_reg_valid <= reset | next_valid; // @[Reg.scala 35:{20,20}]
    if (reset) begin // @[Reg.scala 35:20]
      IF_reg_pc <= 64'h80000000; // @[Reg.scala 35:20]
    end else if (_IF_reg_pc_T_2) begin // @[Reg.scala 36:18]
      if (io_irq) begin // @[IFU.scala 56:16]
        IF_reg_pc <= {{32'd0}, io_irq_nextpc};
      end else if (io_p_error) begin // @[IFU.scala 57:16]
        IF_reg_pc <= {{32'd0}, io_real_pc};
      end else begin
        IF_reg_pc <= _next_pc_T_12;
      end
    end
    if (reset) begin // @[IFU.scala 86:20]
      B_num <= 64'h0; // @[IFU.scala 86:20]
    end else if (_next_valid_T_5 & _next_pc_T_5) begin // @[IFU.scala 89:15]
      B_num <= _B_num_T_4;
    end
    if (reset) begin // @[IFU.scala 87:22]
      B_Error <= 64'h0; // @[IFU.scala 87:22]
    end else if (io_p_error) begin // @[IFU.scala 90:17]
      B_Error <= _B_Error_T_2;
    end
    if (reset) begin // @[IFU.scala 96:24]
      block_num <= 64'h0; // @[IFU.scala 96:24]
    end else if (_next_valid_T_5 & pre_decode_io_jump) begin // @[IFU.scala 97:17]
      block_num <= _block_num_T_4;
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
  _RAND_2 = {2{`RANDOM}};
  B_num = _RAND_2[63:0];
  _RAND_3 = {2{`RANDOM}};
  B_Error = _RAND_3[63:0];
  _RAND_4 = {2{`RANDOM}};
  block_num = _RAND_4[63:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

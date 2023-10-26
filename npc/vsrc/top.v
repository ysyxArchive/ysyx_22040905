module top(
  input         clock,
  input         reset,
  output [63:0] io_pc,
  output        io_valid,
  output [63:0] io_hitrate_i,
  output [63:0] io_hitrate_d,
  input         io_mul_sel,
  output        io_timer_diff_skip,
  output [63:0] io_B_num,
  output [63:0] io_B_Error,
  output [63:0] io_block_num,
  output [63:0] io_mul_num,
  output [63:0] io_div_num
);
  wire  ifu_clock; // @[top.scala 19:19]
  wire  ifu_reset; // @[top.scala 19:19]
  wire [63:0] ifu_io_pc_dnpc; // @[top.scala 19:19]
  wire  ifu_io_clearJump; // @[top.scala 19:19]
  wire  ifu_io_lm_ar_valid; // @[top.scala 19:19]
  wire [31:0] ifu_io_lm_ar_bits_addr; // @[top.scala 19:19]
  wire  ifu_io_lm_r_valid; // @[top.scala 19:19]
  wire [63:0] ifu_io_lm_r_bits_data; // @[top.scala 19:19]
  wire  ifu_io_out_ready; // @[top.scala 19:19]
  wire  ifu_io_out_valid; // @[top.scala 19:19]
  wire [31:0] ifu_io_out_bits_pc; // @[top.scala 19:19]
  wire [31:0] ifu_io_out_bits_inst; // @[top.scala 19:19]
  wire  ifu_io_out_bits_isJump; // @[top.scala 19:19]
  wire [31:0] ifu_io_irq_nextpc; // @[top.scala 19:19]
  wire  ifu_io_irq; // @[top.scala 19:19]
  wire [31:0] ifu_io_real_pc; // @[top.scala 19:19]
  wire  ifu_io_p_error; // @[top.scala 19:19]
  wire [63:0] ifu_io_B_num; // @[top.scala 19:19]
  wire [63:0] ifu_io_B_Error; // @[top.scala 19:19]
  wire [63:0] ifu_io_block_num; // @[top.scala 19:19]
  wire  idu_clock; // @[top.scala 20:19]
  wire  idu_reset; // @[top.scala 20:19]
  wire  idu_io_in_ready; // @[top.scala 20:19]
  wire  idu_io_in_valid; // @[top.scala 20:19]
  wire [31:0] idu_io_in_bits_pc; // @[top.scala 20:19]
  wire [31:0] idu_io_in_bits_inst; // @[top.scala 20:19]
  wire  idu_io_in_bits_isJump; // @[top.scala 20:19]
  wire  idu_io_out_ready; // @[top.scala 20:19]
  wire  idu_io_out_valid; // @[top.scala 20:19]
  wire [31:0] idu_io_out_bits_pc; // @[top.scala 20:19]
  wire [31:0] idu_io_out_bits_inst; // @[top.scala 20:19]
  wire [4:0] idu_io_out_bits_rs1; // @[top.scala 20:19]
  wire [4:0] idu_io_out_bits_rs2; // @[top.scala 20:19]
  wire [4:0] idu_io_out_bits_rd; // @[top.scala 20:19]
  wire [63:0] idu_io_out_bits_imm; // @[top.scala 20:19]
  wire [79:0] idu_io_out_bits_op; // @[top.scala 20:19]
  wire [5:0] idu_io_out_bits_typ; // @[top.scala 20:19]
  wire  idu_io_out_bits_isJump; // @[top.scala 20:19]
  wire  idu_io_flush; // @[top.scala 20:19]
  wire  exu_clock; // @[top.scala 21:19]
  wire  exu_reset; // @[top.scala 21:19]
  wire  exu_io_in_ready; // @[top.scala 21:19]
  wire  exu_io_in_valid; // @[top.scala 21:19]
  wire [31:0] exu_io_in_bits_pc; // @[top.scala 21:19]
  wire [31:0] exu_io_in_bits_inst; // @[top.scala 21:19]
  wire [4:0] exu_io_in_bits_rs1; // @[top.scala 21:19]
  wire [4:0] exu_io_in_bits_rs2; // @[top.scala 21:19]
  wire [4:0] exu_io_in_bits_rd; // @[top.scala 21:19]
  wire [63:0] exu_io_in_bits_imm; // @[top.scala 21:19]
  wire [79:0] exu_io_in_bits_op; // @[top.scala 21:19]
  wire [5:0] exu_io_in_bits_typ; // @[top.scala 21:19]
  wire  exu_io_in_bits_isJump; // @[top.scala 21:19]
  wire  exu_io_out_valid; // @[top.scala 21:19]
  wire [31:0] exu_io_out_bits_pc; // @[top.scala 21:19]
  wire [63:0] exu_io_out_bits_pc_dnpc; // @[top.scala 21:19]
  wire [4:0] exu_io_out_bits_gpr_idx_w; // @[top.scala 21:19]
  wire  exu_io_out_bits_gpr_en_w; // @[top.scala 21:19]
  wire [63:0] exu_io_out_bits_gpr_val_w; // @[top.scala 21:19]
  wire  exu_io_out_bits_csr_en_w; // @[top.scala 21:19]
  wire [11:0] exu_io_out_bits_csr_idx_w; // @[top.scala 21:19]
  wire [63:0] exu_io_out_bits_csr_val_w; // @[top.scala 21:19]
  wire [63:0] exu_io_out_bits_csr_no; // @[top.scala 21:19]
  wire [63:0] exu_io_out_bits_csr_epc; // @[top.scala 21:19]
  wire  exu_io_out_bits_isJump; // @[top.scala 21:19]
  wire [4:0] exu_io_gpr_idx_r1; // @[top.scala 21:19]
  wire [4:0] exu_io_gpr_idx_r2; // @[top.scala 21:19]
  wire  exu_io_gpr_en_r1; // @[top.scala 21:19]
  wire  exu_io_gpr_en_r2; // @[top.scala 21:19]
  wire [63:0] exu_io_gpr_val_r1; // @[top.scala 21:19]
  wire [63:0] exu_io_gpr_val_r2; // @[top.scala 21:19]
  wire [11:0] exu_io_csr_idx_r; // @[top.scala 21:19]
  wire  exu_io_csr_en_r; // @[top.scala 21:19]
  wire [63:0] exu_io_csr_val_r; // @[top.scala 21:19]
  wire  exu_io_lm_ar_ready; // @[top.scala 21:19]
  wire  exu_io_lm_ar_valid; // @[top.scala 21:19]
  wire [31:0] exu_io_lm_ar_bits_addr; // @[top.scala 21:19]
  wire  exu_io_lm_r_valid; // @[top.scala 21:19]
  wire [63:0] exu_io_lm_r_bits_data; // @[top.scala 21:19]
  wire  exu_io_lm_aw_ready; // @[top.scala 21:19]
  wire  exu_io_lm_aw_valid; // @[top.scala 21:19]
  wire [31:0] exu_io_lm_aw_bits_addr; // @[top.scala 21:19]
  wire  exu_io_lm_w_ready; // @[top.scala 21:19]
  wire  exu_io_lm_w_valid; // @[top.scala 21:19]
  wire [63:0] exu_io_lm_w_bits_data; // @[top.scala 21:19]
  wire [7:0] exu_io_lm_w_bits_strb; // @[top.scala 21:19]
  wire  exu_io_lm_b_valid; // @[top.scala 21:19]
  wire  exu_io_flush; // @[top.scala 21:19]
  wire [4:0] exu_io_bypass_idx; // @[top.scala 21:19]
  wire [63:0] exu_io_bypass_data; // @[top.scala 21:19]
  wire  exu_io_p_error; // @[top.scala 21:19]
  wire [63:0] exu_io_mul_num; // @[top.scala 21:19]
  wire [63:0] exu_io_div_num; // @[top.scala 21:19]
  wire  wbu_clock; // @[top.scala 22:19]
  wire  wbu_reset; // @[top.scala 22:19]
  wire  wbu_io_in_ready; // @[top.scala 22:19]
  wire  wbu_io_in_valid; // @[top.scala 22:19]
  wire [31:0] wbu_io_in_bits_pc; // @[top.scala 22:19]
  wire [63:0] wbu_io_in_bits_pc_dnpc; // @[top.scala 22:19]
  wire [4:0] wbu_io_in_bits_gpr_idx_w; // @[top.scala 22:19]
  wire  wbu_io_in_bits_gpr_en_w; // @[top.scala 22:19]
  wire [63:0] wbu_io_in_bits_gpr_val_w; // @[top.scala 22:19]
  wire  wbu_io_in_bits_csr_en_w; // @[top.scala 22:19]
  wire [11:0] wbu_io_in_bits_csr_idx_w; // @[top.scala 22:19]
  wire [63:0] wbu_io_in_bits_csr_val_w; // @[top.scala 22:19]
  wire [63:0] wbu_io_in_bits_csr_no; // @[top.scala 22:19]
  wire [63:0] wbu_io_in_bits_csr_epc; // @[top.scala 22:19]
  wire  wbu_io_in_bits_isJump; // @[top.scala 22:19]
  wire [4:0] wbu_io_gpr_idx_w; // @[top.scala 22:19]
  wire  wbu_io_gpr_en_w; // @[top.scala 22:19]
  wire [63:0] wbu_io_gpr_val_w; // @[top.scala 22:19]
  wire  wbu_io_csr_en_w; // @[top.scala 22:19]
  wire [11:0] wbu_io_csr_idx_w; // @[top.scala 22:19]
  wire [63:0] wbu_io_csr_val_w; // @[top.scala 22:19]
  wire [63:0] wbu_io_csr_no; // @[top.scala 22:19]
  wire [63:0] wbu_io_csr_epc; // @[top.scala 22:19]
  wire [63:0] wbu_io_pc_dnpc; // @[top.scala 22:19]
  wire  wbu_io_valid; // @[top.scala 22:19]
  wire  wbu_io_isJump; // @[top.scala 22:19]
  wire [4:0] wbu_io_bypass_idx; // @[top.scala 22:19]
  wire [63:0] wbu_io_bypass_data; // @[top.scala 22:19]
  wire  gpr_clock; // @[top.scala 23:19]
  wire  gpr_reset; // @[top.scala 23:19]
  wire [4:0] gpr_io_r_idx_r1; // @[top.scala 23:19]
  wire [4:0] gpr_io_r_idx_r2; // @[top.scala 23:19]
  wire  gpr_io_r_en_r1; // @[top.scala 23:19]
  wire  gpr_io_r_en_r2; // @[top.scala 23:19]
  wire [63:0] gpr_io_r_val_r1; // @[top.scala 23:19]
  wire [63:0] gpr_io_r_val_r2; // @[top.scala 23:19]
  wire [4:0] gpr_io_w_idx_w; // @[top.scala 23:19]
  wire  gpr_io_w_en_w; // @[top.scala 23:19]
  wire [63:0] gpr_io_w_val_w; // @[top.scala 23:19]
  wire  csr_clock; // @[top.scala 24:19]
  wire  csr_reset; // @[top.scala 24:19]
  wire [11:0] csr_io_r_idx_r; // @[top.scala 24:19]
  wire  csr_io_r_en_r; // @[top.scala 24:19]
  wire [63:0] csr_io_r_val_r; // @[top.scala 24:19]
  wire  csr_io_w_en_w; // @[top.scala 24:19]
  wire [11:0] csr_io_w_idx_w; // @[top.scala 24:19]
  wire [63:0] csr_io_w_val_w; // @[top.scala 24:19]
  wire [63:0] csr_io_w_no; // @[top.scala 24:19]
  wire [63:0] csr_io_w_epc; // @[top.scala 24:19]
  wire  csr_io_clint_mtip; // @[top.scala 24:19]
  wire  csr_io_irq; // @[top.scala 24:19]
  wire [31:0] csr_io_irq_pc; // @[top.scala 24:19]
  wire [31:0] csr_io_next_pc; // @[top.scala 24:19]
  wire  csr_io_en_mtip; // @[top.scala 24:19]
  wire  sram_clock; // @[top.scala 25:20]
  wire  sram_reset; // @[top.scala 25:20]
  wire  sram_io_ar_ready; // @[top.scala 25:20]
  wire  sram_io_ar_valid; // @[top.scala 25:20]
  wire [31:0] sram_io_ar_bits_addr; // @[top.scala 25:20]
  wire [7:0] sram_io_ar_bits_len; // @[top.scala 25:20]
  wire [2:0] sram_io_ar_bits_size; // @[top.scala 25:20]
  wire [3:0] sram_io_ar_bits_id; // @[top.scala 25:20]
  wire  sram_io_r_ready; // @[top.scala 25:20]
  wire  sram_io_r_valid; // @[top.scala 25:20]
  wire [63:0] sram_io_r_bits_data; // @[top.scala 25:20]
  wire  sram_io_r_bits_last; // @[top.scala 25:20]
  wire [3:0] sram_io_r_bits_id; // @[top.scala 25:20]
  wire  sram_io_aw_ready; // @[top.scala 25:20]
  wire  sram_io_aw_valid; // @[top.scala 25:20]
  wire [31:0] sram_io_aw_bits_addr; // @[top.scala 25:20]
  wire  sram_io_w_ready; // @[top.scala 25:20]
  wire  sram_io_w_valid; // @[top.scala 25:20]
  wire [63:0] sram_io_w_bits_data; // @[top.scala 25:20]
  wire [7:0] sram_io_w_bits_strb; // @[top.scala 25:20]
  wire  sram_io_w_bits_last; // @[top.scala 25:20]
  wire  sram_io_b_ready; // @[top.scala 25:20]
  wire  sram_io_b_valid; // @[top.scala 25:20]
  wire  clint_clock; // @[top.scala 26:21]
  wire  clint_reset; // @[top.scala 26:21]
  wire  clint_io_in_ar_ready; // @[top.scala 26:21]
  wire  clint_io_in_ar_valid; // @[top.scala 26:21]
  wire [31:0] clint_io_in_ar_bits_addr; // @[top.scala 26:21]
  wire [7:0] clint_io_in_ar_bits_len; // @[top.scala 26:21]
  wire [2:0] clint_io_in_ar_bits_size; // @[top.scala 26:21]
  wire [3:0] clint_io_in_ar_bits_id; // @[top.scala 26:21]
  wire  clint_io_in_r_ready; // @[top.scala 26:21]
  wire  clint_io_in_r_valid; // @[top.scala 26:21]
  wire [63:0] clint_io_in_r_bits_data; // @[top.scala 26:21]
  wire  clint_io_in_r_bits_last; // @[top.scala 26:21]
  wire [3:0] clint_io_in_r_bits_id; // @[top.scala 26:21]
  wire  clint_io_in_aw_ready; // @[top.scala 26:21]
  wire  clint_io_in_aw_valid; // @[top.scala 26:21]
  wire [31:0] clint_io_in_aw_bits_addr; // @[top.scala 26:21]
  wire [3:0] clint_io_in_aw_bits_id; // @[top.scala 26:21]
  wire  clint_io_in_w_ready; // @[top.scala 26:21]
  wire  clint_io_in_w_valid; // @[top.scala 26:21]
  wire [63:0] clint_io_in_w_bits_data; // @[top.scala 26:21]
  wire [7:0] clint_io_in_w_bits_strb; // @[top.scala 26:21]
  wire  clint_io_in_w_bits_last; // @[top.scala 26:21]
  wire  clint_io_in_b_ready; // @[top.scala 26:21]
  wire  clint_io_in_b_valid; // @[top.scala 26:21]
  wire [3:0] clint_io_in_b_bits_id; // @[top.scala 26:21]
  wire  clint_io_mtip; // @[top.scala 26:21]
  wire  clint_io_en_mtip; // @[top.scala 26:21]
  wire  clint_io_skip; // @[top.scala 26:21]
  wire  crossbar_clock; // @[top.scala 55:24]
  wire  crossbar_reset; // @[top.scala 55:24]
  wire  crossbar_io_in1_ar_valid; // @[top.scala 55:24]
  wire [31:0] crossbar_io_in1_ar_bits_addr; // @[top.scala 55:24]
  wire  crossbar_io_in1_r_valid; // @[top.scala 55:24]
  wire [63:0] crossbar_io_in1_r_bits_data; // @[top.scala 55:24]
  wire  crossbar_io_in2_ar_ready; // @[top.scala 55:24]
  wire  crossbar_io_in2_ar_valid; // @[top.scala 55:24]
  wire [31:0] crossbar_io_in2_ar_bits_addr; // @[top.scala 55:24]
  wire  crossbar_io_in2_r_valid; // @[top.scala 55:24]
  wire [63:0] crossbar_io_in2_r_bits_data; // @[top.scala 55:24]
  wire  crossbar_io_in2_aw_ready; // @[top.scala 55:24]
  wire  crossbar_io_in2_aw_valid; // @[top.scala 55:24]
  wire [31:0] crossbar_io_in2_aw_bits_addr; // @[top.scala 55:24]
  wire  crossbar_io_in2_w_ready; // @[top.scala 55:24]
  wire  crossbar_io_in2_w_valid; // @[top.scala 55:24]
  wire [63:0] crossbar_io_in2_w_bits_data; // @[top.scala 55:24]
  wire [7:0] crossbar_io_in2_w_bits_strb; // @[top.scala 55:24]
  wire  crossbar_io_in2_b_valid; // @[top.scala 55:24]
  wire  crossbar_io_out1_ar_ready; // @[top.scala 55:24]
  wire  crossbar_io_out1_ar_valid; // @[top.scala 55:24]
  wire [31:0] crossbar_io_out1_ar_bits_addr; // @[top.scala 55:24]
  wire [7:0] crossbar_io_out1_ar_bits_len; // @[top.scala 55:24]
  wire [2:0] crossbar_io_out1_ar_bits_size; // @[top.scala 55:24]
  wire [3:0] crossbar_io_out1_ar_bits_id; // @[top.scala 55:24]
  wire  crossbar_io_out1_r_ready; // @[top.scala 55:24]
  wire  crossbar_io_out1_r_valid; // @[top.scala 55:24]
  wire [63:0] crossbar_io_out1_r_bits_data; // @[top.scala 55:24]
  wire  crossbar_io_out1_r_bits_last; // @[top.scala 55:24]
  wire [3:0] crossbar_io_out1_r_bits_id; // @[top.scala 55:24]
  wire  crossbar_io_out1_aw_ready; // @[top.scala 55:24]
  wire  crossbar_io_out1_aw_valid; // @[top.scala 55:24]
  wire [31:0] crossbar_io_out1_aw_bits_addr; // @[top.scala 55:24]
  wire  crossbar_io_out1_w_ready; // @[top.scala 55:24]
  wire  crossbar_io_out1_w_valid; // @[top.scala 55:24]
  wire [63:0] crossbar_io_out1_w_bits_data; // @[top.scala 55:24]
  wire [7:0] crossbar_io_out1_w_bits_strb; // @[top.scala 55:24]
  wire  crossbar_io_out1_w_bits_last; // @[top.scala 55:24]
  wire  crossbar_io_out1_b_ready; // @[top.scala 55:24]
  wire  crossbar_io_out1_b_valid; // @[top.scala 55:24]
  wire  crossbar_io_out2_ar_ready; // @[top.scala 55:24]
  wire  crossbar_io_out2_ar_valid; // @[top.scala 55:24]
  wire [31:0] crossbar_io_out2_ar_bits_addr; // @[top.scala 55:24]
  wire [7:0] crossbar_io_out2_ar_bits_len; // @[top.scala 55:24]
  wire [2:0] crossbar_io_out2_ar_bits_size; // @[top.scala 55:24]
  wire [3:0] crossbar_io_out2_ar_bits_id; // @[top.scala 55:24]
  wire  crossbar_io_out2_r_ready; // @[top.scala 55:24]
  wire  crossbar_io_out2_r_valid; // @[top.scala 55:24]
  wire [63:0] crossbar_io_out2_r_bits_data; // @[top.scala 55:24]
  wire  crossbar_io_out2_r_bits_last; // @[top.scala 55:24]
  wire [3:0] crossbar_io_out2_r_bits_id; // @[top.scala 55:24]
  wire  crossbar_io_out2_aw_ready; // @[top.scala 55:24]
  wire  crossbar_io_out2_aw_valid; // @[top.scala 55:24]
  wire [31:0] crossbar_io_out2_aw_bits_addr; // @[top.scala 55:24]
  wire [3:0] crossbar_io_out2_aw_bits_id; // @[top.scala 55:24]
  wire  crossbar_io_out2_w_ready; // @[top.scala 55:24]
  wire  crossbar_io_out2_w_valid; // @[top.scala 55:24]
  wire [63:0] crossbar_io_out2_w_bits_data; // @[top.scala 55:24]
  wire [7:0] crossbar_io_out2_w_bits_strb; // @[top.scala 55:24]
  wire  crossbar_io_out2_w_bits_last; // @[top.scala 55:24]
  wire  crossbar_io_out2_b_ready; // @[top.scala 55:24]
  wire  crossbar_io_out2_b_valid; // @[top.scala 55:24]
  wire [3:0] crossbar_io_out2_b_bits_id; // @[top.scala 55:24]
  wire [63:0] crossbar_io_hitrate_i; // @[top.scala 55:24]
  wire [63:0] crossbar_io_hitrate_d; // @[top.scala 55:24]
  wire  crossbar_io_flush_i; // @[top.scala 55:24]
  wire  crossbar_io_flush_d; // @[top.scala 55:24]
  IFU ifu ( // @[top.scala 19:19]
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
    .io_out_bits_isJump(ifu_io_out_bits_isJump),
    .io_irq_nextpc(ifu_io_irq_nextpc),
    .io_irq(ifu_io_irq),
    .io_real_pc(ifu_io_real_pc),
    .io_p_error(ifu_io_p_error),
    .io_B_num(ifu_io_B_num),
    .io_B_Error(ifu_io_B_Error),
    .io_block_num(ifu_io_block_num)
  );
  IDU idu ( // @[top.scala 20:19]
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
    .io_flush(idu_io_flush)
  );
  EXU exu ( // @[top.scala 21:19]
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
    .io_lm_b_valid(exu_io_lm_b_valid),
    .io_flush(exu_io_flush),
    .io_bypass_idx(exu_io_bypass_idx),
    .io_bypass_data(exu_io_bypass_data),
    .io_p_error(exu_io_p_error),
    .io_mul_num(exu_io_mul_num),
    .io_div_num(exu_io_div_num)
  );
  WBU wbu ( // @[top.scala 22:19]
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
    .io_bypass_idx(wbu_io_bypass_idx),
    .io_bypass_data(wbu_io_bypass_data)
  );
  GPR gpr ( // @[top.scala 23:19]
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
  CSR csr ( // @[top.scala 24:19]
    .clock(csr_clock),
    .reset(csr_reset),
    .io_r_idx_r(csr_io_r_idx_r),
    .io_r_en_r(csr_io_r_en_r),
    .io_r_val_r(csr_io_r_val_r),
    .io_w_en_w(csr_io_w_en_w),
    .io_w_idx_w(csr_io_w_idx_w),
    .io_w_val_w(csr_io_w_val_w),
    .io_w_no(csr_io_w_no),
    .io_w_epc(csr_io_w_epc),
    .io_clint_mtip(csr_io_clint_mtip),
    .io_irq(csr_io_irq),
    .io_irq_pc(csr_io_irq_pc),
    .io_next_pc(csr_io_next_pc),
    .io_en_mtip(csr_io_en_mtip)
  );
  AXI4SRAM sram ( // @[top.scala 25:20]
    .clock(sram_clock),
    .reset(sram_reset),
    .io_ar_ready(sram_io_ar_ready),
    .io_ar_valid(sram_io_ar_valid),
    .io_ar_bits_addr(sram_io_ar_bits_addr),
    .io_ar_bits_len(sram_io_ar_bits_len),
    .io_ar_bits_size(sram_io_ar_bits_size),
    .io_ar_bits_id(sram_io_ar_bits_id),
    .io_r_ready(sram_io_r_ready),
    .io_r_valid(sram_io_r_valid),
    .io_r_bits_data(sram_io_r_bits_data),
    .io_r_bits_last(sram_io_r_bits_last),
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
  CLINT clint ( // @[top.scala 26:21]
    .clock(clint_clock),
    .reset(clint_reset),
    .io_in_ar_ready(clint_io_in_ar_ready),
    .io_in_ar_valid(clint_io_in_ar_valid),
    .io_in_ar_bits_addr(clint_io_in_ar_bits_addr),
    .io_in_ar_bits_len(clint_io_in_ar_bits_len),
    .io_in_ar_bits_size(clint_io_in_ar_bits_size),
    .io_in_ar_bits_id(clint_io_in_ar_bits_id),
    .io_in_r_ready(clint_io_in_r_ready),
    .io_in_r_valid(clint_io_in_r_valid),
    .io_in_r_bits_data(clint_io_in_r_bits_data),
    .io_in_r_bits_last(clint_io_in_r_bits_last),
    .io_in_r_bits_id(clint_io_in_r_bits_id),
    .io_in_aw_ready(clint_io_in_aw_ready),
    .io_in_aw_valid(clint_io_in_aw_valid),
    .io_in_aw_bits_addr(clint_io_in_aw_bits_addr),
    .io_in_aw_bits_id(clint_io_in_aw_bits_id),
    .io_in_w_ready(clint_io_in_w_ready),
    .io_in_w_valid(clint_io_in_w_valid),
    .io_in_w_bits_data(clint_io_in_w_bits_data),
    .io_in_w_bits_strb(clint_io_in_w_bits_strb),
    .io_in_w_bits_last(clint_io_in_w_bits_last),
    .io_in_b_ready(clint_io_in_b_ready),
    .io_in_b_valid(clint_io_in_b_valid),
    .io_in_b_bits_id(clint_io_in_b_bits_id),
    .io_mtip(clint_io_mtip),
    .io_en_mtip(clint_io_en_mtip),
    .io_skip(clint_io_skip)
  );
  Crossbar crossbar ( // @[top.scala 55:24]
    .clock(crossbar_clock),
    .reset(crossbar_reset),
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
    .io_out1_ar_ready(crossbar_io_out1_ar_ready),
    .io_out1_ar_valid(crossbar_io_out1_ar_valid),
    .io_out1_ar_bits_addr(crossbar_io_out1_ar_bits_addr),
    .io_out1_ar_bits_len(crossbar_io_out1_ar_bits_len),
    .io_out1_ar_bits_size(crossbar_io_out1_ar_bits_size),
    .io_out1_ar_bits_id(crossbar_io_out1_ar_bits_id),
    .io_out1_r_ready(crossbar_io_out1_r_ready),
    .io_out1_r_valid(crossbar_io_out1_r_valid),
    .io_out1_r_bits_data(crossbar_io_out1_r_bits_data),
    .io_out1_r_bits_last(crossbar_io_out1_r_bits_last),
    .io_out1_r_bits_id(crossbar_io_out1_r_bits_id),
    .io_out1_aw_ready(crossbar_io_out1_aw_ready),
    .io_out1_aw_valid(crossbar_io_out1_aw_valid),
    .io_out1_aw_bits_addr(crossbar_io_out1_aw_bits_addr),
    .io_out1_w_ready(crossbar_io_out1_w_ready),
    .io_out1_w_valid(crossbar_io_out1_w_valid),
    .io_out1_w_bits_data(crossbar_io_out1_w_bits_data),
    .io_out1_w_bits_strb(crossbar_io_out1_w_bits_strb),
    .io_out1_w_bits_last(crossbar_io_out1_w_bits_last),
    .io_out1_b_ready(crossbar_io_out1_b_ready),
    .io_out1_b_valid(crossbar_io_out1_b_valid),
    .io_out2_ar_ready(crossbar_io_out2_ar_ready),
    .io_out2_ar_valid(crossbar_io_out2_ar_valid),
    .io_out2_ar_bits_addr(crossbar_io_out2_ar_bits_addr),
    .io_out2_ar_bits_len(crossbar_io_out2_ar_bits_len),
    .io_out2_ar_bits_size(crossbar_io_out2_ar_bits_size),
    .io_out2_ar_bits_id(crossbar_io_out2_ar_bits_id),
    .io_out2_r_ready(crossbar_io_out2_r_ready),
    .io_out2_r_valid(crossbar_io_out2_r_valid),
    .io_out2_r_bits_data(crossbar_io_out2_r_bits_data),
    .io_out2_r_bits_last(crossbar_io_out2_r_bits_last),
    .io_out2_r_bits_id(crossbar_io_out2_r_bits_id),
    .io_out2_aw_ready(crossbar_io_out2_aw_ready),
    .io_out2_aw_valid(crossbar_io_out2_aw_valid),
    .io_out2_aw_bits_addr(crossbar_io_out2_aw_bits_addr),
    .io_out2_aw_bits_id(crossbar_io_out2_aw_bits_id),
    .io_out2_w_ready(crossbar_io_out2_w_ready),
    .io_out2_w_valid(crossbar_io_out2_w_valid),
    .io_out2_w_bits_data(crossbar_io_out2_w_bits_data),
    .io_out2_w_bits_strb(crossbar_io_out2_w_bits_strb),
    .io_out2_w_bits_last(crossbar_io_out2_w_bits_last),
    .io_out2_b_ready(crossbar_io_out2_b_ready),
    .io_out2_b_valid(crossbar_io_out2_b_valid),
    .io_out2_b_bits_id(crossbar_io_out2_b_bits_id),
    .io_hitrate_i(crossbar_io_hitrate_i),
    .io_hitrate_d(crossbar_io_hitrate_d),
    .io_flush_i(crossbar_io_flush_i),
    .io_flush_d(crossbar_io_flush_d)
  );
  assign io_pc = wbu_io_pc_dnpc; // @[top.scala 53:10]
  assign io_valid = wbu_io_valid; // @[top.scala 52:13]
  assign io_hitrate_i = crossbar_io_hitrate_i; // @[top.scala 70:18]
  assign io_hitrate_d = crossbar_io_hitrate_d; // @[top.scala 71:18]
  assign io_timer_diff_skip = clint_io_skip | csr_io_irq; // @[top.scala 68:41]
  assign io_B_num = ifu_io_B_num; // @[top.scala 78:14]
  assign io_B_Error = ifu_io_B_Error; // @[top.scala 79:16]
  assign io_block_num = ifu_io_block_num; // @[top.scala 82:18]
  assign io_mul_num = exu_io_mul_num; // @[top.scala 85:16]
  assign io_div_num = exu_io_div_num; // @[top.scala 86:16]
  assign ifu_clock = clock;
  assign ifu_reset = reset;
  assign ifu_io_pc_dnpc = wbu_io_pc_dnpc; // @[top.scala 32:19]
  assign ifu_io_clearJump = wbu_io_isJump; // @[top.scala 33:21]
  assign ifu_io_lm_r_valid = crossbar_io_in1_r_valid; // @[top.scala 56:20]
  assign ifu_io_lm_r_bits_data = crossbar_io_in1_r_bits_data; // @[top.scala 56:20]
  assign ifu_io_out_ready = idu_io_in_ready; // @[top.scala 38:14]
  assign ifu_io_irq_nextpc = csr_io_next_pc; // @[top.scala 34:22]
  assign ifu_io_irq = csr_io_irq; // @[top.scala 35:15]
  assign ifu_io_real_pc = exu_io_out_bits_pc_dnpc[31:0]; // @[top.scala 36:19]
  assign ifu_io_p_error = exu_io_p_error; // @[top.scala 37:19]
  assign idu_clock = clock;
  assign idu_reset = reset;
  assign idu_io_in_valid = ifu_io_out_valid; // @[top.scala 38:14]
  assign idu_io_in_bits_pc = ifu_io_out_bits_pc; // @[top.scala 38:14]
  assign idu_io_in_bits_inst = ifu_io_out_bits_inst; // @[top.scala 38:14]
  assign idu_io_in_bits_isJump = ifu_io_out_bits_isJump; // @[top.scala 38:14]
  assign idu_io_out_ready = exu_io_in_ready; // @[top.scala 40:14]
  assign idu_io_flush = csr_io_irq | exu_io_p_error; // @[top.scala 39:31]
  assign exu_clock = clock;
  assign exu_reset = reset;
  assign exu_io_in_valid = idu_io_out_valid; // @[top.scala 40:14]
  assign exu_io_in_bits_pc = idu_io_out_bits_pc; // @[top.scala 40:14]
  assign exu_io_in_bits_inst = idu_io_out_bits_inst; // @[top.scala 40:14]
  assign exu_io_in_bits_rs1 = idu_io_out_bits_rs1; // @[top.scala 40:14]
  assign exu_io_in_bits_rs2 = idu_io_out_bits_rs2; // @[top.scala 40:14]
  assign exu_io_in_bits_rd = idu_io_out_bits_rd; // @[top.scala 40:14]
  assign exu_io_in_bits_imm = idu_io_out_bits_imm; // @[top.scala 40:14]
  assign exu_io_in_bits_op = idu_io_out_bits_op; // @[top.scala 40:14]
  assign exu_io_in_bits_typ = idu_io_out_bits_typ; // @[top.scala 40:14]
  assign exu_io_in_bits_isJump = idu_io_out_bits_isJump; // @[top.scala 40:14]
  assign exu_io_gpr_val_r1 = gpr_io_r_val_r1; // @[top.scala 41:15]
  assign exu_io_gpr_val_r2 = gpr_io_r_val_r2; // @[top.scala 41:15]
  assign exu_io_csr_val_r = csr_io_r_val_r; // @[top.scala 42:15]
  assign exu_io_lm_ar_ready = crossbar_io_in2_ar_ready; // @[top.scala 57:20]
  assign exu_io_lm_r_valid = crossbar_io_in2_r_valid; // @[top.scala 57:20]
  assign exu_io_lm_r_bits_data = crossbar_io_in2_r_bits_data; // @[top.scala 57:20]
  assign exu_io_lm_aw_ready = crossbar_io_in2_aw_ready; // @[top.scala 57:20]
  assign exu_io_lm_w_ready = crossbar_io_in2_w_ready; // @[top.scala 57:20]
  assign exu_io_lm_b_valid = crossbar_io_in2_b_valid; // @[top.scala 57:20]
  assign exu_io_flush = csr_io_irq; // @[top.scala 46:17]
  assign exu_io_bypass_idx = wbu_io_bypass_idx; // @[top.scala 74:23]
  assign exu_io_bypass_data = wbu_io_bypass_data; // @[top.scala 75:24]
  assign wbu_clock = clock;
  assign wbu_reset = reset;
  assign wbu_io_in_valid = exu_io_out_valid; // @[top.scala 48:14]
  assign wbu_io_in_bits_pc = exu_io_out_bits_pc; // @[top.scala 48:14]
  assign wbu_io_in_bits_pc_dnpc = exu_io_out_bits_pc_dnpc; // @[top.scala 48:14]
  assign wbu_io_in_bits_gpr_idx_w = exu_io_out_bits_gpr_idx_w; // @[top.scala 48:14]
  assign wbu_io_in_bits_gpr_en_w = exu_io_out_bits_gpr_en_w; // @[top.scala 48:14]
  assign wbu_io_in_bits_gpr_val_w = exu_io_out_bits_gpr_val_w; // @[top.scala 48:14]
  assign wbu_io_in_bits_csr_en_w = exu_io_out_bits_csr_en_w; // @[top.scala 48:14]
  assign wbu_io_in_bits_csr_idx_w = exu_io_out_bits_csr_idx_w; // @[top.scala 48:14]
  assign wbu_io_in_bits_csr_val_w = exu_io_out_bits_csr_val_w; // @[top.scala 48:14]
  assign wbu_io_in_bits_csr_no = exu_io_out_bits_csr_no; // @[top.scala 48:14]
  assign wbu_io_in_bits_csr_epc = exu_io_out_bits_csr_epc; // @[top.scala 48:14]
  assign wbu_io_in_bits_isJump = exu_io_out_bits_isJump; // @[top.scala 48:14]
  assign gpr_clock = clock;
  assign gpr_reset = reset;
  assign gpr_io_r_idx_r1 = exu_io_gpr_idx_r1; // @[top.scala 41:15]
  assign gpr_io_r_idx_r2 = exu_io_gpr_idx_r2; // @[top.scala 41:15]
  assign gpr_io_r_en_r1 = exu_io_gpr_en_r1; // @[top.scala 41:15]
  assign gpr_io_r_en_r2 = exu_io_gpr_en_r2; // @[top.scala 41:15]
  assign gpr_io_w_idx_w = wbu_io_gpr_idx_w; // @[top.scala 49:15]
  assign gpr_io_w_en_w = wbu_io_gpr_en_w; // @[top.scala 49:15]
  assign gpr_io_w_val_w = wbu_io_gpr_val_w; // @[top.scala 49:15]
  assign csr_clock = clock;
  assign csr_reset = reset;
  assign csr_io_r_idx_r = exu_io_csr_idx_r; // @[top.scala 42:15]
  assign csr_io_r_en_r = exu_io_csr_en_r; // @[top.scala 42:15]
  assign csr_io_w_en_w = wbu_io_csr_en_w; // @[top.scala 50:15]
  assign csr_io_w_idx_w = wbu_io_csr_idx_w; // @[top.scala 50:15]
  assign csr_io_w_val_w = wbu_io_csr_val_w; // @[top.scala 50:15]
  assign csr_io_w_no = wbu_io_csr_no; // @[top.scala 50:15]
  assign csr_io_w_epc = wbu_io_csr_epc; // @[top.scala 50:15]
  assign csr_io_clint_mtip = clint_io_mtip; // @[top.scala 43:22]
  assign csr_io_irq_pc = wbu_io_pc_dnpc[31:0]; // @[top.scala 47:19]
  assign sram_clock = clock;
  assign sram_reset = reset;
  assign sram_io_ar_valid = crossbar_io_out1_ar_valid; // @[top.scala 58:21]
  assign sram_io_ar_bits_addr = crossbar_io_out1_ar_bits_addr; // @[top.scala 58:21]
  assign sram_io_ar_bits_len = crossbar_io_out1_ar_bits_len; // @[top.scala 58:21]
  assign sram_io_ar_bits_size = crossbar_io_out1_ar_bits_size; // @[top.scala 58:21]
  assign sram_io_ar_bits_id = crossbar_io_out1_ar_bits_id; // @[top.scala 58:21]
  assign sram_io_r_ready = crossbar_io_out1_r_ready; // @[top.scala 58:21]
  assign sram_io_aw_valid = crossbar_io_out1_aw_valid; // @[top.scala 58:21]
  assign sram_io_aw_bits_addr = crossbar_io_out1_aw_bits_addr; // @[top.scala 58:21]
  assign sram_io_w_valid = crossbar_io_out1_w_valid; // @[top.scala 58:21]
  assign sram_io_w_bits_data = crossbar_io_out1_w_bits_data; // @[top.scala 58:21]
  assign sram_io_w_bits_strb = crossbar_io_out1_w_bits_strb; // @[top.scala 58:21]
  assign sram_io_w_bits_last = crossbar_io_out1_w_bits_last; // @[top.scala 58:21]
  assign sram_io_b_ready = crossbar_io_out1_b_ready; // @[top.scala 58:21]
  assign clint_clock = clock;
  assign clint_reset = reset;
  assign clint_io_in_ar_valid = crossbar_io_out2_ar_valid; // @[top.scala 59:21]
  assign clint_io_in_ar_bits_addr = crossbar_io_out2_ar_bits_addr; // @[top.scala 59:21]
  assign clint_io_in_ar_bits_len = crossbar_io_out2_ar_bits_len; // @[top.scala 59:21]
  assign clint_io_in_ar_bits_size = crossbar_io_out2_ar_bits_size; // @[top.scala 59:21]
  assign clint_io_in_ar_bits_id = crossbar_io_out2_ar_bits_id; // @[top.scala 59:21]
  assign clint_io_in_r_ready = crossbar_io_out2_r_ready; // @[top.scala 59:21]
  assign clint_io_in_aw_valid = crossbar_io_out2_aw_valid; // @[top.scala 59:21]
  assign clint_io_in_aw_bits_addr = crossbar_io_out2_aw_bits_addr; // @[top.scala 59:21]
  assign clint_io_in_aw_bits_id = crossbar_io_out2_aw_bits_id; // @[top.scala 59:21]
  assign clint_io_in_w_valid = crossbar_io_out2_w_valid; // @[top.scala 59:21]
  assign clint_io_in_w_bits_data = crossbar_io_out2_w_bits_data; // @[top.scala 59:21]
  assign clint_io_in_w_bits_strb = crossbar_io_out2_w_bits_strb; // @[top.scala 59:21]
  assign clint_io_in_w_bits_last = crossbar_io_out2_w_bits_last; // @[top.scala 59:21]
  assign clint_io_in_b_ready = crossbar_io_out2_b_ready; // @[top.scala 59:21]
  assign clint_io_en_mtip = csr_io_en_mtip; // @[top.scala 45:19]
  assign crossbar_clock = clock;
  assign crossbar_reset = reset;
  assign crossbar_io_in1_ar_valid = ifu_io_lm_ar_valid; // @[top.scala 56:20]
  assign crossbar_io_in1_ar_bits_addr = ifu_io_lm_ar_bits_addr; // @[top.scala 56:20]
  assign crossbar_io_in2_ar_valid = exu_io_lm_ar_valid; // @[top.scala 57:20]
  assign crossbar_io_in2_ar_bits_addr = exu_io_lm_ar_bits_addr; // @[top.scala 57:20]
  assign crossbar_io_in2_aw_valid = exu_io_lm_aw_valid; // @[top.scala 57:20]
  assign crossbar_io_in2_aw_bits_addr = exu_io_lm_aw_bits_addr; // @[top.scala 57:20]
  assign crossbar_io_in2_w_valid = exu_io_lm_w_valid; // @[top.scala 57:20]
  assign crossbar_io_in2_w_bits_data = exu_io_lm_w_bits_data; // @[top.scala 57:20]
  assign crossbar_io_in2_w_bits_strb = exu_io_lm_w_bits_strb; // @[top.scala 57:20]
  assign crossbar_io_out1_ar_ready = sram_io_ar_ready; // @[top.scala 58:21]
  assign crossbar_io_out1_r_valid = sram_io_r_valid; // @[top.scala 58:21]
  assign crossbar_io_out1_r_bits_data = sram_io_r_bits_data; // @[top.scala 58:21]
  assign crossbar_io_out1_r_bits_last = sram_io_r_bits_last; // @[top.scala 58:21]
  assign crossbar_io_out1_r_bits_id = sram_io_r_bits_id; // @[top.scala 58:21]
  assign crossbar_io_out1_aw_ready = sram_io_aw_ready; // @[top.scala 58:21]
  assign crossbar_io_out1_w_ready = sram_io_w_ready; // @[top.scala 58:21]
  assign crossbar_io_out1_b_valid = sram_io_b_valid; // @[top.scala 58:21]
  assign crossbar_io_out2_ar_ready = clint_io_in_ar_ready; // @[top.scala 59:21]
  assign crossbar_io_out2_r_valid = clint_io_in_r_valid; // @[top.scala 59:21]
  assign crossbar_io_out2_r_bits_data = clint_io_in_r_bits_data; // @[top.scala 59:21]
  assign crossbar_io_out2_r_bits_last = clint_io_in_r_bits_last; // @[top.scala 59:21]
  assign crossbar_io_out2_r_bits_id = clint_io_in_r_bits_id; // @[top.scala 59:21]
  assign crossbar_io_out2_aw_ready = clint_io_in_aw_ready; // @[top.scala 59:21]
  assign crossbar_io_out2_w_ready = clint_io_in_w_ready; // @[top.scala 59:21]
  assign crossbar_io_out2_b_valid = clint_io_in_b_valid; // @[top.scala 59:21]
  assign crossbar_io_out2_b_bits_id = clint_io_in_b_bits_id; // @[top.scala 59:21]
  assign crossbar_io_flush_i = csr_io_irq | exu_io_p_error; // @[top.scala 60:36]
  assign crossbar_io_flush_d = csr_io_irq; // @[top.scala 61:24]
endmodule

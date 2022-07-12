module vga_ctrl(
  input         clock,
  input         reset,
  input  [23:0] io_vga_data,
  output [9:0]  io_h_addr,
  output [9:0]  io_v_addr,
  output        io_hsync,
  output        io_vsync,
  output        io_valid,
  output [7:0]  io_vga_r,
  output [7:0]  io_vga_g,
  output [7:0]  io_vga_b
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  reg [9:0] x_cnt; // @[vga.scala 102:22]
  reg [9:0] y_cnt; // @[vga.scala 103:22]
  wire  _T = x_cnt == 10'h320; // @[vga.scala 105:15]
  wire [9:0] _x_cnt_T_1 = x_cnt + 10'h1; // @[vga.scala 108:21]
  wire [9:0] _y_cnt_T_1 = y_cnt + 10'h1; // @[vga.scala 113:21]
  wire  h_valid = x_cnt > 10'h90 & x_cnt <= 10'h310; // @[vga.scala 117:39]
  wire  v_valid = y_cnt > 10'h23 & y_cnt <= 10'h203; // @[vga.scala 118:39]
  wire [9:0] _io_h_addr_T_1 = x_cnt - 10'h91; // @[vga.scala 120:33]
  wire [9:0] _io_v_addr_T_1 = y_cnt - 10'h24; // @[vga.scala 121:33]
  assign io_h_addr = h_valid ? _io_h_addr_T_1 : 10'h0; // @[vga.scala 120:19]
  assign io_v_addr = v_valid ? _io_v_addr_T_1 : 10'h0; // @[vga.scala 121:19]
  assign io_hsync = x_cnt > 10'h60; // @[vga.scala 115:21]
  assign io_vsync = y_cnt > 10'h2; // @[vga.scala 116:21]
  assign io_valid = h_valid & v_valid; // @[vga.scala 119:23]
  assign io_vga_r = io_vga_data[23:16]; // @[vga.scala 122:26]
  assign io_vga_g = io_vga_data[15:8]; // @[vga.scala 123:26]
  assign io_vga_b = io_vga_data[7:0]; // @[vga.scala 124:26]
  always @(posedge clock) begin
    if (reset) begin // @[vga.scala 102:22]
      x_cnt <= 10'h1; // @[vga.scala 102:22]
    end else if (x_cnt == 10'h320) begin // @[vga.scala 105:26]
      x_cnt <= 10'h1; // @[vga.scala 106:14]
    end else begin
      x_cnt <= _x_cnt_T_1; // @[vga.scala 108:14]
    end
    if (reset) begin // @[vga.scala 103:22]
      y_cnt <= 10'h1; // @[vga.scala 103:22]
    end else if (y_cnt == 10'h20d & _T) begin // @[vga.scala 110:47]
      y_cnt <= 10'h1; // @[vga.scala 111:14]
    end else if (_T) begin // @[vga.scala 112:32]
      y_cnt <= _y_cnt_T_1; // @[vga.scala 113:14]
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
  x_cnt = _RAND_0[9:0];
  _RAND_1 = {1{`RANDOM}};
  y_cnt = _RAND_1[9:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module vmem(
  input         clock,
  input         reset,
  input  [1:0]  io_ready,
  input  [7:0]  io_ascii,
  input  [9:0]  io_h_addr,
  input  [8:0]  io_v_addr,
  output [23:0] io_vga_data
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
  reg [31:0] _RAND_259;
  reg [31:0] _RAND_260;
  reg [31:0] _RAND_261;
  reg [31:0] _RAND_262;
  reg [31:0] _RAND_263;
  reg [31:0] _RAND_264;
  reg [31:0] _RAND_265;
  reg [31:0] _RAND_266;
  reg [31:0] _RAND_267;
  reg [31:0] _RAND_268;
  reg [31:0] _RAND_269;
  reg [31:0] _RAND_270;
  reg [31:0] _RAND_271;
  reg [31:0] _RAND_272;
  reg [31:0] _RAND_273;
  reg [31:0] _RAND_274;
  reg [31:0] _RAND_275;
  reg [31:0] _RAND_276;
  reg [31:0] _RAND_277;
  reg [31:0] _RAND_278;
  reg [31:0] _RAND_279;
  reg [31:0] _RAND_280;
  reg [31:0] _RAND_281;
  reg [31:0] _RAND_282;
  reg [31:0] _RAND_283;
  reg [31:0] _RAND_284;
  reg [31:0] _RAND_285;
  reg [31:0] _RAND_286;
  reg [31:0] _RAND_287;
  reg [31:0] _RAND_288;
  reg [31:0] _RAND_289;
  reg [31:0] _RAND_290;
  reg [31:0] _RAND_291;
  reg [31:0] _RAND_292;
  reg [31:0] _RAND_293;
  reg [31:0] _RAND_294;
  reg [31:0] _RAND_295;
  reg [31:0] _RAND_296;
  reg [31:0] _RAND_297;
  reg [31:0] _RAND_298;
  reg [31:0] _RAND_299;
  reg [31:0] _RAND_300;
  reg [31:0] _RAND_301;
  reg [31:0] _RAND_302;
  reg [31:0] _RAND_303;
  reg [31:0] _RAND_304;
  reg [31:0] _RAND_305;
  reg [31:0] _RAND_306;
  reg [287:0] _RAND_307;
  reg [287:0] _RAND_308;
  reg [287:0] _RAND_309;
  reg [287:0] _RAND_310;
  reg [287:0] _RAND_311;
  reg [287:0] _RAND_312;
  reg [287:0] _RAND_313;
  reg [287:0] _RAND_314;
  reg [287:0] _RAND_315;
  reg [287:0] _RAND_316;
  reg [287:0] _RAND_317;
  reg [287:0] _RAND_318;
  reg [287:0] _RAND_319;
  reg [287:0] _RAND_320;
  reg [287:0] _RAND_321;
  reg [287:0] _RAND_322;
  reg [31:0] _RAND_323;
  reg [31:0] _RAND_324;
`endif // RANDOMIZE_REG_INIT
  reg [11:0] vga_mem [0:4095]; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_1_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_1_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_2_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_2_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_3_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_3_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_4_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_4_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_5_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_5_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_6_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_6_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_7_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_7_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_8_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_8_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_9_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_9_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_10_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_10_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_11_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_11_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_12_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_12_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_13_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_13_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_14_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_14_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_15_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_15_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_16_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_16_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_17_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_17_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_18_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_18_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_19_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_19_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_20_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_20_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_21_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_21_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_22_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_22_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_23_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_23_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_24_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_24_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_25_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_25_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_26_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_26_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_27_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_27_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_28_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_28_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_29_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_29_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_30_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_30_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_31_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_31_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_32_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_32_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_33_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_33_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_34_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_34_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_35_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_35_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_36_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_36_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_37_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_37_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_38_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_38_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_39_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_39_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_40_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_40_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_41_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_41_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_42_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_42_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_43_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_43_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_44_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_44_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_45_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_45_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_46_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_46_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_47_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_47_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_48_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_48_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_49_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_49_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_50_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_50_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_51_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_51_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_52_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_52_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_53_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_53_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_54_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_54_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_55_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_55_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_56_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_56_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_57_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_57_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_58_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_58_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_59_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_59_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_60_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_60_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_61_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_61_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_62_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_62_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_63_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_63_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_64_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_64_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_65_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_65_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_66_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_66_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_67_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_67_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_68_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_68_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_69_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_69_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_70_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_70_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_71_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_71_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_72_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_72_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_73_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_73_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_74_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_74_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_75_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_75_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_76_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_76_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_77_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_77_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_78_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_78_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_79_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_79_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_80_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_80_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_81_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_81_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_82_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_82_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_83_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_83_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_84_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_84_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_85_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_85_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_86_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_86_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_87_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_87_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_88_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_88_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_89_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_89_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_90_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_90_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_91_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_91_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_92_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_92_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_93_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_93_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_94_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_94_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_95_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_95_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_96_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_96_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_97_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_97_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_98_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_98_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_99_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_99_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_100_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_100_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_101_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_101_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_102_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_102_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_103_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_103_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_104_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_104_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_105_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_105_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_106_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_106_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_107_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_107_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_108_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_108_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_109_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_109_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_110_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_110_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_111_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_111_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_112_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_112_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_113_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_113_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_114_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_114_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_115_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_115_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_116_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_116_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_117_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_117_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_118_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_118_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_119_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_119_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_120_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_120_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_121_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_121_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_122_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_122_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_123_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_123_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_124_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_124_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_125_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_125_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_126_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_126_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_127_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_127_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_128_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_128_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_129_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_129_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_130_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_130_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_131_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_131_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_132_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_132_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_133_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_133_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_134_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_134_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_135_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_135_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_136_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_136_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_137_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_137_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_138_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_138_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_139_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_139_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_140_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_140_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_141_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_141_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_142_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_142_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_143_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_143_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_144_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_144_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_145_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_145_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_146_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_146_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_147_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_147_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_148_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_148_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_149_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_149_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_150_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_150_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_151_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_151_addr; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_152_data; // @[vga.scala 51:30]
  wire [11:0] vga_mem_ram_MPORT_152_addr; // @[vga.scala 51:30]
  reg  vga_mem_ram_MPORT_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_addr_pipe_0;
  reg  vga_mem_ram_MPORT_1_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_1_addr_pipe_0;
  reg  vga_mem_ram_MPORT_2_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_2_addr_pipe_0;
  reg  vga_mem_ram_MPORT_3_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_3_addr_pipe_0;
  reg  vga_mem_ram_MPORT_4_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_4_addr_pipe_0;
  reg  vga_mem_ram_MPORT_5_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_5_addr_pipe_0;
  reg  vga_mem_ram_MPORT_6_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_6_addr_pipe_0;
  reg  vga_mem_ram_MPORT_7_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_7_addr_pipe_0;
  reg  vga_mem_ram_MPORT_8_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_8_addr_pipe_0;
  reg  vga_mem_ram_MPORT_9_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_9_addr_pipe_0;
  reg  vga_mem_ram_MPORT_10_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_10_addr_pipe_0;
  reg  vga_mem_ram_MPORT_11_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_11_addr_pipe_0;
  reg  vga_mem_ram_MPORT_12_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_12_addr_pipe_0;
  reg  vga_mem_ram_MPORT_13_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_13_addr_pipe_0;
  reg  vga_mem_ram_MPORT_14_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_14_addr_pipe_0;
  reg  vga_mem_ram_MPORT_15_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_15_addr_pipe_0;
  reg  vga_mem_ram_MPORT_16_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_16_addr_pipe_0;
  reg  vga_mem_ram_MPORT_17_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_17_addr_pipe_0;
  reg  vga_mem_ram_MPORT_18_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_18_addr_pipe_0;
  reg  vga_mem_ram_MPORT_19_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_19_addr_pipe_0;
  reg  vga_mem_ram_MPORT_20_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_20_addr_pipe_0;
  reg  vga_mem_ram_MPORT_21_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_21_addr_pipe_0;
  reg  vga_mem_ram_MPORT_22_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_22_addr_pipe_0;
  reg  vga_mem_ram_MPORT_23_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_23_addr_pipe_0;
  reg  vga_mem_ram_MPORT_24_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_24_addr_pipe_0;
  reg  vga_mem_ram_MPORT_25_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_25_addr_pipe_0;
  reg  vga_mem_ram_MPORT_26_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_26_addr_pipe_0;
  reg  vga_mem_ram_MPORT_27_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_27_addr_pipe_0;
  reg  vga_mem_ram_MPORT_28_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_28_addr_pipe_0;
  reg  vga_mem_ram_MPORT_29_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_29_addr_pipe_0;
  reg  vga_mem_ram_MPORT_30_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_30_addr_pipe_0;
  reg  vga_mem_ram_MPORT_31_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_31_addr_pipe_0;
  reg  vga_mem_ram_MPORT_32_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_32_addr_pipe_0;
  reg  vga_mem_ram_MPORT_33_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_33_addr_pipe_0;
  reg  vga_mem_ram_MPORT_34_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_34_addr_pipe_0;
  reg  vga_mem_ram_MPORT_35_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_35_addr_pipe_0;
  reg  vga_mem_ram_MPORT_36_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_36_addr_pipe_0;
  reg  vga_mem_ram_MPORT_37_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_37_addr_pipe_0;
  reg  vga_mem_ram_MPORT_38_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_38_addr_pipe_0;
  reg  vga_mem_ram_MPORT_39_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_39_addr_pipe_0;
  reg  vga_mem_ram_MPORT_40_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_40_addr_pipe_0;
  reg  vga_mem_ram_MPORT_41_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_41_addr_pipe_0;
  reg  vga_mem_ram_MPORT_42_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_42_addr_pipe_0;
  reg  vga_mem_ram_MPORT_43_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_43_addr_pipe_0;
  reg  vga_mem_ram_MPORT_44_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_44_addr_pipe_0;
  reg  vga_mem_ram_MPORT_45_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_45_addr_pipe_0;
  reg  vga_mem_ram_MPORT_46_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_46_addr_pipe_0;
  reg  vga_mem_ram_MPORT_47_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_47_addr_pipe_0;
  reg  vga_mem_ram_MPORT_48_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_48_addr_pipe_0;
  reg  vga_mem_ram_MPORT_49_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_49_addr_pipe_0;
  reg  vga_mem_ram_MPORT_50_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_50_addr_pipe_0;
  reg  vga_mem_ram_MPORT_51_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_51_addr_pipe_0;
  reg  vga_mem_ram_MPORT_52_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_52_addr_pipe_0;
  reg  vga_mem_ram_MPORT_53_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_53_addr_pipe_0;
  reg  vga_mem_ram_MPORT_54_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_54_addr_pipe_0;
  reg  vga_mem_ram_MPORT_55_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_55_addr_pipe_0;
  reg  vga_mem_ram_MPORT_56_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_56_addr_pipe_0;
  reg  vga_mem_ram_MPORT_57_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_57_addr_pipe_0;
  reg  vga_mem_ram_MPORT_58_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_58_addr_pipe_0;
  reg  vga_mem_ram_MPORT_59_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_59_addr_pipe_0;
  reg  vga_mem_ram_MPORT_60_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_60_addr_pipe_0;
  reg  vga_mem_ram_MPORT_61_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_61_addr_pipe_0;
  reg  vga_mem_ram_MPORT_62_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_62_addr_pipe_0;
  reg  vga_mem_ram_MPORT_63_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_63_addr_pipe_0;
  reg  vga_mem_ram_MPORT_64_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_64_addr_pipe_0;
  reg  vga_mem_ram_MPORT_65_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_65_addr_pipe_0;
  reg  vga_mem_ram_MPORT_66_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_66_addr_pipe_0;
  reg  vga_mem_ram_MPORT_67_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_67_addr_pipe_0;
  reg  vga_mem_ram_MPORT_68_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_68_addr_pipe_0;
  reg  vga_mem_ram_MPORT_69_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_69_addr_pipe_0;
  reg  vga_mem_ram_MPORT_70_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_70_addr_pipe_0;
  reg  vga_mem_ram_MPORT_71_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_71_addr_pipe_0;
  reg  vga_mem_ram_MPORT_72_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_72_addr_pipe_0;
  reg  vga_mem_ram_MPORT_73_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_73_addr_pipe_0;
  reg  vga_mem_ram_MPORT_74_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_74_addr_pipe_0;
  reg  vga_mem_ram_MPORT_75_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_75_addr_pipe_0;
  reg  vga_mem_ram_MPORT_76_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_76_addr_pipe_0;
  reg  vga_mem_ram_MPORT_77_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_77_addr_pipe_0;
  reg  vga_mem_ram_MPORT_78_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_78_addr_pipe_0;
  reg  vga_mem_ram_MPORT_79_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_79_addr_pipe_0;
  reg  vga_mem_ram_MPORT_80_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_80_addr_pipe_0;
  reg  vga_mem_ram_MPORT_81_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_81_addr_pipe_0;
  reg  vga_mem_ram_MPORT_82_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_82_addr_pipe_0;
  reg  vga_mem_ram_MPORT_83_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_83_addr_pipe_0;
  reg  vga_mem_ram_MPORT_84_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_84_addr_pipe_0;
  reg  vga_mem_ram_MPORT_85_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_85_addr_pipe_0;
  reg  vga_mem_ram_MPORT_86_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_86_addr_pipe_0;
  reg  vga_mem_ram_MPORT_87_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_87_addr_pipe_0;
  reg  vga_mem_ram_MPORT_88_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_88_addr_pipe_0;
  reg  vga_mem_ram_MPORT_89_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_89_addr_pipe_0;
  reg  vga_mem_ram_MPORT_90_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_90_addr_pipe_0;
  reg  vga_mem_ram_MPORT_91_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_91_addr_pipe_0;
  reg  vga_mem_ram_MPORT_92_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_92_addr_pipe_0;
  reg  vga_mem_ram_MPORT_93_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_93_addr_pipe_0;
  reg  vga_mem_ram_MPORT_94_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_94_addr_pipe_0;
  reg  vga_mem_ram_MPORT_95_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_95_addr_pipe_0;
  reg  vga_mem_ram_MPORT_96_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_96_addr_pipe_0;
  reg  vga_mem_ram_MPORT_97_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_97_addr_pipe_0;
  reg  vga_mem_ram_MPORT_98_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_98_addr_pipe_0;
  reg  vga_mem_ram_MPORT_99_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_99_addr_pipe_0;
  reg  vga_mem_ram_MPORT_100_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_100_addr_pipe_0;
  reg  vga_mem_ram_MPORT_101_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_101_addr_pipe_0;
  reg  vga_mem_ram_MPORT_102_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_102_addr_pipe_0;
  reg  vga_mem_ram_MPORT_103_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_103_addr_pipe_0;
  reg  vga_mem_ram_MPORT_104_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_104_addr_pipe_0;
  reg  vga_mem_ram_MPORT_105_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_105_addr_pipe_0;
  reg  vga_mem_ram_MPORT_106_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_106_addr_pipe_0;
  reg  vga_mem_ram_MPORT_107_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_107_addr_pipe_0;
  reg  vga_mem_ram_MPORT_108_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_108_addr_pipe_0;
  reg  vga_mem_ram_MPORT_109_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_109_addr_pipe_0;
  reg  vga_mem_ram_MPORT_110_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_110_addr_pipe_0;
  reg  vga_mem_ram_MPORT_111_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_111_addr_pipe_0;
  reg  vga_mem_ram_MPORT_112_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_112_addr_pipe_0;
  reg  vga_mem_ram_MPORT_113_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_113_addr_pipe_0;
  reg  vga_mem_ram_MPORT_114_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_114_addr_pipe_0;
  reg  vga_mem_ram_MPORT_115_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_115_addr_pipe_0;
  reg  vga_mem_ram_MPORT_116_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_116_addr_pipe_0;
  reg  vga_mem_ram_MPORT_117_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_117_addr_pipe_0;
  reg  vga_mem_ram_MPORT_118_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_118_addr_pipe_0;
  reg  vga_mem_ram_MPORT_119_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_119_addr_pipe_0;
  reg  vga_mem_ram_MPORT_120_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_120_addr_pipe_0;
  reg  vga_mem_ram_MPORT_121_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_121_addr_pipe_0;
  reg  vga_mem_ram_MPORT_122_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_122_addr_pipe_0;
  reg  vga_mem_ram_MPORT_123_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_123_addr_pipe_0;
  reg  vga_mem_ram_MPORT_124_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_124_addr_pipe_0;
  reg  vga_mem_ram_MPORT_125_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_125_addr_pipe_0;
  reg  vga_mem_ram_MPORT_126_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_126_addr_pipe_0;
  reg  vga_mem_ram_MPORT_127_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_127_addr_pipe_0;
  reg  vga_mem_ram_MPORT_128_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_128_addr_pipe_0;
  reg  vga_mem_ram_MPORT_129_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_129_addr_pipe_0;
  reg  vga_mem_ram_MPORT_130_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_130_addr_pipe_0;
  reg  vga_mem_ram_MPORT_131_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_131_addr_pipe_0;
  reg  vga_mem_ram_MPORT_132_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_132_addr_pipe_0;
  reg  vga_mem_ram_MPORT_133_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_133_addr_pipe_0;
  reg  vga_mem_ram_MPORT_134_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_134_addr_pipe_0;
  reg  vga_mem_ram_MPORT_135_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_135_addr_pipe_0;
  reg  vga_mem_ram_MPORT_136_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_136_addr_pipe_0;
  reg  vga_mem_ram_MPORT_137_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_137_addr_pipe_0;
  reg  vga_mem_ram_MPORT_138_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_138_addr_pipe_0;
  reg  vga_mem_ram_MPORT_139_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_139_addr_pipe_0;
  reg  vga_mem_ram_MPORT_140_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_140_addr_pipe_0;
  reg  vga_mem_ram_MPORT_141_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_141_addr_pipe_0;
  reg  vga_mem_ram_MPORT_142_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_142_addr_pipe_0;
  reg  vga_mem_ram_MPORT_143_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_143_addr_pipe_0;
  reg  vga_mem_ram_MPORT_144_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_144_addr_pipe_0;
  reg  vga_mem_ram_MPORT_145_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_145_addr_pipe_0;
  reg  vga_mem_ram_MPORT_146_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_146_addr_pipe_0;
  reg  vga_mem_ram_MPORT_147_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_147_addr_pipe_0;
  reg  vga_mem_ram_MPORT_148_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_148_addr_pipe_0;
  reg  vga_mem_ram_MPORT_149_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_149_addr_pipe_0;
  reg  vga_mem_ram_MPORT_150_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_150_addr_pipe_0;
  reg  vga_mem_ram_MPORT_151_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_151_addr_pipe_0;
  reg  vga_mem_ram_MPORT_152_en_pipe_0;
  reg [11:0] vga_mem_ram_MPORT_152_addr_pipe_0;
  reg [23:0] rdwrPort; // @[vga.scala 46:27]
  reg [287:0] ram_0; // @[vga.scala 47:20]
  reg [287:0] ram_1; // @[vga.scala 47:20]
  reg [287:0] ram_2; // @[vga.scala 47:20]
  reg [287:0] ram_3; // @[vga.scala 47:20]
  reg [287:0] ram_4; // @[vga.scala 47:20]
  reg [287:0] ram_5; // @[vga.scala 47:20]
  reg [287:0] ram_6; // @[vga.scala 47:20]
  reg [287:0] ram_7; // @[vga.scala 47:20]
  reg [287:0] ram_8; // @[vga.scala 47:20]
  reg [287:0] ram_9; // @[vga.scala 47:20]
  reg [287:0] ram_10; // @[vga.scala 47:20]
  reg [287:0] ram_11; // @[vga.scala 47:20]
  reg [287:0] ram_12; // @[vga.scala 47:20]
  reg [287:0] ram_13; // @[vga.scala 47:20]
  reg [287:0] ram_14; // @[vga.scala 47:20]
  reg [287:0] ram_15; // @[vga.scala 47:20]
  reg [9:0] h; // @[vga.scala 48:18]
  reg [8:0] v; // @[vga.scala 49:18]
  wire  _T_1 = v == 9'h120; // @[vga.scala 55:23]
  wire [9:0] _h_T_1 = h + 10'h10; // @[vga.scala 58:13]
  wire [10:0] _T_6 = {{1'd0}, h}; // @[vga.scala 66:14]
  wire [12:0] _ram_T_3 = 5'h10 * io_ascii; // @[vga.scala 66:73]
  wire  ram_hi_hi_hi_lo = vga_mem_ram_MPORT_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo = vga_mem_ram_MPORT_1_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi = vga_mem_ram_MPORT_2_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo = vga_mem_ram_MPORT_3_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi = vga_mem_ram_MPORT_4_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo = vga_mem_ram_MPORT_5_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo = vga_mem_ram_MPORT_6_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi = vga_mem_ram_MPORT_7_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo = vga_mem_ram_MPORT_8_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_21 = {278'h0,ram_hi_hi_hi_lo,ram_hi_hi_lo,ram_hi_lo_hi,ram_hi_lo_lo,ram_lo_hi_hi_hi,
    ram_lo_hi_hi_lo,ram_lo_hi_lo,ram_lo_lo_hi,ram_lo_lo_lo}; // @[Cat.scala 30:58]
  wire [12:0] _ram_T_22 = v * 4'h9; // @[vga.scala 66:305]
  wire [12:0] _ram_T_24 = 13'h116 - _ram_T_22; // @[vga.scala 66:303]
  wire [8477:0] _GEN_738 = {{8191'd0}, _ram_T_21}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_25 = _GEN_738 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_4 = 4'h1 == _T_6[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_5 = 4'h2 == _T_6[3:0] ? ram_2 : _GEN_4; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_6 = 4'h3 == _T_6[3:0] ? ram_3 : _GEN_5; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_7 = 4'h4 == _T_6[3:0] ? ram_4 : _GEN_6; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_8 = 4'h5 == _T_6[3:0] ? ram_5 : _GEN_7; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_9 = 4'h6 == _T_6[3:0] ? ram_6 : _GEN_8; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_10 = 4'h7 == _T_6[3:0] ? ram_7 : _GEN_9; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_11 = 4'h8 == _T_6[3:0] ? ram_8 : _GEN_10; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_12 = 4'h9 == _T_6[3:0] ? ram_9 : _GEN_11; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_13 = 4'ha == _T_6[3:0] ? ram_10 : _GEN_12; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_14 = 4'hb == _T_6[3:0] ? ram_11 : _GEN_13; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_15 = 4'hc == _T_6[3:0] ? ram_12 : _GEN_14; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_16 = 4'hd == _T_6[3:0] ? ram_13 : _GEN_15; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_17 = 4'he == _T_6[3:0] ? ram_14 : _GEN_16; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_18 = 4'hf == _T_6[3:0] ? ram_15 : _GEN_17; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_739 = {{8190'd0}, _GEN_18}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_26 = _GEN_739 ^ _ram_T_25; // @[vga.scala 66:41]
  wire [287:0] _GEN_19 = 4'h0 == _T_6[3:0] ? _ram_T_26[287:0] : ram_0; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_20 = 4'h1 == _T_6[3:0] ? _ram_T_26[287:0] : ram_1; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_21 = 4'h2 == _T_6[3:0] ? _ram_T_26[287:0] : ram_2; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_22 = 4'h3 == _T_6[3:0] ? _ram_T_26[287:0] : ram_3; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_23 = 4'h4 == _T_6[3:0] ? _ram_T_26[287:0] : ram_4; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_24 = 4'h5 == _T_6[3:0] ? _ram_T_26[287:0] : ram_5; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_25 = 4'h6 == _T_6[3:0] ? _ram_T_26[287:0] : ram_6; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_26 = 4'h7 == _T_6[3:0] ? _ram_T_26[287:0] : ram_7; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_27 = 4'h8 == _T_6[3:0] ? _ram_T_26[287:0] : ram_8; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_28 = 4'h9 == _T_6[3:0] ? _ram_T_26[287:0] : ram_9; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_29 = 4'ha == _T_6[3:0] ? _ram_T_26[287:0] : ram_10; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_30 = 4'hb == _T_6[3:0] ? _ram_T_26[287:0] : ram_11; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_31 = 4'hc == _T_6[3:0] ? _ram_T_26[287:0] : ram_12; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_32 = 4'hd == _T_6[3:0] ? _ram_T_26[287:0] : ram_13; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_33 = 4'he == _T_6[3:0] ? _ram_T_26[287:0] : ram_14; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [287:0] _GEN_34 = 4'hf == _T_6[3:0] ? _ram_T_26[287:0] : ram_15; // @[vga.scala 66:24 vga.scala 66:24 vga.scala 47:20]
  wire [9:0] _T_10 = h + 10'h1; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_1 = vga_mem_ram_MPORT_9_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_1 = vga_mem_ram_MPORT_10_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_1 = vga_mem_ram_MPORT_11_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_1 = vga_mem_ram_MPORT_12_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_1 = vga_mem_ram_MPORT_13_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_1 = vga_mem_ram_MPORT_14_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_1 = vga_mem_ram_MPORT_15_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_1 = vga_mem_ram_MPORT_16_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_1 = vga_mem_ram_MPORT_17_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_48 = {278'h0,ram_hi_hi_hi_lo_1,ram_hi_hi_lo_1,ram_hi_lo_hi_1,ram_hi_lo_lo_1,ram_lo_hi_hi_hi_1,
    ram_lo_hi_hi_lo_1,ram_lo_hi_lo_1,ram_lo_lo_hi_1,ram_lo_lo_lo_1}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_740 = {{8191'd0}, _ram_T_48}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_52 = _GEN_740 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_36 = 4'h1 == _T_10[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_37 = 4'h2 == _T_10[3:0] ? ram_2 : _GEN_36; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_38 = 4'h3 == _T_10[3:0] ? ram_3 : _GEN_37; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_39 = 4'h4 == _T_10[3:0] ? ram_4 : _GEN_38; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_40 = 4'h5 == _T_10[3:0] ? ram_5 : _GEN_39; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_41 = 4'h6 == _T_10[3:0] ? ram_6 : _GEN_40; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_42 = 4'h7 == _T_10[3:0] ? ram_7 : _GEN_41; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_43 = 4'h8 == _T_10[3:0] ? ram_8 : _GEN_42; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_44 = 4'h9 == _T_10[3:0] ? ram_9 : _GEN_43; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_45 = 4'ha == _T_10[3:0] ? ram_10 : _GEN_44; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_46 = 4'hb == _T_10[3:0] ? ram_11 : _GEN_45; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_47 = 4'hc == _T_10[3:0] ? ram_12 : _GEN_46; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_48 = 4'hd == _T_10[3:0] ? ram_13 : _GEN_47; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_49 = 4'he == _T_10[3:0] ? ram_14 : _GEN_48; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_50 = 4'hf == _T_10[3:0] ? ram_15 : _GEN_49; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_741 = {{8190'd0}, _GEN_50}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_53 = _GEN_741 ^ _ram_T_52; // @[vga.scala 66:41]
  wire [287:0] _GEN_51 = 4'h0 == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_19; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_52 = 4'h1 == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_20; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_53 = 4'h2 == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_21; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_54 = 4'h3 == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_22; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_55 = 4'h4 == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_23; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_56 = 4'h5 == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_24; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_57 = 4'h6 == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_25; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_58 = 4'h7 == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_26; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_59 = 4'h8 == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_27; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_60 = 4'h9 == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_28; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_61 = 4'ha == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_29; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_62 = 4'hb == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_30; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_63 = 4'hc == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_31; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_64 = 4'hd == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_32; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_65 = 4'he == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_33; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_66 = 4'hf == _T_10[3:0] ? _ram_T_53[287:0] : _GEN_34; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_13 = h + 10'h2; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_2 = vga_mem_ram_MPORT_18_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_2 = vga_mem_ram_MPORT_19_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_2 = vga_mem_ram_MPORT_20_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_2 = vga_mem_ram_MPORT_21_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_2 = vga_mem_ram_MPORT_22_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_2 = vga_mem_ram_MPORT_23_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_2 = vga_mem_ram_MPORT_24_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_2 = vga_mem_ram_MPORT_25_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_2 = vga_mem_ram_MPORT_26_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_75 = {278'h0,ram_hi_hi_hi_lo_2,ram_hi_hi_lo_2,ram_hi_lo_hi_2,ram_hi_lo_lo_2,ram_lo_hi_hi_hi_2,
    ram_lo_hi_hi_lo_2,ram_lo_hi_lo_2,ram_lo_lo_hi_2,ram_lo_lo_lo_2}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_742 = {{8191'd0}, _ram_T_75}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_79 = _GEN_742 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_68 = 4'h1 == _T_13[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_69 = 4'h2 == _T_13[3:0] ? ram_2 : _GEN_68; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_70 = 4'h3 == _T_13[3:0] ? ram_3 : _GEN_69; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_71 = 4'h4 == _T_13[3:0] ? ram_4 : _GEN_70; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_72 = 4'h5 == _T_13[3:0] ? ram_5 : _GEN_71; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_73 = 4'h6 == _T_13[3:0] ? ram_6 : _GEN_72; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_74 = 4'h7 == _T_13[3:0] ? ram_7 : _GEN_73; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_75 = 4'h8 == _T_13[3:0] ? ram_8 : _GEN_74; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_76 = 4'h9 == _T_13[3:0] ? ram_9 : _GEN_75; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_77 = 4'ha == _T_13[3:0] ? ram_10 : _GEN_76; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_78 = 4'hb == _T_13[3:0] ? ram_11 : _GEN_77; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_79 = 4'hc == _T_13[3:0] ? ram_12 : _GEN_78; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_80 = 4'hd == _T_13[3:0] ? ram_13 : _GEN_79; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_81 = 4'he == _T_13[3:0] ? ram_14 : _GEN_80; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_82 = 4'hf == _T_13[3:0] ? ram_15 : _GEN_81; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_743 = {{8190'd0}, _GEN_82}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_80 = _GEN_743 ^ _ram_T_79; // @[vga.scala 66:41]
  wire [287:0] _GEN_83 = 4'h0 == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_51; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_84 = 4'h1 == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_52; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_85 = 4'h2 == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_53; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_86 = 4'h3 == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_54; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_87 = 4'h4 == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_55; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_88 = 4'h5 == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_56; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_89 = 4'h6 == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_57; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_90 = 4'h7 == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_58; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_91 = 4'h8 == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_59; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_92 = 4'h9 == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_60; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_93 = 4'ha == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_61; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_94 = 4'hb == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_62; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_95 = 4'hc == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_63; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_96 = 4'hd == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_64; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_97 = 4'he == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_65; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_98 = 4'hf == _T_13[3:0] ? _ram_T_80[287:0] : _GEN_66; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_16 = h + 10'h3; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_3 = vga_mem_ram_MPORT_27_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_3 = vga_mem_ram_MPORT_28_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_3 = vga_mem_ram_MPORT_29_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_3 = vga_mem_ram_MPORT_30_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_3 = vga_mem_ram_MPORT_31_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_3 = vga_mem_ram_MPORT_32_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_3 = vga_mem_ram_MPORT_33_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_3 = vga_mem_ram_MPORT_34_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_3 = vga_mem_ram_MPORT_35_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_102 = {278'h0,ram_hi_hi_hi_lo_3,ram_hi_hi_lo_3,ram_hi_lo_hi_3,ram_hi_lo_lo_3,ram_lo_hi_hi_hi_3,
    ram_lo_hi_hi_lo_3,ram_lo_hi_lo_3,ram_lo_lo_hi_3,ram_lo_lo_lo_3}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_744 = {{8191'd0}, _ram_T_102}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_106 = _GEN_744 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_100 = 4'h1 == _T_16[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_101 = 4'h2 == _T_16[3:0] ? ram_2 : _GEN_100; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_102 = 4'h3 == _T_16[3:0] ? ram_3 : _GEN_101; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_103 = 4'h4 == _T_16[3:0] ? ram_4 : _GEN_102; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_104 = 4'h5 == _T_16[3:0] ? ram_5 : _GEN_103; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_105 = 4'h6 == _T_16[3:0] ? ram_6 : _GEN_104; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_106 = 4'h7 == _T_16[3:0] ? ram_7 : _GEN_105; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_107 = 4'h8 == _T_16[3:0] ? ram_8 : _GEN_106; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_108 = 4'h9 == _T_16[3:0] ? ram_9 : _GEN_107; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_109 = 4'ha == _T_16[3:0] ? ram_10 : _GEN_108; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_110 = 4'hb == _T_16[3:0] ? ram_11 : _GEN_109; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_111 = 4'hc == _T_16[3:0] ? ram_12 : _GEN_110; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_112 = 4'hd == _T_16[3:0] ? ram_13 : _GEN_111; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_113 = 4'he == _T_16[3:0] ? ram_14 : _GEN_112; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_114 = 4'hf == _T_16[3:0] ? ram_15 : _GEN_113; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_745 = {{8190'd0}, _GEN_114}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_107 = _GEN_745 ^ _ram_T_106; // @[vga.scala 66:41]
  wire [287:0] _GEN_115 = 4'h0 == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_83; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_116 = 4'h1 == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_84; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_117 = 4'h2 == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_85; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_118 = 4'h3 == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_86; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_119 = 4'h4 == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_87; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_120 = 4'h5 == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_88; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_121 = 4'h6 == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_89; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_122 = 4'h7 == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_90; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_123 = 4'h8 == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_91; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_124 = 4'h9 == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_92; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_125 = 4'ha == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_93; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_126 = 4'hb == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_94; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_127 = 4'hc == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_95; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_128 = 4'hd == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_96; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_129 = 4'he == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_97; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_130 = 4'hf == _T_16[3:0] ? _ram_T_107[287:0] : _GEN_98; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_19 = h + 10'h4; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_4 = vga_mem_ram_MPORT_36_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_4 = vga_mem_ram_MPORT_37_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_4 = vga_mem_ram_MPORT_38_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_4 = vga_mem_ram_MPORT_39_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_4 = vga_mem_ram_MPORT_40_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_4 = vga_mem_ram_MPORT_41_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_4 = vga_mem_ram_MPORT_42_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_4 = vga_mem_ram_MPORT_43_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_4 = vga_mem_ram_MPORT_44_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_129 = {278'h0,ram_hi_hi_hi_lo_4,ram_hi_hi_lo_4,ram_hi_lo_hi_4,ram_hi_lo_lo_4,ram_lo_hi_hi_hi_4,
    ram_lo_hi_hi_lo_4,ram_lo_hi_lo_4,ram_lo_lo_hi_4,ram_lo_lo_lo_4}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_746 = {{8191'd0}, _ram_T_129}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_133 = _GEN_746 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_132 = 4'h1 == _T_19[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_133 = 4'h2 == _T_19[3:0] ? ram_2 : _GEN_132; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_134 = 4'h3 == _T_19[3:0] ? ram_3 : _GEN_133; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_135 = 4'h4 == _T_19[3:0] ? ram_4 : _GEN_134; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_136 = 4'h5 == _T_19[3:0] ? ram_5 : _GEN_135; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_137 = 4'h6 == _T_19[3:0] ? ram_6 : _GEN_136; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_138 = 4'h7 == _T_19[3:0] ? ram_7 : _GEN_137; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_139 = 4'h8 == _T_19[3:0] ? ram_8 : _GEN_138; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_140 = 4'h9 == _T_19[3:0] ? ram_9 : _GEN_139; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_141 = 4'ha == _T_19[3:0] ? ram_10 : _GEN_140; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_142 = 4'hb == _T_19[3:0] ? ram_11 : _GEN_141; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_143 = 4'hc == _T_19[3:0] ? ram_12 : _GEN_142; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_144 = 4'hd == _T_19[3:0] ? ram_13 : _GEN_143; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_145 = 4'he == _T_19[3:0] ? ram_14 : _GEN_144; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_146 = 4'hf == _T_19[3:0] ? ram_15 : _GEN_145; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_747 = {{8190'd0}, _GEN_146}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_134 = _GEN_747 ^ _ram_T_133; // @[vga.scala 66:41]
  wire [287:0] _GEN_147 = 4'h0 == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_115; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_148 = 4'h1 == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_116; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_149 = 4'h2 == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_117; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_150 = 4'h3 == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_118; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_151 = 4'h4 == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_119; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_152 = 4'h5 == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_120; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_153 = 4'h6 == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_121; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_154 = 4'h7 == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_122; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_155 = 4'h8 == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_123; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_156 = 4'h9 == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_124; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_157 = 4'ha == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_125; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_158 = 4'hb == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_126; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_159 = 4'hc == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_127; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_160 = 4'hd == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_128; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_161 = 4'he == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_129; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_162 = 4'hf == _T_19[3:0] ? _ram_T_134[287:0] : _GEN_130; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_22 = h + 10'h5; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_5 = vga_mem_ram_MPORT_45_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_5 = vga_mem_ram_MPORT_46_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_5 = vga_mem_ram_MPORT_47_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_5 = vga_mem_ram_MPORT_48_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_5 = vga_mem_ram_MPORT_49_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_5 = vga_mem_ram_MPORT_50_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_5 = vga_mem_ram_MPORT_51_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_5 = vga_mem_ram_MPORT_52_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_5 = vga_mem_ram_MPORT_53_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_156 = {278'h0,ram_hi_hi_hi_lo_5,ram_hi_hi_lo_5,ram_hi_lo_hi_5,ram_hi_lo_lo_5,ram_lo_hi_hi_hi_5,
    ram_lo_hi_hi_lo_5,ram_lo_hi_lo_5,ram_lo_lo_hi_5,ram_lo_lo_lo_5}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_748 = {{8191'd0}, _ram_T_156}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_160 = _GEN_748 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_164 = 4'h1 == _T_22[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_165 = 4'h2 == _T_22[3:0] ? ram_2 : _GEN_164; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_166 = 4'h3 == _T_22[3:0] ? ram_3 : _GEN_165; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_167 = 4'h4 == _T_22[3:0] ? ram_4 : _GEN_166; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_168 = 4'h5 == _T_22[3:0] ? ram_5 : _GEN_167; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_169 = 4'h6 == _T_22[3:0] ? ram_6 : _GEN_168; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_170 = 4'h7 == _T_22[3:0] ? ram_7 : _GEN_169; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_171 = 4'h8 == _T_22[3:0] ? ram_8 : _GEN_170; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_172 = 4'h9 == _T_22[3:0] ? ram_9 : _GEN_171; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_173 = 4'ha == _T_22[3:0] ? ram_10 : _GEN_172; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_174 = 4'hb == _T_22[3:0] ? ram_11 : _GEN_173; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_175 = 4'hc == _T_22[3:0] ? ram_12 : _GEN_174; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_176 = 4'hd == _T_22[3:0] ? ram_13 : _GEN_175; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_177 = 4'he == _T_22[3:0] ? ram_14 : _GEN_176; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_178 = 4'hf == _T_22[3:0] ? ram_15 : _GEN_177; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_749 = {{8190'd0}, _GEN_178}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_161 = _GEN_749 ^ _ram_T_160; // @[vga.scala 66:41]
  wire [287:0] _GEN_179 = 4'h0 == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_147; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_180 = 4'h1 == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_148; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_181 = 4'h2 == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_149; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_182 = 4'h3 == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_150; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_183 = 4'h4 == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_151; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_184 = 4'h5 == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_152; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_185 = 4'h6 == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_153; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_186 = 4'h7 == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_154; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_187 = 4'h8 == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_155; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_188 = 4'h9 == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_156; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_189 = 4'ha == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_157; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_190 = 4'hb == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_158; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_191 = 4'hc == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_159; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_192 = 4'hd == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_160; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_193 = 4'he == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_161; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_194 = 4'hf == _T_22[3:0] ? _ram_T_161[287:0] : _GEN_162; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_25 = h + 10'h6; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_6 = vga_mem_ram_MPORT_54_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_6 = vga_mem_ram_MPORT_55_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_6 = vga_mem_ram_MPORT_56_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_6 = vga_mem_ram_MPORT_57_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_6 = vga_mem_ram_MPORT_58_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_6 = vga_mem_ram_MPORT_59_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_6 = vga_mem_ram_MPORT_60_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_6 = vga_mem_ram_MPORT_61_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_6 = vga_mem_ram_MPORT_62_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_183 = {278'h0,ram_hi_hi_hi_lo_6,ram_hi_hi_lo_6,ram_hi_lo_hi_6,ram_hi_lo_lo_6,ram_lo_hi_hi_hi_6,
    ram_lo_hi_hi_lo_6,ram_lo_hi_lo_6,ram_lo_lo_hi_6,ram_lo_lo_lo_6}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_750 = {{8191'd0}, _ram_T_183}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_187 = _GEN_750 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_196 = 4'h1 == _T_25[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_197 = 4'h2 == _T_25[3:0] ? ram_2 : _GEN_196; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_198 = 4'h3 == _T_25[3:0] ? ram_3 : _GEN_197; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_199 = 4'h4 == _T_25[3:0] ? ram_4 : _GEN_198; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_200 = 4'h5 == _T_25[3:0] ? ram_5 : _GEN_199; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_201 = 4'h6 == _T_25[3:0] ? ram_6 : _GEN_200; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_202 = 4'h7 == _T_25[3:0] ? ram_7 : _GEN_201; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_203 = 4'h8 == _T_25[3:0] ? ram_8 : _GEN_202; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_204 = 4'h9 == _T_25[3:0] ? ram_9 : _GEN_203; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_205 = 4'ha == _T_25[3:0] ? ram_10 : _GEN_204; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_206 = 4'hb == _T_25[3:0] ? ram_11 : _GEN_205; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_207 = 4'hc == _T_25[3:0] ? ram_12 : _GEN_206; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_208 = 4'hd == _T_25[3:0] ? ram_13 : _GEN_207; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_209 = 4'he == _T_25[3:0] ? ram_14 : _GEN_208; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_210 = 4'hf == _T_25[3:0] ? ram_15 : _GEN_209; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_751 = {{8190'd0}, _GEN_210}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_188 = _GEN_751 ^ _ram_T_187; // @[vga.scala 66:41]
  wire [287:0] _GEN_211 = 4'h0 == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_179; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_212 = 4'h1 == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_180; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_213 = 4'h2 == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_181; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_214 = 4'h3 == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_182; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_215 = 4'h4 == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_183; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_216 = 4'h5 == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_184; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_217 = 4'h6 == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_185; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_218 = 4'h7 == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_186; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_219 = 4'h8 == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_187; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_220 = 4'h9 == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_188; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_221 = 4'ha == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_189; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_222 = 4'hb == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_190; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_223 = 4'hc == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_191; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_224 = 4'hd == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_192; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_225 = 4'he == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_193; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_226 = 4'hf == _T_25[3:0] ? _ram_T_188[287:0] : _GEN_194; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_28 = h + 10'h7; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_7 = vga_mem_ram_MPORT_63_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_7 = vga_mem_ram_MPORT_64_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_7 = vga_mem_ram_MPORT_65_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_7 = vga_mem_ram_MPORT_66_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_7 = vga_mem_ram_MPORT_67_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_7 = vga_mem_ram_MPORT_68_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_7 = vga_mem_ram_MPORT_69_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_7 = vga_mem_ram_MPORT_70_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_7 = vga_mem_ram_MPORT_71_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_210 = {278'h0,ram_hi_hi_hi_lo_7,ram_hi_hi_lo_7,ram_hi_lo_hi_7,ram_hi_lo_lo_7,ram_lo_hi_hi_hi_7,
    ram_lo_hi_hi_lo_7,ram_lo_hi_lo_7,ram_lo_lo_hi_7,ram_lo_lo_lo_7}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_752 = {{8191'd0}, _ram_T_210}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_214 = _GEN_752 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_228 = 4'h1 == _T_28[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_229 = 4'h2 == _T_28[3:0] ? ram_2 : _GEN_228; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_230 = 4'h3 == _T_28[3:0] ? ram_3 : _GEN_229; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_231 = 4'h4 == _T_28[3:0] ? ram_4 : _GEN_230; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_232 = 4'h5 == _T_28[3:0] ? ram_5 : _GEN_231; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_233 = 4'h6 == _T_28[3:0] ? ram_6 : _GEN_232; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_234 = 4'h7 == _T_28[3:0] ? ram_7 : _GEN_233; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_235 = 4'h8 == _T_28[3:0] ? ram_8 : _GEN_234; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_236 = 4'h9 == _T_28[3:0] ? ram_9 : _GEN_235; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_237 = 4'ha == _T_28[3:0] ? ram_10 : _GEN_236; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_238 = 4'hb == _T_28[3:0] ? ram_11 : _GEN_237; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_239 = 4'hc == _T_28[3:0] ? ram_12 : _GEN_238; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_240 = 4'hd == _T_28[3:0] ? ram_13 : _GEN_239; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_241 = 4'he == _T_28[3:0] ? ram_14 : _GEN_240; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_242 = 4'hf == _T_28[3:0] ? ram_15 : _GEN_241; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_753 = {{8190'd0}, _GEN_242}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_215 = _GEN_753 ^ _ram_T_214; // @[vga.scala 66:41]
  wire [287:0] _GEN_243 = 4'h0 == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_211; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_244 = 4'h1 == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_212; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_245 = 4'h2 == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_213; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_246 = 4'h3 == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_214; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_247 = 4'h4 == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_215; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_248 = 4'h5 == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_216; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_249 = 4'h6 == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_217; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_250 = 4'h7 == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_218; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_251 = 4'h8 == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_219; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_252 = 4'h9 == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_220; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_253 = 4'ha == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_221; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_254 = 4'hb == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_222; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_255 = 4'hc == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_223; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_256 = 4'hd == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_224; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_257 = 4'he == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_225; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_258 = 4'hf == _T_28[3:0] ? _ram_T_215[287:0] : _GEN_226; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_31 = h + 10'h8; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_8 = vga_mem_ram_MPORT_72_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_8 = vga_mem_ram_MPORT_73_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_8 = vga_mem_ram_MPORT_74_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_8 = vga_mem_ram_MPORT_75_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_8 = vga_mem_ram_MPORT_76_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_8 = vga_mem_ram_MPORT_77_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_8 = vga_mem_ram_MPORT_78_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_8 = vga_mem_ram_MPORT_79_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_8 = vga_mem_ram_MPORT_80_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_237 = {278'h0,ram_hi_hi_hi_lo_8,ram_hi_hi_lo_8,ram_hi_lo_hi_8,ram_hi_lo_lo_8,ram_lo_hi_hi_hi_8,
    ram_lo_hi_hi_lo_8,ram_lo_hi_lo_8,ram_lo_lo_hi_8,ram_lo_lo_lo_8}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_754 = {{8191'd0}, _ram_T_237}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_241 = _GEN_754 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_260 = 4'h1 == _T_31[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_261 = 4'h2 == _T_31[3:0] ? ram_2 : _GEN_260; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_262 = 4'h3 == _T_31[3:0] ? ram_3 : _GEN_261; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_263 = 4'h4 == _T_31[3:0] ? ram_4 : _GEN_262; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_264 = 4'h5 == _T_31[3:0] ? ram_5 : _GEN_263; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_265 = 4'h6 == _T_31[3:0] ? ram_6 : _GEN_264; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_266 = 4'h7 == _T_31[3:0] ? ram_7 : _GEN_265; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_267 = 4'h8 == _T_31[3:0] ? ram_8 : _GEN_266; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_268 = 4'h9 == _T_31[3:0] ? ram_9 : _GEN_267; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_269 = 4'ha == _T_31[3:0] ? ram_10 : _GEN_268; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_270 = 4'hb == _T_31[3:0] ? ram_11 : _GEN_269; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_271 = 4'hc == _T_31[3:0] ? ram_12 : _GEN_270; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_272 = 4'hd == _T_31[3:0] ? ram_13 : _GEN_271; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_273 = 4'he == _T_31[3:0] ? ram_14 : _GEN_272; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_274 = 4'hf == _T_31[3:0] ? ram_15 : _GEN_273; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_755 = {{8190'd0}, _GEN_274}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_242 = _GEN_755 ^ _ram_T_241; // @[vga.scala 66:41]
  wire [287:0] _GEN_275 = 4'h0 == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_243; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_276 = 4'h1 == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_244; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_277 = 4'h2 == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_245; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_278 = 4'h3 == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_246; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_279 = 4'h4 == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_247; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_280 = 4'h5 == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_248; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_281 = 4'h6 == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_249; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_282 = 4'h7 == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_250; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_283 = 4'h8 == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_251; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_284 = 4'h9 == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_252; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_285 = 4'ha == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_253; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_286 = 4'hb == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_254; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_287 = 4'hc == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_255; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_288 = 4'hd == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_256; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_289 = 4'he == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_257; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_290 = 4'hf == _T_31[3:0] ? _ram_T_242[287:0] : _GEN_258; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_34 = h + 10'h9; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_9 = vga_mem_ram_MPORT_81_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_9 = vga_mem_ram_MPORT_82_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_9 = vga_mem_ram_MPORT_83_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_9 = vga_mem_ram_MPORT_84_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_9 = vga_mem_ram_MPORT_85_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_9 = vga_mem_ram_MPORT_86_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_9 = vga_mem_ram_MPORT_87_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_9 = vga_mem_ram_MPORT_88_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_9 = vga_mem_ram_MPORT_89_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_264 = {278'h0,ram_hi_hi_hi_lo_9,ram_hi_hi_lo_9,ram_hi_lo_hi_9,ram_hi_lo_lo_9,ram_lo_hi_hi_hi_9,
    ram_lo_hi_hi_lo_9,ram_lo_hi_lo_9,ram_lo_lo_hi_9,ram_lo_lo_lo_9}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_756 = {{8191'd0}, _ram_T_264}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_268 = _GEN_756 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_292 = 4'h1 == _T_34[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_293 = 4'h2 == _T_34[3:0] ? ram_2 : _GEN_292; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_294 = 4'h3 == _T_34[3:0] ? ram_3 : _GEN_293; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_295 = 4'h4 == _T_34[3:0] ? ram_4 : _GEN_294; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_296 = 4'h5 == _T_34[3:0] ? ram_5 : _GEN_295; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_297 = 4'h6 == _T_34[3:0] ? ram_6 : _GEN_296; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_298 = 4'h7 == _T_34[3:0] ? ram_7 : _GEN_297; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_299 = 4'h8 == _T_34[3:0] ? ram_8 : _GEN_298; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_300 = 4'h9 == _T_34[3:0] ? ram_9 : _GEN_299; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_301 = 4'ha == _T_34[3:0] ? ram_10 : _GEN_300; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_302 = 4'hb == _T_34[3:0] ? ram_11 : _GEN_301; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_303 = 4'hc == _T_34[3:0] ? ram_12 : _GEN_302; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_304 = 4'hd == _T_34[3:0] ? ram_13 : _GEN_303; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_305 = 4'he == _T_34[3:0] ? ram_14 : _GEN_304; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_306 = 4'hf == _T_34[3:0] ? ram_15 : _GEN_305; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_757 = {{8190'd0}, _GEN_306}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_269 = _GEN_757 ^ _ram_T_268; // @[vga.scala 66:41]
  wire [287:0] _GEN_307 = 4'h0 == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_275; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_308 = 4'h1 == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_276; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_309 = 4'h2 == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_277; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_310 = 4'h3 == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_278; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_311 = 4'h4 == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_279; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_312 = 4'h5 == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_280; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_313 = 4'h6 == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_281; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_314 = 4'h7 == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_282; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_315 = 4'h8 == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_283; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_316 = 4'h9 == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_284; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_317 = 4'ha == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_285; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_318 = 4'hb == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_286; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_319 = 4'hc == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_287; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_320 = 4'hd == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_288; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_321 = 4'he == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_289; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_322 = 4'hf == _T_34[3:0] ? _ram_T_269[287:0] : _GEN_290; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_37 = h + 10'ha; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_10 = vga_mem_ram_MPORT_90_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_10 = vga_mem_ram_MPORT_91_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_10 = vga_mem_ram_MPORT_92_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_10 = vga_mem_ram_MPORT_93_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_10 = vga_mem_ram_MPORT_94_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_10 = vga_mem_ram_MPORT_95_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_10 = vga_mem_ram_MPORT_96_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_10 = vga_mem_ram_MPORT_97_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_10 = vga_mem_ram_MPORT_98_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_291 = {278'h0,ram_hi_hi_hi_lo_10,ram_hi_hi_lo_10,ram_hi_lo_hi_10,ram_hi_lo_lo_10,
    ram_lo_hi_hi_hi_10,ram_lo_hi_hi_lo_10,ram_lo_hi_lo_10,ram_lo_lo_hi_10,ram_lo_lo_lo_10}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_758 = {{8191'd0}, _ram_T_291}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_295 = _GEN_758 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_324 = 4'h1 == _T_37[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_325 = 4'h2 == _T_37[3:0] ? ram_2 : _GEN_324; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_326 = 4'h3 == _T_37[3:0] ? ram_3 : _GEN_325; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_327 = 4'h4 == _T_37[3:0] ? ram_4 : _GEN_326; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_328 = 4'h5 == _T_37[3:0] ? ram_5 : _GEN_327; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_329 = 4'h6 == _T_37[3:0] ? ram_6 : _GEN_328; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_330 = 4'h7 == _T_37[3:0] ? ram_7 : _GEN_329; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_331 = 4'h8 == _T_37[3:0] ? ram_8 : _GEN_330; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_332 = 4'h9 == _T_37[3:0] ? ram_9 : _GEN_331; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_333 = 4'ha == _T_37[3:0] ? ram_10 : _GEN_332; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_334 = 4'hb == _T_37[3:0] ? ram_11 : _GEN_333; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_335 = 4'hc == _T_37[3:0] ? ram_12 : _GEN_334; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_336 = 4'hd == _T_37[3:0] ? ram_13 : _GEN_335; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_337 = 4'he == _T_37[3:0] ? ram_14 : _GEN_336; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_338 = 4'hf == _T_37[3:0] ? ram_15 : _GEN_337; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_759 = {{8190'd0}, _GEN_338}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_296 = _GEN_759 ^ _ram_T_295; // @[vga.scala 66:41]
  wire [287:0] _GEN_339 = 4'h0 == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_307; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_340 = 4'h1 == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_308; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_341 = 4'h2 == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_309; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_342 = 4'h3 == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_310; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_343 = 4'h4 == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_311; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_344 = 4'h5 == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_312; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_345 = 4'h6 == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_313; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_346 = 4'h7 == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_314; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_347 = 4'h8 == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_315; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_348 = 4'h9 == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_316; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_349 = 4'ha == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_317; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_350 = 4'hb == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_318; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_351 = 4'hc == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_319; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_352 = 4'hd == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_320; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_353 = 4'he == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_321; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_354 = 4'hf == _T_37[3:0] ? _ram_T_296[287:0] : _GEN_322; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_40 = h + 10'hb; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_11 = vga_mem_ram_MPORT_99_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_11 = vga_mem_ram_MPORT_100_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_11 = vga_mem_ram_MPORT_101_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_11 = vga_mem_ram_MPORT_102_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_11 = vga_mem_ram_MPORT_103_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_11 = vga_mem_ram_MPORT_104_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_11 = vga_mem_ram_MPORT_105_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_11 = vga_mem_ram_MPORT_106_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_11 = vga_mem_ram_MPORT_107_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_318 = {278'h0,ram_hi_hi_hi_lo_11,ram_hi_hi_lo_11,ram_hi_lo_hi_11,ram_hi_lo_lo_11,
    ram_lo_hi_hi_hi_11,ram_lo_hi_hi_lo_11,ram_lo_hi_lo_11,ram_lo_lo_hi_11,ram_lo_lo_lo_11}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_760 = {{8191'd0}, _ram_T_318}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_322 = _GEN_760 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_356 = 4'h1 == _T_40[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_357 = 4'h2 == _T_40[3:0] ? ram_2 : _GEN_356; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_358 = 4'h3 == _T_40[3:0] ? ram_3 : _GEN_357; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_359 = 4'h4 == _T_40[3:0] ? ram_4 : _GEN_358; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_360 = 4'h5 == _T_40[3:0] ? ram_5 : _GEN_359; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_361 = 4'h6 == _T_40[3:0] ? ram_6 : _GEN_360; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_362 = 4'h7 == _T_40[3:0] ? ram_7 : _GEN_361; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_363 = 4'h8 == _T_40[3:0] ? ram_8 : _GEN_362; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_364 = 4'h9 == _T_40[3:0] ? ram_9 : _GEN_363; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_365 = 4'ha == _T_40[3:0] ? ram_10 : _GEN_364; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_366 = 4'hb == _T_40[3:0] ? ram_11 : _GEN_365; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_367 = 4'hc == _T_40[3:0] ? ram_12 : _GEN_366; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_368 = 4'hd == _T_40[3:0] ? ram_13 : _GEN_367; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_369 = 4'he == _T_40[3:0] ? ram_14 : _GEN_368; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_370 = 4'hf == _T_40[3:0] ? ram_15 : _GEN_369; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_761 = {{8190'd0}, _GEN_370}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_323 = _GEN_761 ^ _ram_T_322; // @[vga.scala 66:41]
  wire [287:0] _GEN_371 = 4'h0 == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_339; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_372 = 4'h1 == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_340; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_373 = 4'h2 == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_341; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_374 = 4'h3 == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_342; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_375 = 4'h4 == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_343; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_376 = 4'h5 == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_344; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_377 = 4'h6 == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_345; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_378 = 4'h7 == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_346; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_379 = 4'h8 == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_347; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_380 = 4'h9 == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_348; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_381 = 4'ha == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_349; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_382 = 4'hb == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_350; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_383 = 4'hc == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_351; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_384 = 4'hd == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_352; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_385 = 4'he == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_353; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_386 = 4'hf == _T_40[3:0] ? _ram_T_323[287:0] : _GEN_354; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_43 = h + 10'hc; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_12 = vga_mem_ram_MPORT_108_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_12 = vga_mem_ram_MPORT_109_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_12 = vga_mem_ram_MPORT_110_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_12 = vga_mem_ram_MPORT_111_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_12 = vga_mem_ram_MPORT_112_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_12 = vga_mem_ram_MPORT_113_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_12 = vga_mem_ram_MPORT_114_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_12 = vga_mem_ram_MPORT_115_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_12 = vga_mem_ram_MPORT_116_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_345 = {278'h0,ram_hi_hi_hi_lo_12,ram_hi_hi_lo_12,ram_hi_lo_hi_12,ram_hi_lo_lo_12,
    ram_lo_hi_hi_hi_12,ram_lo_hi_hi_lo_12,ram_lo_hi_lo_12,ram_lo_lo_hi_12,ram_lo_lo_lo_12}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_762 = {{8191'd0}, _ram_T_345}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_349 = _GEN_762 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_388 = 4'h1 == _T_43[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_389 = 4'h2 == _T_43[3:0] ? ram_2 : _GEN_388; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_390 = 4'h3 == _T_43[3:0] ? ram_3 : _GEN_389; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_391 = 4'h4 == _T_43[3:0] ? ram_4 : _GEN_390; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_392 = 4'h5 == _T_43[3:0] ? ram_5 : _GEN_391; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_393 = 4'h6 == _T_43[3:0] ? ram_6 : _GEN_392; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_394 = 4'h7 == _T_43[3:0] ? ram_7 : _GEN_393; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_395 = 4'h8 == _T_43[3:0] ? ram_8 : _GEN_394; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_396 = 4'h9 == _T_43[3:0] ? ram_9 : _GEN_395; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_397 = 4'ha == _T_43[3:0] ? ram_10 : _GEN_396; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_398 = 4'hb == _T_43[3:0] ? ram_11 : _GEN_397; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_399 = 4'hc == _T_43[3:0] ? ram_12 : _GEN_398; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_400 = 4'hd == _T_43[3:0] ? ram_13 : _GEN_399; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_401 = 4'he == _T_43[3:0] ? ram_14 : _GEN_400; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_402 = 4'hf == _T_43[3:0] ? ram_15 : _GEN_401; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_763 = {{8190'd0}, _GEN_402}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_350 = _GEN_763 ^ _ram_T_349; // @[vga.scala 66:41]
  wire [287:0] _GEN_403 = 4'h0 == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_371; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_404 = 4'h1 == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_372; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_405 = 4'h2 == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_373; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_406 = 4'h3 == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_374; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_407 = 4'h4 == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_375; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_408 = 4'h5 == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_376; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_409 = 4'h6 == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_377; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_410 = 4'h7 == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_378; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_411 = 4'h8 == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_379; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_412 = 4'h9 == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_380; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_413 = 4'ha == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_381; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_414 = 4'hb == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_382; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_415 = 4'hc == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_383; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_416 = 4'hd == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_384; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_417 = 4'he == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_385; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_418 = 4'hf == _T_43[3:0] ? _ram_T_350[287:0] : _GEN_386; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_46 = h + 10'hd; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_13 = vga_mem_ram_MPORT_117_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_13 = vga_mem_ram_MPORT_118_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_13 = vga_mem_ram_MPORT_119_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_13 = vga_mem_ram_MPORT_120_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_13 = vga_mem_ram_MPORT_121_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_13 = vga_mem_ram_MPORT_122_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_13 = vga_mem_ram_MPORT_123_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_13 = vga_mem_ram_MPORT_124_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_13 = vga_mem_ram_MPORT_125_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_372 = {278'h0,ram_hi_hi_hi_lo_13,ram_hi_hi_lo_13,ram_hi_lo_hi_13,ram_hi_lo_lo_13,
    ram_lo_hi_hi_hi_13,ram_lo_hi_hi_lo_13,ram_lo_hi_lo_13,ram_lo_lo_hi_13,ram_lo_lo_lo_13}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_764 = {{8191'd0}, _ram_T_372}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_376 = _GEN_764 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_420 = 4'h1 == _T_46[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_421 = 4'h2 == _T_46[3:0] ? ram_2 : _GEN_420; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_422 = 4'h3 == _T_46[3:0] ? ram_3 : _GEN_421; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_423 = 4'h4 == _T_46[3:0] ? ram_4 : _GEN_422; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_424 = 4'h5 == _T_46[3:0] ? ram_5 : _GEN_423; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_425 = 4'h6 == _T_46[3:0] ? ram_6 : _GEN_424; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_426 = 4'h7 == _T_46[3:0] ? ram_7 : _GEN_425; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_427 = 4'h8 == _T_46[3:0] ? ram_8 : _GEN_426; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_428 = 4'h9 == _T_46[3:0] ? ram_9 : _GEN_427; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_429 = 4'ha == _T_46[3:0] ? ram_10 : _GEN_428; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_430 = 4'hb == _T_46[3:0] ? ram_11 : _GEN_429; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_431 = 4'hc == _T_46[3:0] ? ram_12 : _GEN_430; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_432 = 4'hd == _T_46[3:0] ? ram_13 : _GEN_431; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_433 = 4'he == _T_46[3:0] ? ram_14 : _GEN_432; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_434 = 4'hf == _T_46[3:0] ? ram_15 : _GEN_433; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_765 = {{8190'd0}, _GEN_434}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_377 = _GEN_765 ^ _ram_T_376; // @[vga.scala 66:41]
  wire [287:0] _GEN_435 = 4'h0 == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_403; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_436 = 4'h1 == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_404; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_437 = 4'h2 == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_405; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_438 = 4'h3 == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_406; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_439 = 4'h4 == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_407; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_440 = 4'h5 == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_408; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_441 = 4'h6 == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_409; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_442 = 4'h7 == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_410; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_443 = 4'h8 == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_411; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_444 = 4'h9 == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_412; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_445 = 4'ha == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_413; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_446 = 4'hb == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_414; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_447 = 4'hc == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_415; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_448 = 4'hd == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_416; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_449 = 4'he == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_417; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_450 = 4'hf == _T_46[3:0] ? _ram_T_377[287:0] : _GEN_418; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_49 = h + 10'he; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_14 = vga_mem_ram_MPORT_126_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_14 = vga_mem_ram_MPORT_127_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_14 = vga_mem_ram_MPORT_128_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_14 = vga_mem_ram_MPORT_129_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_14 = vga_mem_ram_MPORT_130_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_14 = vga_mem_ram_MPORT_131_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_14 = vga_mem_ram_MPORT_132_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_14 = vga_mem_ram_MPORT_133_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_14 = vga_mem_ram_MPORT_134_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_399 = {278'h0,ram_hi_hi_hi_lo_14,ram_hi_hi_lo_14,ram_hi_lo_hi_14,ram_hi_lo_lo_14,
    ram_lo_hi_hi_hi_14,ram_lo_hi_hi_lo_14,ram_lo_hi_lo_14,ram_lo_lo_hi_14,ram_lo_lo_lo_14}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_766 = {{8191'd0}, _ram_T_399}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_403 = _GEN_766 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_452 = 4'h1 == _T_49[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_453 = 4'h2 == _T_49[3:0] ? ram_2 : _GEN_452; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_454 = 4'h3 == _T_49[3:0] ? ram_3 : _GEN_453; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_455 = 4'h4 == _T_49[3:0] ? ram_4 : _GEN_454; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_456 = 4'h5 == _T_49[3:0] ? ram_5 : _GEN_455; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_457 = 4'h6 == _T_49[3:0] ? ram_6 : _GEN_456; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_458 = 4'h7 == _T_49[3:0] ? ram_7 : _GEN_457; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_459 = 4'h8 == _T_49[3:0] ? ram_8 : _GEN_458; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_460 = 4'h9 == _T_49[3:0] ? ram_9 : _GEN_459; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_461 = 4'ha == _T_49[3:0] ? ram_10 : _GEN_460; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_462 = 4'hb == _T_49[3:0] ? ram_11 : _GEN_461; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_463 = 4'hc == _T_49[3:0] ? ram_12 : _GEN_462; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_464 = 4'hd == _T_49[3:0] ? ram_13 : _GEN_463; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_465 = 4'he == _T_49[3:0] ? ram_14 : _GEN_464; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_466 = 4'hf == _T_49[3:0] ? ram_15 : _GEN_465; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_767 = {{8190'd0}, _GEN_466}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_404 = _GEN_767 ^ _ram_T_403; // @[vga.scala 66:41]
  wire [287:0] _GEN_467 = 4'h0 == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_435; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_468 = 4'h1 == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_436; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_469 = 4'h2 == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_437; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_470 = 4'h3 == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_438; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_471 = 4'h4 == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_439; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_472 = 4'h5 == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_440; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_473 = 4'h6 == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_441; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_474 = 4'h7 == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_442; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_475 = 4'h8 == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_443; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_476 = 4'h9 == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_444; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_477 = 4'ha == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_445; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_478 = 4'hb == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_446; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_479 = 4'hc == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_447; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_480 = 4'hd == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_448; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_481 = 4'he == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_449; // @[vga.scala 66:24 vga.scala 66:24]
  wire [287:0] _GEN_482 = 4'hf == _T_49[3:0] ? _ram_T_404[287:0] : _GEN_450; // @[vga.scala 66:24 vga.scala 66:24]
  wire [9:0] _T_52 = h + 10'hf; // @[vga.scala 66:14]
  wire  ram_hi_hi_hi_lo_15 = vga_mem_ram_MPORT_135_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_15 = vga_mem_ram_MPORT_136_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_15 = vga_mem_ram_MPORT_137_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_15 = vga_mem_ram_MPORT_138_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_15 = vga_mem_ram_MPORT_139_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_15 = vga_mem_ram_MPORT_140_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_15 = vga_mem_ram_MPORT_141_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_15 = vga_mem_ram_MPORT_142_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_15 = vga_mem_ram_MPORT_143_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_426 = {278'h0,ram_hi_hi_hi_lo_15,ram_hi_hi_lo_15,ram_hi_lo_hi_15,ram_hi_lo_lo_15,
    ram_lo_hi_hi_hi_15,ram_lo_hi_hi_lo_15,ram_lo_hi_lo_15,ram_lo_lo_hi_15,ram_lo_lo_lo_15}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_768 = {{8191'd0}, _ram_T_426}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_430 = _GEN_768 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_484 = 4'h1 == _T_52[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_485 = 4'h2 == _T_52[3:0] ? ram_2 : _GEN_484; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_486 = 4'h3 == _T_52[3:0] ? ram_3 : _GEN_485; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_487 = 4'h4 == _T_52[3:0] ? ram_4 : _GEN_486; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_488 = 4'h5 == _T_52[3:0] ? ram_5 : _GEN_487; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_489 = 4'h6 == _T_52[3:0] ? ram_6 : _GEN_488; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_490 = 4'h7 == _T_52[3:0] ? ram_7 : _GEN_489; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_491 = 4'h8 == _T_52[3:0] ? ram_8 : _GEN_490; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_492 = 4'h9 == _T_52[3:0] ? ram_9 : _GEN_491; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_493 = 4'ha == _T_52[3:0] ? ram_10 : _GEN_492; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_494 = 4'hb == _T_52[3:0] ? ram_11 : _GEN_493; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_495 = 4'hc == _T_52[3:0] ? ram_12 : _GEN_494; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_496 = 4'hd == _T_52[3:0] ? ram_13 : _GEN_495; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_497 = 4'he == _T_52[3:0] ? ram_14 : _GEN_496; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_498 = 4'hf == _T_52[3:0] ? ram_15 : _GEN_497; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_769 = {{8190'd0}, _GEN_498}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_431 = _GEN_769 ^ _ram_T_430; // @[vga.scala 66:41]
  wire  ram_hi_hi_hi_lo_16 = vga_mem_ram_MPORT_144_data[0]; // @[vga.scala 66:83]
  wire  ram_hi_hi_lo_16 = vga_mem_ram_MPORT_145_data[1]; // @[vga.scala 66:109]
  wire  ram_hi_lo_hi_16 = vga_mem_ram_MPORT_146_data[2]; // @[vga.scala 66:135]
  wire  ram_hi_lo_lo_16 = vga_mem_ram_MPORT_147_data[3]; // @[vga.scala 66:161]
  wire  ram_lo_hi_hi_hi_16 = vga_mem_ram_MPORT_148_data[4]; // @[vga.scala 66:187]
  wire  ram_lo_hi_hi_lo_16 = vga_mem_ram_MPORT_149_data[5]; // @[vga.scala 66:213]
  wire  ram_lo_hi_lo_16 = vga_mem_ram_MPORT_150_data[6]; // @[vga.scala 66:239]
  wire  ram_lo_lo_hi_16 = vga_mem_ram_MPORT_151_data[7]; // @[vga.scala 66:265]
  wire  ram_lo_lo_lo_16 = vga_mem_ram_MPORT_152_data[8]; // @[vga.scala 66:291]
  wire [286:0] _ram_T_453 = {278'h0,ram_hi_hi_hi_lo_16,ram_hi_hi_lo_16,ram_hi_lo_hi_16,ram_hi_lo_lo_16,
    ram_lo_hi_hi_hi_16,ram_lo_hi_hi_lo_16,ram_lo_hi_lo_16,ram_lo_lo_hi_16,ram_lo_lo_lo_16}; // @[Cat.scala 30:58]
  wire [8477:0] _GEN_770 = {{8191'd0}, _ram_T_453}; // @[vga.scala 66:295]
  wire [8477:0] _ram_T_457 = _GEN_770 << _ram_T_24; // @[vga.scala 66:295]
  wire [287:0] _GEN_516 = 4'h1 == _h_T_1[3:0] ? ram_1 : ram_0; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_517 = 4'h2 == _h_T_1[3:0] ? ram_2 : _GEN_516; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_518 = 4'h3 == _h_T_1[3:0] ? ram_3 : _GEN_517; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_519 = 4'h4 == _h_T_1[3:0] ? ram_4 : _GEN_518; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_520 = 4'h5 == _h_T_1[3:0] ? ram_5 : _GEN_519; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_521 = 4'h6 == _h_T_1[3:0] ? ram_6 : _GEN_520; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_522 = 4'h7 == _h_T_1[3:0] ? ram_7 : _GEN_521; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_523 = 4'h8 == _h_T_1[3:0] ? ram_8 : _GEN_522; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_524 = 4'h9 == _h_T_1[3:0] ? ram_9 : _GEN_523; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_525 = 4'ha == _h_T_1[3:0] ? ram_10 : _GEN_524; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_526 = 4'hb == _h_T_1[3:0] ? ram_11 : _GEN_525; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_527 = 4'hc == _h_T_1[3:0] ? ram_12 : _GEN_526; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_528 = 4'hd == _h_T_1[3:0] ? ram_13 : _GEN_527; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_529 = 4'he == _h_T_1[3:0] ? ram_14 : _GEN_528; // @[vga.scala 66:41 vga.scala 66:41]
  wire [287:0] _GEN_530 = 4'hf == _h_T_1[3:0] ? ram_15 : _GEN_529; // @[vga.scala 66:41 vga.scala 66:41]
  wire [8477:0] _GEN_771 = {{8190'd0}, _GEN_530}; // @[vga.scala 66:41]
  wire [8477:0] _ram_T_458 = _GEN_771 ^ _ram_T_457; // @[vga.scala 66:41]
  wire [8:0] _v_T_1 = v + 9'h9; // @[vga.scala 68:13]
  wire [287:0] _GEN_548 = 4'h1 == io_h_addr[3:0] ? ram_1 : ram_0; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_549 = 4'h2 == io_h_addr[3:0] ? ram_2 : _GEN_548; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_550 = 4'h3 == io_h_addr[3:0] ? ram_3 : _GEN_549; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_551 = 4'h4 == io_h_addr[3:0] ? ram_4 : _GEN_550; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_552 = 4'h5 == io_h_addr[3:0] ? ram_5 : _GEN_551; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_553 = 4'h6 == io_h_addr[3:0] ? ram_6 : _GEN_552; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_554 = 4'h7 == io_h_addr[3:0] ? ram_7 : _GEN_553; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_555 = 4'h8 == io_h_addr[3:0] ? ram_8 : _GEN_554; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_556 = 4'h9 == io_h_addr[3:0] ? ram_9 : _GEN_555; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_557 = 4'ha == io_h_addr[3:0] ? ram_10 : _GEN_556; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_558 = 4'hb == io_h_addr[3:0] ? ram_11 : _GEN_557; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_559 = 4'hc == io_h_addr[3:0] ? ram_12 : _GEN_558; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_560 = 4'hd == io_h_addr[3:0] ? ram_13 : _GEN_559; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_561 = 4'he == io_h_addr[3:0] ? ram_14 : _GEN_560; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _GEN_562 = 4'hf == io_h_addr[3:0] ? ram_15 : _GEN_561; // @[vga.scala 69:28 vga.scala 69:28]
  wire [287:0] _T_58 = _GEN_562 >> io_v_addr; // @[vga.scala 69:28]
  assign vga_mem_ram_MPORT_addr = vga_mem_ram_MPORT_addr_pipe_0;
  assign vga_mem_ram_MPORT_data = vga_mem[vga_mem_ram_MPORT_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_1_addr = vga_mem_ram_MPORT_1_addr_pipe_0;
  assign vga_mem_ram_MPORT_1_data = vga_mem[vga_mem_ram_MPORT_1_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_2_addr = vga_mem_ram_MPORT_2_addr_pipe_0;
  assign vga_mem_ram_MPORT_2_data = vga_mem[vga_mem_ram_MPORT_2_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_3_addr = vga_mem_ram_MPORT_3_addr_pipe_0;
  assign vga_mem_ram_MPORT_3_data = vga_mem[vga_mem_ram_MPORT_3_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_4_addr = vga_mem_ram_MPORT_4_addr_pipe_0;
  assign vga_mem_ram_MPORT_4_data = vga_mem[vga_mem_ram_MPORT_4_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_5_addr = vga_mem_ram_MPORT_5_addr_pipe_0;
  assign vga_mem_ram_MPORT_5_data = vga_mem[vga_mem_ram_MPORT_5_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_6_addr = vga_mem_ram_MPORT_6_addr_pipe_0;
  assign vga_mem_ram_MPORT_6_data = vga_mem[vga_mem_ram_MPORT_6_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_7_addr = vga_mem_ram_MPORT_7_addr_pipe_0;
  assign vga_mem_ram_MPORT_7_data = vga_mem[vga_mem_ram_MPORT_7_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_8_addr = vga_mem_ram_MPORT_8_addr_pipe_0;
  assign vga_mem_ram_MPORT_8_data = vga_mem[vga_mem_ram_MPORT_8_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_9_addr = vga_mem_ram_MPORT_9_addr_pipe_0;
  assign vga_mem_ram_MPORT_9_data = vga_mem[vga_mem_ram_MPORT_9_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_10_addr = vga_mem_ram_MPORT_10_addr_pipe_0;
  assign vga_mem_ram_MPORT_10_data = vga_mem[vga_mem_ram_MPORT_10_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_11_addr = vga_mem_ram_MPORT_11_addr_pipe_0;
  assign vga_mem_ram_MPORT_11_data = vga_mem[vga_mem_ram_MPORT_11_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_12_addr = vga_mem_ram_MPORT_12_addr_pipe_0;
  assign vga_mem_ram_MPORT_12_data = vga_mem[vga_mem_ram_MPORT_12_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_13_addr = vga_mem_ram_MPORT_13_addr_pipe_0;
  assign vga_mem_ram_MPORT_13_data = vga_mem[vga_mem_ram_MPORT_13_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_14_addr = vga_mem_ram_MPORT_14_addr_pipe_0;
  assign vga_mem_ram_MPORT_14_data = vga_mem[vga_mem_ram_MPORT_14_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_15_addr = vga_mem_ram_MPORT_15_addr_pipe_0;
  assign vga_mem_ram_MPORT_15_data = vga_mem[vga_mem_ram_MPORT_15_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_16_addr = vga_mem_ram_MPORT_16_addr_pipe_0;
  assign vga_mem_ram_MPORT_16_data = vga_mem[vga_mem_ram_MPORT_16_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_17_addr = vga_mem_ram_MPORT_17_addr_pipe_0;
  assign vga_mem_ram_MPORT_17_data = vga_mem[vga_mem_ram_MPORT_17_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_18_addr = vga_mem_ram_MPORT_18_addr_pipe_0;
  assign vga_mem_ram_MPORT_18_data = vga_mem[vga_mem_ram_MPORT_18_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_19_addr = vga_mem_ram_MPORT_19_addr_pipe_0;
  assign vga_mem_ram_MPORT_19_data = vga_mem[vga_mem_ram_MPORT_19_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_20_addr = vga_mem_ram_MPORT_20_addr_pipe_0;
  assign vga_mem_ram_MPORT_20_data = vga_mem[vga_mem_ram_MPORT_20_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_21_addr = vga_mem_ram_MPORT_21_addr_pipe_0;
  assign vga_mem_ram_MPORT_21_data = vga_mem[vga_mem_ram_MPORT_21_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_22_addr = vga_mem_ram_MPORT_22_addr_pipe_0;
  assign vga_mem_ram_MPORT_22_data = vga_mem[vga_mem_ram_MPORT_22_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_23_addr = vga_mem_ram_MPORT_23_addr_pipe_0;
  assign vga_mem_ram_MPORT_23_data = vga_mem[vga_mem_ram_MPORT_23_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_24_addr = vga_mem_ram_MPORT_24_addr_pipe_0;
  assign vga_mem_ram_MPORT_24_data = vga_mem[vga_mem_ram_MPORT_24_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_25_addr = vga_mem_ram_MPORT_25_addr_pipe_0;
  assign vga_mem_ram_MPORT_25_data = vga_mem[vga_mem_ram_MPORT_25_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_26_addr = vga_mem_ram_MPORT_26_addr_pipe_0;
  assign vga_mem_ram_MPORT_26_data = vga_mem[vga_mem_ram_MPORT_26_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_27_addr = vga_mem_ram_MPORT_27_addr_pipe_0;
  assign vga_mem_ram_MPORT_27_data = vga_mem[vga_mem_ram_MPORT_27_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_28_addr = vga_mem_ram_MPORT_28_addr_pipe_0;
  assign vga_mem_ram_MPORT_28_data = vga_mem[vga_mem_ram_MPORT_28_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_29_addr = vga_mem_ram_MPORT_29_addr_pipe_0;
  assign vga_mem_ram_MPORT_29_data = vga_mem[vga_mem_ram_MPORT_29_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_30_addr = vga_mem_ram_MPORT_30_addr_pipe_0;
  assign vga_mem_ram_MPORT_30_data = vga_mem[vga_mem_ram_MPORT_30_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_31_addr = vga_mem_ram_MPORT_31_addr_pipe_0;
  assign vga_mem_ram_MPORT_31_data = vga_mem[vga_mem_ram_MPORT_31_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_32_addr = vga_mem_ram_MPORT_32_addr_pipe_0;
  assign vga_mem_ram_MPORT_32_data = vga_mem[vga_mem_ram_MPORT_32_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_33_addr = vga_mem_ram_MPORT_33_addr_pipe_0;
  assign vga_mem_ram_MPORT_33_data = vga_mem[vga_mem_ram_MPORT_33_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_34_addr = vga_mem_ram_MPORT_34_addr_pipe_0;
  assign vga_mem_ram_MPORT_34_data = vga_mem[vga_mem_ram_MPORT_34_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_35_addr = vga_mem_ram_MPORT_35_addr_pipe_0;
  assign vga_mem_ram_MPORT_35_data = vga_mem[vga_mem_ram_MPORT_35_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_36_addr = vga_mem_ram_MPORT_36_addr_pipe_0;
  assign vga_mem_ram_MPORT_36_data = vga_mem[vga_mem_ram_MPORT_36_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_37_addr = vga_mem_ram_MPORT_37_addr_pipe_0;
  assign vga_mem_ram_MPORT_37_data = vga_mem[vga_mem_ram_MPORT_37_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_38_addr = vga_mem_ram_MPORT_38_addr_pipe_0;
  assign vga_mem_ram_MPORT_38_data = vga_mem[vga_mem_ram_MPORT_38_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_39_addr = vga_mem_ram_MPORT_39_addr_pipe_0;
  assign vga_mem_ram_MPORT_39_data = vga_mem[vga_mem_ram_MPORT_39_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_40_addr = vga_mem_ram_MPORT_40_addr_pipe_0;
  assign vga_mem_ram_MPORT_40_data = vga_mem[vga_mem_ram_MPORT_40_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_41_addr = vga_mem_ram_MPORT_41_addr_pipe_0;
  assign vga_mem_ram_MPORT_41_data = vga_mem[vga_mem_ram_MPORT_41_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_42_addr = vga_mem_ram_MPORT_42_addr_pipe_0;
  assign vga_mem_ram_MPORT_42_data = vga_mem[vga_mem_ram_MPORT_42_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_43_addr = vga_mem_ram_MPORT_43_addr_pipe_0;
  assign vga_mem_ram_MPORT_43_data = vga_mem[vga_mem_ram_MPORT_43_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_44_addr = vga_mem_ram_MPORT_44_addr_pipe_0;
  assign vga_mem_ram_MPORT_44_data = vga_mem[vga_mem_ram_MPORT_44_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_45_addr = vga_mem_ram_MPORT_45_addr_pipe_0;
  assign vga_mem_ram_MPORT_45_data = vga_mem[vga_mem_ram_MPORT_45_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_46_addr = vga_mem_ram_MPORT_46_addr_pipe_0;
  assign vga_mem_ram_MPORT_46_data = vga_mem[vga_mem_ram_MPORT_46_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_47_addr = vga_mem_ram_MPORT_47_addr_pipe_0;
  assign vga_mem_ram_MPORT_47_data = vga_mem[vga_mem_ram_MPORT_47_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_48_addr = vga_mem_ram_MPORT_48_addr_pipe_0;
  assign vga_mem_ram_MPORT_48_data = vga_mem[vga_mem_ram_MPORT_48_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_49_addr = vga_mem_ram_MPORT_49_addr_pipe_0;
  assign vga_mem_ram_MPORT_49_data = vga_mem[vga_mem_ram_MPORT_49_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_50_addr = vga_mem_ram_MPORT_50_addr_pipe_0;
  assign vga_mem_ram_MPORT_50_data = vga_mem[vga_mem_ram_MPORT_50_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_51_addr = vga_mem_ram_MPORT_51_addr_pipe_0;
  assign vga_mem_ram_MPORT_51_data = vga_mem[vga_mem_ram_MPORT_51_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_52_addr = vga_mem_ram_MPORT_52_addr_pipe_0;
  assign vga_mem_ram_MPORT_52_data = vga_mem[vga_mem_ram_MPORT_52_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_53_addr = vga_mem_ram_MPORT_53_addr_pipe_0;
  assign vga_mem_ram_MPORT_53_data = vga_mem[vga_mem_ram_MPORT_53_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_54_addr = vga_mem_ram_MPORT_54_addr_pipe_0;
  assign vga_mem_ram_MPORT_54_data = vga_mem[vga_mem_ram_MPORT_54_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_55_addr = vga_mem_ram_MPORT_55_addr_pipe_0;
  assign vga_mem_ram_MPORT_55_data = vga_mem[vga_mem_ram_MPORT_55_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_56_addr = vga_mem_ram_MPORT_56_addr_pipe_0;
  assign vga_mem_ram_MPORT_56_data = vga_mem[vga_mem_ram_MPORT_56_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_57_addr = vga_mem_ram_MPORT_57_addr_pipe_0;
  assign vga_mem_ram_MPORT_57_data = vga_mem[vga_mem_ram_MPORT_57_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_58_addr = vga_mem_ram_MPORT_58_addr_pipe_0;
  assign vga_mem_ram_MPORT_58_data = vga_mem[vga_mem_ram_MPORT_58_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_59_addr = vga_mem_ram_MPORT_59_addr_pipe_0;
  assign vga_mem_ram_MPORT_59_data = vga_mem[vga_mem_ram_MPORT_59_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_60_addr = vga_mem_ram_MPORT_60_addr_pipe_0;
  assign vga_mem_ram_MPORT_60_data = vga_mem[vga_mem_ram_MPORT_60_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_61_addr = vga_mem_ram_MPORT_61_addr_pipe_0;
  assign vga_mem_ram_MPORT_61_data = vga_mem[vga_mem_ram_MPORT_61_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_62_addr = vga_mem_ram_MPORT_62_addr_pipe_0;
  assign vga_mem_ram_MPORT_62_data = vga_mem[vga_mem_ram_MPORT_62_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_63_addr = vga_mem_ram_MPORT_63_addr_pipe_0;
  assign vga_mem_ram_MPORT_63_data = vga_mem[vga_mem_ram_MPORT_63_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_64_addr = vga_mem_ram_MPORT_64_addr_pipe_0;
  assign vga_mem_ram_MPORT_64_data = vga_mem[vga_mem_ram_MPORT_64_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_65_addr = vga_mem_ram_MPORT_65_addr_pipe_0;
  assign vga_mem_ram_MPORT_65_data = vga_mem[vga_mem_ram_MPORT_65_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_66_addr = vga_mem_ram_MPORT_66_addr_pipe_0;
  assign vga_mem_ram_MPORT_66_data = vga_mem[vga_mem_ram_MPORT_66_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_67_addr = vga_mem_ram_MPORT_67_addr_pipe_0;
  assign vga_mem_ram_MPORT_67_data = vga_mem[vga_mem_ram_MPORT_67_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_68_addr = vga_mem_ram_MPORT_68_addr_pipe_0;
  assign vga_mem_ram_MPORT_68_data = vga_mem[vga_mem_ram_MPORT_68_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_69_addr = vga_mem_ram_MPORT_69_addr_pipe_0;
  assign vga_mem_ram_MPORT_69_data = vga_mem[vga_mem_ram_MPORT_69_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_70_addr = vga_mem_ram_MPORT_70_addr_pipe_0;
  assign vga_mem_ram_MPORT_70_data = vga_mem[vga_mem_ram_MPORT_70_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_71_addr = vga_mem_ram_MPORT_71_addr_pipe_0;
  assign vga_mem_ram_MPORT_71_data = vga_mem[vga_mem_ram_MPORT_71_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_72_addr = vga_mem_ram_MPORT_72_addr_pipe_0;
  assign vga_mem_ram_MPORT_72_data = vga_mem[vga_mem_ram_MPORT_72_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_73_addr = vga_mem_ram_MPORT_73_addr_pipe_0;
  assign vga_mem_ram_MPORT_73_data = vga_mem[vga_mem_ram_MPORT_73_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_74_addr = vga_mem_ram_MPORT_74_addr_pipe_0;
  assign vga_mem_ram_MPORT_74_data = vga_mem[vga_mem_ram_MPORT_74_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_75_addr = vga_mem_ram_MPORT_75_addr_pipe_0;
  assign vga_mem_ram_MPORT_75_data = vga_mem[vga_mem_ram_MPORT_75_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_76_addr = vga_mem_ram_MPORT_76_addr_pipe_0;
  assign vga_mem_ram_MPORT_76_data = vga_mem[vga_mem_ram_MPORT_76_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_77_addr = vga_mem_ram_MPORT_77_addr_pipe_0;
  assign vga_mem_ram_MPORT_77_data = vga_mem[vga_mem_ram_MPORT_77_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_78_addr = vga_mem_ram_MPORT_78_addr_pipe_0;
  assign vga_mem_ram_MPORT_78_data = vga_mem[vga_mem_ram_MPORT_78_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_79_addr = vga_mem_ram_MPORT_79_addr_pipe_0;
  assign vga_mem_ram_MPORT_79_data = vga_mem[vga_mem_ram_MPORT_79_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_80_addr = vga_mem_ram_MPORT_80_addr_pipe_0;
  assign vga_mem_ram_MPORT_80_data = vga_mem[vga_mem_ram_MPORT_80_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_81_addr = vga_mem_ram_MPORT_81_addr_pipe_0;
  assign vga_mem_ram_MPORT_81_data = vga_mem[vga_mem_ram_MPORT_81_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_82_addr = vga_mem_ram_MPORT_82_addr_pipe_0;
  assign vga_mem_ram_MPORT_82_data = vga_mem[vga_mem_ram_MPORT_82_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_83_addr = vga_mem_ram_MPORT_83_addr_pipe_0;
  assign vga_mem_ram_MPORT_83_data = vga_mem[vga_mem_ram_MPORT_83_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_84_addr = vga_mem_ram_MPORT_84_addr_pipe_0;
  assign vga_mem_ram_MPORT_84_data = vga_mem[vga_mem_ram_MPORT_84_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_85_addr = vga_mem_ram_MPORT_85_addr_pipe_0;
  assign vga_mem_ram_MPORT_85_data = vga_mem[vga_mem_ram_MPORT_85_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_86_addr = vga_mem_ram_MPORT_86_addr_pipe_0;
  assign vga_mem_ram_MPORT_86_data = vga_mem[vga_mem_ram_MPORT_86_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_87_addr = vga_mem_ram_MPORT_87_addr_pipe_0;
  assign vga_mem_ram_MPORT_87_data = vga_mem[vga_mem_ram_MPORT_87_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_88_addr = vga_mem_ram_MPORT_88_addr_pipe_0;
  assign vga_mem_ram_MPORT_88_data = vga_mem[vga_mem_ram_MPORT_88_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_89_addr = vga_mem_ram_MPORT_89_addr_pipe_0;
  assign vga_mem_ram_MPORT_89_data = vga_mem[vga_mem_ram_MPORT_89_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_90_addr = vga_mem_ram_MPORT_90_addr_pipe_0;
  assign vga_mem_ram_MPORT_90_data = vga_mem[vga_mem_ram_MPORT_90_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_91_addr = vga_mem_ram_MPORT_91_addr_pipe_0;
  assign vga_mem_ram_MPORT_91_data = vga_mem[vga_mem_ram_MPORT_91_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_92_addr = vga_mem_ram_MPORT_92_addr_pipe_0;
  assign vga_mem_ram_MPORT_92_data = vga_mem[vga_mem_ram_MPORT_92_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_93_addr = vga_mem_ram_MPORT_93_addr_pipe_0;
  assign vga_mem_ram_MPORT_93_data = vga_mem[vga_mem_ram_MPORT_93_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_94_addr = vga_mem_ram_MPORT_94_addr_pipe_0;
  assign vga_mem_ram_MPORT_94_data = vga_mem[vga_mem_ram_MPORT_94_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_95_addr = vga_mem_ram_MPORT_95_addr_pipe_0;
  assign vga_mem_ram_MPORT_95_data = vga_mem[vga_mem_ram_MPORT_95_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_96_addr = vga_mem_ram_MPORT_96_addr_pipe_0;
  assign vga_mem_ram_MPORT_96_data = vga_mem[vga_mem_ram_MPORT_96_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_97_addr = vga_mem_ram_MPORT_97_addr_pipe_0;
  assign vga_mem_ram_MPORT_97_data = vga_mem[vga_mem_ram_MPORT_97_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_98_addr = vga_mem_ram_MPORT_98_addr_pipe_0;
  assign vga_mem_ram_MPORT_98_data = vga_mem[vga_mem_ram_MPORT_98_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_99_addr = vga_mem_ram_MPORT_99_addr_pipe_0;
  assign vga_mem_ram_MPORT_99_data = vga_mem[vga_mem_ram_MPORT_99_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_100_addr = vga_mem_ram_MPORT_100_addr_pipe_0;
  assign vga_mem_ram_MPORT_100_data = vga_mem[vga_mem_ram_MPORT_100_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_101_addr = vga_mem_ram_MPORT_101_addr_pipe_0;
  assign vga_mem_ram_MPORT_101_data = vga_mem[vga_mem_ram_MPORT_101_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_102_addr = vga_mem_ram_MPORT_102_addr_pipe_0;
  assign vga_mem_ram_MPORT_102_data = vga_mem[vga_mem_ram_MPORT_102_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_103_addr = vga_mem_ram_MPORT_103_addr_pipe_0;
  assign vga_mem_ram_MPORT_103_data = vga_mem[vga_mem_ram_MPORT_103_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_104_addr = vga_mem_ram_MPORT_104_addr_pipe_0;
  assign vga_mem_ram_MPORT_104_data = vga_mem[vga_mem_ram_MPORT_104_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_105_addr = vga_mem_ram_MPORT_105_addr_pipe_0;
  assign vga_mem_ram_MPORT_105_data = vga_mem[vga_mem_ram_MPORT_105_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_106_addr = vga_mem_ram_MPORT_106_addr_pipe_0;
  assign vga_mem_ram_MPORT_106_data = vga_mem[vga_mem_ram_MPORT_106_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_107_addr = vga_mem_ram_MPORT_107_addr_pipe_0;
  assign vga_mem_ram_MPORT_107_data = vga_mem[vga_mem_ram_MPORT_107_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_108_addr = vga_mem_ram_MPORT_108_addr_pipe_0;
  assign vga_mem_ram_MPORT_108_data = vga_mem[vga_mem_ram_MPORT_108_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_109_addr = vga_mem_ram_MPORT_109_addr_pipe_0;
  assign vga_mem_ram_MPORT_109_data = vga_mem[vga_mem_ram_MPORT_109_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_110_addr = vga_mem_ram_MPORT_110_addr_pipe_0;
  assign vga_mem_ram_MPORT_110_data = vga_mem[vga_mem_ram_MPORT_110_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_111_addr = vga_mem_ram_MPORT_111_addr_pipe_0;
  assign vga_mem_ram_MPORT_111_data = vga_mem[vga_mem_ram_MPORT_111_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_112_addr = vga_mem_ram_MPORT_112_addr_pipe_0;
  assign vga_mem_ram_MPORT_112_data = vga_mem[vga_mem_ram_MPORT_112_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_113_addr = vga_mem_ram_MPORT_113_addr_pipe_0;
  assign vga_mem_ram_MPORT_113_data = vga_mem[vga_mem_ram_MPORT_113_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_114_addr = vga_mem_ram_MPORT_114_addr_pipe_0;
  assign vga_mem_ram_MPORT_114_data = vga_mem[vga_mem_ram_MPORT_114_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_115_addr = vga_mem_ram_MPORT_115_addr_pipe_0;
  assign vga_mem_ram_MPORT_115_data = vga_mem[vga_mem_ram_MPORT_115_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_116_addr = vga_mem_ram_MPORT_116_addr_pipe_0;
  assign vga_mem_ram_MPORT_116_data = vga_mem[vga_mem_ram_MPORT_116_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_117_addr = vga_mem_ram_MPORT_117_addr_pipe_0;
  assign vga_mem_ram_MPORT_117_data = vga_mem[vga_mem_ram_MPORT_117_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_118_addr = vga_mem_ram_MPORT_118_addr_pipe_0;
  assign vga_mem_ram_MPORT_118_data = vga_mem[vga_mem_ram_MPORT_118_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_119_addr = vga_mem_ram_MPORT_119_addr_pipe_0;
  assign vga_mem_ram_MPORT_119_data = vga_mem[vga_mem_ram_MPORT_119_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_120_addr = vga_mem_ram_MPORT_120_addr_pipe_0;
  assign vga_mem_ram_MPORT_120_data = vga_mem[vga_mem_ram_MPORT_120_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_121_addr = vga_mem_ram_MPORT_121_addr_pipe_0;
  assign vga_mem_ram_MPORT_121_data = vga_mem[vga_mem_ram_MPORT_121_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_122_addr = vga_mem_ram_MPORT_122_addr_pipe_0;
  assign vga_mem_ram_MPORT_122_data = vga_mem[vga_mem_ram_MPORT_122_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_123_addr = vga_mem_ram_MPORT_123_addr_pipe_0;
  assign vga_mem_ram_MPORT_123_data = vga_mem[vga_mem_ram_MPORT_123_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_124_addr = vga_mem_ram_MPORT_124_addr_pipe_0;
  assign vga_mem_ram_MPORT_124_data = vga_mem[vga_mem_ram_MPORT_124_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_125_addr = vga_mem_ram_MPORT_125_addr_pipe_0;
  assign vga_mem_ram_MPORT_125_data = vga_mem[vga_mem_ram_MPORT_125_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_126_addr = vga_mem_ram_MPORT_126_addr_pipe_0;
  assign vga_mem_ram_MPORT_126_data = vga_mem[vga_mem_ram_MPORT_126_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_127_addr = vga_mem_ram_MPORT_127_addr_pipe_0;
  assign vga_mem_ram_MPORT_127_data = vga_mem[vga_mem_ram_MPORT_127_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_128_addr = vga_mem_ram_MPORT_128_addr_pipe_0;
  assign vga_mem_ram_MPORT_128_data = vga_mem[vga_mem_ram_MPORT_128_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_129_addr = vga_mem_ram_MPORT_129_addr_pipe_0;
  assign vga_mem_ram_MPORT_129_data = vga_mem[vga_mem_ram_MPORT_129_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_130_addr = vga_mem_ram_MPORT_130_addr_pipe_0;
  assign vga_mem_ram_MPORT_130_data = vga_mem[vga_mem_ram_MPORT_130_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_131_addr = vga_mem_ram_MPORT_131_addr_pipe_0;
  assign vga_mem_ram_MPORT_131_data = vga_mem[vga_mem_ram_MPORT_131_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_132_addr = vga_mem_ram_MPORT_132_addr_pipe_0;
  assign vga_mem_ram_MPORT_132_data = vga_mem[vga_mem_ram_MPORT_132_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_133_addr = vga_mem_ram_MPORT_133_addr_pipe_0;
  assign vga_mem_ram_MPORT_133_data = vga_mem[vga_mem_ram_MPORT_133_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_134_addr = vga_mem_ram_MPORT_134_addr_pipe_0;
  assign vga_mem_ram_MPORT_134_data = vga_mem[vga_mem_ram_MPORT_134_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_135_addr = vga_mem_ram_MPORT_135_addr_pipe_0;
  assign vga_mem_ram_MPORT_135_data = vga_mem[vga_mem_ram_MPORT_135_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_136_addr = vga_mem_ram_MPORT_136_addr_pipe_0;
  assign vga_mem_ram_MPORT_136_data = vga_mem[vga_mem_ram_MPORT_136_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_137_addr = vga_mem_ram_MPORT_137_addr_pipe_0;
  assign vga_mem_ram_MPORT_137_data = vga_mem[vga_mem_ram_MPORT_137_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_138_addr = vga_mem_ram_MPORT_138_addr_pipe_0;
  assign vga_mem_ram_MPORT_138_data = vga_mem[vga_mem_ram_MPORT_138_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_139_addr = vga_mem_ram_MPORT_139_addr_pipe_0;
  assign vga_mem_ram_MPORT_139_data = vga_mem[vga_mem_ram_MPORT_139_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_140_addr = vga_mem_ram_MPORT_140_addr_pipe_0;
  assign vga_mem_ram_MPORT_140_data = vga_mem[vga_mem_ram_MPORT_140_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_141_addr = vga_mem_ram_MPORT_141_addr_pipe_0;
  assign vga_mem_ram_MPORT_141_data = vga_mem[vga_mem_ram_MPORT_141_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_142_addr = vga_mem_ram_MPORT_142_addr_pipe_0;
  assign vga_mem_ram_MPORT_142_data = vga_mem[vga_mem_ram_MPORT_142_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_143_addr = vga_mem_ram_MPORT_143_addr_pipe_0;
  assign vga_mem_ram_MPORT_143_data = vga_mem[vga_mem_ram_MPORT_143_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_144_addr = vga_mem_ram_MPORT_144_addr_pipe_0;
  assign vga_mem_ram_MPORT_144_data = vga_mem[vga_mem_ram_MPORT_144_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_145_addr = vga_mem_ram_MPORT_145_addr_pipe_0;
  assign vga_mem_ram_MPORT_145_data = vga_mem[vga_mem_ram_MPORT_145_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_146_addr = vga_mem_ram_MPORT_146_addr_pipe_0;
  assign vga_mem_ram_MPORT_146_data = vga_mem[vga_mem_ram_MPORT_146_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_147_addr = vga_mem_ram_MPORT_147_addr_pipe_0;
  assign vga_mem_ram_MPORT_147_data = vga_mem[vga_mem_ram_MPORT_147_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_148_addr = vga_mem_ram_MPORT_148_addr_pipe_0;
  assign vga_mem_ram_MPORT_148_data = vga_mem[vga_mem_ram_MPORT_148_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_149_addr = vga_mem_ram_MPORT_149_addr_pipe_0;
  assign vga_mem_ram_MPORT_149_data = vga_mem[vga_mem_ram_MPORT_149_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_150_addr = vga_mem_ram_MPORT_150_addr_pipe_0;
  assign vga_mem_ram_MPORT_150_data = vga_mem[vga_mem_ram_MPORT_150_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_151_addr = vga_mem_ram_MPORT_151_addr_pipe_0;
  assign vga_mem_ram_MPORT_151_data = vga_mem[vga_mem_ram_MPORT_151_addr]; // @[vga.scala 51:30]
  assign vga_mem_ram_MPORT_152_addr = vga_mem_ram_MPORT_152_addr_pipe_0;
  assign vga_mem_ram_MPORT_152_data = vga_mem[vga_mem_ram_MPORT_152_addr]; // @[vga.scala 51:30]
  assign io_vga_data = io_ready == 2'h1 ? rdwrPort : 24'h1; // @[vga.scala 64:25 vga.scala 75:16 vga.scala 63:16]
  always @(posedge clock) begin
    vga_mem_ram_MPORT_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_1_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_1_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_2_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_2_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_3_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_3_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_4_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_4_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_5_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_5_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_6_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_6_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_7_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_7_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_8_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_8_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_9_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_9_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_10_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_10_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_11_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_11_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_12_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_12_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_13_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_13_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_14_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_14_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_15_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_15_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_16_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_16_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_17_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_17_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_18_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_18_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_19_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_19_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_20_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_20_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_21_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_21_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_22_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_22_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_23_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_23_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_24_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_24_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_25_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_25_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_26_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_26_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_27_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_27_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_28_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_28_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_29_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_29_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_30_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_30_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_31_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_31_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_32_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_32_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_33_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_33_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_34_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_34_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_35_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_35_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_36_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_36_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_37_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_37_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_38_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_38_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_39_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_39_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_40_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_40_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_41_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_41_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_42_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_42_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_43_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_43_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_44_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_44_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_45_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_45_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_46_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_46_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_47_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_47_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_48_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_48_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_49_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_49_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_50_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_50_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_51_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_51_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_52_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_52_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_53_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_53_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_54_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_54_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_55_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_55_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_56_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_56_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_57_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_57_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_58_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_58_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_59_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_59_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_60_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_60_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_61_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_61_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_62_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_62_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_63_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_63_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_64_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_64_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_65_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_65_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_66_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_66_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_67_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_67_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_68_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_68_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_69_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_69_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_70_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_70_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_71_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_71_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_72_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_72_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_73_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_73_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_74_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_74_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_75_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_75_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_76_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_76_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_77_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_77_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_78_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_78_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_79_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_79_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_80_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_80_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_81_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_81_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_82_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_82_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_83_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_83_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_84_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_84_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_85_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_85_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_86_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_86_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_87_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_87_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_88_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_88_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_89_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_89_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_90_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_90_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_91_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_91_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_92_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_92_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_93_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_93_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_94_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_94_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_95_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_95_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_96_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_96_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_97_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_97_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_98_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_98_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_99_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_99_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_100_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_100_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_101_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_101_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_102_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_102_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_103_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_103_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_104_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_104_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_105_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_105_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_106_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_106_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_107_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_107_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_108_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_108_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_109_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_109_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_110_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_110_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_111_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_111_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_112_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_112_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_113_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_113_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_114_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_114_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_115_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_115_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_116_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_116_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_117_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_117_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_118_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_118_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_119_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_119_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_120_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_120_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_121_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_121_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_122_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_122_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_123_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_123_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_124_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_124_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_125_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_125_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_126_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_126_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_127_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_127_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_128_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_128_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_129_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_129_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_130_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_130_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_131_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_131_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_132_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_132_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_133_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_133_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_134_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_134_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_135_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_135_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_136_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_136_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_137_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_137_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_138_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_138_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_139_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_139_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_140_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_140_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_141_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_141_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_142_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_142_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_143_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_143_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_144_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_144_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_145_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_145_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_146_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_146_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_147_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_147_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_148_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_148_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_149_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_149_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_150_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_150_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_151_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_151_addr_pipe_0 <= _ram_T_3[11:0];
    end
    vga_mem_ram_MPORT_152_en_pipe_0 <= io_ready == 2'h1;
    if (io_ready == 2'h1) begin
      vga_mem_ram_MPORT_152_addr_pipe_0 <= _ram_T_3[11:0];
    end
    if (reset) begin // @[vga.scala 46:27]
      rdwrPort <= 24'h0; // @[vga.scala 46:27]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (_T_58[0]) begin // @[vga.scala 69:46]
        rdwrPort <= 24'hffffff; // @[vga.scala 70:17]
      end else begin
        rdwrPort <= 24'h0; // @[vga.scala 72:17]
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_0 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'h0 == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_0 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'h0 == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_0 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_0 <= _GEN_467;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_1 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'h1 == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_1 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'h1 == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_1 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_1 <= _GEN_468;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_2 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'h2 == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_2 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'h2 == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_2 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_2 <= _GEN_469;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_3 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'h3 == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_3 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'h3 == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_3 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_3 <= _GEN_470;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_4 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'h4 == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_4 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'h4 == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_4 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_4 <= _GEN_471;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_5 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'h5 == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_5 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'h5 == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_5 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_5 <= _GEN_472;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_6 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'h6 == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_6 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'h6 == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_6 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_6 <= _GEN_473;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_7 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'h7 == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_7 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'h7 == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_7 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_7 <= _GEN_474;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_8 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'h8 == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_8 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'h8 == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_8 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_8 <= _GEN_475;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_9 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'h9 == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_9 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'h9 == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_9 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_9 <= _GEN_476;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_10 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'ha == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_10 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'ha == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_10 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_10 <= _GEN_477;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_11 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'hb == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_11 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'hb == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_11 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_11 <= _GEN_478;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_12 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'hc == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_12 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'hc == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_12 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_12 <= _GEN_479;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_13 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'hd == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_13 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'hd == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_13 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_13 <= _GEN_480;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_14 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'he == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_14 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'he == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_14 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_14 <= _GEN_481;
      end
    end
    if (reset) begin // @[vga.scala 47:20]
      ram_15 <= 288'h0; // @[vga.scala 47:20]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      if (4'hf == _h_T_1[3:0]) begin // @[vga.scala 66:24]
        ram_15 <= _ram_T_458[287:0]; // @[vga.scala 66:24]
      end else if (4'hf == _T_52[3:0]) begin // @[vga.scala 66:24]
        ram_15 <= _ram_T_431[287:0]; // @[vga.scala 66:24]
      end else begin
        ram_15 <= _GEN_482;
      end
    end
    if (reset) begin // @[vga.scala 48:18]
      h <= 10'h0; // @[vga.scala 48:18]
    end else if (h >= 10'h10 & v == 9'h120) begin // @[vga.scala 55:33]
      h <= 10'h1; // @[vga.scala 56:10]
    end else if (_T_1) begin // @[vga.scala 57:26]
      h <= _h_T_1; // @[vga.scala 58:10]
    end
    if (reset) begin // @[vga.scala 49:18]
      v <= 9'h0; // @[vga.scala 49:18]
    end else if (io_ready == 2'h1) begin // @[vga.scala 64:25]
      v <= _v_T_1; // @[vga.scala 68:10]
    end else if (_T_1) begin // @[vga.scala 60:20]
      v <= 9'h0; // @[vga.scala 61:10]
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
  integer initvar;
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
  vga_mem_ram_MPORT_en_pipe_0 = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  vga_mem_ram_MPORT_addr_pipe_0 = _RAND_1[11:0];
  _RAND_2 = {1{`RANDOM}};
  vga_mem_ram_MPORT_1_en_pipe_0 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  vga_mem_ram_MPORT_1_addr_pipe_0 = _RAND_3[11:0];
  _RAND_4 = {1{`RANDOM}};
  vga_mem_ram_MPORT_2_en_pipe_0 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  vga_mem_ram_MPORT_2_addr_pipe_0 = _RAND_5[11:0];
  _RAND_6 = {1{`RANDOM}};
  vga_mem_ram_MPORT_3_en_pipe_0 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  vga_mem_ram_MPORT_3_addr_pipe_0 = _RAND_7[11:0];
  _RAND_8 = {1{`RANDOM}};
  vga_mem_ram_MPORT_4_en_pipe_0 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  vga_mem_ram_MPORT_4_addr_pipe_0 = _RAND_9[11:0];
  _RAND_10 = {1{`RANDOM}};
  vga_mem_ram_MPORT_5_en_pipe_0 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  vga_mem_ram_MPORT_5_addr_pipe_0 = _RAND_11[11:0];
  _RAND_12 = {1{`RANDOM}};
  vga_mem_ram_MPORT_6_en_pipe_0 = _RAND_12[0:0];
  _RAND_13 = {1{`RANDOM}};
  vga_mem_ram_MPORT_6_addr_pipe_0 = _RAND_13[11:0];
  _RAND_14 = {1{`RANDOM}};
  vga_mem_ram_MPORT_7_en_pipe_0 = _RAND_14[0:0];
  _RAND_15 = {1{`RANDOM}};
  vga_mem_ram_MPORT_7_addr_pipe_0 = _RAND_15[11:0];
  _RAND_16 = {1{`RANDOM}};
  vga_mem_ram_MPORT_8_en_pipe_0 = _RAND_16[0:0];
  _RAND_17 = {1{`RANDOM}};
  vga_mem_ram_MPORT_8_addr_pipe_0 = _RAND_17[11:0];
  _RAND_18 = {1{`RANDOM}};
  vga_mem_ram_MPORT_9_en_pipe_0 = _RAND_18[0:0];
  _RAND_19 = {1{`RANDOM}};
  vga_mem_ram_MPORT_9_addr_pipe_0 = _RAND_19[11:0];
  _RAND_20 = {1{`RANDOM}};
  vga_mem_ram_MPORT_10_en_pipe_0 = _RAND_20[0:0];
  _RAND_21 = {1{`RANDOM}};
  vga_mem_ram_MPORT_10_addr_pipe_0 = _RAND_21[11:0];
  _RAND_22 = {1{`RANDOM}};
  vga_mem_ram_MPORT_11_en_pipe_0 = _RAND_22[0:0];
  _RAND_23 = {1{`RANDOM}};
  vga_mem_ram_MPORT_11_addr_pipe_0 = _RAND_23[11:0];
  _RAND_24 = {1{`RANDOM}};
  vga_mem_ram_MPORT_12_en_pipe_0 = _RAND_24[0:0];
  _RAND_25 = {1{`RANDOM}};
  vga_mem_ram_MPORT_12_addr_pipe_0 = _RAND_25[11:0];
  _RAND_26 = {1{`RANDOM}};
  vga_mem_ram_MPORT_13_en_pipe_0 = _RAND_26[0:0];
  _RAND_27 = {1{`RANDOM}};
  vga_mem_ram_MPORT_13_addr_pipe_0 = _RAND_27[11:0];
  _RAND_28 = {1{`RANDOM}};
  vga_mem_ram_MPORT_14_en_pipe_0 = _RAND_28[0:0];
  _RAND_29 = {1{`RANDOM}};
  vga_mem_ram_MPORT_14_addr_pipe_0 = _RAND_29[11:0];
  _RAND_30 = {1{`RANDOM}};
  vga_mem_ram_MPORT_15_en_pipe_0 = _RAND_30[0:0];
  _RAND_31 = {1{`RANDOM}};
  vga_mem_ram_MPORT_15_addr_pipe_0 = _RAND_31[11:0];
  _RAND_32 = {1{`RANDOM}};
  vga_mem_ram_MPORT_16_en_pipe_0 = _RAND_32[0:0];
  _RAND_33 = {1{`RANDOM}};
  vga_mem_ram_MPORT_16_addr_pipe_0 = _RAND_33[11:0];
  _RAND_34 = {1{`RANDOM}};
  vga_mem_ram_MPORT_17_en_pipe_0 = _RAND_34[0:0];
  _RAND_35 = {1{`RANDOM}};
  vga_mem_ram_MPORT_17_addr_pipe_0 = _RAND_35[11:0];
  _RAND_36 = {1{`RANDOM}};
  vga_mem_ram_MPORT_18_en_pipe_0 = _RAND_36[0:0];
  _RAND_37 = {1{`RANDOM}};
  vga_mem_ram_MPORT_18_addr_pipe_0 = _RAND_37[11:0];
  _RAND_38 = {1{`RANDOM}};
  vga_mem_ram_MPORT_19_en_pipe_0 = _RAND_38[0:0];
  _RAND_39 = {1{`RANDOM}};
  vga_mem_ram_MPORT_19_addr_pipe_0 = _RAND_39[11:0];
  _RAND_40 = {1{`RANDOM}};
  vga_mem_ram_MPORT_20_en_pipe_0 = _RAND_40[0:0];
  _RAND_41 = {1{`RANDOM}};
  vga_mem_ram_MPORT_20_addr_pipe_0 = _RAND_41[11:0];
  _RAND_42 = {1{`RANDOM}};
  vga_mem_ram_MPORT_21_en_pipe_0 = _RAND_42[0:0];
  _RAND_43 = {1{`RANDOM}};
  vga_mem_ram_MPORT_21_addr_pipe_0 = _RAND_43[11:0];
  _RAND_44 = {1{`RANDOM}};
  vga_mem_ram_MPORT_22_en_pipe_0 = _RAND_44[0:0];
  _RAND_45 = {1{`RANDOM}};
  vga_mem_ram_MPORT_22_addr_pipe_0 = _RAND_45[11:0];
  _RAND_46 = {1{`RANDOM}};
  vga_mem_ram_MPORT_23_en_pipe_0 = _RAND_46[0:0];
  _RAND_47 = {1{`RANDOM}};
  vga_mem_ram_MPORT_23_addr_pipe_0 = _RAND_47[11:0];
  _RAND_48 = {1{`RANDOM}};
  vga_mem_ram_MPORT_24_en_pipe_0 = _RAND_48[0:0];
  _RAND_49 = {1{`RANDOM}};
  vga_mem_ram_MPORT_24_addr_pipe_0 = _RAND_49[11:0];
  _RAND_50 = {1{`RANDOM}};
  vga_mem_ram_MPORT_25_en_pipe_0 = _RAND_50[0:0];
  _RAND_51 = {1{`RANDOM}};
  vga_mem_ram_MPORT_25_addr_pipe_0 = _RAND_51[11:0];
  _RAND_52 = {1{`RANDOM}};
  vga_mem_ram_MPORT_26_en_pipe_0 = _RAND_52[0:0];
  _RAND_53 = {1{`RANDOM}};
  vga_mem_ram_MPORT_26_addr_pipe_0 = _RAND_53[11:0];
  _RAND_54 = {1{`RANDOM}};
  vga_mem_ram_MPORT_27_en_pipe_0 = _RAND_54[0:0];
  _RAND_55 = {1{`RANDOM}};
  vga_mem_ram_MPORT_27_addr_pipe_0 = _RAND_55[11:0];
  _RAND_56 = {1{`RANDOM}};
  vga_mem_ram_MPORT_28_en_pipe_0 = _RAND_56[0:0];
  _RAND_57 = {1{`RANDOM}};
  vga_mem_ram_MPORT_28_addr_pipe_0 = _RAND_57[11:0];
  _RAND_58 = {1{`RANDOM}};
  vga_mem_ram_MPORT_29_en_pipe_0 = _RAND_58[0:0];
  _RAND_59 = {1{`RANDOM}};
  vga_mem_ram_MPORT_29_addr_pipe_0 = _RAND_59[11:0];
  _RAND_60 = {1{`RANDOM}};
  vga_mem_ram_MPORT_30_en_pipe_0 = _RAND_60[0:0];
  _RAND_61 = {1{`RANDOM}};
  vga_mem_ram_MPORT_30_addr_pipe_0 = _RAND_61[11:0];
  _RAND_62 = {1{`RANDOM}};
  vga_mem_ram_MPORT_31_en_pipe_0 = _RAND_62[0:0];
  _RAND_63 = {1{`RANDOM}};
  vga_mem_ram_MPORT_31_addr_pipe_0 = _RAND_63[11:0];
  _RAND_64 = {1{`RANDOM}};
  vga_mem_ram_MPORT_32_en_pipe_0 = _RAND_64[0:0];
  _RAND_65 = {1{`RANDOM}};
  vga_mem_ram_MPORT_32_addr_pipe_0 = _RAND_65[11:0];
  _RAND_66 = {1{`RANDOM}};
  vga_mem_ram_MPORT_33_en_pipe_0 = _RAND_66[0:0];
  _RAND_67 = {1{`RANDOM}};
  vga_mem_ram_MPORT_33_addr_pipe_0 = _RAND_67[11:0];
  _RAND_68 = {1{`RANDOM}};
  vga_mem_ram_MPORT_34_en_pipe_0 = _RAND_68[0:0];
  _RAND_69 = {1{`RANDOM}};
  vga_mem_ram_MPORT_34_addr_pipe_0 = _RAND_69[11:0];
  _RAND_70 = {1{`RANDOM}};
  vga_mem_ram_MPORT_35_en_pipe_0 = _RAND_70[0:0];
  _RAND_71 = {1{`RANDOM}};
  vga_mem_ram_MPORT_35_addr_pipe_0 = _RAND_71[11:0];
  _RAND_72 = {1{`RANDOM}};
  vga_mem_ram_MPORT_36_en_pipe_0 = _RAND_72[0:0];
  _RAND_73 = {1{`RANDOM}};
  vga_mem_ram_MPORT_36_addr_pipe_0 = _RAND_73[11:0];
  _RAND_74 = {1{`RANDOM}};
  vga_mem_ram_MPORT_37_en_pipe_0 = _RAND_74[0:0];
  _RAND_75 = {1{`RANDOM}};
  vga_mem_ram_MPORT_37_addr_pipe_0 = _RAND_75[11:0];
  _RAND_76 = {1{`RANDOM}};
  vga_mem_ram_MPORT_38_en_pipe_0 = _RAND_76[0:0];
  _RAND_77 = {1{`RANDOM}};
  vga_mem_ram_MPORT_38_addr_pipe_0 = _RAND_77[11:0];
  _RAND_78 = {1{`RANDOM}};
  vga_mem_ram_MPORT_39_en_pipe_0 = _RAND_78[0:0];
  _RAND_79 = {1{`RANDOM}};
  vga_mem_ram_MPORT_39_addr_pipe_0 = _RAND_79[11:0];
  _RAND_80 = {1{`RANDOM}};
  vga_mem_ram_MPORT_40_en_pipe_0 = _RAND_80[0:0];
  _RAND_81 = {1{`RANDOM}};
  vga_mem_ram_MPORT_40_addr_pipe_0 = _RAND_81[11:0];
  _RAND_82 = {1{`RANDOM}};
  vga_mem_ram_MPORT_41_en_pipe_0 = _RAND_82[0:0];
  _RAND_83 = {1{`RANDOM}};
  vga_mem_ram_MPORT_41_addr_pipe_0 = _RAND_83[11:0];
  _RAND_84 = {1{`RANDOM}};
  vga_mem_ram_MPORT_42_en_pipe_0 = _RAND_84[0:0];
  _RAND_85 = {1{`RANDOM}};
  vga_mem_ram_MPORT_42_addr_pipe_0 = _RAND_85[11:0];
  _RAND_86 = {1{`RANDOM}};
  vga_mem_ram_MPORT_43_en_pipe_0 = _RAND_86[0:0];
  _RAND_87 = {1{`RANDOM}};
  vga_mem_ram_MPORT_43_addr_pipe_0 = _RAND_87[11:0];
  _RAND_88 = {1{`RANDOM}};
  vga_mem_ram_MPORT_44_en_pipe_0 = _RAND_88[0:0];
  _RAND_89 = {1{`RANDOM}};
  vga_mem_ram_MPORT_44_addr_pipe_0 = _RAND_89[11:0];
  _RAND_90 = {1{`RANDOM}};
  vga_mem_ram_MPORT_45_en_pipe_0 = _RAND_90[0:0];
  _RAND_91 = {1{`RANDOM}};
  vga_mem_ram_MPORT_45_addr_pipe_0 = _RAND_91[11:0];
  _RAND_92 = {1{`RANDOM}};
  vga_mem_ram_MPORT_46_en_pipe_0 = _RAND_92[0:0];
  _RAND_93 = {1{`RANDOM}};
  vga_mem_ram_MPORT_46_addr_pipe_0 = _RAND_93[11:0];
  _RAND_94 = {1{`RANDOM}};
  vga_mem_ram_MPORT_47_en_pipe_0 = _RAND_94[0:0];
  _RAND_95 = {1{`RANDOM}};
  vga_mem_ram_MPORT_47_addr_pipe_0 = _RAND_95[11:0];
  _RAND_96 = {1{`RANDOM}};
  vga_mem_ram_MPORT_48_en_pipe_0 = _RAND_96[0:0];
  _RAND_97 = {1{`RANDOM}};
  vga_mem_ram_MPORT_48_addr_pipe_0 = _RAND_97[11:0];
  _RAND_98 = {1{`RANDOM}};
  vga_mem_ram_MPORT_49_en_pipe_0 = _RAND_98[0:0];
  _RAND_99 = {1{`RANDOM}};
  vga_mem_ram_MPORT_49_addr_pipe_0 = _RAND_99[11:0];
  _RAND_100 = {1{`RANDOM}};
  vga_mem_ram_MPORT_50_en_pipe_0 = _RAND_100[0:0];
  _RAND_101 = {1{`RANDOM}};
  vga_mem_ram_MPORT_50_addr_pipe_0 = _RAND_101[11:0];
  _RAND_102 = {1{`RANDOM}};
  vga_mem_ram_MPORT_51_en_pipe_0 = _RAND_102[0:0];
  _RAND_103 = {1{`RANDOM}};
  vga_mem_ram_MPORT_51_addr_pipe_0 = _RAND_103[11:0];
  _RAND_104 = {1{`RANDOM}};
  vga_mem_ram_MPORT_52_en_pipe_0 = _RAND_104[0:0];
  _RAND_105 = {1{`RANDOM}};
  vga_mem_ram_MPORT_52_addr_pipe_0 = _RAND_105[11:0];
  _RAND_106 = {1{`RANDOM}};
  vga_mem_ram_MPORT_53_en_pipe_0 = _RAND_106[0:0];
  _RAND_107 = {1{`RANDOM}};
  vga_mem_ram_MPORT_53_addr_pipe_0 = _RAND_107[11:0];
  _RAND_108 = {1{`RANDOM}};
  vga_mem_ram_MPORT_54_en_pipe_0 = _RAND_108[0:0];
  _RAND_109 = {1{`RANDOM}};
  vga_mem_ram_MPORT_54_addr_pipe_0 = _RAND_109[11:0];
  _RAND_110 = {1{`RANDOM}};
  vga_mem_ram_MPORT_55_en_pipe_0 = _RAND_110[0:0];
  _RAND_111 = {1{`RANDOM}};
  vga_mem_ram_MPORT_55_addr_pipe_0 = _RAND_111[11:0];
  _RAND_112 = {1{`RANDOM}};
  vga_mem_ram_MPORT_56_en_pipe_0 = _RAND_112[0:0];
  _RAND_113 = {1{`RANDOM}};
  vga_mem_ram_MPORT_56_addr_pipe_0 = _RAND_113[11:0];
  _RAND_114 = {1{`RANDOM}};
  vga_mem_ram_MPORT_57_en_pipe_0 = _RAND_114[0:0];
  _RAND_115 = {1{`RANDOM}};
  vga_mem_ram_MPORT_57_addr_pipe_0 = _RAND_115[11:0];
  _RAND_116 = {1{`RANDOM}};
  vga_mem_ram_MPORT_58_en_pipe_0 = _RAND_116[0:0];
  _RAND_117 = {1{`RANDOM}};
  vga_mem_ram_MPORT_58_addr_pipe_0 = _RAND_117[11:0];
  _RAND_118 = {1{`RANDOM}};
  vga_mem_ram_MPORT_59_en_pipe_0 = _RAND_118[0:0];
  _RAND_119 = {1{`RANDOM}};
  vga_mem_ram_MPORT_59_addr_pipe_0 = _RAND_119[11:0];
  _RAND_120 = {1{`RANDOM}};
  vga_mem_ram_MPORT_60_en_pipe_0 = _RAND_120[0:0];
  _RAND_121 = {1{`RANDOM}};
  vga_mem_ram_MPORT_60_addr_pipe_0 = _RAND_121[11:0];
  _RAND_122 = {1{`RANDOM}};
  vga_mem_ram_MPORT_61_en_pipe_0 = _RAND_122[0:0];
  _RAND_123 = {1{`RANDOM}};
  vga_mem_ram_MPORT_61_addr_pipe_0 = _RAND_123[11:0];
  _RAND_124 = {1{`RANDOM}};
  vga_mem_ram_MPORT_62_en_pipe_0 = _RAND_124[0:0];
  _RAND_125 = {1{`RANDOM}};
  vga_mem_ram_MPORT_62_addr_pipe_0 = _RAND_125[11:0];
  _RAND_126 = {1{`RANDOM}};
  vga_mem_ram_MPORT_63_en_pipe_0 = _RAND_126[0:0];
  _RAND_127 = {1{`RANDOM}};
  vga_mem_ram_MPORT_63_addr_pipe_0 = _RAND_127[11:0];
  _RAND_128 = {1{`RANDOM}};
  vga_mem_ram_MPORT_64_en_pipe_0 = _RAND_128[0:0];
  _RAND_129 = {1{`RANDOM}};
  vga_mem_ram_MPORT_64_addr_pipe_0 = _RAND_129[11:0];
  _RAND_130 = {1{`RANDOM}};
  vga_mem_ram_MPORT_65_en_pipe_0 = _RAND_130[0:0];
  _RAND_131 = {1{`RANDOM}};
  vga_mem_ram_MPORT_65_addr_pipe_0 = _RAND_131[11:0];
  _RAND_132 = {1{`RANDOM}};
  vga_mem_ram_MPORT_66_en_pipe_0 = _RAND_132[0:0];
  _RAND_133 = {1{`RANDOM}};
  vga_mem_ram_MPORT_66_addr_pipe_0 = _RAND_133[11:0];
  _RAND_134 = {1{`RANDOM}};
  vga_mem_ram_MPORT_67_en_pipe_0 = _RAND_134[0:0];
  _RAND_135 = {1{`RANDOM}};
  vga_mem_ram_MPORT_67_addr_pipe_0 = _RAND_135[11:0];
  _RAND_136 = {1{`RANDOM}};
  vga_mem_ram_MPORT_68_en_pipe_0 = _RAND_136[0:0];
  _RAND_137 = {1{`RANDOM}};
  vga_mem_ram_MPORT_68_addr_pipe_0 = _RAND_137[11:0];
  _RAND_138 = {1{`RANDOM}};
  vga_mem_ram_MPORT_69_en_pipe_0 = _RAND_138[0:0];
  _RAND_139 = {1{`RANDOM}};
  vga_mem_ram_MPORT_69_addr_pipe_0 = _RAND_139[11:0];
  _RAND_140 = {1{`RANDOM}};
  vga_mem_ram_MPORT_70_en_pipe_0 = _RAND_140[0:0];
  _RAND_141 = {1{`RANDOM}};
  vga_mem_ram_MPORT_70_addr_pipe_0 = _RAND_141[11:0];
  _RAND_142 = {1{`RANDOM}};
  vga_mem_ram_MPORT_71_en_pipe_0 = _RAND_142[0:0];
  _RAND_143 = {1{`RANDOM}};
  vga_mem_ram_MPORT_71_addr_pipe_0 = _RAND_143[11:0];
  _RAND_144 = {1{`RANDOM}};
  vga_mem_ram_MPORT_72_en_pipe_0 = _RAND_144[0:0];
  _RAND_145 = {1{`RANDOM}};
  vga_mem_ram_MPORT_72_addr_pipe_0 = _RAND_145[11:0];
  _RAND_146 = {1{`RANDOM}};
  vga_mem_ram_MPORT_73_en_pipe_0 = _RAND_146[0:0];
  _RAND_147 = {1{`RANDOM}};
  vga_mem_ram_MPORT_73_addr_pipe_0 = _RAND_147[11:0];
  _RAND_148 = {1{`RANDOM}};
  vga_mem_ram_MPORT_74_en_pipe_0 = _RAND_148[0:0];
  _RAND_149 = {1{`RANDOM}};
  vga_mem_ram_MPORT_74_addr_pipe_0 = _RAND_149[11:0];
  _RAND_150 = {1{`RANDOM}};
  vga_mem_ram_MPORT_75_en_pipe_0 = _RAND_150[0:0];
  _RAND_151 = {1{`RANDOM}};
  vga_mem_ram_MPORT_75_addr_pipe_0 = _RAND_151[11:0];
  _RAND_152 = {1{`RANDOM}};
  vga_mem_ram_MPORT_76_en_pipe_0 = _RAND_152[0:0];
  _RAND_153 = {1{`RANDOM}};
  vga_mem_ram_MPORT_76_addr_pipe_0 = _RAND_153[11:0];
  _RAND_154 = {1{`RANDOM}};
  vga_mem_ram_MPORT_77_en_pipe_0 = _RAND_154[0:0];
  _RAND_155 = {1{`RANDOM}};
  vga_mem_ram_MPORT_77_addr_pipe_0 = _RAND_155[11:0];
  _RAND_156 = {1{`RANDOM}};
  vga_mem_ram_MPORT_78_en_pipe_0 = _RAND_156[0:0];
  _RAND_157 = {1{`RANDOM}};
  vga_mem_ram_MPORT_78_addr_pipe_0 = _RAND_157[11:0];
  _RAND_158 = {1{`RANDOM}};
  vga_mem_ram_MPORT_79_en_pipe_0 = _RAND_158[0:0];
  _RAND_159 = {1{`RANDOM}};
  vga_mem_ram_MPORT_79_addr_pipe_0 = _RAND_159[11:0];
  _RAND_160 = {1{`RANDOM}};
  vga_mem_ram_MPORT_80_en_pipe_0 = _RAND_160[0:0];
  _RAND_161 = {1{`RANDOM}};
  vga_mem_ram_MPORT_80_addr_pipe_0 = _RAND_161[11:0];
  _RAND_162 = {1{`RANDOM}};
  vga_mem_ram_MPORT_81_en_pipe_0 = _RAND_162[0:0];
  _RAND_163 = {1{`RANDOM}};
  vga_mem_ram_MPORT_81_addr_pipe_0 = _RAND_163[11:0];
  _RAND_164 = {1{`RANDOM}};
  vga_mem_ram_MPORT_82_en_pipe_0 = _RAND_164[0:0];
  _RAND_165 = {1{`RANDOM}};
  vga_mem_ram_MPORT_82_addr_pipe_0 = _RAND_165[11:0];
  _RAND_166 = {1{`RANDOM}};
  vga_mem_ram_MPORT_83_en_pipe_0 = _RAND_166[0:0];
  _RAND_167 = {1{`RANDOM}};
  vga_mem_ram_MPORT_83_addr_pipe_0 = _RAND_167[11:0];
  _RAND_168 = {1{`RANDOM}};
  vga_mem_ram_MPORT_84_en_pipe_0 = _RAND_168[0:0];
  _RAND_169 = {1{`RANDOM}};
  vga_mem_ram_MPORT_84_addr_pipe_0 = _RAND_169[11:0];
  _RAND_170 = {1{`RANDOM}};
  vga_mem_ram_MPORT_85_en_pipe_0 = _RAND_170[0:0];
  _RAND_171 = {1{`RANDOM}};
  vga_mem_ram_MPORT_85_addr_pipe_0 = _RAND_171[11:0];
  _RAND_172 = {1{`RANDOM}};
  vga_mem_ram_MPORT_86_en_pipe_0 = _RAND_172[0:0];
  _RAND_173 = {1{`RANDOM}};
  vga_mem_ram_MPORT_86_addr_pipe_0 = _RAND_173[11:0];
  _RAND_174 = {1{`RANDOM}};
  vga_mem_ram_MPORT_87_en_pipe_0 = _RAND_174[0:0];
  _RAND_175 = {1{`RANDOM}};
  vga_mem_ram_MPORT_87_addr_pipe_0 = _RAND_175[11:0];
  _RAND_176 = {1{`RANDOM}};
  vga_mem_ram_MPORT_88_en_pipe_0 = _RAND_176[0:0];
  _RAND_177 = {1{`RANDOM}};
  vga_mem_ram_MPORT_88_addr_pipe_0 = _RAND_177[11:0];
  _RAND_178 = {1{`RANDOM}};
  vga_mem_ram_MPORT_89_en_pipe_0 = _RAND_178[0:0];
  _RAND_179 = {1{`RANDOM}};
  vga_mem_ram_MPORT_89_addr_pipe_0 = _RAND_179[11:0];
  _RAND_180 = {1{`RANDOM}};
  vga_mem_ram_MPORT_90_en_pipe_0 = _RAND_180[0:0];
  _RAND_181 = {1{`RANDOM}};
  vga_mem_ram_MPORT_90_addr_pipe_0 = _RAND_181[11:0];
  _RAND_182 = {1{`RANDOM}};
  vga_mem_ram_MPORT_91_en_pipe_0 = _RAND_182[0:0];
  _RAND_183 = {1{`RANDOM}};
  vga_mem_ram_MPORT_91_addr_pipe_0 = _RAND_183[11:0];
  _RAND_184 = {1{`RANDOM}};
  vga_mem_ram_MPORT_92_en_pipe_0 = _RAND_184[0:0];
  _RAND_185 = {1{`RANDOM}};
  vga_mem_ram_MPORT_92_addr_pipe_0 = _RAND_185[11:0];
  _RAND_186 = {1{`RANDOM}};
  vga_mem_ram_MPORT_93_en_pipe_0 = _RAND_186[0:0];
  _RAND_187 = {1{`RANDOM}};
  vga_mem_ram_MPORT_93_addr_pipe_0 = _RAND_187[11:0];
  _RAND_188 = {1{`RANDOM}};
  vga_mem_ram_MPORT_94_en_pipe_0 = _RAND_188[0:0];
  _RAND_189 = {1{`RANDOM}};
  vga_mem_ram_MPORT_94_addr_pipe_0 = _RAND_189[11:0];
  _RAND_190 = {1{`RANDOM}};
  vga_mem_ram_MPORT_95_en_pipe_0 = _RAND_190[0:0];
  _RAND_191 = {1{`RANDOM}};
  vga_mem_ram_MPORT_95_addr_pipe_0 = _RAND_191[11:0];
  _RAND_192 = {1{`RANDOM}};
  vga_mem_ram_MPORT_96_en_pipe_0 = _RAND_192[0:0];
  _RAND_193 = {1{`RANDOM}};
  vga_mem_ram_MPORT_96_addr_pipe_0 = _RAND_193[11:0];
  _RAND_194 = {1{`RANDOM}};
  vga_mem_ram_MPORT_97_en_pipe_0 = _RAND_194[0:0];
  _RAND_195 = {1{`RANDOM}};
  vga_mem_ram_MPORT_97_addr_pipe_0 = _RAND_195[11:0];
  _RAND_196 = {1{`RANDOM}};
  vga_mem_ram_MPORT_98_en_pipe_0 = _RAND_196[0:0];
  _RAND_197 = {1{`RANDOM}};
  vga_mem_ram_MPORT_98_addr_pipe_0 = _RAND_197[11:0];
  _RAND_198 = {1{`RANDOM}};
  vga_mem_ram_MPORT_99_en_pipe_0 = _RAND_198[0:0];
  _RAND_199 = {1{`RANDOM}};
  vga_mem_ram_MPORT_99_addr_pipe_0 = _RAND_199[11:0];
  _RAND_200 = {1{`RANDOM}};
  vga_mem_ram_MPORT_100_en_pipe_0 = _RAND_200[0:0];
  _RAND_201 = {1{`RANDOM}};
  vga_mem_ram_MPORT_100_addr_pipe_0 = _RAND_201[11:0];
  _RAND_202 = {1{`RANDOM}};
  vga_mem_ram_MPORT_101_en_pipe_0 = _RAND_202[0:0];
  _RAND_203 = {1{`RANDOM}};
  vga_mem_ram_MPORT_101_addr_pipe_0 = _RAND_203[11:0];
  _RAND_204 = {1{`RANDOM}};
  vga_mem_ram_MPORT_102_en_pipe_0 = _RAND_204[0:0];
  _RAND_205 = {1{`RANDOM}};
  vga_mem_ram_MPORT_102_addr_pipe_0 = _RAND_205[11:0];
  _RAND_206 = {1{`RANDOM}};
  vga_mem_ram_MPORT_103_en_pipe_0 = _RAND_206[0:0];
  _RAND_207 = {1{`RANDOM}};
  vga_mem_ram_MPORT_103_addr_pipe_0 = _RAND_207[11:0];
  _RAND_208 = {1{`RANDOM}};
  vga_mem_ram_MPORT_104_en_pipe_0 = _RAND_208[0:0];
  _RAND_209 = {1{`RANDOM}};
  vga_mem_ram_MPORT_104_addr_pipe_0 = _RAND_209[11:0];
  _RAND_210 = {1{`RANDOM}};
  vga_mem_ram_MPORT_105_en_pipe_0 = _RAND_210[0:0];
  _RAND_211 = {1{`RANDOM}};
  vga_mem_ram_MPORT_105_addr_pipe_0 = _RAND_211[11:0];
  _RAND_212 = {1{`RANDOM}};
  vga_mem_ram_MPORT_106_en_pipe_0 = _RAND_212[0:0];
  _RAND_213 = {1{`RANDOM}};
  vga_mem_ram_MPORT_106_addr_pipe_0 = _RAND_213[11:0];
  _RAND_214 = {1{`RANDOM}};
  vga_mem_ram_MPORT_107_en_pipe_0 = _RAND_214[0:0];
  _RAND_215 = {1{`RANDOM}};
  vga_mem_ram_MPORT_107_addr_pipe_0 = _RAND_215[11:0];
  _RAND_216 = {1{`RANDOM}};
  vga_mem_ram_MPORT_108_en_pipe_0 = _RAND_216[0:0];
  _RAND_217 = {1{`RANDOM}};
  vga_mem_ram_MPORT_108_addr_pipe_0 = _RAND_217[11:0];
  _RAND_218 = {1{`RANDOM}};
  vga_mem_ram_MPORT_109_en_pipe_0 = _RAND_218[0:0];
  _RAND_219 = {1{`RANDOM}};
  vga_mem_ram_MPORT_109_addr_pipe_0 = _RAND_219[11:0];
  _RAND_220 = {1{`RANDOM}};
  vga_mem_ram_MPORT_110_en_pipe_0 = _RAND_220[0:0];
  _RAND_221 = {1{`RANDOM}};
  vga_mem_ram_MPORT_110_addr_pipe_0 = _RAND_221[11:0];
  _RAND_222 = {1{`RANDOM}};
  vga_mem_ram_MPORT_111_en_pipe_0 = _RAND_222[0:0];
  _RAND_223 = {1{`RANDOM}};
  vga_mem_ram_MPORT_111_addr_pipe_0 = _RAND_223[11:0];
  _RAND_224 = {1{`RANDOM}};
  vga_mem_ram_MPORT_112_en_pipe_0 = _RAND_224[0:0];
  _RAND_225 = {1{`RANDOM}};
  vga_mem_ram_MPORT_112_addr_pipe_0 = _RAND_225[11:0];
  _RAND_226 = {1{`RANDOM}};
  vga_mem_ram_MPORT_113_en_pipe_0 = _RAND_226[0:0];
  _RAND_227 = {1{`RANDOM}};
  vga_mem_ram_MPORT_113_addr_pipe_0 = _RAND_227[11:0];
  _RAND_228 = {1{`RANDOM}};
  vga_mem_ram_MPORT_114_en_pipe_0 = _RAND_228[0:0];
  _RAND_229 = {1{`RANDOM}};
  vga_mem_ram_MPORT_114_addr_pipe_0 = _RAND_229[11:0];
  _RAND_230 = {1{`RANDOM}};
  vga_mem_ram_MPORT_115_en_pipe_0 = _RAND_230[0:0];
  _RAND_231 = {1{`RANDOM}};
  vga_mem_ram_MPORT_115_addr_pipe_0 = _RAND_231[11:0];
  _RAND_232 = {1{`RANDOM}};
  vga_mem_ram_MPORT_116_en_pipe_0 = _RAND_232[0:0];
  _RAND_233 = {1{`RANDOM}};
  vga_mem_ram_MPORT_116_addr_pipe_0 = _RAND_233[11:0];
  _RAND_234 = {1{`RANDOM}};
  vga_mem_ram_MPORT_117_en_pipe_0 = _RAND_234[0:0];
  _RAND_235 = {1{`RANDOM}};
  vga_mem_ram_MPORT_117_addr_pipe_0 = _RAND_235[11:0];
  _RAND_236 = {1{`RANDOM}};
  vga_mem_ram_MPORT_118_en_pipe_0 = _RAND_236[0:0];
  _RAND_237 = {1{`RANDOM}};
  vga_mem_ram_MPORT_118_addr_pipe_0 = _RAND_237[11:0];
  _RAND_238 = {1{`RANDOM}};
  vga_mem_ram_MPORT_119_en_pipe_0 = _RAND_238[0:0];
  _RAND_239 = {1{`RANDOM}};
  vga_mem_ram_MPORT_119_addr_pipe_0 = _RAND_239[11:0];
  _RAND_240 = {1{`RANDOM}};
  vga_mem_ram_MPORT_120_en_pipe_0 = _RAND_240[0:0];
  _RAND_241 = {1{`RANDOM}};
  vga_mem_ram_MPORT_120_addr_pipe_0 = _RAND_241[11:0];
  _RAND_242 = {1{`RANDOM}};
  vga_mem_ram_MPORT_121_en_pipe_0 = _RAND_242[0:0];
  _RAND_243 = {1{`RANDOM}};
  vga_mem_ram_MPORT_121_addr_pipe_0 = _RAND_243[11:0];
  _RAND_244 = {1{`RANDOM}};
  vga_mem_ram_MPORT_122_en_pipe_0 = _RAND_244[0:0];
  _RAND_245 = {1{`RANDOM}};
  vga_mem_ram_MPORT_122_addr_pipe_0 = _RAND_245[11:0];
  _RAND_246 = {1{`RANDOM}};
  vga_mem_ram_MPORT_123_en_pipe_0 = _RAND_246[0:0];
  _RAND_247 = {1{`RANDOM}};
  vga_mem_ram_MPORT_123_addr_pipe_0 = _RAND_247[11:0];
  _RAND_248 = {1{`RANDOM}};
  vga_mem_ram_MPORT_124_en_pipe_0 = _RAND_248[0:0];
  _RAND_249 = {1{`RANDOM}};
  vga_mem_ram_MPORT_124_addr_pipe_0 = _RAND_249[11:0];
  _RAND_250 = {1{`RANDOM}};
  vga_mem_ram_MPORT_125_en_pipe_0 = _RAND_250[0:0];
  _RAND_251 = {1{`RANDOM}};
  vga_mem_ram_MPORT_125_addr_pipe_0 = _RAND_251[11:0];
  _RAND_252 = {1{`RANDOM}};
  vga_mem_ram_MPORT_126_en_pipe_0 = _RAND_252[0:0];
  _RAND_253 = {1{`RANDOM}};
  vga_mem_ram_MPORT_126_addr_pipe_0 = _RAND_253[11:0];
  _RAND_254 = {1{`RANDOM}};
  vga_mem_ram_MPORT_127_en_pipe_0 = _RAND_254[0:0];
  _RAND_255 = {1{`RANDOM}};
  vga_mem_ram_MPORT_127_addr_pipe_0 = _RAND_255[11:0];
  _RAND_256 = {1{`RANDOM}};
  vga_mem_ram_MPORT_128_en_pipe_0 = _RAND_256[0:0];
  _RAND_257 = {1{`RANDOM}};
  vga_mem_ram_MPORT_128_addr_pipe_0 = _RAND_257[11:0];
  _RAND_258 = {1{`RANDOM}};
  vga_mem_ram_MPORT_129_en_pipe_0 = _RAND_258[0:0];
  _RAND_259 = {1{`RANDOM}};
  vga_mem_ram_MPORT_129_addr_pipe_0 = _RAND_259[11:0];
  _RAND_260 = {1{`RANDOM}};
  vga_mem_ram_MPORT_130_en_pipe_0 = _RAND_260[0:0];
  _RAND_261 = {1{`RANDOM}};
  vga_mem_ram_MPORT_130_addr_pipe_0 = _RAND_261[11:0];
  _RAND_262 = {1{`RANDOM}};
  vga_mem_ram_MPORT_131_en_pipe_0 = _RAND_262[0:0];
  _RAND_263 = {1{`RANDOM}};
  vga_mem_ram_MPORT_131_addr_pipe_0 = _RAND_263[11:0];
  _RAND_264 = {1{`RANDOM}};
  vga_mem_ram_MPORT_132_en_pipe_0 = _RAND_264[0:0];
  _RAND_265 = {1{`RANDOM}};
  vga_mem_ram_MPORT_132_addr_pipe_0 = _RAND_265[11:0];
  _RAND_266 = {1{`RANDOM}};
  vga_mem_ram_MPORT_133_en_pipe_0 = _RAND_266[0:0];
  _RAND_267 = {1{`RANDOM}};
  vga_mem_ram_MPORT_133_addr_pipe_0 = _RAND_267[11:0];
  _RAND_268 = {1{`RANDOM}};
  vga_mem_ram_MPORT_134_en_pipe_0 = _RAND_268[0:0];
  _RAND_269 = {1{`RANDOM}};
  vga_mem_ram_MPORT_134_addr_pipe_0 = _RAND_269[11:0];
  _RAND_270 = {1{`RANDOM}};
  vga_mem_ram_MPORT_135_en_pipe_0 = _RAND_270[0:0];
  _RAND_271 = {1{`RANDOM}};
  vga_mem_ram_MPORT_135_addr_pipe_0 = _RAND_271[11:0];
  _RAND_272 = {1{`RANDOM}};
  vga_mem_ram_MPORT_136_en_pipe_0 = _RAND_272[0:0];
  _RAND_273 = {1{`RANDOM}};
  vga_mem_ram_MPORT_136_addr_pipe_0 = _RAND_273[11:0];
  _RAND_274 = {1{`RANDOM}};
  vga_mem_ram_MPORT_137_en_pipe_0 = _RAND_274[0:0];
  _RAND_275 = {1{`RANDOM}};
  vga_mem_ram_MPORT_137_addr_pipe_0 = _RAND_275[11:0];
  _RAND_276 = {1{`RANDOM}};
  vga_mem_ram_MPORT_138_en_pipe_0 = _RAND_276[0:0];
  _RAND_277 = {1{`RANDOM}};
  vga_mem_ram_MPORT_138_addr_pipe_0 = _RAND_277[11:0];
  _RAND_278 = {1{`RANDOM}};
  vga_mem_ram_MPORT_139_en_pipe_0 = _RAND_278[0:0];
  _RAND_279 = {1{`RANDOM}};
  vga_mem_ram_MPORT_139_addr_pipe_0 = _RAND_279[11:0];
  _RAND_280 = {1{`RANDOM}};
  vga_mem_ram_MPORT_140_en_pipe_0 = _RAND_280[0:0];
  _RAND_281 = {1{`RANDOM}};
  vga_mem_ram_MPORT_140_addr_pipe_0 = _RAND_281[11:0];
  _RAND_282 = {1{`RANDOM}};
  vga_mem_ram_MPORT_141_en_pipe_0 = _RAND_282[0:0];
  _RAND_283 = {1{`RANDOM}};
  vga_mem_ram_MPORT_141_addr_pipe_0 = _RAND_283[11:0];
  _RAND_284 = {1{`RANDOM}};
  vga_mem_ram_MPORT_142_en_pipe_0 = _RAND_284[0:0];
  _RAND_285 = {1{`RANDOM}};
  vga_mem_ram_MPORT_142_addr_pipe_0 = _RAND_285[11:0];
  _RAND_286 = {1{`RANDOM}};
  vga_mem_ram_MPORT_143_en_pipe_0 = _RAND_286[0:0];
  _RAND_287 = {1{`RANDOM}};
  vga_mem_ram_MPORT_143_addr_pipe_0 = _RAND_287[11:0];
  _RAND_288 = {1{`RANDOM}};
  vga_mem_ram_MPORT_144_en_pipe_0 = _RAND_288[0:0];
  _RAND_289 = {1{`RANDOM}};
  vga_mem_ram_MPORT_144_addr_pipe_0 = _RAND_289[11:0];
  _RAND_290 = {1{`RANDOM}};
  vga_mem_ram_MPORT_145_en_pipe_0 = _RAND_290[0:0];
  _RAND_291 = {1{`RANDOM}};
  vga_mem_ram_MPORT_145_addr_pipe_0 = _RAND_291[11:0];
  _RAND_292 = {1{`RANDOM}};
  vga_mem_ram_MPORT_146_en_pipe_0 = _RAND_292[0:0];
  _RAND_293 = {1{`RANDOM}};
  vga_mem_ram_MPORT_146_addr_pipe_0 = _RAND_293[11:0];
  _RAND_294 = {1{`RANDOM}};
  vga_mem_ram_MPORT_147_en_pipe_0 = _RAND_294[0:0];
  _RAND_295 = {1{`RANDOM}};
  vga_mem_ram_MPORT_147_addr_pipe_0 = _RAND_295[11:0];
  _RAND_296 = {1{`RANDOM}};
  vga_mem_ram_MPORT_148_en_pipe_0 = _RAND_296[0:0];
  _RAND_297 = {1{`RANDOM}};
  vga_mem_ram_MPORT_148_addr_pipe_0 = _RAND_297[11:0];
  _RAND_298 = {1{`RANDOM}};
  vga_mem_ram_MPORT_149_en_pipe_0 = _RAND_298[0:0];
  _RAND_299 = {1{`RANDOM}};
  vga_mem_ram_MPORT_149_addr_pipe_0 = _RAND_299[11:0];
  _RAND_300 = {1{`RANDOM}};
  vga_mem_ram_MPORT_150_en_pipe_0 = _RAND_300[0:0];
  _RAND_301 = {1{`RANDOM}};
  vga_mem_ram_MPORT_150_addr_pipe_0 = _RAND_301[11:0];
  _RAND_302 = {1{`RANDOM}};
  vga_mem_ram_MPORT_151_en_pipe_0 = _RAND_302[0:0];
  _RAND_303 = {1{`RANDOM}};
  vga_mem_ram_MPORT_151_addr_pipe_0 = _RAND_303[11:0];
  _RAND_304 = {1{`RANDOM}};
  vga_mem_ram_MPORT_152_en_pipe_0 = _RAND_304[0:0];
  _RAND_305 = {1{`RANDOM}};
  vga_mem_ram_MPORT_152_addr_pipe_0 = _RAND_305[11:0];
  _RAND_306 = {1{`RANDOM}};
  rdwrPort = _RAND_306[23:0];
  _RAND_307 = {9{`RANDOM}};
  ram_0 = _RAND_307[287:0];
  _RAND_308 = {9{`RANDOM}};
  ram_1 = _RAND_308[287:0];
  _RAND_309 = {9{`RANDOM}};
  ram_2 = _RAND_309[287:0];
  _RAND_310 = {9{`RANDOM}};
  ram_3 = _RAND_310[287:0];
  _RAND_311 = {9{`RANDOM}};
  ram_4 = _RAND_311[287:0];
  _RAND_312 = {9{`RANDOM}};
  ram_5 = _RAND_312[287:0];
  _RAND_313 = {9{`RANDOM}};
  ram_6 = _RAND_313[287:0];
  _RAND_314 = {9{`RANDOM}};
  ram_7 = _RAND_314[287:0];
  _RAND_315 = {9{`RANDOM}};
  ram_8 = _RAND_315[287:0];
  _RAND_316 = {9{`RANDOM}};
  ram_9 = _RAND_316[287:0];
  _RAND_317 = {9{`RANDOM}};
  ram_10 = _RAND_317[287:0];
  _RAND_318 = {9{`RANDOM}};
  ram_11 = _RAND_318[287:0];
  _RAND_319 = {9{`RANDOM}};
  ram_12 = _RAND_319[287:0];
  _RAND_320 = {9{`RANDOM}};
  ram_13 = _RAND_320[287:0];
  _RAND_321 = {9{`RANDOM}};
  ram_14 = _RAND_321[287:0];
  _RAND_322 = {9{`RANDOM}};
  ram_15 = _RAND_322[287:0];
  _RAND_323 = {1{`RANDOM}};
  h = _RAND_323[9:0];
  _RAND_324 = {1{`RANDOM}};
  v = _RAND_324[8:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
  $readmemh("resource/vga_font.txt", vga_mem);
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module vga(
  input        clock,
  input        reset,
  input  [1:0] io_ready,
  input  [7:0] io_ascii,
  output       io_VGA_HSYNC,
  output       io_VGA_VSYNC,
  output       io_VGA_BLANK_N,
  output [7:0] io_VGA_R,
  output [7:0] io_VGA_G,
  output [7:0] io_VGA_B
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
`endif // RANDOMIZE_REG_INIT
  wire  v1_clock; // @[vga.scala 20:18]
  wire  v1_reset; // @[vga.scala 20:18]
  wire [23:0] v1_io_vga_data; // @[vga.scala 20:18]
  wire [9:0] v1_io_h_addr; // @[vga.scala 20:18]
  wire [9:0] v1_io_v_addr; // @[vga.scala 20:18]
  wire  v1_io_hsync; // @[vga.scala 20:18]
  wire  v1_io_vsync; // @[vga.scala 20:18]
  wire  v1_io_valid; // @[vga.scala 20:18]
  wire [7:0] v1_io_vga_r; // @[vga.scala 20:18]
  wire [7:0] v1_io_vga_g; // @[vga.scala 20:18]
  wire [7:0] v1_io_vga_b; // @[vga.scala 20:18]
  wire  vm_clock; // @[vga.scala 31:18]
  wire  vm_reset; // @[vga.scala 31:18]
  wire [1:0] vm_io_ready; // @[vga.scala 31:18]
  wire [7:0] vm_io_ascii; // @[vga.scala 31:18]
  wire [9:0] vm_io_h_addr; // @[vga.scala 31:18]
  wire [8:0] vm_io_v_addr; // @[vga.scala 31:18]
  wire [23:0] vm_io_vga_data; // @[vga.scala 31:18]
  reg [9:0] h_addr; // @[vga.scala 16:19]
  reg [9:0] v_addr; // @[vga.scala 17:19]
  reg [23:0] vga_data; // @[vga.scala 18:21]
  vga_ctrl v1 ( // @[vga.scala 20:18]
    .clock(v1_clock),
    .reset(v1_reset),
    .io_vga_data(v1_io_vga_data),
    .io_h_addr(v1_io_h_addr),
    .io_v_addr(v1_io_v_addr),
    .io_hsync(v1_io_hsync),
    .io_vsync(v1_io_vsync),
    .io_valid(v1_io_valid),
    .io_vga_r(v1_io_vga_r),
    .io_vga_g(v1_io_vga_g),
    .io_vga_b(v1_io_vga_b)
  );
  vmem vm ( // @[vga.scala 31:18]
    .clock(vm_clock),
    .reset(vm_reset),
    .io_ready(vm_io_ready),
    .io_ascii(vm_io_ascii),
    .io_h_addr(vm_io_h_addr),
    .io_v_addr(vm_io_v_addr),
    .io_vga_data(vm_io_vga_data)
  );
  assign io_VGA_HSYNC = v1_io_hsync; // @[vga.scala 24:17]
  assign io_VGA_VSYNC = v1_io_vsync; // @[vga.scala 25:17]
  assign io_VGA_BLANK_N = v1_io_valid; // @[vga.scala 26:19]
  assign io_VGA_R = v1_io_vga_r; // @[vga.scala 27:13]
  assign io_VGA_G = v1_io_vga_g; // @[vga.scala 28:13]
  assign io_VGA_B = v1_io_vga_b; // @[vga.scala 29:13]
  assign v1_clock = clock;
  assign v1_reset = reset;
  assign v1_io_vga_data = vga_data; // @[vga.scala 21:19]
  assign vm_clock = clock;
  assign vm_reset = reset;
  assign vm_io_ready = io_ready; // @[vga.scala 32:16]
  assign vm_io_ascii = io_ascii; // @[vga.scala 33:16]
  assign vm_io_h_addr = h_addr; // @[vga.scala 34:17]
  assign vm_io_v_addr = v_addr[8:0]; // @[vga.scala 35:25]
  always @(posedge clock) begin
    h_addr <= v1_io_h_addr; // @[vga.scala 22:11]
    v_addr <= v1_io_v_addr; // @[vga.scala 23:11]
    vga_data <= vm_io_vga_data; // @[vga.scala 36:13]
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
  h_addr = _RAND_0[9:0];
  _RAND_1 = {1{`RANDOM}};
  v_addr = _RAND_1[9:0];
  _RAND_2 = {1{`RANDOM}};
  vga_data = _RAND_2[23:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ps2_keyboard(
  input        clock,
  input        io_ps2_clk,
  input        io_ps2_data,
  input        io_nextdata_n,
  output [7:0] io_data,
  output       io_ready
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
`endif // RANDOMIZE_REG_INIT
  reg  rea; // @[ps2.scala 124:16]
  reg  buffer_0; // @[ps2.scala 132:19]
  reg  buffer_1; // @[ps2.scala 132:19]
  reg  buffer_2; // @[ps2.scala 132:19]
  reg  buffer_3; // @[ps2.scala 132:19]
  reg  buffer_4; // @[ps2.scala 132:19]
  reg  buffer_5; // @[ps2.scala 132:19]
  reg  buffer_6; // @[ps2.scala 132:19]
  reg  buffer_7; // @[ps2.scala 132:19]
  reg  buffer_8; // @[ps2.scala 132:19]
  reg  buffer_9; // @[ps2.scala 132:19]
  reg [7:0] fifo_0; // @[ps2.scala 133:17]
  reg [7:0] fifo_1; // @[ps2.scala 133:17]
  reg [7:0] fifo_2; // @[ps2.scala 133:17]
  reg [7:0] fifo_3; // @[ps2.scala 133:17]
  reg [7:0] fifo_4; // @[ps2.scala 133:17]
  reg [7:0] fifo_5; // @[ps2.scala 133:17]
  reg [7:0] fifo_6; // @[ps2.scala 133:17]
  reg [7:0] fifo_7; // @[ps2.scala 133:17]
  reg [2:0] w_ptr; // @[ps2.scala 134:18]
  reg [2:0] r_ptr; // @[ps2.scala 135:18]
  reg [3:0] count; // @[ps2.scala 136:18]
  reg [2:0] ps2_clk_sync; // @[ps2.scala 137:25]
  wire [1:0] ps2_clk_sync_hi = ps2_clk_sync[1:0]; // @[ps2.scala 139:35]
  wire  sampling = ps2_clk_sync[2] & ~ps2_clk_sync[1]; // @[ps2.scala 141:30]
  wire [2:0] _r_ptr_T_1 = r_ptr + 3'h1; // @[ps2.scala 151:29]
  wire  _GEN_0 = w_ptr == _r_ptr_T_1 ? 1'h0 : rea; // @[ps2.scala 152:42 ps2.scala 153:24 ps2.scala 124:16]
  wire  _GEN_3 = ~io_nextdata_n ? _GEN_0 : rea; // @[ps2.scala 150:38 ps2.scala 124:16]
  wire  _GEN_6 = rea ? _GEN_3 : rea; // @[ps2.scala 149:24 ps2.scala 124:16]
  wire [7:0] _fifo_T = {buffer_8,buffer_7,buffer_6,buffer_5,buffer_4,buffer_3,buffer_2,buffer_1}; // @[Cat.scala 30:58]
  wire [2:0] _w_ptr_T_1 = w_ptr + 3'h1; // @[ps2.scala 162:33]
  wire  _GEN_25 = ~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3
     ^ buffer_2 ^ buffer_1) | _GEN_6; // @[ps2.scala 160:162 ps2.scala 163:24]
  wire [3:0] _count_T_1 = count + 4'h1; // @[ps2.scala 169:29]
  wire [7:0] _GEN_106 = 3'h1 == r_ptr ? fifo_1 : fifo_0; // @[ps2.scala 173:12 ps2.scala 173:12]
  wire [7:0] _GEN_107 = 3'h2 == r_ptr ? fifo_2 : _GEN_106; // @[ps2.scala 173:12 ps2.scala 173:12]
  wire [7:0] _GEN_108 = 3'h3 == r_ptr ? fifo_3 : _GEN_107; // @[ps2.scala 173:12 ps2.scala 173:12]
  wire [7:0] _GEN_109 = 3'h4 == r_ptr ? fifo_4 : _GEN_108; // @[ps2.scala 173:12 ps2.scala 173:12]
  wire [7:0] _GEN_110 = 3'h5 == r_ptr ? fifo_5 : _GEN_109; // @[ps2.scala 173:12 ps2.scala 173:12]
  wire [7:0] _GEN_111 = 3'h6 == r_ptr ? fifo_6 : _GEN_110; // @[ps2.scala 173:12 ps2.scala 173:12]
  assign io_data = 3'h7 == r_ptr ? fifo_7 : _GEN_111; // @[ps2.scala 173:12 ps2.scala 173:12]
  assign io_ready = rea; // @[ps2.scala 142:24 ps2.scala 130:13]
  always @(posedge clock) begin
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        rea <= _GEN_25;
      end else begin
        rea <= _GEN_6;
      end
    end else begin
      rea <= _GEN_6;
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h0 == count) begin // @[ps2.scala 168:30]
          buffer_0 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h1 == count) begin // @[ps2.scala 168:30]
          buffer_1 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h2 == count) begin // @[ps2.scala 168:30]
          buffer_2 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h3 == count) begin // @[ps2.scala 168:30]
          buffer_3 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h4 == count) begin // @[ps2.scala 168:30]
          buffer_4 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h5 == count) begin // @[ps2.scala 168:30]
          buffer_5 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h6 == count) begin // @[ps2.scala 168:30]
          buffer_6 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h7 == count) begin // @[ps2.scala 168:30]
          buffer_7 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h8 == count) begin // @[ps2.scala 168:30]
          buffer_8 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (!(count == 4'ha)) begin // @[ps2.scala 159:31]
        if (4'h9 == count) begin // @[ps2.scala 168:30]
          buffer_9 <= io_ps2_data; // @[ps2.scala 168:30]
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h0 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_0 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h1 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_1 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h2 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_2 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h3 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_3 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h4 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_4 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h5 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_5 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h6 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_6 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          if (3'h7 == w_ptr) begin // @[ps2.scala 161:32]
            fifo_7 <= _fifo_T; // @[ps2.scala 161:32]
          end
        end
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        if (~buffer_0 & io_ps2_data & (buffer_9 ^ buffer_8 ^ buffer_7 ^ buffer_6 ^ buffer_5 ^ buffer_4 ^ buffer_3 ^
          buffer_2 ^ buffer_1)) begin // @[ps2.scala 160:162]
          w_ptr <= _w_ptr_T_1; // @[ps2.scala 162:26]
        end
      end
    end
    if (rea) begin // @[ps2.scala 149:24]
      if (~io_nextdata_n) begin // @[ps2.scala 150:38]
        r_ptr <= _r_ptr_T_1; // @[ps2.scala 151:22]
      end
    end
    if (sampling) begin // @[ps2.scala 158:29]
      if (count == 4'ha) begin // @[ps2.scala 159:31]
        count <= 4'h0; // @[ps2.scala 166:22]
      end else begin
        count <= _count_T_1; // @[ps2.scala 169:22]
      end
    end
    ps2_clk_sync <= {ps2_clk_sync_hi,io_ps2_clk}; // @[Cat.scala 30:58]
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
  rea = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  buffer_0 = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  buffer_1 = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  buffer_2 = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  buffer_3 = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  buffer_4 = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  buffer_5 = _RAND_6[0:0];
  _RAND_7 = {1{`RANDOM}};
  buffer_6 = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  buffer_7 = _RAND_8[0:0];
  _RAND_9 = {1{`RANDOM}};
  buffer_8 = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  buffer_9 = _RAND_10[0:0];
  _RAND_11 = {1{`RANDOM}};
  fifo_0 = _RAND_11[7:0];
  _RAND_12 = {1{`RANDOM}};
  fifo_1 = _RAND_12[7:0];
  _RAND_13 = {1{`RANDOM}};
  fifo_2 = _RAND_13[7:0];
  _RAND_14 = {1{`RANDOM}};
  fifo_3 = _RAND_14[7:0];
  _RAND_15 = {1{`RANDOM}};
  fifo_4 = _RAND_15[7:0];
  _RAND_16 = {1{`RANDOM}};
  fifo_5 = _RAND_16[7:0];
  _RAND_17 = {1{`RANDOM}};
  fifo_6 = _RAND_17[7:0];
  _RAND_18 = {1{`RANDOM}};
  fifo_7 = _RAND_18[7:0];
  _RAND_19 = {1{`RANDOM}};
  w_ptr = _RAND_19[2:0];
  _RAND_20 = {1{`RANDOM}};
  r_ptr = _RAND_20[2:0];
  _RAND_21 = {1{`RANDOM}};
  count = _RAND_21[3:0];
  _RAND_22 = {1{`RANDOM}};
  ps2_clk_sync = _RAND_22[2:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module ps2ascii(
  input  [7:0] io_in,
  output [7:0] io_out
);
  wire [255:0] _GEN_21 = 8'h15 == io_in ? 256'h71 : 256'h0; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_22 = 8'h16 == io_in ? 256'h31 : _GEN_21; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_23 = 8'h17 == io_in ? 256'h0 : _GEN_22; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_24 = 8'h18 == io_in ? 256'h0 : _GEN_23; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_25 = 8'h19 == io_in ? 256'h0 : _GEN_24; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_26 = 8'h1a == io_in ? 256'h7a : _GEN_25; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_27 = 8'h1b == io_in ? 256'h73 : _GEN_26; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_28 = 8'h1c == io_in ? 256'h61 : _GEN_27; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_29 = 8'h1d == io_in ? 256'h77 : _GEN_28; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_30 = 8'h1e == io_in ? 256'h32 : _GEN_29; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_31 = 8'h1f == io_in ? 256'h0 : _GEN_30; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_32 = 8'h20 == io_in ? 256'h0 : _GEN_31; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_33 = 8'h21 == io_in ? 256'h63 : _GEN_32; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_34 = 8'h22 == io_in ? 256'h78 : _GEN_33; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_35 = 8'h23 == io_in ? 256'h64 : _GEN_34; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_36 = 8'h24 == io_in ? 256'h65 : _GEN_35; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_37 = 8'h25 == io_in ? 256'h34 : _GEN_36; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_38 = 8'h26 == io_in ? 256'h33 : _GEN_37; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_39 = 8'h27 == io_in ? 256'h0 : _GEN_38; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_40 = 8'h28 == io_in ? 256'h0 : _GEN_39; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_41 = 8'h29 == io_in ? 256'h0 : _GEN_40; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_42 = 8'h2a == io_in ? 256'h76 : _GEN_41; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_43 = 8'h2b == io_in ? 256'h66 : _GEN_42; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_44 = 8'h2c == io_in ? 256'h74 : _GEN_43; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_45 = 8'h2d == io_in ? 256'h72 : _GEN_44; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_46 = 8'h2e == io_in ? 256'h35 : _GEN_45; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_47 = 8'h2f == io_in ? 256'h0 : _GEN_46; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_48 = 8'h30 == io_in ? 256'h0 : _GEN_47; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_49 = 8'h31 == io_in ? 256'h6e : _GEN_48; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_50 = 8'h32 == io_in ? 256'h62 : _GEN_49; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_51 = 8'h33 == io_in ? 256'h68 : _GEN_50; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_52 = 8'h34 == io_in ? 256'h67 : _GEN_51; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_53 = 8'h35 == io_in ? 256'h79 : _GEN_52; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_54 = 8'h36 == io_in ? 256'h36 : _GEN_53; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_55 = 8'h37 == io_in ? 256'h0 : _GEN_54; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_56 = 8'h38 == io_in ? 256'h0 : _GEN_55; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_57 = 8'h39 == io_in ? 256'h0 : _GEN_56; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_58 = 8'h3a == io_in ? 256'h6d : _GEN_57; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_59 = 8'h3b == io_in ? 256'h6a : _GEN_58; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_60 = 8'h3c == io_in ? 256'h75 : _GEN_59; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_61 = 8'h3d == io_in ? 256'h37 : _GEN_60; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_62 = 8'h3e == io_in ? 256'h38 : _GEN_61; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_63 = 8'h3f == io_in ? 256'h0 : _GEN_62; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_64 = 8'h40 == io_in ? 256'h0 : _GEN_63; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_65 = 8'h41 == io_in ? 256'h0 : _GEN_64; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_66 = 8'h42 == io_in ? 256'h6b : _GEN_65; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_67 = 8'h43 == io_in ? 256'h69 : _GEN_66; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_68 = 8'h44 == io_in ? 256'h6f : _GEN_67; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_69 = 8'h45 == io_in ? 256'h30 : _GEN_68; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_70 = 8'h46 == io_in ? 256'h39 : _GEN_69; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_71 = 8'h47 == io_in ? 256'h0 : _GEN_70; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_72 = 8'h48 == io_in ? 256'h0 : _GEN_71; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_73 = 8'h49 == io_in ? 256'h0 : _GEN_72; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_74 = 8'h4a == io_in ? 256'h0 : _GEN_73; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_75 = 8'h4b == io_in ? 256'h6c : _GEN_74; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_76 = 8'h4c == io_in ? 256'h0 : _GEN_75; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_77 = 8'h4d == io_in ? 256'h70 : _GEN_76; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_78 = 8'h4e == io_in ? 256'h0 : _GEN_77; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_79 = 8'h4f == io_in ? 256'h0 : _GEN_78; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_80 = 8'h50 == io_in ? 256'h0 : _GEN_79; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_81 = 8'h51 == io_in ? 256'h0 : _GEN_80; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_82 = 8'h52 == io_in ? 256'h0 : _GEN_81; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_83 = 8'h53 == io_in ? 256'h0 : _GEN_82; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_84 = 8'h54 == io_in ? 256'h0 : _GEN_83; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_85 = 8'h55 == io_in ? 256'h0 : _GEN_84; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_86 = 8'h56 == io_in ? 256'h0 : _GEN_85; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_87 = 8'h57 == io_in ? 256'h0 : _GEN_86; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_88 = 8'h58 == io_in ? 256'h0 : _GEN_87; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_89 = 8'h59 == io_in ? 256'h0 : _GEN_88; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_90 = 8'h5a == io_in ? 256'h0 : _GEN_89; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_91 = 8'h5b == io_in ? 256'h0 : _GEN_90; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_92 = 8'h5c == io_in ? 256'h0 : _GEN_91; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_93 = 8'h5d == io_in ? 256'h0 : _GEN_92; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_94 = 8'h5e == io_in ? 256'h0 : _GEN_93; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_95 = 8'h5f == io_in ? 256'h0 : _GEN_94; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_96 = 8'h60 == io_in ? 256'h0 : _GEN_95; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_97 = 8'h61 == io_in ? 256'h0 : _GEN_96; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_98 = 8'h62 == io_in ? 256'h0 : _GEN_97; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_99 = 8'h63 == io_in ? 256'h0 : _GEN_98; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_100 = 8'h64 == io_in ? 256'h0 : _GEN_99; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_101 = 8'h65 == io_in ? 256'h0 : _GEN_100; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_102 = 8'h66 == io_in ? 256'h0 : _GEN_101; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_103 = 8'h67 == io_in ? 256'h0 : _GEN_102; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_104 = 8'h68 == io_in ? 256'h0 : _GEN_103; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_105 = 8'h69 == io_in ? 256'h0 : _GEN_104; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_106 = 8'h6a == io_in ? 256'h0 : _GEN_105; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_107 = 8'h6b == io_in ? 256'h0 : _GEN_106; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_108 = 8'h6c == io_in ? 256'h0 : _GEN_107; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_109 = 8'h6d == io_in ? 256'h0 : _GEN_108; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_110 = 8'h6e == io_in ? 256'h0 : _GEN_109; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_111 = 8'h6f == io_in ? 256'h0 : _GEN_110; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_112 = 8'h70 == io_in ? 256'h0 : _GEN_111; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_113 = 8'h71 == io_in ? 256'h0 : _GEN_112; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_114 = 8'h72 == io_in ? 256'h0 : _GEN_113; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_115 = 8'h73 == io_in ? 256'h0 : _GEN_114; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_116 = 8'h74 == io_in ? 256'h0 : _GEN_115; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_117 = 8'h75 == io_in ? 256'h0 : _GEN_116; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_118 = 8'h76 == io_in ? 256'h0 : _GEN_117; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_119 = 8'h77 == io_in ? 256'h0 : _GEN_118; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_120 = 8'h78 == io_in ? 256'h0 : _GEN_119; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_121 = 8'h79 == io_in ? 256'h0 : _GEN_120; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_122 = 8'h7a == io_in ? 256'h0 : _GEN_121; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_123 = 8'h7b == io_in ? 256'h0 : _GEN_122; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_124 = 8'h7c == io_in ? 256'h0 : _GEN_123; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_125 = 8'h7d == io_in ? 256'h0 : _GEN_124; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_126 = 8'h7e == io_in ? 256'h0 : _GEN_125; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_127 = 8'h7f == io_in ? 256'h0 : _GEN_126; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_128 = 8'h80 == io_in ? 256'h0 : _GEN_127; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_129 = 8'h81 == io_in ? 256'h0 : _GEN_128; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_130 = 8'h82 == io_in ? 256'h0 : _GEN_129; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_131 = 8'h83 == io_in ? 256'h0 : _GEN_130; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_132 = 8'h84 == io_in ? 256'h0 : _GEN_131; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_133 = 8'h85 == io_in ? 256'h0 : _GEN_132; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_134 = 8'h86 == io_in ? 256'h0 : _GEN_133; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_135 = 8'h87 == io_in ? 256'h0 : _GEN_134; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_136 = 8'h88 == io_in ? 256'h0 : _GEN_135; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_137 = 8'h89 == io_in ? 256'h0 : _GEN_136; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_138 = 8'h8a == io_in ? 256'h0 : _GEN_137; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_139 = 8'h8b == io_in ? 256'h0 : _GEN_138; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_140 = 8'h8c == io_in ? 256'h0 : _GEN_139; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_141 = 8'h8d == io_in ? 256'h0 : _GEN_140; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_142 = 8'h8e == io_in ? 256'h0 : _GEN_141; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_143 = 8'h8f == io_in ? 256'h0 : _GEN_142; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_144 = 8'h90 == io_in ? 256'h0 : _GEN_143; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_145 = 8'h91 == io_in ? 256'h0 : _GEN_144; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_146 = 8'h92 == io_in ? 256'h0 : _GEN_145; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_147 = 8'h93 == io_in ? 256'h0 : _GEN_146; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_148 = 8'h94 == io_in ? 256'h0 : _GEN_147; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_149 = 8'h95 == io_in ? 256'h0 : _GEN_148; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_150 = 8'h96 == io_in ? 256'h0 : _GEN_149; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_151 = 8'h97 == io_in ? 256'h0 : _GEN_150; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_152 = 8'h98 == io_in ? 256'h0 : _GEN_151; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_153 = 8'h99 == io_in ? 256'h0 : _GEN_152; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_154 = 8'h9a == io_in ? 256'h0 : _GEN_153; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_155 = 8'h9b == io_in ? 256'h0 : _GEN_154; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_156 = 8'h9c == io_in ? 256'h0 : _GEN_155; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_157 = 8'h9d == io_in ? 256'h0 : _GEN_156; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_158 = 8'h9e == io_in ? 256'h0 : _GEN_157; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_159 = 8'h9f == io_in ? 256'h0 : _GEN_158; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_160 = 8'ha0 == io_in ? 256'h0 : _GEN_159; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_161 = 8'ha1 == io_in ? 256'h0 : _GEN_160; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_162 = 8'ha2 == io_in ? 256'h0 : _GEN_161; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_163 = 8'ha3 == io_in ? 256'h0 : _GEN_162; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_164 = 8'ha4 == io_in ? 256'h0 : _GEN_163; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_165 = 8'ha5 == io_in ? 256'h0 : _GEN_164; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_166 = 8'ha6 == io_in ? 256'h0 : _GEN_165; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_167 = 8'ha7 == io_in ? 256'h0 : _GEN_166; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_168 = 8'ha8 == io_in ? 256'h0 : _GEN_167; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_169 = 8'ha9 == io_in ? 256'h0 : _GEN_168; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_170 = 8'haa == io_in ? 256'h0 : _GEN_169; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_171 = 8'hab == io_in ? 256'h0 : _GEN_170; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_172 = 8'hac == io_in ? 256'h0 : _GEN_171; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_173 = 8'had == io_in ? 256'h0 : _GEN_172; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_174 = 8'hae == io_in ? 256'h0 : _GEN_173; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_175 = 8'haf == io_in ? 256'h0 : _GEN_174; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_176 = 8'hb0 == io_in ? 256'h0 : _GEN_175; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_177 = 8'hb1 == io_in ? 256'h0 : _GEN_176; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_178 = 8'hb2 == io_in ? 256'h0 : _GEN_177; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_179 = 8'hb3 == io_in ? 256'h0 : _GEN_178; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_180 = 8'hb4 == io_in ? 256'h0 : _GEN_179; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_181 = 8'hb5 == io_in ? 256'h0 : _GEN_180; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_182 = 8'hb6 == io_in ? 256'h0 : _GEN_181; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_183 = 8'hb7 == io_in ? 256'h0 : _GEN_182; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_184 = 8'hb8 == io_in ? 256'h0 : _GEN_183; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_185 = 8'hb9 == io_in ? 256'h0 : _GEN_184; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_186 = 8'hba == io_in ? 256'h0 : _GEN_185; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_187 = 8'hbb == io_in ? 256'h0 : _GEN_186; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_188 = 8'hbc == io_in ? 256'h0 : _GEN_187; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_189 = 8'hbd == io_in ? 256'h0 : _GEN_188; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_190 = 8'hbe == io_in ? 256'h0 : _GEN_189; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_191 = 8'hbf == io_in ? 256'h0 : _GEN_190; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_192 = 8'hc0 == io_in ? 256'h0 : _GEN_191; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_193 = 8'hc1 == io_in ? 256'h0 : _GEN_192; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_194 = 8'hc2 == io_in ? 256'h0 : _GEN_193; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_195 = 8'hc3 == io_in ? 256'h0 : _GEN_194; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_196 = 8'hc4 == io_in ? 256'h0 : _GEN_195; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_197 = 8'hc5 == io_in ? 256'h0 : _GEN_196; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_198 = 8'hc6 == io_in ? 256'h0 : _GEN_197; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_199 = 8'hc7 == io_in ? 256'h0 : _GEN_198; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_200 = 8'hc8 == io_in ? 256'h0 : _GEN_199; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_201 = 8'hc9 == io_in ? 256'h0 : _GEN_200; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_202 = 8'hca == io_in ? 256'h0 : _GEN_201; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_203 = 8'hcb == io_in ? 256'h0 : _GEN_202; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_204 = 8'hcc == io_in ? 256'h0 : _GEN_203; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_205 = 8'hcd == io_in ? 256'h0 : _GEN_204; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_206 = 8'hce == io_in ? 256'h0 : _GEN_205; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_207 = 8'hcf == io_in ? 256'h0 : _GEN_206; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_208 = 8'hd0 == io_in ? 256'h0 : _GEN_207; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_209 = 8'hd1 == io_in ? 256'h0 : _GEN_208; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_210 = 8'hd2 == io_in ? 256'h0 : _GEN_209; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_211 = 8'hd3 == io_in ? 256'h0 : _GEN_210; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_212 = 8'hd4 == io_in ? 256'h0 : _GEN_211; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_213 = 8'hd5 == io_in ? 256'h0 : _GEN_212; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_214 = 8'hd6 == io_in ? 256'h0 : _GEN_213; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_215 = 8'hd7 == io_in ? 256'h0 : _GEN_214; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_216 = 8'hd8 == io_in ? 256'h0 : _GEN_215; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_217 = 8'hd9 == io_in ? 256'h0 : _GEN_216; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_218 = 8'hda == io_in ? 256'h0 : _GEN_217; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_219 = 8'hdb == io_in ? 256'h0 : _GEN_218; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_220 = 8'hdc == io_in ? 256'h0 : _GEN_219; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_221 = 8'hdd == io_in ? 256'h0 : _GEN_220; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_222 = 8'hde == io_in ? 256'h0 : _GEN_221; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_223 = 8'hdf == io_in ? 256'h0 : _GEN_222; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_224 = 8'he0 == io_in ? 256'h0 : _GEN_223; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_225 = 8'he1 == io_in ? 256'h0 : _GEN_224; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_226 = 8'he2 == io_in ? 256'h0 : _GEN_225; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_227 = 8'he3 == io_in ? 256'h0 : _GEN_226; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_228 = 8'he4 == io_in ? 256'h0 : _GEN_227; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_229 = 8'he5 == io_in ? 256'h0 : _GEN_228; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_230 = 8'he6 == io_in ? 256'h0 : _GEN_229; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_231 = 8'he7 == io_in ? 256'h0 : _GEN_230; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_232 = 8'he8 == io_in ? 256'h0 : _GEN_231; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_233 = 8'he9 == io_in ? 256'h0 : _GEN_232; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_234 = 8'hea == io_in ? 256'h0 : _GEN_233; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_235 = 8'heb == io_in ? 256'h0 : _GEN_234; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_236 = 8'hec == io_in ? 256'h0 : _GEN_235; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_237 = 8'hed == io_in ? 256'h0 : _GEN_236; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_238 = 8'hee == io_in ? 256'h0 : _GEN_237; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_239 = 8'hef == io_in ? 256'h0 : _GEN_238; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_240 = 8'hf0 == io_in ? 256'h0 : _GEN_239; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_241 = 8'hf1 == io_in ? 256'h0 : _GEN_240; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_242 = 8'hf2 == io_in ? 256'h0 : _GEN_241; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_243 = 8'hf3 == io_in ? 256'h0 : _GEN_242; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_244 = 8'hf4 == io_in ? 256'h0 : _GEN_243; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_245 = 8'hf5 == io_in ? 256'h0 : _GEN_244; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_246 = 8'hf6 == io_in ? 256'h0 : _GEN_245; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_247 = 8'hf7 == io_in ? 256'h0 : _GEN_246; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_248 = 8'hf8 == io_in ? 256'h0 : _GEN_247; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_249 = 8'hf9 == io_in ? 256'h0 : _GEN_248; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_250 = 8'hfa == io_in ? 256'h0 : _GEN_249; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_251 = 8'hfb == io_in ? 256'h0 : _GEN_250; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_252 = 8'hfc == io_in ? 256'h0 : _GEN_251; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_253 = 8'hfd == io_in ? 256'h0 : _GEN_252; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_254 = 8'hfe == io_in ? 256'h0 : _GEN_253; // @[ps2.scala 221:11 ps2.scala 221:11]
  wire [255:0] _GEN_255 = 8'hff == io_in ? 256'h0 : _GEN_254; // @[ps2.scala 221:11 ps2.scala 221:11]
  assign io_out = _GEN_255[7:0]; // @[ps2.scala 221:11]
endmodule
module seg(
  input        io_en,
  input  [3:0] io_in,
  output [7:0] io_out
);
  wire [7:0] _GEN_0 = io_in == 4'hf ? 8'h8e : 8'hff; // @[ps2.scala 265:33 ps2.scala 266:19 ps2.scala 233:11]
  wire [7:0] _GEN_1 = io_in == 4'he ? 8'h86 : _GEN_0; // @[ps2.scala 263:33 ps2.scala 264:19]
  wire [7:0] _GEN_2 = io_in == 4'hd ? 8'ha1 : _GEN_1; // @[ps2.scala 261:33 ps2.scala 262:19]
  wire [7:0] _GEN_3 = io_in == 4'hc ? 8'hc6 : _GEN_2; // @[ps2.scala 259:33 ps2.scala 260:19]
  wire [7:0] _GEN_4 = io_in == 4'hb ? 8'h83 : _GEN_3; // @[ps2.scala 257:33 ps2.scala 258:19]
  wire [7:0] _GEN_5 = io_in == 4'ha ? 8'h88 : _GEN_4; // @[ps2.scala 255:33 ps2.scala 256:19]
  wire [7:0] _GEN_6 = io_in == 4'h9 ? 8'h90 : _GEN_5; // @[ps2.scala 253:32 ps2.scala 254:19]
  wire [7:0] _GEN_7 = io_in == 4'h8 ? 8'h80 : _GEN_6; // @[ps2.scala 251:32 ps2.scala 252:19]
  wire [7:0] _GEN_8 = io_in == 4'h7 ? 8'hf8 : _GEN_7; // @[ps2.scala 249:32 ps2.scala 250:19]
  wire [7:0] _GEN_9 = io_in == 4'h6 ? 8'h82 : _GEN_8; // @[ps2.scala 247:32 ps2.scala 248:19]
  wire [7:0] _GEN_10 = io_in == 4'h5 ? 8'h92 : _GEN_9; // @[ps2.scala 245:32 ps2.scala 246:19]
  wire [7:0] _GEN_11 = io_in == 4'h4 ? 8'h99 : _GEN_10; // @[ps2.scala 243:32 ps2.scala 244:19]
  wire [7:0] _GEN_12 = io_in == 4'h3 ? 8'hb0 : _GEN_11; // @[ps2.scala 241:32 ps2.scala 242:19]
  wire [7:0] _GEN_13 = io_in == 4'h2 ? 8'ha4 : _GEN_12; // @[ps2.scala 239:32 ps2.scala 240:19]
  wire [7:0] _GEN_14 = io_in == 4'h1 ? 8'hf9 : _GEN_13; // @[ps2.scala 237:32 ps2.scala 238:19]
  wire [7:0] _GEN_15 = io_in == 4'h0 ? 8'hc0 : _GEN_14; // @[ps2.scala 235:26 ps2.scala 236:19]
  assign io_out = io_en ? _GEN_15 : 8'hff; // @[ps2.scala 234:22 ps2.scala 269:15]
endmodule
module ps2(
  input        clock,
  input        reset,
  input        io_ps2_clk,
  input        io_ps2_data,
  output [7:0] io_ascii,
  output       io_ready,
  output [7:0] io_bcd8seg_0,
  output [7:0] io_bcd8seg_1,
  output [7:0] io_bcd8seg_2,
  output [7:0] io_bcd8seg_3,
  output [7:0] io_bcd8seg_4,
  output [7:0] io_bcd8seg_5,
  output [7:0] io_bcd8seg_6,
  output [7:0] io_bcd8seg_7
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
  wire  ps2_clock; // @[ps2.scala 18:19]
  wire  ps2_io_ps2_clk; // @[ps2.scala 18:19]
  wire  ps2_io_ps2_data; // @[ps2.scala 18:19]
  wire  ps2_io_nextdata_n; // @[ps2.scala 18:19]
  wire [7:0] ps2_io_data; // @[ps2.scala 18:19]
  wire  ps2_io_ready; // @[ps2.scala 18:19]
  wire [7:0] mm_io_in; // @[ps2.scala 75:18]
  wire [7:0] mm_io_out; // @[ps2.scala 75:18]
  wire  m0_io_en; // @[ps2.scala 80:18]
  wire [3:0] m0_io_in; // @[ps2.scala 80:18]
  wire [7:0] m0_io_out; // @[ps2.scala 80:18]
  wire  m1_io_en; // @[ps2.scala 84:18]
  wire [3:0] m1_io_in; // @[ps2.scala 84:18]
  wire [7:0] m1_io_out; // @[ps2.scala 84:18]
  wire  m2_io_en; // @[ps2.scala 88:18]
  wire [3:0] m2_io_in; // @[ps2.scala 88:18]
  wire [7:0] m2_io_out; // @[ps2.scala 88:18]
  wire  m3_io_en; // @[ps2.scala 92:18]
  wire [3:0] m3_io_in; // @[ps2.scala 92:18]
  wire [7:0] m3_io_out; // @[ps2.scala 92:18]
  wire  m4_io_en; // @[ps2.scala 96:18]
  wire [3:0] m4_io_in; // @[ps2.scala 96:18]
  wire [7:0] m4_io_out; // @[ps2.scala 96:18]
  wire  m5_io_en; // @[ps2.scala 100:18]
  wire [3:0] m5_io_in; // @[ps2.scala 100:18]
  wire [7:0] m5_io_out; // @[ps2.scala 100:18]
  wire  m6_io_en; // @[ps2.scala 104:18]
  wire [3:0] m6_io_in; // @[ps2.scala 104:18]
  wire [7:0] m6_io_out; // @[ps2.scala 104:18]
  wire  m7_io_en; // @[ps2.scala 108:18]
  wire [3:0] m7_io_in; // @[ps2.scala 108:18]
  wire [7:0] m7_io_out; // @[ps2.scala 108:18]
  reg [7:0] data; // @[ps2.scala 14:17]
  reg  ready; // @[ps2.scala 15:18]
  reg  nextdata; // @[ps2.scala 17:21]
  reg [3:0] now; // @[ps2.scala 32:20]
  reg [3:0] next; // @[ps2.scala 33:21]
  wire  _T = now == 4'h1; // @[ps2.scala 37:13]
  wire [1:0] _GEN_0 = ready ? 2'h2 : 2'h1; // @[ps2.scala 38:26 ps2.scala 39:17 ps2.scala 41:17]
  wire  _T_2 = now == 4'h2; // @[ps2.scala 43:19]
  wire  _T_3 = now == 4'h4; // @[ps2.scala 45:19]
  wire  _T_4 = now == 4'h8; // @[ps2.scala 47:19]
  reg [23:0] ps2segdata; // @[ps2.scala 52:27]
  wire [15:0] ps2segdata_hi = ps2segdata[15:0]; // @[ps2.scala 58:35]
  wire [23:0] _ps2segdata_T = {ps2segdata_hi,data}; // @[Cat.scala 30:58]
  wire  _GEN_6 = _T_2 ? nextdata : 1'h1; // @[ps2.scala 57:25 ps2.scala 17:21 ps2.scala 60:17]
  wire  _GEN_7 = _T_3 | _T_4 ? 1'h0 : _GEN_6; // @[ps2.scala 55:35 ps2.scala 56:17]
  reg [6:0] num; // @[ps2.scala 62:20]
  reg  segen; // @[ps2.scala 63:22]
  reg [1:0] ss; // @[ps2.scala 64:19]
  wire  ss_hi = ss[0]; // @[ps2.scala 70:15]
  wire [1:0] _ss_T = {ss_hi,segen}; // @[Cat.scala 30:58]
  wire [6:0] _num_T_1 = num + 7'h1; // @[ps2.scala 72:17]
  reg [7:0] ascii; // @[ps2.scala 74:22]
  wire [6:0] _GEN_1 = num % 7'ha; // @[ps2.scala 106:19]
  wire [6:0] _m6_io_in_T = _GEN_1[6:0]; // @[ps2.scala 106:19]
  wire [6:0] _m7_io_in_T = num / 7'ha; // @[ps2.scala 110:19]
  ps2_keyboard ps2 ( // @[ps2.scala 18:19]
    .clock(ps2_clock),
    .io_ps2_clk(ps2_io_ps2_clk),
    .io_ps2_data(ps2_io_ps2_data),
    .io_nextdata_n(ps2_io_nextdata_n),
    .io_data(ps2_io_data),
    .io_ready(ps2_io_ready)
  );
  ps2ascii mm ( // @[ps2.scala 75:18]
    .io_in(mm_io_in),
    .io_out(mm_io_out)
  );
  seg m0 ( // @[ps2.scala 80:18]
    .io_en(m0_io_en),
    .io_in(m0_io_in),
    .io_out(m0_io_out)
  );
  seg m1 ( // @[ps2.scala 84:18]
    .io_en(m1_io_en),
    .io_in(m1_io_in),
    .io_out(m1_io_out)
  );
  seg m2 ( // @[ps2.scala 88:18]
    .io_en(m2_io_en),
    .io_in(m2_io_in),
    .io_out(m2_io_out)
  );
  seg m3 ( // @[ps2.scala 92:18]
    .io_en(m3_io_en),
    .io_in(m3_io_in),
    .io_out(m3_io_out)
  );
  seg m4 ( // @[ps2.scala 96:18]
    .io_en(m4_io_en),
    .io_in(m4_io_in),
    .io_out(m4_io_out)
  );
  seg m5 ( // @[ps2.scala 100:18]
    .io_en(m5_io_en),
    .io_in(m5_io_in),
    .io_out(m5_io_out)
  );
  seg m6 ( // @[ps2.scala 104:18]
    .io_en(m6_io_en),
    .io_in(m6_io_in),
    .io_out(m6_io_out)
  );
  seg m7 ( // @[ps2.scala 108:18]
    .io_en(m7_io_en),
    .io_in(m7_io_in),
    .io_out(m7_io_out)
  );
  assign io_ascii = ascii; // @[ps2.scala 78:13]
  assign io_ready = ready; // @[ps2.scala 35:13]
  assign io_bcd8seg_0 = m0_io_out; // @[ps2.scala 83:18]
  assign io_bcd8seg_1 = m1_io_out; // @[ps2.scala 87:18]
  assign io_bcd8seg_2 = m2_io_out; // @[ps2.scala 91:18]
  assign io_bcd8seg_3 = m3_io_out; // @[ps2.scala 95:18]
  assign io_bcd8seg_4 = m0_io_out; // @[ps2.scala 99:18]
  assign io_bcd8seg_5 = m0_io_out; // @[ps2.scala 103:18]
  assign io_bcd8seg_6 = m6_io_out; // @[ps2.scala 107:18]
  assign io_bcd8seg_7 = m7_io_out; // @[ps2.scala 111:18]
  assign ps2_clock = clock;
  assign ps2_io_ps2_clk = io_ps2_clk; // @[ps2.scala 20:19]
  assign ps2_io_ps2_data = io_ps2_data; // @[ps2.scala 21:20]
  assign ps2_io_nextdata_n = nextdata; // @[ps2.scala 22:22]
  assign mm_io_in = ps2segdata[7:0]; // @[ps2.scala 76:25]
  assign m0_io_en = segen; // @[ps2.scala 81:13]
  assign m0_io_in = ps2segdata[3:0]; // @[ps2.scala 82:25]
  assign m1_io_en = segen; // @[ps2.scala 85:13]
  assign m1_io_in = ps2segdata[7:4]; // @[ps2.scala 86:25]
  assign m2_io_en = segen; // @[ps2.scala 89:13]
  assign m2_io_in = ascii[3:0]; // @[ps2.scala 90:20]
  assign m3_io_en = segen; // @[ps2.scala 93:13]
  assign m3_io_in = ascii[7:4]; // @[ps2.scala 94:20]
  assign m4_io_en = 1'h0; // @[ps2.scala 97:13]
  assign m4_io_in = ps2segdata[3:0]; // @[ps2.scala 98:25]
  assign m5_io_en = 1'h0; // @[ps2.scala 101:13]
  assign m5_io_in = ps2segdata[7:4]; // @[ps2.scala 102:25]
  assign m6_io_en = 1'h1; // @[ps2.scala 105:13]
  assign m6_io_in = _m6_io_in_T[3:0]; // @[ps2.scala 106:30]
  assign m7_io_en = 1'h1; // @[ps2.scala 109:13]
  assign m7_io_in = _m7_io_in_T[3:0]; // @[ps2.scala 110:30]
  always @(posedge clock) begin
    data <= ps2_io_data; // @[ps2.scala 23:9]
    ready <= ps2_io_ready; // @[ps2.scala 24:10]
    nextdata <= _T | _GEN_7; // @[ps2.scala 53:19 ps2.scala 54:17]
    if (reset) begin // @[ps2.scala 32:20]
      now <= 4'h1; // @[ps2.scala 32:20]
    end else begin
      now <= next; // @[ps2.scala 36:8]
    end
    if (reset) begin // @[ps2.scala 33:21]
      next <= 4'h1; // @[ps2.scala 33:21]
    end else if (now == 4'h1) begin // @[ps2.scala 37:19]
      next <= {{2'd0}, _GEN_0};
    end else if (now == 4'h2) begin // @[ps2.scala 43:25]
      next <= 4'h4; // @[ps2.scala 44:13]
    end else if (now == 4'h4) begin // @[ps2.scala 45:25]
      next <= 4'h8; // @[ps2.scala 46:13]
    end else begin
      next <= 4'h1;
    end
    if (reset) begin // @[ps2.scala 52:27]
      ps2segdata <= 24'h0; // @[ps2.scala 52:27]
    end else if (!(_T)) begin // @[ps2.scala 53:19]
      if (!(_T_3 | _T_4)) begin // @[ps2.scala 55:35]
        if (_T_2) begin // @[ps2.scala 57:25]
          ps2segdata <= _ps2segdata_T; // @[ps2.scala 58:19]
        end
      end
    end
    if (reset) begin // @[ps2.scala 62:20]
      num <= 7'h0; // @[ps2.scala 62:20]
    end else if (ss == 2'h2) begin // @[ps2.scala 71:23]
      num <= _num_T_1; // @[ps2.scala 72:12]
    end
    if (reset) begin // @[ps2.scala 63:22]
      segen <= 1'h0; // @[ps2.scala 63:22]
    end else if (ps2segdata[23:16] == 8'hf0 & ps2segdata[7:0] == ps2segdata[15:8]) begin // @[ps2.scala 65:78]
      segen <= 1'h0; // @[ps2.scala 66:14]
    end else begin
      segen <= 1'h1; // @[ps2.scala 68:14]
    end
    if (reset) begin // @[ps2.scala 64:19]
      ss <= 2'h0; // @[ps2.scala 64:19]
    end else begin
      ss <= _ss_T; // @[ps2.scala 70:7]
    end
    if (reset) begin // @[ps2.scala 74:22]
      ascii <= 8'h0; // @[ps2.scala 74:22]
    end else begin
      ascii <= mm_io_out; // @[ps2.scala 77:10]
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
  data = _RAND_0[7:0];
  _RAND_1 = {1{`RANDOM}};
  ready = _RAND_1[0:0];
  _RAND_2 = {1{`RANDOM}};
  nextdata = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  now = _RAND_3[3:0];
  _RAND_4 = {1{`RANDOM}};
  next = _RAND_4[3:0];
  _RAND_5 = {1{`RANDOM}};
  ps2segdata = _RAND_5[23:0];
  _RAND_6 = {1{`RANDOM}};
  num = _RAND_6[6:0];
  _RAND_7 = {1{`RANDOM}};
  segen = _RAND_7[0:0];
  _RAND_8 = {1{`RANDOM}};
  ss = _RAND_8[1:0];
  _RAND_9 = {1{`RANDOM}};
  ascii = _RAND_9[7:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module top(
  input        clock,
  input        reset,
  input        io_ps2_clk,
  input        io_ps2_data,
  output       io_VGA_HSYNC,
  output       io_VGA_VSYNC,
  output       io_VGA_BLANK_N,
  output [7:0] io_VGA_R,
  output [7:0] io_VGA_G,
  output [7:0] io_VGA_B,
  output [7:0] io_bcd8seg_0,
  output [7:0] io_bcd8seg_1,
  output [7:0] io_bcd8seg_2,
  output [7:0] io_bcd8seg_3,
  output [7:0] io_bcd8seg_4,
  output [7:0] io_bcd8seg_5,
  output [7:0] io_bcd8seg_6,
  output [7:0] io_bcd8seg_7
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
`endif // RANDOMIZE_REG_INIT
  wire  VGA_clock; // @[top.scala 19:19]
  wire  VGA_reset; // @[top.scala 19:19]
  wire [1:0] VGA_io_ready; // @[top.scala 19:19]
  wire [7:0] VGA_io_ascii; // @[top.scala 19:19]
  wire  VGA_io_VGA_HSYNC; // @[top.scala 19:19]
  wire  VGA_io_VGA_VSYNC; // @[top.scala 19:19]
  wire  VGA_io_VGA_BLANK_N; // @[top.scala 19:19]
  wire [7:0] VGA_io_VGA_R; // @[top.scala 19:19]
  wire [7:0] VGA_io_VGA_G; // @[top.scala 19:19]
  wire [7:0] VGA_io_VGA_B; // @[top.scala 19:19]
  wire  PS2_clock; // @[top.scala 21:19]
  wire  PS2_reset; // @[top.scala 21:19]
  wire  PS2_io_ps2_clk; // @[top.scala 21:19]
  wire  PS2_io_ps2_data; // @[top.scala 21:19]
  wire [7:0] PS2_io_ascii; // @[top.scala 21:19]
  wire  PS2_io_ready; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_0; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_1; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_2; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_3; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_4; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_5; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_6; // @[top.scala 21:19]
  wire [7:0] PS2_io_bcd8seg_7; // @[top.scala 21:19]
  reg [3:0] now; // @[top.scala 28:20]
  reg [3:0] next; // @[top.scala 29:21]
  wire  _T = now == 4'h1; // @[top.scala 32:13]
  wire [1:0] _GEN_0 = PS2_io_ready ? 2'h2 : 2'h1; // @[top.scala 33:33 top.scala 34:17 top.scala 36:17]
  wire  _T_2 = now == 4'h2; // @[top.scala 38:19]
  wire  _T_3 = now == 4'h4; // @[top.scala 40:19]
  wire  _T_4 = now == 4'h8; // @[top.scala 42:19]
  wire [7:0] _GEN_5 = _T_3 ? PS2_io_ascii : 8'h5c; // @[top.scala 51:25 top.scala 52:21 top.scala 20:17]
  wire [7:0] _GEN_8 = _T_4 ? 8'h5c : _GEN_5; // @[top.scala 49:25 top.scala 20:17]
  wire  _GEN_9 = _T | _T_2 ? 1'h0 : _T_4; // @[top.scala 47:29 top.scala 48:21]
  vga VGA ( // @[top.scala 19:19]
    .clock(VGA_clock),
    .reset(VGA_reset),
    .io_ready(VGA_io_ready),
    .io_ascii(VGA_io_ascii),
    .io_VGA_HSYNC(VGA_io_VGA_HSYNC),
    .io_VGA_VSYNC(VGA_io_VGA_VSYNC),
    .io_VGA_BLANK_N(VGA_io_VGA_BLANK_N),
    .io_VGA_R(VGA_io_VGA_R),
    .io_VGA_G(VGA_io_VGA_G),
    .io_VGA_B(VGA_io_VGA_B)
  );
  ps2 PS2 ( // @[top.scala 21:19]
    .clock(PS2_clock),
    .reset(PS2_reset),
    .io_ps2_clk(PS2_io_ps2_clk),
    .io_ps2_data(PS2_io_ps2_data),
    .io_ascii(PS2_io_ascii),
    .io_ready(PS2_io_ready),
    .io_bcd8seg_0(PS2_io_bcd8seg_0),
    .io_bcd8seg_1(PS2_io_bcd8seg_1),
    .io_bcd8seg_2(PS2_io_bcd8seg_2),
    .io_bcd8seg_3(PS2_io_bcd8seg_3),
    .io_bcd8seg_4(PS2_io_bcd8seg_4),
    .io_bcd8seg_5(PS2_io_bcd8seg_5),
    .io_bcd8seg_6(PS2_io_bcd8seg_6),
    .io_bcd8seg_7(PS2_io_bcd8seg_7)
  );
  assign io_VGA_HSYNC = VGA_io_VGA_HSYNC; // @[top.scala 62:17]
  assign io_VGA_VSYNC = VGA_io_VGA_VSYNC; // @[top.scala 63:17]
  assign io_VGA_BLANK_N = VGA_io_VGA_BLANK_N; // @[top.scala 64:19]
  assign io_VGA_R = VGA_io_VGA_R; // @[top.scala 65:13]
  assign io_VGA_G = VGA_io_VGA_G; // @[top.scala 66:13]
  assign io_VGA_B = VGA_io_VGA_B; // @[top.scala 67:13]
  assign io_bcd8seg_0 = PS2_io_bcd8seg_0; // @[top.scala 60:15]
  assign io_bcd8seg_1 = PS2_io_bcd8seg_1; // @[top.scala 60:15]
  assign io_bcd8seg_2 = PS2_io_bcd8seg_2; // @[top.scala 60:15]
  assign io_bcd8seg_3 = PS2_io_bcd8seg_3; // @[top.scala 60:15]
  assign io_bcd8seg_4 = PS2_io_bcd8seg_4; // @[top.scala 60:15]
  assign io_bcd8seg_5 = PS2_io_bcd8seg_5; // @[top.scala 60:15]
  assign io_bcd8seg_6 = PS2_io_bcd8seg_6; // @[top.scala 60:15]
  assign io_bcd8seg_7 = PS2_io_bcd8seg_7; // @[top.scala 60:15]
  assign VGA_clock = clock;
  assign VGA_reset = reset;
  assign VGA_io_ready = {{1'd0}, _GEN_9}; // @[top.scala 47:29 top.scala 48:21]
  assign VGA_io_ascii = _T | _T_2 ? 8'h5c : _GEN_8; // @[top.scala 47:29 top.scala 20:17]
  assign PS2_clock = clock;
  assign PS2_reset = reset;
  assign PS2_io_ps2_clk = io_ps2_clk; // @[top.scala 58:19]
  assign PS2_io_ps2_data = io_ps2_data; // @[top.scala 59:20]
  always @(posedge clock) begin
    if (reset) begin // @[top.scala 28:20]
      now <= 4'h1; // @[top.scala 28:20]
    end else begin
      now <= next; // @[top.scala 30:8]
    end
    if (reset) begin // @[top.scala 29:21]
      next <= 4'h1; // @[top.scala 29:21]
    end else if (now == 4'h1) begin // @[top.scala 32:19]
      next <= {{2'd0}, _GEN_0};
    end else if (now == 4'h2) begin // @[top.scala 38:25]
      next <= 4'h4; // @[top.scala 39:13]
    end else if (now == 4'h4) begin // @[top.scala 40:25]
      next <= 4'h8; // @[top.scala 41:13]
    end else begin
      next <= 4'h1;
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
  now = _RAND_0[3:0];
  _RAND_1 = {1{`RANDOM}};
  next = _RAND_1[3:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule

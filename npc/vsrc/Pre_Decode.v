module Pre_Decode(
  input  [31:0] io_inst,
  output        io_jump,
  output        io_j,
  output [31:0] io_offset
);
  wire  _io_jump_T_3 = io_inst[14:12] == 3'h0; // @[IFU.scala 95:51]
  wire  _io_jump_T_5 = io_inst == 32'h73; // @[IFU.scala 96:17]
  wire  _io_jump_T_6 = io_inst[6:0] == 7'h67 & io_inst[14:12] == 3'h0 | _io_jump_T_5; // @[IFU.scala 95:64]
  wire  _io_jump_T_7 = io_inst == 32'h30200073; // @[IFU.scala 97:17]
  wire  _io_jump_T_8 = _io_jump_T_6 | _io_jump_T_7; // @[IFU.scala 96:64]
  wire  _io_jump_T_9 = io_inst == 32'h100073; // @[IFU.scala 98:17]
  wire  jal = io_inst[6:0] == 7'h6f; // @[IFU.scala 101:21]
  wire  _b_T_1 = io_inst[6:0] == 7'h63; // @[IFU.scala 103:21]
  wire  _b_T_9 = _b_T_1 & io_inst[14:12] == 3'h1; // @[IFU.scala 104:37]
  wire  _b_T_10 = io_inst[6:0] == 7'h63 & _io_jump_T_3 | _b_T_9; // @[IFU.scala 103:63]
  wire  _b_T_15 = _b_T_1 & io_inst[14:12] == 3'h5; // @[IFU.scala 105:37]
  wire  _b_T_16 = _b_T_10 | _b_T_15; // @[IFU.scala 104:63]
  wire  _b_T_21 = _b_T_1 & io_inst[14:12] == 3'h7; // @[IFU.scala 106:37]
  wire  _b_T_22 = _b_T_16 | _b_T_21; // @[IFU.scala 105:63]
  wire  _b_T_27 = _b_T_1 & io_inst[14:12] == 3'h4; // @[IFU.scala 107:37]
  wire  _b_T_28 = _b_T_22 | _b_T_27; // @[IFU.scala 106:63]
  wire  _b_T_33 = _b_T_1 & io_inst[14:12] == 3'h6; // @[IFU.scala 108:37]
  wire  b = _b_T_28 | _b_T_33; // @[IFU.scala 107:63]
  wire [42:0] _jal_off_T_2 = io_inst[31] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 77:12]
  wire [63:0] jal_off = {_jal_off_T_2,io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 33:92]
  wire [50:0] _b_off_T_2 = io_inst[31] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 77:12]
  wire [63:0] b_off = {_b_off_T_2,io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8],1'h0}; // @[Cat.scala 33:92]
  wire [63:0] _io_offset_T = jal ? jal_off : b_off; // @[IFU.scala 115:17]
  assign io_jump = _io_jump_T_8 | _io_jump_T_9; // @[IFU.scala 97:64]
  assign io_j = jal | b & io_inst[31]; // @[IFU.scala 114:13]
  assign io_offset = _io_offset_T[31:0]; // @[IFU.scala 115:12]
endmodule

module Pre_Decode(
  input  [31:0] io_inst,
  output        io_jump,
  output        io_j,
  output [31:0] io_offset
);
  wire  _io_jump_T_3 = io_inst[14:12] == 3'h0; // @[IFU.scala 111:51]
  wire  _io_jump_T_5 = io_inst == 32'h73; // @[IFU.scala 112:17]
  wire  _io_jump_T_6 = io_inst[6:0] == 7'h67 & io_inst[14:12] == 3'h0 | _io_jump_T_5; // @[IFU.scala 111:64]
  wire  _io_jump_T_7 = io_inst == 32'h30200073; // @[IFU.scala 113:17]
  wire  _io_jump_T_8 = _io_jump_T_6 | _io_jump_T_7; // @[IFU.scala 112:64]
  wire  _io_jump_T_9 = io_inst == 32'h100073; // @[IFU.scala 114:17]
  wire  jal = io_inst[6:0] == 7'h6f; // @[IFU.scala 117:21]
  wire  _b_T_1 = io_inst[6:0] == 7'h63; // @[IFU.scala 119:21]
  wire  _b_T_9 = _b_T_1 & io_inst[14:12] == 3'h1; // @[IFU.scala 120:37]
  wire  _b_T_10 = io_inst[6:0] == 7'h63 & _io_jump_T_3 | _b_T_9; // @[IFU.scala 119:63]
  wire  _b_T_15 = _b_T_1 & io_inst[14:12] == 3'h5; // @[IFU.scala 121:37]
  wire  _b_T_16 = _b_T_10 | _b_T_15; // @[IFU.scala 120:63]
  wire  _b_T_21 = _b_T_1 & io_inst[14:12] == 3'h7; // @[IFU.scala 122:37]
  wire  _b_T_22 = _b_T_16 | _b_T_21; // @[IFU.scala 121:63]
  wire  _b_T_27 = _b_T_1 & io_inst[14:12] == 3'h4; // @[IFU.scala 123:37]
  wire  _b_T_28 = _b_T_22 | _b_T_27; // @[IFU.scala 122:63]
  wire  _b_T_33 = _b_T_1 & io_inst[14:12] == 3'h6; // @[IFU.scala 124:37]
  wire  b = _b_T_28 | _b_T_33; // @[IFU.scala 123:63]
  wire [42:0] _jal_off_T_2 = io_inst[31] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 77:12]
  wire [63:0] jal_off = {_jal_off_T_2,io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 33:92]
  wire [50:0] _b_off_T_2 = io_inst[31] ? 51'h7ffffffffffff : 51'h0; // @[Bitwise.scala 77:12]
  wire [63:0] b_off = {_b_off_T_2,io_inst[31],io_inst[7],io_inst[30:25],io_inst[11:8],1'h0}; // @[Cat.scala 33:92]
  wire [63:0] _io_offset_T = jal ? jal_off : b_off; // @[IFU.scala 131:17]
  assign io_jump = _io_jump_T_8 | _io_jump_T_9; // @[IFU.scala 113:64]
  assign io_j = jal | b & io_inst[31]; // @[IFU.scala 130:13]
  assign io_offset = _io_offset_T[31:0]; // @[IFU.scala 131:12]
endmodule

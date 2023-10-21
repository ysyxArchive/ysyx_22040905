module Pre_Decode(
  input  [31:0] io_inst,
  output        io_jump,
  output        io_jal,
  output [31:0] io_jal_off
);
  wire  _io_jump_T_3 = io_inst[14:12] == 3'h0; // @[IFU.scala 90:51]
  wire  _io_jump_T_6 = io_inst[6:0] == 7'h63; // @[IFU.scala 91:22]
  wire  _io_jump_T_9 = io_inst[6:0] == 7'h63 & _io_jump_T_3; // @[IFU.scala 91:38]
  wire  _io_jump_T_10 = io_inst[6:0] == 7'h67 & io_inst[14:12] == 3'h0 | _io_jump_T_9; // @[IFU.scala 90:64]
  wire  _io_jump_T_15 = _io_jump_T_6 & io_inst[14:12] == 3'h1; // @[IFU.scala 92:38]
  wire  _io_jump_T_16 = _io_jump_T_10 | _io_jump_T_15; // @[IFU.scala 91:64]
  wire  _io_jump_T_21 = _io_jump_T_6 & io_inst[14:12] == 3'h5; // @[IFU.scala 93:38]
  wire  _io_jump_T_22 = _io_jump_T_16 | _io_jump_T_21; // @[IFU.scala 92:64]
  wire  _io_jump_T_27 = _io_jump_T_6 & io_inst[14:12] == 3'h7; // @[IFU.scala 94:38]
  wire  _io_jump_T_28 = _io_jump_T_22 | _io_jump_T_27; // @[IFU.scala 93:64]
  wire  _io_jump_T_33 = _io_jump_T_6 & io_inst[14:12] == 3'h4; // @[IFU.scala 95:38]
  wire  _io_jump_T_34 = _io_jump_T_28 | _io_jump_T_33; // @[IFU.scala 94:64]
  wire  _io_jump_T_39 = _io_jump_T_6 & io_inst[14:12] == 3'h6; // @[IFU.scala 96:38]
  wire  _io_jump_T_40 = _io_jump_T_34 | _io_jump_T_39; // @[IFU.scala 95:64]
  wire  _io_jump_T_41 = io_inst == 32'h73; // @[IFU.scala 97:17]
  wire  _io_jump_T_42 = _io_jump_T_40 | _io_jump_T_41; // @[IFU.scala 96:64]
  wire  _io_jump_T_43 = io_inst == 32'h30200073; // @[IFU.scala 98:17]
  wire  _io_jump_T_44 = _io_jump_T_42 | _io_jump_T_43; // @[IFU.scala 97:64]
  wire  _io_jump_T_45 = io_inst == 32'h100073; // @[IFU.scala 99:17]
  wire [42:0] _io_jal_off_T_2 = io_inst[31] ? 43'h7ffffffffff : 43'h0; // @[Bitwise.scala 77:12]
  wire [63:0] _io_jal_off_T_11 = {_io_jal_off_T_2,io_inst[31],io_inst[19:12],io_inst[20],io_inst[30:21],1'h0}; // @[Cat.scala 33:92]
  assign io_jump = _io_jump_T_44 | _io_jump_T_45; // @[IFU.scala 98:64]
  assign io_jal = io_inst[6:0] == 7'h6f; // @[IFU.scala 101:21]
  assign io_jal_off = _io_jal_off_T_11[31:0]; // @[IFU.scala 102:13]
endmodule

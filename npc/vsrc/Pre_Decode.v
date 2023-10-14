module Pre_Decode(
  input  [31:0] io_inst,
  output        io_jump
);
  wire  _io_jump_T_5 = io_inst[14:12] == 3'h0; // @[IFU.scala 87:51]
  wire  _io_jump_T_6 = io_inst[6:0] == 7'h67 & io_inst[14:12] == 3'h0; // @[IFU.scala 87:38]
  wire  _io_jump_T_7 = io_inst[6:0] == 7'h6f | _io_jump_T_6; // @[IFU.scala 86:64]
  wire  _io_jump_T_9 = io_inst[6:0] == 7'h63; // @[IFU.scala 88:22]
  wire  _io_jump_T_12 = io_inst[6:0] == 7'h63 & _io_jump_T_5; // @[IFU.scala 88:38]
  wire  _io_jump_T_13 = _io_jump_T_7 | _io_jump_T_12; // @[IFU.scala 87:64]
  wire  _io_jump_T_18 = _io_jump_T_9 & io_inst[14:12] == 3'h1; // @[IFU.scala 89:38]
  wire  _io_jump_T_19 = _io_jump_T_13 | _io_jump_T_18; // @[IFU.scala 88:64]
  wire  _io_jump_T_24 = _io_jump_T_9 & io_inst[14:12] == 3'h5; // @[IFU.scala 90:38]
  wire  _io_jump_T_25 = _io_jump_T_19 | _io_jump_T_24; // @[IFU.scala 89:64]
  wire  _io_jump_T_30 = _io_jump_T_9 & io_inst[14:12] == 3'h7; // @[IFU.scala 91:38]
  wire  _io_jump_T_31 = _io_jump_T_25 | _io_jump_T_30; // @[IFU.scala 90:64]
  wire  _io_jump_T_36 = _io_jump_T_9 & io_inst[14:12] == 3'h4; // @[IFU.scala 92:38]
  wire  _io_jump_T_37 = _io_jump_T_31 | _io_jump_T_36; // @[IFU.scala 91:64]
  wire  _io_jump_T_42 = _io_jump_T_9 & io_inst[14:12] == 3'h6; // @[IFU.scala 93:38]
  wire  _io_jump_T_43 = _io_jump_T_37 | _io_jump_T_42; // @[IFU.scala 92:64]
  wire  _io_jump_T_44 = io_inst == 32'h73; // @[IFU.scala 94:17]
  wire  _io_jump_T_45 = _io_jump_T_43 | _io_jump_T_44; // @[IFU.scala 93:64]
  wire  _io_jump_T_46 = io_inst == 32'h30200073; // @[IFU.scala 95:17]
  wire  _io_jump_T_47 = _io_jump_T_45 | _io_jump_T_46; // @[IFU.scala 94:64]
  wire  _io_jump_T_48 = io_inst == 32'h100073; // @[IFU.scala 96:17]
  assign io_jump = _io_jump_T_47 | _io_jump_T_48; // @[IFU.scala 95:64]
endmodule

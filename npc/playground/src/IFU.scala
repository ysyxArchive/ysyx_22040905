import chisel3._
import chisel3.util._
import chisel3.stage._

class ID extends Bundle{
  val pc=Output(UInt(32.W))
  val inst=Output(UInt(32.W))
  val isJump=Output(UInt(1.W))
}

class It extends Bundle{
  val en=Output(UInt(1.W))
  val inst=Output(UInt(32.W))
}

class IFUBundle extends Bundle{
  val pc=Output(UInt(64.W))
  val pc_dnpc=Input(UInt(64.W))
  val clearJump=Input(UInt(1.W))
  val lm=(new AXILite)
  val out=Decoupled(new ID)
  val flush=Input(UInt(1.W))
}

class IFU extends Module{
  val io = IO(new IFUBundle)

  val s_idle :: s_wait_rvalid :: s_wait_next :: Nil = Enum(3)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle, List(
    s_idle        -> Mux(io.lm.ar.fire, s_wait_rvalid, s_idle),
    s_wait_rvalid -> Mux(io.lm.r.fire, s_wait_next, s_wait_rvalid),
    s_wait_next   -> Mux(io.out.fire, s_idle, s_wait_next)
  ))
  val IF_reg_inst=RegEnable(io.lm.r.bits.data(31,0),0.U(32.W),io.lm.r.fire)
  //pre decode
  val pre_decode =Module(new Pre_Decode)
  pre_decode.io.inst:=IF_reg_inst

  val next_valid=Wire(UInt(1.W))
  val next_pc=Wire(UInt(64.W))
  val IF_reg_valid=RegEnable(next_valid,1.U,true.B)
  val IF_reg_pc=RegEnable(next_pc,"x80000000".U(64.W),next_valid.asBool)
  next_valid:=Mux(io.clearJump.asBool,1.U,
              Mux((pre_decode.io.jump & io.out.fire).asBool,0.U,
              IF_reg_valid))
  io.pc:=IF_reg_pc
  next_pc:= Mux(io.clearJump.asBool,io.pc_dnpc,
            Mux(io.out.fire,IF_reg_pc+4.U,
            IF_reg_pc))

  io.lm.ar.bits.addr:=IF_reg_pc(31,0)
  io.lm.ar.valid:=(state === s_idle & ~reset.asBool & IF_reg_valid)
  io.lm.r.ready:= 1.U
  io.lm.aw.bits.addr:=0.U
  io.lm.aw.valid:=0.U
  io.lm.w.valid:=0.U
  io.lm.b.ready:=0.U
  io.lm.w.bits.data:=0.U
  io.lm.w.bits.strb:=0.U

  //val nop=0x0000013.U 
  io.out.bits.inst:=IF_reg_inst
  io.out.bits.pc:=IF_reg_pc(31,0)
  io.out.bits.isJump:=pre_decode.io.jump
  io.out.valid:=Mux(state===s_wait_next,1.U,0.U)

  val it=Module(new itrace)
  it.io.en:=io.lm.r.fire
  it.io.inst:=io.lm.r.bits.data(31,0) 
  it.io.pc:=io.lm.ar.bits.addr


}

class Pre_Decode extends Module{
  val io=IO(new Bundle{
    val inst=Input(UInt(32.W))
    val jump=Output(UInt(1.W))
  })
  val inst=io.inst
  io.jump:=(inst(6,0)==="b1101111".U)                          |  //jal,J
           (inst(6,0)==="b1100111".U)&(inst(14,12)==="b000".U) |  //jalr,I
           (inst(6,0)==="b1100011".U)&(inst(14,12)==="b000".U) |  //beq,B
           (inst(6,0)==="b1100011".U)&(inst(14,12)==="b001".U) |  //bne,B
           (inst(6,0)==="b1100011".U)&(inst(14,12)==="b101".U) |  //bge,B
           (inst(6,0)==="b1100011".U)&(inst(14,12)==="b111".U) |  //bgeu,B
           (inst(6,0)==="b1100011".U)&(inst(14,12)==="b100".U) |  //blt,B
           (inst(6,0)==="b1100011".U)&(inst(14,12)==="b110".U) |  //bltu,B
           (inst==="b00000000000000000000000001110011".U)      |  //ecall,N
           (inst==="b00110000001000000000000001110011".U)         //mret,N
}
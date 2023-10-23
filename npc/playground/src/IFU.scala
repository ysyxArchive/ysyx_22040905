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
  val irq_nextpc=Input(UInt(32.W))
  val irq=Input(UInt(1.W))
  val real_pc=Input(UInt(32.W))
  val p_error=Input(UInt(1.W))
  val B_num=Output(UInt(64.W))
  val B_Error=Output(UInt(64.W))
  val block_num=Output(UInt(64.W))
  //val b_inst=Output(UInt(1.W))
  //val flush=Input(UInt(1.W))
}

class IFU extends Module{
  val io = IO(new IFUBundle)

  val s_idle :: s_wait_rvalid :: Nil = Enum(2)
  val state = RegInit(s_idle)
  val next_valid=Wire(UInt(1.W))
  val IF_reg_inst=RegEnable(io.lm.r.bits.data(31,0),0.U(32.W),io.lm.r.fire)
  val pre_decode =Module(new Pre_Decode)
  val next_pc=Wire(UInt(64.W))
  val IF_reg_valid=RegEnable(next_valid,1.U,true.B)
  val IF_reg_pc=RegEnable(next_pc,"x80000000".U(64.W),io.p_error.asBool|next_valid.asBool)

  state := MuxLookup(state, s_idle, List(
    s_idle        -> Mux(io.irq.asBool,s_idle,Mux(io.lm.ar.fire, s_wait_rvalid, s_idle)),
    s_wait_rvalid -> Mux(io.irq.asBool,s_idle,Mux(io.lm.r.fire && (~next_valid.asBool), s_idle, s_wait_rvalid)),
  ))
  //pre decode
  pre_decode.io.inst:=io.lm.r.bits.data(31,0)

  next_valid:=Mux(io.irq.asBool|io.clearJump.asBool|io.p_error.asBool,1.U,
              Mux((pre_decode.io.jump & io.out.fire).asBool,0.U,
              IF_reg_valid))
  io.pc:=IF_reg_pc
  next_pc:= Mux(io.irq.asBool,io.irq_nextpc,
            Mux(io.p_error.asBool,io.real_pc,
            Mux(io.clearJump.asBool,io.pc_dnpc,
            Mux(~io.out.fire,IF_reg_pc,
            Mux(pre_decode.io.j.asBool,IF_reg_pc+pre_decode.io.offset,  //如果跳转
            IF_reg_pc+4.U)))))

  io.lm.ar.bits.addr:=next_pc(31,0)
  io.lm.ar.valid:=(~reset.asBool & next_valid )
  io.lm.r.ready:= 1.U
  io.lm.aw.bits.addr:=0.U
  io.lm.aw.valid:=0.U
  io.lm.w.valid:=0.U
  io.lm.b.ready:=0.U
  io.lm.w.bits.data:=0.U
  io.lm.w.bits.strb:=0.U

  val nop=0x0000013.U 
  io.out.bits.inst:=Mux(IF_reg_valid === 1.U,io.lm.r.bits.data(31,0),nop)
  io.out.bits.pc:=Mux(IF_reg_valid === 1.U,IF_reg_pc(31,0),0.U)
  io.out.bits.isJump:=Mux(IF_reg_valid === 1.U,pre_decode.io.jump,0.U)
  io.out.valid:= io.lm.r.valid ||  (!IF_reg_valid) || io.irq.asBool || io.p_error.asBool

  val it=Module(new itrace)
  it.io.en:=io.out.fire & IF_reg_valid
  it.io.inst:=io.lm.r.bits.data(31,0) 
  it.io.pc:=IF_reg_pc(31,0)


  //分支预测率
  val B_num=RegInit(0.U(64.W))
  val B_Error=RegInit(0.U(64.W))

  B_num := Mux(io.out.fire & pre_decode.io.j.asBool,B_num+1.U,B_num)
  B_Error := Mux(io.p_error.asBool,B_Error+1.U,B_Error)

  io.B_num := B_num
  io.B_Error := B_Error

  //阻塞指令数
  val block_num=RegInit(0.U(64.W))
  block_num:=Mux(io.out.fire & pre_decode.io.jump.asBool,block_num+1.U,block_num)
  io.block_num:=block_num
}

class Pre_Decode extends Module{
  val io=IO(new Bundle{
    val inst=Input(UInt(32.W))
    val jump=Output(UInt(1.W))
    val j=Output(UInt(1.W))
    val offset=Output(UInt(32.W))
  })
  val inst=io.inst
  //阻塞
  io.jump:= 
           (inst(6,0)==="b1100111".U)&(inst(14,12)==="b000".U) |  //jalr,I
           (inst==="b00000000000000000000000001110011".U)      |  //ecall,N
           (inst==="b00110000001000000000000001110011".U)      |  //mret,N
           (inst==="b00000000000100000000000001110011".U)         //ebreak,N

  //跳转
  val jal=(inst(6,0)==="b1101111".U)                           //jal,J
  val b = 
          (inst(6,0)==="b1100011".U)&(inst(14,12)==="b000".U) |  //beq,B
          (inst(6,0)==="b1100011".U)&(inst(14,12)==="b001".U) |  //bne,B
          (inst(6,0)==="b1100011".U)&(inst(14,12)==="b101".U) |  //bge,B
          (inst(6,0)==="b1100011".U)&(inst(14,12)==="b111".U) |  //bgeu,B
          (inst(6,0)==="b1100011".U)&(inst(14,12)==="b100".U) |  //blt,B
          (inst(6,0)==="b1100011".U)&(inst(14,12)==="b110".U)    //bltu,B

  //sext(offset)
  val jal_off=Cat(Fill(43,inst(31)),Cat(inst(31),Cat(inst(19,12),Cat(inst(20),Cat(inst(30,21),0.U)))))   //jal
  val b_off  =Cat(Fill(51,inst(31)),Cat(inst(31),Cat(inst(7),Cat(inst(30,25),Cat(inst(11,8),0.U)))))     //B

  io.j:=jal | (b & inst(31))  //inst(31)为符号位,为1时为负数,表示向后跳转，预测此时跳转
  io.offset:=Mux(jal,jal_off,b_off)
}
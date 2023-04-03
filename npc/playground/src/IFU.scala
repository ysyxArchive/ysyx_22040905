import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class Inst extends Bundle{
  val inst=Output(UInt(32.W))
}
class It extends Bundle{
  val en=Output(UInt(1.W))
  val inst=Output(UInt(32.W))
}
class IFUBundle extends Bundle{
  val pc=Input(UInt(64.W))
  val lm=(new AXILite)
  val out=Decoupled(new Inst)
}
class IFU extends Module{
  val io = IO(new IFUBundle)

  val s_idle :: s_wait_rvalid :: s_wait_next :: s_wait2 :: Nil = Enum(4)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle, List(
    s_idle        -> Mux(io.lm.ar.fire, s_wait_rvalid, s_idle),
    s_wait_rvalid -> Mux(io.lm.r.fire, s_wait_next, s_wait_rvalid),
    s_wait_next   -> Mux(io.out.fire, s_idle, s_wait_next)
  ))

  io.lm.ar.bits.addr:=io.pc(31,0)
  io.lm.ar.valid:=(state === s_idle & ~reset.asBool)
  io.lm.r.ready:=(state === s_wait_rvalid)
  io.lm.aw.bits.addr:=0.U
  io.lm.aw.valid:=0.U
  io.lm.w.valid:=0.U
  io.lm.b.ready:=1.U
  io.lm.w.bits.data:=0.U
  io.lm.w.bits.strb:=0.U

  val it=Module(new itrace)
  val inst=RegInit(0.U(32.W))
  inst:=Mux(io.lm.r.fire,io.lm.r.bits.data(31,0),inst)
  io.out.bits.inst:=Mux(io.lm.r.fire,io.lm.r.bits.data(31,0),inst)
  io.out.valid:=Mux(state===s_wait_next,1.U,0.U)

  it.io.en:=io.lm.r.fire
  it.io.inst:=Mux(io.lm.r.fire,io.lm.r.bits.data(31,0),inst) 
  it.io.pc:=io.lm.ar.bits.addr
  //printf("%x\n",state)
  //printf("%x\t%x\t%x\n",it.io.en,io.lm.r.bits.data,io.lm.r.fire)
  //printf("ifu:addr:%x\tstate:%x\tout.valid:%x\tout.ready:%x\tinst:%x\tnext:%x\n",io.lm.ar.bits.addr,state,io.out.valid,io.out.ready,io.out.bits.inst,io.next)
}


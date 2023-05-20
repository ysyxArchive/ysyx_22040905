import chisel3._
import chisel3.util._
import chisel3.stage._

class LSU extends Module{
  val io=IO(new Bundle{
    val ls=Flipped(new pmemio)
    val en_r=Input(UInt(1.W))
    val en_w=Input(UInt(1.W))
    val lm=(new AXILite)
  }) 

  val s_idle :: s_wait :: s_wait_b :: Nil = Enum(3)
  val rstate = RegInit(s_idle)
  rstate := MuxLookup(rstate, s_idle, List(
    s_idle  -> Mux(io.lm.ar.fire, s_wait, s_idle),
    s_wait  -> Mux(io.lm.r.fire, s_idle, s_wait)
  ))
  val wstate = RegInit(s_idle)
  wstate := MuxLookup(wstate, s_idle, List(
    s_idle  -> Mux(io.lm.aw.fire, s_wait, s_idle),
    s_wait  -> Mux(io.lm.w.fire, s_wait_b, s_wait),
    s_wait_b-> Mux(io.lm.b.fire, s_idle, s_wait_b)
  ))

  io.lm.ar.bits.addr:=io.ls.in.bits.raddr
  io.lm.ar.valid:=(rstate === s_idle & ~reset.asBool & io.ls.in.valid & io.en_r)
  io.lm.r.ready:=(rstate === s_wait)
  io.lm.aw.bits.addr:=io.ls.in.bits.waddr
  io.lm.aw.valid:=(wstate === s_idle & ~reset.asBool & io.ls.in.valid & io.en_w)
  io.lm.w.bits.data:=io.ls.in.bits.wdata
  io.lm.w.bits.strb:=io.ls.in.bits.wmask
  io.lm.w.valid:=(wstate === s_wait & ~reset.asBool)
  io.lm.b.ready:=1.U
  
  io.ls.out.bits.rdata:=io.lm.r.bits.data
  io.ls.out.valid:=io.lm.r.fire | io.lm.b.fire
  io.ls.in.ready:=(rstate === s_idle) && (wstate === s_idle)
}
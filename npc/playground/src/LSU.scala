import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline


class LSU extends Module{
  val io=IO(new Bundle{
    val in=Flipped(Decoupled(new EXU_out))
    val lm=(new AXILite)
    val gpr=Flipped(new GPR_w)
    val csr=Flipped(new CSR_w)
    val out=Decoupled(new Bundle{
      val pc_dnpc=Output(UInt(64.W))
      })
  }) 

  val s_idle :: s_wait :: Nil = Enum(2)
  val rstate = RegInit(s_idle)
  rstate := MuxLookup(rstate, s_idle, List(
    s_idle  -> Mux(io.lm.ar.fire, s_wait, s_idle),
    s_wait  -> Mux(io.lm.r.fire, s_idle, s_wait)
  ))
  val wstate = RegInit(s_idle)
  wstate := MuxLookup(wstate, s_idle, List(
    s_idle  -> Mux(io.lm.aw.fire, s_wait, s_idle),
    s_wait  -> Mux(io.lm.w.fire, s_idle, s_wait)
  ))

  io.lm.ar.bits.addr:=io.in.bits.pin.raddr
  io.lm.ar.valid:=(rstate === s_idle & ~reset.asBool & io.in.valid)
  io.lm.r.ready:=(rstate === s_wait)
  io.lm.aw.bits.addr:=io.in.bits.pin.waddr
  io.lm.aw.valid:=(wstate === s_idle & ~reset.asBool & io.in.valid)
  io.lm.w.bits.data:=io.in.bits.pin.wdata
  io.lm.w.bits.strb:=io.in.bits.pin.wmask
  io.lm.w.valid:=(wstate === s_wait & ~reset.asBool)
  io.lm.b.ready:=1.U
  //printf("lsu:valid:%x\tready:%x\trstate:%x\n",io.lm.ar.valid,io.lm.ar.ready,rstate)
  val en_w=Wire(UInt(1.W))
  io.in.ready:=(rstate===s_idle)&(wstate===s_idle)//&io.lm.b.fire
  en_w:=io.lm.r.fire

  io.gpr.en_w:=io.in.bits.gpr.en_w&en_w
  io.gpr.idx_w:=io.in.bits.gpr.idx_w
  io.gpr.val_w:=      Mux(io.in.bits.op(38),Cat(Fill(56,io.lm.r.bits.data(7)),io.lm.r.bits.data(7,0)),
                      Mux(io.in.bits.op(39),Cat(Fill(48,io.lm.r.bits.data(15)),io.lm.r.bits.data(15,0)),
                      Mux(io.in.bits.op(40),Cat(Fill(32,io.lm.r.bits.data(31)),io.lm.r.bits.data(31,0)),
                      Mux(io.in.bits.op(41),io.lm.r.bits.data,
                      Mux(io.in.bits.op(46),Cat(Fill(56,0.U),io.lm.r.bits.data(7,0)),
                      Mux(io.in.bits.op(47),Cat(Fill(48,0.U),io.lm.r.bits.data(15,0)),
                      Mux(io.in.bits.op(48),Cat(Fill(32,0.U),io.lm.r.bits.data(31,0)),
                      io.in.bits.gpr.val_w)))))))
                      
  io.csr.en_w:=io.in.bits.csr.en_w&en_w
  io.csr.idx_w:=io.in.bits.csr.idx_w
  io.csr.val_w:=io.in.bits.csr.val_w
  io.csr.no:=Mux(en_w(0),io.in.bits.csr.no,0.U)
  io.csr.epc:=io.in.bits.csr.epc

  io.out.bits.pc_dnpc:=io.in.bits.pc_dnpc
  io.out.valid:=en_w
}
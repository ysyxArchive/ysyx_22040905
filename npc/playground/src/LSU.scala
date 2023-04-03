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
  val op_r=Wire(UInt(1.W))
  val op_w=Wire(UInt(1.W))
  op_r:=io.in.bits.op(38) |io.in.bits.op(39) |io.in.bits.op(40) |io.in.bits.op(41) |io.in.bits.op(46) |io.in.bits.op(47) |io.in.bits.op(48)
  op_w:=io.in.bits.op(42) |io.in.bits.op(43) |io.in.bits.op(44) |io.in.bits.op(45) 

  io.lm.ar.bits.addr:=io.in.bits.pin.raddr
  io.lm.ar.valid:=(rstate === s_idle & ~reset.asBool & io.in.valid & op_r)
  io.lm.r.ready:=(rstate === s_wait)
  io.lm.aw.bits.addr:=io.in.bits.pin.waddr
  io.lm.aw.valid:=(wstate === s_idle & ~reset.asBool & io.in.valid & op_w)
  io.lm.w.bits.data:=io.in.bits.pin.wdata
  io.lm.w.bits.strb:=io.in.bits.pin.wmask
  io.lm.w.valid:=(wstate === s_wait & ~reset.asBool)
  io.lm.b.ready:=1.U
  //printf("lsu:valid:%x\tready:%x\tstate:%x\n",io.lm.aw.valid,io.lm.aw.ready,wstate)
  val en_w=Wire(UInt(1.W))
  io.in.ready:=(io.lm.r.fire)|(io.lm.b.fire)|((~op_r)&(~op_w)&(io.in.valid))
  en_w:=(io.lm.r.fire)|(io.in.valid & (~op_r))

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
  io.out.valid:=(io.lm.r.fire)|(io.lm.b.fire)|((~op_r)&(~op_w)&(io.in.valid))
  //printf("%x\t%x\n",io.out.valid,io.in.valid)
}
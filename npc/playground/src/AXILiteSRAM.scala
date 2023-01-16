import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class pmemout extends Bundle{
    val rdata=Output(UInt(64.W))
}
class pmemin extends Bundle{
    val raddr=Output(UInt(32.W))
    val waddr=Output(UInt(32.W))
    val wdata=Output(UInt(64.W))
    val wmask=Output(UInt(8.W))
}
class pmemio extends Bundle{
  val in=Decoupled(new pmemin)
  val out=Flipped(Decoupled(new pmemout))
}
class memory extends BlackBox with HasBlackBoxInline{
  val io=IO(Flipped(new Bundle{
    val raddr=Output(UInt(32.W))
    val rdata=Input(UInt(64.W))
    val waddr=Output(UInt(32.W))
    val wdata=Output(UInt(64.W))
    val wmask=Output(UInt(8.W))
  }))

  setInline("memory.v",
          """import "DPI-C" function void pmem_read(input int raddr, output longint rdata);
          |import "DPI-C" function void pmem_write(input int waddr, input longint wdata, input byte wmask);
          |module memory(input [31:0]raddr,output [63:0] rdata,input [31:0]waddr,input [63:0]wdata,input [7:0]wmask);
          | always @(*) begin
          |  pmem_read(raddr, rdata);
          |  pmem_write(waddr, wdata, wmask);
          | end
          |endmodule
          |""".stripMargin)
}

class AXILiteSRAM extends Module{
  val io = IO(Flipped(new AXILite))

  val s_idle :: s_wait_ready :: Nil = Enum(2)
  val rstate = RegInit(s_idle)
  rstate := MuxLookup(rstate, s_idle, List(
    s_idle        -> Mux(io.ar.fire, s_wait_ready, s_idle),
    s_wait_ready  -> Mux(io.r.fire, s_idle, s_wait_ready)
  ))
  val wstate = RegInit(s_idle)
  wstate := MuxLookup(wstate, s_idle, List(
    s_idle        -> Mux(io.aw.fire, s_wait_ready, s_idle),
    s_wait_ready  -> Mux(io.w.fire, s_idle, s_wait_ready)
  ))

  val rdelay = RegInit(0.U(2.W))
  rdelay:=Mux(io.ar.fire|rdelay(0),rdelay+1.U,0.U)

  io.ar.ready := (rstate === s_idle)
  io.r.valid  := (rstate === s_wait_ready && rdelay===2.U)

  val wdelay = RegInit(0.U(2.W))
  wdelay:=Mux(io.aw.fire|wdelay(0),wdelay+1.U,0.U)

  io.aw.ready := (wstate === s_idle)
  io.w.ready  := (wstate === s_wait_ready && wdelay===2.U)

  val pmem =Module(new memory)
  pmem.io.raddr:= Mux(io.r.fire,io.ar.bits.addr,0.U)
  pmem.io.waddr:= io.aw.bits.addr
  pmem.io.wdata:= io.w.bits.data
  pmem.io.wmask:= io.w.bits.strb

  io.r.bits.data := pmem.io.rdata 
  io.r.bits.resp := 0.U//OKAY
  io.b.bits.resp := 0.U
  io.b.valid :=1.U
}


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

  io.ar.ready := (rstate === s_idle)
  io.r.valid  := (rstate === s_wait_ready)

  io.aw.ready := (wstate === s_idle)
  io.w.ready  := (wstate === s_wait_ready)

  val pmem =Module(new memory)
  pmem.io.raddr:= Mux(io.ar.fire,io.ar.bits.addr,0.U)
  pmem.io.waddr:= io.aw.bits.addr
  pmem.io.wdata:= io.w.bits.data
  pmem.io.wmask:= Mux(io.aw.fire,io.w.bits.strb,0.U)

  io.r.bits.data := RegEnable(pmem.io.rdata,io.ar.fire) 
  io.r.bits.resp := 0.U//OKAY
  io.b.bits.resp := 0.U
  io.b.valid := RegEnable(1.U,io.w.fire)
}

class AXI4SRAM extends Module{
  val io = IO(Flipped(new AXI4))
  val rlast = Wire(UInt(1.W))
  val wlast = Wire(UInt(1.W))
  val s_idle :: s_wait_ready  :: Nil = Enum(2)
  val rstate = RegInit(s_idle)
  wlast := io.w.bits.last
  rstate := MuxLookup(rstate, s_idle, List(
    s_idle        -> Mux(io.ar.fire, s_wait_ready, s_idle),
    s_wait_ready  -> Mux(rlast.asBool, s_idle, s_wait_ready),
  ))
  val wstate = RegInit(s_idle)
  wstate := MuxLookup(wstate, s_idle, List(
    s_idle        -> Mux(io.aw.fire, s_wait_ready, s_idle),
    s_wait_ready  -> Mux(wlast.asBool, s_idle, s_wait_ready),
  ))

  //read
  val raddr=RegInit(0.U(32.W))
  val rlen=RegInit(0.U(8.W))
  val rsize=RegInit(0.U(3.W))
  val rburst=RegInit(0.U(2.W))
  val lower_bound_addr=RegInit(0.U(32.W))
  val rcnt = RegInit(0.U(8.W))
  val beatcnt = RegInit(0.U(8.W))


  lower_bound_addr:=Mux(io.ar.fire,io.ar.bits.addr & (((~io.ar.bits.len.asTypeOf(UInt(32.W))) << io.ar.bits.size )),lower_bound_addr)
  //printf("%x\n",raddr)
  raddr := Mux(io.ar.fire,io.ar.bits.addr, //& ((~(0.U(32.W))) << io.ar.bits.size),
           Mux(rlast.asBool,0.U,
           Mux(io.r.fire & (beatcnt === 255.U | beatcnt === rlen),lower_bound_addr,
           Mux(io.r.fire ,raddr + (1.U(32.W)<< rsize),raddr))))
  rlen := Mux(io.ar.fire,io.ar.bits.len,rlen)
  rsize := Mux(io.ar.fire,io.ar.bits.size ,rsize )
  rburst:= Mux(io.ar.fire,io.ar.bits.burst,rburst)
  rcnt:=Mux(rcnt === 255.U|| rlast.asBool || io.ar.fire,0.U,
        Mux(io.r.fire,rcnt + 1.U,rcnt))
  beatcnt:=Mux(io.ar.fire,(io.ar.bits.addr >> io.ar.bits.size) & io.ar.bits.len,
           Mux(beatcnt === 255.U | beatcnt === rlen,0.U,
           Mux(rstate =/= s_idle,beatcnt+1.U,0.U)))
  //printf("%x\t%x\t%x\t%x\n",io.ar.fire,beatcnt,raddr,(io.ar.bits.addr >> io.ar.bits.size) & io.ar.bits.len)
  rlast:=(rcnt === rlen && io.r.fire)
  io.r.bits.last := rlast


  //printf("%x\t%x\t%x\t%x\t%x\t%x\t%x\t%x\t%x\n",raddr,rcnt,io.ar.fire,io.ar.bits.addr,rstate,beatcnt,io.r.fire,raddr + (1.U(32.W)<< rsize),lower_bound_addr) 
  //write
  val waddr = RegInit(0.U(32.W))
  val wlen=RegInit(0.U(8.W))
  val wcnt = RegInit(0.U(8.W))
  val wsize = RegInit(0.U(3.W))

  wlen:=Mux(io.aw.fire,io.aw.bits.len,wlen)
  wsize:=Mux(io.aw.fire,io.aw.bits.size,wsize)
  waddr:=Mux(io.aw.fire && wstate === s_idle,io.aw.bits.addr,
         Mux(io.w.fire,waddr +1.U(32.W)<<wsize,waddr))

  wcnt:=Mux(wcnt === 255.U|| wlast.asBool || wlast.asBool,0.U,wcnt + 1.U)

  val pmem =Module(new memory)
  pmem.io.raddr:= raddr
  pmem.io.waddr:= waddr//io.aw.bits.addr
  pmem.io.wdata:= io.w.bits.data
  pmem.io.wmask:= Mux(wstate =/= s_idle,io.w.bits.strb,0.U)

  io.ar.ready := (rstate === s_idle)
  io.r.valid  := (rstate =/= s_idle)

  io.aw.ready := (wstate === s_idle)
  io.w.ready  := (wstate =/= s_idle)

  io.r.bits.data := pmem.io.rdata//RegEnable(pmem.io.rdata,io.r.fire)  
  io.r.bits.resp := 0.U//OKAY
  io.b.bits.resp := 0.U
  io.b.valid := RegEnable(1.U,rcnt === rlen)

  //printf("ram:rstate:%x\tio.ar.valid:%x\tio.ar.ready:%x\tio.r.valid:%x\tio.r.ready:%x\n",rstate,io.r.valid,io.r.ready,io.r.valid,io.r.ready)
  
  assert(((raddr <  lower_bound_addr + (rlen+1.U)*(1.U<<rsize )) && (raddr >= lower_bound_addr)) || (raddr === 0.U))
}
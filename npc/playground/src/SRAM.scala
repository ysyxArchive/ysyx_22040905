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
    val clock=Output(Clock())
    val raddr=Output(UInt(32.W))
    val rdata=Input(UInt(64.W))
    val waddr=Output(UInt(32.W))
    val wdata=Output(UInt(64.W))
    val wmask=Output(UInt(8.W))
  }))

  setInline("memory.v",
          """import "DPI-C" function void pmem_read(input int raddr, output longint rdata);
          |import "DPI-C" function void pmem_write(input int waddr, input longint wdata, input byte wmask);
          |module memory(input clock,input [31:0]raddr,output [63:0] rdata,input [31:0]waddr,input [63:0]wdata,input [7:0]wmask);
          | always @(negedge clock) begin
          |  pmem_read(raddr, rdata);
          |  pmem_write(waddr, wdata, wmask);
          | end
          |endmodule
          |""".stripMargin)
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
    s_wait_ready  -> Mux(rlast.asBool & (~io.ar.fire), s_idle, s_wait_ready),
  ))
  val wstate = RegInit(s_idle)
  wstate := MuxLookup(wstate, s_idle, List(
    s_idle        -> Mux(io.w.fire&wlast.asBool, s_wait_ready, s_idle),
    s_wait_ready  -> Mux(io.b.fire, s_idle, s_wait_ready),
  ))

  //read
  val rid=RegInit(0.U(1.W))
  val raddr=RegInit(0.U(32.W))
  val rlen=RegInit(0.U(8.W))
  val rsize=RegInit(0.U(3.W))
  val rburst=RegInit(0.U(2.W))
  val lower_bound_addr=RegInit(0.U(32.W))
  val rcnt = RegInit(0.U(8.W))
  val beatcnt = RegInit(0.U(8.W))

  rid := Mux(io.ar.fire,io.ar.bits.id,rid)
  lower_bound_addr:=Mux(io.ar.fire,io.ar.bits.addr & (((~io.ar.bits.len.asTypeOf(UInt(32.W))) << io.ar.bits.size )),lower_bound_addr)
  //printf("%x\n",raddr)
  raddr := Mux(io.ar.fire ,io.ar.bits.addr,
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
  val wid=RegInit(0.U(1.W))
  val waddr = RegInit(0.U(32.W))
  val wlen=RegInit(0.U(8.W))
  val wcnt = RegInit(0.U(8.W))
  val wsize = RegInit(0.U(3.W))

  wid := Mux(io.aw.fire,io.aw.bits.id,wid)
  wlen:=Mux(io.aw.fire,io.aw.bits.len,wlen)
  wsize:=Mux(io.aw.fire,io.aw.bits.size,wsize)
  waddr:=Mux(wlast.asBool,0.U,
         Mux(io.aw.fire && io.w.fire && wstate === s_idle,io.aw.bits.addr +(1.U(32.W)<<io.aw.bits.size),
         Mux(io.w.fire,waddr +(1.U(32.W)<<wsize),waddr)))
  wcnt:=Mux(wcnt === 255.U|| wlast.asBool || io.aw.fire,0.U,
        Mux(io.w.fire,wcnt + 1.U,wcnt))

  val pmem =Module(new memory)
  pmem.io.raddr:= raddr
  pmem.io.waddr:= Mux(io.aw.fire,io.aw.bits.addr,waddr)//io.aw.bits.addr
  pmem.io.wdata:= io.w.bits.data
  pmem.io.wmask:= Mux(io.w.fire ,io.w.bits.strb,0.U) 
  pmem.io.clock:=clock

  io.ar.ready := (rstate === s_idle) | ((rlast.asBool)&(rstate =/= s_idle))
  io.r.valid  := (rstate =/= s_idle)

  io.aw.ready := (wstate === s_idle)
  io.w.ready  := (wstate === s_idle)
  io.r.bits.data := pmem.io.rdata//RegEnable(pmem.io.rdata,io.r.fire)  
  io.r.bits.id := rid
  io.r.bits.resp := 0.U//OKAY
  io.b.bits.id := wid
  io.b.bits.resp := 0.U
  io.b.valid := (wstate === s_wait_ready)

  //printf("b:%x\t%x\t%x\n",io.b.valid,wcnt,wlen)
  //printf("%x\t%x\t%x\n",pmem.io.wmask,io.w.bits.last,io.w.valid)
  //printf("ram:state %x\n",wstate)
  //printf("ram:wstate:%x\tio.aw.valid:%x\tio.aw.ready:%x\tio.w.valid:%x\tio.w.ready:%x\n",wstate,io.aw.valid,io.aw.ready,io.w.valid,io.w.ready)
  
  //assert(((raddr <  lower_bound_addr + (rlen+1.U)*(1.U<<rsize )) && (raddr >= lower_bound_addr)) || (raddr === 0.U))
  //printf("sram:%x\t%x\t%x\n",waddr,wsize,waddr +(1.U(32.W)<<wsize))
  //printf("sram: %x\t%x\t%x\t%x\t%x\t",io.aw.valid,io.aw.ready,io.w.valid,io.w.ready,io.w.bits.last)
  //printf("sram: %x\t%x\t%x\t%x\t",io.ar.valid,io.ar.ready,io.r.valid,io.r.ready)
  //assert(((waddr+(wlen+1.U)*(1.U<<wsize)<="x88000000".U)&&(waddr>="x80000000".U))||(waddr===0.U))
}
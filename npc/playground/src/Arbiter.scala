import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
/*
class AXI4Arbiter(num: Int) extends Module {
  val io = IO(new Bundle {
    val masters = Vec(num, Flipped(new AXI4))
    val slave = (new AXI4)
  })

  val idx = reginit(0.u(log2ceil(num).w))
  idx := mux(io.slave.ar.valid || io.slave.aw.valid, idx + 1.u, idx)

  for (i <- 0 until num) {
    io.masters(i).ar.ready := io.slave.ar.ready && idx === i.U
    io.masters(i).ar.bits <> io.slave.ar.bits

    io.masters(i).aw.ready := io.slave.aw.ready && idx === i.U
    io.masters(i).aw.bits <> io.slave.aw.bits

    io.masters(i).r <> io.slave.r
    io.masters(i).w <> io.slave.w
    io.masters(i).b <> io.slave.b
  }


  io.slave.ar.valid := io.masters(idx).ar.valid
  io.slave.ar.bits <> io.masters(idx).ar.bits


  io.slave.aw.valid := io.masters(idx).aw.valid
  io.slave.aw.bits := io.masters(idx).aw.bits

  io.slave.r <> io.masters(idx).r
  io.slave.w <> io.masters(idx).w
  io.slave.b <> io.masters(idx).b
  
}*/

class AXI4Arbiter extends Module{
  val io=IO(new Bundle{
    val ifu=Flipped(new AXI4)
    val lsu=Flipped(new AXI4)
    val out = (new AXI4)
  })
  val a_ifu :: a_lsu :: a_idle :: Nil = Enum(3)
  val state = RegInit(a_idle)
  state := MuxLookup(state, a_ifu, List(
  a_idle  ->  Mux(io.ifu.ar.valid,a_ifu,
              Mux(io.lsu.ar.valid,a_lsu,a_idle)),
  a_ifu   ->  Mux(io.ifu.r.fire, a_idle, a_ifu),
  a_lsu   ->  Mux(io.lsu.r.fire, a_idle, a_lsu)
  ))
  //printf("arb:%x\tifu:%x\t%x\tlsu:%x\t%x\n",state,io.ifu.ar.valid,io.ifu.r.fire,io.lsu.ar.valid,io.lsu.r.fire)
  val araddr=RegInit(0.U(32.W))
  val arvalid=RegInit(0.U(1.W)) 
  val ifu_arready=RegInit(0.U(1.W)) 
  val lsu_arready=RegInit(0.U(1.W)) 
  val ifu_rdata=RegInit(0.U(64.W)) 
  val lsu_rdata=RegInit(0.U(64.W)) 
  val ifu_rresp=RegInit(0.U(2.W)) 
  val lsu_rresp=RegInit(0.U(2.W)) 
  val ifu_rvalid=RegInit(0.U(1.W)) 
  val lsu_rvalid=RegInit(0.U(1.W)) 
  val rready=RegInit(0.U(1.W)) 
  val awaddr=RegInit(0.U(32.W)) 
  val awvalid=RegInit(0.U(1.W)) 
  val ifu_awready=RegInit(0.U(1.W)) 
  val lsu_awready=RegInit(0.U(1.W)) 
  val wdata=RegInit(0.U(64.W)) 
  val wstrb=RegInit(0.U(8.W)) 
  val wvalid=RegInit(0.U(1.W)) 
  val ifu_wready=RegInit(0.U(1.W)) 
  val lsu_wready=RegInit(0.U(1.W)) 
  val ifu_bresp=RegInit(0.U(2.W)) 
  val lsu_bresp=RegInit(0.U(2.W)) 
  val ifu_bvalid=RegInit(0.U(1.W)) 
  val lsu_bvalid=RegInit(0.U(1.W)) 
  val bready=RegInit(0.U(1.W)) 
  
  val arlen = RegInit(0.U(8.W))
  val arsize = RegInit(0.U(3.W))
  val arburst = RegInit(0.U(2.W))
  val awlen = RegInit(0.U(8.W))
  val awsize = RegInit(0.U(3.W))
  val awburst = RegInit(0.U(2.W))
  val wlast = RegInit(0.U(1.W))
  val ifu_rlast = RegInit(0.U(1.W))
  val lsu_rlast = RegInit(0.U(1.W))


  //out
  io.out.ar.bits.addr:=araddr
  araddr:=MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.ar.bits.addr ,
                      a_lsu   ->  io.lsu.ar.bits.addr
                      ))
  io.out.ar.valid:=arvalid
  arvalid:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.ar.valid ,
                      a_lsu   ->  io.lsu.ar.valid 
                      ))
  io.out.r.ready:=rready
  rready:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.r.ready ,
                      a_lsu   ->  io.lsu.r.ready 
                      ))
  io.out.aw.bits.addr:=awaddr
  awaddr:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.aw.bits.addr ,
                      a_lsu   ->  io.lsu.aw.bits.addr 
                      ))
  io.out.aw.valid:=awvalid
  awvalid:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.aw.valid ,
                      a_lsu   ->  io.lsu.aw.valid 
                      ))
  io.out.w.bits.data:=wdata
  wdata:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.w.bits.data ,
                      a_lsu   ->  io.lsu.w.bits.data 
                      ))
  io.out.w.bits.strb:=wstrb
  wstrb:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.w.bits.strb ,
                      a_lsu   ->  io.lsu.w.bits.strb 
                      ))
  io.out.w.valid:=wvalid
  wvalid:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.w.valid ,
                      a_lsu   ->  io.lsu.w.valid 
                      ))
  io.out.b.ready:=bready
  bready:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.b.ready ,
                      a_lsu   ->  io.lsu.b.ready 
                      ))
  io.out.ar.bits.len:=arlen
  arlen:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.ar.bits.len ,
                      a_lsu   ->  io.lsu.ar.bits.len 
                      ))
  io.out.ar.bits.size:=arsize
  arsize:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.ar.bits.size ,
                      a_lsu   ->  io.lsu.ar.bits.size 
                      ))
  io.out.ar.bits.burst:=arburst
  arburst:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.ar.bits.burst ,
                      a_lsu   ->  io.lsu.ar.bits.burst 
                      ))
  io.out.aw.bits.len:=awlen
  awlen:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.aw.bits.len ,
                      a_lsu   ->  io.lsu.aw.bits.len 
                      ))
  io.out.aw.bits.size:=awsize
  awsize:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.aw.bits.size ,
                      a_lsu   ->  io.lsu.aw.bits.size 
                      ))
  io.out.aw.bits.burst:=awburst
  awburst:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.aw.bits.burst ,
                      a_lsu   ->  io.lsu.aw.bits.burst 
                      ))
  io.out.w.bits.last:=wlast
  wlast:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.ifu.w.bits.last,
                      a_lsu   ->  io.lsu.w.bits.last
                      ))             
  //ifu
  io.ifu.r.bits.last:=ifu_rlast
  ifu_rlast:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.out.r.bits.last ,
                      a_lsu   ->  0.U 
                      ))
  io.ifu.ar.ready:=ifu_arready
  ifu_arready:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.out.ar.ready ,
                      a_lsu   ->  0.U 
                      ))
  io.ifu.r.bits.data:=ifu_rdata
  ifu_rdata:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.out.r.bits.data ,
                      a_lsu   ->  0.U 
                      ))
  io.ifu.r.bits.resp:=ifu_rresp
  ifu_rresp:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.out.r.bits.resp,
                      a_lsu   ->  0.U 
                      ))
  io.ifu.r.valid:=ifu_rvalid
  ifu_rvalid:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.out.r.valid ,
                      a_lsu   ->  0.U 
                      ))
  io.ifu.aw.ready:=ifu_awready
  ifu_awready:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.out.aw.ready ,
                      a_lsu   ->  0.U 
                      ))
  io.ifu.w.ready:=ifu_wready
  ifu_wready:=   MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.out.w.ready ,
                      a_lsu   ->  0.U 
                      ))
  io.ifu.b.bits.resp:=ifu_bresp
  ifu_bresp:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.out.b.bits.resp ,
                      a_lsu   ->  0.U
                      ))
  io.ifu.b.valid:=ifu_bvalid
  ifu_bvalid:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  io.out.b.valid ,
                      a_lsu   ->  0.U 
                      ))

  //lsu
  io.lsu.r.bits.last:=lsu_rlast
  lsu_rlast:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  0.U ,
                      a_lsu   ->  io.out.r.bits.last 
                      ))
  io.lsu.ar.ready:=lsu_arready
  lsu_arready:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  0.U ,
                      a_lsu   ->  io.out.ar.ready 
                      ))
  io.lsu.r.bits.data:=lsu_rdata
  lsu_rdata:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  0.U ,
                      a_lsu   ->  io.out.r.bits.data 
                      ))
  io.lsu.r.bits.resp:=lsu_rresp
  lsu_rresp:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  0.U ,
                      a_lsu   ->  io.out.r.bits.resp 
                      ))
  io.lsu.r.valid:=lsu_rvalid
  lsu_rvalid:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  0.U ,
                      a_lsu   ->  io.out.r.valid 
                      ))
  io.lsu.aw.ready:=lsu_awready
  lsu_awready:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  0.U ,
                      a_lsu   ->  io.out.aw.ready
                      ))
  io.lsu.w.ready:=lsu_wready
  lsu_wready:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  0.U ,
                      a_lsu   ->  io.out.w.ready 
                      ))
  io.lsu.b.bits.resp:=lsu_bresp
  lsu_bresp:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  0.U ,
                      a_lsu   ->  io.out.b.bits.resp 
                      ))
  io.lsu.b.valid:=lsu_bvalid
  lsu_bvalid:=    MuxLookup(state, a_ifu, List(
                      a_idle  ->  0.U ,
                      a_ifu   ->  0.U ,
                      a_lsu   ->  io.out.b.valid 
                      ))

}
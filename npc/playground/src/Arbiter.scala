import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class Arbiter extends Module{
    val io=IO(new Bundle{
        val ifu=Flipped(new AXILite)
        val lsu=Flipped(new AXILite)
        val out=(new AXILite)
        val test=Output(UInt(1.W))
    })
    val a_ifu :: a_lsu :: Nil = Enum(2)
    val state = RegInit(a_ifu)
    io.test:=state
    state := MuxLookup(state, a_ifu, List(
    a_ifu   ->  Mux(io.ifu.r.fire, a_lsu, a_ifu),
    a_lsu   ->  Mux(io.lsu.r.fire, a_ifu, a_lsu)
    ))
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
    //out
    io.out.ar.bits.addr:=araddr
    araddr:=MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.ifu.ar.bits.addr ,
                        a_lsu   ->  io.lsu.ar.bits.addr
                        ))
    io.out.ar.valid:=arvalid
    arvalid:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.ifu.ar.valid ,
                        a_lsu   ->  io.lsu.ar.valid 
                        ))
    io.out.r.ready:=rready
    rready:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.ifu.r.ready ,
                        a_lsu   ->  io.lsu.r.ready 
                        ))
    io.out.aw.bits.addr:=awaddr
    awaddr:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.ifu.aw.bits.addr ,
                        a_lsu   ->  io.lsu.aw.bits.addr 
                        ))
    io.out.aw.valid:=awvalid
    awvalid:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.ifu.aw.valid ,
                        a_lsu   ->  io.lsu.aw.valid 
                        ))
    io.out.w.bits.data:=wdata
    wdata:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.ifu.w.bits.data ,
                        a_lsu   ->  io.lsu.w.bits.data 
                        ))
    io.out.w.bits.strb:=wstrb
    wstrb:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.ifu.w.bits.strb ,
                        a_lsu   ->  io.lsu.w.bits.strb 
                        ))
    io.out.w.valid:=wvalid
    wvalid:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.ifu.w.valid ,
                        a_lsu   ->  io.lsu.w.valid 
                        ))
    io.out.b.ready:=bready
    bready:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.ifu.b.ready ,
                        a_lsu   ->  io.lsu.b.ready 
                        ))
    //ifu
    io.ifu.ar.ready:=ifu_arready
    ifu_arready:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.out.ar.ready ,
                        a_lsu   ->  0.U 
                        ))
    io.ifu.r.bits.data:=ifu_rdata
    ifu_rdata:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.out.r.bits.data ,
                        a_lsu   ->  0.U 
                        ))
    io.ifu.r.bits.resp:=ifu_rresp
    ifu_rresp:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.out.r.bits.resp,
                        a_lsu   ->  0.U 
                        ))
    io.ifu.r.valid:=ifu_rvalid
    ifu_rvalid:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.out.r.valid ,
                        a_lsu   ->  0.U 
                        ))
    io.ifu.aw.ready:=ifu_awready
    ifu_awready:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.out.aw.ready ,
                        a_lsu   ->  0.U 
                        ))
    io.ifu.w.ready:=ifu_wready
    ifu_wready:=   MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.out.w.ready ,
                        a_lsu   ->  0.U 
                        ))
    io.ifu.b.bits.resp:=ifu_bresp
    ifu_bresp:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.out.b.bits.resp ,
                        a_lsu   ->  0.U
                        ))
    io.ifu.b.valid:=ifu_bvalid
    ifu_bvalid:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  io.out.b.valid ,
                        a_lsu   ->  0.U 
                        ))

    //lsu
    io.lsu.ar.ready:=lsu_arready
    lsu_arready:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  0.U ,
                        a_lsu   ->  io.out.ar.ready 
                        ))
    io.lsu.r.bits.data:=lsu_rdata
    lsu_rdata:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  0.U ,
                        a_lsu   ->  io.out.r.bits.data 
                        ))
    io.lsu.r.bits.resp:=lsu_rresp
    lsu_rresp:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  0.U ,
                        a_lsu   ->  io.out.r.bits.resp 
                        ))
    io.lsu.r.valid:=lsu_rvalid
    lsu_rvalid:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  0.U ,
                        a_lsu   ->  io.out.r.valid 
                        ))
    io.lsu.aw.ready:=lsu_awready
    lsu_awready:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  0.U ,
                        a_lsu   ->  io.out.aw.ready
                        ))
    io.lsu.w.ready:=lsu_wready
    lsu_wready:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  0.U ,
                        a_lsu   ->  io.out.w.ready 
                        ))
    io.lsu.b.bits.resp:=lsu_bresp
    lsu_bresp:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  0.U ,
                        a_lsu   ->  io.out.b.bits.resp 
                        ))
    io.lsu.b.valid:=lsu_bvalid
    lsu_bvalid:=    MuxLookup(state, a_ifu, List(
                        a_ifu   ->  0.U ,
                        a_lsu   ->  io.out.b.valid 
                        ))
}
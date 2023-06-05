import chisel3._
import chisel3.util._
import chisel3.stage._

class Crossbar extends Module{
    val io=IO(new Bundle{
        val in1 = Flipped(new AXILite)
        val in2 = Flipped(new AXILite)
        val out = (new AXI4)
        val hitrate=Output(UInt(128.W))
    })
    val DEVICE_BASE :UInt = "xa0000000".U 

    val icache=Module(new Cache).io
    val icacheram=Module(new CacheRAM).io
    val dcache=Module(new Cache).io
    val dcacheram=Module(new CacheRAM).io
    val arbiter=Module(new AXI4Arbiter).io
    val d_skip=Module(new AXILite2AXI4).io
    val i_skip=Module(new AXILite2AXI4).io

    val out1=Wire(new AXILite)
    val out2=Wire(new AXILite)

    io.hitrate:=Cat(icache.hitrate,dcache.hitrate)

    io.in1<>out1
    icache.ram<>icacheram
    //out1<>icache.in
    //icache.mem<>arbiter.ifu

    io.in2<>out2
    dcache.ram<>dcacheram

    io.out<>arbiter.out

    val s_idle :: s_skip :: s_cache :: Nil = Enum(3)
    val istate=RegInit(s_idle)
    istate := MuxLookup(istate, s_idle, List(
    s_idle   ->  Mux(~(io.in1.ar.valid),s_idle,
                 Mux((io.in1.ar.bits.addr>=DEVICE_BASE),s_skip,
                 s_skip)),/////****
    s_skip   ->  Mux(arbiter.ifu.r.fire, s_idle, s_skip),
    s_cache  ->  Mux(icache.in.r.fire, s_idle, s_cache)
    ))

    val dstate=RegInit(s_idle)
    dstate := MuxLookup(dstate, s_idle, List(
    s_idle   ->  Mux(~(io.in2.aw.valid|io.in2.ar.valid),s_idle,
                 Mux((io.in2.aw.bits.addr>=DEVICE_BASE)||(io.in2.ar.bits.addr>=DEVICE_BASE),s_skip,
                 s_skip)),/////****
    s_skip   ->  Mux(arbiter.lsu.r.fire|arbiter.lsu.b.fire, s_idle, s_skip),
    s_cache  ->  Mux(dcache.in.r.fire|dcache.in.b.fire, s_idle, s_cache)
    ))
    //assert(dstate=/=s_skip)

    i_skip.in.ar.valid:=out1.ar.valid &(istate === s_skip) 
    i_skip.in.ar.bits.addr:=out1.ar.bits.addr
    i_skip.in.r.ready:=out1.r.ready
    i_skip.in.aw.valid:=out1.aw.valid &(istate === s_skip)
    i_skip.in.aw.bits.addr:=out1.aw.bits.addr
    i_skip.in.w.valid:=out1.w.valid
    i_skip.in.w.bits.data:=out1.w.bits.data
    i_skip.in.w.bits.strb:=out1.w.bits.strb
    i_skip.in.b.ready:=out1.b.ready

    d_skip.in.ar.valid:=out2.ar.valid &(dstate === s_skip) 
    d_skip.in.ar.bits.addr:=out2.ar.bits.addr
    d_skip.in.r.ready:=out2.r.ready
    d_skip.in.aw.valid:=out2.aw.valid &(dstate === s_skip)
    d_skip.in.aw.bits.addr:=out2.aw.bits.addr
    d_skip.in.w.valid:=out2.w.valid
    d_skip.in.w.bits.data:=out2.w.bits.data
    d_skip.in.w.bits.strb:=out2.w.bits.strb
    d_skip.in.b.ready:=out2.b.ready

    icache.in.ar.valid:=out1.ar.valid & (istate === s_cache)
    icache.in.ar.bits.addr:=out1.ar.bits.addr
    icache.in.r.ready:=out1.r.ready
    icache.in.aw.valid:=out1.aw.valid & (istate === s_cache) 
    icache.in.aw.bits.addr:=out1.aw.bits.addr
    icache.in.w.valid:=out1.w.valid
    icache.in.w.bits.data:=out1.w.bits.data
    icache.in.w.bits.strb:=out1.w.bits.strb
    icache.in.b.ready:=out1.b.ready


    dcache.in.ar.valid:=out2.ar.valid & (dstate === s_cache)
    dcache.in.ar.bits.addr:=out2.ar.bits.addr
    dcache.in.r.ready:=out2.r.ready
    dcache.in.aw.valid:=out2.aw.valid & (dstate === s_cache) 
    dcache.in.aw.bits.addr:=out2.aw.bits.addr
    dcache.in.w.valid:=out2.w.valid
    dcache.in.w.bits.data:=out2.w.bits.data
    dcache.in.w.bits.strb:=out2.w.bits.strb
    dcache.in.b.ready:=out2.b.ready

    out1.ar.ready:=Mux(istate === s_cache,icache.in.ar.ready,i_skip.in.ar.ready)
    out1.r.valid:=Mux(istate === s_cache,icache.in.r.valid,i_skip.in.r.valid)
    out1.aw.ready:=Mux(istate === s_cache,icache.in.aw.ready,i_skip.in.aw.ready)
    out1.w.ready:=Mux(istate === s_cache,icache.in.w.ready,i_skip.in.w.ready)
    out1.b.valid:=Mux(istate === s_cache,icache.in.b.valid,i_skip.in.b.valid)
    out1.r.bits.data:=Mux(istate === s_cache,icache.in.r.bits.data,i_skip.in.r.bits.data)
    out1.r.bits.resp:=Mux(istate === s_cache,icache.in.r.bits.resp,i_skip.in.r.bits.resp)
    out1.b.bits.resp:=Mux(istate === s_cache,icache.in.b.bits.resp,i_skip.in.b.bits.resp)


    out2.ar.ready:=Mux(dstate === s_cache,dcache.in.ar.ready,d_skip.in.ar.ready)
    out2.r.valid:=Mux(dstate === s_cache,dcache.in.r.valid,d_skip.in.r.valid)
    out2.aw.ready:=Mux(dstate === s_cache,dcache.in.aw.ready,d_skip.in.aw.ready)
    out2.w.ready:=Mux(dstate === s_cache,dcache.in.w.ready,d_skip.in.w.ready)
    out2.b.valid:=Mux(dstate === s_cache,dcache.in.b.valid,d_skip.in.b.valid)
    out2.r.bits.data:=Mux(dstate === s_cache,dcache.in.r.bits.data,d_skip.in.r.bits.data)
    out2.r.bits.resp:=Mux(dstate === s_cache,dcache.in.r.bits.resp,d_skip.in.r.bits.resp)
    out2.b.bits.resp:=Mux(dstate === s_cache,dcache.in.b.bits.resp,d_skip.in.b.bits.resp)

    arbiter.ifu.ar.valid:=Mux(istate === s_skip,i_skip.mem.ar.valid,icache.mem.ar.valid)
    arbiter.ifu.ar.bits.addr:=Mux(istate === s_skip,i_skip.mem.ar.bits.addr,icache.mem.ar.bits.addr)
    arbiter.ifu.ar.bits.len:=Mux(istate === s_skip,i_skip.mem.ar.bits.len,icache.mem.ar.bits.len)
    arbiter.ifu.ar.bits.size:=Mux(istate === s_skip,i_skip.mem.ar.bits.size,icache.mem.ar.bits.size)
    arbiter.ifu.ar.bits.burst:=Mux(istate === s_skip,i_skip.mem.ar.bits.burst,icache.mem.ar.bits.burst)
    arbiter.ifu.r.ready:=Mux(istate === s_skip,i_skip.mem.r.ready,icache.mem.r.ready)
    arbiter.ifu.aw.valid:=Mux(istate === s_skip,i_skip.mem.aw.valid,icache.mem.aw.valid)
    arbiter.ifu.aw.bits.addr:=Mux(istate === s_skip,i_skip.mem.aw.bits.addr,icache.mem.aw.bits.addr)
    arbiter.ifu.aw.bits.len:=Mux(istate === s_skip,i_skip.mem.aw.bits.len,icache.mem.aw.bits.len)
    arbiter.ifu.aw.bits.size:=Mux(istate === s_skip,i_skip.mem.aw.bits.size,icache.mem.aw.bits.size)
    arbiter.ifu.aw.bits.burst:=Mux(istate === s_skip,i_skip.mem.aw.bits.burst,icache.mem.aw.bits.burst)
    arbiter.ifu.w.valid:=Mux(istate === s_skip,i_skip.mem.w.valid,icache.mem.w.valid)
    arbiter.ifu.w.bits.data:=Mux(istate === s_skip,i_skip.mem.w.bits.data,icache.mem.w.bits.data)
    arbiter.ifu.w.bits.strb:=Mux(istate === s_skip,i_skip.mem.w.bits.strb,icache.mem.w.bits.strb)
    arbiter.ifu.w.bits.last:=Mux(istate === s_skip,i_skip.mem.w.bits.last,icache.mem.w.bits.last)
    arbiter.ifu.b.ready:=Mux(istate === s_skip,i_skip.mem.b.ready,icache.mem.b.ready)



    arbiter.lsu.ar.valid:=Mux(dstate === s_skip,d_skip.mem.ar.valid,dcache.mem.ar.valid)
    arbiter.lsu.ar.bits.addr:=Mux(dstate === s_skip,d_skip.mem.ar.bits.addr,dcache.mem.ar.bits.addr)
    arbiter.lsu.ar.bits.len:=Mux(dstate === s_skip,d_skip.mem.ar.bits.len,dcache.mem.ar.bits.len)
    arbiter.lsu.ar.bits.size:=Mux(dstate === s_skip,d_skip.mem.ar.bits.size,dcache.mem.ar.bits.size)
    arbiter.lsu.ar.bits.burst:=Mux(dstate === s_skip,d_skip.mem.ar.bits.burst,dcache.mem.ar.bits.burst)
    arbiter.lsu.r.ready:=Mux(dstate === s_skip,d_skip.mem.r.ready,dcache.mem.r.ready)
    arbiter.lsu.aw.valid:=Mux(dstate === s_skip,d_skip.mem.aw.valid,dcache.mem.aw.valid)
    arbiter.lsu.aw.bits.addr:=Mux(dstate === s_skip,d_skip.mem.aw.bits.addr,dcache.mem.aw.bits.addr)
    arbiter.lsu.aw.bits.len:=Mux(dstate === s_skip,d_skip.mem.aw.bits.len,dcache.mem.aw.bits.len)
    arbiter.lsu.aw.bits.size:=Mux(dstate === s_skip,d_skip.mem.aw.bits.size,dcache.mem.aw.bits.size)
    arbiter.lsu.aw.bits.burst:=Mux(dstate === s_skip,d_skip.mem.aw.bits.burst,dcache.mem.aw.bits.burst)
    arbiter.lsu.w.valid:=Mux(dstate === s_skip,d_skip.mem.w.valid,dcache.mem.w.valid)
    arbiter.lsu.w.bits.data:=Mux(dstate === s_skip,d_skip.mem.w.bits.data,dcache.mem.w.bits.data)
    arbiter.lsu.w.bits.strb:=Mux(dstate === s_skip,d_skip.mem.w.bits.strb,dcache.mem.w.bits.strb)
    arbiter.lsu.w.bits.last:=Mux(dstate === s_skip,d_skip.mem.w.bits.last,dcache.mem.w.bits.last)
    arbiter.lsu.b.ready:=Mux(dstate === s_skip,d_skip.mem.b.ready,dcache.mem.b.ready)

    i_skip.mem.ar.ready:=arbiter.ifu.ar.ready &(istate === s_skip) 
    i_skip.mem.r.valid:=arbiter.ifu.r.valid
    i_skip.mem.aw.ready:=arbiter.ifu.aw.ready &(istate === s_skip)
    i_skip.mem.w.ready:=arbiter.ifu.w.ready
    i_skip.mem.b.valid:=arbiter.ifu.b.valid
    i_skip.mem.r.bits.data:=arbiter.ifu.r.bits.data
    i_skip.mem.r.bits.resp:=arbiter.ifu.r.bits.resp
    i_skip.mem.r.bits.last:=arbiter.ifu.r.bits.last
    i_skip.mem.b.bits.resp:=arbiter.ifu.b.bits.resp


    d_skip.mem.ar.ready:=arbiter.lsu.ar.ready &(dstate === s_skip) 
    d_skip.mem.r.valid:=arbiter.lsu.r.valid
    d_skip.mem.aw.ready:=arbiter.lsu.aw.ready &(dstate === s_skip)
    d_skip.mem.w.ready:=arbiter.lsu.w.ready
    d_skip.mem.b.valid:=arbiter.lsu.b.valid
    d_skip.mem.r.bits.data:=arbiter.lsu.r.bits.data
    d_skip.mem.r.bits.resp:=arbiter.lsu.r.bits.resp
    d_skip.mem.r.bits.last:=arbiter.lsu.r.bits.last
    d_skip.mem.b.bits.resp:=arbiter.lsu.b.bits.resp

    icache.mem.ar.ready:=arbiter.ifu.ar.ready &(istate === s_cache)
    icache.mem.r.valid:=arbiter.ifu.r.valid
    icache.mem.aw.ready:=arbiter.ifu.aw.ready &(istate === s_cache)
    icache.mem.w.ready:=arbiter.ifu.w.ready
    icache.mem.b.valid:=arbiter.ifu.b.valid
    icache.mem.r.bits.data:=arbiter.ifu.r.bits.data
    icache.mem.r.bits.resp:=arbiter.ifu.r.bits.resp
    icache.mem.r.bits.last:=arbiter.ifu.r.bits.last
    icache.mem.b.bits.resp:=arbiter.ifu.b.bits.resp


    dcache.mem.ar.ready:=arbiter.lsu.ar.ready &(dstate === s_cache)
    dcache.mem.r.valid:=arbiter.lsu.r.valid
    dcache.mem.aw.ready:=arbiter.lsu.aw.ready &(dstate === s_cache)
    dcache.mem.w.ready:=arbiter.lsu.w.ready
    dcache.mem.b.valid:=arbiter.lsu.b.valid
    dcache.mem.r.bits.data:=arbiter.lsu.r.bits.data
    dcache.mem.r.bits.resp:=arbiter.lsu.r.bits.resp
    dcache.mem.r.bits.last:=arbiter.lsu.r.bits.last
    dcache.mem.b.bits.resp:=arbiter.lsu.b.bits.resp
} 

class AXILite2AXI4 extends Module {
  val io = IO(new Bundle {
    val in = Flipped(new AXILite)
    val mem = (new AXI4)
  })
  io.in.ar.bits.addr <> io.mem.ar.bits.addr
  io.in.ar.valid <> io.mem.ar.valid
  io.in.ar.ready <> io.mem.ar.ready
  io.in.r.bits.data <> io.mem.r.bits.data
  io.in.r.bits.resp <> io.mem.r.bits.resp
  io.in.r.valid <> io.mem.r.valid
  io.in.r.ready <> io.mem.r.ready
  io.in.aw.bits.addr <> io.mem.aw.bits.addr
  io.in.aw.valid <> io.mem.aw.valid
  io.in.aw.ready <> io.mem.aw.ready
  io.in.w.bits.data <> io.mem.w.bits.data
  io.in.w.bits.strb <> io.mem.w.bits.strb
  io.in.w.valid <> io.mem.w.valid
  io.in.w.ready <> io.mem.w.ready
  io.in.b.bits.resp <> io.mem.b.bits.resp
  io.in.b.valid <> io.mem.b.valid
  io.in.b.ready <> io.mem.b.ready

  io.mem.ar.bits.len := 0.U
  io.mem.ar.bits.size := 3.U
  io.mem.ar.bits.burst := "b10".U

  io.mem.aw.bits.len := 0.U
  io.mem.aw.bits.size := 3.U
  io.mem.aw.bits.burst := 0.U

  io.mem.w.bits.last := io.in.w.valid

}

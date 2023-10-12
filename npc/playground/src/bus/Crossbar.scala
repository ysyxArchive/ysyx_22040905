import chisel3._
import chisel3.util._
import chisel3.stage._

class Crossbar extends Module{
    val io=IO(new Bundle{
        val in1 = Flipped(new AXILite)
        val in2 = Flipped(new AXILite)
        val out1 = (new AXI4)
        val out2 = (new AXI4)
        val hitrate=Output(UInt(128.W))
        val flush=Input(UInt(1.W))
    })
    val DEVICE_BASE :UInt = "xa0000000".U 
    val CLINT_BEGIN = 0x20000000.U
    val BYTES_RESERVED = 0xBFFF.U
    val CLINT_END = CLINT_BEGIN + BYTES_RESERVED



    val icache=Module(new ICache).io
    val icacheram=Module(new ICacheRAM).io
    val dcache=Module(new DCache).io
    val dcacheram=Module(new ICacheRAM).io
    //val d_skip=Module(new AXILite2AXI4).io
    //val i_skip=Module(new AXILite2AXI4).io
    val arbiter=Module(new CacheArbiter).io
    val arbiter1=Module(new DeviceArbiter).io

    val out1=Wire(new AXILite)
    val out2=Wire(new AXILite)

    io.hitrate:=0.U//Cat(icache.hitrate,dcache.hitrate)

    val clint=Wire(UInt(1.W))
    clint:=((out2.ar.bits.addr >= CLINT_BEGIN) && (out2.ar.bits.addr <= CLINT_END)) || ((out2.aw.bits.addr >= CLINT_BEGIN) && (out2.aw.bits.addr <= CLINT_END))
    //ifu to icache
    io.in1<>out1
    out1<>icache.in
    icache.ram<>icacheram
    icache.id := 0.U
    icache.flush:=io.flush

    //lsu to dcache
    io.in2<>out2 
    out2<>dcache.in
    dcache.ram<>dcacheram
    dcache.id := 1.U
    dcache.flush:=io.flush
    dcache.uncache :=(out2.ar.bits.addr >= DEVICE_BASE) || (out2.aw.bits.addr >= DEVICE_BASE) | clint


    //i_skip.in <> out1
    //i_skip.id := 0.U
    //d_skip.in <> out2
    //d_skip.id := 1.U
    //arbiter.ifu <> i_skip.mem
    //arbiter.lsu <> d_skip.mem

    //cache to arbiter
    arbiter.ifu<>icache.mem
    arbiter.lsu<>dcache.mem


    arbiter1.in<>arbiter.out
    io.out1<>arbiter1.out1
    io.out2<>arbiter1.out2


} 

class AXILite2AXI4 extends Module {
  val io = IO(new Bundle {
    val in = Flipped(new AXILite)
    val id = Input(UInt(1.W))
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

  io.mem.ar.bits.id := io.id
  io.mem.ar.bits.len := 0.U
  io.mem.ar.bits.size := 3.U
  io.mem.ar.bits.burst := "b10".U

  io.mem.aw.bits.id := io.id
  io.mem.aw.bits.len := 0.U
  io.mem.aw.bits.size := 3.U
  io.mem.aw.bits.burst := 0.U

  io.mem.w.bits.id := io.id
  io.mem.w.bits.last := io.in.w.valid

}

import chisel3._
import chisel3.util._
import chisel3.stage._

class Crossbar extends Module{
    val io=IO(new Bundle{
        val in1 = Flipped(new AXILite)
        val in2 = Flipped(new AXILite)
        val out = (new AXI4)
    })

    val icache=Module(new AXILite2AXI4)
    //val icacheram=Module(new CacheRAM)
    val dcache=Module(new Cache)
    val dcacheram=Module(new CacheRAM)
    val arbiter=Module(new AXI4Arbiter)
 
    val out1=Wire((new AXILite))
    val out2=Wire((new AXILite))
    io.in1<>out1
    out1<>icache.io.in
    io.in2<>out2
    out2<>dcache.io.in
    icache.io.mem<>arbiter.io.ifu
    //icache.io.ram<>icacheram.io
    dcache.io.mem<>arbiter.io.lsu
    dcache.io.ram<>dcacheram.io
    io.out<>arbiter.io.out
} 
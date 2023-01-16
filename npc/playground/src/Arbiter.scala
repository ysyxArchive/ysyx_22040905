import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class Arbiter extends Module{
    val io=IO(new Bundle{
        val ifu=Flipped(new AXILite)
        val lsu=Flipped(new AXILite)
        val out=(new AXILite)
    })
    val a_idle :: a_ifu :: a_lsu :: Nil = Enum(3)
    val state = RegInit(a_idle)
    state := MuxLookup(state, a_idle, List(
    a_idle  ->  Mux(io.lsu.ar.valid, a_lsu,
                Mux(io.ifu.ar.valid, a_ifu,a_idle)),
    a_ifu   ->  Mux(io.ifu.r.fire, a_idle, a_ifu),
    a_lsu   ->  Mux(io.lsu.r.fire, a_idle, a_lsu)
    ))
    //out
    io.out.ar.bits.addr:=MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.ifu.ar.bits.addr ,
                        a_lsu   ->  io.lsu.ar.bits.addr
                        ))
    io.out.ar.valid:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.ifu.ar.valid ,
                        a_lsu   ->  io.lsu.ar.valid 
                        ))
    io.out.r.ready:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.ifu.r.ready ,
                        a_lsu   ->  io.lsu.r.ready 
                        ))
    io.out.aw.bits.addr:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.ifu.aw.bits.addr ,
                        a_lsu   ->  io.lsu.aw.bits.addr 
                        ))
    io.out.aw.valid:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.ifu.aw.valid ,
                        a_lsu   ->  io.lsu.aw.valid 
                        ))
    io.out.w.bits.data:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.ifu.w.bits.data ,
                        a_lsu   ->  io.lsu.w.bits.data 
                        ))
    io.out.w.bits.strb:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.ifu.w.bits.strb ,
                        a_lsu   ->  io.lsu.w.bits.strb 
                        ))
    io.out.w.valid:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.ifu.w.valid ,
                        a_lsu   ->  io.lsu.w.valid 
                        ))
    io.out.b.ready:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.ifu.b.ready ,
                        a_lsu   ->  io.lsu.b.ready 
                        ))
    //ifu
    io.ifu.ar.ready:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.ar.ready ,
                        a_lsu   ->  io.out.ar.ready 
                        ))
    io.ifu.r.bits.data:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.r.bits.data ,
                        a_lsu   ->  io.out.r.bits.data 
                        ))
    io.ifu.r.bits.resp:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.r.bits.resp,
                        a_lsu   ->  io.out.r.bits.resp 
                        ))
    io.ifu.r.valid:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.r.valid ,
                        a_lsu   ->  io.out.r.valid 
                        ))
    io.ifu.aw.ready:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.aw.ready ,
                        a_lsu   ->  io.out.aw.ready 
                        ))
    io.ifu.w.ready:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.w.ready ,
                        a_lsu   ->  io.out.w.ready 
                        ))
    io.ifu.b.bits.resp:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.b.bits.resp ,
                        a_lsu   ->  io.out.b.bits.resp
                        ))
    io.ifu.b.valid:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.b.valid ,
                        a_lsu   ->  io.out.b.valid 
                        ))

    //lsu
    io.lsu.ar.ready:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.ar.ready ,
                        a_lsu   ->  io.out.ar.ready 
                        ))
    io.lsu.r.bits.data:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.r.bits.data ,
                        a_lsu   ->  io.out.r.bits.data 
                        ))
    io.lsu.r.bits.resp:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.r.bits.resp ,
                        a_lsu   ->  io.out.r.bits.resp 
                        ))
    io.lsu.r.valid:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.r.valid ,
                        a_lsu   ->  io.out.r.valid 
                        ))
    io.lsu.aw.ready:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.aw.ready ,
                        a_lsu   ->  io.out.aw.ready
                        ))
    io.lsu.w.ready:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.w.ready ,
                        a_lsu   ->  io.out.w.ready 
                        ))
    io.lsu.b.bits.resp:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.b.bits.resp ,
                        a_lsu   ->  io.out.b.bits.resp 
                        ))
    io.lsu.b.valid:=    MuxLookup(state, a_idle, List(
                        a_idle  ->  0.U, 
                        a_ifu   ->  io.out.b.valid ,
                        a_lsu   ->  io.out.b.valid 
                        ))
}
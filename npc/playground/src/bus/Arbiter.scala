import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class CacheArbiter extends Module{
  val io=IO(new Bundle{
    val ifu=Flipped(new AXI4)
    val lsu=Flipped(new AXI4)
    val out = (new AXI4)
  })
  val s_idle :: s_ifu :: s_lsu :: Nil = Enum(3)

  
  val arstate = Wire(UInt(2.W))
  val rstate  = Wire(UInt(2.W))
  arstate := Mux(io.lsu.ar.valid,s_lsu,s_ifu)
  rstate := Mux(io.out.r.bits.id === 1.U,s_lsu,s_ifu)

  when(arstate === s_ifu){
    io.out.ar.bits.id   := io.ifu.ar.bits.id   
    io.out.ar.bits.addr := io.ifu.ar.bits.addr 
    io.out.ar.bits.len  := io.ifu.ar.bits.len  
    io.out.ar.bits.size := io.ifu.ar.bits.size 
    io.out.ar.bits.burst:= io.ifu.ar.bits.burst
    io.out.ar.valid     := io.ifu.ar.valid     
    io.ifu.ar.ready     := io.out.ar.ready     
    io.lsu.ar.ready     := 0.U     
  }.elsewhen(arstate === s_lsu ){
    io.out.ar.bits.id   := io.lsu.ar.bits.id   
    io.out.ar.bits.addr := io.lsu.ar.bits.addr 
    io.out.ar.bits.len  := io.lsu.ar.bits.len  
    io.out.ar.bits.size := io.lsu.ar.bits.size 
    io.out.ar.bits.burst:= io.lsu.ar.bits.burst
    io.out.ar.valid     := io.lsu.ar.valid     
    io.ifu.ar.ready     := 0.U   
    io.lsu.ar.ready     := io.out.ar.ready  
  }.otherwise{
    io.out.ar.bits.id   := 0.U
    io.out.ar.bits.addr := 0.U
    io.out.ar.bits.len  := 0.U
    io.out.ar.bits.size := 0.U
    io.out.ar.bits.burst:= 0.U
    io.out.ar.valid     := 0.U
    io.ifu.ar.ready     := 0.U
    io.lsu.ar.ready     := 0.U
  }
  
  when(rstate === s_ifu){
    io.ifu.r.bits.id      := io.out.r.bits.id
    io.ifu.r.bits.data    := io.out.r.bits.data
    io.ifu.r.bits.resp    := io.out.r.bits.resp
    io.ifu.r.bits.last    := io.out.r.bits.last
    io.ifu.r.valid        := io.out.r.valid
    
    io.lsu.r.bits.id      := 1.U
    io.lsu.r.bits.data    := 0.U
    io.lsu.r.bits.resp    := 0.U
    io.lsu.r.bits.last    := 0.U
    io.lsu.r.valid        := 0.U
 
    io.out.r.ready        := io.ifu.r.ready
  }.elsewhen(rstate === s_lsu ){
    io.ifu.r.bits.id      := 0.U
    io.ifu.r.bits.data    := 0.U
    io.ifu.r.bits.resp    := 0.U
    io.ifu.r.bits.last    := 0.U
    io.ifu.r.valid        := 0.U
    
    io.lsu.r.bits.id      := io.out.r.bits.id
    io.lsu.r.bits.data    := io.out.r.bits.data
    io.lsu.r.bits.resp    := io.out.r.bits.resp
    io.lsu.r.bits.last    := io.out.r.bits.last
    io.lsu.r.valid        := io.out.r.valid    
 
    io.out.r.ready        := io.lsu.r.ready
  }.otherwise{
    io.ifu.r.bits.id      := 0.U
    io.ifu.r.bits.data    := 0.U
    io.ifu.r.bits.resp    := 0.U
    io.ifu.r.bits.last    := 0.U
    io.ifu.r.valid        := 0.U
    
    io.lsu.r.bits.id      := 1.U
    io.lsu.r.bits.data    := 0.U
    io.lsu.r.bits.resp    := 0.U
    io.lsu.r.bits.last    := 0.U
    io.lsu.r.valid        := 0.U
 
    io.out.r.ready        := 0.U
  }


  io.out.aw.bits.id   := io.lsu.aw.bits.id   
  io.out.aw.bits.addr := io.lsu.aw.bits.addr 
  io.out.aw.bits.len  := io.lsu.aw.bits.len  
  io.out.aw.bits.size := io.lsu.aw.bits.size 
  io.out.aw.bits.burst:= io.lsu.aw.bits.burst
  io.out.aw.valid     := io.lsu.aw.valid     

  io.ifu.aw.ready     := 0.U     
  io.lsu.aw.ready     := io.out.aw.ready     

  io.out.w.bits.id    := io.lsu.w.bits.id
  io.out.w.bits.data  := io.lsu.w.bits.data
  io.out.w.bits.strb  := io.lsu.w.bits.strb
  io.out.w.bits.last  := io.lsu.w.bits.last
  io.out.w.valid      := io.lsu.w.valid

  io.ifu.w.ready      := 0.U     
  io.lsu.w.ready      := io.out.w.ready 

  io.ifu.b.bits.id    := 0.U
  io.ifu.b.bits.resp  := 0.U
  io.ifu.b.valid      := 0.U

  io.lsu.b.bits.id    := io.out.b.bits.id
  io.lsu.b.bits.resp  := io.out.b.bits.resp
  io.lsu.b.valid      := io.out.b.valid

  io.out.b.ready := io.lsu.b.ready

}

class DeviceArbiter extends Module{
  val io=IO(new Bundle{
    val in=Flipped(new AXI4)
    val out1 = (new AXI4)
    val out2 = (new AXI4)
  })
  val s_idle :: s_out1 :: s_out2 :: Nil = Enum(3)

  
  val arstate = Wire(UInt(2.W))
  val rstate  = Wire(UInt(2.W))
  arstate := Mux(io.lsu.ar.valid,s_lsu,s_ifu)
  rstate := Mux(io.out.r.bits.id === 1.U,s_lsu,s_ifu)

  when(arstate === s_ifu){
    io.out.ar.bits.id   := io.ifu.ar.bits.id   
    io.out.ar.bits.addr := io.ifu.ar.bits.addr 
    io.out.ar.bits.len  := io.ifu.ar.bits.len  
    io.out.ar.bits.size := io.ifu.ar.bits.size 
    io.out.ar.bits.burst:= io.ifu.ar.bits.burst
    io.out.ar.valid     := io.ifu.ar.valid     
    io.ifu.ar.ready     := io.out.ar.ready     
    io.lsu.ar.ready     := 0.U     
  }.elsewhen(arstate === s_lsu ){
    io.out.ar.bits.id   := io.lsu.ar.bits.id   
    io.out.ar.bits.addr := io.lsu.ar.bits.addr 
    io.out.ar.bits.len  := io.lsu.ar.bits.len  
    io.out.ar.bits.size := io.lsu.ar.bits.size 
    io.out.ar.bits.burst:= io.lsu.ar.bits.burst
    io.out.ar.valid     := io.lsu.ar.valid     
    io.ifu.ar.ready     := 0.U   
    io.lsu.ar.ready     := io.out.ar.ready  
  }.otherwise{
    io.out.ar.bits.id   := 0.U
    io.out.ar.bits.addr := 0.U
    io.out.ar.bits.len  := 0.U
    io.out.ar.bits.size := 0.U
    io.out.ar.bits.burst:= 0.U
    io.out.ar.valid     := 0.U
    io.ifu.ar.ready     := 0.U
    io.lsu.ar.ready     := 0.U
  }
  
  when(rstate === s_ifu){
    io.ifu.r.bits.id      := io.out.r.bits.id
    io.ifu.r.bits.data    := io.out.r.bits.data
    io.ifu.r.bits.resp    := io.out.r.bits.resp
    io.ifu.r.bits.last    := io.out.r.bits.last
    io.ifu.r.valid        := io.out.r.valid
    
    io.lsu.r.bits.id      := 1.U
    io.lsu.r.bits.data    := 0.U
    io.lsu.r.bits.resp    := 0.U
    io.lsu.r.bits.last    := 0.U
    io.lsu.r.valid        := 0.U
 
    io.out.r.ready        := io.ifu.r.ready
  }.elsewhen(rstate === s_lsu ){
    io.ifu.r.bits.id      := 0.U
    io.ifu.r.bits.data    := 0.U
    io.ifu.r.bits.resp    := 0.U
    io.ifu.r.bits.last    := 0.U
    io.ifu.r.valid        := 0.U
    
    io.lsu.r.bits.id      := io.out.r.bits.id
    io.lsu.r.bits.data    := io.out.r.bits.data
    io.lsu.r.bits.resp    := io.out.r.bits.resp
    io.lsu.r.bits.last    := io.out.r.bits.last
    io.lsu.r.valid        := io.out.r.valid    
 
    io.out.r.ready        := io.lsu.r.ready
  }.otherwise{
    io.ifu.r.bits.id      := 0.U
    io.ifu.r.bits.data    := 0.U
    io.ifu.r.bits.resp    := 0.U
    io.ifu.r.bits.last    := 0.U
    io.ifu.r.valid        := 0.U
    
    io.lsu.r.bits.id      := 1.U
    io.lsu.r.bits.data    := 0.U
    io.lsu.r.bits.resp    := 0.U
    io.lsu.r.bits.last    := 0.U
    io.lsu.r.valid        := 0.U
 
    io.out.r.ready        := 0.U
  }


  io.out.aw.bits.id   := io.lsu.aw.bits.id   
  io.out.aw.bits.addr := io.lsu.aw.bits.addr 
  io.out.aw.bits.len  := io.lsu.aw.bits.len  
  io.out.aw.bits.size := io.lsu.aw.bits.size 
  io.out.aw.bits.burst:= io.lsu.aw.bits.burst
  io.out.aw.valid     := io.lsu.aw.valid     

  io.ifu.aw.ready     := 0.U     
  io.lsu.aw.ready     := io.out.aw.ready     

  io.out.w.bits.id    := io.lsu.w.bits.id
  io.out.w.bits.data  := io.lsu.w.bits.data
  io.out.w.bits.strb  := io.lsu.w.bits.strb
  io.out.w.bits.last  := io.lsu.w.bits.last
  io.out.w.valid      := io.lsu.w.valid

  io.ifu.w.ready      := 0.U     
  io.lsu.w.ready      := io.out.w.ready 

  io.ifu.b.bits.id    := 0.U
  io.ifu.b.bits.resp  := 0.U
  io.ifu.b.valid      := 0.U

  io.lsu.b.bits.id    := io.out.b.bits.id
  io.lsu.b.bits.resp  := io.out.b.bits.resp
  io.lsu.b.valid      := io.out.b.valid

  io.out.b.ready := io.lsu.b.ready

}
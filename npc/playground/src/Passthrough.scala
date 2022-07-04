import chisel3._
import chisel3.util.Decoupled

class Passthrough extends Module { 
  val io = IO(new Bundle {
    val y=Input(UInt(2.W))
    val x0=Input(UInt(2.W))
    val x1=Input(UInt(2.W))
    val x2=Input(UInt(2.W))
    val x3=Input(UInt(2.W))
    val f=Input(UInt(2.W))

  })
    when(io.y===0.U){
        io.f:=io.x0
    }.elsewhen(io.y===1.U){
        io.f:=io.x1
    }.elsewhen(io.y===2.U){
        io.f:=io.x2
    }.otherwise{
        io.f:=io.x3
    } 
      
}


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
    when(y===0){
        f:=x0
    }.elsewhen(y===1){
        f:=x1
    }.elsewhen(y===2){
        f:=x2
    }.otherwise{
        f:=x3
    } 
      
}


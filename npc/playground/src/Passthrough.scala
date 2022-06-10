import chisel3._
import chisel3.util.Decoupled

class Passthrough extends Module { 
  val io = IO(new Bundle {
    val x0 = Input(UInt(2.W))
    val x1 = Input(UInt(2.W))
    val x2 = Input(UInt(2.W))
    val x3 = Input(UInt(2.W))
    val y  = Input(UInt(2.W))
    val F  = Output(UInt(2.W))
  })
   when(io.y===0.U)
   {
     io.F := io.x0
   }.elsewhen(io.y===1.U){
     io.F := io.x1
   }.elsewhen(io.y===2.U){
     io.F := io.x2
   }.otherwise{
     io.F := io.x3
   }

  }


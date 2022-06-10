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
   when(y===0.U)
   {
     F := x0
   }.elsewhen(y===1.U){
     F := x1
   }.elsewheh(y===2.U){
     F := x2
   }.otherwise{
     F := x3
   }

  }


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
  switch(y){
   is(0.U){
     F := x0
   }
   is(1.U){
     F := x1
   }
   is(2.U){
     F := x2
   }
   is(3.U){
     F := x3
   }

  }
}

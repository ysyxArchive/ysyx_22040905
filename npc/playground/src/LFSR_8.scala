import chisel3._
import chisel3.util._
import chisel3.stage._

class LFSR_8 extends Module{
  val io=IO(new Bundle{
    val en=Input(Bool())
    val out=Output(UInt(8.W))
  })
  val x=RegInit(1.U(8.W))
  when(io.en){
    x:= Cat(x(4)^x(3)^x(2)^x(0),x(7,1))
  }
  io.out:=x
}

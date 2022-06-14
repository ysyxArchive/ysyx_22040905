import chisel3._
import chisel3.util.Decoupled

class Passthrough extends Module { 
  val io = IO(new Bundle {
     val in=Input(UInt(8.W))
     val en=Input(Bool())
     val out=Output(UInt(3.W))
     val sign=Output(Bool())
     val bcd7seg=Output(UInt(7.W))
  })
      val outt:UInt :=Reg(UInt(3.W))
      io.sign := io.in>0.U 
      when(io.en){
        for(i <- 0 to 8){
          when(io.in===(1.U<<i)){
            outt := i;
          }
        }
        io.out := outt
        switch(outt){
          is(0.U){
            io.bcd7seg:= "b1000000".U
          }is(1.U){
            io.bcd7seg:= "b1111001".U
          }is(2.U){
            io.bcd7seg:= "b0100100".U
          }is(3.U){
            io.bcd7seg:= "b0110000".U
          }is(4.U){
            io.bcd7seg:= "b0011001".U
          }is(5.U){
            io.bcd7seg:= "b0010010".U
          }is(6.U){
            io.bcd7seg:= "b0000010".U
          }is(7.U){
            io.bcd7seg:= "b1111000".U
          }is(8.U){
            io.bcd7seg:= "b0000000".U
          }is(9.U){
            io.bcd7seg:= "b0010000".U
          }
        }
      }
  }


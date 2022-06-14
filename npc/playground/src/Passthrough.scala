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
      val outt:UInt =Reg(UInt(3.W))
      io.bcd7seg := "b00000000".U
      outt := 8.U
      io.sign := io.in>0.U 
      when(io.en){
        when(io.in(7)===1.U){
            outt := 7.U
        }.elsewhen(io.in(6)===1.U){
            outt := 6.U
        }.elsewhen(io.in(5)===1.U){
            outt := 5.U
        }.elsewhen(io.in(4)===1.U){
            outt := 4.U
        }.elsewhen(io.in(3)===1.U){
            outt := 3.U
        }.elsewhen(io.in(2)===1.U){
            outt := 2.U
        }.elsewhen(io.in(1)===1.U){
            outt := 1.U
        }.elsewhen(io.in(0)===1.U){
            outt := 0.U
        }
        io.out := outt
        when(outt===0.U){
            io.bcd7seg:= "b1000000".U
        }.elsewhen(outt===1.U){
            io.bcd7seg:= "b1111001".U
        }.elsewhen(outt===2.U){
            io.bcd7seg:= "b0100100".U
        }.elsewhen(outt===3.U){
            io.bcd7seg:= "b0110000".U
        }.elsewhen(outt===4.U){
            io.bcd7seg:= "b0011001".U
        }.elsewhen(outt===5.U){
            io.bcd7seg:= "b0010010".U
        }.elsewhen(outt===6.U){
            io.bcd7seg:= "b0000010".U
        }.elsewhen(outt===7.U){
            io.bcd7seg:= "b1111000".U
        }.elsewhen(outt===8.U){
            io.bcd7seg:= "b0000000".U
        }.elsewhen(outt===9.U){
            io.bcd7seg:= "b0010000".U
        }
        
      }
  }


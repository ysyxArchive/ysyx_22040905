import chisel3._
import chisel3.util.Decoupled
import chisel3.util._
class Passthrough extends Module { 
  val io = IO(new Bundle {
    val button=Input(UInt(1.W))
    val bcd8seg=Output(Vec(2,UInt(8.W)))
    val Result=Output(UInt(8.W))
  })
   io.Result:=1.U
   val num=RegInit(UInt(8.W),1.U)
   val m1=Module(new seg)
   val m2=Module(new seg)
   when(io.button===1.U){
    when(num===0.U){
        num:=1.U
    }
    num:=num>>1.U;
    num:=Cat(num(0)^num(1)^num(2)^num(3),num(6,0))
    }
    m1.io.in:=num%10.U
    m2.io.in:=num/10.U
    io.bcd8seg(0):=m1.io.out
    io.bcd8seg(1):=m2.io.out
    io.Result:=num

}
class seg extends Module{
    val io= IO(new Bundle{
        val in=Input(UInt(4.W))
        val out=Output(UInt(8.W))
    })
    io.out:="b11111111".U
    when(io.in===0.U){
        io.out:="b11000000".U   
    }.elsewhen(io.in===1.U){
        io.out:="b11111001".U
    }.elsewhen(io.in===2.U){
        io.out:="b10100100".U
    }.elsewhen(io.in===3.U){
        io.out:="b10110000".U
    }.elsewhen(io.in===4.U){
        io.out:="b10011001".U
    }.elsewhen(io.in===5.U){
        io.out:="b10010010".U
    }.elsewhen(io.in===6.U){
        io.out:="b10000010".U
    }.elsewhen(io.in===7.U){
        io.out:="b11111000".U
    }.elsewhen(io.in===8.U){
        io.out:="b10000000".U
    }.elsewhen(io.in===9.U){
        io.out:="b10010000".U
    }.otherwise{
        io.out:="b11111111".U
    }

}
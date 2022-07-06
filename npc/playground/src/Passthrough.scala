import chisel3._
import chisel3.util.Decoupled

class Passthrough extends Module { 
  val io = IO(new Bundle {
    val a=Input(UInt(4.W))
    val b=Input(UInt(4.W))
    val Overflow=Output(Bool())
    val Zero=Output(Bool())
    val Result=Output(UInt(4.W))
    val Carry=Output(Bool())
    val op=Input(UInt(3.W))
    val bcd8seg=Output(UInt(24.W))
  })
   val a=Reg(UInt(24.W))
   val b=Reg(UInt(24.W))
   val c=Reg(UInt(24.W))
   io.bcd8seg:="b000000000000000000000000".U
   a:="b000000000000000000000000".U
   b:="b000000000000000000000000".U
   c:="b000000000000000000000000".U
   io.Overflow:=false.B
   io.Zero:=true.B
   io.Result:=0.U
   io.Carry:=false.B
    when(io.op==="b000".U){
        io.Result:=io.a+io.b
        io.Overflow:=(io.a(3)===io.b(3))&&(io.Result(3)=/=io.a(3))
        io.Carry:=((io.a+&io.b)>io.Result)
        io.Zero:=(io.Result===0.U)
    }.elsewhen(io.op==="b001".U){
        io.Result:=io.a-io.b
        io.Overflow := (io.a(3) === ("b1111".U^io.b)(3)) && (io.Result(3) =/= io.a(3))
        io.Carry:=((io.a-&io.b)>io.Result)
        io.Zero:=(io.Result===0.U)
    }.elsewhen(io.op==="b010".U){
        io.Result:=(~io.a)
    }.elsewhen(io.op==="b011".U){
        io.Result:=io.a&io.b
    }.elsewhen(io.op==="b100".U){
        io.Result:=io.a|io.b
    }.elsewhen(io.op==="b101".U){
        io.Result:=io.a^io.b
    }.elsewhen(io.op==="b110".U){
        when(io.a<io.b){
            io.Result:=1.U
        }
    }.otherwise{
        when(io.a===io.b){
            io.Result:=1.U
        }
    }

    when(io.Result%10.U===0.U){
        b:="b000000000000000010000100".U^a
    }.elsewhen(io.Result%10.U===1.U){
        b:="b000000000000000010011111".U^a
    }.elsewhen(io.Result%10.U===2.U){
        b:="b000000000000000010100101".U^a
    }.elsewhen(io.Result%10.U===3.U){
        b:="b000000000000000010001101".U^a
    }.elsewhen(io.Result%10.U===4.U){
        b:="b000000000000000010011001".U^a
    }.elsewhen(io.Result%10.U===5.U){
        b:="b000000000000000011001001".U^a
    }.elsewhen(io.Result%10.U===6.U){
        b:="b000000000000000011000001".U^a
    }.elsewhen(io.Result%10.U===7.U){
        b:="b000000000000000010011111".U^a
    }.elsewhen(io.Result%10.U===8.U){
        b:="b000000000000000010000000".U^a
    }.elsewhen(io.Result%10.U===9.U){
        b:="b000000000000000010010000".U^a
    }.otherwise{
        b:="b000000000000000011111111".U^a
    }

    when(io.Result/10.U%10.U===0.U){
        c:="b000000001000000000000000".U^b
    }.elsewhen(io.Result/10.U%10.U===1.U){
        c:="b000000001001111100000000".U^b
    }.elsewhen(io.Result/10.U%10.U===2.U){
        c:="b000000001010010100000000".U^b
    }.elsewhen(io.Result/10.U%10.U===3.U){
        c:="b000000001000110100000000".U^b
    }.elsewhen(io.Result/10.U%10.U===4.U){
        c:="b000000001001100100000000".U^b
    }.elsewhen(io.Result/10.U%10.U===5.U){
        c:="b000000001100100100000000".U^b
    }.elsewhen(io.Result/10.U%10.U===6.U){
        c:="b000000001100000100000000".U^b
    }.elsewhen(io.Result/10.U%10.U===7.U){
        c:="b000000001001111100000000".U^b
    }.elsewhen(io.Result/10.U%10.U===8.U){
        c:="b000000001000000000000000".U^b
    }.elsewhen(io.Result/10.U%10.U===9.U){
        c:="b000000001001000000000000".U^b
    }.otherwise{
        c:="b000000001111111100000000".U^b
    }

    when(io.Result(3)===0.B){
        io.bcd8seg:="b111111110000000000000000".U^c
    }.otherwise{
        io.bcd8seg:="b101111110000000000000000".U^c
    }
}


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
   io.bcd8seg:="b000000000000000000000000".U
   io.Overflow:=0.Bool
   io.Zero:=1.Bool
   io.Result:=0.U
   io.Carry:=0.Bool
    when(io.op==="b000".U){
        io.Result:=io.a+io.b
        io.Overflow:=(io.a(3)===io.b(3))&&(io.Result(3)=/=io.a(3))
        io.Carrry:=((io.a+&io.b)>io.Result)
        io.Zero:=(io.Result===0.U)
    }.elsewhen(io.op==="b001".U){
        io.Result:=io.a-io.b
        io.Overflow = (io.a(3) === ("b1111"^io.b)(3)) && (io.Result(3) =/= io.a(3))
        io.Carry:=((io.a-&io.b)>io.Result)
        io.Zero:=(io.Result===0)
    }.elsewhen(io.op==="b010".U){
        io.Result:=~io.a
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
    when(io.Result%10===0){
        io.bcd8seg="b000000000000000010000010".U^io.bcd8seg
    }.elsewhen(io.Result%10===1){
        io.bcd8seg="b000000000000000010011111".U^io.bcd8seg
    }.elsewhen(io.Result%10===2){
        io.bcd8seg="b000000000000000010100101".U^io.bcd8seg
    }.elsewhen(io.Result%10===3){
        io.bcd8seg="b000000000000000010001101".U^io.bcd8seg
    }.elsewhen(io.Result%10===4){
        io.bcd8seg="b000000000000000010011001".U^io.bcd8seg
    }.elsewhen(io.Result%10===5){
        io.bcd8seg="b000000000000000011001001".U^io.bcd8seg
    }.elsewhen(io.Result%10===6){
        io.bcd8seg="b000000000000000011000001".U^io.bcd8seg
    }.elsewhen(io.Result%10===7){
        io.bcd8seg="b000000000000000010011111".U^io.bcd8seg
    }.elsewhen(io.Result%10===8){
        io.bcd8seg="b000000000000000010000000".U^io.bcd8seg
    }.elsewhen(io.Result%10===9){
        io.bcd8seg="b000000000000000010010000".U^io.bcd8seg
    }.otherwise{
        io.bcd8seg="b000000000000000010111111".U^io.bcd8seg
    }

    when(io.Result/10%10===0){
        io.bcd8seg="b000000001000001000000000".U^io.bcd8seg
    }.elsewhen(io.Result/10%10===1){
        io.bcd8seg="b000000001001111100000000".U^io.bcd8seg
    }.elsewhen(io.Result/10%10===2){
        io.bcd8seg="b000000001010010100000000".U^io.bcd8seg
    }.elsewhen(io.Result/10%10===3){
        io.bcd8seg="b000000001000110100000000".U^io.bcd8seg
    }.elsewhen(io.Result/10%10===4){
        io.bcd8seg="b000000001001100100000000".U^io.bcd8seg
    }.elsewhen(io.Result/10%10===5){
        io.bcd8seg="b000000001100100100000000".U^io.bcd8seg
    }.elsewhen(io.Result/10%10===6){
        io.bcd8seg="b000000001100000100000000".U^io.bcd8seg
    }.elsewhen(io.Result/10%10===7){
        io.bcd8seg="b000000001001111100000000".U^io.bcd8seg
    }.elsewhen(io.Result/10%10===8){
        io.bcd8seg="b000000001000000000000000".U^io.bcd8seg
    }.elsewhen(io.Result/10%10===9){
        io.bcd8seg="b000000001001000000000000".U^io.bcd8seg
    }.otherwise{
        io.bcd8seg="b000000001011111100000000".U^io.bcd8seg
    }

    when(io.Result/100%10===0){
        io.bcd8seg="b100000100000000000000000".U^io.bcd8seg
    }.elsewhen(io.Result/100%10===1){
        io.bcd8seg="b100111110000000000000000".U^io.bcd8seg
    }.elsewhen(io.Result/100%10===2){
        io.bcd8seg="b101001010000000000000000".U^io.bcd8seg
    }.elsewhen(io.Result/100%10===3){
        io.bcd8seg="b100011010000000000000000".U^io.bcd8seg
    }.elsewhen(io.Result/100%10===4){
        io.bcd8seg="b100110010000000000000000".U^io.bcd8seg
    }.elsewhen(io.Result/100%10===5){
        io.bcd8seg="b110010010000000000000000".U^io.bcd8seg
    }.elsewhen(io.Result/100%10===6){
        io.bcd8seg="b110000010000000000000000".U^io.bcd8seg
    }.elsewhen(io.Result/100%10===7){
        io.bcd8seg="b100111110000000000000000".U^io.bcd8seg
    }.elsewhen(io.Result/100%10===8){
        io.bcd8seg="b100000000000000000000000".U^io.bcd8seg
    }.elsewhen(io.Result/100%10===9){
        io.bcd8seg="b100100000000000000000000".U^io.bcd8seg
    }.otherwise{
        io.bcd8seg="b101111110000000000000000".U^io.bcd8seg
    }
}


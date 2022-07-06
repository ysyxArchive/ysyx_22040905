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
        when(io.a(3)*(-(1.U<<3.U))+io.a(2)*(1.U<<2.U)+io.a(1)*(1.U<<1.U)+io.a(0)*(1.U<<0.U)<io.b(3)*(-(1.U<<3.U))+io.b(2)*(1.U<<2.U)+io.b(1)*(1.U<<1.U)+io.b(0)*(1.U<<0.U)){
            io.Result:=1.U
        }
    }.otherwise{
        when(io.a===io.b){
            io.Result:=1.U
        }
    }
    val r=Reg(UInt(4.W))
    r:=io.Result
    when(io.Result(3)===0.B){
        a:="b111111110000000000000000".U^c
    }.otherwise{
        a:="b101111110000000000000000".U^c
        r:=(~io.Result)+1.U
    }

    when(r%10.U===0.U){
        b:="b000000000000000011000000".U^a
    }.elsewhen(r%10.U===1.U){
        b:="b000000000000000011111001".U^a
    }.elsewhen(r%10.U===2.U){
        b:="b000000000000000010100100".U^a
    }.elsewhen(r%10.U===3.U){
        b:="b000000000000000010110000".U^a
    }.elsewhen(r%10.U===4.U){
        b:="b000000000000000010011001".U^a
    }.elsewhen(r%10.U===5.U){
        b:="b000000000000000010010010".U^a
    }.elsewhen(r%10.U===6.U){
        b:="b000000000000000010000010".U^a
    }.elsewhen(r%10.U===7.U){
        b:="b000000000000000011111000".U^a
    }.elsewhen(r%10.U===8.U){
        b:="b000000000000000010000000".U^a
    }.elsewhen(r%10.U===9.U){
        b:="b000000000000000010010000".U^a
    }.otherwise{
        b:="b000000000000000011111111".U^a
    }
    when(r/10.U%10.U===1.U){
        io.bcd8seg:="b000000001111100100000000".U^b
    }.elsewhen(r/10.U%10.U===2.U){
        io.bcd8seg:="b000000001010010000000000".U^b
    }.elsewhen(r/10.U%10.U===3.U){
        io.bcd8seg:="b000000001011000000000000".U^b
    }.elsewhen(r/10.U%10.U===4.U){
        io.bcd8seg:="b000000001001100100000000".U^b
    }.elsewhen(r/10.U%10.U===5.U){
        io.bcd8seg:="b000000001001001010000000".U^b
    }.elsewhen(r/10.U%10.U===6.U){
        io.bcd8seg:="b000000001000001000000000".U^b
    }.elsewhen(r/10.U%10.U===7.U){
        io.bcd8seg:="b000000001111100000000000".U^b
    }.elsewhen(r/10.U%10.U===8.U){
        io.bcd8seg:="b000000001000000000000000".U^b
    }.elsewhen(r/10.U%10.U===9.U){
        io.bcd8seg:="b000000001001000000000000".U^b
    }.otherwise{
        io.bcd8seg:="b000000001111111100000000".U^b
    }

    
}


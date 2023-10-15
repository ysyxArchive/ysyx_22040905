import chisel3._
import chisel3.util._
import chisel3.stage._

class div(xlen: Int) extends Module{
    val io=IO(new Bundle{
        val dividend = Input(UInt(xlen.W))      //被除数
        val divisor = Input(UInt(xlen.W))       //除数
        val div_valid = Input(Bool())           //为高表示输入的数据有效，如果没有新的除法输入，在除法被接受的下一个周期要置低
        val divw = Input(Bool())                //为高表示输入的是 32 位除法
        val div_signed = Input(Bool())          //表示是不是有符号除法，为高表示是有符号除法
        val flush = Input(Bool())               //为高表示要取消除法（修改一下除法器状态就行）
        val div_ready = Output(Bool())          //为高表示除法器空闲，可以输入数据
        val out_valid = Output(Bool())          //为高表示除法器输出了有效结果
        val quotient = Output(UInt(xlen.W))     //商
        val remainder = Output(UInt(xlen.W))     //余数
    })

  val dividend_abs = Mux(io.div_signed && io.dividend(xlen-1).asBool(), 
                         (~io.dividend).asUInt + 1.U, io.dividend)
  val divisor_abs = Mux(io.div_signed && io.divisor(xlen-1).asBool(), 
                        (~io.divisor).asUInt + 1.U, io.divisor)

  val quotient = RegInit(0.U(xlen.W))
  val remainder = RegInit(0.U(xlen.W))
  val dividend = RegInit(0.U((xlen<<1).W))
  val divisor = RegInit(0.U((xlen+1).W))

  val shift_count = RegInit((xlen).U((log2Ceil(xlen)+1).W))

  val is_dividing = RegInit(false.B)
  val is_dividing_divw = RegInit(false.B)
  val is_dividing_signed = RegInit(false.B)

  val sub =Wire(UInt((xlen+1).W)) 

  val dividend_sign = io.dividend(xlen-1) & is_dividing_signed
  val divisor_sign = io.divisor(xlen-1) & is_dividing_signed
  val quotient_sign = RegInit(false.B)
  val remainder_sign = RegInit(false.B)
  val out_valid = RegInit(false.B)
 
  sub := dividend(2*xlen-1,xlen-1) - divisor

  io.div_ready := !is_dividing

  when(io.flush) {
    is_dividing := false.B
    shift_count := xlen.U
    out_valid := false.B
  }.elsewhen(io.div_valid && !is_dividing) {
    is_dividing := true.B
    is_dividing_divw := io.divw
    is_dividing_signed := io.div_signed
    dividend := Cat(0.U(xlen.W),dividend_abs)
    divisor := Cat(0.U(1.W),divisor_abs)
    quotient := 0.U
    remainder := 0.U
    shift_count := (xlen).U
    quotient_sign := dividend_sign ^ divisor_sign
    remainder_sign := dividend_sign
    out_valid := false.B
  }.elsewhen(is_dividing) {
    when(shift_count === 0.U){
      is_dividing := false.B


      quotient := Mux(quotient_sign, (~quotient).asUInt + 1.U, quotient)
      remainder := Mux(remainder_sign, (~dividend(2*xlen-1, xlen)).asUInt + 1.U, dividend(2*xlen-1, xlen))

      out_valid := true.B

    }.elsewhen(sub(xlen).asBool){
      dividend := dividend << 1.U
      quotient := quotient << 1.U
    }.otherwise{
      quotient := (quotient << 1.U) | 1.U
      dividend := Cat(sub,dividend(xlen-2,0)) << 1
    }

    shift_count := shift_count - 1.U

  }.otherwise{
    out_valid := false.B
  }

  //when(out_valid){
  //  printf("dividend: %x, divisor: %x, quotient: %x, remainder: %x, divw: %x, div_signed: %x\n", io.dividend, io.divisor, io.quotient, io.remainder,io.divw,io.div_signed)
  //}
  //printf("%d %x %x %x %x %x\n",shift_count,dividend,divisor,quotient,remainder,dividend(2*xlen-1, xlen))

  io.out_valid := out_valid
  io.quotient := quotient
  io.remainder := remainder
}


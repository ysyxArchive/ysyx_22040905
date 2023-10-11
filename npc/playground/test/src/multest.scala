import chisel3._
import chisel3.util._
import chiseltest._
import chisel3.experimental.BundleLiterals._
import chiseltest.formal._
import chiseltest.formal.BoundedCheck
import utest._



class Mul extends Module{
    val io=IO(new Bundle{
        val mul_valid = Input(UInt(1.W))         //为高表示输入的数据有效，如果没有新的乘法输入，在乘法被接受的下一个周期要置低
        val flush= Input(UInt(1.W))              //为高表示取消乘法
        val mulw= Input(UInt(1.W))               //为高表示是 32 位乘法
        val mul_signed= Input(UInt(2.W))         //2’b11（signed x signed）；2’b10（signed x unsigned）；2’b00（unsigned x unsigned）；
        val multiplicand= Input(UInt(64.W))      //被乘数，64 表示乘法器位数
        val multiplier= Input(UInt(64.W))        //乘数
        val mul_ready= Output(UInt(1.W))         //为高表示乘法器准备好，表示可以输入数据
        val out_valid= Output(UInt(1.W))         //为高表示乘法器输出的结果有效
        val result_hi= Output(UInt(64.W))        //高 64 bits 结果
        val result_lo= Output(UInt(64.W))        //低 64 bits 结果
    })

    val s_idle :: s_wait :: Nil = Enum(2) 
    val state = RegInit(s_idle)
    state := MuxLookup(state, s_idle ,List(
        s_idle -> Mux(io.mul_valid.asBool,s_wait,s_idle),
        s_wait -> Mux((io.flush|io.out_valid).asBool,s_idle,s_wait)
    ))

    
    val a = RegInit(0.U(129.W))
    val b = RegInit(0.U(129.W))
    val result = RegInit(0.U(130.W))
    val cnt = RegInit(0.U(68.W))
    val mulbits = Wire(UInt((6.W)))
    val mulBits = RegInit(0.U(6.W))
    mulbits := Mux(io.mulw.asBool, 31.U,63.U)
    mulBits := Mux(state === s_idle && io.mul_valid.asBool, mulbits, mulBits)

    a := Mux(state === s_idle && io.mul_valid.asBool,
         Mux(io.mul_signed(1),Cat(io.multiplicand(mulbits),io.multiplicand),Cat(0.U,io.multiplicand)),
         a<<1.U)

    b := Mux(state === s_idle && io.mul_valid.asBool,
         Mux(io.mul_signed(0),Cat(io.multiplicand(mulbits),io.multiplicand),Cat(0.U,io.multiplicand)),
         b>>1.U)

    cnt:= Mux(state === s_wait,cnt+1.U,0.U);

    val s=Wire(UInt(130.W))
    s:=Mux(b(cnt),result+a,result)
    result:=Mux(state === s_wait,s,0.U)

    io.out_valid:= (cnt===mulBits)
    io.mul_ready:= state === s_idle
    io.result_lo:= result(63,0)
    io.result_hi:= result(127,64)

    when(io.out_valid.asBool){
        chisel3.assert(result(127,0) === a*b)
    }
}



//object Mul extends TestSuite {
//  val tests: Tests = Tests {
//    test("mytest") {
//      new Formal with HasTestName {
//        def getTestName: String = s"mul"
//      }.verify(new Mul, Seq(BoundedCheck(1)))
//    }
//  }
//}
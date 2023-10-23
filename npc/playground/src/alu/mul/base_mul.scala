import chisel3._
import chisel3.util._
import chisel3.stage._


class base_mul extends Module{
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

    val s=Wire(UInt(130.W))
    val last = Wire(Bool())

    state := MuxLookup(state, s_idle ,List(
        s_idle -> Mux(io.flush.asBool,s_idle,Mux(io.mul_valid.asBool,s_wait,s_idle)),
        s_wait -> Mux(io.flush.asBool,s_idle,Mux(last.asBool,s_idle,s_wait))
    ))
    val mulbits = Wire(UInt((6.W)))
    val mulBits = RegInit(0.U(6.W))

    val next_valid = Wire(Bool())
    next_valid:= io.mul_valid.asBool & (state === s_idle)
    val running = Wire(Bool())
    running:= (state === s_wait) 

    mulbits := Mux(io.mulw.asBool, 31.U,63.U)
    mulBits := Mux(state === s_idle && io.mul_valid.asBool, mulbits, mulBits)

    val a = RegInit(0.U(129.W))
    val b = RegInit(0.U(129.W))
    val result = RegInit(0.U(130.W))
    val cnt = RegInit(0.U(8.W))

    a :=Mux(running, a << 1.U,
        Mux(!next_valid, a,
        Mux(io.mul_signed(1),Cat(io.multiplicand(mulbits),io.multiplicand),
        Cat(0.U,io.multiplicand))))

    b :=Mux(running, b >> 1.U,
        Mux(!next_valid, b,
        Mux(io.mul_signed(0),Cat(io.multiplicand(mulbits),io.multiplier),
        Cat(0.U,io.multiplier))))
    
    cnt:=   Mux(state =/= s_wait,0.U,
            Mux((b === 0.U) &&(cnt =/= mulBits),mulBits,
            cnt + 1.U))

    last := (cnt === mulBits)
    s:=Mux(last && b(0),result - a,
        Mux(b(0),result+a,result))

    result:=Mux(state === s_wait,s,0.U)

    io.out_valid:= (cnt ===mulBits +& 1.U) 
    io.mul_ready:= (state === s_idle)
    io.result_lo:= result(63,0)
    io.result_hi:= result(127,64)

}

import chisel3._
import chisel3.util._
import chisel3.stage._


class mul_cell extends Module{
  val io=dontTouch(IO(new Bundle{
    val flush   = Input(UInt(1.W))
    val valid   = Input(UInt(1.W))
    val a_in    = Input(UInt(129.W))
    val b_in    = Input(UInt(129.W))
    val sum_in  = Input(UInt(129.W))
    val last    = Input(UInt(1.W))    //为高表示是最后一步，需要变成减法
    val a_out   = Output(UInt(129.W))
    val b_out   = Output(UInt(129.W))
    val sum_out = Output(UInt(129.W))
    val ready   = Output(UInt(1.W))
    //test
    val a       = Input(UInt(64.W))
    val b       = Input(UInt(64.W))
    val A       = Output(UInt(64.W))
    val B       = Output(UInt(64.W))
  }))
  //test
  val reg_a = RegInit(0.U(64.W))
  val reg_b = RegInit(0.U(64.W))
  reg_a  := Mux(io.flush.asBool,0.U,
           Mux(io.valid.asBool,io.a,
           reg_a))
  reg_b  := Mux(io.flush.asBool,0.U,
           Mux(io.valid.asBool,io.b,
           reg_b))
  io.A :=reg_a
  io.B :=reg_b
  //
  val a_in  = RegInit(0.U(129.W)) 
  val b_in  = RegInit(0.U(129.W)) 
  val sum_in  = RegInit(0.U(129.W)) 
  val valid = RegInit(0.U(1.W))
  val last = RegInit(0.U(1.W))

  a_in    := Mux(io.flush.asBool,0.U,
            Mux(io.valid.asBool,io.a_in,
            a_in))

  b_in    := Mux(io.flush.asBool,0.U,
            Mux(io.valid.asBool,io.b_in,
            b_in))

  sum_in  := Mux(io.flush.asBool,0.U,
            Mux(io.valid.asBool,io.sum_in,
            sum_in))

  valid   := Mux(io.flush.asBool,0.U,io.valid)

  io.a_out := a_in << 1.U 
  io.b_out := b_in >> 1.U
  io.sum_out := Mux(~b_in(0),sum_in,
                Mux(io.last.asBool,sum_in - a_in,
                sum_in + a_in))
  io.ready := valid 
}

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
    val a = RegInit(0.U(129.W))
    val b = RegInit(0.U(129.W))
    val valid = RegInit(0.U(1.W))

    a :=Mux(io.flush.asBool,0.U,
        Mux((io.mul_valid&io.mul_signed(1)&io.mulw).asBool,Cat(Fill(97,io.multiplicand(31)),io.multiplicand),
        Mux((io.mul_valid&io.mul_signed(1)&(~io.mulw)).asBool,Cat(Fill(65,io.multiplicand(63)),io.multiplicand),
        Mux(io.mul_valid.asBool,io.multiplicand
        ,a))))
    
    b :=Mux(io.flush.asBool,0.U,
        Mux((io.mul_valid&io.mul_signed(1)&io.mulw).asBool,Cat(Fill(97,io.multiplier(31)),io.multiplier),
        Mux((io.mul_valid&io.mul_signed(1)&(~io.mulw)).asBool,Cat(Fill(65,io.multiplier(63)),io.multiplier),
        Mux(io.mul_valid.asBool,io.multiplier
        ,b))))

    valid:=Mux(io.flush.asBool,0.U,io.mul_valid)

    val cell = Seq.fill(65)(Module(new mul_cell))

    cell(0).io.flush  := io.flush 
    cell(0).io.valid  := valid
    cell(0).io.a_in   := a
    cell(0).io.b_in   := b 
    cell(0).io.sum_in := 0.U
    cell(0).io.last   := 0.U
    cell(0).io.a      := io.multiplicand
    cell(0).io.b      := io.multiplier

    for(i <- 1 until 65){
      cell(i).io.flush  := io.flush 
      cell(i).io.valid  := cell(i-1).io.ready 
      cell(i).io.a_in   := cell(i-1).io.a_out
      cell(i).io.b_in   := cell(i-1).io.b_out
      cell(i).io.sum_in := cell(i-1).io.sum_out
      cell(i).io.last   := (i == 64).B.asUInt
      cell(i).io.a      := cell(i-1).io.A
      cell(i).io.b      := cell(i-1).io.B
    }

    io.mul_ready :=  1.U
    io.out_valid :=  cell(64).io.ready   
    io.result_hi :=  cell(64).io.sum_out(127,64)  
    io.result_lo :=  cell(64).io.sum_out(63,0)  
   
    //test
    when(io.out_valid.asBool){
        chisel3.assert( cell(64).io.sum_out === (cell(64).io.A * cell(64).io.B))
    }
    //
}
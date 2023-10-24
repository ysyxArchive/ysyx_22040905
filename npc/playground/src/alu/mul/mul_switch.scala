import chisel3._
import chisel3.util._
import chisel3.stage._


class mul extends Module{
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
      val sel = Input(UInt(1.W))               //0为移位乘法器，1为华莱士树乘法器
      val mul_num = Output(UInt(64.W))     
  })
  val base_mul = Module(new base_mul).io
  //val wallace_mul = Module(new Wallace).io

  base_mul.mul_valid:=io.mul_valid //& (~io.sel)
  base_mul.flush:=io.flush
  base_mul.mulw:=io.mulw
  base_mul.mul_signed:=io.mul_signed
  base_mul.multiplicand:=io.multiplicand
  base_mul.multiplier:=io.multiplier

  //wallace_mul.mul_valid:=io.mul_valid & io.sel
  //wallace_mul.flush:=io.flush
  //wallace_mul.mulw:=io.mulw
  //wallace_mul.mul_signed:=io.mul_signed
  //wallace_mul.multiplicand:=io.multiplicand
  //wallace_mul.multiplier:=io.multiplier

  io.mul_ready:=base_mul.mul_ready//Mux(io.sel.asBool,wallace_mul.mul_ready,base_mul.mul_ready)
  io.out_valid:=base_mul.out_valid//Mux(io.sel.asBool,wallace_mul.out_valid,base_mul.out_valid)
  io.result_hi:=base_mul.result_hi//Mux(io.sel.asBool,wallace_mul.result_hi,base_mul.result_hi)
  io.result_lo:=base_mul.result_lo//Mux(io.sel.asBool,wallace_mul.result_lo,base_mul.result_lo)

  val mul_num = RegInit(0.U(64.W))
  when(io.mul_valid===1.U){
    mul_num := mul_num + 1.U
  } 
  io.mul_num := mul_num
}
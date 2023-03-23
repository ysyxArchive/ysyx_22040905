import chisel3._
import chisel3.util._
import chisel3.stage._

class CacheRAM_Bundle extends Bundle{
  val valid=Output(UInt(1.W))
  val ready=Input(UInt(1.W))
  val bits=(new Bundle{
  val Q=Output(UInt(128.W))  // 读数据
  val CEN=Input(UInt(1.W))   // 使能信号, 低电平有效
  val WEN=Input(UInt(1.W))   // 写使能信号, 低电平有效
  val BWEN=Input(UInt(128.W))// 写掩码信号, 掩码粒度为1bit, 低电平有效
  val A=Input(UInt(8.W))     // 读写地址
  val D=Input(UInt(128.W))   // 写数据
  })
}
class CacheRAM extends Module{
  val io = IO(new CacheRAM_Bundle)
  val ram0=Module(new S011HD1P_X32Y2D128_BW).io
  val ram1=Module(new S011HD1P_X32Y2D128_BW).io
  val ram2=Module(new S011HD1P_X32Y2D128_BW).io
  val ram3=Module(new S011HD1P_X32Y2D128_BW).io

  val enread = RegInit(0.U(1.W))
  enread:= io.bits.CEN===1.U && io.bits.WEN===0.U
  io.valid:= enread
  val choose = RegInit(0.U(2.W))
  choose := io.bits.A(7,6)

  val idx = RegInit(0.U(8.W))
  idx := io.bits.A
  //printf("Q:%x\n",io.bits.Q)
  //when(io.valid === 1.U) {printf("read :%x\tat:%x\n",io.bits.Q,idx) }
  //when(io.bits.CEN===1.U && io.bits.WEN===1.U) {printf("write:%x\tat:%x\n",io.bits.D,io.bits.A)}
  //printf("%x\n",io.bits.A(7,6) === 3.U)

  io.bits.Q:=Mux(choose === 0.U,ram0.Q,
             Mux(choose === 1.U,ram1.Q,
             Mux(choose === 2.U,ram2.Q,ram3.Q)))
  ram0.CLK:= clock
  ram0.CEN:= ~(io.bits.CEN & (io.bits.A(7,6) === 0.U))
  ram0.WEN:= ~io.bits.WEN
  ram0.BWEN:= ~io.bits.BWEN
  ram0.A:= io.bits.A(5,0)
  ram0.D:= io.bits.D

  ram1.CLK:= clock
  ram1.CEN:= ~(io.bits.CEN & (io.bits.A(7,6) === 1.U))
  ram1.WEN:= ~io.bits.WEN
  ram1.BWEN:= ~io.bits.BWEN
  ram1.A:= io.bits.A(5,0)
  ram1.D:= io.bits.D

  ram2.CLK:= clock
  ram2.CEN:= ~(io.bits.CEN & (io.bits.A(7,6) === 2.U))
  ram2.WEN:= ~io.bits.WEN
  ram2.BWEN:= ~io.bits.BWEN
  ram2.A:= io.bits.A(5,0)
  ram2.D:= io.bits.D

  ram3.CLK:= clock
  ram3.CEN:= ~(io.bits.CEN & (io.bits.A(7,6) === 3.U))
  ram3.WEN:= ~io.bits.WEN
  ram3.BWEN:= ~io.bits.BWEN
  ram3.A:= io.bits.A(5,0)
  ram3.D:= io.bits.D


} 
import chisel3._
import chisel3.util._
import chisel3.stage._

class div extends Module{
    val io=IO(new Bundle{
        val dividend = Input(UInt(64.W))         //被除数
        val divisor = Input(UInt(64.W))          //除数
        val div_valid = Input(UInt(1.W))         //为高表示输入的数据有效，如果没有新的除法输入，在除法被接受的下一个周期要置低
        val divw = Input(UInt(1.W))              //为高表示输入的是 32 位除法
        val div_signed = Input(UInt(1.W))        //表示是不是有符号除法，为高表示是有符号除法
        val flush = Input(UInt(1.W))             //为高表示要取消除法（修改一下除法器状态就行）
        val div_ready = Output(UInt(1.W))        //为高表示除法器空闲，可以输入数据
        val out_valid = Output(UInt(1.W))        //为高表示除法器输出了有效结果
        val quotient = Output(UInt(64.W))        //商
        val remainder = Output(UInt(64.W))       //余数
    })
}
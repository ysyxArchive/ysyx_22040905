import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class IDU extends Module{
    val io=IO(new Bundle{
        val inst=Input(UInt(32.W))
        val src1=Output(UInt(5.W))
        val dest=Output(UInt(5.W))
        val imm=Output(UInt(64.W))
        val op=Output(UInt(7.W))
        val funct=Output(UInt(3.W))
    })
    io.op:=io.inst(6,0)
    io.funct:=io.inst(14,12)
    io.imm:=Cat(Fill(52,io.inst(31)),io.inst(31,20))
    io.dest:=io.inst(11,7)
    io.src1:=io.inst(19,15)
}
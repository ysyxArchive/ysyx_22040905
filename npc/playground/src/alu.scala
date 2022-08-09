import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class alu extends Module{
    val io=IO(new Bundle{
        val a=Input(UInt(64.W))
        val b=Input(UInt(64.W))
        val op=Input(UInt(7.W))
        val y=Input(UInt(64.W))
    })
    io.y:=0.U
}

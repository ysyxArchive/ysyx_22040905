import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class top extends Module{
    val io=IO(new Bundle{
        val inst=Input(UInt(32.W))
        val pc=Output(UInt(64.W))
        val result=Output(UInt(64.W))
    })
    val pc=RegInit("x80000000".U(64.W))
    val idu=Module(new IDU)
    val exu=Module(new EXU)
    idu.io.inst:=io.inst
    exu.io.src1:=idu.io.src1
    exu.io.dest:=idu.io.dest
    exu.io.imm:=idu.io.imm
    exu.io.op:=idu.io.op
    exu.io.funct:=idu.io.funct
    exu.io.pc:=pc
    pc:=exu.io.pc_dnpc
    io.result:=exu.io.result
    io.pc:=pc
}
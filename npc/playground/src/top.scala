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
    val it=Module(new itrace)
    it.io.pc:=io.pc
    it.io.inst:=io.inst
    idu.io.inst:=io.inst
    exu.io.rs1:=idu.io.rs1
    exu.io.rs2:=idu.io.rs2
    exu.io.rd:=idu.io.rd
    exu.io.imm:=idu.io.imm
    exu.io.op:=idu.io.op
    exu.io.typ:=idu.io.typ
    exu.io.pc:=pc
    pc:=exu.io.pc_dnpc
    io.result:=exu.io.result
    io.pc:=pc
}
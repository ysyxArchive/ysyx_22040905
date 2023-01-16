import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class top extends Module{
    val io=IO(new Bundle{
        val pc=Output(UInt(64.W))
    })
    val pc=RegInit("x80000000".U(64.W))
    val sram=Module(new AXILiteSRAM)
    val sram2=Module(new AXILiteSRAM)
    //val arbiter=Module(new Arbiter)
    val ifu=Module(new IFU)
    val idu=Module(new IDU)
    val exu=Module(new EXU)
    val lsu=Module(new LSU)
    val it=Module(new itrace)
    val gpr=Module(new GPR)
    val csr=Module(new CSR)

    ifu.io.pc:=pc
    it.io.pc:=pc
    ifu.io.lm<>sram.io//arbiter.io.ifu
    it.io.in<>ifu.io.out
    idu.io.in<>ifu.io.out
    exu.io.in<>idu.io.out
    exu.io.gpr<>gpr.io.r
    exu.io.csr<>csr.io
    lsu.io.in<>exu.io.out
    lsu.io.lm<>sram2.io//arbiter.io.lsu
    lsu.io.gpr<>gpr.io.w
    //sram.io<>arbiter.io.out
    exu.io.pc:=pc
    lsu.io.out.ready:=1.U
    pc:=Mux(reset.asBool,"x80000000".U,exu.io.pc_dnpc,
        )
    io.pc:=pc
}
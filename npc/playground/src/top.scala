import chisel3._
import chisel3.util._
import chisel3.stage._

class top extends Module{
    val io=IO(new Bundle{
        val pc=Output(UInt(64.W))
        val valid=Output(UInt(1.W))
    })
    val pc=RegInit("x80000000".U(64.W))
    val sram=Module(new AXI4SRAM)
    val arbiter=Module(new AXI4Arbiter)
    val ifu=Module(new IFU)
    val idu=Module(new IDU)
    val exu=Module(new EXU)
    val lsu=Module(new LSU)
    val gpr=Module(new GPR)
    val csr=Module(new CSR)
    val icache=Module(new Cache)
    val dcache=Module(new AXILite2AXI4)
    val next=Wire(UInt(1.W))
    val icacheram=Module(new CacheRAM)

    ifu.io.next:=next
    next:=lsu.io.out.valid

    ifu.io.pc:=pc
    idu.io.in<>ifu.io.out
    exu.io.in<>idu.io.out
    exu.io.gpr<>gpr.io.r
    exu.io.csr<>csr.io.r
    lsu.io.in<>exu.io.out
    lsu.io.gpr<>gpr.io.w
    lsu.io.csr<>csr.io.w
    exu.io.pc:=pc
    lsu.io.out.ready:=1.U
    io.valid:=lsu.io.out.valid;
    pc:=Mux(reset.asBool,"x80000000".U,
        Mux(lsu.io.out.valid,lsu.io.out.bits.pc_dnpc,
        pc))
    io.pc:=Mux(reset.asBool,"x80000000".U,
        Mux(lsu.io.out.valid,lsu.io.out.bits.pc_dnpc,
        pc))
    ifu.io.lm<>icache.io.in
    lsu.io.lm<>dcache.io.in
    icache.io.mem<>arbiter.io.ifu
    icache.io.ram<>icacheram.io
    dcache.io.mem<>arbiter.io.lsu
    sram.io<>arbiter.io.out
}

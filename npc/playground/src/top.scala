import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class top extends Module{
    val io=IO(new Bundle{
        val pc=Output(UInt(64.W))
        val valid=Output(UInt(1.W))
        val test=Output(UInt(64.W))
    })
    val pc=RegInit("x80000000".U(64.W))
    val sram=Module(new AXILiteSRAM)
    //val sram2=Module(new AXILiteSRAM)
    val arbiter=Module(new Arbiter)
    val ifu=Module(new IFU)
    val idu=Module(new IDU)
    val exu=Module(new EXU)
    val lsu=Module(new LSU)
    val it=Module(new itrace)
    val gpr=Module(new GPR)
    val csr=Module(new CSR)

    ifu.io.pc:=pc
    it.io.pc:=pc
    ifu.io.lm<>arbiter.io.ifu//sram.io
    it.io.in<>ifu.io.it
    idu.io.in<>ifu.io.out
    exu.io.in<>idu.io.out
    exu.io.gpr<>gpr.io.r
    exu.io.csr<>csr.io.r
    lsu.io.in<>exu.io.out
    lsu.io.lm<>arbiter.io.lsu//sram2.io
    lsu.io.gpr<>gpr.io.w
    lsu.io.csr<>csr.io.w
    sram.io<>arbiter.io.out
    exu.io.pc:=pc
    lsu.io.out.ready:=1.U
    io.valid:=lsu.io.out.valid;
    pc:=Mux(reset.asBool,"x80000000".U,
        Mux(lsu.io.out.valid,lsu.io.out.bits.pc_dnpc,
        pc))
    io.pc:=Mux(reset.asBool,"x80000000".U,
        Mux(lsu.io.out.valid,lsu.io.out.bits.pc_dnpc,
        pc))
    io.test:=arbiter.io.ifu.w.bits.strb//Cat(arbiter.io.test,sram.io.ar.valid,sram.io.ar.ready,sram.io.r.valid,sram.io.r.ready)//Cat(Cat(Cat(arbiter.io.out.ar.valid,Cat(arbiter.io.out.ar.ready,Cat(arbiter.io.out.r.valid,arbiter.io.out.r.ready))),Cat(arbiter.io.lsu.ar.valid,Cat(arbiter.io.lsu.ar.ready,Cat(arbiter.io.lsu.r.valid,arbiter.io.lsu.r.ready)))),Cat(arbiter.io.ifu.ar.valid,Cat(arbiter.io.ifu.ar.ready,Cat(arbiter.io.ifu.r.valid,arbiter.io.ifu.r.ready))))//arbiter.io.test//lsu.io.in.valid//lsu.io.out.bits.pc_dnpc//exu.io.in.bits.op(63,0)//io.in.bits.inst

}
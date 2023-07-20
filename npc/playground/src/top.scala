import chisel3._
import chisel3.util._
import chisel3.stage._

class top extends Module{
    val io=IO(new Bundle{
        val pc=Output(UInt(64.W))
        val valid=Output(UInt(1.W))
        val hitrate_i=Output(UInt(64.W))
        val hitrate_d=Output(UInt(64.W))
    })
    val sram=Module(new AXI4SRAM)
    val ifu=Module(new IFU)
    val idu=Module(new IDU)
    val exu=Module(new EXU)
    val wbu=Module(new WBU)
    val gpr=Module(new GPR)
    val csr=Module(new CSR)
    val scoreboard=Module(new ScoreBoard)

    scoreboard.io.ID<>idu.io.sb
    scoreboard.io.WB<>wbu.io.sb
    ifu.io.pc_dnpc:=wbu.io.pc_dnpc
    ifu.io.clearJump:=wbu.io.isJump
    idu.io.in<>ifu.io.out
    exu.io.in<>idu.io.out
    exu.io.gpr<>gpr.io.r
    exu.io.csr<>csr.io.r
    wbu.io.in<>exu.io.out
    wbu.io.gpr<>gpr.io.w
    wbu.io.csr<>csr.io.w

    io.valid:=wbu.io.valid
    io.pc:=wbu.io.pc_dnpc

    val crossbar=Module(new Crossbar)
    crossbar.io.in1<>ifu.io.lm
    crossbar.io.in2<>exu.io.lm
    crossbar.io.out<>sram.io


    io.hitrate_i:=crossbar.io.hitrate(127,64)
    io.hitrate_d:=crossbar.io.hitrate(63,0)

}

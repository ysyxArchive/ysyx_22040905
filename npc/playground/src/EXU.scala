import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class EXU extends Module{
    val io=IO(new Bundle{
        val src1=Input(UInt(5.W))
        val dest=Input(UInt(5.W))
        val imm=Input(UInt(64.W))
        val op=Input(UInt(7.W))
        val funct=Input(UInt(3.W))
        val pc=Input(UInt(64.W))
        val pc_dnpc=Output(UInt(64.W))
        val result=Output(UInt(64.W))
    })
    val inst_is_addi=Wire(Bool())
    val inst_is_ebreak=Wire(Bool())

    inst_is_addi:=(io.op==="b0010011".U&&io.funct==="b000".U)
    inst_is_ebreak:=(io.imm(11,0)==="b000000000001".U&&io.src1==="b00000".U&&io.funct==="b000".U&&io.dest==="b00000".U&&io.op==="b1110011".U)

    val ebreak1=Module(new ebreak)
    ebreak1.io.en_break:=inst_is_ebreak
    ebreak1.io.clk:= clock

    val gpr=Module(new GPR)
    gpr.io.idx_r1:=Mux(inst_is_addi,io.src1,0.U)
    gpr.io.idx_r2:=0.U
    gpr.io.idx_w:=Mux(inst_is_addi,io.dest,0.U)
    gpr.io.en_w:=Mux(inst_is_addi,1.U,0.U)
    gpr.io.en_r1:=Mux(inst_is_addi,1.U,0.U)
    gpr.io.en_r2:=0.U
    gpr.io.val_w:=Mux(inst_is_addi,gpr.io.val_r1+io.imm,0.U)

    io.result:=Mux(inst_is_addi,gpr.io.val_r1+io.imm,
               Mux(inst_is_ebreak,"b111111111111".U,"b11111".U))
    
    io.pc_dnpc:=io.pc+4.U
}
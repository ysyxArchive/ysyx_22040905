import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class EXU extends Module{
    val io=IO(new Bundle{
        val rs1=Input(UInt(5.W))
        val rs2=Input(UInt(5.W))
        val rd=Input(UInt(5.W))
        val imm=Input(UInt(64.W))
        val op=Input(UInt(64.W))
        val typ=Input(UInt(6.W))
        val pc=Input(UInt(64.W))
        val pc_dnpc=Output(UInt(64.W))
        val result=Output(UInt(64.W))
    })

    val ebreak1=Module(new ebreak)
    ebreak1.io.en_break:=io.op(63)
    ebreak1.io.clk:= clock

    val src1=Wire(UInt(64.W))
    val src2=Wire(UInt(64.W))
    val dest=Wire(UInt(64.W))

    val gpr=Module(new GPR)
    val alu_dest=Module(new ALU)
    val alu_pc=Module(new ALU)
    gpr.io.en_r1:=Mux((io.typ(0)|io.typ(2)|io.typ(4)|io.typ(5)),1.U,0.U)
    gpr.io.en_r2:=Mux((io.typ(2)|io.typ(4)|io.typ(5)),1.U,0.U)
    gpr.io.en_w:=Mux((io.typ(0)|io.typ(1)|io.typ(3)|io.typ(5)),1.U,0.U)
    gpr.io.idx_r1:=io.rs1
    gpr.io.idx_r2:=io.rs2
    gpr.io.idx_w:=dest

    src1:=Mux((io.typ(0)|io.typ(2)|io.typ(4)|io.typ(5)),gpr.io.val_r1,
          Mux((io.typ(1)|io.typ(3)),io.imm,
          0.U))
    
    src2:=Mux((io.typ(2)|io.typ(4)|io.typ(5)),gpr.io.val_r2,
          Mux(io.typ(0),io.imm,
          0.U))

    dest:=Mux((io.typ(2)|io.typ(4)),io.imm,
          io.rd)
    

    alu_dest.io.src1:=Mux((io.op(0)|io.op(3)|io.op(4)),io.pc,
                      Mux(io.op(1)|io.op(5),src1, 
                      0.U))
    alu_dest.io.src2:=Mux(io.op(0),src1,
                      Mux((io.op(3)|io.op(4)),4.U,
                      Mux(io.op(5),src2,
                      0.U)))
    alu_dest.io.op  :=1.U

    gpr.io.val_w:=alu_dest.io.result
    io.result:=io.op;
    
    alu_pc.io.src1:=Mux(io.op(4),src1,io.pc)
    alu_pc.io.src2:=Mux(io.op(3),src1,
                    Mux(io.op(4),src2,
                    4.U))
    alu_pc.io.op:=  Mux(io.op(4),"x400".U,1.U(64.W))

    io.pc_dnpc:=  alu_pc.io.result
}
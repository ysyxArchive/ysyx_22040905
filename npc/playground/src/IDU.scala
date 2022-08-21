import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class IDU extends Module{
    val io=IO(new Bundle{
        val inst=Input(UInt(32.W))
        val rs1=Output(UInt(5.W))
        val rs2=Output(UInt(5.W))
        val rd=Output(UInt(5.W))
        val imm=Output(UInt(64.W))
        val op=Output(UInt(64.W))
        val typ=Output(UInt(6.W))
    })
    val op=Wire(UInt(64.W))
    op:=   Mux( io.inst(6,0)==="b0010111".U,                              Cat(Fill(63,0.U),1.U),                           //auipc,U
           Mux( io.inst(6,0)==="b0110111".U,                              Cat(Fill(62,0.U),Cat(1.U,Fill(1,0.U))),          //lui,U
           Mux((io.inst(6,0)==="b0100011".U)&(io.inst(14,12)==="b011".U), Cat(Fill(61,0.U),Cat(1.U,Fill(2,0.U))),          //sd,S
           Mux((io.inst(6,0)==="b1101111".U),                             Cat(Fill(60,0.U),Cat(1.U,Fill(3,0.U))),          //jal,J
           Mux((io.inst(6,0)==="b1100111".U)&(io.inst(14,12)==="b000".U), Cat(Fill(59,0.U),Cat(1.U,Fill(4,0.U))),          //jalr,I
           Mux((io.inst(6,0)==="b0010011".U)&(io.inst(14,12)==="b000".U), Cat(Fill(58,0.U),Cat(1.U,Fill(5,0.U))),          //addi,I
           Mux((io.inst==="b00000000000100000000000001110011".U),         Cat(1.U,Fill(63,0.U)),                           //ebreak,N
           0.U))))))) 
    io.op:=op
    io.rd:=io.inst(11,7) 
    io.rs1:=io.inst(19,15) 
    io.rs2:=io.inst(24,20)

    val typ=Wire(UInt(6.W))
    typ:=Mux((op(4)|op(5)),"b000001".U,    //I
          Mux((op(0)|op(1)),"b000010".U,    //U
          Mux((op(14)),             "b000100".U,   //S
          Mux((op(3)),             "b001000".U,    //J
          Mux((op(12)),            "b010000".U,    //B
          Mux((op(13)),            "b100000".U,    //R
          0.U))))))                                 //N
    io.typ:=typ
    io.imm:=Mux(typ(0),Cat(Fill(52,io.inst(31)),io.inst(31,20)),                                                                       //I
            Mux(typ(1),Cat(Fill(32,io.inst(31)),Cat(io.inst(31,12),Fill(12,0.U))),                                                       //U
            Mux(typ(2),Cat(Fill(52,io.inst(31)),Cat(io.inst(31,25),io.inst(11,7))),                                                    //S
            Mux(typ(3),Cat(Fill(43,io.inst(31)),Cat(io.inst(31),Cat(io.inst(19,12),Cat(io.inst(20),Cat(io.inst(30,21),0.U))))),        //J
            Mux(typ(4),Cat(Fill(51,io.inst(31)),Cat(io.inst(31),Cat(io.inst(7),Cat(io.inst(30,25),Cat(io.inst(11,8),0.U))))),          //B
            0.U)))))
    
}
import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class Dec extends Bundle{
  val rs1=Output(UInt(5.W))
  val rs2=Output(UInt(5.W))
  val rd=Output(UInt(5.W))
  val imm=Output(UInt(64.W))
  val op=Output(UInt(80.W))
  val typ=Output(UInt(6.W)) 
}
class IDU extends Module{
    val io=IO(new Bundle{
        val in=Flipped(Decoupled(new Inst))
        val out=Decoupled(new Dec)
   })
   
/* val s_idle :: s_wait_ready :: Nil = Enum(2)
   val state = RegInit(s_idle)
   state := MuxLookup(state, s_idle, List(
     s_idle       -> Mux(io.out.valid, s_wait_ready, s_idle),
     s_wait_ready -> Mux(io.out.fire, s_idle, s_wait_ready)
   ))*/
   io.out.valid:=io.in.valid
   io.in.ready:=io.out.ready

    val op=Wire(UInt(80.W))
    //RV64I
    op:=   Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b000".U)&(io.in.bits.inst(31,25)==="b0000000".U), Cat(Fill(63,0.U),1.U),                           //add,R
           Mux((io.in.bits.inst(6,0)==="b0111011".U)&(io.in.bits.inst(14,12)==="b000".U)&(io.in.bits.inst(31,25)==="b0000000".U), Cat(Fill(62,0.U),Cat(1.U,Fill(1,0.U))),          //addw,R
           Mux((io.in.bits.inst(6,0)==="b0010011".U)&(io.in.bits.inst(14,12)==="b000".U)                                , Cat(Fill(61,0.U),Cat(1.U,Fill(2,0.U))),          //addi,I
           Mux((io.in.bits.inst(6,0)==="b0011011".U)&(io.in.bits.inst(14,12)==="b000".U)                                , Cat(Fill(60,0.U),Cat(1.U,Fill(3,0.U))),          //addiw,I
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b000".U)&(io.in.bits.inst(31,25)==="b0100000".U), Cat(Fill(59,0.U),Cat(1.U,Fill(4,0.U))),          //sub,R
           Mux((io.in.bits.inst(6,0)==="b0111011".U)&(io.in.bits.inst(14,12)==="b000".U)&(io.in.bits.inst(31,25)==="b0100000".U), Cat(Fill(58,0.U),Cat(1.U,Fill(5,0.U))),          //subw,R
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b111".U)&(io.in.bits.inst(31,25)==="b0000000".U), Cat(Fill(57,0.U),Cat(1.U,Fill(6,0.U))),          //and,R
           Mux((io.in.bits.inst(6,0)==="b0010011".U)&(io.in.bits.inst(14,12)==="b111".U)                                , Cat(Fill(56,0.U),Cat(1.U,Fill(7,0.U))),          //andi,I
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b110".U)&(io.in.bits.inst(31,25)==="b0000000".U), Cat(Fill(55,0.U),Cat(1.U,Fill(8,0.U))),          //or,R
           Mux((io.in.bits.inst(6,0)==="b0010011".U)&(io.in.bits.inst(14,12)==="b110".U)                                , Cat(Fill(54,0.U),Cat(1.U,Fill(9,0.U))),          //ori,R

           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b100".U)&(io.in.bits.inst(31,25)==="b0000000".U), Cat(Fill(53,0.U),Cat(1.U,Fill(10,0.U))),          //xor,R
           Mux((io.in.bits.inst(6,0)==="b0010011".U)&(io.in.bits.inst(14,12)==="b100".U)                                , Cat(Fill(52,0.U),Cat(1.U,Fill(11,0.U))),          //xori,I
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b001".U)&(io.in.bits.inst(31,25)==="b0000000".U), Cat(Fill(51,0.U),Cat(1.U,Fill(12,0.U))),          //sll,R
           Mux((io.in.bits.inst(6,0)==="b0111011".U)&(io.in.bits.inst(14,12)==="b001".U)&(io.in.bits.inst(31,25)==="b0000000".U), Cat(Fill(50,0.U),Cat(1.U,Fill(13,0.U))),          //sllw,R
           Mux((io.in.bits.inst(6,0)==="b0010011".U)&(io.in.bits.inst(14,12)==="b001".U)&(io.in.bits.inst(31,26)==="b000000".U ), Cat(Fill(49,0.U),Cat(1.U,Fill(14,0.U))),          //slli,I
           Mux((io.in.bits.inst(6,0)==="b0011011".U)&(io.in.bits.inst(14,12)==="b001".U)&(io.in.bits.inst(31,26)==="b000000".U ), Cat(Fill(48,0.U),Cat(1.U,Fill(15,0.U))),          //slliw,I
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b101".U)&(io.in.bits.inst(31,25)==="b0100000".U), Cat(Fill(47,0.U),Cat(1.U,Fill(16,0.U))),          //sra,R
           Mux((io.in.bits.inst(6,0)==="b0111011".U)&(io.in.bits.inst(14,12)==="b101".U)&(io.in.bits.inst(31,25)==="b0100000".U), Cat(Fill(46,0.U),Cat(1.U,Fill(17,0.U))),          //sraw,R
           Mux((io.in.bits.inst(6,0)==="b0010011".U)&(io.in.bits.inst(14,12)==="b101".U)&(io.in.bits.inst(31,26)==="b010000".U ), Cat(Fill(45,0.U),Cat(1.U,Fill(18,0.U))),          //srai,I
           Mux((io.in.bits.inst(6,0)==="b0011011".U)&(io.in.bits.inst(14,12)==="b101".U)&(io.in.bits.inst(31,26)==="b010000".U ), Cat(Fill(44,0.U),Cat(1.U,Fill(19,0.U))),          //sraiw,I

           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b101".U)&(io.in.bits.inst(31,25)==="b0000000".U), Cat(Fill(43,0.U),Cat(1.U,Fill(20,0.U))),          //srl,R
           Mux((io.in.bits.inst(6,0)==="b0111011".U)&(io.in.bits.inst(14,12)==="b101".U)&(io.in.bits.inst(31,25)==="b0000000".U), Cat(Fill(42,0.U),Cat(1.U,Fill(21,0.U))),          //srlw,R
           Mux((io.in.bits.inst(6,0)==="b0010011".U)&(io.in.bits.inst(14,12)==="b101".U)&(io.in.bits.inst(31,26)==="b000000".U ), Cat(Fill(41,0.U),Cat(1.U,Fill(22,0.U))),          //srli,I
           Mux((io.in.bits.inst(6,0)==="b0011011".U)&(io.in.bits.inst(14,12)==="b101".U)&(io.in.bits.inst(31,26)==="b000000".U ), Cat(Fill(40,0.U),Cat(1.U,Fill(23,0.U))),          //srliw,I
           Mux((io.in.bits.inst(6,0)==="b0110111".U)                                                            , Cat(Fill(39,0.U),Cat(1.U,Fill(24,0.U))),          //lui,U
           Mux((io.in.bits.inst(6,0)==="b0010111".U)                                                            , Cat(Fill(38,0.U),Cat(1.U,Fill(25,0.U))),          //auipc,U
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b010".U)&(io.in.bits.inst(31,25)==="b0000000".U), Cat(Fill(37,0.U),Cat(1.U,Fill(26,0.U))),          //slt,R
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b011".U)&(io.in.bits.inst(31,25)==="b0000000".U), Cat(Fill(36,0.U),Cat(1.U,Fill(27,0.U))),          //sltu,R
           Mux((io.in.bits.inst(6,0)==="b0010011".U)&(io.in.bits.inst(14,12)==="b010".U)                                , Cat(Fill(35,0.U),Cat(1.U,Fill(28,0.U))),          //slti,I
           Mux((io.in.bits.inst(6,0)==="b0010011".U)&(io.in.bits.inst(14,12)==="b011".U)                                , Cat(Fill(34,0.U),Cat(1.U,Fill(29,0.U))),          //sltiu,I

           Mux((io.in.bits.inst(6,0)==="b1100011".U)&(io.in.bits.inst(14,12)==="b000".U), Cat(Fill(33,0.U),Cat(1.U,Fill(30,0.U))),          //beq,B
           Mux((io.in.bits.inst(6,0)==="b1100011".U)&(io.in.bits.inst(14,12)==="b001".U), Cat(Fill(32,0.U),Cat(1.U,Fill(31,0.U))),          //bne,B
           Mux((io.in.bits.inst(6,0)==="b1100011".U)&(io.in.bits.inst(14,12)==="b101".U), Cat(Fill(31,0.U),Cat(1.U,Fill(32,0.U))),          //bge,B
           Mux((io.in.bits.inst(6,0)==="b1100011".U)&(io.in.bits.inst(14,12)==="b111".U), Cat(Fill(30,0.U),Cat(1.U,Fill(33,0.U))),          //bgeu,B
           Mux((io.in.bits.inst(6,0)==="b1100011".U)&(io.in.bits.inst(14,12)==="b100".U), Cat(Fill(29,0.U),Cat(1.U,Fill(34,0.U))),          //blt,B
           Mux((io.in.bits.inst(6,0)==="b1100011".U)&(io.in.bits.inst(14,12)==="b110".U), Cat(Fill(28,0.U),Cat(1.U,Fill(35,0.U))),          //bltu,B
           Mux((io.in.bits.inst(6,0)==="b1101111".U)                            , Cat(Fill(27,0.U),Cat(1.U,Fill(36,0.U))),          //jal,J
           Mux((io.in.bits.inst(6,0)==="b1100111".U)&(io.in.bits.inst(14,12)==="b000".U), Cat(Fill(26,0.U),Cat(1.U,Fill(37,0.U))),          //jalr,I
           Mux((io.in.bits.inst(6,0)==="b0000011".U)&(io.in.bits.inst(14,12)==="b000".U), Cat(Fill(25,0.U),Cat(1.U,Fill(38,0.U))),          //lb,I
           Mux((io.in.bits.inst(6,0)==="b0000011".U)&(io.in.bits.inst(14,12)==="b001".U), Cat(Fill(24,0.U),Cat(1.U,Fill(39,0.U))),          //lh,I

           Mux((io.in.bits.inst(6,0)==="b0000011".U)&(io.in.bits.inst(14,12)==="b010".U), Cat(Fill(23,0.U),Cat(1.U,Fill(40,0.U))),          //lw,I
           Mux((io.in.bits.inst(6,0)==="b0000011".U)&(io.in.bits.inst(14,12)==="b011".U), Cat(Fill(22,0.U),Cat(1.U,Fill(41,0.U))),          //ld,I
           Mux((io.in.bits.inst(6,0)==="b0100011".U)&(io.in.bits.inst(14,12)==="b000".U), Cat(Fill(21,0.U),Cat(1.U,Fill(42,0.U))),          //sb,S
           Mux((io.in.bits.inst(6,0)==="b0100011".U)&(io.in.bits.inst(14,12)==="b001".U), Cat(Fill(20,0.U),Cat(1.U,Fill(43,0.U))),          //sh,S
           Mux((io.in.bits.inst(6,0)==="b0100011".U)&(io.in.bits.inst(14,12)==="b010".U), Cat(Fill(19,0.U),Cat(1.U,Fill(44,0.U))),          //sw,S
           Mux((io.in.bits.inst(6,0)==="b0100011".U)&(io.in.bits.inst(14,12)==="b011".U), Cat(Fill(18,0.U),Cat(1.U,Fill(45,0.U))),          //sd,S
           Mux((io.in.bits.inst(6,0)==="b0000011".U)&(io.in.bits.inst(14,12)==="b100".U), Cat(Fill(17,0.U),Cat(1.U,Fill(46,0.U))),          //lbu,I
           Mux((io.in.bits.inst(6,0)==="b0000011".U)&(io.in.bits.inst(14,12)==="b101".U), Cat(Fill(16,0.U),Cat(1.U,Fill(47,0.U))),          //lhu,I
           Mux((io.in.bits.inst(6,0)==="b0000011".U)&(io.in.bits.inst(14,12)==="b110".U), Cat(Fill(15,0.U),Cat(1.U,Fill(48,0.U))),          //lwu,I
           Mux((io.in.bits.inst==="b00000000000100000000000001110011".U),         Cat(Fill(14,0.U),Cat(1.U,Fill(49,0.U))),          //ebreak,N
           
        //RV64M
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b000".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(50,0.U))),          //mul,R
           Mux((io.in.bits.inst(6,0)==="b0111011".U)&(io.in.bits.inst(14,12)==="b000".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(51,0.U))),          //mulw,R
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b001".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(52,0.U))),          //mulh,R
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b011".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(53,0.U))),          //mulhu,R
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b010".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(54,0.U))),          //mulhsu,R
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b100".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(55,0.U))),          //div,R
           Mux((io.in.bits.inst(6,0)==="b0111011".U)&(io.in.bits.inst(14,12)==="b100".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(56,0.U))),          //divw,R
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b101".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(57,0.U))),          //divu,R
           Mux((io.in.bits.inst(6,0)==="b0111011".U)&(io.in.bits.inst(14,12)==="b101".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(58,0.U))),          //divuw,R
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b110".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(59,0.U))),          //rem,R
           Mux((io.in.bits.inst(6,0)==="b0111011".U)&(io.in.bits.inst(14,12)==="b110".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(60,0.U))),          //remw,R
           Mux((io.in.bits.inst(6,0)==="b0110011".U)&(io.in.bits.inst(14,12)==="b111".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(61,0.U))),          //remu,R
           Mux((io.in.bits.inst(6,0)==="b0111011".U)&(io.in.bits.inst(14,12)==="b111".U)&(io.in.bits.inst(31,25)==="b0000001".U), Cat(Fill(15,0.U),Cat(1.U,Fill(62,0.U))),          //remuw,R
           
        //CSR
           Mux((io.in.bits.inst(6,0)==="b1110011".U)&(io.in.bits.inst(14,12)==="b001".U)                                 ,Cat(Fill(15,0.U),Cat(1.U,Fill(63,0.U))),          //csrrw,I
           Mux((io.in.bits.inst(6,0)==="b1110011".U)&(io.in.bits.inst(14,12)==="b010".U)                                 ,Cat(Fill(15,0.U),Cat(1.U,Fill(64,0.U))),          //csrrs,I
           Mux((io.in.bits.inst==="b00000000000000000000000001110011".U)                                         ,Cat(Fill(15,0.U),Cat(1.U,Fill(65,0.U))),          //ecall,N
           Mux((io.in.bits.inst==="b00110000001000000000000001110011".U)                                         ,Cat(Fill(15,0.U),Cat(1.U,Fill(66,0.U))),          //mret,N
           0.U)))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))))                                                                           //inv,N  
    io.out.bits.op:=op
    io.out.bits.rd:=io.in.bits.inst(11,7) 
    io.out.bits.rs1:=io.in.bits.inst(19,15) 
    io.out.bits.rs2:=io.in.bits.inst(24,20)

    val typ=Wire(UInt(6.W))
    typ:= Mux((op(2)|op(3)|op(7)|op(9)|op(11)|op(14)|op(15)|op(18)|op(19)|op(22)|op(23)|op(28)|op(29)|op(37)|op(38)|op(39)|op(40)|op(41)|op(46)|op(47)|op(48)|op(63)|op(64)),                                             "b000001".U,    //I
          Mux((op(24)|op(25)),                                                                                                                                                                                            "b000010".U,    //U
          Mux((op(42)|op(43)|op(44)|op(45)),                                                                                                                                                                              "b000100".U,    //S
          Mux((op(36)),                                                                                                                                                                                                   "b001000".U,    //J
          Mux((op(30)|op(31)|op(32)|op(33)|op(34)|op(35)),                                                                                                                                                                "b010000".U,    //B
          Mux((op(0)|op(1)|op(4)|op(5)|op(6)|op(8)|op(10)|op(12)|op(13)|op(16)|op(17)|op(20)|op(21)|op(26)|op(27)|op(50)|op(51)|op(52)|op(53)|op(54)|op(55)|op(56)|op(57)|op(58)|op(59)|op(60)|op(61)|op(62)),            "b100000".U,    //R
          0.U))))))                                                                                                                                                                                                                       //N 
    io.out.bits.typ:=typ
    io.out.bits.imm:=Mux(typ(0),Cat(Fill(52,io.in.bits.inst(31)),io.in.bits.inst(31,20)),                                                                       //I
            Mux(typ(1),Cat(Fill(32,io.in.bits.inst(31)),Cat(io.in.bits.inst(31,12),Fill(12,0.U))),                                                     //U
            Mux(typ(2),Cat(Fill(52,io.in.bits.inst(31)),Cat(io.in.bits.inst(31,25),io.in.bits.inst(11,7))),                                                    //S
            Mux(typ(3),Cat(Fill(43,io.in.bits.inst(31)),Cat(io.in.bits.inst(31),Cat(io.in.bits.inst(19,12),Cat(io.in.bits.inst(20),Cat(io.in.bits.inst(30,21),0.U))))),        //J
            Mux(typ(4),Cat(Fill(51,io.in.bits.inst(31)),Cat(io.in.bits.inst(31),Cat(io.in.bits.inst(7),Cat(io.in.bits.inst(30,25),Cat(io.in.bits.inst(11,8),0.U))))),          //B
            0.U)))))
    
}
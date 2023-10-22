import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class EXE extends Bundle{
   val pc=Output(UInt(32.W))
   val inst=Output(UInt(32.W))
   val rs1=Output(UInt(5.W))
   val rs2=Output(UInt(5.W))
   val rd=Output(UInt(5.W))
   val imm=Output(UInt(64.W))
   val op=Output(UInt(80.W))
   val typ=Output(UInt(6.W)) 
   val isJump=Output(UInt(1.W))
   val clearidx=Output(UInt(5.W))
}
class IDU extends Module{
   val io=IO(new Bundle{
      val in=Flipped(Decoupled(new ID))
      val out=Decoupled(new EXE)
      val sb=Flipped((new SB_ID)) 
      val flush=Input(UInt(1.W))
   })
   val ID_reg_inst=RegEnable(io.in.bits.inst,0.U,io.in.fire)
   val ID_reg_pc=RegEnable(io.in.bits.pc,0.U,io.in.fire)
   val ID_reg_valid=RegEnable(1.U,1.U,true.B)
   val ID_reg_isJump=RegEnable(io.in.bits.isJump,0.U,io.in.fire)
   //val ID_reg_inst=Reg(UInt(32.W))
   //val ID_reg_pc=Reg(UInt(32.W))
   //val ID_reg_valid=Reg(UInt(1.W))
   //val ID_reg_isJump=Reg(UInt(1.W))

   //when(io.flush.asBool|reset.asBool){
   //   ID_reg_inst:=0.U
   //   ID_reg_pc:=0.U
   //   ID_reg_valid:=0.U
   //   ID_reg_isJump:=0.U
   //}.elsewhen(io.in.fire){
   //   ID_reg_inst:=io.in.bits.inst
   //   ID_reg_pc:=io.in.bits.pc
   //   ID_reg_valid:=1.U
   //   ID_reg_isJump:=io.in.bits.isJump
   //}
   


   val RAW=Wire(UInt(1.W))
   io.out.bits.isJump:=Mux(~RAW.asBool,ID_reg_isJump,0.U)
   

   val s_idle :: s_wait_ready :: Nil = Enum(2)
   val state = RegInit(s_idle)


   state := MuxLookup(state, s_idle, List(
     s_idle       -> Mux(io.flush.asBool,s_idle,Mux(io.in.fire, s_wait_ready, s_idle)),
     s_wait_ready -> Mux(io.flush.asBool,s_idle,Mux(true.B, s_wait_ready, s_idle))
   ))
   val nop=0x0000013.U 
   io.in.ready:= (~RAW) & io.out.ready
   io.out.valid:=(state === s_wait_ready) & io.in.valid
   io.out.bits.pc:=Mux(~RAW.asBool,ID_reg_pc,0.U)
   io.out.bits.inst:=Mux(~RAW.asBool,ID_reg_inst,nop)

//op
   val op_t=VecInit(Seq.fill(80)(0.U(1.W)))

    //RV64I
   op_t(0) :=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b000".U)&(ID_reg_inst(31,25)==="b0000000".U)           //add,R
   op_t(1) :=(ID_reg_inst(6,0)==="b0111011".U)&(ID_reg_inst(14,12)==="b000".U)&(ID_reg_inst(31,25)==="b0000000".U)           //addw,R
   op_t(2) :=(ID_reg_inst(6,0)==="b0010011".U)&(ID_reg_inst(14,12)==="b000".U)                                               //addi,I
   op_t(3) :=(ID_reg_inst(6,0)==="b0011011".U)&(ID_reg_inst(14,12)==="b000".U)                                               //addiw,I
   op_t(4) :=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b000".U)&(ID_reg_inst(31,25)==="b0100000".U)           //sub,R
   op_t(5) :=(ID_reg_inst(6,0)==="b0111011".U)&(ID_reg_inst(14,12)==="b000".U)&(ID_reg_inst(31,25)==="b0100000".U)           //subw,R
   op_t(6) :=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b111".U)&(ID_reg_inst(31,25)==="b0000000".U)           //and,R
   op_t(7) :=(ID_reg_inst(6,0)==="b0010011".U)&(ID_reg_inst(14,12)==="b111".U)                                               //andi,I
   op_t(8) :=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b110".U)&(ID_reg_inst(31,25)==="b0000000".U)           //or,R
   op_t(9) :=(ID_reg_inst(6,0)==="b0010011".U)&(ID_reg_inst(14,12)==="b110".U)                                               //ori,R
   op_t(10):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b100".U)&(ID_reg_inst(31,25)==="b0000000".U)           //xor,R
   op_t(11):=(ID_reg_inst(6,0)==="b0010011".U)&(ID_reg_inst(14,12)==="b100".U)                                               //xori,I
   op_t(12):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b001".U)&(ID_reg_inst(31,25)==="b0000000".U)           //sll,R
   op_t(13):=(ID_reg_inst(6,0)==="b0111011".U)&(ID_reg_inst(14,12)==="b001".U)&(ID_reg_inst(31,25)==="b0000000".U)           //sllw,R
   op_t(14):=(ID_reg_inst(6,0)==="b0010011".U)&(ID_reg_inst(14,12)==="b001".U)&(ID_reg_inst(31,26)==="b000000".U )           //slli,I
   op_t(15):=(ID_reg_inst(6,0)==="b0011011".U)&(ID_reg_inst(14,12)==="b001".U)&(ID_reg_inst(31,26)==="b000000".U )           //slliw,I
   op_t(16):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b101".U)&(ID_reg_inst(31,25)==="b0100000".U)           //sra,R
   op_t(17):=(ID_reg_inst(6,0)==="b0111011".U)&(ID_reg_inst(14,12)==="b101".U)&(ID_reg_inst(31,25)==="b0100000".U)           //sraw,R
   op_t(18):=(ID_reg_inst(6,0)==="b0010011".U)&(ID_reg_inst(14,12)==="b101".U)&(ID_reg_inst(31,26)==="b010000".U )           //srai,I
   op_t(19):=(ID_reg_inst(6,0)==="b0011011".U)&(ID_reg_inst(14,12)==="b101".U)&(ID_reg_inst(31,26)==="b010000".U )           //sraiw,I
   op_t(20):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b101".U)&(ID_reg_inst(31,25)==="b0000000".U)           //srl,R
   op_t(21):=(ID_reg_inst(6,0)==="b0111011".U)&(ID_reg_inst(14,12)==="b101".U)&(ID_reg_inst(31,25)==="b0000000".U)           //srlw,R
   op_t(22):=(ID_reg_inst(6,0)==="b0010011".U)&(ID_reg_inst(14,12)==="b101".U)&(ID_reg_inst(31,26)==="b000000".U )           //srli,I
   op_t(23):=(ID_reg_inst(6,0)==="b0011011".U)&(ID_reg_inst(14,12)==="b101".U)&(ID_reg_inst(31,26)==="b000000".U )           //srliw,I
   op_t(24):=(ID_reg_inst(6,0)==="b0110111".U)                                                                               //lui,U
   op_t(25):=(ID_reg_inst(6,0)==="b0010111".U)                                                                               //auipc,U
   op_t(26):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b010".U)&(ID_reg_inst(31,25)==="b0000000".U)           //slt,R
   op_t(27):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b011".U)&(ID_reg_inst(31,25)==="b0000000".U)           //sltu,R
   op_t(28):=(ID_reg_inst(6,0)==="b0010011".U)&(ID_reg_inst(14,12)==="b010".U)                                               //slti,I
   op_t(29):=(ID_reg_inst(6,0)==="b0010011".U)&(ID_reg_inst(14,12)==="b011".U)                                               //sltiu,I
   op_t(30):=(ID_reg_inst(6,0)==="b1100011".U)&(ID_reg_inst(14,12)==="b000".U)                                               //beq,B
   op_t(31):=(ID_reg_inst(6,0)==="b1100011".U)&(ID_reg_inst(14,12)==="b001".U)                                               //bne,B
   op_t(32):=(ID_reg_inst(6,0)==="b1100011".U)&(ID_reg_inst(14,12)==="b101".U)                                               //bge,B
   op_t(33):=(ID_reg_inst(6,0)==="b1100011".U)&(ID_reg_inst(14,12)==="b111".U)                                               //bgeu,B
   op_t(34):=(ID_reg_inst(6,0)==="b1100011".U)&(ID_reg_inst(14,12)==="b100".U)                                               //blt,B
   op_t(35):=(ID_reg_inst(6,0)==="b1100011".U)&(ID_reg_inst(14,12)==="b110".U)                                               //bltu,B
   op_t(36):=(ID_reg_inst(6,0)==="b1101111".U)                                                                               //jal,J
   op_t(37):=(ID_reg_inst(6,0)==="b1100111".U)&(ID_reg_inst(14,12)==="b000".U)                                               //jalr,I
   op_t(38):=(ID_reg_inst(6,0)==="b0000011".U)&(ID_reg_inst(14,12)==="b000".U)                                               //lb,I
   op_t(39):=(ID_reg_inst(6,0)==="b0000011".U)&(ID_reg_inst(14,12)==="b001".U)                                               //lh,I
   op_t(40):=(ID_reg_inst(6,0)==="b0000011".U)&(ID_reg_inst(14,12)==="b010".U)                                               //lw,I
   op_t(41):=(ID_reg_inst(6,0)==="b0000011".U)&(ID_reg_inst(14,12)==="b011".U)                                               //ld,I
   op_t(42):=(ID_reg_inst(6,0)==="b0100011".U)&(ID_reg_inst(14,12)==="b000".U)                                               //sb,S
   op_t(43):=(ID_reg_inst(6,0)==="b0100011".U)&(ID_reg_inst(14,12)==="b001".U)                                               //sh,S
   op_t(44):=(ID_reg_inst(6,0)==="b0100011".U)&(ID_reg_inst(14,12)==="b010".U)                                               //sw,S
   op_t(45):=(ID_reg_inst(6,0)==="b0100011".U)&(ID_reg_inst(14,12)==="b011".U)                                               //sd,S
   op_t(46):=(ID_reg_inst(6,0)==="b0000011".U)&(ID_reg_inst(14,12)==="b100".U)                                               //lbu,I
   op_t(47):=(ID_reg_inst(6,0)==="b0000011".U)&(ID_reg_inst(14,12)==="b101".U)                                               //lhu,I
   op_t(48):=(ID_reg_inst(6,0)==="b0000011".U)&(ID_reg_inst(14,12)==="b110".U)                                               //lwu,I
   op_t(49):=(ID_reg_inst==="b00000000000100000000000001110011".U)                                                           //ebreak,N

   //RV64M
   op_t(50):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b000".U)&(ID_reg_inst(31,25)==="b0000001".U)           //mul,R 
   op_t(51):=(ID_reg_inst(6,0)==="b0111011".U)&(ID_reg_inst(14,12)==="b000".U)&(ID_reg_inst(31,25)==="b0000001".U)           //mulw,R
   op_t(52):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b001".U)&(ID_reg_inst(31,25)==="b0000001".U)           //mulh,R
   op_t(53):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b011".U)&(ID_reg_inst(31,25)==="b0000001".U)           //mulhu,R
   op_t(54):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b010".U)&(ID_reg_inst(31,25)==="b0000001".U)           //mulhsu,R
   op_t(55):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b100".U)&(ID_reg_inst(31,25)==="b0000001".U)           //div,R
   op_t(56):=(ID_reg_inst(6,0)==="b0111011".U)&(ID_reg_inst(14,12)==="b100".U)&(ID_reg_inst(31,25)==="b0000001".U)           //divw,R
   op_t(57):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b101".U)&(ID_reg_inst(31,25)==="b0000001".U)           //divu,R
   op_t(58):=(ID_reg_inst(6,0)==="b0111011".U)&(ID_reg_inst(14,12)==="b101".U)&(ID_reg_inst(31,25)==="b0000001".U)           //divuw,R
   op_t(59):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b110".U)&(ID_reg_inst(31,25)==="b0000001".U)           //rem,R
   op_t(60):=(ID_reg_inst(6,0)==="b0111011".U)&(ID_reg_inst(14,12)==="b110".U)&(ID_reg_inst(31,25)==="b0000001".U)           //remw,R
   op_t(61):=(ID_reg_inst(6,0)==="b0110011".U)&(ID_reg_inst(14,12)==="b111".U)&(ID_reg_inst(31,25)==="b0000001".U)           //remu,R
   op_t(62):=(ID_reg_inst(6,0)==="b0111011".U)&(ID_reg_inst(14,12)==="b111".U)&(ID_reg_inst(31,25)==="b0000001".U)           //remuw,R

   //CSR
   op_t(63):=(ID_reg_inst(6,0)==="b1110011".U)&(ID_reg_inst(14,12)==="b001".U)                                               //csrrw,I 
   op_t(64):=(ID_reg_inst(6,0)==="b1110011".U)&(ID_reg_inst(14,12)==="b010".U)                                               //csrrs,I
   op_t(65):=(ID_reg_inst==="b00000000000000000000000001110011".U)                                                           //ecall,N
   op_t(66):=(ID_reg_inst==="b00110000001000000000000001110011".U)                                                           //mret,N

   val op=Wire(UInt(80.W))
   op:=op_t.asUInt

   io.out.bits.op:=Mux(~RAW.asBool,op,0.U)
   io.out.bits.rd:=Mux(~RAW.asBool,ID_reg_inst(11,7) ,0.U)
   io.out.bits.rs1:=Mux(~RAW.asBool,ID_reg_inst(19,15) ,0.U)
   io.out.bits.rs2:=Mux(~RAW.asBool,ID_reg_inst(24,20),0.U)


   //io.out.bits.op_r:=op(38)|op(39)|op(40)|op(41)|op(46)|op(47)|op(48)
   //io.out.bits.op_w:=op(42)|op(43)|op(44)|op(45) 
   //io.out.bits.op_mul:=op(12)|op(13)|op(14)
   //io.out.bits.op_div:=op(15)|op(16)|op(17)|op(18)

//type
   val typ_t=VecInit(Seq.fill(6)(0.U(1.W)))
   typ_t(0):= (op(2)|op(3)|op(7)|op(9)|op(11)|op(14)|op(15)|op(18)|op(19)|op(22)|op(23)|op(28)|op(29)|op(37)|op(38)|op(39)|op(40)|op(41)|op(46)|op(47)|op(48)|op(63)|op(64))                                     //I
   typ_t(1):= (op(24)|op(25))                                                                                                                                                                                    //U
   typ_t(2):= (op(42)|op(43)|op(44)|op(45))                                                                                                                                                                      //S
   typ_t(3):= (op(36))                                                                                                                                                                                           //J
   typ_t(4):= (op(30)|op(31)|op(32)|op(33)|op(34)|op(35))                                                                                                                                                        //B
   typ_t(5):= (op(0)|op(1)|op(4)|op(5)|op(6)|op(8)|op(10)|op(12)|op(13)|op(16)|op(17)|op(20)|op(21)|op(26)|op(27)|op(50)|op(51)|op(52)|op(53)|op(54)|op(55)|op(56)|op(57)|op(58)|op(59)|op(60)|op(61)|op(62))    //R
   val typ=Wire(UInt(6.W))
   typ:=typ_t.asUInt

   io.out.bits.typ:=Mux(~RAW.asBool,typ,0.U)

//imm
   io.out.bits.imm:= Mux(typ(0),Cat(Fill(52,ID_reg_inst(31)),ID_reg_inst(31,20)),                                                                              //I
                     Mux(typ(1),Cat(Fill(32,ID_reg_inst(31)),Cat(ID_reg_inst(31,12),Fill(12,0.U))),                                                            //U
                     Mux(typ(2),Cat(Fill(52,ID_reg_inst(31)),Cat(ID_reg_inst(31,25),ID_reg_inst(11,7))),                                                       //S
                     Mux(typ(3),Cat(Fill(43,ID_reg_inst(31)),Cat(ID_reg_inst(31),Cat(ID_reg_inst(19,12),Cat(ID_reg_inst(20),Cat(ID_reg_inst(30,21),0.U))))),   //J
                     Mux(typ(4),Cat(Fill(51,ID_reg_inst(31)),Cat(ID_reg_inst(31),Cat(ID_reg_inst(7),Cat(ID_reg_inst(30,25),Cat(ID_reg_inst(11,8),0.U))))),     //B
                     0.U)))))

//RAW
   io.sb.lookidx1:=Mux(typ(0)|typ(2)|typ(4)|typ(5),ID_reg_inst(19,15),0.U)              //rs1
   io.sb.lookidx2:=Mux(typ(2)|typ(4)|typ(5),ID_reg_inst(24,20),0.U)                     //rs2
   io.sb.setidx:=Mux((typ(0)|typ(1)|typ(3)|typ(5))&(io.out.fire&io.in.fire)&(!RAW),ID_reg_inst(11,7),0.U) //rd
   io.out.bits.clearidx:=Mux(~RAW.asBool,io.sb.setidx,0.U)
   RAW:=0.U//io.sb.isBusy 
}
import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class pc_now extends Bundle{
    val pc=Output(UInt(64.W))
}
class pc_next extends Bundle{
    val pc_dnpc=Output(UInt(64.W))
}

class EXU_out extends Bundle{
    val pin=(new pmemin)
    val idx_w=Output(UInt(5.W))
    val en_w=Output(UInt(1.W))
    val op=Output(UInt(80.W))
    val val_w=Output(UInt(64.W))
    val pc_dnpc=Output(UInt(64.W))
}
class EXU extends Module{
    val io=IO(new Bundle{
        val in=Flipped(Decoupled(new Dec))
        val out=Decoupled(new EXU_out)
        val gpr=Flipped(new GPR_r)
        val pc=Input(UInt(64.W))
        val csr=Flipped(new CSRio)
        val pc_dnpc=Output(UInt(64.W))
    })
        io.in.ready:=io.out.ready
        io.out.valid:=io.in.fire


        val ebreak1=Module(new ebreak)
        ebreak1.io.en_break:=io.in.bits.op(49)&io.in.fire
        ebreak1.io.clk:= clock
  
      
        val src1=Wire(UInt(64.W))
        val src2=Wire(UInt(64.W))
        val dest=Wire(UInt(64.W))
  
        val alu_dest=Module(new ALU)
        val alu_pc=Module(new ALU)
  
        io.gpr.en_r1:=Mux((io.in.bits.typ(0)|io.in.bits.typ(2)|io.in.bits.typ(4)|io.in.bits.typ(5)),1.U,0.U)
        io.gpr.en_r2:=Mux((io.in.bits.typ(2)|io.in.bits.typ(4)|io.in.bits.typ(5)),1.U,0.U)
        io.gpr.idx_r1:=io.in.bits.rs1
        io.gpr.idx_r2:=io.in.bits.rs2
        io.out.bits.en_w:=Mux(reset.asBool&(~io.in.fire),0.U,Mux((io.in.bits.typ(0)|io.in.bits.typ(1)|io.in.bits.typ(3)|io.in.bits.typ(5)),1.U,0.U))
        io.out.bits.idx_w:=dest
  
        io.csr.en_r:=Mux(io.in.bits.op(63)|io.in.bits.op(64),1.U,0.U)
        io.csr.en_w:=Mux(io.in.fire&(io.in.bits.op(63)|io.in.bits.op(64)),1.U,0.U)
        io.csr.idx_r:=Mux(io.in.bits.op(63)|io.in.bits.op(64),src2,0.U)
        io.csr.idx_w:=Mux(io.in.bits.op(63)|io.in.bits.op(64),src2,0.U)
        io.csr.no:=Mux(io.in.bits.op(65),1.U,
                   Mux(io.in.bits.op(66),2.U,
                   0.U))
        io.csr.epc:=io.pc
         
  
        src1:=Mux((io.in.bits.typ(0)|io.in.bits.typ(2)|io.in.bits.typ(4)|io.in.bits.typ(5)),io.gpr.val_r1,
            Mux((io.in.bits.typ(1)|io.in.bits.typ(3)),io.in.bits.imm,
            0.U))
      
        src2:=Mux((io.in.bits.typ(2)|io.in.bits.typ(4)|io.in.bits.typ(5)),io.gpr.val_r2,
            Mux(io.in.bits.typ(0),io.in.bits.imm,
            0.U))
  
        dest:=Mux((io.in.bits.typ(2)|io.in.bits.typ(4)),io.in.bits.imm,
            io.in.bits.rd)
  
        io.out.bits.pin.raddr:=Mux(io.in.bits.op(38)|io.in.bits.op(39)|io.in.bits.op(40)|io.in.bits.op(41)|io.in.bits.op(46)|io.in.bits.op(47)|io.in.bits.op(48),alu_dest.io.result,
                       0.U)
        io.out.bits.pin.waddr:=Mux(io.in.bits.op(42)|io.in.bits.op(43)|io.in.bits.op(44)|io.in.bits.op(45),alu_dest.io.result,0.U)
        io.out.bits.pin.wdata:=Mux(io.in.bits.op(42)|io.in.bits.op(43)|io.in.bits.op(44)|io.in.bits.op(45),src2,0.U)
        io.out.bits.pin.wmask:=Mux(~io.in.fire,0.U,
                       Mux(io.in.bits.op(42),Cat(Fill(63,0.U),Fill(1,1.U)),
                       Mux(io.in.bits.op(43),Cat(Fill(62,0.U),Fill(2,1.U)),
                       Mux(io.in.bits.op(44),Cat(Fill(60,0.U),Fill(4,1.U)),
                       Mux(io.in.bits.op(45),Cat(Fill(56,0.U),Fill(8,1.U)),
                       0.U)))))
  
        alu_dest.io.src1:=Mux(io.in.bits.op(13)|io.in.bits.op(21)|io.in.bits.op(23)|io.in.bits.op(56)|io.in.bits.op(58)|io.in.bits.op(60)|io.in.bits.op(62),Cat(Fill(32,0.U),src1(31,0)),
                          Mux(io.in.bits.op(17)|io.in.bits.op(19),Cat(Fill(32,src1(31)),src1(31,0)),
                          Mux(io.in.bits.op(36)|io.in.bits.op(37),io.pc,
                          src1)))
        alu_dest.io.src2:=Mux(io.in.bits.op(13)|io.in.bits.op(17)|io.in.bits.op(21),Cat(Fill(59,0.U),src2(4,0)),
                          Mux(io.in.bits.op(25),io.pc,
                          Mux(io.in.bits.op(36)|io.in.bits.op(37),4.U,
                          Mux(io.in.bits.op(42)|io.in.bits.op(43)|io.in.bits.op(44)|io.in.bits.op(45),dest,
                          Mux(io.in.bits.op(56)|io.in.bits.op(58)|io.in.bits.op(60)|io.in.bits.op(62),Cat(Fill(32,0.U),src2(31,0)),
                          Mux(io.in.bits.op(64),io.csr.val_r,
                          src2))))))
        alu_dest.io.op  :=Mux(io.in.bits.op(0)|io.in.bits.op(1)|io.in.bits.op(2)|io.in.bits.op(3)|io.in.bits.op(24)|io.in.bits.op(25)|io.in.bits.op(36)|io.in.bits.op(37)|io.in.bits.op(38)|io.in.bits.op(39)|io.in.bits.op(40)|io.in.bits.op(41)|io.in.bits.op(42)|io.in.bits.op(43)|io.in.bits.op(44)|io.in.bits.op(45)|io.in.bits.op(46)|io.in.bits.op(47)|io.in.bits.op(48),1.U, //add
                          Mux(io.in.bits.op(4)|io.in.bits.op(5),2.U,//sub
                          Mux(io.in.bits.op(6)|io.in.bits.op(7),4.U,//and
                          Mux(io.in.bits.op(8)|io.in.bits.op(9)|io.in.bits.op(64),8.U,//or
                          Mux(io.in.bits.op(10)|io.in.bits.op(11),16.U,//xor
                          Mux(io.in.bits.op(12)|io.in.bits.op(13)|io.in.bits.op(14)|io.in.bits.op(15),32.U,//sll
                          Mux(io.in.bits.op(20)|io.in.bits.op(21)|io.in.bits.op(22)|io.in.bits.op(23),64.U,//srl
                          Mux(io.in.bits.op(16)|io.in.bits.op(17)|io.in.bits.op(18)|io.in.bits.op(19),128.U,//sra
                          Mux(io.in.bits.op(26)|io.in.bits.op(28)|io.in.bits.op(32)|io.in.bits.op(34),256.U,//slt
                          Mux(io.in.bits.op(27)|io.in.bits.op(29)|io.in.bits.op(33)|io.in.bits.op(35),512.U,//sltu
                          Mux(io.in.bits.op(30)|io.in.bits.op(31),2048.U,  //eql
                          Mux(io.in.bits.op(50)|io.in.bits.op(51)|io.in.bits.op(53),4096.U,  //u*u
                          Mux(io.in.bits.op(52),8192.U,            //s*s
                          Mux(io.in.bits.op(54),16384.U,           //s*u
                          Mux(io.in.bits.op(55)|io.in.bits.op(56),32768.U,             //s/s
                          Mux(io.in.bits.op(57)|io.in.bits.op(58),65536.U,             //u/u
                          Mux(io.in.bits.op(59)|io.in.bits.op(60),131072.U,            //s%s
                          Mux(io.in.bits.op(61)|io.in.bits.op(62),262144.U,            //u%u
                          0.U))))))))))))))))))
  
                          
  
                          
                          
        io.out.bits.val_w:=Mux(io.in.bits.op(1)|io.in.bits.op(3)|io.in.bits.op(5)|io.in.bits.op(13)|io.in.bits.op(15)|io.in.bits.op(17)|io.in.bits.op(21)|io.in.bits.op(23)|io.in.bits.op(51)|io.in.bits.op(56)|io.in.bits.op(60)|io.in.bits.op(62),Cat(Fill(32,alu_dest.io.result(31)),alu_dest.io.result(31,0)), 
                      Mux(io.in.bits.op(52)|io.in.bits.op(53)|io.in.bits.op(54),Cat(Fill(32,0.U),alu_dest.io.result(63,32)),
                      Mux(io.in.bits.op(63)|io.in.bits.op(64),io.csr.val_r,
                      alu_dest.io.result)))
      
        io.csr.val_w:=Mux(io.in.bits.op(63),src1,
                      Mux(io.in.bits.op(64),alu_dest.io.result,
                      0.U))



        alu_pc.io.src1:=Mux(io.in.bits.op(37),src1,io.pc)
        alu_pc.io.src2:=Mux(io.in.bits.op(30)&alu_dest.io.result(0),dest,
                        Mux(io.in.bits.op(31)&(~alu_dest.io.result(0)),dest,
                        Mux(io.in.bits.op(32)&(~alu_dest.io.result(0)),dest,
                        Mux(io.in.bits.op(33)&(~alu_dest.io.result(0)),dest,
                        Mux(io.in.bits.op(34)&alu_dest.io.result(0),dest,
                        Mux(io.in.bits.op(35)&alu_dest.io.result(0),dest,
                        Mux(io.in.bits.op(36),src1,
                        Mux(io.in.bits.op(37),src2,
                        4.U))))))))
        alu_pc.io.op:=  Mux(io.in.bits.op(37),1024.U,1.U)
  
        io.out.bits.pc_dnpc:= Mux(reset.asBool|(~io.in.fire),io.pc,
                     Mux(io.in.bits.op(65)|io.in.bits.op(66),io.csr.val_r,
                     alu_pc.io.result))
        io.pc_dnpc:=Mux(reset.asBool|(~io.in.fire),io.pc,
                     Mux(io.in.bits.op(65)|io.in.bits.op(66),io.csr.val_r,
                     alu_pc.io.result))
        io.out.bits.op:=io.in.bits.op
}
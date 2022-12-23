import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class EXU extends Module{
    val io=IO(new Bundle{
        val reset=Input(Reset())
        val rs1=Input(UInt(5.W))
        val rs2=Input(UInt(5.W))
        val rd=Input(UInt(5.W))
        val imm=Input(UInt(64.W))
        val op=Input(UInt(80.W))
        val typ=Input(UInt(6.W))
        val pc=Input(UInt(64.W))
        val pc_dnpc=Output(UInt(64.W))
    })

        val ebreak1=Module(new ebreak)
        ebreak1.io.en_break:=io.op(49)
        ebreak1.io.clk:= clock
  
      
        val src1=Wire(UInt(64.W))
        val src2=Wire(UInt(64.W))
        val dest=Wire(UInt(64.W))
  
        val gpr=Module(new GPR)
        val alu_dest=Module(new ALU)
        val alu_pc=Module(new ALU)
        val pmem=Module(new memory)
        val csr=Module(new CSR)
  
        gpr.io.en_r1:=Mux((io.typ(0)|io.typ(2)|io.typ(4)|io.typ(5)),1.U,0.U)
        gpr.io.en_r2:=Mux((io.typ(2)|io.typ(4)|io.typ(5)),1.U,0.U)
        gpr.io.en_w:=Mux(io.reset.asBool,0.U,Mux((io.typ(0)|io.typ(1)|io.typ(3)|io.typ(5)),1.U,0.U))
        gpr.io.idx_r1:=io.rs1
        gpr.io.idx_r2:=io.rs2
        gpr.io.idx_w:=dest
  
        csr.io.en_r:=Mux(io.op(63)|io.op(64),1.U,0.U)
        csr.io.en_w:=Mux(io.op(63)|io.op(64),1.U,0.U)
        csr.io.idx_r:=Mux(io.op(63)|io.op(64),src2,0.U)
        csr.io.idx_w:=Mux(io.op(63)|io.op(64),src2,0.U)
        csr.io.no:=Mux(io.op(65),1.U,
                   Mux(io.op(66),2.U,
                   0.U))
        csr.io.epc:=io.pc
         
  
        src1:=Mux((io.typ(0)|io.typ(2)|io.typ(4)|io.typ(5)),gpr.io.val_r1,
            Mux((io.typ(1)|io.typ(3)),io.imm,
            0.U))
      
        src2:=Mux((io.typ(2)|io.typ(4)|io.typ(5)),gpr.io.val_r2,
            Mux(io.typ(0),io.imm,
            0.U))
  
        dest:=Mux((io.typ(2)|io.typ(4)),io.imm,
            io.rd)
  
        pmem.io.raddr:=Mux(io.op(38)|io.op(39)|io.op(40)|io.op(41)|io.op(46)|io.op(47)|io.op(48),alu_dest.io.result,
                       0.U)
        pmem.io.waddr:=Mux(io.op(42)|io.op(43)|io.op(44)|io.op(45),alu_dest.io.result,0.U)
        pmem.io.wdata:=Mux(io.op(42)|io.op(43)|io.op(44)|io.op(45),src2,0.U)
        pmem.io.wmask:=Mux(io.op(42),Cat(Fill(63,0.U),Fill(1,1.U)),
                       Mux(io.op(43),Cat(Fill(62,0.U),Fill(2,1.U)),
                       Mux(io.op(44),Cat(Fill(60,0.U),Fill(4,1.U)),
                       Mux(io.op(45),Cat(Fill(56,0.U),Fill(8,1.U)),
                       0.U))))
  
        alu_dest.io.src1:=Mux(io.op(13)|io.op(21)|io.op(23)|io.op(56)|io.op(58)|io.op(60)|io.op(62),Cat(Fill(32,0.U),src1(31,0)),
                          Mux(io.op(17)|io.op(19),Cat(Fill(32,src1(31)),src1(31,0)),
                          Mux(io.op(36)|io.op(37),io.pc,
                          src1)))
        alu_dest.io.src2:=Mux(io.op(13)|io.op(17)|io.op(21),Cat(Fill(59,0.U),src2(4,0)),
                          Mux(io.op(25),io.pc,
                          Mux(io.op(36)|io.op(37),4.U,
                          Mux(io.op(42)|io.op(43)|io.op(44)|io.op(45),dest,
                          Mux(io.op(56)|io.op(58)|io.op(60)|io.op(62),Cat(Fill(32,0.U),src2(31,0)),
                          Mux(io.op(64),csr.io.val_r,
                          src2))))))
        alu_dest.io.op  :=Mux(io.op(0)|io.op(1)|io.op(2)|io.op(3)|io.op(24)|io.op(25)|io.op(36)|io.op(37)|io.op(38)|io.op(39)|io.op(40)|io.op(41)|io.op(42)|io.op(43)|io.op(44)|io.op(45)|io.op(46)|io.op(47)|io.op(48),1.U, //add
                          Mux(io.op(4)|io.op(5),2.U,//sub
                          Mux(io.op(6)|io.op(7),4.U,//and
                          Mux(io.op(8)|io.op(9)|io.op(64),8.U,//or
                          Mux(io.op(10)|io.op(11),16.U,//xor
                          Mux(io.op(12)|io.op(13)|io.op(14)|io.op(15),32.U,//sll
                          Mux(io.op(20)|io.op(21)|io.op(22)|io.op(23),64.U,//srl
                          Mux(io.op(16)|io.op(17)|io.op(18)|io.op(19),128.U,//sra
                          Mux(io.op(26)|io.op(28)|io.op(32)|io.op(34),256.U,//slt
                          Mux(io.op(27)|io.op(29)|io.op(33)|io.op(35),512.U,//sltu
                          Mux(io.op(30)|io.op(31),2048.U,  //eql
                          Mux(io.op(50)|io.op(51)|io.op(53),4096.U,  //u*u
                          Mux(io.op(52),8192.U,            //s*s
                          Mux(io.op(54),16384.U,           //s*u
                          Mux(io.op(55)|io.op(56),32768.U,             //s/s
                          Mux(io.op(57)|io.op(58),65536.U,             //u/u
                          Mux(io.op(59)|io.op(60),131072.U,            //s%s
                          Mux(io.op(61)|io.op(62),262144.U,            //u%u
                          0.U))))))))))))))))))
  
                          
  
                          
                          
        gpr.io.val_w:=Mux(io.op(1)|io.op(3)|io.op(5)|io.op(13)|io.op(15)|io.op(17)|io.op(21)|io.op(23)|io.op(51)|io.op(56)|io.op(60)|io.op(62),Cat(Fill(32,alu_dest.io.result(31)),alu_dest.io.result(31,0)),
                      Mux(io.op(38),Cat(Fill(56,pmem.io.rdata(7)),pmem.io.rdata(7,0)),
                      Mux(io.op(39),Cat(Fill(48,pmem.io.rdata(15)),pmem.io.rdata(15,0)),
                      Mux(io.op(40),Cat(Fill(32,pmem.io.rdata(31)),pmem.io.rdata(31,0)),
                      Mux(io.op(46),Cat(Fill(56,0.U),pmem.io.rdata(7,0)),
                      Mux(io.op(47),Cat(Fill(48,0.U),pmem.io.rdata(15,0)),
                      Mux(io.op(48),Cat(Fill(32,0.U),pmem.io.rdata(31,0)),
                      Mux(io.op(52)|io.op(53)|io.op(54),Cat(Fill(32,0.U),alu_dest.io.result(63,32)),
                      Mux(io.op(41),pmem.io.rdata,
                      Mux(io.op(63)|io.op(64),csr.io.val_r,
                      alu_dest.io.result))))))))))
      
        csr.io.val_w:=Mux(io.op(63),src1,
                      Mux(io.op(64),alu_dest.io.result,
                      0.U))


        alu_pc.io.src1:=Mux(io.op(37),src1,io.pc)
        alu_pc.io.src2:=Mux(io.op(30)&alu_dest.io.result(0),dest,
                        Mux(io.op(31)&(~alu_dest.io.result(0)),dest,
                        Mux(io.op(32)&(~alu_dest.io.result(0)),dest,
                        Mux(io.op(33)&(~alu_dest.io.result(0)),dest,
                        Mux(io.op(34)&alu_dest.io.result(0),dest,
                        Mux(io.op(35)&alu_dest.io.result(0),dest,
                        Mux(io.op(36),src1,
                        Mux(io.op(37),src2,
                        4.U))))))))
        alu_pc.io.op:=  Mux(io.op(37),1024.U,1.U)
  
        io.pc_dnpc:= Mux(io.reset.asBool,io.pc,
                     Mux(io.op(65)|io.op(66),csr.io.val_r,
                     alu_pc.io.result))
}
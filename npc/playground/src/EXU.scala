import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class WB extends Bundle{
    val pc=Output(UInt(32.W))
    val inst=Output(UInt(32.W))
    val pc_dnpc=Output(UInt(64.W))
    val gpr=(new GPR_w)
    val csr=(new CSR_w)
    val isJump=Output(UInt(1.W))
    val clearidx=Output(UInt(5.W))
}

class EXU extends Module{
    val io=IO(new Bundle{
        val in=Flipped(Decoupled(new EXE))
        val out=Decoupled(new WB)
        val gpr=Flipped(new GPR_r)
        val csr=Flipped(new CSR_r)
        val lm=(new AXILite)
    })
        val EXE_reg_pc=dontTouch(RegEnable(io.in.bits.pc,0.U,io.in.fire)) 
        val EXE_reg_inst=dontTouch(RegEnable(io.in.bits.inst,0.U,io.in.fire)) 
        val EXE_reg_rs1=RegEnable(io.in.bits.rs1,0.U,io.in.fire)
        val EXE_reg_rs2=RegEnable(io.in.bits.rs2,0.U,io.in.fire)
        val EXE_reg_rd=RegEnable(io.in.bits.rd,0.U,io.in.fire)
        val EXE_reg_imm=RegEnable(io.in.bits.imm,0.U,io.in.fire)
        val EXE_reg_op=RegEnable(io.in.bits.op,0.U,io.in.fire)
        val EXE_reg_typ=RegEnable(io.in.bits.typ,0.U,io.in.fire)
        val EXE_reg_valid=RegEnable(io.in.fire,0.U,true.B);

        val EXE_reg_isJump=RegEnable(io.in.bits.isJump,0.U,io.in.fire)
        val EXE_reg_clearidx=RegEnable(io.in.bits.clearidx,0.U,io.in.fire)
        io.out.bits.isJump:=EXE_reg_isJump
        io.out.bits.clearidx:=EXE_reg_clearidx

        val lsu = Module(new LSU)

        val op_r=Wire(UInt(1.W))
        val op_w=Wire(UInt(1.W))
        val op_mul=Wire(UInt(1.W))
        val op_div=Wire(UInt(1.W))
        op_r:=EXE_reg_op(38) |EXE_reg_op(39) |EXE_reg_op(40) |EXE_reg_op(41) |EXE_reg_op(46) |EXE_reg_op(47) |EXE_reg_op(48)
        op_w:=EXE_reg_op(42) |EXE_reg_op(43) |EXE_reg_op(44) |EXE_reg_op(45) 
        op_mul:=EXE_reg_op(50)|EXE_reg_op(51)|EXE_reg_op(52)|EXE_reg_op(53)|EXE_reg_op(54)
        op_div:=EXE_reg_op(55)|EXE_reg_op(56)|EXE_reg_op(57)|EXE_reg_op(58)|EXE_reg_op(59)|EXE_reg_op(60)|EXE_reg_op(61)|EXE_reg_op(62)

        val src1=Wire(UInt(64.W))
        val src2=Wire(UInt(64.W))
        val dest=Wire(UInt(64.W))
        src1:=Mux((EXE_reg_typ(0)|EXE_reg_typ(2)|EXE_reg_typ(4)|EXE_reg_typ(5)),io.gpr.val_r1,
            Mux((EXE_reg_typ(1)|EXE_reg_typ(3)),EXE_reg_imm,
            0.U))
      
        src2:=Mux((EXE_reg_typ(2)|EXE_reg_typ(4)|EXE_reg_typ(5)),io.gpr.val_r2,
            Mux(EXE_reg_typ(0),EXE_reg_imm,
            0.U))
  
        dest:=Mux((EXE_reg_typ(2)|EXE_reg_typ(4)),EXE_reg_imm,
            EXE_reg_rd)

        val alu=Module(new ALU)
  
        val lsu_finish=RegInit(0.U(1.W))
        val alu_finish=RegInit(0.U(1.W))

        val s_idle :: s_wait :: s_wait_next :: Nil =Enum(3)

        val state = RegInit(s_idle)

        lsu_finish := Mux(state =/= s_wait,0.U,
                      Mux(lsu.io.ls.out.fire | ((~op_r) & (~op_w)).asBool,1.U,lsu_finish))
        alu_finish := Mux(state =/= s_wait,0.U,
                      Mux((alu.io.validout | ((~op_mul) & (~op_div))).asBool,1.U,alu_finish)) 


        state:=MuxLookup(state,s_idle,List(
            s_idle -> Mux(io.in.fire,s_wait,s_idle),
            s_wait -> Mux(lsu_finish.asBool & alu_finish.asBool,s_wait_next,s_wait),
            s_wait_next -> Mux(io.out.fire,s_idle,s_wait_next)
        ))

        val lsu_rdata =RegEnable(lsu.io.ls.out.bits.rdata,0.U,lsu.io.ls.out.fire)
        val alu_result=RegEnable(alu.io.result,0.U,alu.io.validout.asBool)

        io.in.ready:=(state === s_idle) 
        io.out.valid:=(state === s_wait_next)

        //lsu
        lsu.io.en_r:=op_r
        lsu.io.en_w:=op_w
        lsu.io.ls.out.ready:=1.U
        lsu.io.ls.in.valid:=(state === s_wait) & (op_w|op_r) &(~lsu_finish)
        lsu.io.ls.in.bits.raddr:=Mux(EXE_reg_op(38)|EXE_reg_op(39)|EXE_reg_op(40)|EXE_reg_op(41)|EXE_reg_op(46)|EXE_reg_op(47)|EXE_reg_op(48),alu.io.result,0.U)
        lsu.io.ls.in.bits.waddr:=Mux(EXE_reg_op(42)|EXE_reg_op(43)|EXE_reg_op(44)|EXE_reg_op(45),alu.io.result,0.U)
        lsu.io.ls.in.bits.wdata:=Mux(EXE_reg_op(42)|EXE_reg_op(43)|EXE_reg_op(44)|EXE_reg_op(45),io.gpr.val_r2,0.U)
        lsu.io.ls.in.bits.wmask:=Mux(EXE_reg_op(42),Cat(Fill(7,0.U),Fill(1,1.U)),
                               Mux(EXE_reg_op(43),Cat(Fill(6,0.U),Fill(2,1.U)),
                               Mux(EXE_reg_op(44),Cat(Fill(4,0.U),Fill(4,1.U)),
                               Mux(EXE_reg_op(45),Fill(8,1.U),
                               0.U))))

        io.lm<>lsu.io.lm

        //ebreak
        val ebreak1=Module(new ebreak)
        ebreak1.io.en_break:=EXE_reg_op(49)&io.in.fire
        ebreak1.io.clk:= clock
  
      
        //read gpr
        io.gpr.en_r1:=Mux((EXE_reg_typ(0)|EXE_reg_typ(2)|EXE_reg_typ(4)|EXE_reg_typ(5)),1.U,0.U)
        io.gpr.en_r2:=Mux((EXE_reg_typ(2)|EXE_reg_typ(4)|EXE_reg_typ(5)),1.U,0.U)
        io.gpr.idx_r1:=EXE_reg_rs1
        io.gpr.idx_r2:=EXE_reg_rs2
  
        //read csr
        io.csr.en_r:=Mux(EXE_reg_op(63)|EXE_reg_op(64),1.U,0.U)
        io.csr.idx_r:=Mux(EXE_reg_op(63)|EXE_reg_op(64),src2,0.U)

        

  


        //alu
        val alu_wait=RegInit(0.U(1.W))
        alu_wait:=(state === s_wait)
        alu.io.validin:=(state === s_wait) & (op_mul | op_div) &(~alu_finish) & (~(alu_wait))
        alu.io.flush:=0.U
        alu.io.src1:=   Mux(EXE_reg_op(13)|EXE_reg_op(21)|EXE_reg_op(23)|EXE_reg_op(56)|EXE_reg_op(58)|EXE_reg_op(60)|EXE_reg_op(62),Cat(Fill(32,0.U),src1(31,0)),
                        Mux(EXE_reg_op(17)|EXE_reg_op(19),Cat(Fill(32,src1(31)),src1(31,0)),
                        Mux(EXE_reg_op(36)|EXE_reg_op(37),EXE_reg_pc,
                        src1)))
        alu.io.src2:=   Mux(EXE_reg_op(13)|EXE_reg_op(17)|EXE_reg_op(21),Cat(Fill(59,0.U),src2(4,0)),
                        Mux(EXE_reg_op(25),EXE_reg_pc,
                        Mux(EXE_reg_op(36)|EXE_reg_op(37),4.U,
                        Mux(EXE_reg_op(42)|EXE_reg_op(43)|EXE_reg_op(44)|EXE_reg_op(45),dest,
                        Mux(EXE_reg_op(56)|EXE_reg_op(58)|EXE_reg_op(60)|EXE_reg_op(62),Cat(Fill(32,0.U),src2(31,0)),
                        Mux(EXE_reg_op(64),io.csr.val_r,
                        src2))))))
        alu.io.op  :=   Mux(EXE_reg_op(0)|EXE_reg_op(1)|EXE_reg_op(2)|EXE_reg_op(3)|EXE_reg_op(24)|EXE_reg_op(25)|EXE_reg_op(36)|EXE_reg_op(37)|EXE_reg_op(38)|EXE_reg_op(39)|EXE_reg_op(40)|EXE_reg_op(41)|EXE_reg_op(42)|EXE_reg_op(43)|EXE_reg_op(44)|EXE_reg_op(45)|EXE_reg_op(46)|EXE_reg_op(47)|EXE_reg_op(48),1.U, //add
                        Mux(EXE_reg_op(4)|EXE_reg_op(5),2.U,//sub
                        Mux(EXE_reg_op(6)|EXE_reg_op(7),4.U,//and
                        Mux(EXE_reg_op(8)|EXE_reg_op(9)|EXE_reg_op(64),8.U,//or
                        Mux(EXE_reg_op(10)|EXE_reg_op(11),16.U,//xor
                        Mux(EXE_reg_op(12)|EXE_reg_op(13)|EXE_reg_op(14)|EXE_reg_op(15),32.U,//sll
                        Mux(EXE_reg_op(20)|EXE_reg_op(21)|EXE_reg_op(22)|EXE_reg_op(23),64.U,//srl
                        Mux(EXE_reg_op(16)|EXE_reg_op(17)|EXE_reg_op(18)|EXE_reg_op(19),128.U,//sra
                        Mux(EXE_reg_op(26)|EXE_reg_op(28)|EXE_reg_op(32)|EXE_reg_op(34),256.U,//slt
                        Mux(EXE_reg_op(27)|EXE_reg_op(29)|EXE_reg_op(33)|EXE_reg_op(35),512.U,//sltu
                        Mux(EXE_reg_op(30)|EXE_reg_op(31),2048.U,  //eql
                        Mux(EXE_reg_op(50)|EXE_reg_op(51)|EXE_reg_op(53),4096.U,  //u*u
                        Mux(EXE_reg_op(52),8192.U,            //s*s
                        Mux(EXE_reg_op(54),16384.U,           //s*u
                        Mux(EXE_reg_op(55)|EXE_reg_op(56),32768.U,             //s/s
                        Mux(EXE_reg_op(57)|EXE_reg_op(58),65536.U,             //u/u
                        Mux(EXE_reg_op(59)|EXE_reg_op(60),131072.U,            //s%s
                        Mux(EXE_reg_op(61)|EXE_reg_op(62),262144.U,            //u%u
                        0.U))))))))))))))))))
  
        //next pc
        val next_pc_src1=Wire(UInt(64.W))
        val next_pc_src2=Wire(UInt(64.W))
        val next_pc_sum =Wire(UInt(64.W))
        next_pc_src1:=Mux(EXE_reg_op(37),src1,EXE_reg_pc)
        next_pc_src2:=Mux(EXE_reg_op(30)&alu.io.result(0),dest,
                      Mux(EXE_reg_op(31)&(~alu.io.result(0)),dest,
                      Mux(EXE_reg_op(32)&(~alu.io.result(0)),dest,
                      Mux(EXE_reg_op(33)&(~alu.io.result(0)),dest,
                      Mux(EXE_reg_op(34)&alu.io.result(0),dest,
                      Mux(EXE_reg_op(35)&alu.io.result(0),dest,
                      Mux(EXE_reg_op(36),src1,
                      Mux(EXE_reg_op(37),src2,
                      4.U))))))))
        next_pc_sum:=next_pc_src1+next_pc_src2
  
        //to wbu
        io.out.bits.gpr.en_w:=Mux((EXE_reg_typ(0)|EXE_reg_typ(1)|EXE_reg_typ(3)|EXE_reg_typ(5)),1.U,0.U)
        io.out.bits.gpr.idx_w:=dest

        io.out.bits.csr.en_w:=Mux((EXE_reg_op(63)|EXE_reg_op(64)),1.U,0.U)
        io.out.bits.csr.idx_w:=Mux(EXE_reg_op(63)|EXE_reg_op(64),src2,0.U)
        io.out.bits.csr.no:=Mux(EXE_reg_op(65),1.U,
                            Mux(EXE_reg_op(66),2.U,
                            0.U))
        io.out.bits.csr.epc:=EXE_reg_pc
        io.out.bits.gpr.val_w:=
                      Mux(EXE_reg_op(1)|EXE_reg_op(3)|EXE_reg_op(5)|EXE_reg_op(13)|EXE_reg_op(15)|EXE_reg_op(17)|EXE_reg_op(21)|EXE_reg_op(23),Cat(Fill(32,alu.io.result(31)),alu.io.result(31,0)),
                      Mux(EXE_reg_op(51)|EXE_reg_op(56)|EXE_reg_op(60)|EXE_reg_op(62),Cat(Fill(32,alu_result(31)),alu_result(31,0)), 
                      Mux(EXE_reg_op(52)|EXE_reg_op(53)|EXE_reg_op(54),Cat(Fill(32,0.U),alu_result(63,32)),
                      Mux(EXE_reg_op(63)|EXE_reg_op(64),io.csr.val_r,
                      Mux(EXE_reg_op(38),Cat(Fill(56,lsu.io.ls.out.bits.rdata(7)),lsu.io.ls.out.bits.rdata(7,0)),
                      Mux(EXE_reg_op(39),Cat(Fill(48,lsu.io.ls.out.bits.rdata(15)),lsu.io.ls.out.bits.rdata(15,0)),
                      Mux(EXE_reg_op(40),Cat(Fill(32,lsu.io.ls.out.bits.rdata(31)),lsu.io.ls.out.bits.rdata(31,0)),
                      Mux(EXE_reg_op(41),lsu.io.ls.out.bits.rdata,
                      Mux(EXE_reg_op(46),Cat(Fill(56,0.U),lsu.io.ls.out.bits.rdata(7,0)),
                      Mux(EXE_reg_op(47),Cat(Fill(48,0.U),lsu.io.ls.out.bits.rdata(15,0)),
                      Mux(EXE_reg_op(48),Cat(Fill(32,0.U),lsu.io.ls.out.bits.rdata(31,0)),
                      Mux(EXE_reg_op(50)|EXE_reg_op(55)|EXE_reg_op(57)|EXE_reg_op(58)|EXE_reg_op(59)|EXE_reg_op(61),alu_result,
                      alu.io.result))))))))))))
        
        //printf("%x %x %x\n",io.out.bits.gpr.val_w,alu_result,alu.io.result)

        io.out.bits.csr.val_w:=Mux(EXE_reg_op(63),src1,
                      Mux(EXE_reg_op(64),alu.io.result,
                      0.U))
        io.out.bits.pc_dnpc:=Mux(EXE_reg_op(65)|EXE_reg_op(66),io.csr.val_r,
                             Mux(EXE_reg_op(37),next_pc_sum&(~(1.U(64.W))),
                             next_pc_sum))
        io.out.bits.inst:=EXE_reg_inst
        io.out.bits.pc:=EXE_reg_pc
}
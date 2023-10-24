file://<WORKSPACE>/npc/playground/src/EXU.scala
### java.lang.IndexOutOfBoundsException: -1 is out of bounds (min 0, max 2)

occurred in the presentation compiler.

action parameters:
offset: 7533
uri: file://<WORKSPACE>/npc/playground/src/EXU.scala
text:
```scala
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
        val mul_sel=Input(UInt(1.W))
        val flush = Input(UInt(1.W))
    })
        //flush for two cycles
        val EXE_reg_flush=RegInit(0.U(1.W))
        EXE_reg_flush:=io.flush
        val flush = Wire(UInt(1.W))
        flush := EXE_reg_flush | io.flush

        val EXE_reg_pc=dontTouch(Reg(UInt(32.W)))
        val EXE_reg_inst=dontTouch(Reg(UInt(32.W)))
        val EXE_reg_rs1=Reg(UInt(5.W))
        val EXE_reg_rs2=Reg(UInt(5.W))
        val EXE_reg_rd=Reg(UInt(5.W))
        val EXE_reg_imm=Reg(UInt(64.W))
        val EXE_reg_op=Reg(UInt(80.W))
        val EXE_reg_typ=Reg(UInt(6.W))
        val EXE_reg_valid=Reg(UInt(1.W))
        val EXE_reg_isJump=Reg(UInt(1.W))
        val EXE_reg_clearidx=Reg(UInt(5.W))


        when(flush.asBool|reset.asBool){
            EXE_reg_pc:=0.U
            EXE_reg_inst:=0.U
            EXE_reg_rs1:=0.U
            EXE_reg_rs2:=0.U
            EXE_reg_rd:=0.U
            EXE_reg_imm:=0.U
            EXE_reg_op:=0.U
            EXE_reg_typ:=0.U
            EXE_reg_valid:=0.U
            EXE_reg_isJump:=0.U
            EXE_reg_clearidx:=0.U
        }.elsewhen(io.in.fire){
            EXE_reg_pc:=io.in.bits.pc
            EXE_reg_inst:=io.in.bits.inst
            EXE_reg_rs1:=io.in.bits.rs1
            EXE_reg_rs2:=io.in.bits.rs2
            EXE_reg_rd:=io.in.bits.rd
            EXE_reg_imm:=io.in.bits.imm
            EXE_reg_op:=io.in.bits.op
            EXE_reg_typ:=io.in.bits.typ
            EXE_reg_valid:=1.U
            EXE_reg_isJump:=io.in.bits.isJump
            EXE_reg_clearidx:=io.in.bits.clearidx
        }


        io.out.bits.isJump:=EXE_reg_isJump
        io.out.bits.clearidx:=EXE_reg_clearidx

        val lsu = Module(new LSU)

        val op_r=Wire(UInt(1.W))
        val op_w=Wire(UInt(1.W))
        val op_mul=Wire(UInt(1.W))
        val op_div=Wire(UInt(1.W))
        val op_wait=Wire(UInt(1.W))
        val op_rw=Wire(UInt(1.W))
        val op_alu=Wire(UInt(1.W))
        op_r:=EXE_reg_op(38) |EXE_reg_op(39) |EXE_reg_op(40) |EXE_reg_op(41) |EXE_reg_op(46) |EXE_reg_op(47) |EXE_reg_op(48)
        op_w:=EXE_reg_op(42) |EXE_reg_op(43) |EXE_reg_op(44) |EXE_reg_op(45) 
        op_mul:=EXE_reg_op(50)|EXE_reg_op(51)|EXE_reg_op(52)|EXE_reg_op(53)|EXE_reg_op(54)
        op_div:=EXE_reg_op(55)|EXE_reg_op(56)|EXE_reg_op(57)|EXE_reg_op(58)|EXE_reg_op(59)|EXE_reg_op(60)|EXE_reg_op(61)|EXE_reg_op(62)
        op_wait:=op_r|op_w|op_mul|op_div
        op_rw:=io.in.bits.op(38) |io.in.bits.op(39) |io.in.bits.op(40) |io.in.bits.op(41) |io.in.bits.op(46) |io.in.bits.op(47) |io.in.bits.op(48)|io.in.bits.op(42) |io.in.bits.op(43) |io.in.bits.op(44) |io.in.bits.op(45) 
        op_alu:=io.in.bits.op(50)|io.in.bits.op(51)|io.in.bits.op(52)|io.in.bits.op(53)|io.in.bits.op(54)|io.in.bits.op(55)|io.in.bits.op(56)|io.in.bits.op(57)|io.in.bits.op(58)|io.in.bits.op(59)|io.in.bits.op(60)|io.in.bits.op(61)|io.in.bits.op(62)

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
        val alu_valid =RegInit(0.U(1.W))
        val s_idle :: s_wait :: s_wait_next :: Nil =Enum(3)
        val state = RegInit(s_idle)


        lsu_finish := Mux(flush.asBool,1.U,
                      Mux(io.in.fire & op_rw.asBool,0.U,
                      Mux(lsu.io.ls.out.fire | ((~op_r) & (~op_w)).asBool,1.U,lsu_finish)))
        alu_finish := Mux(flush.asBool,1.U,
                      Mux(io.in.fire & op_alu.asBool,0.U,
                      Mux((alu.io.validout | ((~op_mul) & (~op_div))).asBool,1.U,alu_finish)))
        alu_valid  := Mux(flush.asBool,0.U,
                      Mux(io.in.fire & op_alu.asBool,1.U,
                      Mux(!alu.io.busy,0.U,alu_valid)))
        //printf("%x %x %x\n",lsu_finish,state,lsu.io.ls.out.fire)


        state:=MuxLookup(state,s_idle,List(
            s_idle      -> Mux(flush.asBool,s_idle,Mux(io.in.fire,s_wait_next,s_idle)),
            s_wait_next -> Mux(flush.asBool,s_idle,Mux(((~io.out.fire)|(~io.in.fire)) && ((!op_wait)|lsu.io.ls.out.fire|alu.io.validout.asBool),s_idle,s_wait_next))
        ))

        val lsu_rdata =RegEnable(lsu.io.ls.out.bits.rdata,0.U,lsu.io.ls.out.fire)
        val alu_res=RegEnable(alu.io.result,0.U,alu.io.validout.asBool)
        val alu_result=Wire(UInt(64.W))
        alu_result:=Mux(io.out.fire,alu.io.result,alu_res)

        io.in.ready:= io.out.ready & (lsu_finish|lsu.io.ls.out.fire) & (alu_finish|alu.io.validout)
        io.out.valid:=(state === s_wait_next) & (lsu_finish|lsu.io.ls.out.fire) & (alu_finish|alu.io.validout) & (~flush.asBool)

        //lsu
        lsu.io.flush:=flush
        lsu.io.en_r:=op_r
        lsu.io.en_w:=op_w
        lsu.io.ls.out.ready:=io.out.ready
        lsu.io.ls.in.valid:=(state === s_wait_next) &(~lsu_finish)
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
        io.csr.en_r:=   Mux(EXE_reg_op(63)|EXE_reg_op(64)|EXE_reg_op(65)|EXE_reg_op(66),1.U,0.U)
        io.csr.idx_r:=  Mux(EXE_reg_op(63)|EXE_reg_op(64),src2,
                        Mux(EXE_reg_op(65),"x305".U,
                        Mux(EXE_reg_op(66),"x341".U,0.U)))



        //alu

        alu.io.mul_sel:=io.mul_sel
        alu.io.validin:=(state === s_wait_next) & (op_mul | op_div) &(~alu_finish)&alu_valid&EX@@
        alu.io.flush:=flush
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
                        Mux(EXE_reg_op(4)|EXE_reg_op(5),(1<<1).U,//sub
                        Mux(EXE_reg_op(6)|EXE_reg_op(7),(1<<2).U,//and
                        Mux(EXE_reg_op(8)|EXE_reg_op(9)|EXE_reg_op(64),(1<<3).U,//or
                        Mux(EXE_reg_op(10)|EXE_reg_op(11),(1<<4).U,//xor
                        Mux(EXE_reg_op(12)|EXE_reg_op(13)|EXE_reg_op(14)|EXE_reg_op(15),(1<<5).U,//sll
                        Mux(EXE_reg_op(20)|EXE_reg_op(21)|EXE_reg_op(22)|EXE_reg_op(23),(1<<6).U,//srl
                        Mux(EXE_reg_op(16)|EXE_reg_op(17)|EXE_reg_op(18)|EXE_reg_op(19),(1<<7).U,//sra
                        Mux(EXE_reg_op(26)|EXE_reg_op(28)|EXE_reg_op(32)|EXE_reg_op(34),(1<<8).U,//slt
                        Mux(EXE_reg_op(27)|EXE_reg_op(29)|EXE_reg_op(33)|EXE_reg_op(35),(1<<9).U,//sltu
                        Mux(EXE_reg_op(30)|EXE_reg_op(31),(1<<11).U,  //eql
                        Mux(EXE_reg_op(50)|EXE_reg_op(51)|EXE_reg_op(53),(1<<12).U,  //u*u
                        Mux(EXE_reg_op(52),(1<<13).U,            //s*s
                        Mux(EXE_reg_op(54),(1<<14).U,           //s*u
                        Mux(EXE_reg_op(55)|EXE_reg_op(56),(1<<15).U,             //s/s
                        Mux(EXE_reg_op(57)|EXE_reg_op(58),(1<<16).U,             //u/u
                        Mux(EXE_reg_op(59)|EXE_reg_op(60),(1<<17).U,            //s%s
                        Mux(EXE_reg_op(61)|EXE_reg_op(62),(1<<18).U,            //u%u
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
        io.out.bits.gpr.en_w:=Mux(flush.asBool,0.U,Mux((EXE_reg_typ(0)|EXE_reg_typ(1)|EXE_reg_typ(3)|EXE_reg_typ(5)),1.U,0.U))
        io.out.bits.gpr.idx_w:=dest

        io.out.bits.csr.en_w:=Mux((EXE_reg_op(63)),1.U,0.U)
        io.out.bits.csr.idx_w:=Mux(EXE_reg_op(63)|EXE_reg_op(64),src2,0.U)
        io.out.bits.csr.no:=Mux(flush.asBool,3.U,
                            Mux(EXE_reg_op(65),1.U,
                            Mux(EXE_reg_op(66),2.U,
                            0.U)))
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
```



#### Error stacktrace:

```
scala.collection.mutable.ArrayBuffer.apply(ArrayBuffer.scala:98)
	scala.reflect.internal.Types$Type.findMemberInternal$1(Types.scala:1030)
	scala.reflect.internal.Types$Type.findMember(Types.scala:1035)
	scala.reflect.internal.Types$Type.memberBasedOnName(Types.scala:661)
	scala.reflect.internal.Types$Type.member(Types.scala:625)
	scala.tools.nsc.typechecker.Contexts$SymbolLookup.apply(Contexts.scala:1401)
	scala.tools.nsc.typechecker.Contexts$Context.lookupSymbol(Contexts.scala:1283)
	scala.tools.nsc.typechecker.Typers$Typer.typedIdent$2(Typers.scala:5470)
	scala.tools.nsc.typechecker.Typers$Typer.typedIdentOrWildcard$1(Typers.scala:5522)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5983)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typed1$41(Typers.scala:5074)
	scala.tools.nsc.typechecker.Typers$Typer.silent(Typers.scala:698)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5076)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5104)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5985)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.computeType(Typers.scala:6130)
	scala.tools.nsc.typechecker.Namers$Namer.assignTypeToTree(Namers.scala:1127)
	scala.tools.nsc.typechecker.Namers$Namer.valDefSig(Namers.scala:1745)
	scala.tools.nsc.typechecker.Namers$Namer.memberSig(Namers.scala:1930)
	scala.tools.nsc.typechecker.Namers$Namer.typeSig(Namers.scala:1880)
	scala.tools.nsc.typechecker.Namers$Namer$ValTypeCompleter.completeImpl(Namers.scala:944)
	scala.tools.nsc.typechecker.Namers$Namer$AccessorTypeCompleter.completeImpl(Namers.scala:968)
	scala.tools.nsc.typechecker.Namers$LockingTypeCompleter.complete(Namers.scala:2078)
	scala.tools.nsc.typechecker.Namers$LockingTypeCompleter.complete$(Namers.scala:2076)
	scala.tools.nsc.typechecker.Namers$TypeCompleterBase.complete(Namers.scala:2071)
	scala.reflect.internal.Symbols$Symbol.completeInfo(Symbols.scala:1561)
	scala.reflect.internal.Symbols$Symbol.info(Symbols.scala:1533)
	scala.reflect.internal.Symbols$Symbol.tpe_$times(Symbols.scala:1516)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedBlock$2(Typers.scala:2543)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedBlock$2$adapted(Typers.scala:2541)
	scala.collection.immutable.List.exists(List.scala:395)
	scala.tools.nsc.typechecker.Typers$Typer.matchesVisibleMember$1(Typers.scala:2541)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedBlock$3(Typers.scala:2551)
	scala.reflect.internal.Scopes$Scope.foreach(Scopes.scala:455)
	scala.tools.nsc.typechecker.Typers$Typer.typedBlock(Typers.scala:2547)
	scala.tools.nsc.typechecker.Typers$Typer.typedOutsidePatternMode$1(Typers.scala:5960)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5995)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3428)
	scala.tools.nsc.typechecker.Typers$Typer.handlePolymorphicCall$1(Typers.scala:3827)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3846)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5095)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5104)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5985)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.computeType(Typers.scala:6130)
	scala.tools.nsc.typechecker.Namers$Namer.assignTypeToTree(Namers.scala:1127)
	scala.tools.nsc.typechecker.Namers$Namer.valDefSig(Namers.scala:1745)
	scala.tools.nsc.typechecker.Namers$Namer.memberSig(Namers.scala:1930)
	scala.tools.nsc.typechecker.Namers$Namer.typeSig(Namers.scala:1880)
	scala.tools.nsc.typechecker.Namers$Namer$ValTypeCompleter.completeImpl(Namers.scala:944)
	scala.tools.nsc.typechecker.Namers$LockingTypeCompleter.complete(Namers.scala:2078)
	scala.tools.nsc.typechecker.Namers$LockingTypeCompleter.complete$(Namers.scala:2076)
	scala.tools.nsc.typechecker.Namers$TypeCompleterBase.complete(Namers.scala:2071)
	scala.reflect.internal.Symbols$Symbol.completeInfo(Symbols.scala:1561)
	scala.reflect.internal.Symbols$Symbol.info(Symbols.scala:1533)
	scala.reflect.internal.Symbols$Symbol.initialize(Symbols.scala:1722)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5625)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.typedStat$1(Typers.scala:6119)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedStats$8(Typers.scala:3410)
	scala.tools.nsc.typechecker.Typers$Typer.typedStats(Typers.scala:3410)
	scala.tools.nsc.typechecker.Typers$Typer.typedTemplate(Typers.scala:2064)
	scala.tools.nsc.typechecker.Typers$Typer.typedClassDef(Typers.scala:1895)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5951)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.typedStat$1(Typers.scala:6119)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typedStats$8(Typers.scala:3410)
	scala.tools.nsc.typechecker.Typers$Typer.typedStats(Typers.scala:3410)
	scala.tools.nsc.typechecker.Typers$Typer.typedPackageDef$1(Typers.scala:5634)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5954)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Analyzer$typerFactory$TyperPhase.apply(Analyzer.scala:117)
	scala.tools.nsc.Global$GlobalPhase.applyPhase(Global.scala:459)
	scala.tools.nsc.interactive.Global$TyperRun.applyPhase(Global.scala:1349)
	scala.tools.nsc.interactive.Global$TyperRun.typeCheck(Global.scala:1342)
	scala.tools.nsc.interactive.Global.typeCheck(Global.scala:680)
	scala.meta.internal.pc.PcCollector.<init>(PcCollector.scala:29)
	scala.meta.internal.pc.PcDocumentHighlightProvider.<init>(PcDocumentHighlightProvider.scala:11)
	scala.meta.internal.pc.ScalaPresentationCompiler.$anonfun$documentHighlight$1(ScalaPresentationCompiler.scala:340)
```
#### Short summary: 

java.lang.IndexOutOfBoundsException: -1 is out of bounds (min 0, max 2)
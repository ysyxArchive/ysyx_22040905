file://<WORKSPACE>/npc/playground/src/alu/mul/base_mul.scala
### java.lang.IndexOutOfBoundsException: -1 is out of bounds (min 0, max 2)

occurred in the presentation compiler.

action parameters:
offset: 2101
uri: file://<WORKSPACE>/npc/playground/src/alu/mul/base_mul.scala
text:
```scala
import chisel3._
import chisel3.util._
import chisel3.stage._


class base_mul extends Module{
    val io=IO(new Bundle{
        val mul_valid = Input(UInt(1.W))         //为高表示输入的数据有效，如果没有新的乘法输入，在乘法被接受的下一个周期要置低
        val flush= Input(UInt(1.W))              //为高表示取消乘法
        val mulw= Input(UInt(1.W))               //为高表示是 32 位乘法
        val mul_signed= Input(UInt(2.W))         //2’b11（signed x signed）；2’b10（signed x unsigned）；2’b00（unsigned x unsigned）；
        val multiplicand= Input(UInt(64.W))      //被乘数，64 表示乘法器位数
        val multiplier= Input(UInt(64.W))        //乘数
        val mul_ready= Output(UInt(1.W))         //为高表示乘法器准备好，表示可以输入数据
        val out_valid= Output(UInt(1.W))         //为高表示乘法器输出的结果有效
        val result_hi= Output(UInt(64.W))        //高 64 bits 结果
        val result_lo= Output(UInt(64.W))        //低 64 bits 结果
    })

    val s_idle :: s_wait :: Nil = Enum(2) 
    val state = RegInit(s_idle)

    val s=Wire(UInt(130.W))
    val last = Wire(Bool())

    state := MuxLookup(state, s_idle ,List(
        s_idle -> Mux(io.flush.asBool,s_idle,Mux(io.mul_valid.asBool,s_wait,s_idle)),
        s_wait -> Mux(io.flush.asBool,s_idle,Mux(last.asBool,s_idle,s_wait))
    ))
    val mulbits = Wire(UInt((6.W)))
    val mulBits = RegInit(0.U(6.W))

    val next_valid = Wire(Bool())
    next_valid:= io.mul_valid.asBool & (state === s_idle)
    val running = Wire(Bool())
    running:= (state === s_wait) 

    mulbits := Mux(io.mulw.asBool, 31.U,63.U)
    mulBits := Mux(state === s_idle && io.mul_valid.asBool, mulbits, mulBits)

    val a = RegInit(0.U(129.W))
    val b = RegInit(0.U(129.W))
    val result = RegInit(0.U(130.W))
    val cnt = RegInit(0.U(8.W))

    a :=Mux(running, a << 1.U,
        Mux(!next_valid, a,
        Mux(io.mul_signed(1),Cat(io.multiplicand(mulbits),io.multiplicand),
        Cat(0.U,io.multiplicand))))

    b :=Mux(running, b >> 1.U,
        Mux(!next_valid, b,
        Mux(io.mul_signed(0),Cat(io.multiplicand(mulbits),io.multiplier),
        Cat(0.U,io.multiplier))))
    
    cnt:=   Mux(state =/= s_wait,0.U,
            Mux(b === 0.U,m@@,
            cnt + 1.U))

    last := (cnt === mulBits)
    s:=Mux(last && b(0),result - a,
        Mux(b(0),result+a,result))

    result:=Mux(state === s_wait,s,0.U)

    io.out_valid:= (cnt ===mulBits +& 1.U) 
    io.mul_ready:= (state === s_idle)
    io.result_lo:= result(63,0)
    io.result_hi:= result(127,64)

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
	scala.tools.nsc.typechecker.Typers$Typer.typedTypeApply$1(Typers.scala:6133)
	scala.tools.nsc.typechecker.Typers$Typer.typedOutsidePatternMode$1(Typers.scala:5962)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5995)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3428)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.typedArgWithFormal$1(PatternTypers.scala:136)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.$anonfun$typedArgsForFormals$4(PatternTypers.scala:150)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.typedArgsForFormals(PatternTypers.scala:150)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.typedArgsForFormals$(PatternTypers.scala:131)
	scala.tools.nsc.typechecker.Typers$Typer.typedArgsForFormals(Typers.scala:203)
	scala.tools.nsc.typechecker.Typers$Typer.handleMonomorphicCall$1(Typers.scala:3759)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3809)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5095)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5104)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5985)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Macros$DefMacroExpander.$anonfun$onSuccess$1(Macros.scala:631)
	scala.tools.nsc.typechecker.Macros$DefMacroExpander.typecheck$1(Macros.scala:631)
	scala.tools.nsc.typechecker.Macros$DefMacroExpander.onSuccess(Macros.scala:643)
	scala.tools.nsc.typechecker.Macros$MacroExpander.$anonfun$expand$1(Macros.scala:582)
	scala.tools.nsc.Global.withInfoLevel(Global.scala:233)
	scala.tools.nsc.typechecker.Macros$MacroExpander.expand(Macros.scala:569)
	scala.tools.nsc.typechecker.Macros$MacroExpander.apply(Macros.scala:556)
	scala.tools.nsc.typechecker.Macros.standardMacroExpand(Macros.scala:731)
	scala.tools.nsc.typechecker.Macros.standardMacroExpand$(Macros.scala:729)
	scala.meta.internal.pc.MetalsGlobal$MetalsInteractiveAnalyzer.standardMacroExpand(MetalsGlobal.scala:67)
	scala.tools.nsc.typechecker.AnalyzerPlugins$$anon$11.default(AnalyzerPlugins.scala:473)
	scala.tools.nsc.typechecker.AnalyzerPlugins$$anon$11.default(AnalyzerPlugins.scala:470)
	scala.tools.nsc.typechecker.AnalyzerPlugins.invoke(AnalyzerPlugins.scala:427)
	scala.tools.nsc.typechecker.AnalyzerPlugins.pluginsMacroExpand(AnalyzerPlugins.scala:470)
	scala.tools.nsc.typechecker.AnalyzerPlugins.pluginsMacroExpand$(AnalyzerPlugins.scala:470)
	scala.meta.internal.pc.MetalsGlobal$MetalsInteractiveAnalyzer.pluginsMacroExpand(MetalsGlobal.scala:98)
	scala.tools.nsc.typechecker.Macros.macroExpand(Macros.scala:720)
	scala.tools.nsc.typechecker.Macros.macroExpand$(Macros.scala:713)
	scala.meta.internal.pc.MetalsGlobal$MetalsInteractiveAnalyzer.macroExpand(MetalsGlobal.scala:67)
	scala.tools.nsc.typechecker.Typers$Typer.vanillaAdapt$1(Typers.scala:1209)
	scala.tools.nsc.typechecker.Typers$Typer.adapt(Typers.scala:1278)
	scala.tools.nsc.typechecker.Typers$Typer.adapt(Typers.scala:1251)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6056)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3428)
	scala.tools.nsc.typechecker.Typers$Typer.handlePolymorphicCall$1(Typers.scala:3827)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3846)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5095)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5104)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5985)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3428)
	scala.tools.nsc.typechecker.Typers$Typer.handlePolymorphicCall$1(Typers.scala:3827)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3846)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5095)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5104)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5985)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3428)
	scala.tools.nsc.typechecker.Typers$Typer.handlePolymorphicCall$1(Typers.scala:3827)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3846)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5095)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5104)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5985)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3428)
	scala.tools.nsc.typechecker.Typers$Typer.handlePolymorphicCall$1(Typers.scala:3827)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3846)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5095)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5104)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5985)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3428)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.typedArgWithFormal$1(PatternTypers.scala:134)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.$anonfun$typedArgsForFormals$4(PatternTypers.scala:150)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.typedArgsForFormals(PatternTypers.scala:150)
	scala.tools.nsc.typechecker.PatternTypers$PatternTyper.typedArgsForFormals$(PatternTypers.scala:131)
	scala.tools.nsc.typechecker.Typers$Typer.typedArgsForFormals(Typers.scala:203)
	scala.tools.nsc.typechecker.Typers$Typer.handleMonomorphicCall$1(Typers.scala:3759)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3809)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typed1$28(Typers.scala:5009)
	scala.tools.nsc.typechecker.Typers$Typer.silent(Typers.scala:698)
	scala.tools.nsc.typechecker.Typers$Typer.tryTypedApply$1(Typers.scala:5009)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5093)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5104)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5985)
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
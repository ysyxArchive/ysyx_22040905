file://<WORKSPACE>/npc/playground/src/cache/icache.scala
### java.lang.IndexOutOfBoundsException: -1 is out of bounds (min 0, max 2)

occurred in the presentation compiler.

action parameters:
offset: 5269
uri: file://<WORKSPACE>/npc/playground/src/cache/icache.scala
text:
```scala
import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.random

class ICache extends Module {
  val io = IO(new Bundle {
    val in = Flipped(new AXILite)
    val id = Input(UInt(1.W))
    val mem = (new AXI4)
    val ram = Flipped(new ICacheRAM_Bundle)
    val flush = Input(UInt(1.W))
    val hitrate = Output(UInt(64.W))
    //val uncache = Input(UInt(1.W))
  })
  //config
  val cacheCapacity: Int = 4*1024/64 //4KB
  val cacheAssociativity: Int = 2 //二路
  val cacheLineSize: Int  = 16    //16B
  val DEVICE_BASE :UInt = "xa0000000".U 

  //calculate
  val offset_width: Int = log2Ceil(cacheLineSize)
  val assassociativity_width: Int = log2Ceil(cacheAssociativity)
  val index_width: Int = log2Ceil(cacheCapacity/cacheAssociativity) - offset_width
  val tag_width: Int = 32 - log2Ceil(cacheCapacity/cacheAssociativity)            //21
  val line: Int = 1 << index_width

  val cache_data = io.ram.bits
  val cache_tag = RegInit(VecInit(Seq.fill(line)(0.U((tag_width * cacheAssociativity).W))))//SyncReadMem(line, UInt((tag_width * cacheAssociativity).W))
  val valid = RegInit(VecInit(Seq.fill(line)(VecInit(Seq.fill(cacheAssociativity)(0.U(1.W))))))
  val dirty = RegInit(VecInit(Seq.fill(line)(VecInit(Seq.fill(cacheAssociativity)(0.U(1.W))))))


  val s_idle :: s_lookup :: s_miss :: s_replace :: Nil = Enum(4)
  val state = RegInit(s_idle)
  val req = io.in.ar.fire

  val addr = RegInit(0.U(32.W))
  val uncache = RegInit(false.B)
  val tag = addr(31,offset_width + index_width)
  val offset = addr(offset_width - 1, 0) << 3
  val idx = addr(index_width + offset_width - 1, offset_width)

  val t0l:Int = tag_width - 1
  val t0r:Int = 0
  val t1l:Int = (tag_width << 1) - 1
  val t1r:Int = tag_width

  val hit = Mux(((cache_tag(idx)(t0l, t0r) === tag) && valid(idx)(0).asBool),0.U(2.W),
            Mux(((cache_tag(idx)(t1l, t1r) === tag) && valid(idx)(1).asBool),1.U(2.W), "b11".U))
  val hit_way =  hit(0)
  val miss = hit(1).asBool  || uncache
  val lfsr8 = Module(new LFSR_8)
  lfsr8.io.en := (state === s_miss)
  val way = RegEnable(lfsr8.io.out(assassociativity_width - 1,0),0.U,miss)

  val cnt = RegInit(0.U(1.W))

  state := MuxLookup(state,s_idle,List(
      s_idle   -> Mux(io.flush.asBool,s_idle,Mux(req, s_lookup, s_idle)),
      s_lookup -> Mux(io.flush.asBool,s_idle,Mux(miss,s_miss,
                  Mux(req, s_lookup, s_idle))),
      s_miss   -> Mux(io.flush.asBool,s_idle,Mux(io.mem.ar.fire,s_replace,s_miss)),
      s_replace-> Mux(io.flush.asBool,s_idle,Mux(io.mem.r.fire && io.mem.r.bits.last.asBool,
                  Mux(req,s_lookup,s_idle),s_replace))
    ))

  valid(idx)(way) := Mux(state === s_miss & (!uncache),1.U,valid(idx)(way))
  cache_tag(idx) := Mux(state === s_miss & (!uncache),Mux(way === 0.U, Cat(cache_tag(idx)(t1l, t1r), tag), Cat(tag, cache_tag(idx)(t0l, t0r))), cache_tag(idx))

  addr    := Mux(((state === s_idle) && req) || ((state === s_lookup) && req && (~miss)), io.in.ar.bits.addr,addr)
  uncache := Mux(((state === s_idle) && req) || ((state === s_lookup) && req && (~miss)), io.in.ar.bits.addr >= DEVICE_BASE,uncache)

  //addr(3) === 0 => cnt = 0 ,1 ;
  //addr(3) === 1 => cnt = 1 ,0 ;
  cnt := Mux(state === s_miss,addr(3),
         Mux(io.mem.r.fire,~cnt,cnt))

  io.ram.ready := 1.U
  //cache_data
  val en_w =(state === s_replace) & io.mem.r.fire
  cache_data.CEN := ~((state === s_idle) | ((state === s_lookup)& req)  | (state === s_replace))
  cache_data.WEN := ~en_w 
  cache_data.BWEN := Mux(en_w,(~(("xffffffffffffffff".U((cacheLineSize << 3).W)) << (cnt << 6.U))),~(0.U((cacheLineSize << 3).W)))
  cache_data.A := Mux(en_w,idx,io.in.ar.bits.addr(index_width + offset_width - 1, offset_width))
  cache_data.D := Mux(en_w,Cat(0.U(64.W),io.mem.r.bits.data) << (cnt << 6.U),0.U)
  cache_data.WAY := way

  val flag =RegInit(0.U(1.W))
  val rdata =RegInit(0.U(64.W))
  flag := Mux(state === s_idle,1.U,
          Mux((state === s_replace) && io.mem.r.fire,0.U,flag))
  rdata :=Mux((state === s_replace) && io.mem.r.fire && flag.asBool,io.mem.r.bits.data,rdata)
  //axi
  io.mem.ar.bits.addr := addr & ((~0.U(32.W)) << 3.U)
  io.mem.ar.valid := state === s_miss
  io.mem.ar.bits.len := Mux(uncache,0.U,1.U) 
  io.mem.ar.bits.size := 3.U
  io.mem.ar.bits.burst := "b10".U // WRAP
  io.mem.ar.bits.id := io.id

  io.mem.r.ready := 1.U

  io.mem.aw.bits.addr := 0.U
  io.mem.aw.bits.len := 1.U
  io.mem.aw.bits.size := 3.U // 2^3 === 8B
  io.mem.aw.valid := 0.U
  io.mem.aw.bits.id := io.id
  io.mem.aw.bits.burst := 0.U

  io.mem.w.bits.id := io.id
  io.mem.w.bits.data := 0.U
  io.mem.w.bits.strb := ~(0.U(8.W))
  io.mem.w.bits.last := 0.U
  io.mem.w.valid := 0.U
  io.mem.b.ready := 0.U

  io.in.r.bits.data :=  Mux((state === s_lookup) && (~miss),
                          Mux(hit_way,
                            (cache_data.Q1 >> offset)(63,0),
                            (cache_data.Q0 >> offset)(63,0)),
                          Mux((state === s_replace) && io.mem.r.fire && io.mem.r.bits.last.asBool,
                            Mux(uncache,
                              io.mem.r.bits.data,
                              rdata >> offset(offset_width + 1, 0)),
                            0.U))
  io.in.ar.ready := (state === s_idle) || (state === s_lookup) || (st@@)
  io.in.r.valid := (((state === s_lookup) && (~miss)) || (io.mem.r.fire && io.mem.r.bits.last.asBool))
  io.in.r.bits.resp := 0.U
  io.in.b.bits.resp := 0.U
  io.in.b.valid := 0.U
  io.in.aw.ready := 0.U
  io.in.w.ready := 0.U

  val hit_num=RegInit(0.U(32.W))
  val inst_num=RegInit(0.U(32.W))

  hit_num := Mux((state === s_lookup) && (~miss),hit_num + 1.U,hit_num)
  inst_num := Mux((io.in.ar.fire| io.in.aw.fire),inst_num + 1.U,inst_num)

  io.hitrate := Cat(inst_num, hit_num);
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
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.typedImplicit1(Implicits.scala:841)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.typedImplicit0(Implicits.scala:809)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.scala$tools$nsc$typechecker$Implicits$ImplicitSearch$$typedImplicit(Implicits.scala:628)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch$ImplicitComputation.rankImplicits(Implicits.scala:1207)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch$ImplicitComputation.findBest(Implicits.scala:1244)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.searchImplicit(Implicits.scala:1301)
	scala.tools.nsc.typechecker.Implicits$ImplicitSearch.bestImplicit(Implicits.scala:1695)
	scala.tools.nsc.typechecker.Implicits.inferImplicit1(Implicits.scala:112)
	scala.tools.nsc.typechecker.Implicits.inferImplicit(Implicits.scala:91)
	scala.tools.nsc.typechecker.Implicits.inferImplicit$(Implicits.scala:88)
	scala.meta.internal.pc.MetalsGlobal$MetalsInteractiveAnalyzer.inferImplicit(MetalsGlobal.scala:67)
	scala.tools.nsc.typechecker.Implicits.inferImplicitView(Implicits.scala:50)
	scala.tools.nsc.typechecker.Implicits.inferImplicitView$(Implicits.scala:49)
	scala.meta.internal.pc.MetalsGlobal$MetalsInteractiveAnalyzer.inferImplicitView(MetalsGlobal.scala:67)
	scala.tools.nsc.typechecker.Typers$Typer.inferView(Typers.scala:330)
	scala.tools.nsc.typechecker.Typers$Typer.adaptToMember(Typers.scala:1339)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$adaptToMemberWithArgs$6(Typers.scala:1387)
	scala.tools.nsc.typechecker.Typers$Typer.silent(Typers.scala:712)
	scala.tools.nsc.typechecker.Typers$Typer.adaptToMemberWithArgs(Typers.scala:1387)
	scala.tools.nsc.typechecker.Typers$Typer.typedSelect$1(Typers.scala:5265)
	scala.tools.nsc.typechecker.Typers$Typer.typedSelectOrSuperCall$1(Typers.scala:5411)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5986)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3428)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg0$1(Typers.scala:3536)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$doTypedApply$7(Typers.scala:3555)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$doTypedApply$6(Typers.scala:3534)
	scala.tools.nsc.typechecker.Contexts$Context.savingUndeterminedTypeParams(Contexts.scala:537)
	scala.tools.nsc.typechecker.Typers$Typer.handleOverloaded$1(Typers.scala:3531)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3583)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typed1$28(Typers.scala:5009)
	scala.tools.nsc.typechecker.Typers$Typer.silent(Typers.scala:712)
	scala.tools.nsc.typechecker.Typers$Typer.tryTypedApply$1(Typers.scala:5009)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5093)
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
	scala.tools.nsc.typechecker.Typers$Typer.typedArg0$1(Typers.scala:3536)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$doTypedApply$7(Typers.scala:3555)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$doTypedApply$6(Typers.scala:3534)
	scala.tools.nsc.typechecker.Contexts$Context.savingUndeterminedTypeParams(Contexts.scala:537)
	scala.tools.nsc.typechecker.Typers$Typer.handleOverloaded$1(Typers.scala:3531)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3583)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typed1$28(Typers.scala:5009)
	scala.tools.nsc.typechecker.Typers$Typer.silent(Typers.scala:712)
	scala.tools.nsc.typechecker.Typers$Typer.tryTypedApply$1(Typers.scala:5009)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5093)
	scala.tools.nsc.typechecker.Typers$Typer.typedApply$1(Typers.scala:5104)
	scala.tools.nsc.typechecker.Typers$Typer.typed1(Typers.scala:5985)
	scala.tools.nsc.typechecker.Typers$Typer.typed(Typers.scala:6041)
	scala.tools.nsc.typechecker.Typers$Typer.typedArg(Typers.scala:3428)
	scala.tools.nsc.typechecker.Typers$Typer.handlePolymorphicCall$1(Typers.scala:3827)
	scala.tools.nsc.typechecker.Typers$Typer.doTypedApply(Typers.scala:3846)
	scala.tools.nsc.typechecker.Typers$Typer.$anonfun$typed1$28(Typers.scala:5009)
	scala.tools.nsc.typechecker.Typers$Typer.silent(Typers.scala:698)
	scala.tools.nsc.typechecker.Typers$Typer.tryTypedApply$1(Typers.scala:5009)
	scala.tools.nsc.typechecker.Typers$Typer.normalTypedApply$1(Typers.scala:5093)
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
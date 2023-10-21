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
      s_replace-> Mux(io.flush.asBool,s_idle,Mux(io.mem.r.fire && io.mem.r.bits.last.asBool,s_idle,s_replace))
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
  io.in.ar.ready := (state === s_idle) || (state === s_lookup)
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


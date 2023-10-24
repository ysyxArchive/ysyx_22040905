import chisel3._
import chisel3.util._
import chisel3.stage._

class DCache extends Module {
  val io = IO(new Bundle {
    val in = Flipped(new AXILite)
    val id = Input(UInt(1.W))
    val mem = (new AXI4)
    val ram = Flipped(new ICacheRAM_Bundle)
    val flush = Input(UInt(1.W))
    val hitrate = Output(UInt(64.W))
    val uncache = Input(Bool())
  })
  //config
  val cacheCapacity: Int = 4*1024/32 //4KB
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
  val buf = RegInit(0.U(128.W))


  val s_idle :: s_lookup :: s_miss :: s_replace :: s_fire1 :: s_fire2 :: s_wait :: Nil = Enum(7)
  val state = RegInit(s_idle)
  val rstate = RegInit(s_idle)
  val wstate = RegInit(s_idle)
  val req = (io.in.ar.fire | io.in.aw.fire) 

  val addr = RegInit(0.U(32.W))  
  val wdata = RegInit(0.U(64.W))
  val wstrb = RegInit(0.U(8.W))
  val uncache = RegInit(false.B)
  val tag = addr(31,offset_width + index_width)
  val offset = addr(offset_width - 1, 0) << 3
  val idx = addr(index_width + offset_width - 1, offset_width)


  val t0l:Int = tag_width - 1
  val t0r:Int = 0
  val t1l:Int = (tag_width << 1) - 1
  val t1r:Int = tag_width

  val rmode = RegInit(0.U(1.W))
  val wmode = RegInit(0.U(1.W))
  rmode := Mux((state === s_idle) & io.in.ar.fire,1.U,Mux((state === s_idle), 0.U, rmode))
  wmode := Mux((state === s_idle) & io.in.aw.fire,1.U,Mux((state === s_idle), 0.U, wmode))


  val hit = Mux(((cache_tag(idx)(t0l, t0r) === tag) && valid(idx)(0).asBool),0.U(2.W),
            Mux(((cache_tag(idx)(t1l, t1r) === tag) && valid(idx)(1).asBool),1.U(2.W), "b11".U))
 
  val miss = (hit(1).asBool && (state === s_lookup))
  val lfsr8 = Module(new LFSR_8)
  lfsr8.io.en := miss
  val way = RegEnable(lfsr8.io.out(assassociativity_width - 1,0),0.U,miss)
  val hit_way =  Mux(hit(1).asBool,way(0),hit(0))

  val tag_way = Wire(UInt((tag_width).W))
  tag_way := Mux(way === 0.U, cache_tag(idx)(t0l, t0r), (cache_tag(idx)(t1l, t1r)))

  val cnt = RegInit(0.U(1.W))

  state := MuxLookup(state,s_idle,List(
      s_idle   -> Mux(io.flush.asBool,s_idle,Mux(req, s_lookup, s_idle)),
      s_lookup -> Mux(io.flush.asBool,s_idle,Mux(uncache,s_idle,Mux(miss,s_miss, s_idle))),
      s_miss   -> Mux(io.flush.asBool,s_idle,Mux((rstate === s_wait) & ((dirty(idx)(way) & (wstate === s_wait)) | (~dirty(idx)(way))).asBool,s_replace,s_miss)),
      s_replace-> s_idle
    ))

  rstate := MuxLookup(rstate,s_idle,List(
    s_idle  -> Mux(io.flush.asBool,s_idle,Mux(state === s_miss && io.mem.ar.fire,s_fire1,s_idle)),
    s_fire1  ->Mux(io.flush.asBool,s_idle,Mux(io.mem.r.fire,s_fire2,s_fire1)),
    s_fire2  ->Mux(io.flush.asBool,s_idle,Mux(io.mem.r.fire,s_wait,s_fire2)),
    s_wait  -> Mux(io.flush.asBool,s_idle,Mux(state =/= s_miss, s_idle ,s_wait))
  ))

  wstate := MuxLookup(wstate,s_idle,List(
    s_idle  -> Mux(io.flush.asBool,s_idle,Mux(state === s_miss && io.mem.aw.fire && io.mem.w.fire ,s_fire1,s_idle)),
    s_fire1  ->Mux(io.flush.asBool,s_idle,Mux(io.mem.w.fire,s_fire2,s_fire1)),
    s_fire2  ->Mux(io.flush.asBool,s_idle,Mux(io.mem.b.fire,s_wait,s_fire2)),
    s_wait  -> Mux(io.flush.asBool,s_idle,Mux(state =/= s_miss, s_idle ,s_wait))
  ))



  valid(idx)(hit_way) := Mux(state === s_replace & (!uncache),1.U,valid(idx)(hit_way))
  cache_tag(idx) := Mux((state === s_miss) & (!uncache),
                      Mux(way === 0.U, Cat(cache_tag(idx)(t1l, t1r), tag), Cat(tag, cache_tag(idx)(t0l, t0r))),
                      cache_tag(idx))
  dirty(idx)(hit_way) :=  Mux(((state === s_lookup && wmode === 1.U && (!miss))|(state === s_replace && wmode === 1.U))&&(!uncache),1.U,
                      Mux(state === s_replace, 0.U, dirty(idx)(hit_way)))

  addr := Mux(state === s_idle && io.in.ar.fire &&(!io.uncache),io.in.ar.bits.addr,
          Mux(state === s_idle && io.in.aw.fire &&(!io.uncache), io.in.aw.bits.addr, addr))

  uncache:= Mux(state === s_idle && req,io.uncache,uncache)

  wdata := Mux(state === s_idle && io.in.w.fire , io.in.w.bits.data, wdata)
  wstrb := Mux(state === s_idle && io.in.w.fire, io.in.w.bits.strb, wstrb)
  //addr(3) === 0 => cnt = 0 ,1 ;
  //addr(3) === 1 => cnt = 1 ,0 ;
  cnt := Mux(state === s_miss,addr(3),
         Mux(io.mem.r.fire || io.mem.w.fire,~cnt,cnt))

  io.ram.ready := 1.U
  
  val wstrb_map = Wire(UInt(128.W))
  wstrb_map := Mux(wstrb === "b1".U,Fill(8,1.U),
                Mux(wstrb === "b11".U,Fill(16,1.U),
                Mux(wstrb === "b1111".U,Fill(32,1.U),
                Mux(wstrb === "b11111111".U, Fill(64,1.U), 0.U)))) << offset

  val wdata_map = Wire(UInt(128.W))
  wdata_map := wdata << offset
  //cache_data
  val en_w =((state === s_replace) || (state === s_lookup && (wmode === 1.U) && (~miss)) ) && (~uncache) 
  cache_data.CEN := 0.U//~(((state === s_idle) | ((state === s_lookup) )  | (state === s_replace)) && (~uncache))
  cache_data.WEN := ~en_w 
  cache_data.BWEN := Mux((state === s_lookup && (wmode === 1.U)) && (~uncache), ~wstrb_map, (0.U(128.W)))
//  cache_data.BWEN := Mux(en_w,(~(("xffffffffffffffff".U((cacheLineSize << 3).W)) << (cnt << 6.U))),~(0.U((cacheLineSize << 3).W)))
  cache_data.A := Mux(state === s_idle,io.in.ar.bits.addr(index_width + offset_width - 1, offset_width),idx)
  cache_data.D := Mux((state === s_lookup && (wmode === 1.U)) && (~uncache) , wdata_map,
                  Mux(wmode === 1.U,(buf&(~wstrb_map))|(wdata_map&wstrb_map),buf))
//  cache_data.D := Mux(en_w,Cat(0.U(64.W),io.mem.r.bits.data) << (cnt << 6.U),0.U)
  cache_data.WAY := hit_way

  val rcnt = RegInit(0.U(1.W))
  rcnt := Mux(rstate === s_idle, 0.U, Mux(io.mem.r.fire, rcnt + 1.U, rcnt))

  buf := Mux((~io.mem.r.fire) || uncache || io.uncache,buf,
         Mux(rcnt === addr(3), Cat(buf(127, 64), io.mem.r.bits.data), Cat(io.mem.r.bits.data, buf(63, 0))))

  //val rdata =RegInit(0.U(64.W))
  //rdata :=Mux((state === s_fire1) && io.mem.r.fire,io.mem.r.bits.data,rdata)
  //axi
  io.mem.ar.bits.addr := Mux((io.uncache && io.in.ar.fire),io.in.ar.bits.addr,addr & ((~0.U(32.W)) << 3.U))
  io.mem.ar.valid :=  Mux(io.uncache&& io.in.ar.fire,1.U,(state === s_miss) && (rstate === s_idle))
  io.mem.ar.bits.len := Mux(io.uncache,0.U,1.U) 
  io.mem.ar.bits.size := 3.U
  io.mem.ar.bits.burst := "b10".U // WRAP
  io.mem.ar.bits.id := io.id

  io.mem.r.ready := 1.U

  //printf("%x %x %x\n",io.uncache,uncache,io.in.aw.bits.addr)
  io.mem.aw.bits.addr :=  Mux(io.uncache,io.in.aw.bits.addr,(tag_way << index_width | idx) << offset_width)
  io.mem.aw.bits.len := Mux(io.uncache,0.U,1.U)
  io.mem.aw.bits.size := 3.U // 2^3 === 8B
  io.mem.aw.valid := Mux((state === s_idle) &&io.uncache&& io.in.aw.fire,1.U,(state === s_miss) && (wstate === s_idle) && dirty(idx)(way).asBool)
  io.mem.aw.bits.id := io.id
  io.mem.aw.bits.burst := 0.U

  io.mem.w.bits.id := io.id
  io.mem.w.bits.data := Mux(io.uncache,io.in.w.bits.data,
                        Mux((wstate === s_fire1),Mux( way(0).asBool,cache_data.Q1(127, 64),cache_data.Q0(127, 64)),
                        Mux( way(0).asBool, cache_data.Q1(63,0),cache_data.Q0(63,0))))
  io.mem.w.bits.strb :=  Mux(io.uncache,io.in.w.bits.strb,~(0.U(8.W)))
  io.mem.w.bits.last :=  Mux(((io.uncache) && io.in.w.fire),1.U,(wstate === s_fire1))
  io.mem.w.valid := Mux(((state === s_idle) &&(io.uncache) && io.in.w.fire),1.U,(state === s_miss) && (wstate === s_idle || wstate === s_fire1) && dirty(idx)(way).asBool)
  io.mem.b.ready :=   1.U//(wstate === s_fire2)

  io.in.r.bits.data :=  Mux(uncache,io.mem.r.bits.data,
                        Mux((state === s_lookup) && (~miss),
                          Mux(hit_way,(cache_data.Q1 >> offset)(63,0),(cache_data.Q0 >> offset)(63,0)),
                          Mux((state === s_replace),buf >> offset,0.U)))
  io.in.ar.ready := (state === s_idle)
  io.in.r.valid := (((state === s_lookup) && (~miss)) || (state === s_replace)|| (io.mem.r.fire && uncache)) & rmode 
  io.in.r.bits.resp := 0.U
  io.in.b.bits.resp := 0.U
  io.in.b.valid := (((state === s_lookup) && (~miss)) || (state === s_replace) || (io.mem.b.fire && uncache)) & wmode
  io.in.aw.ready := (state === s_idle)
  io.in.w.ready := (state === s_idle)

  val hit_num=RegInit(0.U(32.W))
  val inst_num=RegInit(0.U(32.W))

  hit_num := Mux((state === s_lookup) && (~miss),hit_num + 1.U,hit_num)
  inst_num := Mux((io.in.ar.fire| io.in.aw.fire),inst_num + 1.U,inst_num)

  io.hitrate := Cat(inst_num, hit_num);
  //printf("%x %x %x %x\n",state,rmode,addr,hit(1))
}
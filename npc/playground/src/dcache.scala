//import chisel3._
//import chisel3.util._
//import chisel3.stage._
//
//class DCache extends Module {
//  val io = IO(new Bundle {
//    val in = Flipped(new AXILite)
//    val mem = (new AXI4)
//    val ram = Flipped(new CacheRAM_Bundle)
//    val hitrate = Output(UInt(64.W))
//  })
//  def exp2(x: Int) = 1 << x
//  val total_size_width: Int = 12
//  val assassociativity_width: Int = 1
//  val block_width: Int = 7
//  val offset_width = block_width - 3 // 4, 2^4 B
//  val idx_width = total_size_width - assassociativity_width - offset_width // 7
//  val tag_width = 32 - offset_width - idx_width // 21
//  val way = exp2(assassociativity_width) // 2
//  val line = exp2(idx_width) // 128
//  val line_size = exp2(block_width) // 128
//  val cache_data = io.ram.bits
//
//  val cache_tag = SyncReadMem(line, UInt((tag_width * way).W))
//  val valid = RegInit(VecInit(Seq.fill(line)(VecInit(Seq.fill(way)(0.U(1.W))))))
//  val dirty = RegInit(VecInit(Seq.fill(line)(VecInit(Seq.fill(way)(0.U(1.W))))))
//  val buf = RegInit(0.U(128.W))
//
//  val addr = RegInit(0.U(32.W))
//  val wdata = RegInit(0.U(128.W))
//  val wstrb = RegInit(0.U(128.W))
//  val offset = addr(offset_width - 1, 0) << 3
//  val idx = addr(idx_width + offset_width - 1, offset_width)
//  val tag = addr(31, offset_width + idx_width)
//
//  val hit_way = Wire(UInt(8.W))
//  val way2 = RegInit(0.U(8.W))
//
//  val s_idle :: s_delay :: s_tag :: s_hit :: s_miss :: s_reload :: s_wait_ready :: s_fire :: s_over :: s_wait :: Nil = Enum(10)
//  val state = RegInit(s_idle)
//  val state_r = RegInit(s_idle)
//  val state_w = RegInit(s_idle)
//
//  val idxh = idx << 1.U | hit_way
//  val idxw = idx << 1.U | way2
//  val t0l = tag_width - 1
//  val t0r = 0
//  val t1l = (tag_width << 1) - 1
//  val t1r = tag_width
//
//  val rmode = RegInit(0.U(1.W))
//  val wmode = RegInit(0.U(1.W))
//  rmode := Mux((state === s_idle) & io.in.ar.fire,1.U,Mux((state === s_idle), 0.U, rmode))
//  wmode := Mux((state === s_idle) & io.in.aw.fire,1.U,Mux((state === s_idle), 0.U, wmode))
//
//  val tag_read = Wire(UInt((tag_width * way).W))
//  tag_read := cache_tag.read(idx, state =/= s_reload)
//  hit_way :=  Mux(((tag_read(t0l, t0r) === tag) && valid(idx)(0).asBool),0.U,
//              Mux(((tag_read(t1l, t1r) === tag) && valid(idx)(1).asBool), 1.U, "xff".U))
//
//  val lfsr8 = Module(new LFSR_8)
//  way2 := Mux(state===s_idle,lfsr8.io.out(assassociativity_width - 1, 0),way2)
//
//  val tag_way = Wire(UInt((tag_width).W))
//  tag_way := Mux(way2 === 0.U, tag_read(t0l, t0r), tag_read(t1l, t1r))
//  // when(state === s_hit) {printf("hit:%x\n",tag)}
//  state := MuxLookup(state,s_idle,List(
//      s_idle -> Mux((io.in.aw.fire | io.in.ar.fire), s_delay, s_idle),
//      s_delay -> s_tag,
//      s_tag -> Mux(hit_way === "xff".U, s_miss, s_hit),
//      s_hit -> s_idle,
//      s_miss -> Mux(((state_r === s_wait) & ((dirty(idx)(way2) & (state_w === s_wait)) | (~dirty(idx)(way2)))).asBool,s_reload,s_miss),
//      s_reload -> s_idle
//    ))
//  addr := Mux(state === s_idle && io.in.ar.fire,io.in.ar.bits.addr,
//          Mux(state === s_idle && io.in.aw.fire, io.in.aw.bits.addr, addr))
//
//  wdata := Mux(state === s_delay && io.in.w.fire, io.in.w.bits.data, wdata)
//  wstrb := Mux(state === s_delay && io.in.w.fire, io.in.w.bits.strb, wstrb)
//
//  io.in.r.bits.data := Mux(state === s_hit,(cache_data.Q >> offset)(63, 0),
//                       Mux(state === s_reload, buf >> offset, 0.U))
//  //printf("%x\t%x\t%x\t%x\n",state,cache_data.Q,buf,io.in.r.bits.data)
//  io.in.ar.ready := (state === s_idle)
//  io.in.r.valid := ((state === s_hit) || (state === s_reload)) & rmode
//  io.in.r.bits.resp := 0.U
//  io.in.b.bits.resp := 0.U
//  io.in.b.valid := (state === s_reload || state === s_hit) & wmode
//  io.in.aw.ready := (state === s_idle)
//  io.in.w.ready := 1.U
//  
//
//  // miss
//
//  state_r := MuxLookup(
//    state_r,
//    s_idle,
//    List(
//      s_idle -> Mux(state === s_miss && io.mem.ar.fire, s_wait_ready, s_idle),
//      s_wait_ready -> Mux(io.mem.r.fire, s_fire, s_wait_ready),
//      s_fire -> Mux(io.mem.r.fire, s_wait, s_fire),
//      s_wait -> Mux(state =/= s_miss, s_idle, s_wait)
//    )
//  )
//  state_w := MuxLookup(
//    state_w,
//    s_idle,
//    List(
//      s_idle -> Mux(state === s_miss && io.mem.aw.fire, s_delay, s_idle),
//      s_delay -> s_wait_ready,
//      s_wait_ready -> Mux(io.mem.w.fire, s_fire, s_wait_ready),
//      s_fire -> Mux(io.mem.b.fire, s_wait, s_fire),
//      s_wait -> Mux(state =/= s_miss, s_idle, s_wait)
//    )
//  )
//  io.mem.aw.bits.addr := (tag_way << idx_width | idx) << offset_width
//  io.mem.aw.bits.len := 1.U
//  io.mem.aw.bits.size := 3.U // 2^3 === 8B
//  io.mem.aw.valid := (state_w === s_idle) && dirty(idx)(way2).asBool && (state === s_miss)
//
//  //printf("cache:%x\t%x\t%x\t%x\t",io.mem.aw.valid,io.mem.aw.ready,io.mem.w.valid,io.mem.w.ready)
//  //printf("%x\t%x\t%x\t%x\t%x\n", state, state_r, state_w,dirty(idx)(way2),io.mem.aw.ready)
//  //printf("dirty:%x\n",dirty(idx)(way2))
//  io.mem.aw.bits.burst := 0.U
//  io.mem.w.bits.data := Mux(state_w === s_fire,cache_data.Q(127, 64),cache_data.Q(63, 0))
//  io.mem.w.bits.strb := ~(0.U(8.W))
//  io.mem.w.bits.last := state_w === s_fire
//  io.mem.w.valid := (state_w === s_fire | state_w === s_wait_ready)
//  io.mem.b.ready := 1.U
//
//  io.mem.ar.bits.addr := addr & ((~0.U(32.W)) << 3.U)
//  io.mem.ar.valid := state_r === s_idle && state === s_miss
//  io.mem.ar.bits.len := 1.U
//  io.mem.ar.bits.size := 3.U
//  io.mem.ar.bits.burst := "b10".U // WRAP
//  io.mem.r.ready := 1.U
//
//  val rcnt = RegInit(0.U(1.W))
//  rcnt := Mux(state_r === s_idle, 0.U, Mux(io.mem.r.fire, rcnt + 1.U, rcnt))
//
//  val cdata = Wire(UInt(64.W))
//  cdata := io.mem.r.bits.data // Mux(rcnt === 0.U && wmode === 1.U,(io.mem.r.bits.data&(~wstrb))|(wdata & wstrb),io.mem.r.bits.data)
//  buf := Mux(
//    ~io.mem.r.fire,
//    buf,
//    Mux(rcnt === addr(3), Cat(buf(127, 64), cdata), Cat(cdata, buf(63, 0)))
//  )
//
//  // reload
//  val taggg = RegInit(0.U((tag_width * way).W))
//  taggg := tag_read
//  val tagg =Mux(way2 === 0.U, Cat(taggg(t1l, t1r), tag), Cat(tag, taggg(t0l, t0r)))
//  when(state === s_reload) { cache_tag.write(idx, tagg) }
//  valid(idx)(way2) := Mux(state === s_reload, 1.U, valid(idx)(way2))
//
//  val d_way = Wire(UInt(8.W))
//  d_way :=  Mux(state === s_hit && wmode === 1.U,hit_way,
//            Mux(state === s_reload, way2, 0.U))
//  dirty(idx)(d_way) :=  Mux(state === s_hit && wmode === 1.U,1.U,
//                        Mux(state === s_reload, 0.U, dirty(idx)(d_way)))
//  io.ram.ready := 1.U
//
//  val wstrb_map = Wire(UInt(128.W))
//  wstrb_map :=  Mux(wstrb === "b1".U,Fill(8,1.U),
//                Mux(wstrb === "b11".U,Fill(16,1.U),
//                Mux(wstrb === "b1111".U,Fill(32,1.U),
//                Mux(wstrb === "b11111111".U, Fill(64,1.U), 0.U)))) << offset
//
//  val wdata_map = Wire(UInt(128.W))
//  wdata_map := wdata << offset
//  //val waddr_map = Wire(UInt(32.W))
//  //waddr_map := addr & ~(Seq.fill(offset_width)(1.U))
//
//  cache_data.CEN := (state === s_tag) | (state_w =/= s_idle & state_w =/= s_wait) | (state === s_reload) | (state === s_hit && wmode === 1.U)
//  cache_data.WEN := (state === s_reload) | (state === s_hit && wmode === 1.U)
//  cache_data.BWEN := Mux(state === s_hit && wmode === 1.U, wstrb_map, ~(0.U(128.W)))
//  cache_data.A := Mux((state === s_tag) | (state === s_hit && wmode === 1.U),idxh,
//                  Mux((state_w =/= s_idle & state_w =/= s_wait) | (state === s_reload),idxw,
//                  0.U))
//  cache_data.D := Mux(state === s_hit && wmode === 1.U, wdata_map,
//                  Mux(wmode === 1.U,(buf&(~wstrb_map))|(wdata_map&wstrb_map),buf))
//  //printf("**%x\t%x\t%x\t%x\n",wstrb,io.in.w.bits.strb,io.in.w.fire,io.in.aw.fire)
//  //when(wmode === 1.U && state === s_hit){printf("hit\n");}  
//  //when(state_w === s_fire){printf("dirty\n");}
//  //when(cache_data.CEN === 1.U && cache_data.WEN === 1.U) {
//  //printf("cache_write:addr=%x\tdata=%x\tmask=%x\tstate=\n",cache_data.A,cache_data.D&cache_data.BWEN,cache_data.BWEN)//,state)
//  //printf("buf=%x\twstrb=%x\twdata=%x\n",buf,wstrb_map,wdata_map)
//  //}.elsewhen(rmode === 1.U){
//  //printf("cache_read: addr=%x\tdata=%x\tstate=\n",cache_data.A,cache_data.Q)//,state)
//  //}
//
//  //record
//  val cnt=RegInit(0.U(32.W))
//  val hit=RegInit(0.U(32.W))
//  cnt:=Mux(state === s_delay,cnt+1.U,cnt);
//  hit:=Mux(state === s_hit,hit+1.U,hit);
//  io.hitrate:=Cat(cnt,hit);
//}
//
//
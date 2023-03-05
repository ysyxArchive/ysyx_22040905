import chisel3._
import chisel3.util._
import chisel3.stage._
import scala.util.Random

class Cache(val total_size_width: Int = 12, val assassociativity_width: Int = 1) extends Module{
  val io=IO(new Bundle{
    val lsu = Flipped(new AXILite)
    val mem = (new AXI4)
  })

  def exp2(x: Int) = 1 << x 

  val block_width: Int = 7 
  val offset_width = block_width
  val idx_width = total_size_width - assassociativity_width -offset_width
  val tag_width = 32 - total_size_width +assassociativity_width
  val way = exp2(assassociativity_width)
  val line = exp2(idx_width)
  val line_size = exp2(offset_width) 
  //val numSets = exp2(total_size_width - offset_width)
  
  val cache_data = SyncReadMem(line, Vec(way, UInt(line_size.W)))
  val cache_tag  = SyncReadMem(line, Vec(way, UInt(tag_width.W)))
  val valid = RegInit(VecInit(Seq.fill(line)(VecInit(Seq.fill(way)(0.U(1.W))))))
  val dirty = RegInit(VecInit(Seq.fill(line)(VecInit(Seq.fill(way)(0.U(1.W))))))

  val buf=RegInit(0.U(128.W))

  val addr = RegInit(0.U(32.W))
  val offset = addr(offset_width - 1,0)
  val idx = addr(idx_width + offset_width -1,offset_width)
  val tag = addr(31, offset_width + idx_width)


  val x = for(i <- 0 until way ) yield ((cache_tag.read(idx)(i) === tag) && valid(idx)(i).asBool)
  val y = for(i <- 0 until way ) yield i.U
  val hit_way: UInt = MuxCase("xff".U, x zip y)


  val way2 = Random.nextInt(16).U(assassociativity_width,0)

  val s_idle :: s_tag :: s_hit :: s_miss :: s_reload :: s_wait_ready :: s_fire :: s_over :: s_wait :: Nil = Enum(9)
  val state = RegInit(s_idle)
  val state_r = RegInit(s_idle)
  val state_w = RegInit(s_idle)

  state := MuxLookup(state, s_idle, List(
    s_idle   -> Mux(io.lsu.ar.fire, s_tag, s_idle),
    s_tag    -> Mux(hit_way === "xff".U, s_miss, s_hit),
    s_hit    -> s_idle,
    s_miss   -> Mux(((state_r === s_wait) & (( dirty(idx)(way2) & (state_w === s_wait)) | (~dirty(idx)(way2)))).asBool,s_reload,s_miss),
    s_reload -> s_idle
  ))
  addr :=Mux(io.lsu.ar.fire,io.lsu.ar.bits.addr,addr)

  io.lsu.r.bits.data:=Mux(io.lsu.ar.fire&& (hit_way =/= "xff".U),(cache_data.read(idx)(hit_way)>>offset)(63,0),//(offset+63.U,offset),
                      Mux(state === s_reload, (buf>>offset)(63,0),0.U))

  io.lsu.ar.ready:= (state === s_idle)
  io.lsu.r.valid:= (state === s_hit)
  io.lsu.r.bits.resp:=0.U
  io.lsu.b.bits.resp:=0.U
  io.lsu.b.valid:=0.U
  io.lsu.aw.ready:=0.U
  io.lsu.w.ready:=0.U

  //miss

  state_r := MuxLookup(state_r, s_idle, List(
    s_idle        -> Mux(state === s_miss && io.mem.ar.fire, s_wait_ready, s_idle),
    s_wait_ready  -> Mux(io.mem.r.fire,s_fire,s_wait_ready),
    s_fire        -> Mux(io.mem.r.fire,s_wait,s_fire),
    s_wait        -> Mux(state =/= s_miss, s_idle, s_wait)
  ))
  state_w := MuxLookup(state_w, s_idle, List(
    s_idle        -> Mux(state === s_miss && io.mem.aw.fire, s_wait_ready, s_idle),
    s_wait_ready  -> Mux(io.mem.w.fire,s_fire,s_wait_ready),
    s_fire        -> Mux(io.mem.w.fire,s_over,s_fire),
    s_over        -> Mux(io.mem.b.fire,s_wait,s_over),
    s_wait        -> Mux(state =/= s_miss, s_idle, s_wait)
  ))
  io.mem.aw.bits.addr:= (cache_tag.read(idx)(way2)<<idx_width | idx) << offset_width
  io.mem.aw.bits.len:= 1.U
  io.mem.aw.bits.size:= 6.U // 2^6 === 64b
  io.mem.aw.valid:= state_w === s_idle && dirty(idx)(way2).asBool 
  io.mem.aw.bits.burst:=0.U
  io.mem.w.bits.data:= Mux(state_w === s_over, cache_data.read(idx)(way2)(127,64), cache_data.read(idx)(way2)(63,0))
  io.mem.w.bits.strb:= ~(0.U)
  io.mem.w.bits.last:= state_w === s_over
  io.mem.w.valid:= state_w === s_fire |state_w === s_over
  io.mem.b.ready:= 1.U

  io.mem.ar.bits.addr:= addr
  io.mem.ar.valid:= state_r === s_idle
  io.mem.ar.bits.len:= 1.U
  io.mem.ar.bits.size:= 6.U
  io.mem.ar.bits.burst:= "b10".U //WRAP
  io.mem.r.ready:=1.U

  buf:= Mux(state_r === s_fire,Cat(buf(127,64),io.mem.r.bits.data),
        Mux(state_r === s_over,Cat(io.mem.r.bits.data,buf(63,0)),buf))
  //reload

  cache_data(idx)(way2):= Mux(state === s_reload, buf,cache_data(idx)(way2)) 
  cache_tag(idx)(way2):= Mux(state ===s_reload, tag, cache_tag (idx)(way2))
  valid(idx)(way2) := Mux(state === s_reload, 1.U, valid(idx)(way2))

}
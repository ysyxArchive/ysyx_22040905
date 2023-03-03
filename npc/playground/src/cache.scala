import chisel3._
import chisel3.util._
import chisel3.stage._

class Cache(val block_width: Int =128, val total_size_width: Int, val assassociativity_width: Int ) extends Bundle{
  val IO=(new Bundle{
    val lsu = (new AXILite)
    val mem = (new AXI4)
  })
  def exp2(x) : 1 << (x) 

  val offest_width = block_width
  val idx_width = total_size_width - assassociativity_width -offest_width
  val tag_width = 32 - total_size_width +assassociativity_width
  val way = exp2(assassociativity_width)
  val line = exp2(idx_width)
  val line_size = exp2(offest_width)

  //val numSets = exp2(total_size_width - offest_width)
  val cache_data = Mem(way,Vec(line,UInt(line_size.W)))
  val cache_tag = Reg(Vec(way,UInt(line.W)))
  val valid = RegInit(VecInit(Seq.fill(way)(0.U(line.W))))
  val dirty = RegInit(VecInit(Seq.fill(way)(0.U(line.W))))

  val s_idle :: s_tag :: s_hit :: s_miss :: s_reload :: s_wait_ready :: s_fire :: s_over :: Nil = Enum(4)
  val state = RegInit(s_idle)
  state := MuxLookup(state, s_idle, List(
    s_idle   -> Mux(io.lsu.ar.fire, s_tag, s_idle),
    s_tag    -> Mux(hit_way === ff.U, s_miss, s_hit),
    s_hit    -> s_idle,
    s_miss   -> Mux(state_r === wait && (( dirty(way2)(idx)&&state_w === wait)|(~dirty(way2)(idx))),s_reload,s_miss),
    s_reload -> s_idle
  ))
  val addr = Regenable(io.lsu.ar.bits.data,io.lsu.ar.fire)
  val offset = addr(offest_width - 1,0)
  val idx = addr(idx_width + offset_width -1,offset_width)
  val tag = addr(31, offest_width + idx_width)


  val x = for(i <- 0 until way ) yield cache_tag(i)(idx) === tag && valid(i)(idx)
  val y = for(i <- 0 until way ) yield i.U
  val hit_way := MuxCase(ff.U, x zip y)

  io.lsu.r.bits.data:=Mux(io.ar.fire & hit_way =/= ff.U,cache_data(hit_way)(idx)(offest,offest+63),
                      todo)

  io.lsu.ar.ready:= (state === s_idle)
  io.lsu.r.valid:= (state === s_hit)

  //miss
  val way2 = LFSR16()%way


  val state_r = RegInit(s_idle)
  val state_w = RegInit(s_idle)
  state_r := MuxLookup(state_r, s_idle, List(
    s_idle        -> Mux(state === miss && io.mem.io.ar.fire, s_wait_ready, s_idle),
    s_wait_ready  -> Mux(io.mem.io.r.fire,s_fire,s_wait_ready)
    s_fire        -> Mux(io.mem.io.r.fire,s_wait,s_fire)
    s_wait        -> Mux(state =/= miss, s_idle, s_wait)
  ))
  state_w := MuxLookup(state_w, s_idle, List(
    s_idle        -> Mux(state === miss && io.mem.io.aw.fire, s_wait_ready, s_idle),
    s_wait_ready  -> Mux(io.mem.io.w.fire,s_fire,s_wait_ready)
    s_fire        -> Mux(io.mem.io.w.fire,s_over,s_fire)
    s_over        -> Mux(io.mem.io.b.fire,s_wait,s_over)
    s_wait        -> Mux(state =/= miss, s_idle, s_wait)
  ))
  io.mem.io.aw.bits.data:= (cache_tag(way2)(idx)<<idx_width | idx) << offest_width
  io.mem.io.aw.bits.len:= 1.U
  io.mem.io.aw.bits.size:= 6.U // 2^6 === 64b
  io.mem.io.aw.valid:= state === s_miss && dirty(way2)(idx) 
  io.mem.io.w.bits.data:= Mux(counterw === 1.U, cache_data(way2)(idx)(127,64), cache_data(63,0))
  io.mem.io.w.bits.resp:= ~(0.U)
  io.mem.io.w.bits.last:= counterw ===  1.U
  io.mem.io.w.valid:= state === s_miss
  io.mem.io.b.ready:= 1.U

  io.mem.io.ar.bits.data:= addr >> block_width
  io.mem.io.ar.valid:= state === s_read
  io.mem.io.ar.bits.len:= 1.U
  io.mem.io.ar.bits.size:= 6.U
  io.mem.io.ar.burst:= "b10".U //WRAP
  





  


}
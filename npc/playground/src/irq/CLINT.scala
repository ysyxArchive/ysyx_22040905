import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class CLINT extends Module{
    val io=IO(new Bundle{
        val in = Flipped(new AXI4)
        val mtip = Output(Bool())
        val mtime = Output(UInt(64.W))
        val en_mtip = Input(UInt(1.W))
    })
    //map
    val BASE_ADDRESS = 0x20000000.U
    val BYTES_RESERVED = 0xBFFF.U
    val BOUND_ADDRESS = BASE_ADDRESS + BYTES_RESERVED

    val MSIP = BASE_ADDRESS
    val MTIMECMP = BASE_ADDRESS+0x4000.U
    val MTIME = BASE_ADDRESS+0xBFF8.U

    //Defines the number of clocks cyles required to increment the mtime register by 1.
    val TICK_COUNT = 0x0
    //val MSIP_SIZE  = 0x1
    
    //val msip = RegInit(0.U(32.W))
    val mtimecmp = RegInit(0.U(64.W))
    val mtime = RegInit(0.U(64.W))


    io.mtip := mtime >= mtimecmp
    io.mtime := mtime


    val cnt = RegInit(0.U(64.W))
    cnt := Mux(cnt === TICK_COUNT.U, 0.U, cnt + 1.U)

    //AXI4
    val rlast = Wire(UInt(1.W))
    val wlast = Wire(UInt(1.W))
    val s_idle :: s_wait_ready  :: Nil = Enum(2)
    val rstate = RegInit(s_idle)
    wlast := io.in.w.bits.last
    rstate := MuxLookup(rstate, s_idle, List(
      s_idle        -> Mux(io.in.ar.fire, s_wait_ready, s_idle),
      s_wait_ready  -> Mux(rlast.asBool & (~io.in.ar.fire), s_idle, s_wait_ready),
    ))
    val wstate = RegInit(s_idle)
    wstate := MuxLookup(wstate, s_idle, List(
      s_idle        -> Mux(io.in.w.fire&wlast.asBool, s_wait_ready, s_idle),
      s_wait_ready  -> Mux(io.in.b.fire, s_idle, s_wait_ready),
    ))

    //read
    val rid=RegInit(0.U(4.W))
    val raddr=RegInit(0.U(32.W))
    val rlen=RegInit(0.U(8.W))
    val rsize=RegInit(0.U(3.W))
    val rburst=RegInit(0.U(2.W))
    val lower_bound_addr=RegInit(0.U(32.W))
    val rcnt = RegInit(0.U(8.W))
    val beatcnt = RegInit(0.U(8.W))

    rid := Mux(io.in.ar.fire,io.in.ar.bits.id,rid)
    lower_bound_addr:=Mux(io.in.ar.fire,io.in.ar.bits.addr & (((~io.in.ar.bits.len.asTypeOf(UInt(32.W))) << io.in.ar.bits.size )),lower_bound_addr)
    //printf("%x\n",raddr)
    raddr := Mux(io.in.ar.fire ,io.in.ar.bits.addr,
             Mux(rlast.asBool,0.U,
             Mux(io.in.r.fire & (beatcnt === 255.U | beatcnt === rlen),lower_bound_addr,
             Mux(io.in.r.fire ,raddr + (1.U(32.W)<< rsize),raddr))))
    rlen := Mux(io.in.ar.fire,io.in.ar.bits.len,rlen)
    rsize := Mux(io.in.ar.fire,io.in.ar.bits.size ,rsize )
    rburst:= Mux(io.in.ar.fire,io.in.ar.bits.burst,rburst)
    rcnt:=Mux(rcnt === 255.U|| rlast.asBool || io.in.ar.fire,0.U,
          Mux(io.in.r.fire,rcnt + 1.U,rcnt))
    beatcnt:=Mux(io.in.ar.fire,(io.in.ar.bits.addr >> io.in.ar.bits.size) & io.in.ar.bits.len,
             Mux(beatcnt === 255.U | beatcnt === rlen,0.U,
             Mux(rstate =/= s_idle,beatcnt+1.U,0.U)))
    //printf("%x\t%x\t%x\t%x\n",io.in.ar.fire,beatcnt,raddr,(io.in.ar.bits.addr >> io.in.ar.bits.size) & io.in.ar.bits.len)
    rlast:=(rcnt === rlen && io.in.r.fire)
    io.in.r.bits.last := rlast


    //printf("%x\t%x\t%x\t%x\t%x\t%x\t%x\t%x\t%x\n",raddr,rcnt,io.in.ar.fire,io.in.ar.bits.addr,rstate,beatcnt,io.in.r.fire,raddr + (1.U(32.W)<< rsize),lower_bound_addr) 
    //write
    val wid=RegInit(0.U(4.W))
    val waddr = RegInit(0.U(32.W))
    val wlen=RegInit(0.U(8.W))
    val wcnt = RegInit(0.U(8.W))
    val wsize = RegInit(0.U(3.W))

    wid := Mux(io.in.aw.fire,io.in.aw.bits.id,0.U)
    wlen:=Mux(io.in.aw.fire,io.in.aw.bits.len,wlen)
    wsize:=Mux(io.in.aw.fire,io.in.aw.bits.size,wsize)
    waddr:=Mux(wlast.asBool,0.U,
           Mux(io.in.aw.fire && io.in.w.fire && wstate === s_idle,io.in.aw.bits.addr +(1.U(32.W)<<io.in.aw.bits.size),
           Mux(io.in.w.fire,waddr +(1.U(32.W)<<wsize),waddr)))
    wcnt:=Mux(wcnt === 255.U|| wlast.asBool || io.in.aw.fire,0.U,
          Mux(io.in.w.fire,wcnt + 1.U,wcnt))


    io.in.ar.ready := (rstate === s_idle) | ((rlast.asBool)&(rstate =/= s_idle))
    io.in.r.valid  := (rstate =/= s_idle)

    io.in.aw.ready := (wstate === s_idle)
    io.in.w.ready  := (wstate === s_idle)
    io.in.r.bits.id := rid
    io.in.r.bits.resp := 0.U//OKAY
    io.in.b.bits.id := wid
    io.in.b.bits.resp := 0.U
    io.in.b.valid := (wstate === s_wait_ready)

    assert(((raddr <  lower_bound_addr + (rlen+1.U)*(1.U<<rsize )) && (raddr >= lower_bound_addr)) || (raddr === 0.U))
 
    //write reg
    val clint_waddr = Wire(UInt(32.W))
    clint_waddr := Mux(io.in.aw.fire,io.in.aw.bits.addr,waddr)
    mtimecmp := Mux(io.in.w.fire && (io.in.aw.bits.addr === MTIMECMP),io.in.w.bits.data & io.in.w.bits.strb,mtimecmp)
    mtime := Mux(io.in.w.fire && (io.in.aw.bits.addr === MTIME),io.in.w.bits.data & io.in.w.bits.strb,
             Mux(~io.en_mtip.asBool, 0.U,
             Mux(cnt === TICK_COUNT.U, mtime + 1.U,mtime)))

    //read reg
    io.in.r.bits.data :=   Mux(raddr === MTIMECMP,mtimecmp,
                        Mux(raddr === MTIME,mtime,
                        0.U))

    chisel3.assert((io.in.w.fire && ((io.in.aw.bits.addr === MTIMECMP) || (io.in.aw.bits.addr === MTIME))) || (!io.in.w.fire),"Error: clint_waddr=0x%x\n",io.in.aw.bits.addr)
}

import chisel3._
import chisel3.util._
import chisel3.stage._

class WBU extends Module{
    val io=IO(new Bundle{
        val in=Flipped(Decoupled(new WB))
        val gpr=Flipped(new GPR_w)
        val csr=Flipped(new CSR_w)
        val pc_dnpc=Output(UInt(64.W))
        val valid=Output(UInt(1.W))
        val isJump=Output(UInt(1.W))
        val sb=Flipped((new SB_WB))
    })
    val WB_reg_pc=dontTouch(RegEnable(io.in.bits.pc,io.in.fire))
    val WB_reg_inst=RegEnable(io.in.bits.inst,io.in.fire)
    val WB_reg_pc_dnpc=RegEnable(io.in.bits.pc_dnpc,"x80000000".U,io.in.fire & (io.in.bits.pc_dnpc=/=0x4.U))
    val WB_reg_gpr_en_w=RegEnable(io.in.bits.gpr.en_w,io.in.fire)
    val WB_reg_gpr_idx_w=RegEnable(io.in.bits.gpr.idx_w,io.in.fire)
    val WB_reg_gpr_val_w=RegEnable(io.in.bits.gpr.val_w,io.in.fire)
    val WB_reg_csr_en_w=RegEnable(io.in.bits.csr.en_w,io.in.fire)
    val WB_reg_csr_idx_w=RegEnable(io.in.bits.csr.idx_w,io.in.fire)
    val WB_reg_csr_val_w=RegEnable(io.in.bits.csr.val_w,io.in.fire)
    val WB_reg_csr_no=RegEnable(io.in.bits.csr.no,io.in.fire)
    val WB_reg_csr_epc=RegEnable(io.in.bits.csr.epc,io.in.fire)
    val WB_reg_valid=RegEnable(io.in.fire && (io.in.bits.pc =/= 0x0.U),0.U,true.B)

    val WB_reg_isJump=RegEnable(io.in.bits.isJump,0.U,io.in.fire)
    val WB_reg_clearidx=RegEnable(io.in.bits.clearidx,0.U(5.W),io.in.fire)

    val s_idle :: s_wait_ready :: Nil = Enum(2)
    val state = RegInit(s_idle)
    state := MuxLookup(state, s_idle, List(
      s_idle       -> Mux(io.in.fire, s_wait_ready, s_idle),
      s_wait_ready -> Mux(~io.in.fire,s_idle,s_wait_ready)
    ))
    io.isJump:=WB_reg_isJump & (state === s_wait_ready)

    io.in.ready:= 1.U
 
    io.gpr.en_w:=WB_reg_gpr_en_w & (state === s_wait_ready)
    io.gpr.idx_w:=WB_reg_gpr_idx_w
    io.gpr.val_w:=WB_reg_gpr_val_w 

    io.csr.en_w:=WB_reg_csr_en_w & (state ===s_wait_ready)
    io.csr.idx_w:=WB_reg_csr_idx_w
    io.csr.val_w:=WB_reg_csr_val_w
    io.csr.no:=Mux(state === s_wait_ready,WB_reg_csr_no,0.U)
    io.csr.epc:=WB_reg_csr_epc

    io.pc_dnpc:=WB_reg_pc_dnpc
    io.valid:=WB_reg_valid

    io.sb.clearidx:=Mux(state === s_wait_ready,WB_reg_clearidx,0.U)    
}


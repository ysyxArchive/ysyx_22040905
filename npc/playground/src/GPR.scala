import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class GPR_r extends Bundle{
    val idx_r1=Input(UInt(5.W))
    val idx_r2=Input(UInt(5.W))
    val en_r1=Input(UInt(1.W))
    val en_r2=Input(UInt(1.W))
    val val_r1=Output(UInt(64.W))
    val val_r2=Output(UInt(64.W))
}
class GPR_w extends Bundle{
    val idx_w=Input(UInt(5.W))
    val en_w=Input(UInt(1.W))
    val val_w=Input(UInt(64.W))
}
class GPRio extends Bundle{
    val r=(new GPR_r)
    val w=(new GPR_w)
}
class GPR extends Module{
    val io=IO(new GPRio)
    val gpr=RegInit(VecInit(Seq.fill(32)(0.U(64.W)))) 
    io.r.val_r1:=Mux(io.r.en_r1(0),gpr(io.r.idx_r1),0.U)
    io.r.val_r2:=Mux(io.r.en_r2(0),gpr(io.r.idx_r2),0.U)
    gpr(io.w.idx_w):=Mux(io.w.en_w(0),io.w.val_w,gpr(io.w.idx_w))
    gpr(0):=0.U  

    val p=Module(new print_gpr);
    p.io.rf:=gpr 
}
import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class GPR extends Module{
    val io=IO(new Bundle{
        val idx_r1=Input(UInt(5.W))
        val idx_r2=Input(UInt(5.W))
        val idx_w=Input(UInt(5.W))
        val en_w=Input(UInt(1.W))
        val en_r1=Input(UInt(1.W))
        val en_r2=Input(UInt(1.W))
        val val_w=Input(UInt(64.W))
        val val_r1=Output(UInt(64.W))
        val val_r2=Output(UInt(64.W))
    })
    val gpr=RegInit(VecInit(Seq.fill(32)(0.U(64.W)))) 
    io.val_r1:=Mux(io.en_r1(0),gpr(io.idx_r1),0.U)
    io.val_r2:=Mux(io.en_r2(0),gpr(io.idx_r2),0.U)
    gpr(io.idx_w):=Mux(io.en_w(0),io.val_w,gpr(io.idx_w))
    gpr(0):=0.U  

    val p=Module(new print_gpr);
    p.io.rf:=gpr 
}
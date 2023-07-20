import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class CSR_r extends Bundle{
    val idx_r=Input(UInt(12.W))
    val en_r=Input(UInt(1.W))
    val val_r=Output(UInt(64.W))
}
class CSR_w extends Bundle{
    val en_w=Input(UInt(1.W))
    val idx_w=Input(UInt(12.W))
    val val_w=Input(UInt(64.W))
    val no=Input(UInt(64.W))
    val epc=Input(UInt(64.W))
}
class CSRio extends Bundle{
    val r=(new CSR_r)
    val w=(new CSR_w)
}
class CSR extends Module{
    val io=IO(new CSRio)
    val csr=RegInit(VecInit(Seq("xa00001800".U(64.W),0.U(64.W),0.U(64.W),0.U(64.W))))
    val map_r=Wire(UInt(2.W))
    val map_w=Wire(UInt(2.W))

    map_r:=Mux((io.r.idx_r==="x300".U),0.U,          //mstatus
           Mux((io.r.idx_r==="x305".U),1.U,          //mtvec
           Mux((io.r.idx_r==="x341".U),2.U,          //mepc
           Mux((io.r.idx_r==="x342".U),3.U,          //mcause
           0.U))))

    map_w:=Mux((io.w.idx_w==="x300".U),0.U,          //mstatus
           Mux((io.w.idx_w==="x305".U),1.U,          //mtvec
           Mux((io.w.idx_w==="x341".U),2.U,          //mepc
           Mux((io.w.idx_w==="x342".U),3.U,          //mcause
           0.U))))

    csr(2):=Mux(io.w.no===1.U,io.w.epc,csr(2))
    csr(3):=Mux(io.w.no===1.U,"xb".U,csr(3))               
    io.r.val_r:=Mux(io.w.no===1.U,csr(1),                //return mtvec
                Mux(io.w.no===2.U,csr(2),                //return mepc
                Mux(io.r.en_r(0),csr(map_r),
                0.U)))
    csr(map_w):=Mux(io.w.en_w(0),io.w.val_w,csr(map_w))

    val p=Module(new print_csr);
    p.io.rf:=csr 
}
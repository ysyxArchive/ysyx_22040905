import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class CSR extends Module{
    val io=IO(new Bundle{
        val idx_w=Input(UInt(12.W))
        val idx_r=Input(UInt(12.W))
        val en_w=Input(UInt(1.W))
        val en_r=Input(UInt(1.W))
        val val_w=Input(UInt(64.W))
        val val_r=Output(UInt(64.W))
        val no=Input(UInt(64.W))
        val epc=Input(UInt(64.W))
    })
    val csr=RegInit(VecInit(Seq("xa00001800".U(64.W),0.U(64.W),0.U(64.W),0.U(64.W))))
    val map_r=Wire(UInt(2.W))
    val map_w=Wire(UInt(2.W))

    map_r:=Mux((io.idx_r==="x300".U),0.U,          //mstatus
           Mux((io.idx_r==="x305".U),1.U,          //mtvec
           Mux((io.idx_r==="x341".U),2.U,          //mepc
           Mux((io.idx_r==="x342".U),3.U,          //mcause
           0.U))))

    map_w:=Mux((io.idx_w==="x300".U),0.U,          //mstatus
           Mux((io.idx_w==="x305".U),1.U,          //mtvec
           Mux((io.idx_w==="x341".U),2.U,          //mepc
           Mux((io.idx_w==="x342".U),3.U,          //mcause
           0.U))))

    csr(2):=Mux(io.no===1.U,io.epc,csr(2))
    csr(3):=Mux(io.no===1.U,"xb".U,csr(3))               
    io.val_r:=Mux(io.no===1.U,csr(1),                //return mtvec
              Mux(io.no===2.U,csr(2),                //return mepc
              Mux(io.en_r(0),csr(map_r),
              0.U)))
    csr(map_w):=Mux(io.en_w(0),io.val_w,csr(map_w))

    val p=Module(new print_csr);
    p.io.rf:=csr 
}
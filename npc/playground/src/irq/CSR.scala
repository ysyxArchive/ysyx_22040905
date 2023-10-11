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
class CSR_clint extends Bundle{
    val mtip=Output(UInt(1.W))
    val mtime=Output(UInt(64.W))
}

class CSRio extends Bundle{
    val r=(new CSR_r)
    val w=(new CSR_w)
    val clint=Flipped(new CSR_clint)
    val irq=Output(UInt(1.W))
    val irq_pc=Input(UInt(32.W))
    val next_pc=Output(UInt(32.W))
    val en_mtip=Output(UInt(1.W))
}
class CSR extends Module{
    val io=IO(new CSRio)
    val csr=RegInit(VecInit(Seq("xa00001800".U(64.W),0.U(64.W),0.U(64.W),0.U(64.W),0.U(64.W),0.U(64.W))))

    val map_r=Wire(UInt(5.W))
    val map_w=Wire(UInt(5.W))

    val clint_mtip=RegInit(0.U(1.W))
    clint_mtip:=io.clint.mtip(0)

    val clint_irq = Wire(UInt(1.W))
    clint_irq :=  csr(0)(3)  & csr(4)(7)  & io.clint.mtip(0) & (~clint_mtip(0))
                //mstatus MIE  mie MTIP
    io.irq:=clint_irq
    io.next_pc:=csr(1)(31,0)

    io.en_mtip:=csr(0)(3)  & csr(4)(7)
    map_r:=Mux((io.r.idx_r==="x300".U),0.U,          //mstatus
           Mux((io.r.idx_r==="x305".U),1.U,          //mtvec
           Mux((io.r.idx_r==="x341".U),2.U,          //mepc
           Mux((io.r.idx_r==="x342".U),3.U,          //mcause
           Mux((io.r.idx_r==="x304".U),4.U,          //mie
           Mux((io.r.idx_r==="x344".U),5.U,          //mip
           0.U))))))

    map_w:=Mux((io.w.idx_w==="x300".U),0.U,          //mstatus
           Mux((io.w.idx_w==="x305".U),1.U,          //mtvec
           Mux((io.w.idx_w==="x341".U),2.U,          //mepc
           Mux((io.w.idx_w==="x342".U),3.U,          //mcause
           Mux((io.w.idx_w==="x304".U),4.U,          //mie
           Mux((io.w.idx_w==="x344".U),5.U,          //mip
           0.U))))))

    csr(0):=Mux((clint_irq.asBool)|(io.w.no===1.U),Cat(Cat(Cat(Cat(csr(0)(63,8),csr(0)(3)),csr(0)(6,4)),0.U(1.W)),csr(0)(2,0)), //• MPIE设为MIE的值，MIE设为0
            Mux(io.w.no===2.U,Cat(Cat(Cat(Cat(csr(0)(63,8),1.U(1.W)),csr(0)(6,4)),csr(0)(7)),csr(0)(2,0)), //MIE从MPIE中恢复，MPIE设置为1
            csr(0)))
    csr(2):=Mux((clint_irq.asBool),io.irq_pc,
            Mux((io.w.no===1.U),io.w.epc,csr(2)))
    csr(3):=Mux(clint_irq.asBool,"x8000000000000007".U,
            Mux(io.w.no===1.U,"xb".U,csr(3)))               
    io.r.val_r:=Mux(io.r.en_r(0),csr(map_r),0.U(64.W))
    csr(map_w):=Mux(io.w.en_w(0),io.w.val_w,csr(map_w))

    val p=Module(new print_csr);
    p.io.rf:=csr 


}
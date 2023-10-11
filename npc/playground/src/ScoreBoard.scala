import chisel3._
import chisel3.util._
import chisel3.stage._

class SB_ID extends Bundle{
    val lookidx1=Input(UInt(5.W))
    val lookidx2=Input(UInt(5.W))
    val setidx=Input(UInt(5.W))
    val isBusy=Output(UInt(1.W))
}

class SB_WB extends Bundle{
    val clearidx=Input(UInt(5.W))
}
class ScoreBoard extends Module{
    val io=IO(new Bundle{
        //RAW
        val ID=(new SB_ID)
        val WB=(new SB_WB)
        val flush=Input(UInt(1.W))
    })
    val busy=RegInit(0.U(32.W))

    def mask(idx: UInt) = (1.U(32.W) << idx)(31, 0)

    busy:=Mux(io.flush.asBool,0.U,Cat(((busy & ~(mask(io.WB.clearidx))) | (mask(io.ID.setidx)))(31, 1), 0.U(1.W))) 
    io.ID.isBusy:=busy(io.ID.lookidx1)|busy(io.ID.lookidx2)

}
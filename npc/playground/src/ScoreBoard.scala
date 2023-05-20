import chisel3._
import chisel3.util._
import chisel3.stage._

class ScoreBoard extends Module{
    val io=IO(new Bundle{
        //RAM
        val lookidx=Input(UInt(1.W))
        val setidx=Input(UInt(1.W))
        val clearidx=Input(UInt(1.W))
        val isBusy=Output(UInt(1.W))
        //JUMP
        //val setjump=Input(UInt(1.W))
        //val clearjump=Input(UInt(1.W))
        //val waitjump=Output(UInt(1.W))
    })
    val busy=RegInit(0.U(32.W))
    val jump=RegInit(0.U(1.W))

    def mask(idx: UInt) = (1.U(32.W) << idx)(31, 0)

    busy:=Cat(((busy & ~(mask(io.clearidx))) | (mask(io.setidx)))(31, 1), 0.U(1.W)) 
    io.isBusy:=busy(io.lookidx)

    //jump:=(jump & (~clearjump)) | setjump
    //io.waitjump:=jump


}
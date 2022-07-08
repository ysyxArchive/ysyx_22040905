import chisel3._
import chisel3.util._
import chisel3.stage._
class ps2_keyboard extends Module { 
    val io= IO(new Bundle{
        val clrn=Input(UInt(1.W))
        val ps2_clk=Input(UInt(1.W))
        val ps2_data=Input(UInt(1.W))
        val nextdata_n=Input(UInt(1.W))
        val data=Input(UInt(8.W))
        val ready=Output(Reg(UInt(1.W)))
        val overflow=Output(Reg(UInt(1.W)))
    })
    val buffer=Reg(UInt(10.W))
    val fifo=Reg(Vec(8,UInt(8.W)))
    val w_ptr=Reg(UInt(3.W))
    val r_ptr=Reg(UInt(3.W))
    val count=Reg(UInt(4.W))
    val ps2_clk_sync=Reg(UInt(3.W))

    ps2_clk_sync:=Cat(ps2_clk_sync(1,0),ps2_clk)
    val sampling=Bool()
    sampling:=ps2_clk_sync(2)&(~ps2_clk_sync(1))
    when(clrn===0.U){
        count:=0.U
        w_ptr:=0.U
        r_ptr:=0.U
        overflow:=0.U
        ready:=0.U
    }.elsewhen{
        when(ready===1.U){
            if(nextdata_n===0.U){
                r_ptr:=r_ptr+1.U
                if(w_ptr===(r_ptr+1.U)){
                    ready:=0.U
                }
            }
        }
        when(sampling===1.U){
            when(count===10.U){
                when((buffer(0)===0.U)&&(ps2_data)&&(^buffer(9,1))){
                    fifo(w_ptr):=buffer(8,1)
                    w_ptr:=w_ptr+1.U
                    ready:=1.U
                    overflow:=overflow|(r_ptr===(w_ptr+1.U))
                }
                count:=0.U
            }.elsewhen{
                buffer(count):=ps2_data
                count:=count+1.U
            }
        }
    }
    data:=fifo(r_ptr)
}

class LUT extends Module{
    val io=IO(new Bundle{
        val in=Input(UInt(8.W))
        val out=Output(UInt(8.W))
    })
    val table=Vec(256,UInt(256))
    // a-z
    table("h1C".U):=97.U
    table("h32".U):=98.U
    table("h21".U):=99.U
    table("h23".U):=100.U
    table("h24".U):=101.U
    table("h2B".U):=102.U
    table("h34".U):=103.U
    table("h33".U):=104.U
    table("h43".U):=105.U
    table("h3B".U):=106.U
    table("h42".U):=107.U
    table("h4B".U):=108.U
    table("h3A".U):=109.U
    table("h31".U):=110.U
    table("h44".U):=111.U
    table("h4D".U):=112.U
    table("h15".U):=113.U
    table("h2D".U):=114.U
    table("h1B".U):=115.U
    table("h2C".U):=116.U
    table("h3C".U):=117.U
    table("h2A".U):=118.U
    table("h1D".U):=119.U
    table("h22".U):=120.U
    table("h35".U):=121.U
    table("h1A".U):=122.U
    //0-9
    table("h45".U):=48.U
    table("h16".U):=49.U
    table("h1E".U):=50.U
    table("h26".U):=51.U
    table("h25".U):=52.U
    table("h2E".U):=53.U
    table("h36".U):=54.U
    table("h3D".U):=55.U
    table("h3E".U):=56.U
    table("h46".U):=57.U

    out:=table(in)
}




class seg extends Module{
    val io= IO(new Bundle{
        val in=Input(UInt(4.W))
        val out=Output(UInt(8.W))
    })
    io.out:="b11111111".U
    when(io.in===0.U){
        io.out:="b11000000".U   
    }.elsewhen(io.in===1.U){
        io.out:="b11111001".U
    }.elsewhen(io.in===2.U){
        io.out:="b10100100".U
    }.elsewhen(io.in===3.U){
        io.out:="b10110000".U
    }.elsewhen(io.in===4.U){
        io.out:="b10011001".U
    }.elsewhen(io.in===5.U){
        io.out:="b10010010".U
    }.elsewhen(io.in===6.U){
        io.out:="b10000010".U
    }.elsewhen(io.in===7.U){
        io.out:="b11111000".U
    }.elsewhen(io.in===8.U){
        io.out:="b10000000".U
    }.elsewhen(io.in===9.U){
        io.out:="b10010000".U
    }.elsewhen(io.in===10.U){
        io.out:="b10001000".U
    }.elsewhen(io.in===11.U){
        io.out:="b10000011".U
    }.elsewhen(io.in===12.U){
        io.out:="b11000110".U
    }.elsewhen(io.in===13.U){
        io.out:="b10100001".U
    }.elsewhen(io.in===14.U){
        io.out:="b10000110".U
    }.elsewhen(io.in===15.U){
        io.out:="b10001110".U
    }.otherwise{
        io.out:="b11111111".U
    }

}
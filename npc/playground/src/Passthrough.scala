import chisel3._
import chisel3.util._
import chisel3.stage._
class Passthrough extends Module{
    val io= IO(new Bundle{
        val rst=Input(UInt(1.W))
        val ps2_clk=Input(UInt(1.W))
        val ps2_data=Input(UInt(1.W))
        val bcd8seg=Output(Vec(8,UInt(8.W)))
    })
    val data=Reg(UInt(8.W))
    val ready=Reg(UInt(1.W))
    val overflow=Reg(UInt(1.W))
    val nextdata=Reg(UInt(1.W))
    val ps2=Module(new ps2_keyboard)
    ps2.io.clrn:=(~io.rst)
    ps2.io.ps2_clk:=io.ps2_clk
    ps2.io.ps2_data:=io.ps2_data
    ps2.io.nextdata_n:=nextdata
    data:=ps2.io.data
    ready:=ps2.io.ready
    overflow:=ps2.io.overflow

    val s0:UInt="b0001".U
    val s1:UInt="b0010".U
    val s2:UInt="b0100".U
    val s3:UInt="b1000".U

    val now=RegInit(1.U(4.W))
    val next=RegInit(1.U(4.W))
    now:=next
    when(now===s0){
        when(ready===1.U){
            next:=s1
        }.otherwise{
            next:=s0
        }
    }.elsewhen(now===s1){
        next:=s2
    }.elsewhen(now===s2){
        next:=s3
    }.elsewhen(now===s3){
        next:=s0
    }.otherwise{
        next:=s0
    }
    val ps2segdata=RegInit(0.U(24.W))
    when(now===s0){
        nextdata:=1.U
    }.elsewhen(now===s2||now===s3){
        nextdata:=0.U
    }.elsewhen(now===s1){
        ps2segdata:=Cat(ps2segdata(15,0),data(7,0))
    }.otherwise{
        nextdata:=1.U
    }
    val num=RegInit(0.U(7.W))
    val segen=RegInit(0.U(1.W))
    num:=10.U
    when((ps2segdata(15,8)==="hf0".U)&&ps2segdata(7,0)===ps2segdata(23,16)){
        segen:=0.U
        num:=num+1.U
    }.otherwise{
        segen:=1.U
    }
    val m0=Module(new seg)
    m0.io.en:=segen
    m0.io.in:=ps2segdata(3,0)
    io.bcd8seg(0):=m0.io.out
    val m1=Module(new seg)
    m1.io.en:=segen
    m1.io.in:=ps2segdata(7,4)
    io.bcd8seg(1):=m1.io.out

    val ascii=RegInit(0.U(8.W))
    val mm=Module(new ps2ascii)
    mm.io.in:=ps2segdata(7,0)
    ascii:=mm.io.out

    val m2=Module(new seg)
    m2.io.en:=segen
    m2.io.in:=ascii(3,0)
    io.bcd8seg(2):=m2.io.out
    val m3=Module(new seg)
    m3.io.en:=segen
    m3.io.in:=ascii(7,4)
    io.bcd8seg(3):=m3.io.out

    val m4=Module(new seg)
    m4.io.en:=0.U
    m4.io.in:=ps2segdata(3,0)
    io.bcd8seg(4):=m4.io.out
    val m5=Module(new seg)
    m5.io.en:=0.U
    m5.io.in:=ps2segdata(7,4)
    io.bcd8seg(5):=m5.io.out

    val m6=Module(new seg)
    m6.io.en:=1.U
    m6.io.in:=(num%10.U(7.W))(3,0)
    io.bcd8seg(6):=m6.io.out
    val m7=Module(new seg)
    m7.io.en:=1.U
    m7.io.in:=(num/10.U(7.W))(3,0)
    io.bcd8seg(7):=m7.io.out 
}

class ps2_keyboard extends Module { 
    val io= IO(new Bundle{
        val clrn=Input(UInt(1.W))
        val ps2_clk=Input(UInt(1.W))
        val ps2_data=Input(UInt(1.W))
        val nextdata_n=Input(UInt(1.W))
        val data=Output(UInt(8.W))
        val ready=Output(UInt(1.W))
        val overflow=Output(UInt(1.W))
    })
    val rea=Reg(UInt(1.W))
    io.data:=1.U
    io.ready:=0.U
    io.overflow:=0.U
    val ov=Reg(UInt(1.W))
    ov:=0.U
    io.ready:=rea
    io.overflow:=ov
    val buffer=Reg(Vec(10,UInt(1.W)))
    val fifo=Reg(Vec(8,UInt(8.W)))
    val w_ptr=Reg(UInt(3.W))
    val r_ptr=Reg(UInt(3.W))
    val count=Reg(UInt(4.W))
    val ps2_clk_sync=Reg(UInt(3.W))

    ps2_clk_sync:=Cat(ps2_clk_sync(1,0),io.ps2_clk)
    val sampling=Wire(UInt(1.W))
    sampling:=ps2_clk_sync(2)&(~ps2_clk_sync(1))
    when(io.clrn===0.U){
        count:=0.U
        w_ptr:=0.U
        r_ptr:=0.U
        ov:=0.U
        rea:=0.U
    }.otherwise{
        when(rea===1.U){
            when(io.nextdata_n===0.U){
                r_ptr:=r_ptr+1.U
                when(w_ptr===(r_ptr+1.U)){
                    rea:=0.U
                    io.ready:=rea
                }
            }
        }
        when(sampling===1.U){
            when(count===10.U){
                when((buffer(0)===0.U)&&(io.ps2_data===1.U)&&((buffer(9)^buffer(8)^buffer(7)^buffer(6)^buffer(5)^buffer(4)^buffer(3)^buffer(2)^buffer(1))===1.U)){
                    fifo(w_ptr):=Cat(buffer(8),buffer(7),buffer(6),buffer(5),buffer(4),buffer(3),buffer(2),buffer(1))
                    w_ptr:=w_ptr+1.U
                    rea:=1.U
                    ov:=ov|(r_ptr===(w_ptr+1.U))
                }
                count:=0.U
            }.otherwise{
                buffer(count):=io.ps2_data
                count:=count+1.U
            }
        }
    }
    io.data:=fifo(r_ptr)
}

class ps2ascii extends Module{
    val io=IO(new Bundle{
        val in=Input(UInt(8.W))
        val out=Output(UInt(8.W))
    })
    val table=Reg(Vec(256,UInt(256.W)))
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

    io.out:=table(io.in)
}




class seg extends Module{
    val io= IO(new Bundle{
        val en=Input(UInt(1.W))
        val in=Input(UInt(4.W))
        val out=Output(UInt(8.W))
    })
    io.out:="b11111111".U
    when(io.en===1.U){
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
        }   
    }.otherwise{
        io.out:="b11111111".U
    }

}
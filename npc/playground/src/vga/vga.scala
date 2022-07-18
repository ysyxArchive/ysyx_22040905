import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class vmem extends Module{
    val io=IO(new Bundle{
        val h_addr=Input(UInt(10.W))
        val v_addr=Input(UInt(9.W))
        val ascii=Input(UInt(8.W))
        val w_en=Input(UInt(1.W))
        val vga_data=Output(UInt(24.W))
    })
    val rdwrPort = RegInit(0.U(24.W))
    val ram=RegInit(VecInit(Seq.fill(2161)(0.U(8.W)))) 
    val memoryFile: String = "resource/vga_font.txt"
    val vga_mem = SyncReadMem(4096, UInt(12.W))
    if (memoryFile.trim().nonEmpty) {
        loadMemoryFromFileInline(vga_mem,memoryFile)
    }
    val index=RegInit(0.U(8.W))
    when(io.w_en===1.U){
        when(io.ascii===10.U){
            index:=(index+71.U)-(index+71.U)%71.U
        }.otherwise{
            ram(index):=io.ascii
            index:=index+1.U
        }
    }
    when(vga_mem((ram((io.v_addr>>4.U)*71.U+io.h_addr/9.U(10.W))<<4)+io.v_addr%16.U)(io.h_addr%9.U)===1.U){
        rdwrPort:=Fill(24,1.U)
    }.otherwise{
        rdwrPort:=Fill(24,0.U)
    }
    
    io.vga_data:= rdwrPort

}
class vga_ctrl extends Module{
    val io=IO(new Bundle{
        val vga_data=Input(UInt(24.W))
        val h_addr=Output(UInt(10.W))
        val v_addr=Output(UInt(10.W))
        val hsync=Output(UInt(1.W))
        val vsync=Output(UInt(1.W))
        val valid=Output(UInt(1.W))
        val vga_r=Output(UInt(8.W))
        val vga_g=Output(UInt(8.W))
        val vga_b=Output(UInt(8.W))
    })
    val h_frontporch:UInt=96.U
    val h_active:UInt=144.U
    val h_backporch:UInt=784.U
    val h_total:UInt=800.U

    val v_frontporch:UInt=2.U
    val v_active:UInt=35.U
    val v_backporch:UInt=515.U
    val v_total:UInt=525.U

    val x_cnt=RegInit(1.U(10.W))
    val y_cnt=RegInit(1.U(10.W))

    when(x_cnt===h_total){
        x_cnt:=1.U
    }.otherwise{
        x_cnt:=x_cnt+1.U
    }
    when((y_cnt===v_total)&&(x_cnt===h_total)){
        y_cnt:=1.U
    }.elsewhen(x_cnt===h_total){
        y_cnt:=y_cnt+1.U
    }
    io.hsync:=(x_cnt>h_frontporch).asUInt
    io.vsync:=(y_cnt>v_frontporch).asUInt
    val h_valid:Bool=((x_cnt>h_active)&(x_cnt<=h_backporch))
    val v_valid:Bool=((y_cnt>v_active)&(y_cnt<=v_backporch))
    io.valid:=(h_valid&v_valid).asUInt
    io.h_addr:=Mux(h_valid,x_cnt-145.U(10.W),"b0000000000".U)
    io.v_addr:=Mux(v_valid,y_cnt-36.U(10.W),"b0000000000".U)
    io.vga_r:=io.vga_data(23,16)
    io.vga_g:=io.vga_data(15,8)
    io.vga_b:=io.vga_data(7,0)
}

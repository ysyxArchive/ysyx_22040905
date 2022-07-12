import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class vga extends Module{
    val io=IO(new Bundle{
        val en=Input(UInt(1.W))
        val ready=Output(UInt(1.W))
        val ascii=Input(UInt(8.W))
        val VGA_HSYNC=Output(UInt(1.W))
        val VGA_VSYNC=Output(UInt(1.W))
        val VGA_BLANK_N=Output(UInt(1.W))
        val VGA_R=Output(UInt(8.W))
        val VGA_G=Output(UInt(8.W))
        val VGA_B=Output(UInt(8.W))
    })
    when(en===1.U){
    io.ready:=0.U
    val h_addr=Reg((UInt(10.W)))
    val v_addr=Reg((UInt(10.W)))
    val vga_data=Reg((UInt(24.W)))
    
    val v1=Module(new vga_ctrl)
    v1.io.vga_data:=vga_data
    h_addr:=v1.io.h_addr
    v_addr:=v1.io.v_addr
    io.VGA_HSYNC:=v1.io.hsync
    io.VGA_VSYNC:=v1.io.vsync
    io.VGA_BLANK_N:=v1.io.valid
    io.VGA_R:=v1.io.vga_r
    io.VGA_G:=v1.io.vga_g
    io.VGA_B:=v1.io.vga_b
    
    val vm=Module(new vmem)
    vm.io.ready:=io.ready
    vm.io.ascii:=io.ascii
    vm.io.h_addr:=h_addr
    vm.io.v_addr:=v_addr(8,0)
    vga_data:=vm.io.vga_data
    io.ready:=1.U
    }
}
class vmem extends Module{
    val io=IO(new Bundle{
        val ready=Input(UInt(1.W))
        val ascii=Input(UInt(8.W))
        val h_addr=Input(UInt(10.W))
        val v_addr=Input(UInt(9.W))
        val vga_data=Output(UInt(24.W))
    })
    val rdwrPort = RegInit(0.U(24.W))
    val ram=RegInit(VecInit(Seq.fill(16)(0.U(288.W)))) 
    val h=RegInit(0.U(10.W))
    val v=RegInit(0.U(9.W))
    val memoryFile: String = "resource/vga_font.txt"
    val vga_mem = SyncReadMem(4096, UInt(12.W))
    if (memoryFile.trim().nonEmpty) {
        loadMemoryFromFileInline(vga_mem,memoryFile)
    }
    when((h>=16.U)&&(v===288.U)){
        h:=1.U
    }.elsewhen(v===288.U){
        h:=h+16.U
    }
    when(v===288.U){
        v:=0.U
    }
    io.vga_data:=1.U         
    for (i <- 0 to 16){
        ram(h+i.asUInt):=ram(h+i.asUInt)^(Cat(Fill(278,0.U),vga_mem(16.U*io.ascii)(0),vga_mem(16.U*io.ascii)(1),vga_mem(16.U*io.ascii)(2),vga_mem(16.U*io.ascii)(3),vga_mem(16.U*io.ascii)(4),vga_mem(16.U*io.ascii)(5),vga_mem(16.U*io.ascii)(6),vga_mem(16.U*io.ascii)(7),vga_mem(16.U*io.ascii)(8))<<(278.U-v*9.U))
    }
    v:=v+9.U
    when(ram(io.h_addr)(io.v_addr)===1.U){
        rdwrPort:=Fill(24,0.U)
    }.otherwise{
        rdwrPort:=Fill(24,1.U)
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

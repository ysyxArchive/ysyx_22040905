import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class vga extends Module{
    val io=IO(new Bundle{
        val now=Input(UInt(2.W))
        val ascii=Input(UInt(8.W))
        val VGA_HSYNC=Output(UInt(1.W))
        val VGA_VSYNC=Output(UInt(1.W))
        val VGA_BLANK_N=Output(UInt(1.W))
        val VGA_R=Output(UInt(8.W))
        val VGA_G=Output(UInt(8.W))
        val VGA_B=Output(UInt(8.W))
    })
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
    vm.io.now:=io.now
    vm.io.ascii:=io.ascii
    vm.io.h_addr:=h_addr
    vm.io.v_addr:=v_addr(8,0)
    vga_data:=vm.io.vga_data
}
class vmem extends Module{
    val io=IO(new Bundle{
        val now=Input(UInt(2.W))
        val ascii=Input(UInt(8.W))
        val h_addr=Input(UInt(10.W))
        val v_addr=Input(UInt(9.W))
        val vga_data=Output(UInt(24.W))
    })
    val ram=RegInit(0.U(524287.W))
    val h=RegInit(0.U(10.W))
    val v=RegInit(0.U(9.W))
    val memoryFile: String = "resource/vga_font.txt"
    val vga_mem = SyncReadMem(4096, UInt(12.W))
    if (memoryFile.trim().nonEmpty) {
        loadMemoryFromFileInline(vga_mem,memoryFile)
    }
    when(io.now=/=0.U){
        ram(Cat(h,v+0.U)):=vga_mem(16.U*io.ascii)(0)
        ram(Cat(h,v+1.U)):=vga_mem(16.U*io.ascii)(1)
        ram(Cat(h,v+2.U)):=vga_mem(16.U*io.ascii)(2)
        ram(Cat(h,v+3.U)):=vga_mem(16.U*io.ascii)(3)
        ram(Cat(h,v+4.U)):=vga_mem(16.U*io.ascii)(4)
        ram(Cat(h,v+5.U)):=vga_mem(16.U*io.ascii)(5)
        ram(Cat(h,v+6.U)):=vga_mem(16.U*io.ascii)(6)
        ram(Cat(h,v+7.U)):=vga_mem(16.U*io.ascii)(7)
        ram(Cat(h,v+8.U)):=vga_mem(16.U*io.ascii)(8)
        
        ram(Cat(h+1.U,v+0.U)):=vga_mem(16.U*io.ascii+1)(0)
        ram(Cat(h+1.U,v+1.U)):=vga_mem(16.U*io.ascii+1)(1)
        ram(Cat(h+1.U,v+2.U)):=vga_mem(16.U*io.ascii+1)(2)
        ram(Cat(h+1.U,v+3.U)):=vga_mem(16.U*io.ascii+1)(3)
        ram(Cat(h+1.U,v+4.U)):=vga_mem(16.U*io.ascii+1)(4)
        ram(Cat(h+1.U,v+5.U)):=vga_mem(16.U*io.ascii+1)(5)
        ram(Cat(h+1.U,v+6.U)):=vga_mem(16.U*io.ascii+1)(6)
        ram(Cat(h+1.U,v+7.U)):=vga_mem(16.U*io.ascii+1)(7)
        ram(Cat(h+1.U,v+8.U)):=vga_mem(16.U*io.ascii+1)(8)
        

        ram(Cat(h+2.U,v+0.U)):=vga_mem(16.U*io.ascii+2)(0)
        ram(Cat(h+2.U,v+1.U)):=vga_mem(16.U*io.ascii+2)(1)
        ram(Cat(h+2.U,v+2.U)):=vga_mem(16.U*io.ascii+2)(2)
        ram(Cat(h+2.U,v+3.U)):=vga_mem(16.U*io.ascii+2)(3)
        ram(Cat(h+2.U,v+4.U)):=vga_mem(16.U*io.ascii+2)(4)
        ram(Cat(h+2.U,v+5.U)):=vga_mem(16.U*io.ascii+2)(5)
        ram(Cat(h+2.U,v+6.U)):=vga_mem(16.U*io.ascii+2)(6)
        ram(Cat(h+2.U,v+7.U)):=vga_mem(16.U*io.ascii+2)(7)
        ram(Cat(h+2.U,v+8.U)):=vga_mem(16.U*io.ascii+2)(8)
        

        ram(Cat(h+3.U,v+0.U)):=vga_mem(16.U*io.ascii+3)(0)
        ram(Cat(h+3.U,v+1.U)):=vga_mem(16.U*io.ascii+3)(1)
        ram(Cat(h+3.U,v+2.U)):=vga_mem(16.U*io.ascii+3)(2)
        ram(Cat(h+3.U,v+3.U)):=vga_mem(16.U*io.ascii+3)(3)
        ram(Cat(h+3.U,v+4.U)):=vga_mem(16.U*io.ascii+3)(4)
        ram(Cat(h+3.U,v+5.U)):=vga_mem(16.U*io.ascii+3)(5)
        ram(Cat(h+3.U,v+6.U)):=vga_mem(16.U*io.ascii+3)(6)
        ram(Cat(h+3.U,v+7.U)):=vga_mem(16.U*io.ascii+3)(7)
        ram(Cat(h+3.U,v+8.U)):=vga_mem(16.U*io.ascii+3)(8)
        

        ram(Cat(h+4.U,v+0.U)):=vga_mem(16.U*io.ascii+4)(0)
        ram(Cat(h+4.U,v+1.U)):=vga_mem(16.U*io.ascii+4)(1)
        ram(Cat(h+4.U,v+2.U)):=vga_mem(16.U*io.ascii+4)(2)
        ram(Cat(h+4.U,v+3.U)):=vga_mem(16.U*io.ascii+4)(3)
        ram(Cat(h+4.U,v+4.U)):=vga_mem(16.U*io.ascii+4)(4)
        ram(Cat(h+4.U,v+5.U)):=vga_mem(16.U*io.ascii+4)(5)
        ram(Cat(h+4.U,v+6.U)):=vga_mem(16.U*io.ascii+4)(6)
        ram(Cat(h+4.U,v+7.U)):=vga_mem(16.U*io.ascii+4)(7)
        ram(Cat(h+4.U,v+8.U)):=vga_mem(16.U*io.ascii+4)(8)
        

        ram(Cat(h+5.U,v+0.U)):=vga_mem(16.U*io.ascii+5)(0)
        ram(Cat(h+5.U,v+1.U)):=vga_mem(16.U*io.ascii+5)(1)
        ram(Cat(h+5.U,v+2.U)):=vga_mem(16.U*io.ascii+5)(2)
        ram(Cat(h+5.U,v+3.U)):=vga_mem(16.U*io.ascii+5)(3)
        ram(Cat(h+5.U,v+4.U)):=vga_mem(16.U*io.ascii+5)(4)
        ram(Cat(h+5.U,v+5.U)):=vga_mem(16.U*io.ascii+5)(5)
        ram(Cat(h+5.U,v+6.U)):=vga_mem(16.U*io.ascii+5)(6)
        ram(Cat(h+5.U,v+7.U)):=vga_mem(16.U*io.ascii+5)(7)
        ram(Cat(h+5.U,v+8.U)):=vga_mem(16.U*io.ascii+5)(8)
        

        ram(Cat(h+6.U,v+0.U)):=vga_mem(16.U*io.ascii+6)(0)
        ram(Cat(h+6.U,v+1.U)):=vga_mem(16.U*io.ascii+6)(1)
        ram(Cat(h+6.U,v+2.U)):=vga_mem(16.U*io.ascii+6)(2)
        ram(Cat(h+6.U,v+3.U)):=vga_mem(16.U*io.ascii+6)(3)
        ram(Cat(h+6.U,v+4.U)):=vga_mem(16.U*io.ascii+6)(4)
        ram(Cat(h+6.U,v+5.U)):=vga_mem(16.U*io.ascii+6)(5)
        ram(Cat(h+6.U,v+6.U)):=vga_mem(16.U*io.ascii+6)(6)
        ram(Cat(h+6.U,v+7.U)):=vga_mem(16.U*io.ascii+6)(7)
        ram(Cat(h+6.U,v+8.U)):=vga_mem(16.U*io.ascii+6)(8)
        

        ram(Cat(h+7.U,v+0.U)):=vga_mem(16.U*io.ascii+7)(0)
        ram(Cat(h+7.U,v+1.U)):=vga_mem(16.U*io.ascii+7)(1)
        ram(Cat(h+7.U,v+2.U)):=vga_mem(16.U*io.ascii+7)(2)
        ram(Cat(h+7.U,v+3.U)):=vga_mem(16.U*io.ascii+7)(3)
        ram(Cat(h+7.U,v+4.U)):=vga_mem(16.U*io.ascii+7)(4)
        ram(Cat(h+7.U,v+5.U)):=vga_mem(16.U*io.ascii+7)(5)
        ram(Cat(h+7.U,v+6.U)):=vga_mem(16.U*io.ascii+7)(6)
        ram(Cat(h+7.U,v+7.U)):=vga_mem(16.U*io.ascii+7)(7)
        ram(Cat(h+7.U,v+8.U)):=vga_mem(16.U*io.ascii+7)(8)
        

        ram(Cat(h+8.U,v+0.U)):=vga_mem(16.U*io.ascii+8)(0)
        ram(Cat(h+8.U,v+1.U)):=vga_mem(16.U*io.ascii+8)(1)
        ram(Cat(h+8.U,v+2.U)):=vga_mem(16.U*io.ascii+8)(2)
        ram(Cat(h+8.U,v+3.U)):=vga_mem(16.U*io.ascii+8)(3)
        ram(Cat(h+8.U,v+4.U)):=vga_mem(16.U*io.ascii+8)(4)
        ram(Cat(h+8.U,v+5.U)):=vga_mem(16.U*io.ascii+8)(5)
        ram(Cat(h+8.U,v+6.U)):=vga_mem(16.U*io.ascii+8)(6)
        ram(Cat(h+8.U,v+7.U)):=vga_mem(16.U*io.ascii+8)(7)
        ram(Cat(h+8.U,v+8.U)):=vga_mem(16.U*io.ascii+8)(8)
        

        ram(Cat(h+9.U,v+0.U)):=vga_mem(16.U*io.ascii+9)(0)
        ram(Cat(h+9.U,v+1.U)):=vga_mem(16.U*io.ascii+9)(1)
        ram(Cat(h+9.U,v+2.U)):=vga_mem(16.U*io.ascii+9)(2)
        ram(Cat(h+9.U,v+3.U)):=vga_mem(16.U*io.ascii+9)(3)
        ram(Cat(h+9.U,v+4.U)):=vga_mem(16.U*io.ascii+9)(4)
        ram(Cat(h+9.U,v+5.U)):=vga_mem(16.U*io.ascii+9)(5)
        ram(Cat(h+9.U,v+6.U)):=vga_mem(16.U*io.ascii+9)(6)
        ram(Cat(h+9.U,v+7.U)):=vga_mem(16.U*io.ascii+9)(7)
        ram(Cat(h+9.U,v+8.U)):=vga_mem(16.U*io.ascii+9)(8)
        

        ram(Cat(h+10.U,v+0.U)):=vga_mem(16.U*io.ascii+10)(0)
        ram(Cat(h+10.U,v+1.U)):=vga_mem(16.U*io.ascii+10)(1)
        ram(Cat(h+10.U,v+2.U)):=vga_mem(16.U*io.ascii+10)(2)
        ram(Cat(h+10.U,v+3.U)):=vga_mem(16.U*io.ascii+10)(3)
        ram(Cat(h+10.U,v+4.U)):=vga_mem(16.U*io.ascii+10)(4)
        ram(Cat(h+10.U,v+5.U)):=vga_mem(16.U*io.ascii+10)(5)
        ram(Cat(h+10.U,v+6.U)):=vga_mem(16.U*io.ascii+10)(6)
        ram(Cat(h+10.U,v+7.U)):=vga_mem(16.U*io.ascii+10)(7)
        ram(Cat(h+10.U,v+8.U)):=vga_mem(16.U*io.ascii+10)(8)
        

        ram(Cat(h+11.U,v+0.U)):=vga_mem(16.U*io.ascii+11)(0)
        ram(Cat(h+11.U,v+1.U)):=vga_mem(16.U*io.ascii+11)(1)
        ram(Cat(h+11.U,v+2.U)):=vga_mem(16.U*io.ascii+11)(2)
        ram(Cat(h+11.U,v+3.U)):=vga_mem(16.U*io.ascii+11)(3)
        ram(Cat(h+11.U,v+4.U)):=vga_mem(16.U*io.ascii+11)(4)
        ram(Cat(h+11.U,v+5.U)):=vga_mem(16.U*io.ascii+11)(5)
        ram(Cat(h+11.U,v+6.U)):=vga_mem(16.U*io.ascii+11)(6)
        ram(Cat(h+11.U,v+7.U)):=vga_mem(16.U*io.ascii+11)(7)
        ram(Cat(h+11.U,v+8.U)):=vga_mem(16.U*io.ascii+11)(8)
        

        ram(Cat(h+12.U,v+0.U)):=vga_mem(16.U*io.ascii+12)(0)
        ram(Cat(h+12.U,v+1.U)):=vga_mem(16.U*io.ascii+12)(1)
        ram(Cat(h+12.U,v+2.U)):=vga_mem(16.U*io.ascii+12)(2)
        ram(Cat(h+12.U,v+3.U)):=vga_mem(16.U*io.ascii+12)(3)
        ram(Cat(h+12.U,v+4.U)):=vga_mem(16.U*io.ascii+12)(4)
        ram(Cat(h+12.U,v+5.U)):=vga_mem(16.U*io.ascii+12)(5)
        ram(Cat(h+12.U,v+6.U)):=vga_mem(16.U*io.ascii+12)(6)
        ram(Cat(h+12.U,v+7.U)):=vga_mem(16.U*io.ascii+12)(7)
        ram(Cat(h+12.U,v+8.U)):=vga_mem(16.U*io.ascii+12)(8)
        

        ram(Cat(h+13.U,v+0.U)):=vga_mem(16.U*io.ascii+13)(0)
        ram(Cat(h+13.U,v+1.U)):=vga_mem(16.U*io.ascii+13)(1)
        ram(Cat(h+13.U,v+2.U)):=vga_mem(16.U*io.ascii+13)(2)
        ram(Cat(h+13.U,v+3.U)):=vga_mem(16.U*io.ascii+13)(3)
        ram(Cat(h+13.U,v+4.U)):=vga_mem(16.U*io.ascii+13)(4)
        ram(Cat(h+13.U,v+5.U)):=vga_mem(16.U*io.ascii+13)(5)
        ram(Cat(h+13.U,v+6.U)):=vga_mem(16.U*io.ascii+13)(6)
        ram(Cat(h+13.U,v+7.U)):=vga_mem(16.U*io.ascii+13)(7)
        ram(Cat(h+13.U,v+8.U)):=vga_mem(16.U*io.ascii+13)(8)
        

        ram(Cat(h+14.U,v+0.U)):=vga_mem(16.U*io.ascii+14)(0)
        ram(Cat(h+14.U,v+1.U)):=vga_mem(16.U*io.ascii+14)(1)
        ram(Cat(h+14.U,v+2.U)):=vga_mem(16.U*io.ascii+14)(2)
        ram(Cat(h+14.U,v+3.U)):=vga_mem(16.U*io.ascii+14)(3)
        ram(Cat(h+14.U,v+4.U)):=vga_mem(16.U*io.ascii+14)(4)
        ram(Cat(h+14.U,v+5.U)):=vga_mem(16.U*io.ascii+14)(5)
        ram(Cat(h+14.U,v+6.U)):=vga_mem(16.U*io.ascii+14)(6)
        ram(Cat(h+14.U,v+7.U)):=vga_mem(16.U*io.ascii+14)(7)
        ram(Cat(h+14.U,v+8.U)):=vga_mem(16.U*io.ascii+14)(8)
        

        ram(Cat(h+15.U,v+0.U)):=vga_mem(16.U*io.ascii+15)(0)
        ram(Cat(h+15.U,v+1.U)):=vga_mem(16.U*io.ascii+15)(1)
        ram(Cat(h+15.U,v+2.U)):=vga_mem(16.U*io.ascii+15)(2)
        ram(Cat(h+15.U,v+3.U)):=vga_mem(16.U*io.ascii+15)(3)
        ram(Cat(h+15.U,v+4.U)):=vga_mem(16.U*io.ascii+15)(4)
        ram(Cat(h+15.U,v+5.U)):=vga_mem(16.U*io.ascii+15)(5)
        ram(Cat(h+15.U,v+6.U)):=vga_mem(16.U*io.ascii+15)(6)
        ram(Cat(h+15.U,v+7.U)):=vga_mem(16.U*io.ascii+15)(7)
        ram(Cat(h+15.U,v+8.U)):=vga_mem(16.U*io.ascii+15)(8)

        v:=v+9.U        
    }
    val rdwrPort = UInt(24.W)
    when(ram(Cat(io.h_addr,io.v_addr))==1.U){
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

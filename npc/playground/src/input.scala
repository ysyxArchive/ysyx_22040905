import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class input extends Module{
    val io=IO(new Bundle{
        val ps2_clk=Input(UInt(1.W))
        val ps2_data=Input(UInt(1.W))
        val VGA_HSYNC=Output(UInt(1.W))
        val VGA_VSYNC=Output(UInt(1.W))
        val VGA_BLANK_N=Output(UInt(1.W))
        val VGA_R=Output(UInt(8.W))
        val VGA_G=Output(UInt(8.W))
        val VGA_B=Output(UInt(8.W))
        val bcd8seg=Output(Vec(6,UInt(8.W)))
    })
    val ascii=RegInit(0.U(8.W))
    val ready=RegInit(0.U(1.W))
    val PS2=Module(new ps2)
    PS2.io.ps2_clk:=io.ps2_clk
    PS2.io.ps2_data:=io.ps2_data
    ascii:=PS2.io.ascii
    ready:=PS2.io.ready
    io.bcd8seg:=PS2.io.bcd8seg
    val vm=Module(new vmem)
    val vc=Module(new vga_ctrl)
    vm.io.ascii:=0.U
    vm.io.w_en:=0.U
    vm.io.h_addr:=vc.io.h_addr
    vm.io.v_addr:=vc.io.v_addr
    vc.io.vga_data:=vm.io.vga_data
    io.VGA_HSYNC:=vc.io.hsync
    io.VGA_VSYNC:=vc.io.vsync
    io.VGA_R:=vc.io.vga_r
    io.VGA_G:=vc.io.vga_g
    io.VGA_B:=vc.io.vga_b
    io.VGA_BLANK_N:=vc.io.valid
    when(ready===1.U){
        vm.io.ascii:=ascii
        vm.io.w_en:=1.U
    }
}

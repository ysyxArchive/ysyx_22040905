import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
//import ps2._
//import vga._
class top extends Module{
    val io=IO(new Bundle{
        val ps2_clk=Input(UInt(1.W))
        val ps2_data=Input(UInt(1.W))
        val VGA_HSYNC=Output(UInt(1.W))
        val VGA_VSYNC=Output(UInt(1.W))
        val VGA_BLANK_N=Output(UInt(1.W))
        val VGA_R=Output(UInt(8.W))
        val VGA_G=Output(UInt(8.W))
        val VGA_B=Output(UInt(8.W))
        val bcd8seg=Output(Vec(8,UInt(8.W)))
    })
    //lack time comtrol
    //get ascii
    val PS2=Module(new ps2)
    PS2.io.rst:=0.U
    PS2.io.ps2_clk:=io.ps2_clk
    PS2.io.ps2_data:=io.ps2_data
    io.bcd8seg:=PS2.io.bcd8seg
    //vga
    val VGA=Module(new vga)
    VGA.io.ascii:=PS2.io.ascii
    VGA.io.now:=PS2.io.now
    io.VGA_HSYNC:=VGA.io.VGA_HSYNC
    io.VGA_VSYNC:=VGA.io.VGA_VSYNC
    io.VGA_BLANK_N:=VGA.io.VGA_BLANK_N
    io.VGA_R:=VGA.io.VGA_R
    io.VGA_G:=VGA.io.VGA_G
    io.VGA_B:=VGA.io.VGA_B
}
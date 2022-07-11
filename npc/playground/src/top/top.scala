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
    val VGA=Module(new vga)
    val PS2=Module(new ps2)
    //get ascii
    val s0:UInt="b0001".U
    val s1:UInt="b0010".U
    val s2:UInt="b0100".U
    val s3:UInt="b1000".U

    val now=RegInit(1.U(4.W))
    val next=RegInit(1.U(4.W))
    now:=next
    VGA.io.ready:=0.U
    when(now===s0){
        when(PS2.io.ready===1.U){
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
    when(now===s0||now===s1){
        VGA.io.ready:=0.U
    }.elsewhen(now===s3){
        VGA.io.ready:=1.U
    }.elsewhen(now===s2){
        VGA.io.ascii:=PS2.io.ascii
    }.otherwise{
        VGA.io.ready:=0.U
    }
    
    PS2.io.rst:=0.U
    PS2.io.ps2_clk:=io.ps2_clk
    PS2.io.ps2_data:=io.ps2_data
    io.bcd8seg:=PS2.io.bcd8seg
    //vga
    io.VGA_HSYNC:=VGA.io.VGA_HSYNC
    io.VGA_VSYNC:=VGA.io.VGA_VSYNC
    io.VGA_BLANK_N:=VGA.io.VGA_BLANK_N
    io.VGA_R:=VGA.io.VGA_R
    io.VGA_G:=VGA.io.VGA_G
    io.VGA_B:=VGA.io.VGA_B
}
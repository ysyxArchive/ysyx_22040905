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
    VGA.io.ascii:=92.U
    val PS2=Module(new ps2)
    //get ascii
    val s0:UInt="b00000001".U
    val s1:UInt="b00000010".U
    val s2:UInt="b00000100".U
    val s3:UInt="b00001000".U
    val s4:UInt="b00010000".U
    val s5:UInt="b00100000".U
    val s6:UInt="b01000000".U
    val s7:UInt="b10000000".U

    val now=RegInit(1.U(8.W))
    val next=RegInit(1.U(8.W))
    now:=next
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
        next:=s4
    }.elsewhen(now===s4){
        when(VGA.io.ready===1.U){
        next:=s5
        }.otherwise{
            next:=s4
        }
    }.elsewhen(now===s5){
        next:=s6
    }.elsewhen(now===s6){
        next:=s7
    }.elsewhen(now===s7){
        next:=s0
    }.otherwise{
        next:=s0
    }
    val asc=RegNext(PS2.io.ascii)
    when(now===s0||now===s1||now===s2||now===s3){
        VGA.io.en:=0.U
        PS2.io.en:=1.U
    }.elsewhen(now===s4||now===s5||now===s6||now===s7){
        PS2.io.en:=0.U
        VGA.io.en:=asc
        VGA.io.en:=1.U
    }.otherwise{
        PS2.io.en:=0.U
        VGA.io.en:=0.U
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
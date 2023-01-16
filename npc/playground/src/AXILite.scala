import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

class AXILiteA extends Bundle{
  val addr = Output(UInt(32.W))
}

class AXILiteR extends Bundle{
  val data=Output(UInt(64.W))
  val resp=Output(UInt(2.W))
}

class AXILiteW extends Bundle{
  val data=Output(UInt(64.W))
  val strb=Output(UInt(8.W))
}

class AXILiteB extends Bundle{
  val resp=Output(UInt(2.W))
}

class AXILite extends Bundle{
  val ar = Decoupled(new AXILiteA)
  val r = Flipped(Decoupled(new AXILiteR))
  val aw = Decoupled(new AXILiteA)
  val w = Decoupled(new AXILiteW)
  val b = Flipped(Decoupled(new AXILiteB))
}


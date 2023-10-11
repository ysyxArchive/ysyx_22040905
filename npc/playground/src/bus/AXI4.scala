import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

//AXI-lite
class AXILiteA extends Bundle {
  val addr = Output(UInt(32.W))
}

class AXILiteR extends Bundle {
  val data = Output(UInt(64.W))
  val resp = Output(UInt(2.W))
}

class AXILiteW extends Bundle {
  val data = Output(UInt(64.W))
  val strb = Output(UInt(8.W))
}

class AXILiteB extends Bundle {
  val resp = Output(UInt(2.W))
}

class AXILite extends Bundle {
  val ar = Decoupled(new AXILiteA)
  val r = Flipped(Decoupled(new AXILiteR))
  val aw = Decoupled(new AXILiteA)
  val w = Decoupled(new AXILiteW)
  val b = Flipped(Decoupled(new AXILiteB))
}

//AXI4
class AXI4A extends AXILiteA {
  val len = Output(UInt(8.W)) // beats -1
  val size = Output(UInt(3.W)) // 2^size Byte
  val burst = Output(UInt(2.W))
  val id  = Output(UInt(4.W))
}

class AXI4R extends AXILiteR {
  val last = Output(UInt(1.W))
  val id  = Output(UInt(4.W))
}

class AXI4W extends AXILiteW {
  val last = Output(UInt(1.W))
  val id  = Output(UInt(4.W))
}

class AXI4B extends AXILiteB {
  val id  = Output(UInt(4.W))
}

class AXI4 extends Bundle {
  val ar = Decoupled(new AXI4A)
  val r = Flipped(Decoupled(new AXI4R))
  val aw = Decoupled(new AXI4A)
  val w = Decoupled(new AXI4W)
  val b = Flipped(Decoupled(new AXI4B))
}

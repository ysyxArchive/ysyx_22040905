import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class IFU extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val pc=Input(UInt(64.W))
    val inst=Output(UInt(32.W))
  })
  setInline("IFU.v",
          """import "DPI-C" function void pmem_inst_read(input longint pc, output int inst);
          |module IFU(input  [63:0]pc,
          |           output [31:0]inst
          |           );
          | always @(*) begin
          |  pmem_inst_read(pc,inst);
          | end
          |endmodule
          |""".stripMargin)
}


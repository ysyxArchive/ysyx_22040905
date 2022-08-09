import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class ebreak extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val en_break = Input(Bool())
    val clk = Input(Clock())
  })

  setInline("ebreak.v",
          """import "DPI-C" function void cpp_break ();
          |
          |module ebreak(input en_break,input clk);
          |  
          |  always @ (posedge clk)
          |    if(en_break)
          |      cpp_break();
          |
          |endmodule
          |""".stripMargin)
}


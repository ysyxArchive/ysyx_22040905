import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class print_csr extends BlackBox with HasBlackBoxInline{
  val io = IO(new Bundle{
    val rf = Input(Vec(6,UInt(64.W)))
  })

  setInline("print_csr.v",
          """import "DPI-C" function void set_csr_ptr(input logic [63:0] a []);
          |
          |module print_csr(
          | input [63:0] rf_0,
          | input [63:0] rf_1,
          | input [63:0] rf_2,
          | input [63:0] rf_3,
          | input [63:0] rf_4,
          | input [63:0] rf_5
          |);
          |logic [63:0] rf[5:0];
          |
          |assign rf[0]=rf_0;
          |assign rf[1]=rf_1;
          |assign rf[2]=rf_2;
          |assign rf[3]=rf_3;
          |assign rf[4]=rf_4;
          |assign rf[5]=rf_5;
          |
          |initial set_csr_ptr(rf);  // rf为通用寄存器的二维数组变量
          |
          |endmodule
          |""".stripMargin)
}


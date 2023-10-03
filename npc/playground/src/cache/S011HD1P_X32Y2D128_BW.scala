import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline

//带写掩码的128bitx64单口RAM
class S011HD1P_X32Y2D128_BW_Bundle extends Bundle{
  val Q=Output(UInt(128.W))  // 读数据
  val CLK=Input(Clock())     // 时钟
  val CEN=Input(UInt(1.W))   // 使能信号, 低电平有效
  val WEN=Input(UInt(1.W))   // 写使能信号, 低电平有效
  val BWEN=Input(UInt(128.W))// 写掩码信号, 掩码粒度为1bit, 低电平有效
  val A=Input(UInt(6.W))     // 读写地址
  val D=Input(UInt(128.W))   // 写数据
}
class S011HD1P_X32Y2D128_BW extends BlackBox with HasBlackBoxInline{
  val io = IO(new S011HD1P_X32Y2D128_BW_Bundle)
  setInline("S011HD1P_X32Y2D128_BW.v",
          """
          |module S011HD1P_X32Y2D128_BW(
          |    Q, CLK, CEN, WEN, BWEN, A, D
          |);
          |parameter Bits = 128;
          |parameter Word_Depth = 64;
          |parameter Add_Width = 6;
          |parameter Wen_Width = 128;
          |
          |output reg [Bits-1:0] Q;
          |input                 CLK;
          |input                 CEN;
          |input                 WEN;
          |input [Wen_Width-1:0] BWEN;
          |input [Add_Width-1:0] A;
          |input [Bits-1:0]      D;
          |
          |wire cen  = ~CEN;
          |wire wen  = ~WEN;
          |wire [Wen_Width-1:0] bwen = ~BWEN;
          |
          |reg [Bits-1:0] ram [0:Word_Depth-1];
          |always @(posedge CLK) begin
          |    if(cen && wen) begin
          |        ram[A] <= (D & bwen) | (ram[A] & ~bwen);
          |    end
          |    Q <= cen && !wen ? ram[A] : {4{$random}};
          |end
          |
          |endmodule
          |""".stripMargin)
}
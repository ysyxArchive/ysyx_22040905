import "DPI-C" function void pmem_read(input int raddr, output longint rdata);
import "DPI-C" function void pmem_write(input int waddr, input longint wdata, input byte wmask);
module memory(input clock,input [31:0]raddr,output [63:0] rdata,input [31:0]waddr,input [63:0]wdata,input [7:0]wmask);
 always @(negedge clock) begin
  pmem_read(raddr, rdata);
  pmem_write(waddr, wdata, wmask);
 end
endmodule

import "DPI-C" function void pmem_inst_read(input longint pc, output int inst);
module IFU(input  [63:0]pc,
           output [31:0]inst
           );
 always @(*) begin
  pmem_inst_read(pc,inst);
 end
endmodule

import "DPI-C" function void set_itrace_ptr(input logic [64:0] a []);

module itrace(
 input [63:0] pc,
 input [31:0] inst
);
logic [63:0] rf[1:0];
assign rf[0]=pc;
assign rf[1]={32'h0,inst};
initial set_itrace_ptr(rf);  // rf为通用寄存器的二维数组变量

endmodule

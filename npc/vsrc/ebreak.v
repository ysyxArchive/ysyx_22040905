import "DPI-C" function void cpp_break ();

module ebreak(input en_break,input clk);
  
  always @ (posedge clk)
    if(en_break)
      cpp_break();

endmodule

import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class ALU extends Module{
    val io=IO(new Bundle{
        val src1=Input(UInt(64.W))
        val src2=Input(UInt(64.W))
        val op=Input(UInt(12.W))
        val result=Output(UInt(64.W))
    })
    val adder_a=Wire(UInt(64.W))
    val adder_b=Wire(UInt(64.W))
    val adder_cin=Wire(UInt(1.W))
    val adder_cout=Wire(UInt(1.W))
    val adder_result=Wire(UInt(64.W))
    val sum=Wire(UInt(65.W))
    val slt_result=Wire(UInt(64.W))
    val sltu_result=Wire(UInt(64.W))
    adder_a:=io.src1
    adder_b:=Mux(io.op(1)|io.op(8)|io.op(9),~io.src2,io.src2)
    adder_cin:=Mux(io.op(1)|io.op(8)|io.op(9),1.U,0.U)
    sum:=adder_a+&adder_b+&adder_cin
    adder_cout:=sum(64)
    adder_result:=sum(63,0)

    slt_result:=Cat(Fill(63,0.U),(io.src1(63)& ~io.src2(63))|(~(io.src1(63)^io.src2(63))&adder_result(63)))
    sltu_result:=Cat(Fill(63,0.U),~adder_cout)



    io.result:=Mux(io.op(0)|io.op(1),adder_result,                    //add|sub
               Mux(io.op(2),io.src1&io.src2,                          //and
               Mux(io.op(3),io.src1|io.src2,                          //or
               Mux(io.op(4),io.src1^io.src2,                          //xor
               Mux(io.op(5),(io.src1<<io.src2(4,0))(63,0),            //sll
               Mux(io.op(6),io.src1>>(io.src2(4,0)),                  //srl
               Mux(io.op(7),(io.src1.asSInt()>>(io.src2(4,0))).asUInt,//sra
               Mux(io.op(8),slt_result,                               //slt
               Mux(io.op(9),sltu_result,                              //sltu
               Mux(io.op(10),adder_result&(~(1.U(64.W))),             //
               "xffffffffffffffff".U))))))))))                        //wrong

}

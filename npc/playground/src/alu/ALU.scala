import chisel3._
import chisel3.util._
import chisel3.stage._
import chisel3.util.experimental.loadMemoryFromFileInline
class ALU extends Module{
    val io=IO(new Bundle{
        val src1=Input(UInt(64.W))
        val src2=Input(UInt(64.W))
        val op=Input(UInt(19.W))
        val result=Output(UInt(64.W))
        val validin=Input(UInt(1.W))
        val readyin=Output(UInt(1.W))
        val validout=Output(UInt(1.W))
        val busy =Output(UInt(1.W))
        val flush=Input(UInt(1.W))
        val mul_sel=Input(UInt(1.W))
        val mul_num = Output(UInt(64.W))
        val div_num = Output(UInt(64.W))
    })

    val adder_a=Wire(UInt(64.W))
    val adder_b=Wire(UInt(64.W))
    val adder_cin=Wire(UInt(1.W))
    val adder_cout=Wire(UInt(1.W))
    val adder_result=Wire(UInt(64.W))
    val sum=Wire(UInt(65.W))
    val slt_result=Wire(UInt(64.W))
    val sltu_result=Wire(UInt(64.W))
    val eql_result=Wire(UInt(64.W))
    adder_a:=io.src1
    adder_b:=Mux(io.op(1)|io.op(8)|io.op(9)|io.op(11),~io.src2,io.src2)
    adder_cin:=Mux(io.op(1)|io.op(8)|io.op(9)|io.op(11),1.U,0.U)
    sum:=adder_a+&adder_b+&adder_cin
    adder_cout:=sum(64)
    adder_result:=sum(63,0)

    slt_result:=Cat(Fill(63,0.U),(io.src1(63)& ~io.src2(63))|((~(io.src1(63)^io.src2(63)))&adder_result(63)))
    sltu_result:=Cat(Fill(63,0.U),~adder_cout)
    eql_result:=Cat(Fill(63,0.U),adder_result===0.U)


    val mul=Module(new mul).io
    mul.mul_valid := (io.op(12)|io.op(13)|io.op(14))&io.validin
    mul.flush := io.flush
    mul.mul_signed:= Cat(io.op(13)|io.op(14),io.op(13)) 
    mul.multiplicand:=io.src1
    mul.multiplier:=io.src2
    mul.mulw:= 0.U //64位乘法
    mul.sel := io.mul_sel
    //val test=Wire(UInt(1.W))
    //test:= io.mul_sel

    val div=Module(new div(64)).io
    div.div_valid := (io.op(15)|io.op(16)|io.op(17)|io.op(18))&io.validin
    div.flush := io.flush
    div.div_signed:=io.op(15)|io.op(17)
    div.dividend:=io.src1
    div.divisor:=io.src2
    div.divw:=0.U

    io.busy:= (~mul.mul_ready) | (~div.div_ready)
    io.readyin:= mul.mul_ready & div.div_ready

    io.validout:=(mul.out_valid)|(div.out_valid)

    io.result:=Mux(io.op(0)|io.op(1),adder_result,                    //add|sub
               Mux(io.op(2),io.src1&io.src2,                          //and
               Mux(io.op(3),io.src1|io.src2,                          //or
               Mux(io.op(4),io.src1^io.src2,                          //xor
               Mux(io.op(5),(io.src1<<io.src2(5,0))(63,0),            //sll
               Mux(io.op(6),io.src1>>(io.src2(5,0)),                  //srl
               Mux(io.op(7),(io.src1.asSInt>>(io.src2(5,0))).asUInt,  //sra
               Mux(io.op(8),slt_result,                               //slt
               Mux(io.op(9),sltu_result,                              //sltu
               Mux(io.op(10),adder_result&(~(1.U(64.W))),             //jalr
               Mux(io.op(11),eql_result,                              //eql
               Mux(io.op(12)|io.op(13)|io.op(14),mul.result_lo,       //mul
               Mux(io.op(15)|io.op(16),div.quotient,                  //div
               Mux(io.op(17)|io.op(18),div.remainder,                 //rem
                0.U))))))))))))))                                     //dont work

    //when((io.op(15)|io.op(16)|io.op(17)|io.op(18))){
    //    printf("%x\n",io.result)
    //}
    io.mul_num := mul.mul_num
    io.div_num := div.div_num
}

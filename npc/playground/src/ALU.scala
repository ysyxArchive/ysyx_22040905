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
    io.result:=Mux(io.op(0),io.src1+io.src2,                          //add
               Mux(io.op(1),io.src1+(~io.src2+1.U),                   //sub
               Mux(io.op(2),io.src1&io.src2,                          //and
               Mux(io.op(3),io.src1|io.src2,                          //or
               Mux(io.op(4),io.src1^io.src2,                          //xor
               Mux(io.op(5),(io.src1<<io.src2(4,0))(63,0),                    //sll
               Mux(io.op(6),io.src1>>io.src2(4,0),                    //srl
               Mux(io.op(7),(io.src1.asSInt()>>io.src2(4,0)).asUInt,       //sra
               Mux(io.op(8),(io.src1.asSInt()<io.src2.asSInt()).asUInt, //slt
               Mux(io.op(9),(io.src1<io.src2).asUInt,                           //sltu
               Mux(io.op(10),(io.src1+io.src2)&(Fill(64,1.U)),
               0.U)))))))))))

}

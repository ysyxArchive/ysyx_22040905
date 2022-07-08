class seg extends Module{
    val io= IO(new Bundle{
        val in=Input(UInt(4.W))
        val out=Output(UInt(8.W))
    })
    io.out:="b11111111".U
    when(io.in===0.U){
        io.out:="b11000000".U   
    }.elsewhen(io.in===1.U){
        io.out:="b11111001".U
    }.elsewhen(io.in===2.U){
        io.out:="b10100100".U
    }.elsewhen(io.in===3.U){
        io.out:="b10110000".U
    }.elsewhen(io.in===4.U){
        io.out:="b10011001".U
    }.elsewhen(io.in===5.U){
        io.out:="b10010010".U
    }.elsewhen(io.in===6.U){
        io.out:="b10000010".U
    }.elsewhen(io.in===7.U){
        io.out:="b11111000".U
    }.elsewhen(io.in===8.U){
        io.out:="b10000000".U
    }.elsewhen(io.in===9.U){
        io.out:="b10010000".U
    }.elsewhen(io.in===10.U){
        io.out:="b10001000".U
    }.elsewhen(io.in===11.U){
        io.out:="b10000011".U
    }.elsewhen(io.in===12.U){
        io.out:="b11000110".U
    }.elsewhen(io.in===13.U){
        io.out:="b10100001".U
    }.elsewhen(io.in===14.U){
        io.out:="b10000110".U
    }.elsewhen(io.in===15.U){
        io.out:="b10001110".U
    }.otherwise{
        io.out:="b11111111".U
    }
}

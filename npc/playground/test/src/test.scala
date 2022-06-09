//import chisel3._
//import chisel3.tester._
//import chisel3.experimental.BundleLiterals._

//import utest._

//object Tester extends ChiselUtestTester {
//val t= Tests{
//    test("Passthrough"){
//    testCircuit(new Passthrough(10)) { c =>
//    c.io.in.poke(2.U)
//    c.io.out.expect(2.U)
//    c.io.in.poke(10.U)
//    c.io.out.expect(10.U)
//}}}
//println("SUCCESS!!") 
//}
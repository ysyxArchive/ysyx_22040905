import chisel3._
import chisel3.util._
import chiseltest._
import chisel3.experimental.BundleLiterals._
import chiseltest.formal._
import chiseltest.formal.BoundedCheck
import utest._

object Mul extends TestSuite {
  val tests: Tests = Tests {
    test("mytest") {
      new Formal with HasTestName {
        def getTestName: String = s"mul"
      }.verify(new base_mul, Seq(BoundedCheck(1)))
    }
  }
}
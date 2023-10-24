import chisel3._
import chisel3.util._
import chiseltest._
import chisel3.experimental.BundleLiterals._
import chiseltest.formal._
import chiseltest.formal.BoundedCheck
import utest._

object div_test extends TestSuite {
  val tests: Tests = Tests {
    test("mytest") {
      new Formal with HasTestName {
        def getTestName: String = s"div"
      }.verify(new div(64), Seq(BoundedCheck(64)))
    }
  }
}

class unit extends base_mul

object Elaborate_unit extends App {
  (new chisel3.stage.ChiselStage).execute(args, Seq(chisel3.stage.ChiselGeneratorAnnotation(() => new unit)))
}

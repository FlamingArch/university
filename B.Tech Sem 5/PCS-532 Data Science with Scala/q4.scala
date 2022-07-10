object MyClass {
  def main(args: Array[String]): Unit = {
    print("Enter A: > ")
    var a = scala.io.StdIn.readDouble()
    print("Enter B: > ")
    var b = scala.io.StdIn.readDouble()
    var divi = (aa: Double, bb: Double) => aa / bb
    var subt = (aa: Double, bb: Double) => (aa - bb)
    var mult = (aa: Double, bb: Double) => aa * bb
    var addi = (aa: Double, bb: Double) => aa + bb
    print("Enter Choice: > ")
    var ch = scala.io.StdIn.readInt()
    if (ch == 1)
      println(addi(a, b))
    if (ch == 2)
      println(subt(a, b))
    if (ch == 3)
      println(mult(a, b))
    if (ch == 4)
      println(divi(a, b))
  }
}

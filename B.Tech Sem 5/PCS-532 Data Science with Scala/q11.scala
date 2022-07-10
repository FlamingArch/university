object MyClass {
  def main(args: Array[String]) = {
    val se = scala.io.StdIn.readLine()
    var n = se.length()
    if (n < 4) {
      println(" In upper case: " + se.toUpperCase())
    } else {
      println(" In upper case: " + se.takeRight(4).toUpperCase())
    }
  }
}

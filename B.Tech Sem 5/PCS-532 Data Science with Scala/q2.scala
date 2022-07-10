object MyClass {
  def main(args: Array[String]): Unit = {
    print("Enter Inches: > ");
    var inches = scala.io.StdIn.readFloat();
    var meters = inches * 0.0254;
    println("Meters: " + meters);
  }
}

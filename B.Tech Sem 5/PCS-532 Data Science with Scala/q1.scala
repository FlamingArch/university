object MyClass {
  def main(args: Array[String]): Unit = {
    print("Enter Temperature: > ");
    var fahrenheit = scala.io.StdIn.readFloat()
    var celsius = ((fahrenheit - 32) * 5) / 9
    println("Celsius: " + celsius);
  }
}

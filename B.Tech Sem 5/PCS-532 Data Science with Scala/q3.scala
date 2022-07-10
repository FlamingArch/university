object MyClass {
  def main(args: Array[String]): Unit = {
    print("Enter Years: > ");
    var years = scala.io.StdIn.readInt();
    println("Days: " + years * 365);
  }
}

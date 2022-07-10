object MyClass {
  def main(args: Array[String]) = {
    var a = List(99.5, 100.0, 50.0, 55.0, 70.0, 100, -1.0);
    var b = List(10.0, 20.0, 30.0, 40.0, 50.0);
    var c = a ::: b;
    println("MIN IS" + c.min);
    println("MAX IS" + c.max);
  }
}

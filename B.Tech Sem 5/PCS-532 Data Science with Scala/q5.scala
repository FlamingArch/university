trait car {
  def c1();
  def c2() = {
    println("Car 2")
  }
}
trait car2 {
  def c3() = {
    println("Car 3")
  }
}
class dc extends car {
  def c1() = {
    println("Car 1");
  }
}
class dc2 extends car with car2 {
  def c1() = {
    println("Car 1");
  }
}
object printValues {
  // Main method
  def main(args: Array[String]): Unit = {
    val ob = new dc();
    ob.c1();
    ob.c2();
    val ob2 = new dc2();
    ob2.c1();
    ob2.c2();
    ob2.c3();
  }
}

import scala.collection.immutable.ListMap
object MyClass {
  def main(args: Array[String]): Unit = {
    val ma = Map("Bill" -> 56, "Jonny" -> 87, "Tommy" -> 11, "Cheena" -> 14);
    val res = ListMap(ma.toSeq.sortWith(_._1 > _._1): _*);
    print(res);
  }
}

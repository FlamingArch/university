object MyClass {
  def main(args: Array[String]): Unit = {
    val lis = List(1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6)
    println("Distinct Element list")
    val dist = (lis: List[Int]) => lis.distinct
    val ans = dist(lis)
    println(ans)
    var n = 2
    println("First Occurance")
    println(ans.indexOf(n))
    println("Reversing ")
    val len = (lis: List[Int]) => {
      println(lis.length)
      println(lis.reverse)
    }
    len(ans)
    println("max and min")
    var min = (l: List[Int]) => l.min
    var max = (l: List[Int]) => l.max
    println(min(ans))
    println(max(ans))
  }
}

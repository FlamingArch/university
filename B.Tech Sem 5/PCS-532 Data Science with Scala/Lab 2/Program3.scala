object Operator {
  def main(args: Array[String]): Unit = {
    var a = 10
    var b = 4
    var c = true
    var d = false
    var result = 0

    // using arithmetic operators
    println("a + b = " + (a + b))
    println("a - b = " + (a - b))

    // using relational operators
    if (a == b) println("a is equal to b")
    else println("a is not equal to b")

    // using logical operator OR
    println("c || d = " + (c || d))

    // using bitwise AND operator
    println("a & b = " + (a & b))

    // using assignment operators
    println("a += b = " + (a += b))

  }
}

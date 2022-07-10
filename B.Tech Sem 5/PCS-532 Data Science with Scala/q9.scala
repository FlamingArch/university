object MyClass {
  def main(args: Array[String]) = {
    println("Enter Name & Age: > ")
    var name = scala.io.StdIn.readLine()
    var age = scala.io.StdIn.readInt()
    def eligible(a: Int) = {
      if (a > 18)
        println(s"Yes $name valid:" + a)
      else
        println(s"No $name not valid:" + a)
    }
    eligible(age)
  }
}

import scala.annotation.tailrec;

object Ques4 {
  @tailrec def GCD(a: Int, b: Int): Int = {
    if (b == 0)
      return a
    else
      GCD(b, a % b)
  }
  def fact(n: Int): Int = {
    @tailrec def facto(a: Int, n: Int): Int = {
      if (n <= 1)
        return a
      else
        facto(n * a, n - 1)
    }
    facto(1, n)
  }
  def main(args: Array[String]) = {
    println("Enter Numbers: > ")
    var a = scala.io.StdIn.readInt()
    var b = scala.io.StdIn.readInt()
    println("Enter number factorial needed")
    var c = scala.io.StdIn.readInt()
    var ans = GCD(a, b)
    println("GCD " + ans)
    ans = fact(c)
    println("FACTORIAL " + ans)
  }
}

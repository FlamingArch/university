#include <iostream>

int FibonacciRecursive(int n)
{
    if (n <= 1)
        return n;

    return (FibonacciRecursive(n - 1) + FibonacciRecursive(n - 2));
}

int FibonacciIterative(int n)
{
    int a = 0, b = 1, c;
    if (n == 0)
        return a;
    if (n == 1)
        return b;
    for (int i = 2; i < n; i++)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}

int main(int argc, char const *argv[])
{
    std::cout << FibonacciIterative(50) << std::endl;
    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x);
bool isPalindrome(int x);

int main(int argc, char const *argv[])
{
    cout << 11;
    for (int i = 13; i < 1000; i+=2)
    {
        if (isPrime(i) && isPalindrome(i))
            cout << ", " << i;
    }
    cout << endl;
    return 0;
}

bool isPrime(int x)
{
    if (x == 0 || x == 1)
        return false;
    else
        for (int i = 2; i <= sqrtf(x); i++)
            if (x % i == 0)
                return false;
    return true;
}

bool isPalindrome(int x)
{
    int num = x, reversed = 0;
    for (int i = 0; num != 0; i++)
    {
        reversed *= 10;
        reversed += num % 10;
        num /= 10;
    }
    if (x == reversed)
        return true;
    return false;
}
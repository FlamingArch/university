#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int x);

int main(int argc, char const *argv[])
{
    int a, b;
    cout << "Enter 2 Numbers to check for twin primes: > ";
    cin >> a;
    cin >> b;

    if ((isPrime(a) && isPrime(b)) && (a - b == 2 || a - b == -2))
        cout << "Yes, they are twin primes." << endl;
    else
        cout << "No, they are not twin primes." << endl;
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

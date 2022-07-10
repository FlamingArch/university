#include <iostream>

using namespace std;

int sumOfDigits(int x);
int productOfDigits(int x);

int main(int argc, char const *argv[])
{
    int x;
    cout << "Enter Number to check for super two-digit number." << endl
         << " > ";
    cin >> x;
    if (sumOfDigits(x) + productOfDigits(x) == x)
        cout << "Special 2-digit number" << endl;
    else
        cout << "Not a Special 2-digit number" << endl;

    return 0;
}

int sumOfDigits(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}

int productOfDigits(int x)
{
    int product = 1;
    if (x == 0)
        return 0;
    else
        while (x != 0)
        {
            product *= x % 10;
            x /= 10;
        }
    return product;
}
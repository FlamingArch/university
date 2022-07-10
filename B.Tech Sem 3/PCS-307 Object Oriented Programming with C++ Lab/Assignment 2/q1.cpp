// Write a C++ program to input a two digit number
//  and display the largest digit of the input number.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter Number > ";
    cin >> num;
    int biggest = num % 10;
    while (num != 0)
    {
        if (num % 10 > biggest)
        {
            biggest = num % 10;
        }
        num /= 10;
    }
    cout << "Largest Digit: " << biggest << endl;
    return 0;
}

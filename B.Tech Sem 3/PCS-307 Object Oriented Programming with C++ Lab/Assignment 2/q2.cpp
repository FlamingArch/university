// Write a C++ program to input a two digit number and
// display the largest digit of the input number.



#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter Number > ";
    cin >> num;
    if (num%7==0 || num%10==7)
        cout<<"Yes, it is a buzz number.";
    else cout<<"No, it is not a buzz number.";
    return 0;
}

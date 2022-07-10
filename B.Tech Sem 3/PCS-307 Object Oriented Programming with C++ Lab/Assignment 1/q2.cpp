#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int inp;
    cout << "Enter Number: > ";
    cin >> inp;
    cout << "First Digit: " << inp/100 << endl << "Last Digit: " << inp%10 << endl;
    return 0;
}

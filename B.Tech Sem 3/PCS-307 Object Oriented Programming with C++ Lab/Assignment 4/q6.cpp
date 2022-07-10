#include <iostream>

bool containsZero(int x);

using namespace std;

int main(int argc, char const *argv[])
{
    cout << 111;
    for (int i = 112; i < 200; i++)
    {
        if(!containsZero(i))
            cout << ", " << i;
    }
    cout << endl;
    return 0;
}

bool containsZero(int x)
{
    for (int i = 0; i < 2; i++)
    {
        if (x % 10 == 0)
            return true;
        else
            x /= 10;
    }
    return false;
}
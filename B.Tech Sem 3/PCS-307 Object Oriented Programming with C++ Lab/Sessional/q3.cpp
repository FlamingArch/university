#include <iostream>
using namespace std;
class Base
{
};
class Derived : public Base
{
};
int main()
{
    Derived d;
    try
    {
        throw d;
    }
    catch (Base b)
    {
        cout << "Caught Base Exception";
    }
    catch (Derived d)
    {
        cout << "Caught Derived Exception";
    }
    return 0;
}

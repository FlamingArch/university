#include <iostream>
using namespace std;
class rect
{
    int x, y;

public:
    void val(int, int);
    int area()
    {
        return (x * y);
    }
};
void rect::val(int a, int b)
{
    x = a;
    y = b;
}
int main()
{
    rect rect;
    rect.val(3, 4);
    cout << "rect area: " << rect.area();
    return 0;
}
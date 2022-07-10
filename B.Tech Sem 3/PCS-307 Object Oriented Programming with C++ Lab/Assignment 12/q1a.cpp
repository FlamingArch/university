#include <iostream>

using namespace std;

class Distance
{
public:
    int feet, inch;
    Distance(int f, int i)
    {
        this->feet = f;
        this->inch = i;
    }
    friend void operator--(Distance d);
    friend void operator++(Distance d);
};
void operator--(Distance d)
{
    --d.feet;
    --d.inch;
    cout << "\nFeet & Inches(Decrement): " << d.feet << "'" << d.inch;
}
void operator++(Distance d)
{
    ++d.feet;
    ++d.inch;
    cout << "\nFeet & Inches(Increment): " << d.feet << "'" << d.inch;
}

int main()
{
    Distance d1(8, 9);
    --d1;
    return 0;
}
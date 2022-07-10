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
    void operator--();
    void operator++();
};
void Distance::operator--()
{
    feet--;
    inch--;
    cout << "\nFeet & Inches(Decrement): " << feet << "'" << inch;
}
void Distance::operator++()
{
    feet++;
    inch++;
    cout << "\nFeet & Inches(Increment): " << feet << "'" << inch;
}

int main()
{
    Distance d1(8, 9);
    --d1;
    return 0;
}
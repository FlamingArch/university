// Write a C++ program to calculate area of a circle,
// a rectangle or a triangle depending upon user’s choice.
// (Use switch statement)

#include <iostream>
#define PI 3.14159265

using namespace std;

int main(int argc, char const *argv[])
{
    int shape;
    cout << "Enter Shape:\n    Enter 1 for Circle\n    Enter 2 for Rectangle\n    Enter 3 for Triangle\n  > ";
    cin >> shape;

    switch (shape)
    {
    case 1:
        cout << "\nCircle:" << endl;
        float rad;
        cout << "    Enter Radius: > ";
        cin >> rad;
        cout << "Area: " << PI * rad * rad << endl;
        break;

    case 2:
        cout << "\nRectangle:" << endl;
        float length, breadth;
        cout << "    Enter Length: > ";
        cin >> length;
        cout << "    Enter Breadth: > ";
        cin >> breadth;
        cout << "Area:" << length * breadth << endl;
        break;

    case 3:
        cout << "\nTriangle:" << endl;
        float base, height;
        cout << "    Enter Base: > ";
        cin >> base;
        cout << "    Enter Height: > ";
        cin >> height;
        cout << "Area:" << 0.5 * base * height << endl;
        break;
    default:
        cout << "Invalid Choice" << endl;
        break;
    }
    return 0;
}

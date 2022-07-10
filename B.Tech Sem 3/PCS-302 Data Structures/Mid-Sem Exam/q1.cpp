#include <iostream>
using namespace std;

class Point
{
	int x, y;
public:
Point(int i = 10, int j = 20) { x = i; y = j; }
int getX() { return x; }
int getY() { return y; }
};

int main()
{
	Point p1(30, 40);
	Point p2 = p1;
	cout << "x = " << p2.getX() << " y = " << p2.getY();
	return 0;
}
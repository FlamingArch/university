
#include <iostream>
#include <string>
using namespace std;
class A
{
	static int a;
    public:
	void show()
        {
		a++;
		cout<<"a: "<<a<<endl;
	}
};
 
int A::a = 5;
 
int main(int argc, char const *argv[])
{
	A a;
	return 0;
}
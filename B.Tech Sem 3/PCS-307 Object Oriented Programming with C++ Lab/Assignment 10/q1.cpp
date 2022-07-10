#include <iostream>

class Test
{
private:
    int n1, n2, n3;

public:
    void setData(int, int, int);
    friend void biggest(Test ob);
};

void Test::setData(int a, int b, int c)
{
    n1 = a;
    n2 = b;
    n3 = c;
}

void biggest(Test obj)
{
    std::string a;
    if (obj.n1 > obj.n2 && obj.n1 > obj.n3)
        std::cout << "Biggest Number: " << obj.n1 << std::endl;
    else if (obj.n2 > obj.n1 && obj.n2 > obj.n3)
        std::cout << "Biggest Number:\n " << obj.n2 << std::endl;
    else
        std::cout << "Biggest Number: " << obj.n3 << std::endl;
}

int main(int argc, char const *argv[])
{
    Test a;
    a.setData(2,3,4);
    biggest(a);
    return 0;

}

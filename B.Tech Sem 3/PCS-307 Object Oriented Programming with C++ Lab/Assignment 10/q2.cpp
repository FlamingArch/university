#include <iostream>

class UserOne;
class UserTwo;

class UserOne
{
private:
    std::string uname, pid;
public:
    void setData(std::string name, std::string id)
    {
        uname = name;
        pid = id;
    }
    friend void userChecker(UserOne one, UserTwo two);
};

class UserTwo
{
private:
    std::string uname, pid;
public:
    void setData(std::string name, std::string id)
    {
        uname = name;
        pid = id;
    }
    friend void userChecker(UserOne one, UserTwo two);
};

void userChecker(UserOne one, UserTwo two)
{
    if (one.uname == two.uname && one.pid==two.pid)
    {
        std::cout << "Same Data" << std::endl;
        return;
    }
    std::cout << "Different Data" << std::endl;
    return;
}

int main(int argc, char const *argv[])
{
    UserOne a;
    UserTwo b,c;

    a.setData("John Doe", "123");
    b.setData("John Doe", "123");
    c.setData("Jane Doe", "123");

    userChecker(a,b);
    userChecker(a,c);

    return 0;
}

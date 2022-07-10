#include <iostream>
using namespace std;
class Ele_Bill
{
private:
    string Cname;
    long Pnumber;
    int No_of_units;
    float amount;
    void Calc_Amount()
    {
        if (No_of_units <= 50)
            amount = 0;
        else if (No_of_units < 100)
            amount = float(No_of_units) * 0.8;
        else if (No_of_units < 200)
            amount = 80 + No_of_units - 100;
        else
            amount = 80 + 100 + float(No_of_units - 200) * 1.2;
    }

public:
    void accept(string name, long no, int units)
    {
        Cname = name;
        Pnumber = no;
        No_of_units = units;
        Calc_Amount();
    }
    void display()
    {
        cout << amount;
    }
};

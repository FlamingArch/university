#include <iostream>

using namespace std;

class Employee
{
private:
    int Pan;
    string Name;
    float TaxIncome;
    float Tax;

public:
    void inputInfo(int pan, string name, float taxableIncome)
    {
        Pan = pan;
        Name = name;
        TaxIncome = taxableIncome;
    }
    void taxCalc()
    {
        if (TaxIncome == NULL)
            throw "No Income Specified";
        else if (TaxIncome < 250000)
            Tax = 0;
        else if (TaxIncome < 300000)
            Tax = (TaxIncome - 250000) * 0.1;
        else if (TaxIncome < 400000)
            Tax = (TaxIncome - 300000) * 0.2 + 5000;
        else
            Tax = (TaxIncome - 400000) * 0.3 + 25000;
    }
    void displayInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "PAN: " << Pan << endl;
        cout << "Taxable Income: " << TaxIncome << endl;
        cout << "Tax: " << Tax << endl;
    }
};
int main(int argc, char const *argv[])
{

    int Pan;
    string Name;
    float TaxIncome;
    Employee employee;
    cout << "Name: " << endl;
    getline(cin, Name);
    cout << "PAN: " << endl;
    cin >> Pan;
    cout << "Taxable Income: " << TaxIncome << endl;
    cin >> TaxIncome;

    employee.inputInfo(Pan, Name, TaxIncome);
    employee.taxCalc();
    employee.displayInfo();
}
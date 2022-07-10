// Write a C++ program to input
// Name, Personal account number, annual taxable income
// and compute the tax according to the given conditions and
// display the output.

#include <iostream>

using namespace std;

float tax(float income);

int main(int argc, char const *argv[])
{
    string name;
    long int pan;
    float taxable_income;
    cout << "Enter Name: > ";
    getline(cin,name);
    cout << "Enter Permanent Account Number: > ";
    cin >> pan;
    cout << "Enter Annual Taxable Income: > ";
    cin >> taxable_income;
    cout << "Total Tax:" << endl;
    cout << "    Name:" << name << endl;
    cout << "    PAN: " << pan << endl;
    float total_tax = tax(taxable_income);
    cout << "    Income: " <<  taxable_income << endl;
    cout << "    Tax: " << total_tax << endl;
    cout << "    Total: " << taxable_income - total_tax << endl;
    
    return 0;
}

float tax(float income)
{
    if (income < 250000)
        return 0.00;
    else if (income >= 250000 && income < 300000)
        return (income - 250000) * 0.1;
    else if (income >= 300000 && income < 400000)
        return 5000 + (income - 250000) * 0.2;
    else
        return 250000 + (income - 400000) * 0.3;
}
// Write a C++ that accepts
// employee name , employee code , employee designation
// and basic salary.
// According to the following conditions computes the
// HRA, DA and Gross Salary of an employee.

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string name, code, designation;
    float salary, hra, da, gsalary;

    cout << "Enter Name: > ";
    getline(cin, name);
    cout << "Enter Code: > ";
    getline(cin, code);
    cout << "Enter Designation: > ";
    cin >> designation;
    cout << "Enter Basic Salary: > ";
    cin >> salary;

    cout << "\nName of Employee: " << name << endl;
    cout << "Designation of Employee: " << designation << endl;
    cout << "Basic Salary: " << salary << endl;

    transform(designation.begin(), designation.end(), designation.begin(), ::tolower);

    if (!designation.compare("manager"))
    {
        hra = salary * 0.15;
        da = salary * 0.8;
    }
    if (!designation.compare("clerk"))
    {
        hra = salary * 0.08;
        da = salary * 0.5;
    }
    if (!designation.compare("peon"))
    {
        hra = salary * 0.05;
        da = salary * 0.3;
    }

    cout << "Gross Salary: " << hra + da + salary << endl;

    return 0;
}

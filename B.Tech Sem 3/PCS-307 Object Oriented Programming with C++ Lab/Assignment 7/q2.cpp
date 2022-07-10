#include <iostream>

using namespace std;

class Employee
{
private:
    int RollNo;
    string Name;
    float Marks1, Marks2, Marks3;
    float percentage;
    char grade;
public:
    void inputInfo(int roll, string name, float marks1, float marks2, float marks3, )
    {
        RollNo = roll;
        Name = name;
        Marks1 = marks1;
        Marks2 = marks2;
        Marks3 = marks3;
    }
    void calcPercentage()
    {
        percentage = (Marks1 + Marks2 + Marks3) / 3;
        if (percentage > 90)
            grade = 'A';
        else if (percentage > 80)
            grade = 'B';
        else if (percentage > 60)
            grade = 'C';
        else if (percentage > 40)
            grade = 'D';
        else if (percentage > 40)
            grade = 'F';
    }
    void displayInfo()
    {
        cout << "Name: " << Name << endl;
        cout << "Roll No: " << RollNo << endl;
        cout << "Percentage: " << percentage << endl;

    }
};

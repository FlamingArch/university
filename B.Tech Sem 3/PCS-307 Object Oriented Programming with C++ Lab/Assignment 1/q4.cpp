#include <iostream>

using namespace std;

typedef struct
{
    string name;
    int universityRollNo;
    string course;
    int semester;
} Student;

int main(int argc, char const *argv[])
{
    Student student;
    cout << "Enter Student Details:" << endl;
    cout << "    Enter Student Name: ";
    getline(cin,student.name);
    cout << "    Enter University Roll No: ";
    cin >> student.universityRollNo;
    cout << "    Enter Course: ";
    getchar();
    getline(cin,student.course);
    cout << "    Enter Semester: ";
    cin >> student.semester;

    cout << "Entered Student Details:" << endl;
    cout << "    Student Name: " << student.name << endl;
    cout << "    University Roll No: " << student.universityRollNo << endl;
    cout << "    Course: " << student.course << endl;
    cout << "    Semester: " << student.semester << endl;

    return 0;
}

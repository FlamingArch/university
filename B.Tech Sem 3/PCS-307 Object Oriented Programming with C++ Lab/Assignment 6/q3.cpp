/*
Ques 3: Write a C++ program to input a word from the console and remove the consecutive repeated characters by replacing the sequence of repeated characters by its single occurrence.
Ans 3: 
Code:
*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str;
    cout << "Input: ";
    getline(cin, str);

    for (size_t i = 0; i < str.length(); i++)
        while (str[i+1]==str[i])
            str.erase(i+1, 1);
    
    cout << "Output: " << str << endl;
    return 0;
}

/*
Result:
Input: PROOOGGRAMMMMIIING
Output: PROGRAMING
*/
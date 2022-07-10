#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int count;

    string str;
    cout << "Input: ";
    getline(cin, str);

    for (size_t i = 0; i < str.length(); i++)
    {
        count = 1;
        for (size_t j = i + 1; j < str.length(); j++)
            if (str[j] == str[i])
                count++;
        for (size_t j = i + 1; j < str.length(); j++)
            if (str[j] == str[i])
                str.erase(j, 1);
        cout << "\"" << str[i] << "\" : " << count << endl;
    }

    return 0;
}

/*
Result:
Input: INFORMATION TECHNOLOGY
"I" : 2
"N" : 3
"F" : 1
"O" : 4
"R" : 1
"M" : 1
"A" : 1
"T" : 2
" " : 1
"E" : 1
"C" : 1
"H" : 1
"L" : 1
"G" : 1
"Y" : 1
*/
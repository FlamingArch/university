/*
 Ques 1: Write a C++ program to input any string and count number of uppercase, lowercase, vowel and digit characters in a given string.
 Ans 1: 
 Code: 
 */

#include <iostream>

using namespace std;

bool isVowel(char a);

int main(int argc, char const *argv[])
{
    string str;
    int upper, lower, vowel, digit;

    cout << "Enter String: ";
    getline(cin, str);

    for (size_t i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            upper++;
        else if (str[i] >= 97 && str[i] <= 122)
            lower++;
        else if (str[i] >= 48 && str[i] <= 57)
            digit++;
        if (isVowel(str[i]))
            vowel++;
    }

    cout << "    Uppercase:" << upper << endl;
    cout << "    Lowercase:" << lower << endl;
    cout << "    Vowels:" << vowel << endl;
    cout << "    Digits:" << digit << endl;

    return 0;
}

bool isVowel(char a)
{
    a = tolower(a);
    return a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u';
}

/*
Code:
The Quick Brown Fox jumps over the Lazy Dog 1234567890
    Uppercase:6
    Lowercase:29
    Vowels:11
    Digits:10
*/

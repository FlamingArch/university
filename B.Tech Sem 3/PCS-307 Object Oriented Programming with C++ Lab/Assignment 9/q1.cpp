#include <iostream>

using namespace std;

class StaticDemo
{
public:
    static void rightChar(string s, int i)
    {
        for (size_t i = 0; i < i; i++)
        {
            cout << s[i] << ' ';
        }
    }
    static void palin(string s)
    {
        
        int l = 0;
        int h = s.length() - 1;

        while (h > l)
        {
            if (s[l++] != s[h--])
            {
                cout  << "Not Palindrome";
                break;
            }
        }
        cout << "Palindrome";
    }
};

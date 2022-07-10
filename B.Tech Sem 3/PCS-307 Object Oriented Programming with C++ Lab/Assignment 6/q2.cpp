#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string str, upper, lower, special, digit;

    cout << "Input: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
            upper += str[i];
        else if (str[i] >= 97 && str[i] <= 122)
            lower += str[i];
        else if (str[i] >= 48 && str[i] <= 57)
            digit += str[i];
        else
            special += str[i];
    }

    // Uncomment for Sorted Strings
    // sort(upper.begin(), upper.end());
    // sort(lower.begin(), lower.end());
    // sort(digit.begin(), digit.end());
    // sort(special.begin(), special.end());

    string sorted = digit + upper + lower + special;

    cout << "Output: " << sorted << endl;
    return 0;
}

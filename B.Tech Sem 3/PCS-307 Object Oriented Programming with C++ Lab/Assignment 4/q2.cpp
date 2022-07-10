// Using a switch statement,
// write a menu driven C++ program
// to convert a given temperature
// Fahrenheit to Celsius and vice versa.
// For an incorrect choice, an
// appropriate error message should be displayed.
// (Hints: C=5/9*(F-32) and F=1.8*C+32)
// (Use switch statement)

#include <iostream>

using namespace std;

float toFahrenheit(float Celsius)
{
    return 1.8 * Celsius + 32;
}
float toCelsius(float Fahrenheit)
{
    return 5 / 9 * (Fahrenheit - 32);
}

int main(int argc, char const *argv[])
{
    cout << "Enter Conversion Unit: \n    1. Celsius to Fahrenheit.\n    2. Fahrenheit to Celsius.\n  > ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter Unit in Celsius: > ";
        float Celsius;
        cin >> Celsius;
        cout << "In Farenheit: " << toFahrenheit(Celsius) << endl;
        break;

    case 2:
        cout << "Enter Unit in Fahrenheit: > ";
        float Fahrenheit;
        cin >> Fahrenheit;
        cout << "In Celsius: " << toCelsius(Fahrenheit) << endl;
        break;
    
    default:
        cout << "Invalid Choice!" << endl;
        break;
    }
    return 0;
}

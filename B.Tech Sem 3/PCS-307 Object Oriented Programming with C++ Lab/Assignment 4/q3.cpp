// An electronics shop has announced the following seasonal discounts on the purchase of certain items:
// Write a program based on the above criteria to input name, address, amount of purchase and the type of purchase (L for Laptop and D for Desktop) by a customer. Compute and print the net amount to be paid by a customer along with his name and address.(Hint: Discount = (discount rate / 100) * amount of purchase, Net amount = amount of purchase – discount)
// (Use switch statement)

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    string name;
    string address;
    float amount;
    char type;

    cout << "Enter Details:" << endl;
    cout << "    Enter Name: > ";
    getline(cin, name);
    cout << "    Enter Address: > ";
    getline(cin, address);
    cout << "    Enter Amount: > ";
    cin >> amount;
    cout << "    Enter Type: > ";
    cin >> type;
    float cost;
    switch (type)
    {
    case 'L':
    case 'l':
        if (amount <= 25000)
            cost = amount;
        else if (amount <= 57000 || amount > 25000)
            cost = amount - (amount * 0.05);
        else if (amount <= 100000 || amount > 57000)
            cost = amount - (amount * 0.075);
        else
            cost = amount - (amount * 0.1);
        break;
    case 'D':
    case 'd':
        if (amount <= 25000)
            cost = amount - (amount * 0.05);
        else if (amount <= 57000 || amount > 25000)
            cost = amount - (amount * 0.076);
        else if (amount <= 100000 || amount > 57000)
            cost = amount - (amount * 0.1);
        else
            cost = amount - (amount * 0.15);
        break;

    default:
        cout << "Invalid Type of Purchase" << endl;
        return 1;
    }
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Final Cost: " << cost << endl;
    return 0;
}

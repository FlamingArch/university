// Q4.Using the switch statement, write a menu-driven      program to calculate the maturity amount of a bank      deposit.
// The user is given the following options:
// (i) Term Deposit
// (ii) Recurring Deposit

// For option (i) accept Principal (p), rate of interest (r) and time period in years (n). Calculate and output the maturity amount (a) receivable using the formula a = p[1 + r / 100]n.

// For option (ii) accept monthly installment (p), rate of interest (r) and time period in months (n). Calculate and output the maturity amount (a) receivable using the formula a = p * n + p * n(n + 1) / 2 * r / 100 * 1 / 12.
// For an incorrect option, an appropriate error message should be displayed.

#include <iostream>

using namespace std;

void termDeposit();
void recurringDeposit();

int main(int argc, char const *argv[])
{
    int inp;

    cout << "Enter a choice:\n    1. Term Deposit\n    2. Recurring Deposit\n  > ";
    cin >> inp;
    switch (inp)
    {
    case 1:
        termDeposit();
        break;
    case 2:
        recurringDeposit();
        break;

    default:
        cout << "Invalid Choice" << endl;
        break;
    }

    return 0;
}

void termDeposit()
{
    float principal, rateInterest, time;
    cout << endl
         << "TERM DEPOSIT:" << endl;
    cout << "              Principal: > ";
    cin >> principal;
    cout << "       Rate of Interest: > ";
    cin >> rateInterest;
    cout << "    Time Period (Years): > ";
    cin >> time;
    cout << endl
         << "Maturity Amount: " << principal * ((1 + rateInterest) / 100) * time << endl
         << endl;
}

void recurringDeposit()
{
    float installment, rateInterest, time;
    cout << endl
         << "RECURRING DEPOSIT:" << endl;
    cout << "     Monthly Installment: > ";
    cin >> installment;
    cout << "        Rate of Interest: > ";
    cin >> rateInterest;
    cout << "    Time Period (Months): > ";
    cin >> time;
    cout << endl
         << "Maturity Amount: " << installment * time + installment * time * (time + 1) / 2 * rateInterest / 100 * 1 / 12 << endl
         << endl;
}
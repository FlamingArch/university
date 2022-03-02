#include <stdio.h>

double compoundInterest(double p, double r, int t)
{
    return p * pow(1 + r / 100, t);
}

double simpleInterest(double p, double r, int t)
{
    return p * r * t / 100;
}

int main()
{
    double amt;
    double rate;
    int time;

    printf("Enter amount: ");
    scanf("%lf", &amt);

    printf("Enter rate: ");
    scanf("%lf", &rate);

    printf("Enter time: ");
    scanf("%d", &time);

    amt > 100000 ? printf("Compound interest: %.2lf\n", compoundInterest(amt, rate, time))
                 : printf("Simple interest: %.2lf\n", simpleInterest(amt, rate, time));

    return 0;
}

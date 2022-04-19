#include <stdio.h>

int main()
{
    int basic_salary;
    scanf("%d", &basic_salary);

    int dearness_allowance = basic_salary * 0.2;

    printf("Gross: %d", basic_salary + dearness_allowance);
}
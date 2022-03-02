#include <stdio.h>

int main()
{
    int sum_even = 0;
    int sum_odd = 0;

    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            sum_even += i;
        }
        else
        {
            sum_odd += i;
        }
    }

    printf("Sum of even numbers: %d\n", sum_even);
    printf("Sum of odd numbers: %d\n", sum_odd);
}
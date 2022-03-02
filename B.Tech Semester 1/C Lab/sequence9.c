#include <stdio.h>

int main()
{
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += marks[i];
    }

    printf("Sum: %d", sum);
    printf("Percentage: %d", sum / 5);
}
#include <stdio.h>

int main()
{
    int n[10];
    for (int i = 0; i < 10; i++)
    {
        n[i] = i;
    }

    // Sum using For Loop
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += n[i];
    }
    printf("Sum using For Loop: %d\n", sum);

    // Sum using While Loop
    int i = 0;
    sum = 0;
    while (i < 10)
    {
        sum += n[i];
        i++;
    }
    printf("Sum using While Loop: %d\n", sum);

    // Sum using Do While Loop
    i = 0;
    sum = 0;
    do
    {
        sum += n[i];
        i++;
    } while (i < 10);
}
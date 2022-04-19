#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 7; i += 2)
    {
        for (int k = 1; k < 7 - i; k += 2)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {

            printf("*");
        }
        printf("\n");
    }
    for (i = 5; i >= 1; i -= 2)
    {
        for (int k = 1; k < 7 - i; k += 2)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
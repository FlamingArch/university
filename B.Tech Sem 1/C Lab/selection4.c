#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    scanf("%d", &x);

    if (x >= 0 || x < 11)
        printf("%d", pow(2, x) + 2);

    else if (x >= 11 || x < 21)
        printf("%d", pow(2, x) + (2 * x));

    else if (x >= 21 || x < 31)
        printf("%d", pow(2, x) + (pow(2, x) * 2));

    else
        printf("0");

    return 0;
}
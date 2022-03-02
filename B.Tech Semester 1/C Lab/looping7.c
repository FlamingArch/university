#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    int fact = 1;
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
    printf("%d\n", fact);
}

#include <stdio.h>

int main()
{
    int a;
    printf("Enter Number: ");
    scanf("%d", &a);

    a % 2 == 0 ? printf("Even\n") : printf("Odd\n");
}
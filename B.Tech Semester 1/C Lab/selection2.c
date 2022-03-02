#include <stdio.h>

int main()
{
    int a;
    printf("Enter Number: ");
    scanf("%d", &a);

    a == 0 ? printf("Zero\n") : a < 0 ? printf("Negative\n")
                                      : printf("Positive\n");
}
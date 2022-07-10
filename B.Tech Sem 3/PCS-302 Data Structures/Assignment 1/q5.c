#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    printf("Sum: %d\nAverage: %.2f\n", a + b + c, (float)(a + b + c) / 3);

    return 0;
}
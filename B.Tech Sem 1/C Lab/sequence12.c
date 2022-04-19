#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a, b, c in ax^2 + bx + c: > ");
    scanf("%d %d %d", &a, &b, &c);

    roots(a, b, c);
    return 0;
}

// Function to find roots of quadratic equation
void roots(int a, int b, int c)
{
    int d = b * b - 4 * a * c;
    if (d < 0)
    {
        printf("No real roots\n");
    }
    else if (d == 0)
    {
        printf("One real root: %f\n", -b / (2 * a));
    }
    else
    {
        printf("Two real roots: %f and %f\n", (-b + sqrt(d)) / (2 * a), (-b - sqrt(d)) / (2 * a));
    }
}
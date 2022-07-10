#include <stdio.h>

int main()
{
    int i, j, n;
    float x[10], y[10], sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
    float a, b, d;
    printf("\nInput the Value of n\n");
    scanf("%d", &n);
    printf("\nInput the values of x and y\n");
    for (i = 0; i < n; i++)
    {
        scanf("%f%f", &x[i], &y[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + x[i];
        sum2 = sum2 + x[i] * x[i];
        sum3 = sum3 + y[i];
        sum4 = sum4 + x[i] * y[i];
    }
    d = n * sum2 - sum1 * sum1;
    a = (sum2 * sum3 - sum1 * sum4) / d;
    b = (n * sum4 - sum1 * sum3) / d;
    printf("\nThe values of a and b are : %f\t%f\n", a, b);
    printf("\nThe Linear Relation is : \n");
    if (b > 0)
    {
        printf("\ny=%f+%fx\n", a, b);
    }
    else
    {
        printf("y=%f%fx", a, b);
    }
}
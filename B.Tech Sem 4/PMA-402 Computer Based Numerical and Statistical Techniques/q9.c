#include <stdio.h>
#include <math.h>
float fx(float y, float z)
{
    float x1;
    x1 = 4 - 2 * y - 3 * z;
    return x1;
}
float fy(float x, float z)
{
    float y1;
    y1 = (8 - 5 * x - 7 * z) / 6;
    return y1;
}
float fz(float x, float y)
{
    float z1;
    z1 = (3 - 9 * x - y) / 2;
    return z1;
}
int main()
{
    int i, j, n;
    float a1, b1, c1;
    float a, b, c;
    float ar[3][4], x[3];
    printf("Enter the no. of Iteration : ");
    scanf("%d", &n);
    printf("Enter The initial value : ");
    scanf("%f %f %f", &a, &b, &c);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            a1 = fx(b, c);
            b1 = fy(a, c);
            c1 = fz(a, b);
            a = a1;
            b = b1;
            c = c1;
        }
    }
    printf("a1 = %f\n a2 = %f\n a3 = %f", a1, b1, c1);
    return 0;
}
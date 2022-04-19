#include <stdio.h>

int isArmstrong(int n)
{
    int sum = 0;
    int temp = n;
    while (temp > 0)
    {
        sum += (temp % 10) * (temp % 10) * (temp % 10);
        temp /= 10;
    }
    return sum == n;
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", isArmstrong(n));
    return 0;
}
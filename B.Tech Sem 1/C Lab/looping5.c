#include <stdio.h>

void isPrime(int n)
{
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            printf("%d is not a prime number\n", n);
            return;
        }
        i++;
    }
    printf("%d is a prime number\n", n);
}

int main()
{
    int a;
    scanf("%d", &a);

    isPrime(a);
}
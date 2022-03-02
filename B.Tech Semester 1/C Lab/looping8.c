#include <stdio.h>

void fibonacci(int n)
{
    int a = 0;
    int b = 1;
    int c = 0;
    int i = 0;
    while (i < n)
    {
        c = a + b;
        a = b;
        b = c;
        i++;
    }
    printf("%d\n", c);
}

int main()
{
    int n;
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
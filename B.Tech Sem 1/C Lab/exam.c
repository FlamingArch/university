#include <stdio.h>

void main()
{
    int n;
    scanf("%d", &n);

    n % 2 ? printf("%d", n * n * n)
          : printf("%d", n * n);
}
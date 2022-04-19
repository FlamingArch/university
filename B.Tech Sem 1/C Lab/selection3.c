#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    printf("Absolute Value: ", x < 0 ? -x : x);
}

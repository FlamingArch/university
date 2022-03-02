#include <stdio.h>

int main()
{
    int p, r, t;

    printf("Principal: > ");
    scanf("%d", &p);

    printf("Rate of Interest (per annum): > ");
    scanf("%d", &r);

    printf("Time: > ");
    scanf("%d", &t);

    printf("%d", p * r * t / 100);
}
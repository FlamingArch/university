#include <stdio.h>

int main()
{
    int bp;
    scanf("%d", &bp);

    int hra = bp * 0.1,
        ta = bp * 0.5,
        da = bp * 0.15;

    printf("%d", bp + hra + ta + da);
}
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 10, b = 20, c = 5, e = 2;
    float q = 2.5, d = 4.5;
    // printf("   I: %f\n", (float)a / b + ((float)(a /(2*b))));
    // printf("  II: %f\n", (float)++a + b-- / q );
    // printf(" III: %f\n", (float)(b%a++));
    // printf("  IV: %f\n", (float)(b%++a));
    // printf("   A: %d\n", a);
    // printf("2011: %f\n", 20%11);
    printf("%d", a + 2 < b || (!c && a == d) || a - 2 <= e);
    return 0;
}

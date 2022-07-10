#include <stdio.h>

int main(int argc, char const *argv[])
{
    int p, t, r;
    printf("Enter Principal Amount: > ");
    scanf("%d", &p);
    printf("Enter Annual Rate of Interest: > ");
    scanf("%d", &r);
    printf("Enter Time Period: > ");
    scanf("%d", &t);

    printf("\nTotal Simple Interest after %d Years: %.2f\n", t, (float)(p*r*t)/100);
    
    return 0;
}

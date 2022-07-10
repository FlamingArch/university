#include <stdio.h>
#include <math.h>

int main()
{
    float abserror, relerror, percerror, trueval, approxval;
    printf("Enter True value");
    scanf("%f", &trueval);
    printf("Enter approx value");
    scanf("%f", &approxval);
    abserror = fabs(trueval - approxval);
    relerror = abserror / trueval;
    percerror = relerror * 100;
    printf("\nabsolute error = %f\n", abserror);
    printf("\nrelative error = %f\n", relerror);
    printf("\npercentage error = %f\n", percerror);
    return 0;
}
//Write a PROGRAM in C TO FIND ERROR,ABSOLUTE ERROR,RELATIVE ERROR,PERCENTAGE ERROR.
//You can use some predefined functions to calculate absolute error.


#include <stdio.h>
#include <math.h>

int main() {
    double act, got;
    
    printf("Enter Resultant Value: ");
    scanf("%lf", &got);
    
    printf("Enter Approximate Value: ");
    scanf("%lf", &act);
    
    printf("\n");
    printf("\nAbsolute Error: %lf", fabs(got-act));
    printf("\nRelative Error: %lf", fabs(got-act)/got);
    printf("\nPercentage Error:%lf\n", (fabs(got-act)/got)*100);
    
    return 0;
}

#include <stdio.h>

int main(int argc, char const *argv[])
{
    double length, breadth;

    printf("Enter Length: > ");
    scanf("%lf", &length);

    printf("Enter Breadth: > ");
    scanf("%lf", &breadth);

    printf("Area: %.2lf\n", length*breadth);
    printf("Perimeter: %.2lf\n", 2.0*(length+breadth));

    return 0;
}

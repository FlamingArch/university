#include <stdio.h>
#define PI 3.141592

int main(int argc, char const *argv[])
{
    double radius;
    
    printf("Enter Radius: > ");
    scanf("%lf", &radius);

    printf("Diameter: %.2lf\n", radius*2);
    printf("Area: %.2lf\n", PI*radius*radius);
    printf("Perimeter: %.2lf\n", 2*PI*radius);
    return 0;
}

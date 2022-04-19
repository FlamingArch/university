#include <stdio.h>

int main()
{
    double length;
    printf("Enter Length: > ");
    scanf("%lf", &length);

    double breadth;
    printf("Enter Breadth: > ");
    scanf("%lf", &breadth);

    double radius;
    printf("Enter Radius: > ");
    scanf("%lf", &radius);

    double area = length * breadth;
    printf("Area of rectangle: %f\n", area);

    double perimeter = 2 * (length + breadth);
    printf("Perimeter of rectangle: %f\n", perimeter);

    double area_circle = 3.14 * radius * radius;
    printf("Area of circle: %f\n", area_circle);

    double circumference = 2 * 3.14 * radius;
    printf("Circumference of circle: %f\n", circumference);

    return 0;
}

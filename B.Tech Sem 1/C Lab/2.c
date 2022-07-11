/*F303

    QUESTION 2:
    Write a program to find minimum of three numbers.

*/


#include <stdio.h>

void main(void)
{
    int a,b,c;


    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);


    if(a < b && a < c)
    {
        printf("Minimum among %d, %d, %d is: %d", a, b, c, a);
    }
    else if(b < a && b < c)
    {
        printf("Minimum among %d, %d, %d is: %d", a, b, c, c);
    }
    else if(c < a && c < b)
    {
        printf("Minimum among %d, %d, %d is: %d", a, b, c, c);
    }
}

/*F303

    QUESTION 3:
    Write a menu driven program to design a calculator which can perform basic operations like %, /, *, +, -.

*/


#include <stdio.h>

void main(void)
{

    int a,b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Press:\n1 for modulus\n2 for division\n3 for multiplication\n4 for addition\n5 for subtraction\n\n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:
        printf("Modulus of %d and %d gives : %d\n", a, b, a%b);
        break;
    case 2:
        printf("Division of %d and %d gives : %.2f\n", a, b, (float)a/b);
        break;
    case 3:
        printf("Multiplication of %d and %d gives : %d\n", a, b, a*b);
        break;
    case 4:
        printf("Addition of %d and %d gives : %d\n", a, b, a+b);
        break;
    case 5:
        printf("Subtraction of %d and %d gives : %d\n", a, b, a-b);
        break;
    
    default:
        printf("Invalid Operation\n");
        break;
    }

}
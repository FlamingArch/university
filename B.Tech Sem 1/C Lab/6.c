/*F303

    QUESTION 6:
    Write a program which will take a number and will print it in reverse along with number of digits present in that number.
*/


#include <stdio.h>

void main(void)
{
    int n, cnt=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Reverse of number: ");
    while(n>0)
    {
        printf("%d", n%10);
        n/=10;
        cnt++;
    }
    printf("\nNumber of digits: %d", cnt);
}
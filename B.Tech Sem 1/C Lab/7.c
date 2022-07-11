/*F303

    QUESTION 7:
    Write a program which will print fibonacci series upto limit n.
*/


#include <stdio.h>

void main(void)
{

    int n,i,  iold1 = 1, iold2 = 0;
    printf("Enter limit : ");
    scanf("%d", &n);
    
    while (i<n)
    {
        printf("%d, ", i);
        i = iold1 + iold2;
        iold2 = iold1;
        iold1 = i;
    }
}
/*F303

    QUESTION 5:
    Write a program to print following patterns.
                    1    
                   121   
                  12321  
                 1234321 
                123454321
*/


#include <stdio.h>

void main(void)
{

    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int l = 0; l < (n-i); l++)
        {
            printf(" ");
        }
        
        for (int k = 1; k<=i; k++)
        {
            printf("%d", k);
        }

        for (int k = i-1; k > 0; k--)
        {
            printf("%d", k);
        }
        
        
        for (int l = 0; l < (n-i); l++)
        {
            printf(" ");
        }
        
        printf("\n");
    }
    
}
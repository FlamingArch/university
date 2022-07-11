/*F303

    QUESTION 10:
    Write a program to input n elements in array and check whether an inputted number k exists in that array or not. If yes, then find the frequency of number k in array.

*/


#include <stdio.h>

void main(void)
{
    int n,k, f=0;
    printf("Enter the limit of first array(n): ");
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("Enter the number (k): ");
    scanf("%d", &k);
    
    for (int i = 0; i < n; i++)
    {
        if(a[i]==k) f++;
    }
    if(f>0) printf("YES number exist in the array.\nFrequency of %d : %d\n", k, f);
    else ("NO number doesn't exist in the array.");
}
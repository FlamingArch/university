/*F303

    QUESTION 1:
    Write a program to read an alphabet. If it is in capital case then convert it to lower case and vice versa.

*/


#include <stdio.h>

void main(void)
{
    char c;

    printf("Enter an alphabet: ");
    scanf("%c", &c);
    
    if(c <= 90 && c >= 65)
    {
        c += 32;
    }
    else if(c <= 122 && c >= 97)
    {
        c -= 32;
    }    

    printf("%c\n", c);
}

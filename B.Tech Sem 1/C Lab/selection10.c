#include <stdio.h>

int main()
{
    char c;
    scanf("%c", &c);

    if (c >= '0' && c <= '9')
        printf("Number\n");
    else if (c >= 'a' && c <= 'z')
        printf("Alphabet\n");
    else
        printf("Symbol\n");
}
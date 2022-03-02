#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    char operator;
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    }
}

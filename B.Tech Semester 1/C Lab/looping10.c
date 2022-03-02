#include <stdio.h>

int isPalindrome(int n)
{
    int temp = n;
    int rev = 0;
    while (n > 0)
    {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    if (temp == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", isPalindrome(n));
    return 0;
}
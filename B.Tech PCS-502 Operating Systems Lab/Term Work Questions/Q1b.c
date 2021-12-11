#include <stdio.h>
#include <unistd.h>
int main()
{
    fork();
    printf("Un\n");
    fork();
    printf("Dos\n");
    fork();
    printf("Tres\n");
    return 0;
}
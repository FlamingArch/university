#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Int: %lu Bytes\n", sizeof(int));
    printf("Float: %lu Bytes\n", sizeof(float));
    printf("Double: %lu Bytes\n", sizeof(double));
    printf("Char: %lu Bytes\n", sizeof(char));
    return 0;
}

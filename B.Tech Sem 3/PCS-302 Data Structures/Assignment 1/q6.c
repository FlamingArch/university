#include <stdio.h>

int main(int argc, char const *argv[])
{
    float tempc;
    printf("Enter Temperature (in Celsius): > ");
    scanf("%f", &tempc);
    printf("Temperature in Farenheit: %.2f\n", (tempc * 1.8) + 32.0);
    return 0;
}

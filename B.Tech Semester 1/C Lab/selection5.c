#include <stdio.h>
#include <math.h>

int main()
{
    int n[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &n[i]);
    }

    int max = n[0];
    for (int i = 1; i < 3; i++)
    {
        if (n[i] > max)
        {
            max = n[i];
        }
    }

    printf("Max: ", max);
}
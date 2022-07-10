#include <iostream>
#include <math.h>

using namespace std;

int jumpSearch(int arr[], int x, int n)
{
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n) - 1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < x)
    {
        prev++;
        if (prev == min(step, n))
            return -1;
    }
    if (arr[prev] == x)
        return prev;
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 1, 7, 3, 56, 32, 21, 76, 21};
    printf("%d", jumpSearch(arr, 10, 27));
    return 0;
}

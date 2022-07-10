#include <iostream>

int binarySearch(int arr[], int size, int target)
{
    int left = 0;
    int right = size - 1;
    int mid = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 1, 7, 3, 56, 32, 21, 76, 21};
    printf("%d", binarySearch(arr, 10, 27));
    return 0;
}
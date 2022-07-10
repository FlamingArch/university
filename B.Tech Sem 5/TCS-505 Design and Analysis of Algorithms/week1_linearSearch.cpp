#include <iostream>

using namespace std;

int linearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {2, 4, 1, 7, 3, 56, 32, 21, 76, 21};
    printf("%d", linearSearch(arr, 10, 27));
    return 0;
}

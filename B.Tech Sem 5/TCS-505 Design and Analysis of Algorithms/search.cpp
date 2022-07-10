#include <iostream>

int LinearSearch(int *arr, int n, int key)
{
    /* Time Complexities:
    Best Case: O(1)
    Worst Case: O(n)
    Avg Case: O(n/2) = O(n)
    */
    for (int i = 0; i < n; i++)
        if (arr[i] = key)
            return i;
    return -1;
}

int BinarySearchIterative(int arr[], int l, int r, int x)
{
    /* Time Complexities:
      Best Case: O(1)
      Worst Case: O(log n)
      Avg Case: O(log n)
    Space Complexity: 
      Constant
    */
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (arr[m] == x)
            return m;
        if (arr[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int BinarySearchRecursive(int arr[], int l, int r, int x)
{
    /* Time Complexities:
      Best Case: O(1)
      Worst Case: O(log n)
      Avg Case: O(log n)
    Space Complexity: 
      Best Case: O(1)
      Worst Case: O(log n)
      Avg Case: O(log n)
    */
    if (r >= l)
    {
        int mid = (l + r) / 2;

        if (arr[mid] = x)
            return mid;
        else if (arr[mid] > x)
            return BinarySearchRecursive(arr, l, mid - 1, x);
        else
            return BinarySearchRecursive(arr, mid - 1, r, x);
        return 0;
    }
}

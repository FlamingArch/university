/*
        ===================================
        |         Selection Sort          |
        ===================================

Selection Sort is a Simple Sorting Algorithm

It is an in-place, comparision based algorithm in which the array is divided 
into two parts, the sorted part on the left and the unsorted part on the 
right end of array.

Initially, the sorted part is empty, and the unsorted part is the entire array.

The algorithm is not suitable for large datasets.

Complexity is O(n) of selection sort in all cases, i.e. best, average
and worst, where n is the number of element.

It takes N-1 passes (Iterations) to sort an array of N elements.

It takes N-1 passes (iterations) to an array of n elements.

      -------------------------------------
      |     How Selection Sort Works?     |
      -------------------------------------

Consider the following array as an example:
    arr[] = {22,11,33,44,2,3}
Here, n = 6
Therefore, Seletion sort will take at most 5 passes to sort this array.

For the first position in the array, whole array is scanned swquentially.
We search the whole array, and find that 2 is the lowest value.
So, we swap 22 with 2.
[Iter=1]  arr[] = {2,11,33,44,22,3}
Repeating above process:
[Iter=2]  arr[] = {2,3,33,44,22,11}
[Iter=3]  arr[] = {2,3,11,44,22,33}
[Iter=4]  arr[] = {2,3,11,22,44,33}
[Iter=5]  arr[] = {2,3,11,22,33,44}

      -------------------------------------
      |            Psuedocode             |
      -------------------------------------

Array[]: Array of items n (size of array)

for i = 1 to n-1
    min = Array[i]
    pos = i
    for j = i+1 to n
        if array[j] < min then
            min = Array[j]
            pos = j
        end if
    end for
    if pos!=i then
        swap Array[pos] with Array[i]
    end if
end for

end of algorithm

*/

#include <stdio.h>

void selectionSort(int arr[], int n);

int main()
{
    int arr[] = {22, 11, 33, 44, 2, 3}; // n = 6, therefor 5 passes at max
    selectionSort(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min = arr[i];
        int pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                pos = j;
            }
        }
        if (pos != i)
        {
            arr[pos] = arr[i];
            arr[i] = min;
        }
    }
}
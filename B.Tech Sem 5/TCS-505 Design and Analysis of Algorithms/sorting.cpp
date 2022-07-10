void BubbleSort(int arr[], int n)
{
    /* Time Complexity:
    - Best Case : O(n^2)
    - Worst Case: O(n^2)
    - Avg Case: O(n^2)
    No. of Swap:
    - Best Case : 0
    - Worst Case: n(n-1)/2
    - Avg Case: n^2
    Space Complexity: O(1)
    */
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void SelectionSort(int arr[], int n)
{
    /* Time Complexity:
    - Best Case: O(n^2)
    - Average Case: O(n^2)
    - Worst Case: O(n^2)
    No. of Swap:
    - Best Case : n
    - Worst Case: n
    - Avg Case: n
    No. of Comparisons:
    - Best Case : n(n-1)/2
    - Worst Case: n(n-1)/2
    - Avg Case: n(n-1)/2
    Space Complexity: 
    - Best Case : O(1)
    - Worst Case: O(1)
    - Avg Case: O(1)
    */
    int min_idx;
    for (int i = 0; i < n; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }
}
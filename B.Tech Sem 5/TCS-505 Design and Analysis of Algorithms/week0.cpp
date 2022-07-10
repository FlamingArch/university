#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int key;
    cin >> key;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = -1;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            ans = i;
            break;
        }
        else
            count++;
    }
    if (ans != -1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    cout << "Comparisons: " << count << endl;
    return 0;
}

//min computation path  Dhruv punetha ML
//use priority queue if want lesser time
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, t, ans;
    vector<int> vec;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        vec.push_back(t);
    }
    for (int i = 0; i < n; i++)

        sort(vec.begin(), vec.end());
    ans = 0;
    for (int i = 1; i < vec.size(); i++)
    {
        vec[i] = vec[i - 1] + vec[i];
        ans += vec[i];
    }
    //in case you want to do priority queue approach
    /* priority_queue <int,vector<int>,greater<int>>mhe;
    */
    /* mhe.push(vec[i]);*/
    /*while(mhe.size()>1)
    {
        int e=mhe.top();
        mhe.pop();
        int e2=mhe.top();
        mhe.pop();
        ans+=(e+e2);
        mhe.push(e+e2);
    }*/
    cout << ans;
}
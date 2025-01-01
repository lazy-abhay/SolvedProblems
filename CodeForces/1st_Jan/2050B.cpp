/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n; 
    cin >> n; 
    vector<int> arr(n); 
    for(auto &it: arr)  
        cin >> it; 
    int sum = accumulate(all(arr), 0LL); 
    if(sum % n != 0)
    {
        cout << "NO"; 
        return; 
    }
    int avg = sum / n; 
    for(int i = 0; (i+2) < n; ++i)
    {
        if(arr[i] == avg);
        else if(arr[i] < avg)
            arr[i+2] -= (avg - arr[i]), arr[i] = avg; 
        else
            arr[i+2] += (arr[i] - avg), arr[i] = avg; 
    }
    if(count(all(arr), avg) == n)
        cout << "YES"; 
    else
        cout << "NO"; 
}

int32_t main(void)
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int __test_case = 1;
    cin >> __test_case;

    for (int __t = 1; __t <= __test_case; ++__t)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}
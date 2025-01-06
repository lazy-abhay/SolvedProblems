/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
 
void solve(int __test_case)
{
    int n, k; 
    cin >> n >> k; 
    vector<int> arr(n); 
    for(auto &it: arr)
        cin >> it; 
    sort(all(arr)); 
    int prev = 0, ans = k;  
    for(int i = 0; i < n; ++i)
    {
        k -= (arr[i] - prev) * (n-i); 
        prev = arr[i]; 
        if(k > 0)
            ans++; 
        else
            break; 
    }
    cout << ans; 
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
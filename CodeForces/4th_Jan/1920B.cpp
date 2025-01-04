/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{  
    int n, k, x; 
    cin >> n >> k >> x; 
    vector<int> arr(n); 
    for(auto &it: arr)
        cin >> it; 
    sort(all(arr)); 
    int j = n-1; 
    int t = x; 
    int sum = accumulate(all(arr), 0LL); 
    while(t--)
        sum -= 2 * arr[j], j--;
    int ans = sum; 
    j = n-1; 
    while(k--)
    {
        sum += arr[j]; 
        if((j-x) >= 0)
            sum -= 2 * arr[j-x]; 
        j--;
        ans = max(ans, sum); 
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
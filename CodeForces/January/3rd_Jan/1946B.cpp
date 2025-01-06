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
    int MOD = 1e9 + 7; 
    int curr = 0, maxm = 0; 
    int sum = accumulate(all(arr), 0LL); 
    sum = (sum % MOD + MOD) % MOD;  
    for(auto &it: arr)
    {
        curr += it; 
        curr = max(curr, 0LL); 
        maxm = max(maxm, curr); 
    }
    k--; 
    sum += maxm; 
    sum %= MOD; 
    while(k-- && maxm > 0)
    {
        sum += 2 * maxm; 
        maxm *= 2; 
        maxm %= MOD; 
        sum %= MOD;
    }
    cout << sum; 
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
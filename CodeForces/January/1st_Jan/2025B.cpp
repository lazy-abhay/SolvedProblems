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
    for(int i = 0; i < n; ++i)
    {
        int x; 
        cin >> x; 
    }
    vector<int> dp(1e5+1, 1); 
    int MOD = 1e9+7; 
    for(int i = 1; i <= 1e5; ++i)
        dp[i] = (dp[i-1] * 2) % MOD; 
    for(int i = 0; i < n; ++i)
    {
        int x; 
        cin >> x; 
        cout << dp[x] << endl; 
    }
}

int32_t main(void)
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int __test_case = 1;
    // cin >> __test_case;

    for (int __t = 1; __t <= __test_case; ++__t)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}
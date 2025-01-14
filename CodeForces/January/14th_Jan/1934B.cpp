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
    vector<int> arr = {1, 3, 6, 10, 15};
    int ans = INT_MAX;
    vector<vector<int>> dp;
    auto dfs = [&](auto &&self, int val, int idx) -> int
    {
        if (val < 0)
            return INT_MAX;
        if (val == 0)
            return 0;
        if (idx == 5)
            return INT_MAX;
        if (dp[val][idx] != -1)
            return dp[val][idx];
        int ans = self(self, val, idx + 1);
        if (val >= arr[idx])
            ans = min(ans, 1LL + self(self, val - arr[idx], idx));
        return dp[val][idx] = ans;
    };
    if (n <= 90)
    {
        dp.assign(n + 1, vector<int>(6, -1));
        ans = dfs(dfs, n, 0);
        cout << ans;
    }
    else
    {
        int div = n / 15;
        int rem = n % 15;
        for (int i = 0; i <= 6; ++i)
        {
            int temp = div - i;
            dp.assign(106, vector<int>(5, -1));
            temp += dfs(dfs, rem + 15 * i, 0);
            ans = min(ans, temp);
        }
        cout << ans;
    }
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
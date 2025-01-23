/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int32_t main(void)
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    auto solve = [&](int __t) -> void
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        int sum = accumulate(all(arr), 0LL);
        sum = abs(sum);
        int dp[n][2];
        dp[0][0] = arr[0];
        dp[0][1] = abs(arr[0]);
        for (int i = 1; i < n; ++i)
        {
            dp[i][0] = dp[i - 1][0] + arr[i];
            dp[i][1] = max(abs(dp[i - 1][0] + arr[i]), abs(dp[i - 1][1] + arr[i]));
        }
        cout << max({sum, dp[n - 1][0], dp[n - 1][1]});
    };

    int __T = 1;
    cin >> __T;

    for (int __t = 1; __t <= __T; __t++)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}
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
    ios_base::sync_with_stdio(false);

    auto abhay = [&](int __t) -> void
    {
        string str;
        cin >> str;
        int n = str.length();
        map<pair<int, char>, bool> dp;
        auto dfs = [&](auto &self, int i, char prev) -> bool
        {
            if (i >= n)
                return 1;
            if (dp.find({i, prev}) != dp.end())
                return dp[{i, prev}];
            if (str[i] < prev)
            {
                if (i == (n - 1))
                    return dp[{i, prev}] = 1;
                else if (str[i + 1] < prev)
                    return dp[{i, prev}] = 0;
                else
                    return dp[{i, prev}] = self(self, i + 2, str[i + 1]);
            }
            else
            {
                bool ans = self(self, i + 1, str[i]);
                if (i + 1 < n && str[i + 1] >= prev)
                    ans |= self(self, i + 2, str[i + 1]);
                return dp[{i, prev}] = ans;
            }
        };
        if (dfs(dfs, 0, '0' - 1))
            cout << "YES";
        else
            cout << "NO";
    };

    int T = 1;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        abhay(t);
        cout << endl;
    }
    return 0;
}
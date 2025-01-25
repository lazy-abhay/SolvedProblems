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
        vector<string> str(2);
        cin >> str[0];
        cin >> str[1];
        string ans = "";
        ans += str[0][0];
        bool flag = 0;
        for (int j = 1; j < n; ++j)
        {
            
            if (flag == 1)
                ans += str[1][j - 1];
            else if (str[0][j] <= str[1][j - 1])
                ans += min(str[0][j], str[1][j-1]); 
            else
            {
                ans += str[1][j - 1];
                flag = 1;
            }
        }
        ans += str[1][n - 1];
        cout << ans << endl;
        auto isValid = [&](int x, int y) -> bool
        {
            return (x < 2 && y < n);
        };
        vector<vector<int>> dp(2, vector<int>(n, -1));
        auto dfs = [&](auto &self, int i, int j) -> int
        {
            if (!isValid(i, j))
                return 0;
            if (dp[i][j] != -1)
                return dp[i][j];
            if (i == 1 && j == (n - 1))
                return dp[i][j] = 1;
            if (ans[i + j] != str[i][j])
                return 0;
            return dp[i][j] = self(self, i, j + 1) + self(self, i + 1, j);
        };
        cout << dfs(dfs, 0, 0);
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
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
        vector<string> arr(2);
        for (int i = 0; i < 2; ++i)
            cin >> arr[i];
        auto isValid = [&](int i, int j) -> bool
        {
            return (i >= 0 && i < 2 && j >= 0 && j < n);
        };
        vector<int> dx = {0, 1, -1};
        vector<int> dy = {1, 0, 0};
        vector<vector<int>> dp(2, vector<int>(n, -1));
        auto dfs = [&](auto &self, int i, int j) -> bool
        {
            if (!isValid(i, j))
                return 0;
            if (i == 1 && j == (n - 1))
                return 1;
            if(dp[i][j] != -1)
                return dp[i][j]; 
            bool flag = 0;
            for (int k = 0; k < 4; ++k)
            {
                int x = i + dx[k];
                int y = j + dy[k];
                if (!isValid(x, y))
                    continue;
                if (arr[x][y] == '>')
                    y++;
                else
                    continue;
                flag |= self(self, x, y);
            }
            return dp[i][j] = flag;
        };
        if (dfs(dfs, 0, 0))
            cout << "YES";
        else
            cout << "NO";
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
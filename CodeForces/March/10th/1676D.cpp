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
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m, 0));
        for (auto &it : arr)
            for (auto &itt : it)
                cin >> itt;
        auto query = [&](int i, int j) -> int
        {
            int ans = arr[i][j];
            int x = i - 1, y = j - 1;
            while (x >= 0 && y >= 0)
                ans += arr[x][y], x--, y--;
            x = i - 1, y = j + 1;
            while (x >= 0 && y < m)
                ans += arr[x][y], x--, y++;
            x = i + 1, y = j - 1;
            while (x < n && y >= 0)
                ans += arr[x][y], x++, y--;
            x = i + 1, y = j + 1;
            while (x < n && y < m)
                ans += arr[x][y], x++, y++;
            return ans;
        };
        int ans = 0;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                ans = max(ans, query(i, j));
        cout << ans;
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
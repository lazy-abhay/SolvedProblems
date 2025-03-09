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
        auto dfs = [&](auto &self, int x) -> bool
        {
            if (x < m)
                return 0;
            if (x == m)
                return 1;
            if (x % 3 != 0)
                return 0;
            return (self(self, x / 3) || self(self, 2 * (x / 3)));
        };
        bool flag = dfs(dfs, n);
        cout << (flag ? "YES" : "NO");
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
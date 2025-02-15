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

    // Its either the pain or regret, or the pain of discipline
    auto solve = [&](int __t) -> void
    {
        int n;
        cin >> n;
        int m = n - 1;
        vector<vector<int>> adj(n);
        for (int i = 0; i < m; ++i)
        {
            int u, v;
            cin >> u >> v;
            u--, v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        if (m == 1)
        {
            cout << 1;
            return;
        }
        int ans = 0;
        auto dfs = [&](auto &&self, int node, int par) -> int
        {
            int maxm1 = 0, maxm2 = 0;
            for (auto &it : adj[node])
            {
                if (it != par)
                {
                    int curr = self(self, it, node);
                    if (curr > maxm1)
                    {
                        maxm2 = maxm1;
                        maxm1 = curr;
                    }
                    else if (curr > maxm2)
                        maxm2 = curr;
                }
            }
            ans = max(ans, maxm1 + maxm2 + (int)adj[node].size() - 2);
            return maxm1+ (int)adj[node].size() - 2;
        };
        dfs(dfs, 0, -1);
        cout << ans + 2;
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
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
    int m = n - 1;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    map<int, int> leafCount;
    auto dfs = [&](auto &&self, int node, int par) -> int
    {
        if (adj[node].size() == 1 && adj[node][0] == par)
            return leafCount[node] = 1;
        for(auto &it: adj[node])
            if(it != par)
                leafCount[node] += self(self, it, node); 
        return leafCount[node];
    };
    dfs(dfs, 1, -1); 
    int q; 
    cin >> q; 
    while(q--)
    {
        int u, v; 
        cin >> u >> v; 
        cout << leafCount[u] * leafCount[v] << endl; 
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
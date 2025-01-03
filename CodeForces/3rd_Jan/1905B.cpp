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
    vector<vector<int>> adj(n+1); 
    while(m--)
    {
        int u, v; 
        cin >> u >> v; 
        adj[u].push_back(v); 
        adj[v].push_back(u); 
    }
    int leaf = 0; 
    auto dfs = [&](auto &&self, int node, int par) -> void
    {
        if(adj[node].size() == 1)
            leaf++; 
        for(auto &it: adj[node])
            if(it != par)
                self(self, it, node); 
    };
    dfs(dfs, 1, -1); 
    cout << (leaf + 1) / 2; 
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
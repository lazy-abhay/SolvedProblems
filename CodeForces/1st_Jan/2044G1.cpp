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
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    vector<int> inDegree(n+1, 0); 
    for(auto &it: arr)
    {
        inDegree[it]++; 
        // inDegree[it] = min(1, inDegree[it]); 
    }
    if(count(all(inDegree), 0) == 1)
    {
        cout << 2; 
        return; 
    }
    queue<int> q; 
    vector<vector<int>> adj(n+1); 
    for(int i = 0; i < n; ++i)
    {
        int u = i + 1; 
        int v = arr[i]; 
        adj[u].push_back(v); 
    }
    for(int i = 1; i <= n; ++i)
    {
        if(inDegree[i] == 0)
            q.push(i); 
    }
    int ans = 2;
    while(!q.empty())
    {
        ans++; 
        int sz = q.size(); 
        while(sz--)
        {
            int node = q.front(); 
            q.pop(); 
            for(auto &it: adj[node])
            {
                inDegree[it]--; 
                if(inDegree[it] == 0)
                    q.push(it); 
            }
        }
    }
    cout << ans; 
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
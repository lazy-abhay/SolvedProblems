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
        int n, k, pb, ps;
        cin >> n >> k >> pb >> ps;
        vector<bool> visited;
        vector<int> p(n + 1), a(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> p[i];
        for (int i = 1; i <= n; ++i)
            cin >> a[i];
        auto dfs = [&](auto &&self, int idx, int K) -> int
        {
            if (K == 0)
                return 0;
            if (visited[idx])
                return a[idx] * K;
            visited[idx] = 1;
            return max(a[idx] * K, a[idx] + self(self, p[idx], K - 1));
        };
        visited.assign(n + 1, 0);
        int bodya = dfs(dfs, pb, k);
        visited.assign(n + 1, 0);
        int sasha = dfs(dfs, ps, k);
        // cerr << bodya << ' ' << sasha << endl;
        if (bodya == sasha)
            cout << "Draw";
        else if (bodya > sasha)
            cout << "Bodya";
        else
            cout << "Sasha";
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
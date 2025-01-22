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
        int n, m, l;
        cin >> n >> m >> l;
        multiset<pair<int, int>> st;
        for (int i = 0; i < n; ++i)
        {
            int l, r;
            cin >> l >> r;
            st.insert({l, r});
        }
        int ans = 0;
        multiset<pair<int, int>> power;
        for (int i = 0; i < m; ++i)
        {
            int x, v;
            cin >> x >> v;
            power.insert({x, v});
        }
        int curr = 1, k = 1;
        priority_queue<int> pq;
        while (!st.empty())
        {
            auto it = *st.begin();
            int l = it.first;
            int r = it.second;
            while (!power.empty() && (*power.begin()).first < l)
            {
                pq.push((*power.begin()).second);
                power.erase(power.begin());
            }
            if ((r - l + 1) >= k)
            {
                if (pq.empty())
                {
                    cout << -1;
                    return;
                }
                else
                {
                    ans++;
                    k += pq.top();
                    pq.pop();
                }
            }
            else
                st.erase(st.begin());
        }
        cout << ans;
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
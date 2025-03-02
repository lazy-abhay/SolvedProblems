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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> arr(m);
        for (auto &it : arr)
            cin >> it;
        vector<int> brr(k);
        for (auto &it : brr)
            cin >> it;
        if (k < (n - 1))
        {
            while (m--)
                cout << 0;
            return;
        }
        else if (k == n)
        {
            while (m--)
                cout << 1;
            return;
        }
        map<int, int> idx;
        for (int i = 0; i < m; ++i)
            idx[arr[i]] = i;
        vector<int> ans(m, 1);
        for (auto &it : brr)
            if (idx.find(it) != idx.end())
                ans[idx[it]] = 0;
        for (auto &it : ans)
            cout << it;
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
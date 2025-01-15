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
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        int __or = 0, __xor = 0;
        for (auto &it : a)
            __xor ^= it;
        for (auto &it : b)
            __or |= it;
        int minm = __xor;
        int maxm = 0;
        for (auto &it : a)
            maxm ^= (it | __or);
        cout << min(minm, maxm) << ' ' << max(minm, maxm); 
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
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
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;
        sort(all(a));
        sort(all(b));
        int x = a[0] + b[0];
        int y = a[n - 1] + b[n - 1];
        set<int> l, r;
        for (int i = 0; i < n; ++i)
        {
            l.insert(a[i]);
            r.insert(b[i]);
        }
        for (auto &it : l)
            for (auto &itt : r)
                if (it + itt != x && it + itt != y)
                {
                    cout << "YES";
                    return;
                }
        cout << "NO";
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
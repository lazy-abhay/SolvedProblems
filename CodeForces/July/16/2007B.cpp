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
        int maxm = INT_MIN;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            maxm = max(maxm, x);
        }
        while (m--)
        {
            char c;
            cin >> c;
            int l, r;
            cin >> l >> r;
            if (l <= maxm && maxm <= r)
                maxm += (c == '+' ? +1 : -1);
            cout << maxm << ' ';
        }
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
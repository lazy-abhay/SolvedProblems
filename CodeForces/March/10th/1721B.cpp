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
        int sx, sy;
        cin >> sx >> sy;
        int d;
        cin >> d;
        int maxm_y = sy + d;
        int minm_y = sy - d;
        int minm_x = sx - d;
        int maxm_x = sx + d;
        if ((maxm_y >= m && maxm_x >= n) || (minm_x <= 1 && minm_y <= 1) || (minm_x <= 1 && maxm_x >= n) || (minm_y <= 1 && maxm_y >= m))
        {
            cout << -1;
            return;
        }
        cout << n + m - 2;
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
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
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int x = max(0LL, m - a);
        int y = max(0LL, m - b);
        int ans = min(m, a) + min(m, b);
        ans += min(x, c);
        c -= x;
        c = max(0LL, c);
        ans += min(y, c);
        cout << ans;
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
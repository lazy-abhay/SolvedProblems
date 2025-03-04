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
        int x, y;
        cin >> x >> y;
        int cnt = 0;
        // cout << bitset<8>(x) << ' ' << bitset<8>(y) << endl;
        while (((x & 1) == (y & 1)) && (x > 0 || y > 0))
            cnt++, x /= 2, y /= 2;
        cout << (1LL << cnt);
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
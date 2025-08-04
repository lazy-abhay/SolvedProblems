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
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a > b)
        {
            if (a - 1 == b && a & 1)
                cout << y;
            else
                cout << -1;
        }
        else if (a == b)
            cout << 0;
        else
        {
            int l = ((b - a) / 2 + (!(a & 1) && (b & 1))) * min(x, y);
            int r = ((b - a) / 2 + (a & 1 && !(b & 1))) * x;
            cout << l + r;
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
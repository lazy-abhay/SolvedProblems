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
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        int ans = 0;
        auto op = [&](int a, int b, int c, int d) -> void
        {
            if ((a > c && b >= d) || (a  >= c && b > d))
                ans++;
        };
        op(a1, a2, b1, b2);
        op(a1, a2, b2, b1);
        op(a2, a1, b1, b2);
        op(a2, a1, b2, b1);
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
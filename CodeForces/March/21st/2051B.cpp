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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        int ans = 3 * (n / (a + b + c));
        n %= (a + b + c);
        if (n > 0)
        {
            n -= a;
            ans++;
        }
        if (n > 0)
        {
            n -= b;
            ans++;
        }
        if (n > 0)
        {
            n -= c;
            ans++;
        }
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
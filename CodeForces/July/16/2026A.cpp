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
        double k;
        cin >> x >> y >> k;
        int minm = min(x, y);
        cout << 0 << ' ' << 0 << ' ' << minm << ' ' << minm;
        cout << endl;
        cout << 0 << ' ' << minm << ' ' << minm << ' ' << 0;
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
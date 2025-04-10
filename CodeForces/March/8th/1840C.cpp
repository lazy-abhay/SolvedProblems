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
        int n, k, q;
        cin >> n >> k >> q;
        int cnt = 0, ans = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (x <= q)
                cnt++;
            else
            {
                int y = cnt - k + 1;
                if (y > 0)
                    ans += y * (y + 1) / 2;
                cnt = 0;
            }
        }
        int y = cnt - k + 1;
        if (y > 0)
            ans += y * (y + 1) / 2;
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
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
        int n, k;
        cin >> n >> k;
        int ans = INT_MAX;
        if (k == 4)
        {
            int cnt = 0;
            bool flag = 0;
            for (int i = 0; i < n; ++i)
            {
                int x;
                cin >> x;
                if (x % 2 == 0)
                    cnt++;
                x %= k;
                if (x == 0)
                    ans = 0;
                ans = min(ans, k - x);
            }
            if (cnt == 0)
                ans = min(ans, 2LL);
            else if (cnt == 1)
                ans = min(ans, 1LL);
            else
                ans = 0;
        }
        else
        {
            for (int i = 0; i < n; ++i)
            {
                int x;
                cin >> x;
                x %= k;
                if (x == 0)
                    ans = 0;
                ans = min(ans, k - x);
            }
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
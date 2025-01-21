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
    ios::sync_with_stdio(false);

    auto solve = [&](int __t) -> void
    {
        int k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int ans = 0, curr_k = 1;
        for (int i = 0; i < 32; ++i)
        {
            int st = l1, en = r1;
            int l = -1, r = -2;
            while (st <= en)
            {
                int md = st + (en - st) / 2;
                if (md * curr_k >= l2 && md * curr_k <= r2)
                {
                    l = md;
                    en = md - 1;
                }
                else if (md * curr_k > r2)
                    en = md - 1;
                else
                    st = md + 1;
            }
            st = l1, en = r1;
            while (st <= en)
            {
                int md = st + (en - st) / 2;
                if (md * curr_k >= l2 && md * curr_k <= r2)
                {
                    r = md;
                    st = md + 1;
                }
                else if (md * curr_k > r2)
                    en = md - 1;
                else
                    st = md + 1;
            }
            ans += r - l + 1;
            // cout << l << ' ' << r << endl;
            curr_k *= k;
            if(curr_k > 1e9)
                break;
        }
        cout << ans;
    };

    int __T = 1;
    cin >> __T;

    for (int __t = 1; __t <= __T; __t++)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}
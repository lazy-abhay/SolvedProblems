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

    // Its either the pain or regret, or the pain of discipline
    auto solve = [&](int __t) -> void
    {
        int b, c, d;
        cin >> b >> c >> d;
        // bitset<5> _b(b), _c(c), _d(d);
        // cout << _b << endl;
        // cout << _c << endl;
        // cout << _d << endl;
        int mask = 1;
        int ans = 0;
        for (int i = 0; i < 62; ++i)
        {
            int __b = b & mask;
            int __c = c & mask;
            int __d = d & mask;
            if (__d == 0)
            {
                if (__b != 0 || __c != 0)
                    ans += mask;
            }
            else
            {
                if (__b != 0 && __c != 0)
                    ;
                else
                    ans += mask;
            }
            mask *= 2; 
        }
        // cout << bitset<5>(ans) << endl;
        if ((b | ans) - (c & ans) == d)
            cout << ans;
        else
            cout << -1;
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
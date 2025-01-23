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
        int n, m;
        cin >> n >> m;
        int l = max(0LL, n - m);
        int r = n + m;
        int ans = n;
        for (int i = 60; i >= 0; --i)
        {
            if ((n & (1LL << i)) != (r & (1LL << i)))
            {
                while (i >= 0)
                {
                    ans |= (1LL << i);
                    i--;
                }
                break;
            }
        }
        for (int i = 60; i >= 0; --i)
        {
            if ((n & (1LL << i)) != (l & (1LL << i)))
            {
                while (i >= 0)
                {
                    ans |= (1LL << i);
                    i--;
                }
                break;
            }
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
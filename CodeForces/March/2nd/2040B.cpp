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
        int n;
        cin >> n;
        int ans = 1;
        if (n == 1)
            cout << 1;
        else if (n <= 4)
            cout << 2;
        else
        {
            int idx = 1;
            while (idx < n)
            {
                ans++;
                idx = (idx + 1) * 2;
            }
            cout << ans;
        }
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
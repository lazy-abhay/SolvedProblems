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
        int n;
        cin >> n;
        for (int i = 1; i <= n; i += 2)
        {
            int x = n;
            if (n & 1)
                x--;
            int y = x + i;
            for (int j = 2; j * j <= y; ++j)
                if (y % j == 0)
                {
                    for (int k = 1; k <= n; k += 2)
                    {
                        if (k != i)
                            cout << k << ' ';
                    }
                    cout << i << ' ' << x << ' ';
                    for (int k = 2; k <= n; k += 2)
                        if (k != x)
                            cout << k << ' ';
                    return;
                }
        }
        cout << -1;
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
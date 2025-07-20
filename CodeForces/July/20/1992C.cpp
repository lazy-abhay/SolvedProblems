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
        int n, m, k;
        cin >> n >> m >> k;
        for (int i = n; i >= k; --i)
            cout << i << ' ';
        for (int i = m + 1; i < k; ++i)
            cout << i << ' ';
        for (int i = 1; i <= m; ++i)
            cout << i << ' ';
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
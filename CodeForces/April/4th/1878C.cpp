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
        int n, k, x;
        cin >> n >> k >> x;
        int a = k * (k + 1) / 2;
        int b = n * (n + 1) / 2 - (n - k) * (n - k + 1) / 2;
        if (x < a || x > b)
            cout << "NO";
        else
            cout << "YES";
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
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
        int n, x, y;
        cin >> n >> x >> y;
        int a = n / x;
        int b = n / y;
        int c = n / lcm(x, y);
        a -= c;
        b -= c;
        int sum = n * (n + 1) / 2;
        sum -= (n - a) * (n - a + 1) / 2;
        sum -= (b * (b + 1)) / 2;
        cout << sum;
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
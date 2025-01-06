/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n, k, a, b;
    cin >> n >> k >> a >> b;
    vector<int> x(n + 1), y(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cin >> x[i];
        cin >> y[i];
    }
    int ans = abs(x[a] - x[b]) + abs(y[a] - y[b]);
    int s = LLONG_MAX / 2, t = LLONG_MAX / 2;
    for (int i = 1; i <= k; ++i)
    {
        s = min(s, abs(x[a] - x[i]) + abs(y[a] - y[i]));
        t = min(t, abs(x[b] - x[i]) + abs(y[b] - y[i]));
    }
    ans = min(ans, s + t);
    cout << ans;
}

int32_t main(void)
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int __test_case = 1;
    cin >> __test_case;

    for (int __t = 1; __t <= __test_case; ++__t)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}
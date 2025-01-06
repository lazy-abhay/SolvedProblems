/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n, k;
    cin >> n >> k;
    if (n != 1 && (k == n || k == 1))
    {
        cout << -1;
        return;
    }
    if (n == 1 && k == 1)
    {
        cout << 1 << endl;
        cout << 1;
        return;
    }
    cout << 3 << endl;
    if (k & 1)
        cout << 1 << ' ' << k - 1 << ' ' << k + 2;
    else
        cout << 1 << ' ' << k << ' ' << k + 1;
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
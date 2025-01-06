/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int x, y, k;
    cin >> x >> y >> k;
    int ans = 0;
    if (x >= y && x != 0)
        ans += 2 * (int)((x + k - 1) / k) - ((x + k - 1) / k != (y + k - 1) / k || y == 0);
    else
        ans += 2 * (int)((y + k - 1) / k);
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
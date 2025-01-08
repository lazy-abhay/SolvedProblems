/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int x, y, z, area;
    cin >> x >> y >> z >> area;
    int ans = 0;
    for (int i = 1; i <= x; ++i)
    {
        for (int j = 1; j <= y; ++j)
        {
            int ar = i * j;
            if (area % ar == 0)
            {
                int k = area / ar;
                if (k <= z)
                {
                    // cout << i << ' ' << j << ' ' << k << endl;
                    ans = max(ans, (x - i + 1) * (y - j + 1) * (z - k + 1));
                }
            }
        }
    }
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
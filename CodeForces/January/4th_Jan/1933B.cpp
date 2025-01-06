/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int a, b, l;
    cin >> a >> b >> l;
    set<int> ans;
    for (int i = 0; i <= 21; ++i)
    {
        int x = pow(a, i);
        if (x > l)
            break;
        for (int j = 0; j <= 21; ++j)
        {
            int y = pow(b, j);
            if (y > l)
                break;
            int z = x * y;
            if (z > l)
                break;
            int div = l / z;
            if (l % z == 0)
                ans.insert(div);
        }
    }
    cout << ans.size();
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
/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    string a, b;
    cin >> a >> b;
    int n = a.length();
    int m = b.length();
    auto cmn = [&](int l, int r) -> int
    {
        int ans = 0;
        int i = l, j = 0;
        while (i <= r && j < n)
            if (b[i] == a[j])
                i++, j++, ans++;
            else
                j++;
        return ans;
    };
    int ans = n + m;
    for (int i = 0; i < m; ++i)
        for (int j = i; j < m; ++j)
        {
            string temp = b.substr(i, j - i + 1);
            int __cmn = cmn(i, j);
            if (__cmn == (j - i + 1))
                ans = min(ans, n + m - __cmn);
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
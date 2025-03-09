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
        string a, b;
        cin >> a >> b;
        int ans = a.length() + b.length();
        int n = a.length();
        int m = b.length();
        for (int i = 0; i < n; ++i)
            for (int j = i; j < n; ++j)
            {
                string temp = a.substr(i, j - i + 1);
                if (b.find(temp) != string::npos)
                    ans = min(ans, n + m - 2 * (j - i + 1));
            }
        cout << ans;
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
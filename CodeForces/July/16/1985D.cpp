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
        int n, m;
        cin >> n >> m;
        int x = 0, y = 0;
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            int z = -1;
            string str;
            cin >> str;
            int temp = count(all(str), '#');
            if (temp > cnt)
            {
                for (int j = 0; j < m; ++j)
                    if (str[j] == '#' && z == -1)
                        z = j;
                x = i + 1;
                y = z + (temp + 1) / 2;
                cnt = temp;
            }
        }
        cout << x << ' ' << y;
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
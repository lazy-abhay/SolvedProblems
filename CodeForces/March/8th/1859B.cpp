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
        int n;
        cin >> n;
        vector<vector<int>> arr(n);
        int minm = INT_MAX;
        int sum = 0;
        int y_min = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            int m;
            cin >> m;
            int x = INT_MAX, y = INT_MAX;
            for (int j = 0; j < m; ++j)
            {
                int z;
                cin >> z;
                if (z < x)
                    y = x, x = z;
                else if (z < y)
                    y = z;
            }
            minm = min(minm, x);
            sum += y;
            y_min = min(y_min, y);
            arr.push_back({y, x});
        }
        cout << sum + minm - y_min;
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
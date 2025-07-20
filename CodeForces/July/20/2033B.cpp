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
        vector<vector<int>> mat(n, vector<int>(n));
        for (auto &it : mat)
            for (auto &itt : it)
                cin >> itt;
        int ans = 0;
        for (int j = 0; j < n; ++j)
        {
            int x = 0, y = j;
            int minm = INT_MAX;
            while (x < n && y < n)
            {
                minm = min(minm, mat[x][y]);
                x++, y++;
            }
            ans += min(0LL, minm);
        }
        for (int i = 1; i < n; ++i)
        {
            int x = i, y = 0;
            int minm = INT_MAX;
            while (x < n && y < n)
            {
                minm = min(minm, mat[x][y]);
                x++, y++;
            }
            ans += min(0LL, minm);
        }
        cout << abs(ans);
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
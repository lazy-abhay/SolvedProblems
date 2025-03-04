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
        vector<vector<int>> arr(n, vector<int>(m, -1));
        for (auto &it : arr)
            for (auto &itt : it)
                cin >> itt;
        auto get = [&](int i, int j) -> int
        {
            if (i < 0 || i == n || j < 0 || j == m)
                return INT_MIN;
            return arr[i][j];
        };
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                int a = get(i - 1, j);
                int b = get(i + 1, j);
                int c = get(i, j - 1);
                int d = get(i, j + 1);
                if (arr[i][j] > max({a, b, c, d}))                                                                                                                                                                                                                                                                                                                                          
                    arr[i][j] = max({a, b, c, d});
                cout << arr[i][j] << ' ';
            }
            cout << endl;
        }
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
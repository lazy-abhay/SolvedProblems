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
        vector<string> arr(n);
        for (auto &it : arr)
            cin >> it;
        int ans = 0;
        map<int, int> row, col;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                if (arr[i][j] == '1')
                    row[i]++, col[j]++;
        int a = count_if(all(row), [&](const auto &x)
                      { return x.second % 2 == 1; });
        int b = count_if(all(col), [&](const auto &x)
                      { return x.second % 2 == 1; });
        cout << max(a, b);
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
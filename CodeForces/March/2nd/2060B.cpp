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
    ios::sync_with_stdio(false);

    // Its either the pain or regret, or the pain of discipline
    auto solve = [&](int __t) -> void
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        vector<int> ans(n);
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> arr[i][j];
                if (arr[i][j] >= 0 && arr[i][j] < n)
                    ans[arr[i][j]] = i + 1;
            }
            sort(all(arr[i]));
        }
        sort(all(arr));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 1; j < m; ++j)
                if (arr[i][j] - arr[i][j - 1] != n)
                {
                    cout << -1;
                    return;
                }
        }
        for (auto &it : ans)
            cout << it << ' ';
    };

    int __T = 1;
    cin >> __T;

    for (int __t = 1; __t <= __T; __t++)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}
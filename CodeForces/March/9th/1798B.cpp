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
        int m;
        cin >> m;
        vector<vector<int>> arr;
        for (int i = 0; i < m; ++i)
        {
            int n;
            cin >> n;
            vector<int> temp(n);
            for (auto &itt : temp)
                cin >> itt;
            arr.push_back(temp);
        }
        unordered_map<int, int> visited;
        vector<int> ans;
        for (int i = m - 1; i >= 0; --i)
        {
            bool flag = 1;
            for (auto &it : arr[i])
            {
                if (visited[it])
                    ;
                else
                {
                    if (flag)
                        ans.push_back(it);
                    flag = 0;
                    visited[it] = 1;
                }
            }
        }
        if ((int)ans.size() != m)
            cout << -1;
        else
        {
            reverse(all(ans));
            for (auto &it : ans)
                cout << it << ' ';
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
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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it : arr)
        {
            cin >> it;
            it--;
        }
        vector<bool> visited(n, 0);
        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if (!visited[i])
            {
                int temp = 0;
                int curr = i;
                while (!visited[curr])
                {
                    visited[curr] = 1;
                    temp++;
                    curr = arr[curr];
                }
                ans += (temp - 1) / 2;
            }
        }
        cout << ans;
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
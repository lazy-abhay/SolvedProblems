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

    auto solve = [&](int __t) -> void
    {
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        map<pair<int, int>, int> mp;
        int ans = 0;
        for (auto &it : arr)
        {
            int add = (x - it % x) % x;
            int sub = (y + it % y) % y;
            ans += mp[{add, sub}];
            mp[{it % x, it % y}]++;
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
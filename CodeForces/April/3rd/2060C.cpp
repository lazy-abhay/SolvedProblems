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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        map<int, int> mp;
        for (auto it : arr)
            mp[it]++;
        int ans = 0;
        for (auto &it : mp)
            if (mp.find(k - it.first) != mp.end())
            {
                if (it.first == k - it.first)
                {
                    ans += it.second / 2;
                    mp[it.first] = 0;
                }
                else
                {
                    ans += min(it.second, mp[k - it.first]);
                    mp[k - it.first] = 0;
                    mp[it.first] = 0;
                }
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
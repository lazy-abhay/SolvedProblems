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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        map<int, int> mp;
        for (auto &it : arr)
            mp[it]++;
        vector<int> temp;
        for (auto &it : mp)
            temp.push_back(it.second);
        sort(all(temp));
        int cnt = 0;
        for (auto &it : temp)
        {
            if (it <= k)
            {
                cnt++;
                k -= it;
            }
            else
                break;
        }
        // cout << cnt << ' ';
        cout << max(1LL, (int)temp.size() - cnt);
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
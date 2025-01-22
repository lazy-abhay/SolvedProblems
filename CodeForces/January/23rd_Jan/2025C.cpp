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
        int n, k;
        cin >> n >> k;
        map<int, int> mp;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        for (auto &it : arr)
            mp[it]++;
        vector<int> prefSum = {0}, brr;
        for (auto &it : mp)
            brr.push_back(it.first);
        for (auto &it : brr)
            prefSum.push_back(prefSum.back() + mp[it]);
        int ans = 0;
        for (int i = 0; i < brr.size(); ++i)
        {
            int st = i, en = min((int)brr.size() - 1, i + k - 1);
            int idx = -1;
            while (st <= en)
            {
                int md = st + (en - st) / 2;
                if (brr[md] == (brr[i] + (md - i)))
                {
                    idx = md;
                    st = md + 1;
                }
                else
                    en = md - 1;
            }
            ans = max(ans, prefSum[idx + 1] - prefSum[i]);
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
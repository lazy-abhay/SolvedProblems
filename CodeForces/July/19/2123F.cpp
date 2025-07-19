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
        map<int, set<int>> mp;
        vector<int> maxFactor(n + 1, -1);
        iota(all(maxFactor), 0);
        for (int i = 2; i <= n; ++i)
        {
            if (i != maxFactor[i])
                continue;
            for (int j = i; j <= n; j += i)
                maxFactor[j] = i;
        }
        for (int i = 1; i <= n; ++i)
            mp[maxFactor[i]].insert(i);
        vector<int> ans(n);
        for (auto it = mp.rbegin(); it != mp.rend(); ++it)
        {
            set<int> st = it->second;
            vector<int> temp;
            for (auto &it : st)
                temp.push_back(it);
            for (int i = 0; i < temp.size() - 1; ++i)
                ans[temp[i] - 1] = temp[i + 1];
            ans[temp.back() - 1] = temp[0];
        }
        for (auto &it : ans)
            cout << it << ' ';
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
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
        multiset<pair<int, int>> st;
        vector<int> ans;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            x %= k;
            if (x == 0)
                x = k;
            st.insert({k - x, i});
        }
        for (auto &it : st)
            ans.push_back(it.second + 1);
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
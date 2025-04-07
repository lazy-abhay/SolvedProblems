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
        map<int, int> cnt;
        for (int i = 0; i < k; ++i)
        {
            int b, c;
            cin >> b >> c;
            cnt[b] += c;
        }
        vector<int> temp;
        for (auto &it : cnt)
            temp.push_back(it.second);
        sort(rall(temp));
        int ans = 0;
        for (int i = 0; i < n && i < temp.size(); ++i)
            ans += temp[i];
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
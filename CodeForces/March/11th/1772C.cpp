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
        vector<int> ans(n);
        iota(all(ans), 1);
        int sum = 0;
        for (int i = 2; i < n; ++i)
        {
            ans[i] += sum;
            if (ans.back() + (i == (n - 1) ? 0 : sum) + i - 1 <= k)
                ans[i] += i - 1, sum += i - 1;
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
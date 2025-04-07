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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        sort(all(arr));
        int ans = 0;
        int minm = INT_MAX, cnt = 0;
        for (int i = n - 1; i >= 0; --i)
        {
            minm = min(minm, arr[i]);
            cnt++;
            if (cnt * minm >= x)
            {
                ans++;
                cnt = 0;
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
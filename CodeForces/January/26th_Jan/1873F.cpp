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
        vector<int> arr(n), h(n);
        for (auto &it : arr)
            cin >> it;
        for (auto &it : h)
            cin >> it;
        int sum = 0;
        int ans = 0;
        for (int l = 0, r = 0; r < n; ++r)
        {
            if (l == r)
                sum += arr[r];
            else if (h[r - 1] % h[r] == 0)
                sum += arr[r];
            else
            {
                ans = max(ans, r - l);
                sum = 0;
                l = r;
                r--;
                continue;
            }
            while (l <= r && sum > k)
                sum -= arr[l], l++;
            ans = max(ans, r - l + 1);
            // cout << r << ' ' << ans << ' ' << sum << endl;
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
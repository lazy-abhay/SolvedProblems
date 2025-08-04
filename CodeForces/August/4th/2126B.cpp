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
        int ans = 0, zero = 0;
        for (auto &it : arr)
        {
            if (it == 0)
                zero++;
            else
            {
                ans += zero / (k + 1);
                zero %= (k+1);
                if (zero == k)
                    ans++;
                zero = 0;
            }
        }
        ans += zero / (k + 1);
        zero %= (k+1);
        if (zero == k)
            ans++;
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
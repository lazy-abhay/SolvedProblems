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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        sort(all(arr));
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; ++i)
        {
            int st = i + 2, en = n - 1;
            while (st <= en)
            {
                int md = st + (en - st) / 2;
                if (arr[md] < (arr[i] + arr[i + 1]))
                    st = md + 1;
                else
                    en = md - 1;
            }
            ans = min(ans, n - (st - i));
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
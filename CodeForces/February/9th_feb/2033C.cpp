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
        int l = 1, r = n - 2;
        while (l < r)
        {
            int before = (arr[l] == arr[l - 1]) + (arr[r] == arr[r + 1]);
            int after = (arr[l] == arr[r + 1]) + (arr[r] == arr[l - 1]);
            if (after < before)
                swap(arr[l], arr[r]);
            l++, r--;
        }
        int ans = 0;
        for (int i = 1; i < n; ++i)
            ans += (arr[i] == arr[i - 1]);
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
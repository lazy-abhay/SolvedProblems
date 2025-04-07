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
        vector<int> arr(n), brr(n);
        for (auto &it : arr)
            cin >> it;
        for (auto &it : brr)
            cin >> it;
        int ans = arr[n - 1];
        for (int i = n - 2; i >= 0; --i)\
            if (arr[i] > brr[i + 1])
                ans += arr[i] - brr[i + 1];
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
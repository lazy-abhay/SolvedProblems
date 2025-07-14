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
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        vector<int> suffMax(n, -1);
        suffMax.back() = arr.back();
        for (int i = n - 2; i >= 0; --i)
            suffMax[i] = max(suffMax[i + 1], arr[i]);
        int minm = INT_MAX;
        string ans = "";
        for (int i = 0; i < n; ++i)
        {
            minm = min(minm, arr[i]);
            if (suffMax[i] == arr[i] || minm == arr[i])
                ans += "1";
            else
                ans += "0";
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
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
        int n, s;
        cin >> n >> s;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        int minm = arr[0];
        int maxm = arr[n - 1];
        if (minm >= s)
            cout << maxm - s;
        else if (maxm <= s)
            cout << s - minm;
        else
            cout << maxm - minm + min(s - minm, maxm - s);
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
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
        for (auto &it : arr)
            cin >> it;
        int minm = INT_MAX, maxm = INT_MIN;
        for (int i = 0; i < n; ++i)
            if (arr[i])
            {
                minm = min(minm, i);
                maxm = max(maxm, i);
            }
        if (maxm - minm + 1 <= x)
            cout << "YES";
        else
            cout << "NO";
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
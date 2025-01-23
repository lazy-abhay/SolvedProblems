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
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        int sum = accumulate(all(arr), 0LL);
        int maxm = *max_element(all(arr));
        cout << max(maxm, (sum + x - 1) / x);
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
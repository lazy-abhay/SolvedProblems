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
        int n, m;
        cin >> n >> m;
        vector<int> arr(n * m);
        for (auto &it : arr)
            cin >> it;
        sort(all(arr));
        int x = n * m;
        int ans1 = max((arr[x - 1] - arr[1]) * (n - 1) + (arr[x - 1] - arr[0]) * (n * (m - 1)), (arr[x - 1] - arr[1]) * (m - 1) + (arr[x - 1] - arr[0]) * ((n - 1) * m));
        int ans2 = max((arr[x - 2] - arr[0]) * (n - 1) + (arr[x - 1] - arr[0]) * (n * (m - 1)), (arr[x - 2] - arr[0]) * (m - 1) + (arr[x - 1] - arr[0]) * ((n - 1) * m));
        cout << max(ans1, ans2);
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
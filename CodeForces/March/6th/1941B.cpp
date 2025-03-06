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
        for (int i = 0; (i + 2) < n; ++i)
        {
            if (arr[i] > 0)
            {
                arr[i + 1] -= 2 * arr[i];
                arr[i + 2] -= arr[i];
                arr[i] = 0;
            }
        }
        int cnt = count(all(arr), 0);
        cout << (cnt == n ? "YES" : "NO");
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
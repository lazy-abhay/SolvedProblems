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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        sort(all(arr));
        if (n & 1)
        {
            if (n == 1)
            {
                cout << 1;
                return;
            }
            int ans = LLONG_MAX;
            for (int i = 0; i < n; i += 2)
            {
                int temp = 0;
                for (int j = 0; j < n; j += 2)
                {
                    if (i == j)
                        j--;
                    else
                        temp = max(temp, arr[j + 1] - arr[j]);
                }
                ans = min(ans, temp);
            }
            cout << ans;
        }
        else
        {
            int maxm = 0;
            for (int i = 1; i < n; i += 2)
                maxm = max(maxm, arr[i] - arr[i - 1]);
            cout << maxm;
        }
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
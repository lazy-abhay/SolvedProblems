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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n + 1);
        iota(all(arr), 0);
        int l = 1, r = n;
        if (k & 1)
        {
            cout << "No";
            return;
        }
        while (l <= r)
        {
            if (k >= (abs(r - arr[l]) + abs(arr[r] - l)))
            {
                k -= 2 * (r - arr[l]);
                swap(arr[l], arr[r]);
                l++, r--;
            }
            else
                l++;
        }
        if (k == 0)
        {
            cout << "Yes" << endl;
            for (int i = 1; i <= n; ++i)
                cout << arr[i] << ' ';
        }
        else
            cout << "No";
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
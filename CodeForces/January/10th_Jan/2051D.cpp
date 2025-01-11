/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    int sum = accumulate(all(arr), 0LL);
    sort(all(arr));
    // for (auto &it : arr)
        // cout << it << ' ';
    // cout << sum << endl;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        int temp = sum - arr[i];
        int l = n + 1, r = -1;
        int st = i + 1, en = n - 1;
        while (st <= en)
        {
            int md = st + (en - st) / 2;
            if ((temp - arr[md]) >= x && (temp - arr[md]) <= y)
            {
                l = md;
                en = md - 1;
            }
            else if ((temp - arr[md]) > y)
                st = md + 1;
            else
                en = md - 1;
        }
        st = i + 1, en = n - 1;
        while (st <= en)
        {
            int md = st + (en - st) / 2;
            if ((temp - arr[md]) >= x && (temp - arr[md]) <= y)
            {
                r = md;
                st = md + 1;
            }
            else if ((temp - arr[md]) < x)
                en = md - 1;
            else
                st = md + 1;
        }
        // cout << temp << ' ' << l << ' ' << r << endl;
        if ((r - l + 1) > 0)
            ans += (r - l + 1);
    }
    cout << ans;
}

int32_t main(void)
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int __test_case = 1;
    cin >> __test_case;

    for (int __t = 1; __t <= __test_case; ++__t)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}
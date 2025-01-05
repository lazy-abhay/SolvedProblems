/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    sort(all(a));
    sort(all(b));
    for (int i = 0; i < n; ++i)
        if (a[i] <= b[i])
        {
            cout << 0;
            return;
        }
    int ans = 1;
    int MOD = 1e9 + 7; 
    for (int i = 0; i < n; ++i)
    {
        int idx = i;
        int st = i, en = n - 1;
        while (st <= en)
        {
            int md = st + (en - st) / 2;
            if (a[i] > b[md])
            {
                idx = md;
                st = md + 1;
            }
            else
                en = md - 1;
        }
        ans *= (idx - i + 1);
        ans %= MOD; 
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
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
    int l = 0, r = n - 1;
    while (l < n && a[l] == b[l])
        l++;
    while (r >= 0 && a[r] == b[r])
        r--;
    while (l > 0 && a[l - 1] <= b[l] && a[l - 1] == b[l - 1])
        l--;
    while (r < n - 1 && a[r + 1] >= b[r] && a[r + 1] == b[r + 1])
        r++;
    cout << l + 1 << " " << r + 1;
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
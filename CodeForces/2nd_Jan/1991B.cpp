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
    vector<int> b(n - 1);
    for (auto &it : b)
        cin >> it;
    vector<int> ans = {b[0]};
    for (int i = 1; i < n - 1; ++i)
        ans.push_back(b[i - 1] | b[i]);
    ans.push_back(b[n - 2]);
    for (int i = 1; i < n; ++i)
    {
        if ((ans[i] & ans[i - 1]) != b[i - 1])
        {
            cout << -1;
            return;
        }
    }
    for (auto &it : ans)
        cout << it << ' ';
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
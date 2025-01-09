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
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    map<int, int> mp;
    for (auto &it : arr)
        mp[it]++;
    int cnt = 0;
    int ans = 0;
    for (auto &it : mp)
    {
        // nC3
        ans += (it.second) * (it.second - 1) * (it.second - 2) / 6;

        // nC2 * choose any small element
        ans += (it.second) * (it.second - 1) * cnt / 2;

        cnt += it.second;
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
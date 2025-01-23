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
        vector<pair<int, int>> arr(n);
        for (auto &it : arr)
            cin >> it.first >> it.second;
        sort(all(arr), [&](auto &a, auto &b)
             { return (a.first + a.second) < (b.first + b.second); });
        vector<int> brr;
        for (auto &it : arr)
            brr.push_back(it.first), brr.push_back(it.second);
        for (auto &it : brr)
            cout << it << ' ';
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
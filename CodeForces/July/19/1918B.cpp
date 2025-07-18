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
        vector<int> a(n), b(n);
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; ++i)
            arr.push_back({a[i], b[i]});
        sort(all(arr));
        for (auto &it : arr)
            cout << it.first << ' ';
        cout << endl;
        for (auto &it : arr)
            cout << it.second << ' ';
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
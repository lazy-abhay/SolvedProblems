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
        set<int> st;
        vector<int> ans;
        int x = 1;
        while (x < n)
            x *= 2;
        x /= 2;
        for (int i = x - 1; i >= 0; --i)
            cout << i << ' ';
        for (int i = x; i < n; ++i)
            cout << i << ' ';
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
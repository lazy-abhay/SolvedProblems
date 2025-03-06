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
        int n, c, d;
        cin >> n >> c >> d;
        map<int, int> mp;
        int minm = INT_MAX;
        for (int i = 0; i < n * n; ++i)
        {
            int x;
            cin >> x;
            mp[x]++;
            minm = min(minm, x);
        }
        int prev = minm;
        for (int i = 0; i < n; ++i)
        {
            if (i != 0)
                minm += c;
            int curr = minm;
            for (int j = 0; j < n; ++j)
            {
                if (j != 0)
                    curr += d;
                if (mp[curr] != 0)
                    mp[curr]--;
                else
                {
                    cout << "NO";
                    return;
                }
            }
        }
        cout << "YES"; 
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
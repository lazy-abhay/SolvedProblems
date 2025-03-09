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
        map<int, int> freq;
        int ans = 1;
        int curr = 1;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] != a[i - 1])
            {
                freq[a[i - 1]] = max(freq[a[i - 1]], curr);
                ans = max(ans, curr);
                curr = 1;
            }
            else
                curr++;
        }
        freq[a[n - 1]] = max(freq[a[n - 1]], curr);
        ans = max(ans, curr); 
        curr = 1;
        for (int i = 1; i < n; ++i)
        {
            if (b[i] != b[i - 1])
            {
                ans = max(ans, curr + freq[b[i - ]);
                curr = 1;
            }
            else
                curr++;
        }
        ans = max(ans, curr + freq[b[n - 1]]);
        cout << ans;
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
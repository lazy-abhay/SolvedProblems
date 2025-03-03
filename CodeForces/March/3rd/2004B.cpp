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
        int l, r;
        cin >> l >> r;
        int L, R;
        cin >> L >> R;
        vector<int> arr(102, 0);
        auto mark = [&](int x, int y) -> void
        {
            for (int i = x; i <= y; ++i)
                arr[i]++;
        };
        mark(l, r);
        mark(L, R);
        int cnt = count(all(arr), 2);
        int ans = cnt + 1;
        for (int i = 1; i < 101; ++i)
            if (arr[i] == 2)
            {
                if (arr[i - 1] == 0)
                    ans--;
                break;
            }
        for (int i = 100; i > 0; --i)
            if (arr[i] == 2)
            {
                if (arr[i + 1] == 0)
                    ans--;
                break;
            }
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
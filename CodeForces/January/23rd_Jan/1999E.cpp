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

    vector<int> sum(200002, 0);
    auto solve = [&](int __t) -> void
    {
        int l, r;
        cin >> l >> r;
        auto preCompute = [&]() -> void
        {
            int nxt = 1, curr = 0;
            for (int i = 1; i <= 200001; ++i)
            {
                if (i == nxt)
                    nxt *= 3, curr++;
                sum[i] = sum[i - 1] + curr;
            }
        };
        if (__t == 1)
            preCompute();
        cout << sum[r] - 2 * sum[l - 1] + sum[l];
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
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
        string L, R;
        cin >> L >> R;
        int ans = 0;
        bool flag = 0;
        if (L.length() > R.length())
            swap(L, R);
        reverse(all(R));
        while (L.length() < R.length())
        {
            if (flag)
                ans += 9;
            else
                ans += R.back() - '0';
            flag = 1;
            R.pop_back();
        }
        reverse(all(R));
        // cout << L << ' ' << R << endl;
        for (int i = 0; i < L.length(); ++i)
        {
            if (flag)
                ans += 9;
            else
            {
                if (L[i] != R[i])
                    flag = 1;
                ans += abs(R[i] - L[i]);
            }
            // cout << ans << ' ';
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
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
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        if (count(all(arr), 0) == n)
        {
            cout << 0;
            return;
        }
        bool num = 0, zero = 0;
        for (auto &it : arr)
        {
            if (it == 0)
            {
                if (num)
                    zero = 1;
            }
            else
            {
                if (num && zero)
                {
                    cout << 2;
                    return;
                }
                else
                    num = 1;
            }
        }
        cout << 1;
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
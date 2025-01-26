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

    // Its either the pain or regret, or the pain of discipline
    auto solve = [&](int __t) -> void
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        map<int, int> factor;
        for (auto &it : arr)
        {
            for (int i = 2; i * i <= it; ++i)
            {
                if (it % i == 0)
                {
                    factor[i]++;
                    it /= i;
                    i--;
                }
            }
            if (it != 1)
                factor[it]++;
        }
        // for (auto &it : factor)
        //     cout << it.first << ' ' << it.second << endl;
        // return;
        for (auto &it : factor)
            if (it.second % n != 0)
            {
                cout << "NO";
                return;
            }
        cout << "YES";
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
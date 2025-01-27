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
        if (n & 1)
        {
            vector<int> arr(n);
            iota(all(arr), 1);
            arr[0] = 2;
            arr[1] = 1;
            int ans = 0;
            for (int i = 0; i < n; ++i)
                if (i & 1)
                    ans |= arr[i];
                else
                    ans &= arr[i];
            cout << ans << endl;
            for (auto &it : arr)
                cout << it << ' ';
        }
        else
        {
            int x = log2(n);
            int y = (1LL << x);
            vector<int> temp;
            if (y == n)
            {
                for (int i = 2; i < n; ++i)
                    if (i == 3 || i == (y - 2) || i == (y - 1))
                        continue;
                    else
                        temp.push_back(i);
                temp.push_back(1);
                temp.push_back(3);
                temp.push_back(y - 2);
                temp.push_back(y - 1);
                temp.push_back(y);
            }
            else
            {
                for (int i = 2; i <= n; ++i)
                {
                    if (i == y || i == (y + 1) || i == y - 1)
                        continue;
                    else
                        temp.push_back(i);
                }
                temp.push_back(1);
                temp.push_back(y);
                temp.push_back(y + 1);
                temp.push_back(y - 1);
            }
            int ans = 0;
            for (int i = 0; i < n; ++i)
                if (i & 1)
                    ans |= temp[i];
                else
                    ans &= temp[i];
            cout << ans << endl;
            for (auto &it : temp)
                cout << it << ' ';
        }
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
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

    auto solve = [&](int __t) -> void
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        map<int, int> mp;
        for (auto &it : arr)
            mp[it]++;
        int curr = 0;
        int ans = 0;
        bool flag = 0;
        for (auto &it : mp)
        {
            if (it.first != curr)
            {
                ans = curr;
                break;
            }
            else
            {
                if (it.second == 1) 
                {
                    ans = curr;
                    if (flag == 0)
                        flag = 1;
                    else
                        break;
                }
                curr++;
            }
            ans = curr;
        }
        cout << ans;
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
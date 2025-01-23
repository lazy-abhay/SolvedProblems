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
        int even = 0, odd = 0;
        for (auto &it : arr)
            (it & 1) ? odd++ : even++;
        if (odd && even)
        {
            cout << -1;
            return;
        }
        vector<int> ans;
        while (1)
        {
            int maxm = *max_element(all(arr));
            int minm = *min_element(all(arr));
            int diff = (minm + maxm) / 2;
            if (diff == 0)
                break;
            ans.push_back(diff);
            for (auto &it : arr)
                it = abs(it - diff);
            if ((int)ans.size() > 40)
            {
                cout << -1;
                return;
            }
        }
        cout << (int)ans.size() << endl;
        for (auto &it : ans)
            cout << it << ' ';
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
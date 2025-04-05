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
        for (auto &x : arr)
            cin >> x;
        int minm = *min_element(all(arr));
        if (count(all(arr), minm) > 1)
        {
            cout << "YES";
            return;
        }
        set<int> temp;
        for (auto &it : arr)
        {
            if (it == minm)
                continue;
            if (it % minm == 0)
                temp.insert(it);
        }
        if (temp.size() == 0)
        {
            cout << "NO";
            return;
        }
        int gcd = *temp.begin();
        for (auto &it : temp)
            gcd = __gcd(gcd, it);
        if (gcd == minm)
        {
            cout << "YES";
            return;
        }
        cout << "NO";
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
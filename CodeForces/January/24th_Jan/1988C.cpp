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
        vector<int> arr = {n};
        for (int i = 62; i >= 0; --i)
        {
            if (n & (1LL << i) && (n ^ (1LL << i)))
                arr.push_back(n ^ (1LL << i));
        }
        sort(all(arr));
        cout << arr.size() << endl;
        for (auto &it : arr)
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
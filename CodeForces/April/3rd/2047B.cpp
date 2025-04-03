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
        string str;
        cin >> str;
        map<char, int> mp;
        for (auto it : str)
            mp[it]++;
        int maxm = 0, minm = INT_MAX;
        char c, d;
        for (auto it : mp)
        {
            if (it.second > maxm)
            {
                maxm = it.second;
                c = it.first;
            }
        }
        for (auto it = mp.rbegin(); it != mp.rend(); ++it)
        {
            if (it->second < minm)
            {
                minm = it->second;
                d = it->first;
            }
        }
        for (auto &it : str)
        {
            if (it == d)
            {
                it = c;
                break;
            }
        }
        cout << str;
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
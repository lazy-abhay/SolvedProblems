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
        if (n < 3)
        {
            cout << "NO";
            return;
        }
        map<string, int> mp;
        string prev = str.substr(0, 2);
        for (int i = 1; i < n - 1; ++i)
        {
            string curr = str.substr(i, 2);
            if (mp.find(curr) != mp.end())
            {
                cout << "YES";
                return;
            }
            mp[prev]++;
            prev = curr;
            // for (auto &it : mp)
            //     cout << it.first << ' ';
            // cout << endl;
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
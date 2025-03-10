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
        string str;
        cin >> str;
        int n = str.length();
        int w;
        cin >> w;
        int sum = 0;
        for (auto &it : str)
            sum += it - 'a' + 1;
        if (sum <= w)
        {
            cout << str;
            return;
        }
        string ans;
        map<char, vector<int>> idx;
        for (int i = 0; i < n; ++i)
            idx[str[i]].push_back(i);
        for (char c = 'z'; c >= 'a'; --c)
        {
            while (!idx[c].empty())
            {
                str[idx[c].back()] = ',';
                idx[c].pop_back();
                sum -= (c - 'a' + 1);
                if (sum <= w)
                    break;
            }
            if (sum <= w)
                break;
        }
        for (auto &it : str)
            if (it != ',')
                ans.push_back(it);
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
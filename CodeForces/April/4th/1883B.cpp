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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        map<char, int> freq;
        for (auto &it : str)
            freq[it]++;
        int x = n - k;
        for (auto &it : freq)
        {
            if (it.second % 2 == 0)
                x -= it.second;
            else
                x -= it.second - 1;
            it.second = it.second % 2;
        }
        if (x <= 0)
        {
            cout << "YES";
            return;
        }
        else if(x != 1)
        {
            cout << "NO";
            return;
        }
        for (auto &it : freq)
        {
            if (it.second == 1)
            {
                cout << "YES";
                return;
            }
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
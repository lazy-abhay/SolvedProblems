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
        for (int i = 1; i < n; ++i)
            if (str[i] == str[i - 1])
            {
                cout << str[i] << str[i];
                return;
            }
        for (int i = 2; i < n; ++i)
            if (str[i] != str[i - 2])
            {
                cout << str[i - 2] << str[i - 1] << str[i];
                return;
            }
        cout << -1;
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
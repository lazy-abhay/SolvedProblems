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
        int cnt = 0;
        for (int i = 1; i < n; ++i)
            if (str[i] != str[i - 1])
                ++cnt;
        if (cnt == 0)
            cout << n + (str[0] == '1');
        else if (cnt == 1)
            cout << n + 1;
        else if (cnt == 2)
            cout << n + cnt - 1;
        else
            cout << n + cnt - 2 + (str[0] == '1');
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
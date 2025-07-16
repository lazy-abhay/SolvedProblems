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
        int ans = 0;
        bool flag = 0;
        if (str[n - 1] == '0')
        {
            int i = n - 1;
            while (str[i] == '0')
                i--, ans++;
            i--;
            while (i >= 0)
            {
                if (str[i] != '0')
                    ans++;
                i--;
            }
        }
        else
        {
            int i = n - 2;
            while (i >= 0)
            {
                if (str[i] != '0')
                    ans++;
                i--;
            }
        }
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
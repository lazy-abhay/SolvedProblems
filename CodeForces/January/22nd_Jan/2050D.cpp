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
        string str;
        cin >> str;
        int n = str.length();
        for (int i = 1; i < n; ++i)
        {
            int j = i;
            while (j > 0 && str[j - 1] < (str[j] - 1))
            {
                swap(str[j], str[j - 1]);
                j--;
                str[j]--;
            }
        }
        cout << str;
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
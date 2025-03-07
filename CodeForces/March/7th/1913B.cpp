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
        int zero = count(all(str), '0');
        int one = count(all(str), '1');
        for (int i = 0; i < n; ++i)
        {
            if (str[i] == '1')
            {
                if (zero > 0)
                    zero--;
                else
                {
                    cout << zero + one;
                    return;
                }
            }
            else
            {
                if (one > 0)
                    one--;
                else
                {
                    cout << one + zero;
                    return;
                }
            }
        }
        cout << one + zero; 
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
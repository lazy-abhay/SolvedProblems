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
        int zero = count(all(str), '0');
        int one = count(all(str), '1');
        int l = 0, r = n - 1;
        while (l < r)
        {
            if (k > 0)
            {
                if(zero >= one && zero > 1)
                    zero -= 2;
                else if(one >= zero && one > 1)
                    one -= 2;  
                else
                {
                    cout << "NO";
                    return;
                }
                k--;
            }
            else
            {
                if (one == 0 || zero == 0)
                {
                    cout << "NO";
                    return;
                }
                else
                    one--, zero--;
            }
            l++, r--;
        }
        cout << "YES";
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
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
        int one = count(all(str), '1');
        bool flag = 0;
        int zero = 0;
        for (auto &it : str)
        {
            if (it == '0')
            {
                if (flag)
                    continue;
                else
                    zero++, flag = 1;
            }
            else
                flag = 0;
        }
        if(one > zero)
            cout << "YES"; 
        else
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
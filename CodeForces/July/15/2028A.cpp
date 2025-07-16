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
        int n, a, b;
        cin >> n >> a >> b;
        string str;
        cin >> str;
        int x = 0, y = 0;
        for (int i = 0; i < 10000; ++i)
        {
            for (auto &it : str)
            {
                if (it == 'N')
                    y++;
                else if (it == 'S')
                    y--;
                else if (it == 'E')
                    x++;
                else
                    x--;
                if (x == a && y == b)
                {
                    cout << "YES";
                    return;
                }
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
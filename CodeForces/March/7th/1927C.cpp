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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for (auto &it : a)
            cin >> it;
        for (auto &it : b)
            cin >> it;
        int cmn = 0;
        sort(all(a));
        sort(all(b));
        int x = 0, y = 0;
        for (int i = 1; i <= k; ++i)
        {
            bool flag_a = binary_search(all(a), i);
            bool flag_b = binary_search(all(b), i);
            if (flag_a && flag_b)
                cmn++;
            else if (flag_a)
                x++;
            else if (flag_b)
                y++;
            else
            {
                cout << "NO";
                return;
            }
        }
        if (x <= k / 2 && y <= k / 2)
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
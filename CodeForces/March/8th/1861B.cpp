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
        string a, b;
        cin >> a >> b;
        for (int i = 0; i < a.length() - 1; ++i)
        {
            if (a[i] == '0' && b[i] == '0' && a[i + 1] == '1' && b[i + 1] == '1')
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
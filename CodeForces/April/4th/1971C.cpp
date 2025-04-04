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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(c > d)
            swap(c, d); 
        if (a > c && a < d && (b > d || b < c))
        {
            cout << "YES";
            return;
        }
        swap(a, b);
        if (a > c && a < d && (b > d || b < c))
        {
            cout << "YES";
            return;
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
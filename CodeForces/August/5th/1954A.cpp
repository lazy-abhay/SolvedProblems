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
        // cin >> m >> k >> n;
        cin >> n >> m >> k;
        if (m == 1 || n == 1)
            cout << "NO";
        else if (m >= n)
        {
            if (k + 1 >= n)
                cout << "NO";
            else
                cout << "YES";
        }
        else // m < n
        {
            if (n % m == 0)
            {
                int temp = n / m * (m - 1);
                if (temp <= k)
                    cout << "NO";
                else
                    cout << "YES";
            }
            else
            {
                int temp = n / m * (m - 1) + n % m - 1;
                if (temp <= k)
                    cout << "NO";
                else
                    cout << "YES";
            }
        }
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
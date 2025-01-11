/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int x, y, k;
    cin >> x >> y >> k;
    while (1)
    {
        if (k <= 0)
            break;
        if ((x + 1) % y != 0)
        {
            int n = x / y + 1;
            int z = n * y;
            int d = z - x;
            if (d <= k)
            {
                k -= d;
                x = z;
                while (x % y == 0)
                    x /= y;
            }
            else
            {
                x += k;
                k = 0;
                break;
            }
        }
        else
        {
            x++;
            while (x % y == 0)
                x /= y;
            k--;
        }
        if (x == 1)
            break;
    }
    if (k > 0)
        x = k % (y - 1) + 1;
    cout << x;
}

int32_t main(void)
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int __test_case = 1;
    cin >> __test_case;

    for (int __t = 1; __t <= __test_case; ++__t)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}
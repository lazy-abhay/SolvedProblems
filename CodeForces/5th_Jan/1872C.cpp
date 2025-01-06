/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int l, r;
    cin >> l >> r;
    while(l <= r)
    {
        for(int i = 2; i * i <= r; ++i)
            if(r % i == 0)
            {
                cout << i << ' ' << r - i; 
                return;
            }
        r--; 
    }
    cout << -1; 
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
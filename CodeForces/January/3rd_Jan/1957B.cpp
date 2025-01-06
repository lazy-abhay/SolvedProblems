/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n, k; 
    cin >> n >> k; 
    for(int i = 0; i < n; ++i)
    {
        if(i == (n-1))
            cout << k; 
        else
        {
            if(i != 0)
            {
                cout << k << ' '; 
                k = 0; 
                continue;
            }
            int x = log2(k); 
            cout << ((1LL << x) - 1) << ' '; 
            k -= (1LL << x) - 1; 
        }
    }
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
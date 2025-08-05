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
        for(int i = 0; i <= 100; ++i)
        {
            for(int j = 0; j <= 100; ++j)
            {
                if((i+j) * (i+j) == n)
                {
                    cout << i << ' ' << j; 
                    return; 
                }
            }
        }
        cout << -1; 
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
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
        int n, k;
        cin >> n >> k;
        vector<int> ans(n, 0);
        int md = n / 2;
        int curr = 1; 
        for(int i = k-1; i < n; i +=k)
        {
            ans[i] = curr;
            curr++;
        }
        for(int i = 0; i < n; ++i)
        {
            if(ans[i] == 0)
                ans[i] = curr++;
            cout << ans[i] << " ";
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
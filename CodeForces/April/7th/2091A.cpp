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
        multiset<int> st({0, 1, 0, 3, 2, 0, 2, 5});
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        int ans = 0;
        for (auto &it : arr)
        {
            if (st.count(it))
            {
                st.erase(st.find(it));
                if (st.empty())
                    break;
            }
            ans++;
        }
        if (!st.empty())
        {
            cout << 0;
            return;
        }
        cout << ans + 1;
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
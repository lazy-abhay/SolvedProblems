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
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        int ans = 0;
        multiset<int> st;
        int maxm = arr[0];
        for (int i = 1; i < n; ++i)
            if (arr[i] < maxm)
                st.insert(maxm - arr[i]);
            else
                maxm = arr[i];
        int inc = 0;
        while (!st.empty())
        {
            auto it = st.begin();
            int val = *it;
            if (val - inc <= 0)
                st.erase(val);
            else
            {
                ans += (val - inc) * ((int)st.size() + 1);
                inc += (val - inc);
                st.erase(it);
            }
        }

        cout << ans;
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
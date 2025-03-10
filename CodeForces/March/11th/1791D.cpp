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
        string str;
        cin >> str;
        map<char, int> freq, mp;
        for (auto &it : str)
            freq[it]++;
        int ans = 0;
        for (int i = 0; i < n - 1; ++i)
        {
            mp[str[i]]++;
            freq[str[i]]--;
            if (freq[str[i]] == 0)
                freq.erase(str[i]);
            ans = max(ans, (int)mp.size() + (int)freq.size());
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
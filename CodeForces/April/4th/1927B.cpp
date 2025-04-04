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
        vector<int> freq(26, 0);
        string ans;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < 26; ++j)
            {
                if (freq[j] == arr[i])
                {
                    freq[j]++;
                    ans.push_back('a' + j);
                    break;
                }
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
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
        map<int, int> freq;
        for (auto &it : arr)
            freq[it]++;
        int maxm = *max_element(all(arr));
        if (freq[maxm] & 1)
        {
            cout << "YES";
            return;
        }
        for (auto &it : freq)
            if (it.second & 1)
            {
                cout << "YES";
                return;
            }
        cout << "NO";
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
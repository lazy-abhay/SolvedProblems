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
        vector<int> arr(5);
        for (int i = 0; i < 5; ++i)
            if (i != 2)
                cin >> arr[i];
        auto count = [&](int x) -> int
        {
            arr[2] = x; 
            int ans = 0;
            for (int i = 0; i <= 2; ++i)
                ans += ((arr[i] + arr[i + 1]) == arr[i + 2]);
            return ans;
        };
        int a = arr[0] + arr[1];
        int b = arr[3] - arr[1];
        int c = arr[4] - arr[3];
        cout << max(count(a), max(count(b), count(c)));
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
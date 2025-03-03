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
        int n, m, q;
        cin >> n >> m >> q;
        vector<int> arr(m);
        for (auto &it : arr)
            cin >> it;
        sort(all(arr));
        while (q--)
        {
            int x;
            cin >> x;
            if (x < arr.front())
                cout << arr.front() - 1;
            else if (x > arr.back())
                cout << n - arr.back();
            else
            {
                int idx = -1;
                int st = 0, en = m - 1;
                while (st <= en)
                {
                    int md = st + (en - st) / 2;
                    if (arr[md] > x)
                        idx = md, en = md - 1;
                    else
                        st = md + 1;
                }
                cout << (arr[idx] - arr[idx - 1]) / 2;
            }
            cout << " ";
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
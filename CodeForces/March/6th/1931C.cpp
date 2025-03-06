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
        if (n == 1)
        {
            cout << 0;
            return;
        }
        else if (arr[0] == arr[n - 1])
        {
            int cnt = count(all(arr), arr[0]);
            if (cnt == n)
                cout << 0;
            else
            {
                int x = arr[0];
                int cnt = 0;
                int i = 0;
                while (arr[i] == x)
                    cnt++, i++;
                i = n - 1;
                while (arr[i] == x)
                    cnt++, i--;
                cout << n - cnt;
            }
        }
        else
        {
            int x = arr[0];
            int i = 0;
            int cnt_x = 0;
            while (arr[i] == x)
                cnt_x++, i++;
            int y = arr[n - 1];
            int j = n - 1;
            int cnt_y = 0;
            while (arr[j] == y)
                cnt_y++, j--;
            cout << n - max(cnt_x, cnt_y);
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
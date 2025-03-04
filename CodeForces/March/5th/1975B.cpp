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
        vector<int> visited(n, 0);
        sort(all(arr));
        int x = arr[0];
        int y = INT_MAX;
        for (int i = 0; i < n; ++i)
            if (arr[i] % x == 0)
                visited[i] = 1;
            else
                y = min(y, arr[i]);
        for (int i = 0; i < n; ++i)
            if (arr[i] % y == 0)
                visited[i] = 1;
        if (count(all(visited), 1) == n)
            cout << "YES";
        else
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
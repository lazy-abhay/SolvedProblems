/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n;
    cin >> n;
    vector<vector<int>> arr(2, vector<int>(n));
    for (int i = 0; i < 2; ++i)
        for (int j = 0; j < n; ++j)
            cin >> arr[i][j];
    int ans = 0;
    int minMax = INT_MIN;
    for (int i = 0; i < n; ++i)
        minMax = max(minMax, min(arr[0][i], arr[1][i]));
    for (int i = 0; i < n; ++i)
        ans += max(arr[0][i], arr[1][i]);
    cout << ans + minMax;
}

int32_t main(void)
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int __test_case = 1;
    cin >> __test_case;

    for (int __t = 1; __t <= __test_case; ++__t)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}
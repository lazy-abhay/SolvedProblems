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
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    int ans = INT_MIN;
    if (n == 2)
    {
        ans = min(arr[0], arr[1]);
        cout << ans;
        return;
    }
    for (int i = 0; (i + 2) < n; ++i)
    {
        vector<int> temp = {arr[i], arr[i + 1], arr[i + 2]};
        sort(all(temp));
        ans = max(ans, temp[1]);
    }
    cout << ans;
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
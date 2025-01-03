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
    int ans = INT_MIN, curr = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i > 0 && abs(arr[i]) % 2 == abs(arr[i - 1]) % 2)
            curr = 0;
        curr += arr[i];
        ans = max(ans, curr);
        curr = max(curr, 0LL);
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
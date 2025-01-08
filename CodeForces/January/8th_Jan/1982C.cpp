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
    int l, r;
    cin >> l >> r;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    int i = 0, j = 0;
    int ans = 0;
    int curr = 0;
    while (i < n && j < n)
    {
        curr += arr[j];
        while (i < n && i <= j && curr > r)
            curr -= arr[i], i++;
        if (curr >= l && curr <= r)
        {
            // cout << curr << ' '; 
            curr = 0;
            i = j+1; 
            ans++;
        }
        j++;
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
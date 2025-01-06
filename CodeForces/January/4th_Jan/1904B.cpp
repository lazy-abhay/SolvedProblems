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
    int sum = accumulate(all(arr), 0LL);
    vector<pair<int, int>> temp;
    for (int i = 0; i < n; ++i)
        temp.push_back({arr[i], i});
    sort(all(temp));
    vector<int> ans(n, 0);
    int cnt = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        sum -= temp[i].first;
        ans[temp[i].second] = i + cnt;
        if (temp[i].first > sum)
            cnt = 0;
        else
            cnt++;
    }
    for (auto &it : ans)
        cout << it << ' ';
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
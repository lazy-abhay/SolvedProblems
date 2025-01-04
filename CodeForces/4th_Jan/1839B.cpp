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
    vector<pair<int, int>> arr(n);
    for (auto &it : arr)
        cin >> it.first >> it.second;
    sort(all(arr), [&](auto &a, auto &b)
         {
        if(a.first == b.first)
            return a.second > b.second; 
        return a.first < b.first; });
    multiset<int> broken;
    int ans = 0;
    int j = -1;
    for (int i = 0; i < n; ++i)
    {
        if (i <= j)
            continue;
        ans += arr[i].second;
        broken.insert(arr[i].first);
        j = i;
        if (broken.count((int)broken.size()))
        {
            while (j < n && arr[j].first == (int)broken.size())
                j++;
            j--;
            broken.erase((int)broken.size());
        }
        // cout << i << "-> ";
        // for (auto &it : broken)
        //     cout << it << ' ';
        // cout << endl;
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
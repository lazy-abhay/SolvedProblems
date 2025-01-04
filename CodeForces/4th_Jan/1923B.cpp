/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n, k; 
    cin >> n >> k; 
    vector<int> a(n), x(n); 
    for(auto &it: a)
        cin >> it; 
    for(auto &it: x)
        cin >> it; 
    map<int, int> mp; 
    for(int i = 0; i < n; ++i)
        mp[abs(x[i])] += a[i]; 
    int curr = 0; 
    vector<pair<int,int>> arr; 
    for(auto &it: mp)
        arr.push_back({it.first, it.second}); 
    for(int i = 0; i < arr.size(); ++i)
    {
        if(i == 0)
            curr += arr[i].first * k; 
        else
            curr += (arr[i].first - arr[i-1].first) * k; 
        curr -= arr[i].second; 
        if(curr < 0)
        {
            cout << "NO"; 
            return; 
        }
    }
    cout << "YES";
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
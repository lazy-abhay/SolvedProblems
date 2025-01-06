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
    vector<int> a(n), b(n+1); 
    for(auto &it: a)
        cin >> it; 
    for(auto &it: b)
        cin >> it; 
    int ans = 0, last = INT_MAX; 
    int val = b[n]; 
    for(int i = 0; i < n; ++i)
    {
        if(val >= min(a[i], b[i]) && val <= max(a[i], b[i]))
            last = 0; 
        else
            last = min({last, abs(val - a[i]), abs(val - b[i])});
        ans += abs(b[i] - a[i]); 
    }  
    cout << ans + last + 1; 
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
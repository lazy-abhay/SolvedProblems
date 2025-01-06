/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (auto &it : a)
        cin >> it;
    for (auto &it : b)
        cin >> it;
    sort(all(a));
    sort(all(b));
    int ans = 0;
    int l = 0, r = m - 1;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        int aa = abs(b[l] - a[i]);
        int bb = abs(b[r] - a[i]); 
        int cc = abs(b[l] - a[j]); 
        int dd = abs(b[r] - a[j]);
        int maxm = max({aa, bb, cc, dd}); 
        ans += maxm; 
        if(maxm == aa)
            i++, l++;
        else if(maxm == bb)
            i++, r--;
        else if(maxm == cc)
            j--, l++; 
        else
            j--, r--;
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
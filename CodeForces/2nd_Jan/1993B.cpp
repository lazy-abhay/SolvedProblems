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
    for(auto &it: arr)
        cin >> it; 
    sort(all(arr)); 
    int maxm = INT_MIN; 
    int odd = 0, even = 0;
    for(auto &it: arr)
    {
        (it & 1) ? odd++ : even++; 
        if(it & 1)
            maxm = max(maxm, it); 
    }
    if(odd == 0 || even == 0)
    {
        cout << 0; 
        return; 
    }
    int cnt = 0; 
    for(auto &it: arr)
    {
        if(it & 1)
            ; 
        else
        {
            if(it < maxm)
                cnt++, maxm = max(maxm, it + maxm); 
            else
                cnt += 2, maxm = max(maxm, maxm + 2 * it); 
        }
    }
    int temp = cnt; 
    cnt = 0; 
    reverse(all(arr)); 
    maxm = INT_MIN; 
    for(auto &it: arr)
        if(it & 1)
            maxm = max(maxm, it); 
    for(auto &it: arr)
    {
        if(it & 1)
            ; 
        else
        {
            if(it < maxm){
                // cout << it << ' '; 
                cnt++, maxm = max(maxm, it + maxm); }
            else{
                // cout << it << ' '; 
                cnt += 2, maxm = max(maxm, maxm + 2 * it); }
        }
    }
    cout << min(cnt, temp);  
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
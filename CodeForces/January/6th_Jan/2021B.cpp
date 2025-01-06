/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{  
    int n, x; 
    cin >> n >> x; 
    vector<int> arr(n); 
    for(auto &it: arr)
        cin >> it; 
    int mex = 0; 
    map<int,int> mp; 
    for(auto &it: arr)
        mp[it]++; 
    for(int i = 0; i <= n; ++i)
    {
        if(mp[mex] == 0)
        {
            break;
        }
        else
        {
            mp[i + x] += mp[mex] - 1; 
            mex++; 
        }
    }
    cout << mex;
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
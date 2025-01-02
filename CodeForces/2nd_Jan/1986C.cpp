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
    string s; 
    cin >> s; 
    vector<int> temp(m); 
    for(auto &it: temp)
        cin >> it;
    string c; 
    cin >> c; 
    sort(all(temp)); 
    vector<int> idx = {temp[0]}; 
    for(int i = 1; i < m; ++i)
        if(temp[i] != temp[i-1])
            idx.push_back(temp[i]); 
    sort(all(c)); 
    for(int i = 0; i < idx.size(); ++i)
        s[idx[i]-1] = c[i]; 
    cout << s; 
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
/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    string str; 
    cin >> str; 
    int cnt = 1; 
    int n = str.length(); 
    bool flag = 1; 
    for(int i = 1; i < n; ++i)
    {
        if(str[i-1] == '1' && str[i] == '0')
            cnt++; 
        else if(str[i-1] == '0' && str[i] == '1')
        {
            if(flag)
                flag = 0; 
            else
                cnt++; 
        }
    }
    cout << cnt; 
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
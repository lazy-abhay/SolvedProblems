/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    string x, y;
    cin >> x >> y;
    bool flag = 1;
    for (int i = 0; i < x.length(); ++i)
    {
        char minm = min(x[i], y[i]);
        char maxm = max(x[i], y[i]);
        if(minm == maxm)
            continue;
        if (flag)
        {
            x[i] = maxm; 
            y[i] = minm; 
            flag = 0; 
        }
        else
        {
            x[i] = minm; 
            y[i] = maxm; 
        }
    }
    cout << x; 
    cout << endl; 
    cout << y; 
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
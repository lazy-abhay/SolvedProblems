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
    string s, t;
    cin >> s >> t;
    bool flag = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '1')
            flag = 1;
        if (s[i] == '0' && t[i] == '1')
            if (flag)
                ;
            else
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
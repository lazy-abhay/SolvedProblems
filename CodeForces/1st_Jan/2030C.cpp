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
    string str;
    cin >> str;
    for (int i = 0; (i + 1) < n; ++i)
    {
        if (str[i] == str[i + 1] && str[i] == '1')
        {
            cout << "YES";
            return;
        }
    }
    if (str[0] == '1' || str[n - 1] == '1')
        cout << "YES";
    else
        cout << "NO";
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
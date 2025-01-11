/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n, m, k;
    cin >> n >> m >> k;
    string str;
    cin >> str;
    int jump = m;
    for (int i = 1; i <= n; ++i)
    {
        if (i >= jump && str[i - 1] == 'C')
        {
            cout << "NO";
            return;
        }
        if (str[i - 1] == 'L')
            jump = i + m;
        else if (str[i - 1] == 'W')
        {
            if (i >= jump)
            {
                k--;
                if (k < 0)
                {
                    cout << "NO";
                    return;
                }
            }
        }
        else
        {
            if (i < jump)
                continue;
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
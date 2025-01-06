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
    vector<string> str(n);
    for (auto &it : str)
        cin >> it;
    bool col_1 = 0, col_m = 0, row_1 = 0, row_n = 0;
    for (int i = 0; i < m; ++i)
    {
        if (str[0][i] == 'B')
            row_1 = 1;
        if (str[n - 1][i] == 'B')
            row_n = 1;
    }
    for (int i = 0; i < n; ++i)
    {
        if (str[i][0] == 'B')
            col_1 = 1;
        if (str[i][m - 1] == 'B')
            col_m = 1;
    }
    if (row_1 && row_n && col_1 && col_m)
    {
        cout << "YES";
        return;
    }
    col_1 = 0, col_m = 0, row_1 = 0, row_n = 0;
    for (int i = 0; i < m; ++i)
    {
        if (str[0][i] == 'W')
            row_1 = 1;
        if (str[n - 1][i] == 'W')
            row_n = 1;
    }
    for (int i = 0; i < n; ++i)
    {
        if (str[i][0] == 'W')
            col_1 = 1;
        if (str[i][m - 1] == 'W')
            col_m = 1;
    }
    if (row_1 && row_n && col_1 && col_m)
    {
        cout << "YES";
        return;
    }
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
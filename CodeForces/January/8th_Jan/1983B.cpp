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
    vector<vector<int>> a(n, vector<int>(m, 0)), b(n, vector<int>(m, 0));
    for (auto &it : a)
    {
        for (int i = 0; i < m; ++i)
        {
            char c;
            cin >> c;
            it[i] = c - '0';
        }
    }
    for (auto &it : b)
    {
        for (int i = 0; i < m; ++i)
        {
            char c;
            cin >> c;
            it[i] = c - '0';
        }
    }
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = 0; j < m - 1; ++j)
        {
            if (a[i][j] != b[i][j])
            {
                if ((a[i][j] + 1) % 3 == b[i][j])
                {
                    a[i][j] = (a[i][j] + 1) % 3;
                    a[i + 1][j + 1] = (a[i + 1][j + 1] + 1) % 3;
                    a[i][j + 1] = (a[i][j + 1] + 2) % 3;
                    a[i + 1][j] = (a[i + 1][j] + 2) % 3;
                }
                else
                {
                    a[i][j] = (a[i][j] + 2) % 3;
                    a[i + 1][j + 1] = (a[i + 1][j + 1] + 2) % 3;
                    a[i][j + 1] = (a[i][j + 1] + 4) % 3;
                    a[i + 1][j] = (a[i + 1][j] + 4) % 3;
                }
            }
        }
    }
    if (a == b)
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
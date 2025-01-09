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
    vector<string> str(n);
    for (auto &it : str)
        cin >> it;
    int ans = 0;
    for (int i = 0; i < n / 2; ++i)
    {
        for (int j = 0; j < n / 2; ++j)
        {
            char ch = max({str[i][j], str[j][n - i - 1], str[n - j - 1][i], str[n - i - 1][n - j - 1]});
            ans += ch - str[i][j];
            ans += ch - str[j][n - i - 1];
            ans += ch - str[n - j - 1][i];
            ans += ch - str[n - i - 1][n - j - 1];
        }
    }
    cout << ans;
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
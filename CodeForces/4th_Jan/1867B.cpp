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
    int l = 0, r = n - 1;
    int cnt = 0;
    while (l < r)
    {
        if (str[l] != str[r])
            cnt++;
        l++, r--;
    }
    string ans = "";
    for (int i = 0; i <= n; ++i)
    {
        if (i < cnt)
            ans += "0";
        else if (i == cnt)
            ans += "1";
        else
        {
            if ((n & 1 || (i - cnt) % 2 == 0) && (i + cnt) <= n)
                ans += "1";
            else
                ans += "0";
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
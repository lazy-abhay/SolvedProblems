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
    map<char, int> mp;
    for (char c = 'a'; c <= 'z'; ++c)
        mp[c] = n;
    int ans = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        ans += mp[str[i]] - i;
        mp[str[i]] = i;
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
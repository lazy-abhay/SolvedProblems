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
    int q;
    cin >> q;
    string a, b;
    cin >> a >> b;
    vector<vector<int>> aa(n + 1, vector<int>(26, 0)), bb(n + 1, vector<int>(26, 0));
    for (int i = 0; i < n; ++i)
    {
        aa[i + 1] = aa[i];
        aa[i + 1][a[i] - 'a']++;
        bb[i + 1] = bb[i];
        bb[i + 1][b[i] - 'a']++;
    }
    while (q--)
    {
        int cnt = 0;
        int l, r;
        cin >> l >> r;
        for (int i = 0; i < 26; ++i)
            cnt += abs(aa[r][i] - aa[l - 1][i] - bb[r][i] + bb[l - 1][i]);
        cout << cnt / 2 << endl;
    }
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
/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    string str;
    cin >> str;
    int n = str.length();
    int q;
    cin >> q;
    int cnt = 0;
    for (int i = 0; (i + 3) < n; ++i)
        if (str.substr(i, 4) == "1100")
            cnt++;
    auto update = [&](int pos, char val) -> void
    {
        bool before = 0, after = 0;
        for (int i = -3; i <= 0; ++i)
        {
            int __pos = pos + i;
            if (__pos >= 0 && (__pos + 3) < n)
                if (str.substr(__pos, 4) == "1100")
                    before = 1;
        }
        str[pos] = val;
        for (int i = -3; i <= 0; ++i)
        {
            int __pos = pos + i;
            if (__pos >= 0 && (__pos + 3) < n)
                if (str.substr(__pos, 4) == "1100")
                    after = 1;
        }
        if (before == 0 && after == 1)
            cnt++;
        else if (before == 1 && after == 0)
            cnt--;
    };
    while (q--)
    {
        int pos;
        char val;
        cin >> pos >> val;
        pos--;
        update(pos, val);
        // cout << str << endl;
        cout << (cnt ? "YES" : "NO") << endl;
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
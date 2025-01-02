/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    string t, s;
    cin >> t;
    cin >> s;
    int i = 0, j = 0;
    int n = t.length(), m = s.length();
    while (i < n && j < m)
    {
        if (t[i] == s[j])
            i++, j++;
        else if (t[i] == '?')
        {
            t[i] = s[j];
            i++, j++;
        }
        else
            i++;
    }
    if (j != m)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
        while (i < n)
        {
            if (t[i] == '?')
                t[i] = 'a';
            i++;
        }
        cout << endl; 
        cout << t;
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
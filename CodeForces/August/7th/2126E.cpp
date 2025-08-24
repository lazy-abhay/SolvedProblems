#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int32_t main(void)
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    auto abhay = [&](int __t) -> void
    {
        int n;
        cin >> n; 
        vector<int> p(n), s(n);
        for (auto &it : p)
            cin >> it;
        for (auto &it : s)
            cin >> it;
        int gcd = s[0];
        if (p[n - 1] != s[0])
        {
            cout << "NO";
            return;
        }
        for (int i = 1; i < n; ++i)
        {
            if ((p[i - 1] % p[i]) != 0 || (s[i] % s[i - 1]) != 0)
            {
                cout << "NO";
                return;
            }
        }
        for (int i = 1; i < n; ++i)
        {
            if (__gcd(p[i - 1], s[i]) != s[0])
            {
                cout << "NO";
                return;
            }
        }
        cout << "YES";
    };

    int T = 1;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        abhay(t);
        cout << endl;
    }
    return 0;
}
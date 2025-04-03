/*     Coded by lazy_abhay     */

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
        int n, k;
        cin >> n >> k;
        string str;
        cin >> str;
        set<char> st(all(str));
        if (st.size() == 1)
        {
            cout << "NO";
            return;
        }
        string rev = str;
        reverse(all(rev));
        if (str < rev)
        {
            cout << "YES";
            return;
        }
        if (k == 0)
            cout << "NO";
        else
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
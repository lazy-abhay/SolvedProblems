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
    if (n % 2 == 0)
    {
        int cnt = count(all(str), '0');
        if (cnt == 0)
            cout << "Alice";
        else
            cout << "BOB";
    }
    else
    {
        int cnt = count(all(str), '0');
        if (cnt == 1)
            cout << "BOB";
        else if (cnt % 2)
            cout << "ALICE";
        else
            cout << "BOB";
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
/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int x, n;
    cin >> x >> n;
    int ans = 1;
    set<int> st;
    for (int i = 1; i * i <= x; ++i)
        if (x % i == 0)
            st.insert(i), st.insert(x / i);
    for(auto &it: st)
        if(it <= (x / n))
            ans = it; 
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
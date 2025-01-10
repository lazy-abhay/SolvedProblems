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
    map<char, map<char, int>> mp;
    for (auto &it : str)
        mp[it[0]][it[1]]++;
    int ans = 0;
    for (auto &it : mp)
    {
        int x = 0;
        for (auto &itt : it.second)
            x += itt.second;
        for (auto &itt : it.second)
        {
            x -= itt.second;
            ans += itt.second * x;
        }
    }
    mp.clear();
    for (auto &it : str)
        mp[it[1]][it[0]]++; 
    for (auto &it : mp)
    {
        int x = 0;
        for (auto &itt : it.second)
            x += itt.second;
        for (auto &itt : it.second)
        {
            x -= itt.second;
            ans += itt.second * x;
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
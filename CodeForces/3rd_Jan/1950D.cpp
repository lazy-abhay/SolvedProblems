/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

vector<int> arr;
void solve(int __test_case)
{
    int n;
    cin >> n;
    if (__test_case == 1)
        for (int i = 2; i <= 100000; ++i)
        {
            string temp = to_string(i);
            int x = temp.length();
            int o = count(all(temp), '1');
            int z = count(all(temp), '0');
            if ((o + z) == x)
                arr.push_back(i);
        }
    map<int, bool> dp;
    auto dfs = [&](auto &&self, int curr) -> bool
    {
        if (curr == 1)
            return 1;
        if (dp.find(curr) != dp.end())
            return dp[curr];
        bool flag = 0;
        for (auto &it : arr)
            if (curr % it == 0)
                flag |= self(self, curr / it);
        return dp[curr] = flag;
    };
    if (dfs(dfs, n))
        cout << "YES";
    else
        cout << "NO";
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
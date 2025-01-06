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
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    string str;
    cin >> str;
    vector<bool> visited_1(n, 0), visited_2(n, 0);
    vector<int> ans(n, 0);
    for (int i = 0; i < n; ++i)
    {
        if (visited_1[arr[i] - 1])
            ;
        else
        {
            int cnt = 0;
            int idx = i + 1;
            while (!visited_1[idx - 1])
            {
                visited_1[idx - 1] = 1;
                if (str[idx - 1] == '0')
                    cnt++;
                idx = arr[idx - 1];
            }
            idx = i + 1;
            while (!visited_2[idx - 1])
            {
                visited_2[idx - 1] = 1;
                ans[idx - 1] = cnt;
                idx = arr[idx - 1];
            }
        }
    }
    for (auto &it : ans)
        cout << it << ' ';
}

int32_t main(void)
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int __test_case = 1;
    cin >> __test_case;

    for (int __t = 1; __t <= __test_case; ++__t)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}
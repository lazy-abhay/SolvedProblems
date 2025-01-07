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
    int l = -1, r = -1;
    for (int i = 0; i < n; ++i)
        if (str[i] == 'L' && l == -1)
            l = i;
        else if (str[i] == 'R')
            r = i;
    if (l == -1 || r == -1)
        cout << 0;
    else
    {
        vector<int> prefSum(n + 1, 0);
        int sum = 0;
        for (int i = 1; i <= n; ++i)
            prefSum[i] = prefSum[i - 1] + arr[i-1];
        while (l < r)
        {
            if (str[l] == 'L' && str[r] == 'R')
            {
                sum += prefSum[r + 1] - prefSum[l];
                l++, r--;
            }
            else if (str[l] != 'L')
                l++;
            else
                r--;
        }
        cout << sum;
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
/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> arr(n, vector<int>(n, 0));
    for (auto &it : arr)
        for (auto &itt : it)
            cin >> itt;
    int hor = 0;
    for (int i = 0; i < n / 2; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (arr[i][j] != arr[n - i - 1][n - j - 1])
                hor++;
        }
    }
    if (n & 1)
    {
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (arr[n / 2][i] != arr[n / 2][j])
                hor++;
            i++, j--;
        }
    }
    if(hor <= k)
    {
        if(n & 1)
            cout << "YES"; 
        else
        {
            if(hor <= k && (k - hor) % 2 == 0)
                cout << "YES"; 
            else
                cout << "NO"; 
        }
    }
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
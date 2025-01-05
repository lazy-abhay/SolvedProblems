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
    sort(all(arr));
    int sum = 0;
    vector<bool> visited(2000001, 0); 
    visited[1] = 1; 
    int idx = 1; 
    for (auto &it : arr)
    {
        if (visited[it])
        {
            int last = min(it + sum, 200000LL); 
            while(idx <= last)
                visited[idx] = 1, idx++; 
            sum += it;
        }
        else
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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
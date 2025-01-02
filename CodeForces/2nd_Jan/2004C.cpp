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
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    sort(all(arr));
    int sum = 0;
    for (int i = n - 1; i > 0; i -= 2)
    {
        int diff = arr[i] - arr[i - 1];
        if (diff <= k)
            k -= diff;
        else
        {
            diff -= k;
            k = 0;
            sum += diff;
        }
    }
    if(n & 1)
        sum += arr[0]; 
    cout << sum;
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
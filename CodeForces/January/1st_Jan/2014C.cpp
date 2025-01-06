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
    int sum = accumulate(all(arr), 0LL);
    int ans = -1;
 
    auto isPossible = [&](int val) -> bool
    {
        arr[n - 1] += val;
        double curr = sum + val;
        double avg = (1.0 * curr) / n;
        avg /= 2; 
        int cnt = 0;
        for (auto &it : arr)
            if (it < avg)
                cnt++;
        arr[n - 1] -= val;
        return cnt > n / 2;
    };

    int st = 0, en = 1e15;
    while (st <= en)
    {
        int md = st + (en - st) / 2;
        if (isPossible(md))
        {
            ans = md;
            en = md - 1;
        }
        else
            st = md + 1;
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
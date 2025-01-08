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
    set<int> st(all(arr));
    arr.clear();
    for (auto &it : st)
        arr.push_back(it);
    int maxm = 1;
    int x = arr.size(); 
    for (int i = 0; i < x; ++i)
    {
        int st = i, en = x-1;
        int idx = i;
        while (st <= en)
        {
            int md = st + (en - st) / 2;
            if (arr[md] < (arr[i] + n))
            {
                idx = md;
                st = md + 1;
            }
            else
                en = md - 1;
        }
        maxm = max(maxm, idx - i + 1);
    }
    cout << maxm;   
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
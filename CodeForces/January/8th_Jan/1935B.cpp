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
    int leftMex = 0, rightMex = 0;
    map<int, int> mp;
    for (auto &it : arr)
        mp[it]++;
    for (auto &it : mp)
        if (it.first == rightMex)
            rightMex++;
        else
            break;
    set<int> st;
    for (int i = 0; i < n; ++i)
    {
        st.insert(arr[i]);
        while (st.count(leftMex))
            leftMex++;
        mp[arr[i]]--;
        if (mp[arr[i]] == 0)
        {
            if (arr[i] <= rightMex)
                rightMex = arr[i];
        }
        if (leftMex == rightMex)
        {
            cout << 2 << endl;
            cout << 1 << ' ' << i + 1 << endl;
            cout << i + 2 << ' ' << n;
            return;
        }
    }
    cout << -1;
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
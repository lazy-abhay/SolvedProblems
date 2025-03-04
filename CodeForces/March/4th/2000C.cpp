/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

int32_t main(void)
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    auto abhay = [&](int __t) -> void
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        map<int, vector<int>> mp;
        for (int i = 0; i < n; ++i)
            mp[arr[i]].push_back(i);
        set<vector<int>> st;
        for (auto &it : mp)
            st.insert(it.second);
        int m;
        cin >> m;
        while (m--)
        {
            string str;
            cin >> str;
            if (str.length() != n)
            {
                cout << "NO" << endl;
                continue;
            }
            map<char, vector<int>> mpp;
            for (int i = 0; i < n; ++i)
                mpp[str[i]].push_back(i);
            set<vector<int>> temp;
            for (auto &it : mpp)
                temp.insert(it.second);
            if (st == temp)
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
    };

    int T = 1;
    cin >> T;
    for (int t = 1; t <= T; ++t)
    {
        abhay(t);
        cout << endl;
    }
    return 0;
}
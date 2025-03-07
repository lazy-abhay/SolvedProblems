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
        string str;
        cin >> str;
        stack<pair<int, char>> st, ST;
        for (int i = 0; i < str.length(); ++i)
        {
            if (str[i] == 'b')
            {
                if (!st.empty())
                    st.pop();
            }
            else if (str[i] == 'B')
            {
                if (!ST.empty())
                    ST.pop();
            }
            else if (str[i] >= 'a' && str[i] <= 'z')
                st.push({i, str[i]});
            else
                ST.push({i, str[i]});
        }
        string ans = "";
        vector<pair<int, char>> arr;
        while (!st.empty())
            arr.push_back(st.top()), st.pop();
        while (!ST.empty())
            arr.push_back(ST.top()), ST.pop();
        sort(all(arr));
        for(auto &it: arr)
            ans.push_back(it.second); 
        cout << ans; 
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
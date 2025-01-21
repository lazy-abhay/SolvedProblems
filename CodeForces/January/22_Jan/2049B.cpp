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
    ios::sync_with_stdio(false);

    auto solve = [&](int __t) -> void
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int cnt_p = count(all(str), 'p');
        int cnt_s = count(all(str), 's');
        if (cnt_p == 0 || cnt_s == 0)
        {
            cout << "YES";
            return;
        }
        vector<int> arr(n, -1);
        int l = 1;
        set<int> st;
        for (int i = 0, j = 0; i < n; ++i)
        {
            if (str[i] == 'p')
            {
                int k = i;
                while (k >= j)
                {
                    arr[k] = l++;
                    k--;
                }
                j = i + 1;
            }
        }
        for (auto &it : arr)
            if (it == -1)
                it = l++;
        // for (auto &it : arr)
        //     cout << it << ' ';
        // return;
        for (int i = 0; i < n; ++i)
        {
            st.insert(arr[i]);
            if (str[i] == 'p')
            {
                if (*st.rbegin() != (i + 1))
                {
                    cout << "NO";
                    return;
                }
            }
        }
        st.clear();
        reverse(all(str));
        reverse(all(arr));
        for (int i = 0; i < n; ++i)
        {
            st.insert(arr[i]);
            if (str[i] == 's')
            {
                if (*st.rbegin() != (i + 1))
                {
                    cout << "NO";
                    return;
                }
            }
        }
        cout << "YES";
    };

    int __T = 1;
    cin >> __T;

    for (int __t = 1; __t <= __T; __t++)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}
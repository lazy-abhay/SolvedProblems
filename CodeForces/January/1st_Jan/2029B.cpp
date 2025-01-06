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
    string s;
    cin >> s;
    string r;
    cin >> r;
    vector<char> st;
    st.push_back(s[0]);
    int j = 0;
    for (int i = 1; i < n; ++i)
    {
        st.push_back(s[i]);
        while (st.size() > 1)
        {
            int m = st.size();
            if (st[m - 1] != st[m - 2])
            {
                st.pop_back();
                st.pop_back();
                if (s[i] == '0')
                {
                    if (r[j] == '0')
                        st.push_back('0');
                    else
                        st.push_back('1');
                }
                else
                {
                    if (r[j] == '1')
                        st.push_back('1');
                    else
                        st.push_back('0');
                }
                j++;
            }
            else
                break;
        }
    }
    cout << (j == (n - 1) ? "YES" : "NO");
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
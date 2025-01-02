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
    string str; 
    cin >> str; 
    int ans = 0; 
    stack<int> st; 
    int open = 0; 
    for(int i = 0; i < n; ++i)
    {
        if(str[i] == '_')
        {
            if(open == 0)
            {
                open++; 
                st.push(i); 
            }
            else
            {
                open--; 
                ans += i - st.top(); 
                st.pop(); 
            }
        }
        else
        {
            if(str[i] == '(')
            {
                st.push(i); 
                open++; 
            }
            else
            {
                ans += i - st.top(); 
                st.pop(); 
                open--; 
            }
        }
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
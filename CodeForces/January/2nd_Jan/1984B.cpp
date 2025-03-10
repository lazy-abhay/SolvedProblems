/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    string str; 
    cin >> str; 
    reverse(all(str)); 
    bool carry = 0; 
    int n = str.length(); 
    for(int i = 0; i < n; ++i)
    {
        int digit = str[i] - '0'; 
        if(carry)
            digit--; 
        carry = 1; 
        if(digit == -1)
            digit = 9;
        if(digit == 9)
        {
            cout << "NO"; 
            return;
        }
        if(i == (n-1))
        {
            if(digit != 0)
            {
                cout << "NO"; 
                return; 
            }
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
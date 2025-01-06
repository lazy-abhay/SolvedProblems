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
    int two = 0, three = 0, sum = 0; 
    for(auto &it: str)
    {
        sum += it - '0'; 
        if(it == '2')
            two++; 
        else if(it == '3')
            three++; 
    }
    if(sum % 9 == 0)
    {
        cout << "YES"; 
        return; 
    }
    set<int> st; 
    // st.insert(sum); 
    for(int i = 0; i <= min(10LL, two); ++i)
    {
        int temp = sum + 2 * i; 
        for(int j = 0; j <= min(10LL, three); ++j)
            st.insert(temp + 6 * j); 
    }
    for(auto &it: st)
        if(it % 9 == 0)
        {
            cout << "YES"; 
            return;
        }
    cout << "NO"; 
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
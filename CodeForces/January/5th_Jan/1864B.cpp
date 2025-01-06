/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    if (k % 2 == 0)
    {
        sort(all(str));
        cout << str;
        return;
    }
    string odd = "", even = "";
    for (int i = 0; i < n; ++i)
        if (i & 1)
            odd += str[i];
        else
            even += str[i];
    sort(all(odd)); 
    sort(all(even)); 
    int l = 0, r = 0; 
    for(int i = 0; i < n; ++i)
        if(i & 1)
            cout << odd[l++]; 
        else
            cout << even[r++]; 
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
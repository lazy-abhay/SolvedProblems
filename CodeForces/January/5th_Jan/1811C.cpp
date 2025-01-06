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
    vector<int> arr(n-1); 
    for(auto &it: arr)
        cin >> it; 
    cout << arr[0] << ' '; 
    for(int i = 1; i < (n-1); ++i)
        cout << min(arr[i], arr[i-1]) << ' '; 
    cout << arr.back(); 
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
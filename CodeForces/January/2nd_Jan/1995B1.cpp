/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n, m; 
    cin >> n >> m; 
    vector<int> arr(n); 
    for(auto &it: arr)  
        cin >> it; 
    sort(all(arr)); 
    int ans = 0; 
    int curr = 0; 
    int i = 0, j = 0; 
    while(i < n && j < n)
    {
        if(j == 0)
        {
            curr += arr[j]; 
            j++; 
            while(curr > m)
                curr -= arr[i], i++; 
            ans = max(ans, curr); 
        }
        else
        {
            if((arr[j] - arr[i]) > 1)
            {
                while((arr[j] - arr[i]) > 1)
                    curr -= arr[i], i++;  
                curr += arr[j]; 
                j++; 
                while(curr > m)
                    curr -= arr[i], i++; 
                ans = max(ans, curr); 
            }
            else
            {
                curr += arr[j]; 
                j++; 
                while(curr > m)
                    curr -= arr[i], i++; 
                ans = max(ans, curr); 
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
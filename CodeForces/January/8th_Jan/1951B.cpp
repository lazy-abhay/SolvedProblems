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
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    int maxm = *max_element(all(arr));
    k--;
    
    swap(arr[k], arr[0]); 
    int x = 0; 
    for(int i = 1; i < n; ++i)
    {
        if(arr[i] < arr[0])
            x++; 
        else
            break; 
    }

    swap(arr[0], arr[k]);
    int idx = 0; 
    for(int i = 0; i < k; ++i)
    {
        if(arr[i] > arr[k])
        {
            swap(arr[i], arr[k]); 
            idx = i; 
            break;
        }
    }
    int y = 1; 
    if(idx == 0)
        y--; 
    for(int i = idx + 1; i < n; ++i)
    {
        if(arr[i] > arr[idx])
            break;
        else
            y++; 
    }
    cout << max(x, y); 
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
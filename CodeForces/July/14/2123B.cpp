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
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> arr(n);
        for (auto &it : arr)
        cin >> it;
        int x = arr[j-1]; 
        int maxm = *max_element(all(arr)); 
        if(k == 1 && x != maxm)
            cout << "NO"; 
        else    
            cout << "YES"; 
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
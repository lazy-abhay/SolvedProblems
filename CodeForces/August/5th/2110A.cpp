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
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        sort(all(arr));
        int i = 0, j = n - 1;
        int l = 0, r = 0;
        while (i < n && (arr[i] + arr[n - 1]) % 2 == 1)
            i++, l++;
        while(j >= 0 && (arr[0] + arr[j]) % 2 == 1)
            j--, r++; 
        cout <<  min(l, r); 
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
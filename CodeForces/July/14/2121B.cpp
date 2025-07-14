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
        map<char, int> mp; 
        string str; 
        cin >> str; 
        mp[str[0]]++; 
        mp[str[n-1]]++; 
        for(int i = 1; i < n-1; ++i)
        {
            if(mp[str[i]] > 0)
            {
                cout << "YES"; 
                return;
            }
            mp[str[i]]++;
        }
        cout << "NO";
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
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
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        while(pq.size() >= 2)
        {
            int x = pq.top(); 
            pq.pop(); 
            int y = pq.top(); 
            pq.pop(); 
            pq.push(x + y - 1); 
        }
        cout << pq.top();
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
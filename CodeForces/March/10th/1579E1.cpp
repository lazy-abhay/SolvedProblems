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
        deque<int> dq;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (i == 0)
                dq.push_back(x);
            else if (x < dq.front())
                dq.push_front(x);
            else
                dq.push_back(x);
        }
        while (!dq.empty())
        {
            cout << dq.front() << ' ';
            dq.pop_front();
        }
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
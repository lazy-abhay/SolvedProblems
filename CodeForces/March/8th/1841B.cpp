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
        vector<int> arr;
        bool flag = 0;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            if (arr.size() == 0)
            {
                arr.push_back(x);
                cout << 1;
            }
            else
            {
                if (flag == 0)
                {
                    if (x <= arr.front())
                    {
                        flag = 1;
                        cout << 1;
                        arr.push_back(x);
                    }
                    else if (x >= arr.back())
                    {
                        cout << 1;
                        arr.push_back(x);
                    }
                    else
                        cout << 0;
                }
                else
                {
                    if (x <= arr.front() && x >= arr.back())
                    {
                        cout << 1;
                        arr.push_back(x);
                    }
                    else
                        cout << 0;
                }
            }
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
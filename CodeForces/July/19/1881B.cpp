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
        vector<int> arr(3);
        for (auto &it : arr)
            cin >> it;
        sort(all(arr));
        int a = arr[0];
        int b = arr[1];
        int c = arr[2];
        if (a == b && b == c)
            cout << "YES";
        else if (a == b && c % a == 0 && c / a <= 4)
            cout << "YES";
        else if (2 * a == b && c % a == 0 && c / a <= 3)
            cout << "YES";
        else
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
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
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    vector<int> temp;
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            if (arr[i] < 10)
                temp.push_back(arr[i]);
            else
            {
                int b = arr[i] % 10;
                arr[i] /= 10;
                int a = arr[i];
                if (b >= a)
                {
                    temp.push_back(a);
                    temp.push_back(b);
                }
                else
                    temp.push_back(a * 10 + b);
            }
        }
        else
        {
            if (arr[i] < 10)
                temp.push_back(arr[i]);
            else
            {
                int b = arr[i] % 10;
                arr[i] /= 10;
                int a = arr[i];
                if (a >= temp.back() && b >= a)
                {
                    temp.push_back(a);
                    temp.push_back(b);
                }
                else
                    temp.push_back(a * 10 + b);
            }
        }
    }
    if (is_sorted(all(temp)))
        cout << "YES";
    else
        cout << "NO";
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
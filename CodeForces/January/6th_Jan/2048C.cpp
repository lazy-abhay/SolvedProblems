/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    string str;
    cin >> str;
    int n = str.length();
    int one = count(all(str), '1');
    if (one == n)
    {
        cout << 1 << ' ' << 1 << ' ' << 1 << ' ' << n;
        return;
    }
    int zero = -1;
    for (int i = 0; i < n; ++i)
        if (str[i] == '0')
        {
            zero = i;
            break;
        }
    int x = n - zero;
    auto __xor = [&](string curr) -> string
    {
        string res = "";
        for(int i = 0, j =  zero; i < x; ++i, ++j)
        {
            if(curr[i] == str[j])
                res.push_back('0');
            else
                res.push_back('1');
        }
        return res; 
    };
    string ans = __xor(str.substr(zero, x));
    int idx = zero; 
    for (int i = 0; i < zero; ++i)
    {
        string curr = str.substr(i, x);
        string res = __xor(curr);
        if (res > ans)
        {
            ans = res;
            idx = i;
        }
    }
    cout << 1 << ' ' << n << ' ' << idx + 1 << ' ' << idx + x;
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
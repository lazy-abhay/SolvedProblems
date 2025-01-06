/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;

    class SegmentTree
    {
        int n;
        vector<int> temp, tree;
        void build(int node, int st, int en)
        {
            if (st == en)
            {
                tree[node] = temp[st];
                return;
            }
            int md = st + (en - st) / 2;
            build(2 * node + 1, st, md);
            build(2 * node + 2, md + 1, en);
            tree[node] = __gcd(tree[2 * node + 1], tree[2 * node + 2]);
        }
        int query(int node, int st, int en, int l, int r)
        {
            if (st > en || st > r || en < l)
                return 0;
            if (st >= l && en <= r)
                return tree[node];
            int md = st + (en - st) / 2;
            int left = query(2 * node + 1, st, md, l, r);
            int right = query(2 * node + 2, md + 1, en, l, r);
            return __gcd(left, right);
        }
 
    public:
        SegmentTree(int n, vector<int> &temp)
        {
            this->n = n;
            this->temp = temp;
            tree.resize(4 * n, 0);
            build(0, 0, n - 1);
        }
        int query(int l, int r)
        {
            return query(0, 0, n - 1, l, r);
        }
    };

    if (n == 1)
    {
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << 0 << ' ';
        }
        return;
    }

    vector<int> temp;
    for (int i = 1; i < n; ++i)
        temp.push_back(abs(arr[i] - arr[i - 1]));

    SegmentTree obj(n - 1, temp);

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << obj.query(l - 1, r - 2) << ' ';
    }
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
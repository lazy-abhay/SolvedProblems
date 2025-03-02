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

    class SegmentTree
    {
        int n;
        vector<int> arr, tree, lazy;
        void build(int node, int st, int en)
        {
            if (st == en)
            {
                tree[node] = arr[st];
                return;
            }
            int md = st + (en - st) / 2;
            build(2 * node + 1, st, md);
            build(2 * node + 2, md + 1, en);
            tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
        }
        void update(int node, int st, int en, int l, int r)
        {
            if (lazy[node] != 0)
            {
                tree[node] = (en - st + 1);
                if (st != en)
                {
                    lazy[2 * node + 1] = 1;
                    lazy[2 * node + 2] = 1;
                }
                lazy[node] = 0;
            }
            if (st > en || st > r || en < l)
                return;
            if (st >= l && en <= r)
            {
                tree[node] = (en - st + 1);
                if (st != en)
                {
                    lazy[2 * node + 1] = 1;
                    lazy[2 * node + 2] = 1;
                }
                return;
            }
            int md = st + (en - st) / 2;
            update(2 * node + 1, st, md, l, r);
            update(2 * node + 2, md + 1, en, l, r);
            tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
        }
        int query(int node, int st, int en, int l, int r)
        {
            if (lazy[node] != 0)
            {
                tree[node] = (en - st + 1);
                if (st != en)
                {
                    lazy[2 * node + 1] = 1;
                    lazy[2 * node + 2] = 1;
                }
                lazy[node] = 0;
            }
            if (st > en || st > r || en < l)
                return 0;
            if (st >= l && en <= r)
                return tree[node];
            int md = st + (en - st) / 2;
            int left = query(2 * node + 1, st, md, l, r);
            int right = query(2 * node + 2, md + 1, en, l, r);
            return left + right;
        }

    public:
        SegmentTree(vector<int> &arr)
        {
            this->arr = arr;
            n = arr.size();
            tree.resize(4 * n, 0);
            lazy.resize(4 * n, 0);
            build(0, 0, n - 1);
        }
        int query(int l, int r)
        {
            return query(0, 0, n - 1, l, r);
        }
        void update(int l, int r)
        {
            r = min(n - 1, r);
            update(0, 0, n - 1, l, r);
        }
    };

    auto abhay = [&](int __t) -> void
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> arr;
        for (int i = 0; i < n; ++i)
        {
            char ch;
            cin >> ch;
            arr.push_back(ch == '1');
        }
        // for (auto &it : arr)
        //     cout << it << ' ';
        // return;
        SegmentTree obj(arr);
        int ans = 0;
        for (int i = 0; i + m <= n; ++i)
        {
            if (obj.query(i, i + m - 1) == 0)
            {
                ans++;
                obj.update(i + m - 1, i + m - 1 + k - 1);
            }
        }
        cout << ans;
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
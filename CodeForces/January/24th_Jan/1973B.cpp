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
    ios::sync_with_stdio(false);

    auto solve = [&](int __t) -> void
    {
        class segmentTree
        {
            int n;
            vector<int> arr, tree;
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
                tree[node] = tree[2 * node + 1] | tree[2 * node + 2];
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
                return left | right;
            }

        public:
            segmentTree(vector<int> &arr)
            {
                this->arr = arr;
                this->n = arr.size();
                tree.resize(4 * n, 0);
                build(1, 0, n - 1);
            }
            int query(int l, int r)
            {
                return query(1, 0, n - 1, l, r);
            }
        };
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        int st = 1, en = n;
        int ans = n;
        segmentTree obj(arr);
        auto isValid = [&](int k) -> bool
        {
            map<int, int> mp;
            for (int i = 0; (i + k - 1) < n; ++i)
                mp[obj.query(i, i + k - 1)]++;
            return (int)mp.size() == 1;
        };
        while (st <= en)
        {
            int md = st + (en - st) / 2;
            if (isValid(md))
            {
                ans = md;
                en = md - 1;
            }
            else
                st = md + 1;
        }
        cout << ans;
    };

    int __T = 1;
    cin >> __T;

    for (int __t = 1; __t <= __T; __t++)
    {
        solve(__t);
        cout << endl;
    }

    return 0;
}
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
            vector<int> arr, minTree, maxTree;
            void build(int node, int st, int en)
            {
                if (st == en)
                {
                    minTree[node] = maxTree[node] = arr[st];
                    return;
                }
                int md = st + (en - st) / 2;
                build(2 * node + 1, st, md);
                build(2 * node + 2, md + 1, en);
                minTree[node] = min(minTree[2 * node + 1], minTree[2 * node + 2]);
                maxTree[node] = max(maxTree[2 * node + 1], maxTree[2 * node + 2]);
            }
            pair<int, int> query(int node, int st, int en, int l, int r)
            {
                if (st > en || st > r || en < l)
                    return {INT_MAX, INT_MIN};
                if (st >= l && en <= r)
                    return {minTree[node], maxTree[node]};
                int md = st + (en - st) / 2;
                pair<int, int> left = query(2 * node + 1, st, md, l, r);
                pair<int, int> right = query(2 * node + 2, md + 1, en, l, r);
                return {min(left.first, right.first), max(left.second, right.second)};
            }

        public:
            segmentTree(vector<int> &arr)
            {
                this->arr = arr;
                this->n = arr.size();
                minTree.resize(4 * n, INT_MAX);
                maxTree.resize(4 * n, INT_MIN);
                build(0, 0, n - 1);
            }
            pair<int, int> query(int l, int r)
            {
                return query(0, 0, n - 1, l, r);
            }
        };
        int n;
        cin >> n;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        map<int, vector<int>> idx;
        for (int i = 0; i < n; ++i)
            idx[arr[i]].push_back(i);
        segmentTree obj(arr);
        int q;
        cin >> q;
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;
            pair<int, int> temp = obj.query(l, r);
            int minm = temp.first;
            int maxm = temp.second;
            if (minm == maxm)
                cout << -1 << ' ' << -1 << endl;
            else
                cout << *lower_bound(all(idx[minm]), l) + 1 << ' ' << *lower_bound(all(idx[maxm]), l) + 1 << endl;
        }
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
/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

void solve(int __test_case)
{
    class segmentTree
    {
        int n;
        vector<int> tree, lazy;

        void propagate(int node, int st, int en)
        {
            if (lazy[node] != 0)
            {
                tree[node] = 1; 
                if (st != en)
                {
                    lazy[2 * node + 1] = 1; 
                    lazy[2 * node + 2] = 1;
                }
                lazy[node] = 0; 
            }
        }
        void update(int node, int st, int en, int l, int r)
        {
            propagate(node, st, en);
            if (st > en || st > r || en < l)
                return; 
            if (st >= l && en <= r)
            {
                lazy[node] = 1;        
                propagate(node, st, en); 
                return;
            }
            int mid = st + (en - st) / 2;
            update(2 * node + 1, st, mid, l, r);
            update(2 * node + 2, mid + 1, en, l, r);
        }
        int query(int node, int st, int en, int pos)
        {
            propagate(node, st, en); 
            if (st == en)
                return tree[node]; 
            int mid = st + (en - st) / 2;
            if (pos <= mid)
                return query(2 * node + 1, st, mid, pos);
            else
                return query(2 * node + 2, mid + 1, en, pos);
        }

    public:
        segmentTree(int n)
        {
            this->n = n;
            tree.resize(4 * n, 0);
            lazy.resize(4 * n, 0);
        }
        void update(int l, int r)
        {
            update(0, 0, n - 1, l, r);
        }
        int query(int pos)
        {
            return query(0, 0, n - 1, pos);
        }
    };

    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    sort(all(arr));
    int sum = 0;
    segmentTree obj(5001);
    obj.update(1, 1);
    for (auto &it : arr)
    {
        if (obj.query(it))
        {
            obj.update(it, min(5001LL, it + sum));
            sum += it;
        }
        else
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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
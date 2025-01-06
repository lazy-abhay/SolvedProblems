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
            tree[node] = tree[2 * node + 1] + tree[2 * node + 2];
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
            return left + right;
        }

    public:
        segmentTree(vector<int> &arr)
        {
            this->arr = arr;
            n = arr.size();
            tree.resize(4 * n, 0);
            build(0, 0, n - 1);
        }
        int query(int l, int r)
        {
            return query(0, 0, n - 1, l, r);
        }
    };
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    sort(all(arr));
    int sum = 0;
    int x = k+1;
    int i = 0, j = n - k - 1;
    segmentTree obj(arr);
    while (x--)
    {
        sum = max(sum, obj.query(i, j));
        i += 2;
        j++;
    }
    cout << sum;
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
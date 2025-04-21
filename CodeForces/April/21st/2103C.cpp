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

    class segmentTree
    {
        vector<int> arr, minm, maxm;
        void build(int node, int st, int en)
        {
            if (st == en)
            {
                minm[node] = arr[st];
                maxm[node] = arr[st];
                return;
            }
            int md = st + (en - st) / 2;
            build(node * 2 + 1, st, md);
            build(node * 2 + 2, md + 1, en);
            minm[node] = min(minm[node * 2 + 1], minm[node * 2 + 2]);
            maxm[node] = max(maxm[node * 2 + 1], maxm[node * 2 + 2]);
        }
        int queryMinm(int node, int st, int en, int l, int r)
        {
            if (st > r || en < l)
                return INT_MAX;
            if (st >= l && en <= r)
                return minm[node];
            int md = st + (en - st) / 2;
            return min(queryMinm(node * 2 + 1, st, md, l, r), queryMinm(node * 2 + 2, md + 1, en, l, r));
        }
        int queryMaxm(int node, int st, int en, int l, int r)
        {
            if (st > r || en < l)
                return INT_MIN;
            if (st >= l && en <= r)
                return maxm[node];
            int md = st + (en - st) / 2;
            return max(queryMaxm(node * 2 + 1, st, md, l, r), queryMaxm(node * 2 + 2, md + 1, en, l, r));
        }

    public:
        segmentTree(vector<int> &arr)
        {
            this->arr = arr;
            int n = arr.size();
            minm.resize(4 * n);
            maxm.resize(4 * n);
            build(0, 0, n - 1);
        }
        int queryMinm(int l, int r)
        {
            return queryMinm(0, 0, arr.size() - 1, l, r);
        }
        int queryMaxm(int l, int r)
        {
            return queryMaxm(0, 0, arr.size() - 1, l, r);
        }
    };

    auto abhay = [&](int __t) -> void
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (auto &it : arr)
            cin >> it;
        vector<int> temp(n + 1, 0);
        for (int i = 1; i <= n; ++i)
        {
            if (arr[i - 1] <= k)
                temp[i]++;
            else
                temp[i]--;
            temp[i] += temp[i - 1];
        }
        segmentTree obj(temp);
        int piv = temp[n];
        for (int i = 1; i <= n - 1; ++i)
            if ((i != n - 1 && temp[i] >= 0 && 
                (obj.queryMaxm(i + 1, n - 1) >= temp[i] || 
                obj.queryMinm(i + 1, n - 1) <= piv)) || 
                (i != 1 && temp[i] <= piv && 
                    obj.queryMinm(1, i - 1) <= temp[i]))
            {
                cout << "YES";
                return;
            }
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
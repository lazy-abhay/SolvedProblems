/*     Coded by lazy_abhay     */

#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define int long long
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

class segmentTree
{
    int n;
    vector<int> tree;
    int query(int node, int st, int en, int l, int r)
    {
        if (st > en || st > r || en < l)
            return -1;
        if (st >= l && en <= r)
            return tree[node];
        int md = st + (en - st) / 2;
        int left = query(2 * node + 1, st, md, l, r);
        int right = query(2 * node + 2, md + 1, en, l, r);
        return max(left, right);
    }
    void update(int node, int st, int en, int pos, int val)
    {
        if (st == en)
        {
            tree[node] = val;
            return;
        }
        int md = st + (en - st) / 2;
        if (pos <= md)
            update(2 * node + 1, st, md, pos, val);
        else
            update(2 * node + 2, md + 1, en, pos, val);
        tree[node] = max(tree[2 * node + 1], tree[2 * node + 2]);
    }

public:
    segmentTree(int n)
    {
        this->n = n; 
        tree.resize(4*(n+1), -1); 
    }
    int query(int l, int r)
    {
        return query(0, 1, n, l, r); 
    }
    void update(int pos, int val)
    {
        update(0, 1, n, pos, val); 
    }
};
void solve(int __test_case)
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &it : arr)
        cin >> it;
    vector<int> prefMax(n, arr[0]);
    for (int i = 1; i < n; ++i)
        prefMax[i] = max(arr[i], prefMax[i - 1]);
    vector<int> ans(n);
    
    // segmentTree obj(n); 
    // for(int i = n-1; i >= 0; --i)
    // {
    //     ans[i] = max({prefMax[i], arr[i], obj.query(1, prefMax[i]-1)});
    //     obj.update(arr[i], ans[i]); 
    // }

    // Another approach
    set<pair<int,int>> st; 
    for(int i = n-1; i >= 0; --i)
    {
        ans[i] = prefMax[i]; 
        auto it = st.lower_bound({-prefMax[i]+1, -1}); 
        if(it != st.end())
        {
            int idx = it->second; 
            ans[i] = max(ans[i], ans[idx]);
        }
        st.insert({-arr[i], i}); 
    }

    for(auto &it: ans)
        cout << it << ' '; 
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
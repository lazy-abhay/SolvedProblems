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

    auto abhay = [&](int __t) -> void
    {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (auto &x : a)
            cin >> x;
        for (auto &x : b)
            cin >> x;
        map<int, int> idxA, idxB;
        for (int i = 0; i < n; ++i)
            idxA[a[i]] = i, idxB[b[i]] = i;
        set<pair<int, int>> st;
        for (int i = 0; i < n; ++i)
        {
            st.insert({a[i], b[i]});
            st.insert({b[i], a[i]});
        }
        if (st.size() != n)
        {
            cout << -1;
            return;
        }
        vector<pair<int, int>> cmn;
        for (int i = 0; i < n; ++i)
            if (a[i] == b[i])
                cmn.push_back({a[i], b[i]});
        vector<pair<int, int>> ans;
        if (n % 2 == 1)
        {
            if (cmn.size() != 1)
            {
                cout << -1;
                return;
            }
            vector<bool> visited(n, 0);
            int mycmn = cmn[0].first;
            visited[n / 2] = 1;
            if (idxA[mycmn] != (n / 2))
            {
                ans.push_back({idxA[mycmn], n / 2});
                swap(a[idxA[mycmn]], a[n / 2]);
                swap(b[idxA[mycmn]], b[n / 2]);
                swap(idxA[a[idxA[mycmn]]], idxA[a[n / 2]]);
                swap(idxB[b[idxA[mycmn]]], idxB[b[n / 2]]);
            }
            for (int i = 0; i < n; ++i)
            {
                if (!visited[i] && a[i] != b[n - 1 - i])
                {
                    int curr = i;
                    while (!visited[curr] && a[curr] != b[n - 1 - curr])
                    {
                        visited[curr] = true;
                        int target = b[n - 1 - curr];
                        int nxt = idxA[target];
                        ans.push_back({curr, nxt});
                        swap(a[curr], a[nxt]);
                        swap(b[curr], b[nxt]);
                        idxA[a[curr]] = curr;
                        idxA[a[nxt]] = nxt;
                        idxB[b[curr]] = curr;
                        idxB[b[nxt]] = nxt;
                        curr = nxt;
                    }
                }
            }
        }
        else
        {
            if (cmn.size() != 0)
            {
                cout << -1;
                return;
            }
            vector<bool> visited(n, false);
            for (int i = 0; i < n; ++i)
            {
                if (!visited[i] && a[i] != b[n - 1 - i])
                {
                    int curr = i;
                    while (!visited[curr] && a[curr] != b[n - 1 - curr])
                    {
                        visited[curr] = true;
                        int target = b[n - 1 - curr];
                        int nxt = idxA[target];
                        ans.push_back({curr, nxt});
                        swap(a[curr], a[nxt]);
                        swap(b[curr], b[nxt]);
                        idxA[a[curr]] = curr;
                        idxA[a[nxt]] = nxt;
                        idxB[b[curr]] = curr;
                        idxB[b[nxt]] = nxt;
                        curr = nxt;
                    }
                }
            }
        }
        cout << ans.size() << endl;
        for (auto &it : ans)
            cout << it.first + 1 << ' ' << it.second + 1 << endl;
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
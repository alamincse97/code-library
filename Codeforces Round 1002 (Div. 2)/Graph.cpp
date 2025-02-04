#include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define eb emplace_back
 
const int INF = 1e18;
 
void solve() {
    int n, s1, s2;
    cin >> n >> s1 >> s2;
    s1--, s2--;
    vector<vector<int>> g1(n), g2(n);
    vector<bool> good(n);
    set<pair<int, int>> edges;
    int m1;
    cin >> m1;
    for (int i = 0; i < m1; i++) {
        int v, u;
        cin >> v >> u;
        v--, u--;
        if (v > u)
            swap(v, u);
        edges.insert({v, u});
        g1[v].eb(u);
        g1[u].eb(v);
    }
    int m2;
    cin >> m2;
    for (int i = 0; i < m2; i++) {
        int v, u;
        cin >> v >> u;
        v--, u--;
        if (v > u)
            swap(v, u);
        if (edges.find({v, u}) != edges.end())
            good[v] = true, good[u] = true;
        g2[v].eb(u);
        g2[u].eb(v);
    }
    vector<vector<int>> d(n, vector<int> (n, INF));
    d[s1][s2] = 0;
    set<pair<int, pair<int, int>>> st;
    st.insert({0, {s1, s2}});
    while (!st.empty()) {
        auto [v, u] = st.begin()->second;
        st.erase(st.begin());
        for (auto to1 : g1[v]) {
            for (auto to2 : g2[u]) {
                int w = abs(to1 - to2);
                if (d[to1][to2] > d[v][u] + w) {
                    st.erase({d[to1][to2], {to1, to2}});
                    d[to1][to2] = d[v][u] + w;
                    st.insert({d[to1][to2], {to1, to2}});
                }
            }
        }
    }
    int ans = INF;
    for (int i = 0; i < n; i++) {
        if (!good[i])
            continue;
        ans = min(ans, d[i][i]);
    }
    if (ans == INF)
        ans = -1;
    cout << ans << '\n';
}
 
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    cin >> T;
    while (T--)
        solve();
    return 0;
}
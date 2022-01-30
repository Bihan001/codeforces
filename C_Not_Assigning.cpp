// Author: Bihan Chakraborty
// Linkedin: https://www.linkedin.com/in/bihan-chakraborty
// Github: https://github.com/Bihan001

#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
const int MOD = 1e9 + 7;
const int INF = 1e18;
#define inputarr(arr, n) \
    for (int i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) \
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';

map<pii, int> m;

bool dfs(int curr, int par, vector<vector<pii>> &tree) {
    if (par == 0) {
        // root
        if (tree[curr].size() > 2) {
            return false;
        }
        bool f = false;
        for (pii &edge : tree[curr]) {
            int v = edge.first;
            if (!f) {
                f = true;
                edge.second = 11;
                m[{curr, v}] = m[{v, curr}] = 11;
            } else {
                edge.second = 2;
                m[{curr, v}] = m[{v, curr}] = 2;
            }
            if (!dfs(v, curr, tree)) {
                return false;
            }
        }
    } else {
        if (tree[curr].size() > 2) {
            return false;
        }
        for (pii &edge : tree[curr]) {
            int v = edge.first;
            if (v != par) {
                int prev = m[{par, curr}];
                if (prev == 11) {
                    edge.second = 2;
                    m[{curr, v}] = m[{v, curr}] = 2;
                } else {
                    edge.second = 11;
                    m[{curr, v}] = m[{v, curr}] = 11;
                }
                if (!dfs(v, curr, tree)) {
                    return false;
                }
            }
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<vector<pii>> tree(n + 1);
    vector<pii> edges;
    for (int i = 1; i <= n - 1; i++) {
        int u, v;
        cin >> u >> v;
        edges.pb({u, v});
        tree[u].pb({v, 0});
        tree[v].pb({u, 0});
    }
    if (!dfs(1, 0, tree)) {
        cout << -1 << endl;
        return;
    }
    for (pii edge : edges) {
        cout << m[edge] << " ";
    }
    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

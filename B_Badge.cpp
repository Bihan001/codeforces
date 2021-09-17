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

bool dfs(int u, vector<vi> &graph, vector<bool> &visited, vi &res) {
    visited[u] = true;
    for (int v : graph[u]) {
        if (!visited[v]) {
            if (!dfs(v, graph, visited, res)) return false;
        } else {
            res.pb(v);
            return false;
        }
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vi arr(n);
    inputarr(arr, n);
    vector<vi> graph(n + 1);
    for (int i = 0; i < n; i++) {
        graph[i + 1].pb(arr[i]);
    }
    vi res;
    for (int i = 0; i < n; i++) {
        vector<bool> visited(n + 1, false);
        dfs(i + 1, graph, visited, res);
    }
    printarr(res, n);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

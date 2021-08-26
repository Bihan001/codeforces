// Author: Bihan Chakraborty
// Linkedin: https://www.linkedin.com/in/bihan-chakraborty
// Github: https://github.com/Bihan001

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pb push_back
#define mp make_pair
const int MOD = 1e9 + 7;
const ll INF = 1e18;
#define inputarr(arr, n) \
    for (ll i = 0; i < n; i++) cin >> arr[i];
#define printarr(arr, n) \
    for (ll i = 0; i < n; i++) cout << arr[i] << ' ';

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vi> graph(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        // Ignoring self loops
        if (u == v) continue;
        graph[u].pb(v);
        graph[v].pb(u);
    }
    vector<bool> visited(n + 1, false);
    vi order;
    priority_queue<int, vector<int>, greater<int>> pq;
    visited[1] = true;
    pq.push(1);
    while (!pq.empty()) {
        int curr = pq.top();
        pq.pop();
        order.pb(curr);
        for (int next : graph[curr]) {
            if (!visited[next]) {
                visited[next] = true;
                pq.push(next);
            }
        }
    }
    printarr(order, order.size());
    cout << endl;
}

int main() {
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

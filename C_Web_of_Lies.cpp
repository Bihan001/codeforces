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
    int alive = n;
    vi stronger(n, 0);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--, v--;
        if (u > v) swap(u, v);
        if (stronger[u] == 0) alive--;
        stronger[u]++;
    }
    int q;
    cin >> q;
    while (q--) {
        int opt;
        cin >> opt;
        if (opt == 1) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            if (u > v) swap(u, v);
            if (stronger[u] == 0) alive--;
            stronger[u]++;
        } else if (opt == 2) {
            int u, v;
            cin >> u >> v;
            u--, v--;
            if (u > v) swap(u, v);
            stronger[u]--;
            if (stronger[u] == 0) alive++;
        } else {
            cout << alive << endl;
        }
    }
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
